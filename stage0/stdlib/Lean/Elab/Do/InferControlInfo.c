// Lean compiler output
// Module: Lean.Elab.Do.InferControlInfo
// Imports: public import Lean.Elab.Term public import Lean.Elab.Do.ForwardSyntax meta import Lean.Parser.Do import Lean.Elab.Do.PatternVar
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_append(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Parser_Term_getDoElems(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_mkElabAttribute___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_getEntries___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Do_getLetPatDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getLetIdDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_Forward_matchApp_x3f(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_toList(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instInhabitedControlInfo;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_pure;
static lean_once_cell_t l_Lean_Elab_Do_ControlInfo_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlInfo_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_empty;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_sequence(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", reassigns: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__1;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofName, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = ", numRegularExits: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__4;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ",\n    noFallthrough: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__6;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ",\n    returnsEarly: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__10;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "breaks: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__11 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__12;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", continues: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__13 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__14;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "builtin_doElem_control_info"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 75, 74, 17, 172, 74, 138, 206)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "doElem_control_info"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 182, 102, 169, 76, 87, 55, 254)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doElem"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value),LEAN_SCALAR_PTR_LITERAL(208, 65, 144, 138, 55, 55, 217, 220)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ControlInfoHandler"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value),LEAN_SCALAR_PTR_LITERAL(18, 126, 127, 228, 104, 205, 61, 148)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "control info inference"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "controlInfoElemAttribute"};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 110, 218, 82, 47, 2, 10, 58)}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoElemAttribute;
static const lean_string_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 239, .m_capacity = 239, .m_length = 236, .m_data = "Registers a `ControlInfo` inference handler for the given `doElem` syntax node kind.\n\nA handler should have type `ControlInfoHandler` (i.e. `DoElem → TermElabM ControlInfo`).\nFor pure handlers, use `fun stx => return ControlInfo.pure`.\n"};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(121) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(129) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(128) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(128) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value;
static const lean_ctor_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 165, 255, 22, 123, 199, 70, 61)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprPat"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 152, 68, 102, 242, 224, 57, 35)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doForDecl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 147, 251, 147, 43, 72, 7, 132)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doBreak"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 48, 134, 252, 224, 171, 60, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doContinue"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value),LEAN_SCALAR_PTR_LITERAL(99, 212, 187, 103, 216, 35, 231, 189)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "No `ControlInfo` inference handler found for `"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "` in syntax "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "\nRegister a handler with `@[doElem_control_info "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]`."};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doHave"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value),LEAN_SCALAR_PTR_LITERAL(103, 74, 100, 51, 242, 214, 142, 115)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doLetRec"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value),LEAN_SCALAR_PTR_LITERAL(82, 47, 84, 182, 64, 225, 123, 219)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetElse"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value),LEAN_SCALAR_PTR_LITERAL(175, 153, 29, 134, 242, 228, 141, 99)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doPatDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 158, 71, 138, 110, 159, 158, 208)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Not a let or reassignment declaration: "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doErased"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value),LEAN_SCALAR_PTR_LITERAL(69, 69, 120, 16, 133, 86, 56, 26)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doReassign"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value),LEAN_SCALAR_PTR_LITERAL(31, 163, 103, 78, 29, 183, 93, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doReassignArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value),LEAN_SCALAR_PTR_LITERAL(24, 63, 28, 32, 90, 193, 231, 114)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "doIf"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value),LEAN_SCALAR_PTR_LITERAL(133, 56, 102, 181, 14, 156, 21, 0)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doUnless"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value),LEAN_SCALAR_PTR_LITERAL(231, 120, 137, 73, 40, 67, 249, 239)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doFor"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value),LEAN_SCALAR_PTR_LITERAL(164, 12, 178, 2, 144, 97, 71, 235)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doRepeat"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value),LEAN_SCALAR_PTR_LITERAL(27, 14, 140, 183, 155, 194, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doTry"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value),LEAN_SCALAR_PTR_LITERAL(183, 105, 89, 167, 131, 32, 5, 203)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doSkip"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "InternalSyntax"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value),LEAN_SCALAR_PTR_LITERAL(117, 4, 119, 3, 13, 160, 149, 47)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_3),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value),LEAN_SCALAR_PTR_LITERAL(125, 157, 182, 149, 109, 63, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doDbgTrace"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value),LEAN_SCALAR_PTR_LITERAL(34, 125, 157, 23, 122, 81, 121, 195)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doAssert"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value),LEAN_SCALAR_PTR_LITERAL(171, 15, 212, 125, 46, 208, 251, 33)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doDebugAssert"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value),LEAN_SCALAR_PTR_LITERAL(219, 254, 62, 12, 192, 208, 196, 20)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doAssertion"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value),LEAN_SCALAR_PTR_LITERAL(144, 179, 243, 245, 156, 230, 227, 142)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doMatchExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value),LEAN_SCALAR_PTR_LITERAL(72, 0, 49, 218, 206, 236, 229, 165)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value),LEAN_SCALAR_PTR_LITERAL(68, 239, 85, 151, 235, 111, 29, 229)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doLetMetaExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value),LEAN_SCALAR_PTR_LITERAL(231, 210, 172, 145, 91, 221, 30, 22)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "matchExprAlts"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value),LEAN_SCALAR_PTR_LITERAL(88, 158, 245, 158, 91, 207, 89, 187)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "matchExprElseAlt"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value),LEAN_SCALAR_PTR_LITERAL(249, 132, 98, 23, 98, 205, 167, 22)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doCatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 196, 191, 146, 79, 230, 20, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "doCatchMatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 106, 10, 98, 177, 11, 181, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Not a catch or catch match: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doFinally"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value),LEAN_SCALAR_PTR_LITERAL(94, 201, 209, 4, 148, 58, 33, 223)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doLoopDecreasing"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value),LEAN_SCALAR_PTR_LITERAL(0, 112, 64, 8, 91, 183, 41, 148)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doLoopInvariant"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value),LEAN_SCALAR_PTR_LITERAL(207, 155, 107, 150, 202, 64, 185, 181)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "generalizingParam"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value),LEAN_SCALAR_PTR_LITERAL(147, 206, 52, 232, 193, 222, 34, 109)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "dependentParam"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value),LEAN_SCALAR_PTR_LITERAL(78, 215, 202, 78, 135, 250, 138, 86)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "letIdDeclNoBinders"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value),LEAN_SCALAR_PTR_LITERAL(205, 0, 127, 82, 201, 96, 42, 5)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letPatDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value),LEAN_SCALAR_PTR_LITERAL(9, 25, 156, 50, 29, 105, 147, 239)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letRecDecls"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value),LEAN_SCALAR_PTR_LITERAL(103, 117, 148, 85, 88, 242, 214, 126)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letRecDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value),LEAN_SCALAR_PTR_LITERAL(202, 48, 93, 231, 206, 172, 150, 190)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; uint8_t v___x_3_; lean_object* v___x_4_; 
v___x_1_ = l_Lean_NameSet_empty;
v___x_2_ = lean_unsigned_to_nat(1u);
v___x_3_ = 0;
v___x_4_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_4_, 0, v___x_2_);
lean_ctor_set(v___x_4_, 1, v___x_1_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 1, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 2, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 3, v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo_default(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_Elab_Do_instInhabitedControlInfo_default;
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_pure(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_empty___closed__0(void){
_start:
{
lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; lean_object* v___x_12_; 
v___x_8_ = l_Lean_NameSet_empty;
v___x_9_ = 1;
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = 0;
v___x_12_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_12_, 0, v___x_10_);
lean_ctor_set(v___x_12_, 1, v___x_8_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 1, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 2, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 3, v___x_9_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_empty(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Elab_Do_ControlInfo_empty___closed__0, &l_Lean_Elab_Do_ControlInfo_empty___closed__0_once, _init_l_Lean_Elab_Do_ControlInfo_empty___closed__0);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_sequence(lean_object* v_a_14_, lean_object* v_b_15_){
_start:
{
uint8_t v_breaks_16_; uint8_t v_continues_17_; uint8_t v_returnsEarly_18_; uint8_t v_noFallthrough_19_; lean_object* v_reassigns_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_52_; 
v_breaks_16_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2);
v_continues_17_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 1);
v_returnsEarly_18_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 2);
v_noFallthrough_19_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 3);
v_reassigns_20_ = lean_ctor_get(v_a_14_, 1);
v_isSharedCheck_52_ = !lean_is_exclusive(v_a_14_);
if (v_isSharedCheck_52_ == 0)
{
lean_object* v_unused_53_; 
v_unused_53_ = lean_ctor_get(v_a_14_, 0);
lean_dec(v_unused_53_);
v___x_22_ = v_a_14_;
v_isShared_23_ = v_isSharedCheck_52_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_reassigns_20_);
lean_dec(v_a_14_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_52_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
uint8_t v___y_25_; lean_object* v___y_26_; lean_object* v___y_27_; uint8_t v___y_28_; uint8_t v___y_29_; uint8_t v___y_30_; uint8_t v___y_36_; uint8_t v___y_37_; uint8_t v___y_38_; uint8_t v___y_45_; uint8_t v___y_46_; uint8_t v___y_49_; 
if (v_breaks_16_ == 0)
{
uint8_t v_breaks_51_; 
v_breaks_51_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2);
v___y_49_ = v_breaks_51_;
goto v___jp_48_;
}
else
{
v___y_49_ = v_breaks_16_;
goto v___jp_48_;
}
v___jp_24_:
{
lean_object* v___x_31_; lean_object* v___x_33_; 
v___x_31_ = l_Lean_NameSet_append(v_reassigns_20_, v___y_26_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v___x_31_);
lean_ctor_set(v___x_22_, 0, v___y_27_);
v___x_33_ = v___x_22_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v___y_27_);
lean_ctor_set(v_reuseFailAlloc_34_, 1, v___x_31_);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2, v___y_29_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 1, v___y_25_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 2, v___y_28_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 3, v___y_30_);
return v___x_33_;
}
}
v___jp_35_:
{
if (v_noFallthrough_19_ == 0)
{
lean_object* v_numRegularExits_39_; uint8_t v_noFallthrough_40_; lean_object* v_reassigns_41_; 
v_numRegularExits_39_ = lean_ctor_get(v_b_15_, 0);
lean_inc(v_numRegularExits_39_);
v_noFallthrough_40_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 3);
v_reassigns_41_ = lean_ctor_get(v_b_15_, 1);
lean_inc(v_reassigns_41_);
lean_dec_ref(v_b_15_);
v___y_25_ = v___y_36_;
v___y_26_ = v_reassigns_41_;
v___y_27_ = v_numRegularExits_39_;
v___y_28_ = v___y_38_;
v___y_29_ = v___y_37_;
v___y_30_ = v_noFallthrough_40_;
goto v___jp_24_;
}
else
{
lean_object* v_numRegularExits_42_; lean_object* v_reassigns_43_; 
v_numRegularExits_42_ = lean_ctor_get(v_b_15_, 0);
lean_inc(v_numRegularExits_42_);
v_reassigns_43_ = lean_ctor_get(v_b_15_, 1);
lean_inc(v_reassigns_43_);
lean_dec_ref(v_b_15_);
v___y_25_ = v___y_36_;
v___y_26_ = v_reassigns_43_;
v___y_27_ = v_numRegularExits_42_;
v___y_28_ = v___y_38_;
v___y_29_ = v___y_37_;
v___y_30_ = v_noFallthrough_19_;
goto v___jp_24_;
}
}
v___jp_44_:
{
if (v_returnsEarly_18_ == 0)
{
uint8_t v_returnsEarly_47_; 
v_returnsEarly_47_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 2);
v___y_36_ = v___y_46_;
v___y_37_ = v___y_45_;
v___y_38_ = v_returnsEarly_47_;
goto v___jp_35_;
}
else
{
v___y_36_ = v___y_46_;
v___y_37_ = v___y_45_;
v___y_38_ = v_returnsEarly_18_;
goto v___jp_35_;
}
}
v___jp_48_:
{
if (v_continues_17_ == 0)
{
uint8_t v_continues_50_; 
v_continues_50_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 1);
v___y_45_ = v___y_49_;
v___y_46_ = v_continues_50_;
goto v___jp_44_;
}
else
{
v___y_45_ = v___y_49_;
v___y_46_ = v_continues_17_;
goto v___jp_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object* v_a_54_, lean_object* v_b_55_){
_start:
{
lean_object* v___y_57_; lean_object* v___y_58_; uint8_t v___y_59_; uint8_t v___y_60_; lean_object* v___y_61_; uint8_t v___y_62_; uint8_t v___y_63_; uint8_t v_breaks_66_; uint8_t v_continues_67_; uint8_t v_returnsEarly_68_; lean_object* v_numRegularExits_69_; uint8_t v_noFallthrough_70_; lean_object* v_reassigns_71_; uint8_t v___y_73_; uint8_t v___y_74_; uint8_t v___y_75_; uint8_t v___y_81_; uint8_t v___y_82_; uint8_t v___y_85_; 
v_breaks_66_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2);
v_continues_67_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 1);
v_returnsEarly_68_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 2);
v_numRegularExits_69_ = lean_ctor_get(v_a_54_, 0);
lean_inc(v_numRegularExits_69_);
v_noFallthrough_70_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 3);
v_reassigns_71_ = lean_ctor_get(v_a_54_, 1);
lean_inc(v_reassigns_71_);
lean_dec_ref(v_a_54_);
if (v_breaks_66_ == 0)
{
uint8_t v_breaks_87_; 
v_breaks_87_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2);
v___y_85_ = v_breaks_87_;
goto v___jp_84_;
}
else
{
v___y_85_ = v_breaks_66_;
goto v___jp_84_;
}
v___jp_56_:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = l_Lean_NameSet_append(v___y_61_, v___y_57_);
v___x_65_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_65_, 0, v___y_58_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2, v___y_59_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 1, v___y_62_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 2, v___y_60_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 3, v___y_63_);
return v___x_65_;
}
v___jp_72_:
{
lean_object* v_numRegularExits_76_; uint8_t v_noFallthrough_77_; lean_object* v_reassigns_78_; lean_object* v___x_79_; 
v_numRegularExits_76_ = lean_ctor_get(v_b_55_, 0);
lean_inc(v_numRegularExits_76_);
v_noFallthrough_77_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 3);
v_reassigns_78_ = lean_ctor_get(v_b_55_, 1);
lean_inc(v_reassigns_78_);
lean_dec_ref(v_b_55_);
v___x_79_ = lean_nat_add(v_numRegularExits_69_, v_numRegularExits_76_);
lean_dec(v_numRegularExits_76_);
lean_dec(v_numRegularExits_69_);
if (v_noFallthrough_70_ == 0)
{
v___y_57_ = v_reassigns_78_;
v___y_58_ = v___x_79_;
v___y_59_ = v___y_73_;
v___y_60_ = v___y_75_;
v___y_61_ = v_reassigns_71_;
v___y_62_ = v___y_74_;
v___y_63_ = v_noFallthrough_70_;
goto v___jp_56_;
}
else
{
v___y_57_ = v_reassigns_78_;
v___y_58_ = v___x_79_;
v___y_59_ = v___y_73_;
v___y_60_ = v___y_75_;
v___y_61_ = v_reassigns_71_;
v___y_62_ = v___y_74_;
v___y_63_ = v_noFallthrough_77_;
goto v___jp_56_;
}
}
v___jp_80_:
{
if (v_returnsEarly_68_ == 0)
{
uint8_t v_returnsEarly_83_; 
v_returnsEarly_83_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 2);
v___y_73_ = v___y_81_;
v___y_74_ = v___y_82_;
v___y_75_ = v_returnsEarly_83_;
goto v___jp_72_;
}
else
{
v___y_73_ = v___y_81_;
v___y_74_ = v___y_82_;
v___y_75_ = v_returnsEarly_68_;
goto v___jp_72_;
}
}
v___jp_84_:
{
if (v_continues_67_ == 0)
{
uint8_t v_continues_86_; 
v_continues_86_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 1);
v___y_81_ = v___y_85_;
v___y_82_ = v_continues_86_;
goto v___jp_80_;
}
else
{
v___y_81_ = v___y_85_;
v___y_82_ = v_continues_67_;
goto v___jp_80_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__1(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__0));
v___x_90_ = l_Lean_stringToMessageData(v___x_89_);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__4(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__3));
v___x_94_ = l_Lean_stringToMessageData(v___x_93_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__6(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__5));
v___x_97_ = l_Lean_stringToMessageData(v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__10(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__9));
v___x_102_ = l_Lean_stringToMessageData(v___x_101_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__12(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__11));
v___x_105_ = l_Lean_stringToMessageData(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__14(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__13));
v___x_108_ = l_Lean_stringToMessageData(v___x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0(lean_object* v_info_109_){
_start:
{
lean_object* v___y_111_; lean_object* v___y_112_; lean_object* v___y_113_; uint8_t v_breaks_125_; uint8_t v_continues_126_; uint8_t v_returnsEarly_127_; lean_object* v_numRegularExits_128_; uint8_t v_noFallthrough_129_; lean_object* v_reassigns_130_; lean_object* v___y_132_; lean_object* v___y_133_; lean_object* v___y_148_; lean_object* v___y_149_; lean_object* v___x_157_; lean_object* v___y_159_; 
v_breaks_125_ = lean_ctor_get_uint8(v_info_109_, sizeof(void*)*2);
v_continues_126_ = lean_ctor_get_uint8(v_info_109_, sizeof(void*)*2 + 1);
v_returnsEarly_127_ = lean_ctor_get_uint8(v_info_109_, sizeof(void*)*2 + 2);
v_numRegularExits_128_ = lean_ctor_get(v_info_109_, 0);
lean_inc(v_numRegularExits_128_);
v_noFallthrough_129_ = lean_ctor_get_uint8(v_info_109_, sizeof(void*)*2 + 3);
v_reassigns_130_ = lean_ctor_get(v_info_109_, 1);
lean_inc(v_reassigns_130_);
lean_dec_ref(v_info_109_);
v___x_157_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__12, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__12_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__12);
if (v_breaks_125_ == 0)
{
lean_object* v___x_167_; 
v___x_167_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__7));
v___y_159_ = v___x_167_;
goto v___jp_158_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__8));
v___y_159_ = v___x_168_;
goto v___jp_158_;
}
v___jp_110_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
lean_inc_ref(v___y_113_);
v___x_114_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_114_, 0, v___y_113_);
v___x_115_ = l_Lean_MessageData_ofFormat(v___x_114_);
v___x_116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_116_, 0, v___y_112_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__1, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__1_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__1);
v___x_118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = l_Lean_NameSet_toList(v___y_111_);
lean_dec(v___y_111_);
v___x_120_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__2));
v___x_121_ = lean_box(0);
v___x_122_ = l_List_mapTR_loop___redArg(v___x_120_, v___x_119_, v___x_121_);
v___x_123_ = l_Lean_MessageData_ofList(v___x_122_);
v___x_124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_118_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
return v___x_124_;
}
v___jp_131_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
lean_inc_ref(v___y_133_);
v___x_134_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_134_, 0, v___y_133_);
v___x_135_ = l_Lean_MessageData_ofFormat(v___x_134_);
v___x_136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_136_, 0, v___y_132_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__4, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__4_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__4);
v___x_138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_136_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = l_Nat_reprFast(v_numRegularExits_128_);
v___x_140_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
v___x_141_ = l_Lean_MessageData_ofFormat(v___x_140_);
v___x_142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_138_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__6, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__6_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__6);
v___x_144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_142_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
if (v_noFallthrough_129_ == 0)
{
lean_object* v___x_145_; 
v___x_145_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__7));
v___y_111_ = v_reassigns_130_;
v___y_112_ = v___x_144_;
v___y_113_ = v___x_145_;
goto v___jp_110_;
}
else
{
lean_object* v___x_146_; 
v___x_146_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__8));
v___y_111_ = v_reassigns_130_;
v___y_112_ = v___x_144_;
v___y_113_ = v___x_146_;
goto v___jp_110_;
}
}
v___jp_147_:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
lean_inc_ref(v___y_149_);
v___x_150_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_150_, 0, v___y_149_);
v___x_151_ = l_Lean_MessageData_ofFormat(v___x_150_);
v___x_152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_152_, 0, v___y_148_);
lean_ctor_set(v___x_152_, 1, v___x_151_);
v___x_153_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__10, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__10_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__10);
v___x_154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_152_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
if (v_returnsEarly_127_ == 0)
{
lean_object* v___x_155_; 
v___x_155_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__7));
v___y_132_ = v___x_154_;
v___y_133_ = v___x_155_;
goto v___jp_131_;
}
else
{
lean_object* v___x_156_; 
v___x_156_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__8));
v___y_132_ = v___x_154_;
v___y_133_ = v___x_156_;
goto v___jp_131_;
}
}
v___jp_158_:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
lean_inc_ref(v___y_159_);
v___x_160_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_160_, 0, v___y_159_);
v___x_161_ = l_Lean_MessageData_ofFormat(v___x_160_);
v___x_162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_157_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__14, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__14_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__14);
v___x_164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
if (v_continues_126_ == 0)
{
lean_object* v___x_165_; 
v___x_165_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__7));
v___y_148_ = v___x_164_;
v___y_149_ = v___x_165_;
goto v___jp_147_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0___closed__8));
v___y_148_ = v___x_164_;
v___y_149_ = v___x_166_;
goto v___jp_147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(lean_object* v_ref_195_){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_197_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1));
v___x_198_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3));
v___x_199_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8));
v___x_200_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12));
v___x_201_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13));
v___x_202_ = l_Lean_Elab_mkElabAttribute___redArg(v___x_197_, v___x_198_, v___x_199_, v___x_200_, v___x_201_, v_ref_195_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___boxed(lean_object* v_ref_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(v_ref_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_214_ = l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(v___x_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2____boxed(lean_object* v_a_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1(){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_219_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_220_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0));
v___x_221_ = l_Lean_addBuiltinDocString(v___x_219_, v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___boxed(lean_object* v_a_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3(){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_250_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_251_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6));
v___x_252_ = l_Lean_addBuiltinDeclarationRanges(v___x_250_, v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___boxed(lean_object* v_a_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(lean_object* v_msgData_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
lean_object* v___x_261_; lean_object* v_env_262_; lean_object* v___x_263_; lean_object* v_toCold_264_; lean_object* v_mctx_265_; lean_object* v_lctx_266_; lean_object* v_options_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_261_ = lean_st_ref_get(v___y_259_);
v_env_262_ = lean_ctor_get(v___x_261_, 0);
lean_inc_ref(v_env_262_);
lean_dec(v___x_261_);
v___x_263_ = lean_st_ref_get(v___y_257_);
v_toCold_264_ = lean_ctor_get(v___y_258_, 0);
v_mctx_265_ = lean_ctor_get(v___x_263_, 0);
lean_inc_ref(v_mctx_265_);
lean_dec(v___x_263_);
v_lctx_266_ = lean_ctor_get(v___y_256_, 2);
v_options_267_ = lean_ctor_get(v_toCold_264_, 2);
lean_inc_ref(v_options_267_);
lean_inc_ref(v_lctx_266_);
v___x_268_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_268_, 0, v_env_262_);
lean_ctor_set(v___x_268_, 1, v_mctx_265_);
lean_ctor_set(v___x_268_, 2, v_lctx_266_);
lean_ctor_set(v___x_268_, 3, v_options_267_);
v___x_269_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v_msgData_255_);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10___boxed(lean_object* v_msgData_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msgData_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
return v_res_277_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_box(1);
v___x_279_ = l_Lean_MessageData_ofFormat(v___x_278_);
return v___x_279_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2));
v___x_284_ = l_Lean_MessageData_ofFormat(v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(lean_object* v_x_285_, lean_object* v_x_286_){
_start:
{
if (lean_obj_tag(v_x_286_) == 0)
{
return v_x_285_;
}
else
{
lean_object* v_head_287_; lean_object* v_tail_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_310_; 
v_head_287_ = lean_ctor_get(v_x_286_, 0);
v_tail_288_ = lean_ctor_get(v_x_286_, 1);
v_isSharedCheck_310_ = !lean_is_exclusive(v_x_286_);
if (v_isSharedCheck_310_ == 0)
{
v___x_290_ = v_x_286_;
v_isShared_291_ = v_isSharedCheck_310_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_tail_288_);
lean_inc(v_head_287_);
lean_dec(v_x_286_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_310_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v_before_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_308_; 
v_before_292_ = lean_ctor_get(v_head_287_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v_head_287_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; 
v_unused_309_ = lean_ctor_get(v_head_287_, 1);
lean_dec(v_unused_309_);
v___x_294_ = v_head_287_;
v_isShared_295_ = v_isSharedCheck_308_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_before_292_);
lean_dec(v_head_287_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_308_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_296_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0);
if (v_isShared_295_ == 0)
{
lean_ctor_set_tag(v___x_294_, 7);
lean_ctor_set(v___x_294_, 1, v___x_296_);
lean_ctor_set(v___x_294_, 0, v_x_285_);
v___x_298_ = v___x_294_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_x_285_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v___x_296_);
v___x_298_ = v_reuseFailAlloc_307_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3);
if (v_isShared_291_ == 0)
{
lean_ctor_set_tag(v___x_290_, 7);
lean_ctor_set(v___x_290_, 1, v___x_299_);
lean_ctor_set(v___x_290_, 0, v___x_298_);
v___x_301_ = v___x_290_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_298_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v___x_299_);
v___x_301_ = v_reuseFailAlloc_306_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = l_Lean_MessageData_ofSyntax(v_before_292_);
v___x_303_ = l_Lean_indentD(v___x_302_);
v___x_304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_301_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v_x_285_ = v___x_304_;
v_x_286_ = v_tail_288_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(lean_object* v_opts_311_, lean_object* v_opt_312_){
_start:
{
lean_object* v_name_313_; lean_object* v_defValue_314_; lean_object* v_map_315_; lean_object* v___x_316_; 
v_name_313_ = lean_ctor_get(v_opt_312_, 0);
v_defValue_314_ = lean_ctor_get(v_opt_312_, 1);
v_map_315_ = lean_ctor_get(v_opts_311_, 0);
v___x_316_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_315_, v_name_313_);
if (lean_obj_tag(v___x_316_) == 0)
{
uint8_t v___x_317_; 
v___x_317_ = lean_unbox(v_defValue_314_);
return v___x_317_;
}
else
{
lean_object* v_val_318_; 
v_val_318_ = lean_ctor_get(v___x_316_, 0);
lean_inc(v_val_318_);
lean_dec_ref_known(v___x_316_, 1);
if (lean_obj_tag(v_val_318_) == 1)
{
uint8_t v_v_319_; 
v_v_319_ = lean_ctor_get_uint8(v_val_318_, 0);
lean_dec_ref_known(v_val_318_, 0);
return v_v_319_;
}
else
{
uint8_t v___x_320_; 
lean_dec(v_val_318_);
v___x_320_ = lean_unbox(v_defValue_314_);
return v___x_320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19___boxed(lean_object* v_opts_321_, lean_object* v_opt_322_){
_start:
{
uint8_t v_res_323_; lean_object* v_r_324_; 
v_res_323_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(v_opts_321_, v_opt_322_);
lean_dec_ref(v_opt_322_);
lean_dec_ref(v_opts_321_);
v_r_324_ = lean_box(v_res_323_);
return v_r_324_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1));
v___x_329_ = l_Lean_MessageData_ofFormat(v___x_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(lean_object* v_msgData_330_, lean_object* v_macroStack_331_, lean_object* v___y_332_){
_start:
{
lean_object* v_toCold_334_; lean_object* v_options_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v_toCold_334_ = lean_ctor_get(v___y_332_, 0);
v_options_335_ = lean_ctor_get(v_toCold_334_, 2);
v___x_336_ = l_Lean_Elab_pp_macroStack;
v___x_337_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(v_options_335_, v___x_336_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; 
lean_dec(v_macroStack_331_);
v___x_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_338_, 0, v_msgData_330_);
return v___x_338_;
}
else
{
if (lean_obj_tag(v_macroStack_331_) == 0)
{
lean_object* v___x_339_; 
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v_msgData_330_);
return v___x_339_;
}
else
{
lean_object* v_head_340_; lean_object* v_after_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_356_; 
v_head_340_ = lean_ctor_get(v_macroStack_331_, 0);
lean_inc(v_head_340_);
v_after_341_ = lean_ctor_get(v_head_340_, 1);
v_isSharedCheck_356_ = !lean_is_exclusive(v_head_340_);
if (v_isSharedCheck_356_ == 0)
{
lean_object* v_unused_357_; 
v_unused_357_ = lean_ctor_get(v_head_340_, 0);
lean_dec(v_unused_357_);
v___x_343_ = v_head_340_;
v_isShared_344_ = v_isSharedCheck_356_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_after_341_);
lean_dec(v_head_340_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_356_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_345_; lean_object* v___x_347_; 
v___x_345_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0);
if (v_isShared_344_ == 0)
{
lean_ctor_set_tag(v___x_343_, 7);
lean_ctor_set(v___x_343_, 1, v___x_345_);
lean_ctor_set(v___x_343_, 0, v_msgData_330_);
v___x_347_ = v___x_343_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v_msgData_330_);
lean_ctor_set(v_reuseFailAlloc_355_, 1, v___x_345_);
v___x_347_ = v_reuseFailAlloc_355_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v_msgData_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_348_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2);
v___x_349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_347_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
v___x_350_ = l_Lean_MessageData_ofSyntax(v_after_341_);
v___x_351_ = l_Lean_indentD(v___x_350_);
v_msgData_352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_352_, 0, v___x_349_);
lean_ctor_set(v_msgData_352_, 1, v___x_351_);
v___x_353_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(v_msgData_352_, v_macroStack_331_);
v___x_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
return v___x_354_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___boxed(lean_object* v_msgData_358_, lean_object* v_macroStack_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_msgData_358_, v_macroStack_359_, v___y_360_);
lean_dec_ref(v___y_360_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(lean_object* v_msg_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v_ref_371_; lean_object* v_macroStack_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v_a_375_; lean_object* v___x_376_; lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_385_; 
v_ref_371_ = lean_ctor_get(v___y_368_, 2);
v_macroStack_372_ = lean_ctor_get(v___y_364_, 1);
v___x_373_ = l_Lean_Elab_getBetterRef(v_ref_371_, v_macroStack_372_);
v___x_374_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msg_363_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
v_a_375_ = lean_ctor_get(v___x_374_, 0);
lean_inc(v_a_375_);
lean_dec_ref(v___x_374_);
lean_inc(v_macroStack_372_);
v___x_376_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_a_375_, v_macroStack_372_, v___y_368_);
v_a_377_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_385_ == 0)
{
v___x_379_ = v___x_376_;
v_isShared_380_ = v_isSharedCheck_385_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_376_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_385_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_373_);
lean_ctor_set(v___x_381_, 1, v_a_377_);
if (v_isShared_380_ == 0)
{
lean_ctor_set_tag(v___x_379_, 1);
lean_ctor_set(v___x_379_, 0, v___x_381_);
v___x_383_ = v___x_379_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___boxed(lean_object* v_msg_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(lean_object* v_as_395_, size_t v_i_396_, size_t v_stop_397_, lean_object* v_b_398_){
_start:
{
uint8_t v___x_399_; 
v___x_399_ = lean_usize_dec_eq(v_i_396_, v_stop_397_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; lean_object* v___x_401_; size_t v___x_402_; size_t v___x_403_; 
v___x_400_ = lean_array_uget_borrowed(v_as_395_, v_i_396_);
lean_inc(v___x_400_);
v___x_401_ = l_Lean_NameSet_insert(v_b_398_, v___x_400_);
v___x_402_ = ((size_t)1ULL);
v___x_403_ = lean_usize_add(v_i_396_, v___x_402_);
v_i_396_ = v___x_403_;
v_b_398_ = v___x_401_;
goto _start;
}
else
{
return v_b_398_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21___boxed(lean_object* v_as_405_, lean_object* v_i_406_, lean_object* v_stop_407_, lean_object* v_b_408_){
_start:
{
size_t v_i_boxed_409_; size_t v_stop_boxed_410_; lean_object* v_res_411_; 
v_i_boxed_409_ = lean_unbox_usize(v_i_406_);
lean_dec(v_i_406_);
v_stop_boxed_410_ = lean_unbox_usize(v_stop_407_);
lean_dec(v_stop_407_);
v_res_411_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(v_as_405_, v_i_boxed_409_, v_stop_boxed_410_, v_b_408_);
lean_dec_ref(v_as_405_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(size_t v_sz_412_, size_t v_i_413_, lean_object* v_bs_414_){
_start:
{
uint8_t v___x_415_; 
v___x_415_ = lean_usize_dec_lt(v_i_413_, v_sz_412_);
if (v___x_415_ == 0)
{
return v_bs_414_;
}
else
{
lean_object* v_v_416_; lean_object* v___x_417_; lean_object* v_bs_x27_418_; lean_object* v___x_419_; size_t v___x_420_; size_t v___x_421_; lean_object* v___x_422_; 
v_v_416_ = lean_array_uget(v_bs_414_, v_i_413_);
v___x_417_ = lean_unsigned_to_nat(0u);
v_bs_x27_418_ = lean_array_uset(v_bs_414_, v_i_413_, v___x_417_);
v___x_419_ = l_Lean_TSyntax_getId(v_v_416_);
lean_dec(v_v_416_);
v___x_420_ = ((size_t)1ULL);
v___x_421_ = lean_usize_add(v_i_413_, v___x_420_);
v___x_422_ = lean_array_uset(v_bs_x27_418_, v_i_413_, v___x_419_);
v_i_413_ = v___x_421_;
v_bs_414_ = v___x_422_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20___boxed(lean_object* v_sz_424_, lean_object* v_i_425_, lean_object* v_bs_426_){
_start:
{
size_t v_sz_boxed_427_; size_t v_i_boxed_428_; lean_object* v_res_429_; 
v_sz_boxed_427_ = lean_unbox_usize(v_sz_424_);
lean_dec(v_sz_424_);
v_i_boxed_428_ = lean_unbox_usize(v_i_425_);
lean_dec(v_i_425_);
v_res_429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(v_sz_boxed_427_, v_i_boxed_428_, v_bs_426_);
return v_res_429_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_430_ = lean_box(0);
v___x_431_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
lean_ctor_set(v___x_432_, 1, v___x_430_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg(){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0);
v___x_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___boxed(lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(size_t v_sz_438_, size_t v_i_439_, lean_object* v_bs_440_){
_start:
{
uint8_t v___x_441_; 
v___x_441_ = lean_usize_dec_lt(v_i_439_, v_sz_438_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; 
v___x_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_442_, 0, v_bs_440_);
return v___x_442_;
}
else
{
lean_object* v___x_443_; lean_object* v_bs_x27_444_; lean_object* v___x_445_; size_t v___x_446_; size_t v___x_447_; lean_object* v___x_448_; 
v___x_443_ = lean_unsigned_to_nat(0u);
v_bs_x27_444_ = lean_array_uset(v_bs_440_, v_i_439_, v___x_443_);
v___x_445_ = lean_box(0);
v___x_446_ = ((size_t)1ULL);
v___x_447_ = lean_usize_add(v_i_439_, v___x_446_);
v___x_448_ = lean_array_uset(v_bs_x27_444_, v_i_439_, v___x_445_);
v_i_439_ = v___x_447_;
v_bs_440_ = v___x_448_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___boxed(lean_object* v_sz_450_, lean_object* v_i_451_, lean_object* v_bs_452_){
_start:
{
size_t v_sz_boxed_453_; size_t v_i_boxed_454_; lean_object* v_res_455_; 
v_sz_boxed_453_ = lean_unbox_usize(v_sz_450_);
lean_dec(v_sz_450_);
v_i_boxed_454_ = lean_unbox_usize(v_i_451_);
lean_dec(v_i_451_);
v_res_455_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_boxed_453_, v_i_boxed_454_, v_bs_452_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(uint8_t v___x_456_, uint8_t v___x_457_, lean_object* v_as_458_, size_t v_i_459_, size_t v_stop_460_, lean_object* v_b_461_){
_start:
{
lean_object* v___y_463_; uint8_t v___x_467_; 
v___x_467_ = lean_usize_dec_eq(v_i_459_, v_stop_460_);
if (v___x_467_ == 0)
{
lean_object* v_fst_468_; uint8_t v___x_469_; 
v_fst_468_ = lean_ctor_get(v_b_461_, 0);
v___x_469_ = lean_unbox(v_fst_468_);
if (v___x_469_ == 0)
{
lean_object* v_snd_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_478_; 
v_snd_470_ = lean_ctor_get(v_b_461_, 1);
v_isSharedCheck_478_ = !lean_is_exclusive(v_b_461_);
if (v_isSharedCheck_478_ == 0)
{
lean_object* v_unused_479_; 
v_unused_479_ = lean_ctor_get(v_b_461_, 0);
lean_dec(v_unused_479_);
v___x_472_ = v_b_461_;
v_isShared_473_ = v_isSharedCheck_478_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_snd_470_);
lean_dec(v_b_461_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_478_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_474_ = lean_box(v___x_456_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 0, v___x_474_);
v___x_476_ = v___x_472_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_477_, 1, v_snd_470_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
v___y_463_ = v___x_476_;
goto v___jp_462_;
}
}
}
else
{
lean_object* v_snd_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_490_; 
v_snd_480_ = lean_ctor_get(v_b_461_, 1);
v_isSharedCheck_490_ = !lean_is_exclusive(v_b_461_);
if (v_isSharedCheck_490_ == 0)
{
lean_object* v_unused_491_; 
v_unused_491_ = lean_ctor_get(v_b_461_, 0);
lean_dec(v_unused_491_);
v___x_482_ = v_b_461_;
v_isShared_483_ = v_isSharedCheck_490_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_snd_480_);
lean_dec(v_b_461_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_490_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_488_; 
v___x_484_ = lean_array_uget_borrowed(v_as_458_, v_i_459_);
lean_inc(v___x_484_);
v___x_485_ = lean_array_push(v_snd_480_, v___x_484_);
v___x_486_ = lean_box(v___x_457_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 1, v___x_485_);
lean_ctor_set(v___x_482_, 0, v___x_486_);
v___x_488_ = v___x_482_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v___x_485_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
v___y_463_ = v___x_488_;
goto v___jp_462_;
}
}
}
}
else
{
return v_b_461_;
}
v___jp_462_:
{
size_t v___x_464_; size_t v___x_465_; 
v___x_464_ = ((size_t)1ULL);
v___x_465_ = lean_usize_add(v_i_459_, v___x_464_);
v_i_459_ = v___x_465_;
v_b_461_ = v___y_463_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9___boxed(lean_object* v___x_492_, lean_object* v___x_493_, lean_object* v_as_494_, lean_object* v_i_495_, lean_object* v_stop_496_, lean_object* v_b_497_){
_start:
{
uint8_t v___x_166788__boxed_498_; uint8_t v___x_166789__boxed_499_; size_t v_i_boxed_500_; size_t v_stop_boxed_501_; lean_object* v_res_502_; 
v___x_166788__boxed_498_ = lean_unbox(v___x_492_);
v___x_166789__boxed_499_ = lean_unbox(v___x_493_);
v_i_boxed_500_ = lean_unbox_usize(v_i_495_);
lean_dec(v_i_495_);
v_stop_boxed_501_ = lean_unbox_usize(v_stop_496_);
lean_dec(v_stop_496_);
v_res_502_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_166788__boxed_498_, v___x_166789__boxed_499_, v_as_494_, v_i_boxed_500_, v_stop_boxed_501_, v_b_497_);
lean_dec_ref(v_as_494_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(lean_object* v_env_503_, lean_object* v_declName_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
uint8_t v___x_507_; lean_object* v_env_508_; lean_object* v___x_509_; uint8_t v___x_510_; uint8_t v___x_511_; 
v___x_507_ = 0;
v_env_508_ = l_Lean_Environment_setExporting(v_env_503_, v___x_507_);
lean_inc(v_declName_504_);
v___x_509_ = l_Lean_mkPrivateName(v_env_508_, v_declName_504_);
v___x_510_ = 1;
lean_inc_ref(v_env_508_);
v___x_511_ = l_Lean_Environment_contains(v_env_508_, v___x_509_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; uint8_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_512_ = l_Lean_privateToUserName(v_declName_504_);
v___x_513_ = l_Lean_Environment_contains(v_env_508_, v___x_512_, v___x_510_);
v___x_514_ = lean_box(v___x_513_);
v___x_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
lean_ctor_set(v___x_515_, 1, v___y_506_);
return v___x_515_;
}
else
{
lean_object* v___x_516_; lean_object* v___x_517_; 
lean_dec_ref(v_env_508_);
lean_dec(v_declName_504_);
v___x_516_ = lean_box(v___x_511_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v___y_506_);
return v___x_517_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed(lean_object* v_env_518_, lean_object* v_declName_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(v_env_518_, v_declName_519_, v___y_520_, v___y_521_);
lean_dec_ref(v___y_520_);
return v_res_522_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = l_Lean_maxRecDepthErrorMessage;
v___x_529_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3);
v___x_531_ = l_Lean_MessageData_ofFormat(v___x_530_);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_532_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4);
v___x_533_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2));
v___x_534_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
lean_ctor_set(v___x_534_, 1, v___x_532_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(lean_object* v_ref_535_){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5);
v___x_538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_538_, 0, v_ref_535_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___boxed(lean_object* v_ref_540_, lean_object* v___y_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_ref_540_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(lean_object* v_x_543_, lean_object* v___y_544_){
_start:
{
if (lean_obj_tag(v_x_543_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_546_; 
v_a_545_ = lean_ctor_get(v_x_543_, 0);
lean_inc(v_a_545_);
v___x_546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_546_, 0, v_a_545_);
lean_ctor_set(v___x_546_, 1, v___y_544_);
return v___x_546_;
}
else
{
lean_object* v_a_547_; lean_object* v___x_548_; 
v_a_547_ = lean_ctor_get(v_x_543_, 0);
lean_inc(v_a_547_);
v___x_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_548_, 0, v_a_547_);
lean_ctor_set(v___x_548_, 1, v___y_544_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___boxed(lean_object* v_x_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v_x_549_, v___y_550_);
lean_dec_ref(v_x_549_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(lean_object* v_env_552_, lean_object* v_stx_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_552_, v_stx_553_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_a_557_);
if (lean_obj_tag(v_a_557_) == 0)
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_566_; 
v_a_558_ = lean_ctor_get(v___x_556_, 1);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_566_ == 0)
{
lean_object* v_unused_567_; 
v_unused_567_ = lean_ctor_get(v___x_556_, 0);
lean_dec(v_unused_567_);
v___x_560_ = v___x_556_;
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_556_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_562_; lean_object* v___x_564_; 
v___x_562_ = lean_box(0);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_562_);
v___x_564_ = v___x_560_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_a_558_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
else
{
lean_object* v_val_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_596_; 
v_val_568_ = lean_ctor_get(v_a_557_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v_a_557_);
if (v_isSharedCheck_596_ == 0)
{
v___x_570_ = v_a_557_;
v_isShared_571_ = v_isSharedCheck_596_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_val_568_);
lean_dec(v_a_557_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_596_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v_snd_572_; 
v_snd_572_ = lean_ctor_get(v_val_568_, 1);
lean_inc(v_snd_572_);
lean_dec(v_val_568_);
if (lean_obj_tag(v_snd_572_) == 0)
{
lean_object* v_a_573_; lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_582_; 
lean_del_object(v___x_570_);
v_a_573_ = lean_ctor_get(v___x_556_, 1);
lean_inc(v_a_573_);
lean_dec_ref_known(v___x_556_, 2);
v_a_574_ = lean_ctor_get(v_snd_572_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v_snd_572_);
if (v_isSharedCheck_582_ == 0)
{
v___x_576_ = v_snd_572_;
v_isShared_577_ = v_isSharedCheck_582_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v_snd_572_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_582_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_574_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; 
v___x_580_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v___x_579_, v_a_573_);
lean_dec_ref(v___x_579_);
return v___x_580_;
}
}
}
else
{
lean_object* v_a_583_; lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_595_; 
v_a_583_ = lean_ctor_get(v___x_556_, 1);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_556_, 2);
v_a_584_ = lean_ctor_get(v_snd_572_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v_snd_572_);
if (v_isSharedCheck_595_ == 0)
{
v___x_586_ = v_snd_572_;
v_isShared_587_ = v_isSharedCheck_595_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v_snd_572_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_595_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 0, v_a_584_);
v___x_589_ = v___x_570_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_594_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
lean_object* v___x_591_; 
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_589_);
v___x_591_ = v___x_586_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_589_);
v___x_591_ = v_reuseFailAlloc_593_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
lean_object* v___x_592_; 
v___x_592_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v___x_591_, v_a_583_);
lean_dec_ref(v___x_591_);
return v___x_592_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_597_; lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
v_a_597_ = lean_ctor_get(v___x_556_, 0);
v_a_598_ = lean_ctor_get(v___x_556_, 1);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_556_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_inc(v_a_597_);
lean_dec(v___x_556_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_597_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v_a_598_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed(lean_object* v_env_606_, lean_object* v_stx_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(v_env_606_, v_stx_607_, v___y_608_, v___y_609_);
lean_dec_ref(v___y_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(lean_object* v_ref_611_, lean_object* v_msg_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
lean_object* v_toCold_620_; lean_object* v_currRecDepth_621_; lean_object* v_ref_622_; uint8_t v_diag_623_; uint8_t v_suppressElabErrors_624_; lean_object* v_ref_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v_toCold_620_ = lean_ctor_get(v___y_617_, 0);
v_currRecDepth_621_ = lean_ctor_get(v___y_617_, 1);
v_ref_622_ = lean_ctor_get(v___y_617_, 2);
v_diag_623_ = lean_ctor_get_uint8(v___y_617_, sizeof(void*)*3);
v_suppressElabErrors_624_ = lean_ctor_get_uint8(v___y_617_, sizeof(void*)*3 + 1);
v_ref_625_ = l_Lean_replaceRef(v_ref_611_, v_ref_622_);
lean_inc(v_currRecDepth_621_);
lean_inc_ref(v_toCold_620_);
v___x_626_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_626_, 0, v_toCold_620_);
lean_ctor_set(v___x_626_, 1, v_currRecDepth_621_);
lean_ctor_set(v___x_626_, 2, v_ref_625_);
lean_ctor_set_uint8(v___x_626_, sizeof(void*)*3, v_diag_623_);
lean_ctor_set_uint8(v___x_626_, sizeof(void*)*3 + 1, v_suppressElabErrors_624_);
v___x_627_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___x_626_, v___y_618_);
lean_dec_ref_known(v___x_626_, 3);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg___boxed(lean_object* v_ref_628_, lean_object* v_msg_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_ref_628_, v_msg_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec(v___y_633_);
lean_dec_ref(v___y_632_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v_ref_628_);
return v_res_637_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_638_; double v___x_639_; 
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = lean_float_of_nat(v___x_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(lean_object* v_cls_643_, lean_object* v_msg_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_ref_650_; lean_object* v___x_651_; lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_696_; 
v_ref_650_ = lean_ctor_get(v___y_647_, 2);
v___x_651_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msg_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_);
v_a_652_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_696_ == 0)
{
v___x_654_ = v___x_651_;
v_isShared_655_ = v_isSharedCheck_696_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_651_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_696_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_656_; lean_object* v_traceState_657_; lean_object* v_env_658_; lean_object* v_nextMacroScope_659_; lean_object* v_ngen_660_; lean_object* v_auxDeclNGen_661_; lean_object* v_cache_662_; lean_object* v_messages_663_; lean_object* v_infoState_664_; lean_object* v_snapshotTasks_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_695_; 
v___x_656_ = lean_st_ref_take(v___y_648_);
v_traceState_657_ = lean_ctor_get(v___x_656_, 4);
v_env_658_ = lean_ctor_get(v___x_656_, 0);
v_nextMacroScope_659_ = lean_ctor_get(v___x_656_, 1);
v_ngen_660_ = lean_ctor_get(v___x_656_, 2);
v_auxDeclNGen_661_ = lean_ctor_get(v___x_656_, 3);
v_cache_662_ = lean_ctor_get(v___x_656_, 5);
v_messages_663_ = lean_ctor_get(v___x_656_, 6);
v_infoState_664_ = lean_ctor_get(v___x_656_, 7);
v_snapshotTasks_665_ = lean_ctor_get(v___x_656_, 8);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_695_ == 0)
{
v___x_667_ = v___x_656_;
v_isShared_668_ = v_isSharedCheck_695_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_snapshotTasks_665_);
lean_inc(v_infoState_664_);
lean_inc(v_messages_663_);
lean_inc(v_cache_662_);
lean_inc(v_traceState_657_);
lean_inc(v_auxDeclNGen_661_);
lean_inc(v_ngen_660_);
lean_inc(v_nextMacroScope_659_);
lean_inc(v_env_658_);
lean_dec(v___x_656_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_695_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
uint64_t v_tid_669_; lean_object* v_traces_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_694_; 
v_tid_669_ = lean_ctor_get_uint64(v_traceState_657_, sizeof(void*)*1);
v_traces_670_ = lean_ctor_get(v_traceState_657_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v_traceState_657_);
if (v_isSharedCheck_694_ == 0)
{
v___x_672_ = v_traceState_657_;
v_isShared_673_ = v_isSharedCheck_694_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_traces_670_);
lean_dec(v_traceState_657_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_694_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_674_; lean_object* v___x_675_; double v___x_676_; uint8_t v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_685_; 
v___x_674_ = lean_box(0);
v___x_675_ = lean_box(0);
v___x_676_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0);
v___x_677_ = 0;
v___x_678_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1));
v___x_679_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_679_, 0, v_cls_643_);
lean_ctor_set(v___x_679_, 1, v___x_675_);
lean_ctor_set(v___x_679_, 2, v___x_678_);
lean_ctor_set_float(v___x_679_, sizeof(void*)*3, v___x_676_);
lean_ctor_set_float(v___x_679_, sizeof(void*)*3 + 8, v___x_676_);
lean_ctor_set_uint8(v___x_679_, sizeof(void*)*3 + 16, v___x_677_);
v___x_680_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2));
v___x_681_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_681_, 0, v___x_679_);
lean_ctor_set(v___x_681_, 1, v_a_652_);
lean_ctor_set(v___x_681_, 2, v___x_680_);
lean_inc(v_ref_650_);
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v_ref_650_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = l_Lean_PersistentArray_push___redArg(v_traces_670_, v___x_682_);
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 0, v___x_683_);
v___x_685_ = v___x_672_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_683_);
lean_ctor_set_uint64(v_reuseFailAlloc_693_, sizeof(void*)*1, v_tid_669_);
v___x_685_ = v_reuseFailAlloc_693_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
lean_object* v___x_687_; 
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 4, v___x_685_);
v___x_687_ = v___x_667_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_env_658_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_nextMacroScope_659_);
lean_ctor_set(v_reuseFailAlloc_692_, 2, v_ngen_660_);
lean_ctor_set(v_reuseFailAlloc_692_, 3, v_auxDeclNGen_661_);
lean_ctor_set(v_reuseFailAlloc_692_, 4, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_692_, 5, v_cache_662_);
lean_ctor_set(v_reuseFailAlloc_692_, 6, v_messages_663_);
lean_ctor_set(v_reuseFailAlloc_692_, 7, v_infoState_664_);
lean_ctor_set(v_reuseFailAlloc_692_, 8, v_snapshotTasks_665_);
v___x_687_ = v_reuseFailAlloc_692_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_688_ = lean_st_ref_put(v___y_648_, v___x_687_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 0, v___x_674_);
v___x_690_ = v___x_654_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_674_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___boxed(lean_object* v_cls_697_, lean_object* v_msg_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_697_, v_msg_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
lean_dec(v___y_700_);
lean_dec_ref(v___y_699_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(lean_object* v_as_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
if (lean_obj_tag(v_as_708_) == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = lean_box(0);
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
return v___x_717_;
}
else
{
lean_object* v_toCold_718_; lean_object* v_options_719_; uint8_t v_hasTrace_720_; 
v_toCold_718_ = lean_ctor_get(v___y_713_, 0);
v_options_719_ = lean_ctor_get(v_toCold_718_, 2);
v_hasTrace_720_ = lean_ctor_get_uint8(v_options_719_, sizeof(void*)*1);
if (v_hasTrace_720_ == 0)
{
lean_object* v_tail_721_; 
v_tail_721_ = lean_ctor_get(v_as_708_, 1);
lean_inc(v_tail_721_);
lean_dec_ref_known(v_as_708_, 2);
v_as_708_ = v_tail_721_;
goto _start;
}
else
{
lean_object* v_head_723_; lean_object* v_tail_724_; lean_object* v_fst_725_; lean_object* v_snd_726_; lean_object* v_inheritedTraceOptions_727_; lean_object* v___x_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v_head_723_ = lean_ctor_get(v_as_708_, 0);
lean_inc(v_head_723_);
v_tail_724_ = lean_ctor_get(v_as_708_, 1);
lean_inc(v_tail_724_);
lean_dec_ref_known(v_as_708_, 2);
v_fst_725_ = lean_ctor_get(v_head_723_, 0);
lean_inc_n(v_fst_725_, 2);
v_snd_726_ = lean_ctor_get(v_head_723_, 1);
lean_inc(v_snd_726_);
lean_dec(v_head_723_);
v_inheritedTraceOptions_727_ = lean_ctor_get(v_toCold_718_, 11);
v___x_728_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1));
v___x_729_ = l_Lean_Name_append(v___x_728_, v_fst_725_);
v___x_730_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_727_, v_options_719_, v___x_729_);
lean_dec(v___x_729_);
if (v___x_730_ == 0)
{
lean_dec(v_snd_726_);
lean_dec(v_fst_725_);
v_as_708_ = v_tail_724_;
goto _start;
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_732_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_732_, 0, v_snd_726_);
v___x_733_ = l_Lean_MessageData_ofFormat(v___x_732_);
v___x_734_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_fst_725_, v___x_733_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_dec_ref_known(v___x_734_, 1);
v_as_708_ = v_tail_724_;
goto _start;
}
else
{
lean_dec(v_tail_724_);
return v___x_734_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___boxed(lean_object* v_as_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(v_as_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29___redArg(lean_object* v_a_745_, lean_object* v_x_746_){
_start:
{
if (lean_obj_tag(v_x_746_) == 0)
{
lean_object* v___x_747_; 
v___x_747_ = lean_box(0);
return v___x_747_;
}
else
{
lean_object* v_key_748_; lean_object* v_value_749_; lean_object* v_tail_750_; uint8_t v___x_751_; 
v_key_748_ = lean_ctor_get(v_x_746_, 0);
v_value_749_ = lean_ctor_get(v_x_746_, 1);
v_tail_750_ = lean_ctor_get(v_x_746_, 2);
v___x_751_ = lean_name_eq(v_key_748_, v_a_745_);
if (v___x_751_ == 0)
{
v_x_746_ = v_tail_750_;
goto _start;
}
else
{
lean_object* v___x_753_; 
lean_inc(v_value_749_);
v___x_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_753_, 0, v_value_749_);
return v___x_753_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29___redArg___boxed(lean_object* v_a_754_, lean_object* v_x_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29___redArg(v_a_754_, v_x_755_);
lean_dec(v_x_755_);
lean_dec(v_a_754_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(lean_object* v_m_757_, lean_object* v_a_758_){
_start:
{
lean_object* v_buckets_759_; lean_object* v___x_760_; uint64_t v___y_762_; 
v_buckets_759_ = lean_ctor_get(v_m_757_, 1);
v___x_760_ = lean_array_get_size(v_buckets_759_);
if (lean_obj_tag(v_a_758_) == 0)
{
uint64_t v___x_776_; 
v___x_776_ = 1723ULL;
v___y_762_ = v___x_776_;
goto v___jp_761_;
}
else
{
uint64_t v_hash_777_; 
v_hash_777_ = lean_ctor_get_uint64(v_a_758_, sizeof(void*)*2);
v___y_762_ = v_hash_777_;
goto v___jp_761_;
}
v___jp_761_:
{
uint64_t v___x_763_; uint64_t v___x_764_; uint64_t v_fold_765_; uint64_t v___x_766_; uint64_t v___x_767_; uint64_t v___x_768_; size_t v___x_769_; size_t v___x_770_; size_t v___x_771_; size_t v___x_772_; size_t v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_763_ = 32ULL;
v___x_764_ = lean_uint64_shift_right(v___y_762_, v___x_763_);
v_fold_765_ = lean_uint64_xor(v___y_762_, v___x_764_);
v___x_766_ = 16ULL;
v___x_767_ = lean_uint64_shift_right(v_fold_765_, v___x_766_);
v___x_768_ = lean_uint64_xor(v_fold_765_, v___x_767_);
v___x_769_ = lean_uint64_to_usize(v___x_768_);
v___x_770_ = lean_usize_of_nat(v___x_760_);
v___x_771_ = ((size_t)1ULL);
v___x_772_ = lean_usize_sub(v___x_770_, v___x_771_);
v___x_773_ = lean_usize_land(v___x_769_, v___x_772_);
v___x_774_ = lean_array_uget_borrowed(v_buckets_759_, v___x_773_);
v___x_775_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29___redArg(v_a_758_, v___x_774_);
return v___x_775_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg___boxed(lean_object* v_m_778_, lean_object* v_a_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v_m_778_, v_a_779_);
lean_dec(v_a_779_);
lean_dec_ref(v_m_778_);
return v_res_780_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(lean_object* v_keys_781_, lean_object* v_i_782_, lean_object* v_k_783_){
_start:
{
lean_object* v___x_784_; uint8_t v___x_785_; 
v___x_784_ = lean_array_get_size(v_keys_781_);
v___x_785_ = lean_nat_dec_lt(v_i_782_, v___x_784_);
if (v___x_785_ == 0)
{
lean_dec(v_i_782_);
return v___x_785_;
}
else
{
lean_object* v_k_x27_786_; uint8_t v___x_787_; 
v_k_x27_786_ = lean_array_fget_borrowed(v_keys_781_, v_i_782_);
v___x_787_ = l_Lean_instBEqExtraModUse_beq(v_k_783_, v_k_x27_786_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_unsigned_to_nat(1u);
v___x_789_ = lean_nat_add(v_i_782_, v___x_788_);
lean_dec(v_i_782_);
v_i_782_ = v___x_789_;
goto _start;
}
else
{
lean_dec(v_i_782_);
return v___x_785_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg___boxed(lean_object* v_keys_791_, lean_object* v_i_792_, lean_object* v_k_793_){
_start:
{
uint8_t v_res_794_; lean_object* v_r_795_; 
v_res_794_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(v_keys_791_, v_i_792_, v_k_793_);
lean_dec_ref(v_k_793_);
lean_dec_ref(v_keys_791_);
v_r_795_ = lean_box(v_res_794_);
return v_r_795_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(lean_object* v_x_796_, size_t v_x_797_, lean_object* v_x_798_){
_start:
{
if (lean_obj_tag(v_x_796_) == 0)
{
lean_object* v_es_799_; lean_object* v___x_800_; size_t v___x_801_; size_t v___x_802_; lean_object* v_j_803_; lean_object* v___x_804_; 
v_es_799_ = lean_ctor_get(v_x_796_, 0);
v___x_800_ = lean_box(2);
v___x_801_ = ((size_t)31ULL);
v___x_802_ = lean_usize_land(v_x_797_, v___x_801_);
v_j_803_ = lean_usize_to_nat(v___x_802_);
v___x_804_ = lean_array_get_borrowed(v___x_800_, v_es_799_, v_j_803_);
lean_dec(v_j_803_);
switch(lean_obj_tag(v___x_804_))
{
case 0:
{
lean_object* v_key_805_; uint8_t v___x_806_; 
v_key_805_ = lean_ctor_get(v___x_804_, 0);
v___x_806_ = l_Lean_instBEqExtraModUse_beq(v_x_798_, v_key_805_);
return v___x_806_;
}
case 1:
{
lean_object* v_node_807_; size_t v___x_808_; size_t v___x_809_; 
v_node_807_ = lean_ctor_get(v___x_804_, 0);
v___x_808_ = ((size_t)5ULL);
v___x_809_ = lean_usize_shift_right(v_x_797_, v___x_808_);
v_x_796_ = v_node_807_;
v_x_797_ = v___x_809_;
goto _start;
}
default: 
{
uint8_t v___x_811_; 
v___x_811_ = 0;
return v___x_811_;
}
}
}
else
{
lean_object* v_ks_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v_ks_812_ = lean_ctor_get(v_x_796_, 0);
v___x_813_ = lean_unsigned_to_nat(0u);
v___x_814_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(v_ks_812_, v___x_813_, v_x_798_);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___boxed(lean_object* v_x_815_, lean_object* v_x_816_, lean_object* v_x_817_){
_start:
{
size_t v_x_167300__boxed_818_; uint8_t v_res_819_; lean_object* v_r_820_; 
v_x_167300__boxed_818_ = lean_unbox_usize(v_x_816_);
lean_dec(v_x_816_);
v_res_819_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(v_x_815_, v_x_167300__boxed_818_, v_x_817_);
lean_dec_ref(v_x_817_);
lean_dec_ref(v_x_815_);
v_r_820_ = lean_box(v_res_819_);
return v_r_820_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(lean_object* v_x_821_, lean_object* v_x_822_){
_start:
{
uint64_t v___x_823_; size_t v___x_824_; uint8_t v___x_825_; 
v___x_823_ = l_Lean_instHashableExtraModUse_hash(v_x_822_);
v___x_824_ = lean_uint64_to_usize(v___x_823_);
v___x_825_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(v_x_821_, v___x_824_, v_x_822_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg___boxed(lean_object* v_x_826_, lean_object* v_x_827_){
_start:
{
uint8_t v_res_828_; lean_object* v_r_829_; 
v_res_828_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(v_x_826_, v_x_827_);
lean_dec_ref(v_x_827_);
lean_dec_ref(v_x_826_);
v_r_829_ = lean_box(v_res_828_);
return v_r_829_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0(void){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_830_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1(void){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_831_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1);
v___x_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
return v___x_833_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3(void){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_834_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
return v___x_835_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
v___x_837_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
lean_ctor_set(v___x_837_, 2, v___x_836_);
lean_ctor_set(v___x_837_, 3, v___x_836_);
lean_ctor_set(v___x_837_, 4, v___x_836_);
lean_ctor_set(v___x_837_, 5, v___x_836_);
return v___x_837_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7));
v___x_843_ = l_Lean_stringToMessageData(v___x_842_);
return v___x_843_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9));
v___x_846_ = l_Lean_stringToMessageData(v___x_845_);
return v___x_846_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1));
v___x_848_ = l_Lean_stringToMessageData(v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12(void){
_start:
{
lean_object* v_cls_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v_cls_849_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6));
v___x_850_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1));
v___x_851_ = l_Lean_Name_append(v___x_850_, v_cls_849_);
return v___x_851_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13));
v___x_854_ = l_Lean_stringToMessageData(v___x_853_);
return v___x_854_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15));
v___x_857_ = l_Lean_stringToMessageData(v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(lean_object* v_mod_862_, uint8_t v_isMeta_863_, lean_object* v_hint_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v_env_874_; uint8_t v_isExporting_875_; lean_object* v_entry_876_; lean_object* v___x_877_; lean_object* v_env_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___x_924_; uint8_t v___x_925_; 
v___x_872_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0);
v___x_873_ = lean_st_ref_get(v___y_870_);
v_env_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc_ref(v_env_874_);
lean_dec(v___x_873_);
v_isExporting_875_ = lean_ctor_get_uint8(v_env_874_, sizeof(void*)*8);
lean_dec_ref(v_env_874_);
lean_inc(v_mod_862_);
v_entry_876_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_876_, 0, v_mod_862_);
lean_ctor_set_uint8(v_entry_876_, sizeof(void*)*1, v_isExporting_875_);
lean_ctor_set_uint8(v_entry_876_, sizeof(void*)*1 + 1, v_isMeta_863_);
v___x_877_ = lean_st_ref_get(v___y_870_);
v_env_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc_ref(v_env_878_);
lean_dec(v___x_877_);
v___x_879_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_880_ = lean_box(1);
v___x_881_ = lean_box(0);
v___x_924_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_872_, v___x_879_, v_env_878_, v___x_880_, v___x_881_);
v___x_925_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(v___x_924_, v_entry_876_);
lean_dec(v___x_924_);
if (v___x_925_ == 0)
{
lean_object* v_toCold_926_; lean_object* v_options_927_; uint8_t v_hasTrace_928_; 
v_toCold_926_ = lean_ctor_get(v___y_869_, 0);
v_options_927_ = lean_ctor_get(v_toCold_926_, 2);
v_hasTrace_928_ = lean_ctor_get_uint8(v_options_927_, sizeof(void*)*1);
if (v_hasTrace_928_ == 0)
{
lean_dec(v_hint_864_);
lean_dec(v_mod_862_);
v___y_883_ = v___y_868_;
v___y_884_ = v___y_870_;
goto v___jp_882_;
}
else
{
lean_object* v_inheritedTraceOptions_929_; lean_object* v_cls_930_; lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___x_950_; uint8_t v___x_951_; 
v_inheritedTraceOptions_929_ = lean_ctor_get(v_toCold_926_, 11);
v_cls_930_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6));
v___x_950_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12);
v___x_951_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_929_, v_options_927_, v___x_950_);
if (v___x_951_ == 0)
{
lean_dec(v_hint_864_);
lean_dec(v_mod_862_);
v___y_883_ = v___y_868_;
v___y_884_ = v___y_870_;
goto v___jp_882_;
}
else
{
lean_object* v___x_952_; lean_object* v___y_954_; 
v___x_952_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14);
if (v_isExporting_875_ == 0)
{
lean_object* v___x_961_; 
v___x_961_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19));
v___y_954_ = v___x_961_;
goto v___jp_953_;
}
else
{
lean_object* v___x_962_; 
v___x_962_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20));
v___y_954_ = v___x_962_;
goto v___jp_953_;
}
v___jp_953_:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
lean_inc_ref(v___y_954_);
v___x_955_ = l_Lean_stringToMessageData(v___y_954_);
v___x_956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_952_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16);
v___x_958_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_956_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
if (v_isMeta_863_ == 0)
{
lean_object* v___x_959_; 
v___x_959_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17));
v___y_937_ = v___x_958_;
v___y_938_ = v___x_959_;
goto v___jp_936_;
}
else
{
lean_object* v___x_960_; 
v___x_960_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18));
v___y_937_ = v___x_958_;
v___y_938_ = v___x_960_;
goto v___jp_936_;
}
}
}
v___jp_931_:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_934_, 0, v___y_932_);
lean_ctor_set(v___x_934_, 1, v___y_933_);
v___x_935_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_930_, v___x_934_, v___y_867_, v___y_868_, v___y_869_, v___y_870_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_dec_ref_known(v___x_935_, 1);
v___y_883_ = v___y_868_;
v___y_884_ = v___y_870_;
goto v___jp_882_;
}
else
{
lean_dec_ref_known(v_entry_876_, 1);
return v___x_935_;
}
}
v___jp_936_:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; uint8_t v___x_945_; 
lean_inc_ref(v___y_938_);
v___x_939_ = l_Lean_stringToMessageData(v___y_938_);
v___x_940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_940_, 0, v___y_937_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8);
v___x_942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_940_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = l_Lean_MessageData_ofName(v_mod_862_);
v___x_944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_942_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
v___x_945_ = l_Lean_Name_isAnonymous(v_hint_864_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_946_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10);
v___x_947_ = l_Lean_MessageData_ofName(v_hint_864_);
v___x_948_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___y_932_ = v___x_944_;
v___y_933_ = v___x_948_;
goto v___jp_931_;
}
else
{
lean_object* v___x_949_; 
lean_dec(v_hint_864_);
v___x_949_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11);
v___y_932_ = v___x_944_;
v___y_933_ = v___x_949_;
goto v___jp_931_;
}
}
}
}
else
{
lean_object* v___x_963_; lean_object* v___x_964_; 
lean_dec_ref_known(v_entry_876_, 1);
lean_dec(v_hint_864_);
lean_dec(v_mod_862_);
v___x_963_ = lean_box(0);
v___x_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
return v___x_964_;
}
v___jp_882_:
{
lean_object* v___x_885_; lean_object* v_toEnvExtension_886_; lean_object* v_env_887_; lean_object* v_nextMacroScope_888_; lean_object* v_ngen_889_; lean_object* v_auxDeclNGen_890_; lean_object* v_traceState_891_; lean_object* v_messages_892_; lean_object* v_infoState_893_; lean_object* v_snapshotTasks_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_922_; 
v___x_885_ = lean_st_ref_take(v___y_884_);
v_toEnvExtension_886_ = lean_ctor_get(v___x_879_, 0);
v_env_887_ = lean_ctor_get(v___x_885_, 0);
v_nextMacroScope_888_ = lean_ctor_get(v___x_885_, 1);
v_ngen_889_ = lean_ctor_get(v___x_885_, 2);
v_auxDeclNGen_890_ = lean_ctor_get(v___x_885_, 3);
v_traceState_891_ = lean_ctor_get(v___x_885_, 4);
v_messages_892_ = lean_ctor_get(v___x_885_, 6);
v_infoState_893_ = lean_ctor_get(v___x_885_, 7);
v_snapshotTasks_894_ = lean_ctor_get(v___x_885_, 8);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_922_ == 0)
{
lean_object* v_unused_923_; 
v_unused_923_ = lean_ctor_get(v___x_885_, 5);
lean_dec(v_unused_923_);
v___x_896_ = v___x_885_;
v_isShared_897_ = v_isSharedCheck_922_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_snapshotTasks_894_);
lean_inc(v_infoState_893_);
lean_inc(v_messages_892_);
lean_inc(v_traceState_891_);
lean_inc(v_auxDeclNGen_890_);
lean_inc(v_ngen_889_);
lean_inc(v_nextMacroScope_888_);
lean_inc(v_env_887_);
lean_dec(v___x_885_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_922_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v_asyncMode_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_902_; 
v_asyncMode_898_ = lean_ctor_get(v_toEnvExtension_886_, 2);
v___x_899_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_879_, v_env_887_, v_entry_876_, v_asyncMode_898_, v___x_881_);
v___x_900_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3);
if (v_isShared_897_ == 0)
{
lean_ctor_set(v___x_896_, 5, v___x_900_);
lean_ctor_set(v___x_896_, 0, v___x_899_);
v___x_902_ = v___x_896_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v___x_899_);
lean_ctor_set(v_reuseFailAlloc_921_, 1, v_nextMacroScope_888_);
lean_ctor_set(v_reuseFailAlloc_921_, 2, v_ngen_889_);
lean_ctor_set(v_reuseFailAlloc_921_, 3, v_auxDeclNGen_890_);
lean_ctor_set(v_reuseFailAlloc_921_, 4, v_traceState_891_);
lean_ctor_set(v_reuseFailAlloc_921_, 5, v___x_900_);
lean_ctor_set(v_reuseFailAlloc_921_, 6, v_messages_892_);
lean_ctor_set(v_reuseFailAlloc_921_, 7, v_infoState_893_);
lean_ctor_set(v_reuseFailAlloc_921_, 8, v_snapshotTasks_894_);
v___x_902_ = v_reuseFailAlloc_921_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v_mctx_905_; lean_object* v_zetaDeltaFVarIds_906_; lean_object* v_postponed_907_; lean_object* v_diag_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_919_; 
v___x_903_ = lean_st_ref_put(v___y_884_, v___x_902_);
v___x_904_ = lean_st_ref_take(v___y_883_);
v_mctx_905_ = lean_ctor_get(v___x_904_, 0);
v_zetaDeltaFVarIds_906_ = lean_ctor_get(v___x_904_, 2);
v_postponed_907_ = lean_ctor_get(v___x_904_, 3);
v_diag_908_ = lean_ctor_get(v___x_904_, 4);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_919_ == 0)
{
lean_object* v_unused_920_; 
v_unused_920_ = lean_ctor_get(v___x_904_, 1);
lean_dec(v_unused_920_);
v___x_910_ = v___x_904_;
v_isShared_911_ = v_isSharedCheck_919_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_diag_908_);
lean_inc(v_postponed_907_);
lean_inc(v_zetaDeltaFVarIds_906_);
lean_inc(v_mctx_905_);
lean_dec(v___x_904_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_919_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_915_; 
v___x_912_ = lean_box(0);
v___x_913_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 1, v___x_913_);
v___x_915_ = v___x_910_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_mctx_905_);
lean_ctor_set(v_reuseFailAlloc_918_, 1, v___x_913_);
lean_ctor_set(v_reuseFailAlloc_918_, 2, v_zetaDeltaFVarIds_906_);
lean_ctor_set(v_reuseFailAlloc_918_, 3, v_postponed_907_);
lean_ctor_set(v_reuseFailAlloc_918_, 4, v_diag_908_);
v___x_915_ = v_reuseFailAlloc_918_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_916_ = lean_st_ref_put(v___y_883_, v___x_915_);
v___x_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_917_, 0, v___x_912_);
return v___x_917_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___boxed(lean_object* v_mod_965_, lean_object* v_isMeta_966_, lean_object* v_hint_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
uint8_t v_isMeta_boxed_975_; lean_object* v_res_976_; 
v_isMeta_boxed_975_ = lean_unbox(v_isMeta_966_);
v_res_976_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_mod_965_, v_isMeta_boxed_975_, v_hint_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(lean_object* v___x_977_, lean_object* v_declName_978_, lean_object* v_as_979_, size_t v_sz_980_, size_t v_i_981_, lean_object* v_b_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
uint8_t v___x_990_; 
v___x_990_ = lean_usize_dec_lt(v_i_981_, v_sz_980_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; 
lean_dec(v_declName_978_);
v___x_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_991_, 0, v_b_982_);
return v___x_991_;
}
else
{
lean_object* v___x_992_; lean_object* v_modules_993_; lean_object* v___x_994_; lean_object* v_a_995_; lean_object* v___x_996_; lean_object* v_toImport_997_; lean_object* v_module_998_; lean_object* v___x_999_; uint8_t v___x_1000_; lean_object* v___x_1001_; 
v___x_992_ = l_Lean_Environment_header(v___x_977_);
v_modules_993_ = lean_ctor_get(v___x_992_, 3);
lean_inc_ref(v_modules_993_);
lean_dec_ref(v___x_992_);
v___x_994_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_995_ = lean_array_uget_borrowed(v_as_979_, v_i_981_);
v___x_996_ = lean_array_get(v___x_994_, v_modules_993_, v_a_995_);
lean_dec_ref(v_modules_993_);
v_toImport_997_ = lean_ctor_get(v___x_996_, 0);
lean_inc_ref(v_toImport_997_);
lean_dec(v___x_996_);
v_module_998_ = lean_ctor_get(v_toImport_997_, 0);
lean_inc(v_module_998_);
lean_dec_ref(v_toImport_997_);
v___x_999_ = lean_box(0);
v___x_1000_ = 0;
lean_inc(v_declName_978_);
v___x_1001_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_module_998_, v___x_1000_, v_declName_978_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
if (lean_obj_tag(v___x_1001_) == 0)
{
size_t v___x_1002_; size_t v___x_1003_; 
lean_dec_ref_known(v___x_1001_, 1);
v___x_1002_ = ((size_t)1ULL);
v___x_1003_ = lean_usize_add(v_i_981_, v___x_1002_);
v_i_981_ = v___x_1003_;
v_b_982_ = v___x_999_;
goto _start;
}
else
{
lean_dec(v_declName_978_);
return v___x_1001_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9___boxed(lean_object* v___x_1005_, lean_object* v_declName_1006_, lean_object* v_as_1007_, lean_object* v_sz_1008_, lean_object* v_i_1009_, lean_object* v_b_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
size_t v_sz_boxed_1018_; size_t v_i_boxed_1019_; lean_object* v_res_1020_; 
v_sz_boxed_1018_ = lean_unbox_usize(v_sz_1008_);
lean_dec(v_sz_1008_);
v_i_boxed_1019_ = lean_unbox_usize(v_i_1009_);
lean_dec(v_i_1009_);
v_res_1020_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(v___x_1005_, v_declName_1006_, v_as_1007_, v_sz_boxed_1018_, v_i_boxed_1019_, v_b_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
lean_dec(v___y_1012_);
lean_dec_ref(v___y_1011_);
lean_dec_ref(v_as_1007_);
lean_dec_ref(v___x_1005_);
return v_res_1020_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(lean_object* v_declName_1024_, uint8_t v_isMeta_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v_env_1038_; lean_object* v___y_1040_; lean_object* v___x_1053_; 
v___x_1033_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0);
v___x_1034_ = lean_st_ref_get(v___y_1031_);
v_env_1038_ = lean_ctor_get(v___x_1034_, 0);
lean_inc_ref(v_env_1038_);
lean_dec(v___x_1034_);
v___x_1053_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1038_, v_declName_1024_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_dec_ref(v_env_1038_);
lean_dec(v_declName_1024_);
goto v___jp_1035_;
}
else
{
lean_object* v_val_1054_; lean_object* v___x_1055_; lean_object* v_modules_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v_val_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_val_1054_);
lean_dec_ref_known(v___x_1053_, 1);
v___x_1055_ = l_Lean_Environment_header(v_env_1038_);
v_modules_1056_ = lean_ctor_get(v___x_1055_, 3);
lean_inc_ref(v_modules_1056_);
lean_dec_ref(v___x_1055_);
v___x_1057_ = lean_array_get_size(v_modules_1056_);
v___x_1058_ = lean_nat_dec_lt(v_val_1054_, v___x_1057_);
if (v___x_1058_ == 0)
{
lean_dec_ref(v_modules_1056_);
lean_dec(v_val_1054_);
lean_dec_ref(v_env_1038_);
lean_dec(v_declName_1024_);
goto v___jp_1035_;
}
else
{
lean_object* v___x_1059_; lean_object* v___x_1060_; uint8_t v___y_1062_; 
v___x_1059_ = lean_array_fget(v_modules_1056_, v_val_1054_);
lean_dec(v_val_1054_);
lean_dec_ref(v_modules_1056_);
v___x_1060_ = lean_st_ref_get(v___y_1031_);
if (v_isMeta_1025_ == 0)
{
lean_dec(v___x_1060_);
v___y_1062_ = v_isMeta_1025_;
goto v___jp_1061_;
}
else
{
lean_object* v_env_1073_; uint8_t v___x_1074_; 
v_env_1073_ = lean_ctor_get(v___x_1060_, 0);
lean_inc_ref(v_env_1073_);
lean_dec(v___x_1060_);
lean_inc(v_declName_1024_);
v___x_1074_ = l_Lean_isMarkedMeta(v_env_1073_, v_declName_1024_);
if (v___x_1074_ == 0)
{
v___y_1062_ = v_isMeta_1025_;
goto v___jp_1061_;
}
else
{
uint8_t v___x_1075_; 
v___x_1075_ = 0;
v___y_1062_ = v___x_1075_;
goto v___jp_1061_;
}
}
v___jp_1061_:
{
lean_object* v_toImport_1063_; lean_object* v_module_1064_; lean_object* v___x_1065_; 
v_toImport_1063_ = lean_ctor_get(v___x_1059_, 0);
lean_inc_ref(v_toImport_1063_);
lean_dec(v___x_1059_);
v_module_1064_ = lean_ctor_get(v_toImport_1063_, 0);
lean_inc(v_module_1064_);
lean_dec_ref(v_toImport_1063_);
lean_inc(v_declName_1024_);
v___x_1065_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_module_1064_, v___y_1062_, v_declName_1024_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
lean_dec_ref_known(v___x_1065_, 1);
v___x_1066_ = l_Lean_indirectModUseExt;
v___x_1067_ = lean_box(1);
v___x_1068_ = lean_box(0);
lean_inc_ref(v_env_1038_);
v___x_1069_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1033_, v___x_1066_, v_env_1038_, v___x_1067_, v___x_1068_);
v___x_1070_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v___x_1069_, v_declName_1024_);
lean_dec(v___x_1069_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v___x_1071_; 
v___x_1071_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1));
v___y_1040_ = v___x_1071_;
goto v___jp_1039_;
}
else
{
lean_object* v_val_1072_; 
v_val_1072_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_val_1072_);
lean_dec_ref_known(v___x_1070_, 1);
v___y_1040_ = v_val_1072_;
goto v___jp_1039_;
}
}
else
{
lean_dec_ref(v_env_1038_);
lean_dec(v_declName_1024_);
return v___x_1065_;
}
}
}
}
v___jp_1035_:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = lean_box(0);
v___x_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
return v___x_1037_;
}
v___jp_1039_:
{
lean_object* v___x_1041_; size_t v_sz_1042_; size_t v___x_1043_; lean_object* v___x_1044_; 
v___x_1041_ = lean_box(0);
v_sz_1042_ = lean_array_size(v___y_1040_);
v___x_1043_ = ((size_t)0ULL);
v___x_1044_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(v_env_1038_, v_declName_1024_, v___y_1040_, v_sz_1042_, v___x_1043_, v___x_1041_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
lean_dec_ref(v___y_1040_);
lean_dec_ref(v_env_1038_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1051_ == 0)
{
lean_object* v_unused_1052_; 
v_unused_1052_ = lean_ctor_get(v___x_1044_, 0);
lean_dec(v_unused_1052_);
v___x_1046_ = v___x_1044_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_dec(v___x_1044_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1049_; 
if (v_isShared_1047_ == 0)
{
lean_ctor_set(v___x_1046_, 0, v___x_1041_);
v___x_1049_ = v___x_1046_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v___x_1041_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
else
{
return v___x_1044_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___boxed(lean_object* v_declName_1076_, lean_object* v_isMeta_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
uint8_t v_isMeta_boxed_1085_; lean_object* v_res_1086_; 
v_isMeta_boxed_1085_ = lean_unbox(v_isMeta_1077_);
v_res_1086_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(v_declName_1076_, v_isMeta_boxed_1085_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(lean_object* v_as_x27_1087_, lean_object* v_b_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
if (lean_obj_tag(v_as_x27_1087_) == 0)
{
lean_object* v___x_1096_; 
v___x_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1096_, 0, v_b_1088_);
return v___x_1096_;
}
else
{
lean_object* v_head_1097_; lean_object* v_tail_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; lean_object* v___x_1101_; 
v_head_1097_ = lean_ctor_get(v_as_x27_1087_, 0);
v_tail_1098_ = lean_ctor_get(v_as_x27_1087_, 1);
v___x_1099_ = lean_box(0);
v___x_1100_ = 1;
lean_inc(v_head_1097_);
v___x_1101_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(v_head_1097_, v___x_1100_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_dec_ref_known(v___x_1101_, 1);
v_as_x27_1087_ = v_tail_1098_;
v_b_1088_ = v___x_1099_;
goto _start;
}
else
{
return v___x_1101_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg___boxed(lean_object* v_as_x27_1103_, lean_object* v_b_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_as_x27_1103_, v_b_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
lean_dec(v_as_x27_1103_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(lean_object* v_env_1113_, lean_object* v_currNamespace_1114_, lean_object* v_openDecls_1115_, lean_object* v_n_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1119_ = l_Lean_ResolveName_resolveNamespace(v_env_1113_, v_currNamespace_1114_, v_openDecls_1115_, v_n_1116_);
v___x_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
lean_ctor_set(v___x_1120_, 1, v___y_1118_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed(lean_object* v_env_1121_, lean_object* v_currNamespace_1122_, lean_object* v_openDecls_1123_, lean_object* v_n_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(v_env_1121_, v_currNamespace_1122_, v_openDecls_1123_, v_n_1124_, v___y_1125_, v___y_1126_);
lean_dec_ref(v___y_1125_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(lean_object* v_currNamespace_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1131_, 0, v_currNamespace_1128_);
lean_ctor_set(v___x_1131_, 1, v___y_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed(lean_object* v_currNamespace_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(v_currNamespace_1132_, v___y_1133_, v___y_1134_);
lean_dec_ref(v___y_1133_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(lean_object* v_env_1136_, lean_object* v_options_1137_, lean_object* v_currNamespace_1138_, lean_object* v_openDecls_1139_, lean_object* v_n_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = l_Lean_ResolveName_resolveGlobalName(v_env_1136_, v_options_1137_, v_currNamespace_1138_, v_openDecls_1139_, v_n_1140_);
v___x_1144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
lean_ctor_set(v___x_1144_, 1, v___y_1142_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed(lean_object* v_env_1145_, lean_object* v_options_1146_, lean_object* v_currNamespace_1147_, lean_object* v_openDecls_1148_, lean_object* v_n_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(v_env_1145_, v_options_1146_, v_currNamespace_1147_, v_openDecls_1148_, v_n_1149_, v___y_1150_, v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec_ref(v_options_1146_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(lean_object* v_x_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v___x_1162_; lean_object* v_toCold_1163_; lean_object* v_env_1164_; lean_object* v_currRecDepth_1165_; lean_object* v_ref_1166_; lean_object* v_options_1167_; lean_object* v_maxRecDepth_1168_; lean_object* v_currNamespace_1169_; lean_object* v_openDecls_1170_; lean_object* v_quotContext_1171_; lean_object* v_currMacroScope_1172_; lean_object* v___f_1173_; lean_object* v___f_1174_; lean_object* v___f_1175_; lean_object* v___f_1176_; lean_object* v___f_1177_; lean_object* v_methods_1178_; lean_object* v___x_1179_; lean_object* v_nextMacroScope_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1162_ = lean_st_ref_get(v___y_1160_);
v_toCold_1163_ = lean_ctor_get(v___y_1159_, 0);
v_env_1164_ = lean_ctor_get(v___x_1162_, 0);
lean_inc_ref_n(v_env_1164_, 4);
lean_dec(v___x_1162_);
v_currRecDepth_1165_ = lean_ctor_get(v___y_1159_, 1);
v_ref_1166_ = lean_ctor_get(v___y_1159_, 2);
v_options_1167_ = lean_ctor_get(v_toCold_1163_, 2);
v_maxRecDepth_1168_ = lean_ctor_get(v_toCold_1163_, 3);
v_currNamespace_1169_ = lean_ctor_get(v_toCold_1163_, 4);
v_openDecls_1170_ = lean_ctor_get(v_toCold_1163_, 5);
v_quotContext_1171_ = lean_ctor_get(v_toCold_1163_, 8);
v_currMacroScope_1172_ = lean_ctor_get(v_toCold_1163_, 9);
v___f_1173_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1173_, 0, v_env_1164_);
v___f_1174_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1174_, 0, v_env_1164_);
lean_inc_n(v_openDecls_1170_, 2);
lean_inc_n(v_currNamespace_1169_, 3);
v___f_1175_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_1175_, 0, v_env_1164_);
lean_closure_set(v___f_1175_, 1, v_currNamespace_1169_);
lean_closure_set(v___f_1175_, 2, v_openDecls_1170_);
v___f_1176_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1176_, 0, v_currNamespace_1169_);
lean_inc_ref(v_options_1167_);
v___f_1177_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_1177_, 0, v_env_1164_);
lean_closure_set(v___f_1177_, 1, v_options_1167_);
lean_closure_set(v___f_1177_, 2, v_currNamespace_1169_);
lean_closure_set(v___f_1177_, 3, v_openDecls_1170_);
v_methods_1178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_1178_, 0, v___f_1173_);
lean_ctor_set(v_methods_1178_, 1, v___f_1176_);
lean_ctor_set(v_methods_1178_, 2, v___f_1174_);
lean_ctor_set(v_methods_1178_, 3, v___f_1175_);
lean_ctor_set(v_methods_1178_, 4, v___f_1177_);
v___x_1179_ = lean_st_ref_get(v___y_1160_);
v_nextMacroScope_1180_ = lean_ctor_get(v___x_1179_, 1);
lean_inc(v_nextMacroScope_1180_);
lean_dec(v___x_1179_);
lean_inc(v_ref_1166_);
lean_inc(v_maxRecDepth_1168_);
lean_inc(v_currRecDepth_1165_);
lean_inc(v_currMacroScope_1172_);
lean_inc(v_quotContext_1171_);
v___x_1181_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1181_, 0, v_methods_1178_);
lean_ctor_set(v___x_1181_, 1, v_quotContext_1171_);
lean_ctor_set(v___x_1181_, 2, v_currMacroScope_1172_);
lean_ctor_set(v___x_1181_, 3, v_currRecDepth_1165_);
lean_ctor_set(v___x_1181_, 4, v_maxRecDepth_1168_);
lean_ctor_set(v___x_1181_, 5, v_ref_1166_);
v___x_1182_ = lean_box(0);
v___x_1183_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1183_, 0, v_nextMacroScope_1180_);
lean_ctor_set(v___x_1183_, 1, v___x_1182_);
lean_ctor_set(v___x_1183_, 2, v___x_1182_);
v___x_1184_ = lean_apply_2(v_x_1154_, v___x_1181_, v___x_1183_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v_a_1185_; lean_object* v_a_1186_; lean_object* v_macroScope_1187_; lean_object* v_traceMsgs_1188_; lean_object* v_expandedMacroDecls_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v_a_1185_ = lean_ctor_get(v___x_1184_, 1);
lean_inc(v_a_1185_);
v_a_1186_ = lean_ctor_get(v___x_1184_, 0);
lean_inc(v_a_1186_);
lean_dec_ref_known(v___x_1184_, 2);
v_macroScope_1187_ = lean_ctor_get(v_a_1185_, 0);
lean_inc(v_macroScope_1187_);
v_traceMsgs_1188_ = lean_ctor_get(v_a_1185_, 1);
lean_inc(v_traceMsgs_1188_);
v_expandedMacroDecls_1189_ = lean_ctor_get(v_a_1185_, 2);
lean_inc(v_expandedMacroDecls_1189_);
lean_dec(v_a_1185_);
v___x_1190_ = lean_box(0);
v___x_1191_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_expandedMacroDecls_1189_, v___x_1190_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
lean_dec(v_expandedMacroDecls_1189_);
if (lean_obj_tag(v___x_1191_) == 0)
{
lean_object* v___x_1192_; lean_object* v_env_1193_; lean_object* v_ngen_1194_; lean_object* v_auxDeclNGen_1195_; lean_object* v_traceState_1196_; lean_object* v_cache_1197_; lean_object* v_messages_1198_; lean_object* v_infoState_1199_; lean_object* v_snapshotTasks_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1226_; 
lean_dec_ref_known(v___x_1191_, 1);
v___x_1192_ = lean_st_ref_take(v___y_1160_);
v_env_1193_ = lean_ctor_get(v___x_1192_, 0);
v_ngen_1194_ = lean_ctor_get(v___x_1192_, 2);
v_auxDeclNGen_1195_ = lean_ctor_get(v___x_1192_, 3);
v_traceState_1196_ = lean_ctor_get(v___x_1192_, 4);
v_cache_1197_ = lean_ctor_get(v___x_1192_, 5);
v_messages_1198_ = lean_ctor_get(v___x_1192_, 6);
v_infoState_1199_ = lean_ctor_get(v___x_1192_, 7);
v_snapshotTasks_1200_ = lean_ctor_get(v___x_1192_, 8);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; 
v_unused_1227_ = lean_ctor_get(v___x_1192_, 1);
lean_dec(v_unused_1227_);
v___x_1202_ = v___x_1192_;
v_isShared_1203_ = v_isSharedCheck_1226_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_snapshotTasks_1200_);
lean_inc(v_infoState_1199_);
lean_inc(v_messages_1198_);
lean_inc(v_cache_1197_);
lean_inc(v_traceState_1196_);
lean_inc(v_auxDeclNGen_1195_);
lean_inc(v_ngen_1194_);
lean_inc(v_env_1193_);
lean_dec(v___x_1192_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1226_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 1, v_macroScope_1187_);
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_env_1193_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v_macroScope_1187_);
lean_ctor_set(v_reuseFailAlloc_1225_, 2, v_ngen_1194_);
lean_ctor_set(v_reuseFailAlloc_1225_, 3, v_auxDeclNGen_1195_);
lean_ctor_set(v_reuseFailAlloc_1225_, 4, v_traceState_1196_);
lean_ctor_set(v_reuseFailAlloc_1225_, 5, v_cache_1197_);
lean_ctor_set(v_reuseFailAlloc_1225_, 6, v_messages_1198_);
lean_ctor_set(v_reuseFailAlloc_1225_, 7, v_infoState_1199_);
lean_ctor_set(v_reuseFailAlloc_1225_, 8, v_snapshotTasks_1200_);
v___x_1205_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1206_ = lean_st_ref_put(v___y_1160_, v___x_1205_);
v___x_1207_ = l_List_reverse___redArg(v_traceMsgs_1188_);
v___x_1208_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(v___x_1207_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1215_; 
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
lean_ctor_set(v___x_1210_, 0, v_a_1186_);
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1186_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec(v_a_1186_);
v_a_1217_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1208_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1208_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1235_; 
lean_dec(v_traceMsgs_1188_);
lean_dec(v_macroScope_1187_);
lean_dec(v_a_1186_);
v_a_1228_ = lean_ctor_get(v___x_1191_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1230_ = v___x_1191_;
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1191_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_a_1228_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
else
{
lean_object* v_a_1236_; 
v_a_1236_ = lean_ctor_get(v___x_1184_, 0);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1184_, 2);
if (lean_obj_tag(v_a_1236_) == 0)
{
lean_object* v_a_1237_; lean_object* v_a_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; 
v_a_1237_ = lean_ctor_get(v_a_1236_, 0);
lean_inc(v_a_1237_);
v_a_1238_ = lean_ctor_get(v_a_1236_, 1);
lean_inc_ref(v_a_1238_);
lean_dec_ref_known(v_a_1236_, 2);
v___x_1239_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0));
v___x_1240_ = lean_string_dec_eq(v_a_1238_, v___x_1239_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1241_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1241_, 0, v_a_1238_);
v___x_1242_ = l_Lean_MessageData_ofFormat(v___x_1241_);
v___x_1243_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_a_1237_, v___x_1242_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
lean_dec(v_a_1237_);
return v___x_1243_;
}
else
{
lean_object* v___x_1244_; 
lean_dec_ref(v_a_1238_);
v___x_1244_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_a_1237_);
return v___x_1244_;
}
}
else
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v___x_1245_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___boxed(lean_object* v_x_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_x_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(size_t v_sz_1258_, size_t v_i_1259_, lean_object* v_bs_1260_){
_start:
{
uint8_t v___x_1261_; 
v___x_1261_ = lean_usize_dec_lt(v_i_1259_, v_sz_1258_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1262_, 0, v_bs_1260_);
return v___x_1262_;
}
else
{
lean_object* v_v_1263_; lean_object* v___x_1264_; uint8_t v___x_1265_; 
v_v_1263_ = lean_array_uget(v_bs_1260_, v_i_1259_);
v___x_1264_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1));
lean_inc(v_v_1263_);
v___x_1265_ = l_Lean_Syntax_isOfKind(v_v_1263_, v___x_1264_);
if (v___x_1265_ == 0)
{
lean_object* v___x_1266_; 
lean_dec(v_v_1263_);
lean_dec_ref(v_bs_1260_);
v___x_1266_ = lean_box(0);
return v___x_1266_;
}
else
{
lean_object* v___x_1267_; lean_object* v___x_1268_; uint8_t v___x_1269_; 
v___x_1267_ = lean_unsigned_to_nat(0u);
v___x_1268_ = l_Lean_Syntax_getArg(v_v_1263_, v___x_1267_);
v___x_1269_ = l_Lean_Syntax_isOfKind(v___x_1268_, v___x_1264_);
if (v___x_1269_ == 0)
{
lean_object* v___x_1270_; 
lean_dec(v_v_1263_);
lean_dec_ref(v_bs_1260_);
v___x_1270_ = lean_box(0);
return v___x_1270_;
}
else
{
lean_object* v___x_1271_; lean_object* v_bs_x27_1272_; lean_object* v___x_1273_; size_t v___x_1274_; size_t v___x_1275_; lean_object* v___x_1276_; 
v___x_1271_ = lean_unsigned_to_nat(3u);
v_bs_x27_1272_ = lean_array_uset(v_bs_1260_, v_i_1259_, v___x_1267_);
v___x_1273_ = l_Lean_Syntax_getArg(v_v_1263_, v___x_1271_);
lean_dec(v_v_1263_);
v___x_1274_ = ((size_t)1ULL);
v___x_1275_ = lean_usize_add(v_i_1259_, v___x_1274_);
v___x_1276_ = lean_array_uset(v_bs_x27_1272_, v_i_1259_, v___x_1273_);
v_i_1259_ = v___x_1275_;
v_bs_1260_ = v___x_1276_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___boxed(lean_object* v_sz_1278_, lean_object* v_i_1279_, lean_object* v_bs_1280_){
_start:
{
size_t v_sz_boxed_1281_; size_t v_i_boxed_1282_; lean_object* v_res_1283_; 
v_sz_boxed_1281_ = lean_unbox_usize(v_sz_1278_);
lean_dec(v_sz_1278_);
v_i_boxed_1282_ = lean_unbox_usize(v_i_1279_);
lean_dec(v_i_1279_);
v_res_1283_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(v_sz_boxed_1281_, v_i_boxed_1282_, v_bs_1280_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(uint8_t v___x_1296_, size_t v_sz_1297_, size_t v_i_1298_, lean_object* v_bs_1299_){
_start:
{
uint8_t v___x_1300_; 
v___x_1300_ = lean_usize_dec_lt(v_i_1298_, v_sz_1297_);
if (v___x_1300_ == 0)
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1301_, 0, v_bs_1299_);
return v___x_1301_;
}
else
{
lean_object* v_v_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; 
v_v_1302_ = lean_array_uget(v_bs_1299_, v_i_1298_);
v___x_1303_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1));
lean_inc(v_v_1302_);
v___x_1304_ = l_Lean_Syntax_isOfKind(v_v_1302_, v___x_1303_);
if (v___x_1304_ == 0)
{
lean_object* v___x_1305_; 
lean_dec(v_v_1302_);
lean_dec_ref(v_bs_1299_);
v___x_1305_ = lean_box(0);
return v___x_1305_;
}
else
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v_bs_x27_1308_; 
v___x_1306_ = lean_unsigned_to_nat(3u);
v___x_1307_ = lean_unsigned_to_nat(0u);
v_bs_x27_1308_ = lean_array_uset(v_bs_1299_, v_i_1298_, v___x_1307_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; uint8_t v___x_1318_; 
v___x_1315_ = lean_unsigned_to_nat(1u);
v___x_1316_ = l_Lean_Syntax_getArg(v_v_1302_, v___x_1315_);
v___x_1317_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3));
v___x_1318_ = l_Lean_Syntax_isOfKind(v___x_1316_, v___x_1317_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; 
lean_dec_ref(v_bs_x27_1308_);
lean_dec(v_v_1302_);
v___x_1319_ = lean_box(0);
return v___x_1319_;
}
else
{
goto v___jp_1309_;
}
}
else
{
goto v___jp_1309_;
}
v___jp_1309_:
{
lean_object* v___x_1310_; size_t v___x_1311_; size_t v___x_1312_; lean_object* v___x_1313_; 
v___x_1310_ = l_Lean_Syntax_getArg(v_v_1302_, v___x_1306_);
lean_dec(v_v_1302_);
v___x_1311_ = ((size_t)1ULL);
v___x_1312_ = lean_usize_add(v_i_1298_, v___x_1311_);
v___x_1313_ = lean_array_uset(v_bs_x27_1308_, v_i_1298_, v___x_1310_);
v_i_1298_ = v___x_1312_;
v_bs_1299_ = v___x_1313_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___boxed(lean_object* v___x_1320_, lean_object* v_sz_1321_, lean_object* v_i_1322_, lean_object* v_bs_1323_){
_start:
{
uint8_t v___x_168064__boxed_1324_; size_t v_sz_boxed_1325_; size_t v_i_boxed_1326_; lean_object* v_res_1327_; 
v___x_168064__boxed_1324_ = lean_unbox(v___x_1320_);
v_sz_boxed_1325_ = lean_unbox_usize(v_sz_1321_);
lean_dec(v_sz_1321_);
v_i_boxed_1326_ = lean_unbox_usize(v_i_1322_);
lean_dec(v_i_1322_);
v_res_1327_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(v___x_168064__boxed_1324_, v_sz_boxed_1325_, v_i_boxed_1326_, v_bs_1323_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(size_t v_sz_1334_, size_t v_i_1335_, lean_object* v_bs_1336_){
_start:
{
uint8_t v___x_1337_; 
v___x_1337_ = lean_usize_dec_lt(v_i_1335_, v_sz_1334_);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; 
v___x_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1338_, 0, v_bs_1336_);
return v___x_1338_;
}
else
{
lean_object* v_v_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; 
v_v_1339_ = lean_array_uget(v_bs_1336_, v_i_1335_);
v___x_1340_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1));
lean_inc(v_v_1339_);
v___x_1341_ = l_Lean_Syntax_isOfKind(v_v_1339_, v___x_1340_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1342_; 
lean_dec(v_v_1339_);
lean_dec_ref(v_bs_1336_);
v___x_1342_ = lean_box(0);
return v___x_1342_;
}
else
{
lean_object* v___x_1343_; lean_object* v_bs_x27_1344_; lean_object* v___x_1351_; uint8_t v___x_1352_; 
v___x_1343_ = lean_unsigned_to_nat(0u);
v_bs_x27_1344_ = lean_array_uset(v_bs_1336_, v_i_1335_, v___x_1343_);
v___x_1351_ = l_Lean_Syntax_getArg(v_v_1339_, v___x_1343_);
lean_dec(v_v_1339_);
v___x_1352_ = l_Lean_Syntax_isNone(v___x_1351_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; uint8_t v___x_1354_; 
v___x_1353_ = lean_unsigned_to_nat(2u);
v___x_1354_ = l_Lean_Syntax_matchesNull(v___x_1351_, v___x_1353_);
if (v___x_1354_ == 0)
{
lean_object* v___x_1355_; 
lean_dec_ref(v_bs_x27_1344_);
v___x_1355_ = lean_box(0);
return v___x_1355_;
}
else
{
goto v___jp_1345_;
}
}
else
{
lean_dec(v___x_1351_);
goto v___jp_1345_;
}
v___jp_1345_:
{
lean_object* v___x_1346_; size_t v___x_1347_; size_t v___x_1348_; lean_object* v___x_1349_; 
v___x_1346_ = lean_box(0);
v___x_1347_ = ((size_t)1ULL);
v___x_1348_ = lean_usize_add(v_i_1335_, v___x_1347_);
v___x_1349_ = lean_array_uset(v_bs_x27_1344_, v_i_1335_, v___x_1346_);
v_i_1335_ = v___x_1348_;
v_bs_1336_ = v___x_1349_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___boxed(lean_object* v_sz_1356_, lean_object* v_i_1357_, lean_object* v_bs_1358_){
_start:
{
size_t v_sz_boxed_1359_; size_t v_i_boxed_1360_; lean_object* v_res_1361_; 
v_sz_boxed_1359_ = lean_unbox_usize(v_sz_1356_);
lean_dec(v_sz_1356_);
v_i_boxed_1360_ = lean_unbox_usize(v_i_1357_);
lean_dec(v_i_1357_);
v_res_1361_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(v_sz_boxed_1359_, v_i_boxed_1360_, v_bs_1358_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(size_t v_sz_1362_, size_t v_i_1363_, lean_object* v_bs_1364_){
_start:
{
uint8_t v___x_1365_; 
v___x_1365_ = lean_usize_dec_lt(v_i_1363_, v_sz_1362_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1366_, 0, v_bs_1364_);
return v___x_1366_;
}
else
{
lean_object* v_v_1367_; lean_object* v___x_1368_; lean_object* v_bs_x27_1369_; size_t v___x_1370_; size_t v___x_1371_; lean_object* v___x_1372_; 
v_v_1367_ = lean_array_uget(v_bs_1364_, v_i_1363_);
v___x_1368_ = lean_unsigned_to_nat(0u);
v_bs_x27_1369_ = lean_array_uset(v_bs_1364_, v_i_1363_, v___x_1368_);
v___x_1370_ = ((size_t)1ULL);
v___x_1371_ = lean_usize_add(v_i_1363_, v___x_1370_);
v___x_1372_ = lean_array_uset(v_bs_x27_1369_, v_i_1363_, v_v_1367_);
v_i_1363_ = v___x_1371_;
v_bs_1364_ = v___x_1372_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6___boxed(lean_object* v_sz_1374_, lean_object* v_i_1375_, lean_object* v_bs_1376_){
_start:
{
size_t v_sz_boxed_1377_; size_t v_i_boxed_1378_; lean_object* v_res_1379_; 
v_sz_boxed_1377_ = lean_unbox_usize(v_sz_1374_);
lean_dec(v_sz_1374_);
v_i_boxed_1378_ = lean_unbox_usize(v_i_1375_);
lean_dec(v_i_1375_);
v_res_1379_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v_sz_boxed_1377_, v_i_boxed_1378_, v_bs_1376_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(lean_object* v_00_u03b1_1380_, lean_object* v_x_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v___x_1384_; 
v___x_1384_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v_x_1381_, v___y_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed(lean_object* v_00_u03b1_1385_, lean_object* v_x_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(v_00_u03b1_1385_, v_x_1386_, v___y_1387_, v___y_1388_);
lean_dec_ref(v___y_1387_);
lean_dec_ref(v_x_1386_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(lean_object* v_stx_1393_, lean_object* v_as_x27_1394_, lean_object* v_b_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
if (lean_obj_tag(v_as_x27_1394_) == 0)
{
lean_object* v___x_1403_; 
lean_dec(v_stx_1393_);
v___x_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1403_, 0, v_b_1395_);
return v___x_1403_;
}
else
{
lean_object* v_head_1404_; lean_object* v_tail_1405_; lean_object* v_value_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
lean_dec_ref(v_b_1395_);
v_head_1404_ = lean_ctor_get(v_as_x27_1394_, 0);
v_tail_1405_ = lean_ctor_get(v_as_x27_1394_, 1);
v_value_1406_ = lean_ctor_get(v_head_1404_, 1);
v___x_1407_ = lean_box(0);
v___x_1408_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_1409_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_value_1406_);
lean_inc(v___y_1401_);
lean_inc_ref(v___y_1400_);
lean_inc(v___y_1399_);
lean_inc_ref(v___y_1398_);
lean_inc(v___y_1397_);
lean_inc_ref(v___y_1396_);
lean_inc(v_stx_1393_);
v___x_1410_ = lean_apply_8(v_value_1406_, v_stx_1393_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, lean_box(0));
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1420_; 
lean_dec(v_stx_1393_);
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1413_ = v___x_1410_;
v_isShared_1414_ = v_isSharedCheck_1420_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_a_1411_);
lean_dec(v___x_1410_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1420_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1415_, 0, v_a_1411_);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
lean_ctor_set(v___x_1416_, 1, v___x_1407_);
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 0, v___x_1416_);
v___x_1418_ = v___x_1413_;
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
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1441_; 
v_a_1421_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1423_ = v___x_1410_;
v_isShared_1424_ = v_isSharedCheck_1441_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1410_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1441_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
uint8_t v___y_1426_; uint8_t v___x_1439_; 
v___x_1439_ = l_Lean_Exception_isInterrupt(v_a_1421_);
if (v___x_1439_ == 0)
{
uint8_t v___x_1440_; 
lean_inc(v_a_1421_);
v___x_1440_ = l_Lean_Exception_isRuntime(v_a_1421_);
v___y_1426_ = v___x_1440_;
goto v___jp_1425_;
}
else
{
v___y_1426_ = v___x_1439_;
goto v___jp_1425_;
}
v___jp_1425_:
{
if (v___y_1426_ == 0)
{
if (lean_obj_tag(v_a_1421_) == 0)
{
lean_object* v___x_1428_; 
lean_dec(v_stx_1393_);
if (v_isShared_1424_ == 0)
{
v___x_1428_ = v___x_1423_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1421_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
else
{
lean_object* v_id_1430_; uint8_t v___x_1431_; 
v_id_1430_ = lean_ctor_get(v_a_1421_, 0);
v___x_1431_ = l_Lean_instBEqInternalExceptionId_beq(v___x_1409_, v_id_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1433_; 
lean_dec(v_stx_1393_);
if (v_isShared_1424_ == 0)
{
v___x_1433_ = v___x_1423_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1421_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
else
{
lean_dec_ref_known(v_a_1421_, 2);
lean_del_object(v___x_1423_);
v_as_x27_1394_ = v_tail_1405_;
v_b_1395_ = v___x_1408_;
goto _start;
}
}
}
else
{
lean_object* v___x_1437_; 
lean_dec(v_stx_1393_);
if (v_isShared_1424_ == 0)
{
v___x_1437_ = v___x_1423_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1421_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___boxed(lean_object* v_stx_1442_, lean_object* v_as_x27_1443_, lean_object* v_b_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_1442_, v_as_x27_1443_, v_b_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
lean_dec(v___y_1450_);
lean_dec_ref(v___y_1449_);
lean_dec(v___y_1448_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v_as_x27_1443_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(lean_object* v_reassigned_1455_, lean_object* v_rhs_x3f_1456_, lean_object* v_otherwise_x3f_1457_, lean_object* v_body_x3f_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_){
_start:
{
uint8_t v___y_1467_; lean_object* v___y_1468_; uint8_t v___y_1469_; uint8_t v___y_1470_; uint8_t v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v_body_1478_; lean_object* v___y_1499_; lean_object* v_otherwise_1500_; lean_object* v___y_1501_; lean_object* v___y_1502_; lean_object* v___y_1503_; lean_object* v___y_1504_; lean_object* v___y_1505_; lean_object* v___y_1506_; lean_object* v_rhs_1512_; lean_object* v___y_1513_; lean_object* v___y_1514_; lean_object* v___y_1515_; lean_object* v___y_1516_; lean_object* v___y_1517_; lean_object* v___y_1518_; 
if (lean_obj_tag(v_rhs_x3f_1456_) == 0)
{
lean_object* v___x_1523_; 
v___x_1523_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v_rhs_1512_ = v___x_1523_;
v___y_1513_ = v_a_1459_;
v___y_1514_ = v_a_1460_;
v___y_1515_ = v_a_1461_;
v___y_1516_ = v_a_1462_;
v___y_1517_ = v_a_1463_;
v___y_1518_ = v_a_1464_;
goto v___jp_1511_;
}
else
{
lean_object* v_val_1524_; lean_object* v___x_1525_; 
v_val_1524_ = lean_ctor_get(v_rhs_x3f_1456_, 0);
lean_inc(v_val_1524_);
lean_dec_ref_known(v_rhs_x3f_1456_, 1);
v___x_1525_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_val_1524_, v_a_1459_, v_a_1460_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
lean_dec_ref_known(v___x_1525_, 1);
v_rhs_1512_ = v_a_1526_;
v___y_1513_ = v_a_1459_;
v___y_1514_ = v_a_1460_;
v___y_1515_ = v_a_1461_;
v___y_1516_ = v_a_1462_;
v___y_1517_ = v_a_1463_;
v___y_1518_ = v_a_1464_;
goto v___jp_1511_;
}
else
{
lean_dec(v_body_x3f_1458_);
lean_dec(v_otherwise_x3f_1457_);
lean_dec_ref(v_reassigned_1455_);
return v___x_1525_;
}
}
v___jp_1466_:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1473_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_1473_, 0, v___y_1468_);
lean_ctor_set(v___x_1473_, 1, v___y_1472_);
lean_ctor_set_uint8(v___x_1473_, sizeof(void*)*2, v___y_1471_);
lean_ctor_set_uint8(v___x_1473_, sizeof(void*)*2 + 1, v___y_1470_);
lean_ctor_set_uint8(v___x_1473_, sizeof(void*)*2 + 2, v___y_1469_);
lean_ctor_set_uint8(v___x_1473_, sizeof(void*)*2 + 3, v___y_1467_);
v___x_1474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1473_);
return v___x_1474_;
}
v___jp_1475_:
{
lean_object* v___x_1479_; lean_object* v_info_1480_; uint8_t v_breaks_1481_; uint8_t v_continues_1482_; uint8_t v_returnsEarly_1483_; lean_object* v_numRegularExits_1484_; uint8_t v_noFallthrough_1485_; lean_object* v_reassigns_1486_; size_t v_sz_1487_; size_t v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; uint8_t v___x_1492_; 
v___x_1479_ = l_Lean_Elab_Do_ControlInfo_alternative(v_body_1478_, v___y_1477_);
v_info_1480_ = l_Lean_Elab_Do_ControlInfo_sequence(v___y_1476_, v___x_1479_);
v_breaks_1481_ = lean_ctor_get_uint8(v_info_1480_, sizeof(void*)*2);
v_continues_1482_ = lean_ctor_get_uint8(v_info_1480_, sizeof(void*)*2 + 1);
v_returnsEarly_1483_ = lean_ctor_get_uint8(v_info_1480_, sizeof(void*)*2 + 2);
v_numRegularExits_1484_ = lean_ctor_get(v_info_1480_, 0);
lean_inc(v_numRegularExits_1484_);
v_noFallthrough_1485_ = lean_ctor_get_uint8(v_info_1480_, sizeof(void*)*2 + 3);
v_reassigns_1486_ = lean_ctor_get(v_info_1480_, 1);
lean_inc(v_reassigns_1486_);
lean_dec_ref(v_info_1480_);
v_sz_1487_ = lean_array_size(v_reassigned_1455_);
v___x_1488_ = ((size_t)0ULL);
v___x_1489_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(v_sz_1487_, v___x_1488_, v_reassigned_1455_);
v___x_1490_ = lean_unsigned_to_nat(0u);
v___x_1491_ = lean_array_get_size(v___x_1489_);
v___x_1492_ = lean_nat_dec_lt(v___x_1490_, v___x_1491_);
if (v___x_1492_ == 0)
{
lean_dec_ref(v___x_1489_);
v___y_1467_ = v_noFallthrough_1485_;
v___y_1468_ = v_numRegularExits_1484_;
v___y_1469_ = v_returnsEarly_1483_;
v___y_1470_ = v_continues_1482_;
v___y_1471_ = v_breaks_1481_;
v___y_1472_ = v_reassigns_1486_;
goto v___jp_1466_;
}
else
{
uint8_t v___x_1493_; 
v___x_1493_ = lean_nat_dec_le(v___x_1491_, v___x_1491_);
if (v___x_1493_ == 0)
{
if (v___x_1492_ == 0)
{
lean_dec_ref(v___x_1489_);
v___y_1467_ = v_noFallthrough_1485_;
v___y_1468_ = v_numRegularExits_1484_;
v___y_1469_ = v_returnsEarly_1483_;
v___y_1470_ = v_continues_1482_;
v___y_1471_ = v_breaks_1481_;
v___y_1472_ = v_reassigns_1486_;
goto v___jp_1466_;
}
else
{
size_t v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = lean_usize_of_nat(v___x_1491_);
v___x_1495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(v___x_1489_, v___x_1488_, v___x_1494_, v_reassigns_1486_);
lean_dec_ref(v___x_1489_);
v___y_1467_ = v_noFallthrough_1485_;
v___y_1468_ = v_numRegularExits_1484_;
v___y_1469_ = v_returnsEarly_1483_;
v___y_1470_ = v_continues_1482_;
v___y_1471_ = v_breaks_1481_;
v___y_1472_ = v___x_1495_;
goto v___jp_1466_;
}
}
else
{
size_t v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = lean_usize_of_nat(v___x_1491_);
v___x_1497_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(v___x_1489_, v___x_1488_, v___x_1496_, v_reassigns_1486_);
lean_dec_ref(v___x_1489_);
v___y_1467_ = v_noFallthrough_1485_;
v___y_1468_ = v_numRegularExits_1484_;
v___y_1469_ = v_returnsEarly_1483_;
v___y_1470_ = v_continues_1482_;
v___y_1471_ = v_breaks_1481_;
v___y_1472_ = v___x_1497_;
goto v___jp_1466_;
}
}
}
v___jp_1498_:
{
if (lean_obj_tag(v_body_x3f_1458_) == 0)
{
lean_object* v___x_1507_; 
v___x_1507_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___y_1476_ = v___y_1499_;
v___y_1477_ = v_otherwise_1500_;
v_body_1478_ = v___x_1507_;
goto v___jp_1475_;
}
else
{
lean_object* v_val_1508_; lean_object* v___x_1509_; 
v_val_1508_ = lean_ctor_get(v_body_x3f_1458_, 0);
lean_inc(v_val_1508_);
lean_dec_ref_known(v_body_x3f_1458_, 1);
v___x_1509_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_1508_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v___x_1509_, 1);
v___y_1476_ = v___y_1499_;
v___y_1477_ = v_otherwise_1500_;
v_body_1478_ = v_a_1510_;
goto v___jp_1475_;
}
else
{
lean_dec_ref(v_otherwise_1500_);
lean_dec_ref(v___y_1499_);
lean_dec_ref(v_reassigned_1455_);
return v___x_1509_;
}
}
}
v___jp_1511_:
{
if (lean_obj_tag(v_otherwise_x3f_1457_) == 0)
{
lean_object* v___x_1519_; 
v___x_1519_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___y_1499_ = v_rhs_1512_;
v_otherwise_1500_ = v___x_1519_;
v___y_1501_ = v___y_1513_;
v___y_1502_ = v___y_1514_;
v___y_1503_ = v___y_1515_;
v___y_1504_ = v___y_1516_;
v___y_1505_ = v___y_1517_;
v___y_1506_ = v___y_1518_;
goto v___jp_1498_;
}
else
{
lean_object* v_val_1520_; lean_object* v___x_1521_; 
v_val_1520_ = lean_ctor_get(v_otherwise_x3f_1457_, 0);
lean_inc(v_val_1520_);
lean_dec_ref_known(v_otherwise_x3f_1457_, 1);
v___x_1521_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_1520_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1521_, 1);
v___y_1499_ = v_rhs_1512_;
v_otherwise_1500_ = v_a_1522_;
v___y_1501_ = v___y_1513_;
v___y_1502_ = v___y_1514_;
v___y_1503_ = v___y_1515_;
v___y_1504_ = v___y_1516_;
v___y_1505_ = v___y_1517_;
v___y_1506_ = v___y_1518_;
goto v___jp_1498_;
}
else
{
lean_dec_ref(v_rhs_1512_);
lean_dec(v_body_x3f_1458_);
lean_dec_ref(v_reassigned_1455_);
return v___x_1521_;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13(void){
_start:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1564_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12));
v___x_1565_ = l_Lean_stringToMessageData(v___x_1564_);
return v___x_1565_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15(void){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1567_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14));
v___x_1568_ = l_Lean_stringToMessageData(v___x_1567_);
return v___x_1568_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17(void){
_start:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1570_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16));
v___x_1571_ = l_Lean_stringToMessageData(v___x_1570_);
return v___x_1571_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19(void){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1573_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18));
v___x_1574_ = l_Lean_stringToMessageData(v___x_1573_);
return v___x_1574_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5(void){
_start:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1618_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4));
v___x_1619_ = l_Lean_stringToMessageData(v___x_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(uint8_t v_reassignment_1629_, lean_object* v_decl_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v___y_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v_reassigns_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___x_1666_; uint8_t v___x_1667_; 
v___x_1666_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1));
lean_inc(v_decl_1630_);
v___x_1667_ = l_Lean_Syntax_isOfKind(v_decl_1630_, v___x_1666_);
if (v___x_1667_ == 0)
{
lean_object* v___x_1668_; uint8_t v___x_1669_; 
v___x_1668_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3));
lean_inc(v_decl_1630_);
v___x_1669_ = l_Lean_Syntax_isOfKind(v_decl_1630_, v___x_1668_);
if (v___x_1669_ == 0)
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1670_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1671_ = lean_box(0);
v___x_1672_ = l_Lean_Syntax_formatStx(v_decl_1630_, v___x_1671_, v___x_1669_);
v___x_1673_ = l_Std_Format_defWidth;
v___x_1674_ = lean_unsigned_to_nat(0u);
v___x_1675_ = l_Std_Format_pretty(v___x_1672_, v___x_1673_, v___x_1674_, v___x_1674_);
v___x_1676_ = l_Lean_stringToMessageData(v___x_1675_);
v___x_1677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1670_);
lean_ctor_set(v___x_1677_, 1, v___x_1676_);
v___x_1678_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1677_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_);
return v___x_1678_;
}
else
{
lean_object* v___x_1679_; lean_object* v_pattern_1680_; lean_object* v___y_1682_; lean_object* v_otherwise_x3f_1683_; lean_object* v_body_x3f_x3f_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v_body_x3f_x3f_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___x_1714_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___x_1753_; uint8_t v___x_1754_; 
v___x_1679_ = lean_unsigned_to_nat(0u);
v_pattern_1680_ = l_Lean_Syntax_getArg(v_decl_1630_, v___x_1679_);
v___x_1714_ = lean_unsigned_to_nat(1u);
v___x_1753_ = l_Lean_Syntax_getArg(v_decl_1630_, v___x_1714_);
v___x_1754_ = l_Lean_Syntax_isNone(v___x_1753_);
if (v___x_1754_ == 0)
{
uint8_t v___x_1755_; 
lean_inc(v___x_1753_);
v___x_1755_ = l_Lean_Syntax_matchesNull(v___x_1753_, v___x_1714_);
if (v___x_1755_ == 0)
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_dec(v___x_1753_);
lean_dec(v_pattern_1680_);
v___x_1756_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1757_ = lean_box(0);
v___x_1758_ = l_Lean_Syntax_formatStx(v_decl_1630_, v___x_1757_, v___x_1755_);
v___x_1759_ = l_Std_Format_defWidth;
v___x_1760_ = l_Std_Format_pretty(v___x_1758_, v___x_1759_, v___x_1679_, v___x_1679_);
v___x_1761_ = l_Lean_stringToMessageData(v___x_1760_);
v___x_1762_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1756_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
v___x_1763_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1762_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_);
return v___x_1763_;
}
else
{
lean_object* v___x_1764_; lean_object* v___x_1765_; uint8_t v___x_1766_; 
v___x_1764_ = l_Lean_Syntax_getArg(v___x_1753_, v___x_1679_);
lean_dec(v___x_1753_);
v___x_1765_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8));
v___x_1766_ = l_Lean_Syntax_isOfKind(v___x_1764_, v___x_1765_);
if (v___x_1766_ == 0)
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
lean_dec(v_pattern_1680_);
v___x_1767_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1768_ = lean_box(0);
v___x_1769_ = l_Lean_Syntax_formatStx(v_decl_1630_, v___x_1768_, v___x_1766_);
v___x_1770_ = l_Std_Format_defWidth;
v___x_1771_ = l_Std_Format_pretty(v___x_1769_, v___x_1770_, v___x_1679_, v___x_1679_);
v___x_1772_ = l_Lean_stringToMessageData(v___x_1771_);
v___x_1773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1767_);
lean_ctor_set(v___x_1773_, 1, v___x_1772_);
v___x_1774_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1773_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_);
return v___x_1774_;
}
else
{
v___y_1716_ = v_a_1631_;
v___y_1717_ = v_a_1632_;
v___y_1718_ = v_a_1633_;
v___y_1719_ = v_a_1634_;
v___y_1720_ = v_a_1635_;
v___y_1721_ = v_a_1636_;
goto v___jp_1715_;
}
}
}
else
{
lean_dec(v___x_1753_);
v___y_1716_ = v_a_1631_;
v___y_1717_ = v_a_1632_;
v___y_1718_ = v_a_1633_;
v___y_1719_ = v_a_1634_;
v___y_1720_ = v_a_1635_;
v___y_1721_ = v_a_1636_;
goto v___jp_1715_;
}
v___jp_1681_:
{
if (v_reassignment_1629_ == 0)
{
lean_object* v___x_1691_; 
lean_dec(v_pattern_1680_);
v___x_1691_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___y_1651_ = v_body_x3f_x3f_1684_;
v___y_1652_ = v___y_1682_;
v___y_1653_ = v_otherwise_x3f_1683_;
v_reassigns_1654_ = v___x_1691_;
v___y_1655_ = v___y_1685_;
v___y_1656_ = v___y_1686_;
v___y_1657_ = v___y_1687_;
v___y_1658_ = v___y_1688_;
v___y_1659_ = v___y_1689_;
v___y_1660_ = v___y_1690_;
goto v___jp_1650_;
}
else
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Lean_Elab_Do_getPatternVarsEx(v_pattern_1680_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_a_1693_);
lean_dec_ref_known(v___x_1692_, 1);
v___y_1651_ = v_body_x3f_x3f_1684_;
v___y_1652_ = v___y_1682_;
v___y_1653_ = v_otherwise_x3f_1683_;
v_reassigns_1654_ = v_a_1693_;
v___y_1655_ = v___y_1685_;
v___y_1656_ = v___y_1686_;
v___y_1657_ = v___y_1687_;
v___y_1658_ = v___y_1688_;
v___y_1659_ = v___y_1689_;
v___y_1660_ = v___y_1690_;
goto v___jp_1650_;
}
else
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
lean_dec(v_body_x3f_x3f_1684_);
lean_dec(v_otherwise_x3f_1683_);
lean_dec(v___y_1682_);
v_a_1694_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1696_ = v___x_1692_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1692_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_a_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
}
v___jp_1702_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1712_, 0, v___y_1703_);
v___x_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1713_, 0, v_body_x3f_x3f_1705_);
v___y_1682_ = v___y_1704_;
v_otherwise_x3f_1683_ = v___x_1712_;
v_body_x3f_x3f_1684_ = v___x_1713_;
v___y_1685_ = v___y_1706_;
v___y_1686_ = v___y_1707_;
v___y_1687_ = v___y_1708_;
v___y_1688_ = v___y_1709_;
v___y_1689_ = v___y_1710_;
v___y_1690_ = v___y_1711_;
goto v___jp_1681_;
}
v___jp_1715_:
{
lean_object* v___x_1722_; lean_object* v_rhs_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; uint8_t v___x_1726_; 
v___x_1722_ = lean_unsigned_to_nat(3u);
v_rhs_1723_ = l_Lean_Syntax_getArg(v_decl_1630_, v___x_1722_);
v___x_1724_ = lean_unsigned_to_nat(4u);
v___x_1725_ = l_Lean_Syntax_getArg(v_decl_1630_, v___x_1724_);
v___x_1726_ = l_Lean_Syntax_isNone(v___x_1725_);
if (v___x_1726_ == 0)
{
uint8_t v___x_1727_; 
lean_inc(v___x_1725_);
v___x_1727_ = l_Lean_Syntax_matchesNull(v___x_1725_, v___x_1722_);
if (v___x_1727_ == 0)
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
lean_dec(v___x_1725_);
lean_dec(v_rhs_1723_);
lean_dec(v_pattern_1680_);
v___x_1728_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1729_ = lean_box(0);
v___x_1730_ = l_Lean_Syntax_formatStx(v_decl_1630_, v___x_1729_, v___x_1727_);
v___x_1731_ = l_Std_Format_defWidth;
v___x_1732_ = l_Std_Format_pretty(v___x_1730_, v___x_1731_, v___x_1679_, v___x_1679_);
v___x_1733_ = l_Lean_stringToMessageData(v___x_1732_);
v___x_1734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1728_);
lean_ctor_set(v___x_1734_, 1, v___x_1733_);
v___x_1735_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1734_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_);
return v___x_1735_;
}
else
{
lean_object* v___x_1736_; lean_object* v_otherwise_x3f_1737_; lean_object* v___x_1738_; uint8_t v___x_1739_; 
v___x_1736_ = lean_unsigned_to_nat(2u);
v_otherwise_x3f_1737_ = l_Lean_Syntax_getArg(v___x_1725_, v___x_1714_);
v___x_1738_ = l_Lean_Syntax_getArg(v___x_1725_, v___x_1736_);
lean_dec(v___x_1725_);
v___x_1739_ = l_Lean_Syntax_isNone(v___x_1738_);
if (v___x_1739_ == 0)
{
uint8_t v___x_1740_; 
lean_inc(v___x_1738_);
v___x_1740_ = l_Lean_Syntax_matchesNull(v___x_1738_, v___x_1714_);
if (v___x_1740_ == 0)
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
lean_dec(v___x_1738_);
lean_dec(v_otherwise_x3f_1737_);
lean_dec(v_rhs_1723_);
lean_dec(v_pattern_1680_);
v___x_1741_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1742_ = lean_box(0);
v___x_1743_ = l_Lean_Syntax_formatStx(v_decl_1630_, v___x_1742_, v___x_1740_);
v___x_1744_ = l_Std_Format_defWidth;
v___x_1745_ = l_Std_Format_pretty(v___x_1743_, v___x_1744_, v___x_1679_, v___x_1679_);
v___x_1746_ = l_Lean_stringToMessageData(v___x_1745_);
v___x_1747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1741_);
lean_ctor_set(v___x_1747_, 1, v___x_1746_);
v___x_1748_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1747_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_);
return v___x_1748_;
}
else
{
lean_object* v_body_x3f_x3f_1749_; lean_object* v___x_1750_; 
lean_dec(v_decl_1630_);
v_body_x3f_x3f_1749_ = l_Lean_Syntax_getArg(v___x_1738_, v___x_1679_);
lean_dec(v___x_1738_);
v___x_1750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1750_, 0, v_body_x3f_x3f_1749_);
v___y_1703_ = v_otherwise_x3f_1737_;
v___y_1704_ = v_rhs_1723_;
v_body_x3f_x3f_1705_ = v___x_1750_;
v___y_1706_ = v___y_1716_;
v___y_1707_ = v___y_1717_;
v___y_1708_ = v___y_1718_;
v___y_1709_ = v___y_1719_;
v___y_1710_ = v___y_1720_;
v___y_1711_ = v___y_1721_;
goto v___jp_1702_;
}
}
else
{
lean_object* v___x_1751_; 
lean_dec(v___x_1738_);
lean_dec(v_decl_1630_);
v___x_1751_ = lean_box(0);
v___y_1703_ = v_otherwise_x3f_1737_;
v___y_1704_ = v_rhs_1723_;
v_body_x3f_x3f_1705_ = v___x_1751_;
v___y_1706_ = v___y_1716_;
v___y_1707_ = v___y_1717_;
v___y_1708_ = v___y_1718_;
v___y_1709_ = v___y_1719_;
v___y_1710_ = v___y_1720_;
v___y_1711_ = v___y_1721_;
goto v___jp_1702_;
}
}
}
else
{
lean_object* v___x_1752_; 
lean_dec(v___x_1725_);
lean_dec(v_decl_1630_);
v___x_1752_ = lean_box(0);
v___y_1682_ = v_rhs_1723_;
v_otherwise_x3f_1683_ = v___x_1752_;
v_body_x3f_x3f_1684_ = v___x_1752_;
v___y_1685_ = v___y_1716_;
v___y_1686_ = v___y_1717_;
v___y_1687_ = v___y_1718_;
v___y_1688_ = v___y_1719_;
v___y_1689_ = v___y_1720_;
v___y_1690_ = v___y_1721_;
goto v___jp_1681_;
}
}
}
}
else
{
lean_object* v___x_1775_; lean_object* v_x_1776_; lean_object* v___y_1778_; lean_object* v___y_1779_; lean_object* v___y_1780_; lean_object* v___y_1781_; lean_object* v___y_1782_; lean_object* v___y_1783_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
v___x_1775_ = lean_unsigned_to_nat(0u);
v_x_1776_ = l_Lean_Syntax_getArg(v_decl_1630_, v___x_1775_);
v___x_1790_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10));
lean_inc(v_x_1776_);
v___x_1791_ = l_Lean_Syntax_isOfKind(v_x_1776_, v___x_1790_);
if (v___x_1791_ == 0)
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
lean_dec(v_x_1776_);
v___x_1792_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1793_ = lean_box(0);
v___x_1794_ = l_Lean_Syntax_formatStx(v_decl_1630_, v___x_1793_, v___x_1791_);
v___x_1795_ = l_Std_Format_defWidth;
v___x_1796_ = l_Std_Format_pretty(v___x_1794_, v___x_1795_, v___x_1775_, v___x_1775_);
v___x_1797_ = l_Lean_stringToMessageData(v___x_1796_);
v___x_1798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1792_);
lean_ctor_set(v___x_1798_, 1, v___x_1797_);
v___x_1799_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1798_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_);
return v___x_1799_;
}
else
{
lean_object* v___x_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; 
v___x_1800_ = lean_unsigned_to_nat(1u);
v___x_1801_ = l_Lean_Syntax_getArg(v_decl_1630_, v___x_1800_);
v___x_1802_ = l_Lean_Syntax_isNone(v___x_1801_);
if (v___x_1802_ == 0)
{
uint8_t v___x_1803_; 
lean_inc(v___x_1801_);
v___x_1803_ = l_Lean_Syntax_matchesNull(v___x_1801_, v___x_1800_);
if (v___x_1803_ == 0)
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
lean_dec(v___x_1801_);
lean_dec(v_x_1776_);
v___x_1804_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1805_ = lean_box(0);
v___x_1806_ = l_Lean_Syntax_formatStx(v_decl_1630_, v___x_1805_, v___x_1803_);
v___x_1807_ = l_Std_Format_defWidth;
v___x_1808_ = l_Std_Format_pretty(v___x_1806_, v___x_1807_, v___x_1775_, v___x_1775_);
v___x_1809_ = l_Lean_stringToMessageData(v___x_1808_);
v___x_1810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1804_);
lean_ctor_set(v___x_1810_, 1, v___x_1809_);
v___x_1811_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1810_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_);
return v___x_1811_;
}
else
{
lean_object* v___x_1812_; lean_object* v___x_1813_; uint8_t v___x_1814_; 
v___x_1812_ = l_Lean_Syntax_getArg(v___x_1801_, v___x_1775_);
lean_dec(v___x_1801_);
v___x_1813_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8));
v___x_1814_ = l_Lean_Syntax_isOfKind(v___x_1812_, v___x_1813_);
if (v___x_1814_ == 0)
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
lean_dec(v_x_1776_);
v___x_1815_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1816_ = lean_box(0);
v___x_1817_ = l_Lean_Syntax_formatStx(v_decl_1630_, v___x_1816_, v___x_1814_);
v___x_1818_ = l_Std_Format_defWidth;
v___x_1819_ = l_Std_Format_pretty(v___x_1817_, v___x_1818_, v___x_1775_, v___x_1775_);
v___x_1820_ = l_Lean_stringToMessageData(v___x_1819_);
v___x_1821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1815_);
lean_ctor_set(v___x_1821_, 1, v___x_1820_);
v___x_1822_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1821_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_);
return v___x_1822_;
}
else
{
v___y_1778_ = v_a_1631_;
v___y_1779_ = v_a_1632_;
v___y_1780_ = v_a_1633_;
v___y_1781_ = v_a_1634_;
v___y_1782_ = v_a_1635_;
v___y_1783_ = v_a_1636_;
goto v___jp_1777_;
}
}
}
else
{
lean_dec(v___x_1801_);
v___y_1778_ = v_a_1631_;
v___y_1779_ = v_a_1632_;
v___y_1780_ = v_a_1633_;
v___y_1781_ = v_a_1634_;
v___y_1782_ = v_a_1635_;
v___y_1783_ = v_a_1636_;
goto v___jp_1777_;
}
}
v___jp_1777_:
{
lean_object* v___x_1784_; lean_object* v_rhs_1785_; 
v___x_1784_ = lean_unsigned_to_nat(3u);
v_rhs_1785_ = l_Lean_Syntax_getArg(v_decl_1630_, v___x_1784_);
lean_dec(v_decl_1630_);
if (v_reassignment_1629_ == 0)
{
lean_object* v___x_1786_; 
lean_dec(v_x_1776_);
v___x_1786_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___y_1639_ = v___y_1780_;
v___y_1640_ = v___y_1778_;
v___y_1641_ = v___y_1781_;
v___y_1642_ = v___y_1783_;
v___y_1643_ = v___y_1779_;
v___y_1644_ = v_rhs_1785_;
v___y_1645_ = v___y_1782_;
v___y_1646_ = v___x_1786_;
goto v___jp_1638_;
}
else
{
lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1787_ = lean_unsigned_to_nat(1u);
v___x_1788_ = lean_mk_empty_array_with_capacity(v___x_1787_);
v___x_1789_ = lean_array_push(v___x_1788_, v_x_1776_);
v___y_1639_ = v___y_1780_;
v___y_1640_ = v___y_1778_;
v___y_1641_ = v___y_1781_;
v___y_1642_ = v___y_1783_;
v___y_1643_ = v___y_1779_;
v___y_1644_ = v_rhs_1785_;
v___y_1645_ = v___y_1782_;
v___y_1646_ = v___x_1789_;
goto v___jp_1638_;
}
}
}
v___jp_1638_:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___y_1644_);
v___x_1648_ = lean_box(0);
v___x_1649_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v___y_1646_, v___x_1647_, v___x_1648_, v___x_1648_, v___y_1640_, v___y_1643_, v___y_1639_, v___y_1641_, v___y_1645_, v___y_1642_);
return v___x_1649_;
}
v___jp_1650_:
{
lean_object* v___x_1661_; 
v___x_1661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1661_, 0, v___y_1652_);
if (lean_obj_tag(v___y_1651_) == 0)
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = lean_box(0);
v___x_1663_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigns_1654_, v___x_1661_, v___y_1653_, v___x_1662_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_);
return v___x_1663_;
}
else
{
lean_object* v_val_1664_; lean_object* v___x_1665_; 
v_val_1664_ = lean_ctor_get(v___y_1651_, 0);
lean_inc(v_val_1664_);
lean_dec_ref_known(v___y_1651_, 1);
v___x_1665_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigns_1654_, v___x_1661_, v___y_1653_, v_val_1664_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_);
return v___x_1665_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(lean_object* v_as_1951_, size_t v_sz_1952_, size_t v_i_1953_, lean_object* v_b_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
uint8_t v___x_1962_; 
v___x_1962_ = lean_usize_dec_lt(v_i_1953_, v_sz_1952_);
if (v___x_1962_ == 0)
{
lean_object* v___x_1963_; 
v___x_1963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1963_, 0, v_b_1954_);
return v___x_1963_;
}
else
{
lean_object* v_a_1964_; lean_object* v___x_1965_; 
v_a_1964_ = lean_array_uget_borrowed(v_as_1951_, v_i_1953_);
lean_inc(v_a_1964_);
v___x_1965_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_a_1964_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v_a_1966_; lean_object* v___x_1967_; size_t v___x_1968_; size_t v___x_1969_; 
v_a_1966_ = lean_ctor_get(v___x_1965_, 0);
lean_inc(v_a_1966_);
lean_dec_ref_known(v___x_1965_, 1);
v___x_1967_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_1966_, v_b_1954_);
v___x_1968_ = ((size_t)1ULL);
v___x_1969_ = lean_usize_add(v_i_1953_, v___x_1968_);
v_i_1953_ = v___x_1969_;
v_b_1954_ = v___x_1967_;
goto _start;
}
else
{
lean_dec_ref(v_b_1954_);
return v___x_1965_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5(void){
_start:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4));
v___x_1985_ = l_Lean_stringToMessageData(v___x_1984_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(uint8_t v___x_2000_, lean_object* v_as_2001_, size_t v_sz_2002_, size_t v_i_2003_, lean_object* v_b_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_){
_start:
{
lean_object* v_a_2013_; uint8_t v___x_2017_; 
v___x_2017_ = lean_usize_dec_lt(v_i_2003_, v_sz_2002_);
if (v___x_2017_ == 0)
{
lean_object* v___x_2018_; 
v___x_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2018_, 0, v_b_2004_);
return v___x_2018_;
}
else
{
lean_object* v___x_2019_; lean_object* v_a_2020_; uint8_t v___x_2021_; 
v___x_2019_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1));
v_a_2020_ = lean_array_uget_borrowed(v_as_2001_, v_i_2003_);
lean_inc(v_a_2020_);
v___x_2021_ = l_Lean_Syntax_isOfKind(v_a_2020_, v___x_2019_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; 
v___x_2022_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2022_) == 0)
{
lean_dec_ref_known(v___x_2022_, 1);
v_a_2013_ = v_b_2004_;
goto v___jp_2012_;
}
else
{
lean_object* v_a_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2030_; 
lean_dec_ref(v_b_2004_);
v_a_2023_ = lean_ctor_get(v___x_2022_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_2022_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2025_ = v___x_2022_;
v_isShared_2026_ = v_isSharedCheck_2030_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_a_2023_);
lean_dec(v___x_2022_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2030_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2028_; 
if (v_isShared_2026_ == 0)
{
v___x_2028_ = v___x_2025_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_a_2023_);
v___x_2028_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
return v___x_2028_;
}
}
}
}
else
{
lean_object* v___x_2031_; lean_object* v___y_2033_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; uint8_t v___x_2056_; 
v___x_2031_ = lean_unsigned_to_nat(3u);
v___x_2050_ = lean_unsigned_to_nat(1u);
v___x_2051_ = l_Lean_Syntax_getArg(v_a_2020_, v___x_2050_);
v___x_2052_ = l_Lean_Syntax_getArgs(v___x_2051_);
lean_dec(v___x_2051_);
v___x_2053_ = lean_unsigned_to_nat(0u);
v___x_2054_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_2055_ = lean_array_get_size(v___x_2052_);
v___x_2056_ = lean_nat_dec_lt(v___x_2053_, v___x_2055_);
if (v___x_2056_ == 0)
{
lean_dec_ref(v___x_2052_);
v___y_2033_ = v___x_2054_;
goto v___jp_2032_;
}
else
{
lean_object* v___x_2057_; lean_object* v___x_2058_; size_t v___x_2059_; size_t v___x_2060_; lean_object* v___x_2061_; lean_object* v_snd_2062_; 
v___x_2057_ = lean_box(v___x_2056_);
v___x_2058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2057_);
lean_ctor_set(v___x_2058_, 1, v___x_2054_);
v___x_2059_ = ((size_t)0ULL);
v___x_2060_ = lean_usize_of_nat(v___x_2055_);
v___x_2061_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2021_, v___x_2000_, v___x_2052_, v___x_2059_, v___x_2060_, v___x_2058_);
lean_dec_ref(v___x_2052_);
v_snd_2062_ = lean_ctor_get(v___x_2061_, 1);
lean_inc(v_snd_2062_);
lean_dec_ref(v___x_2061_);
v___y_2033_ = v_snd_2062_;
goto v___jp_2032_;
}
v___jp_2032_:
{
size_t v_sz_2034_; size_t v___x_2035_; lean_object* v___x_2036_; 
v_sz_2034_ = lean_array_size(v___y_2033_);
v___x_2035_ = ((size_t)0ULL);
v___x_2036_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_2034_, v___x_2035_, v___y_2033_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v___x_2037_; 
v___x_2037_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_dec_ref_known(v___x_2037_, 1);
v_a_2013_ = v_b_2004_;
goto v___jp_2012_;
}
else
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2045_; 
lean_dec_ref(v_b_2004_);
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_a_2038_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
return v___x_2043_;
}
}
}
}
else
{
lean_object* v___x_2046_; lean_object* v___x_2047_; 
lean_dec_ref_known(v___x_2036_, 1);
v___x_2046_ = l_Lean_Syntax_getArg(v_a_2020_, v___x_2031_);
v___x_2047_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2046_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_a_2048_; lean_object* v___x_2049_; 
v_a_2048_ = lean_ctor_get(v___x_2047_, 0);
lean_inc(v_a_2048_);
lean_dec_ref_known(v___x_2047_, 1);
v___x_2049_ = l_Lean_Elab_Do_ControlInfo_alternative(v_b_2004_, v_a_2048_);
v_a_2013_ = v___x_2049_;
goto v___jp_2012_;
}
else
{
lean_dec_ref(v_b_2004_);
return v___x_2047_;
}
}
}
}
}
v___jp_2012_:
{
size_t v___x_2014_; size_t v___x_2015_; 
v___x_2014_ = ((size_t)1ULL);
v___x_2015_ = lean_usize_add(v_i_2003_, v___x_2014_);
v_i_2003_ = v___x_2015_;
v_b_2004_ = v_a_2013_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(lean_object* v_as_2063_, size_t v_sz_2064_, size_t v_i_2065_, lean_object* v_b_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v_a_2075_; uint8_t v___x_2079_; 
v___x_2079_ = lean_usize_dec_lt(v_i_2065_, v_sz_2064_);
if (v___x_2079_ == 0)
{
lean_object* v___x_2080_; 
v___x_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2080_, 0, v_b_2066_);
return v___x_2080_;
}
else
{
lean_object* v___x_2081_; lean_object* v_a_2082_; lean_object* v___y_2084_; lean_object* v___y_2085_; lean_object* v___y_2086_; lean_object* v___y_2087_; lean_object* v___y_2088_; lean_object* v___y_2089_; lean_object* v___x_2095_; uint8_t v___x_2096_; 
v___x_2081_ = lean_unsigned_to_nat(0u);
v_a_2082_ = lean_array_uget_borrowed(v_as_2063_, v_i_2065_);
v___x_2095_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1));
lean_inc(v_a_2082_);
v___x_2096_ = l_Lean_Syntax_isOfKind(v_a_2082_, v___x_2095_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; uint8_t v___x_2098_; 
v___x_2097_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3));
lean_inc(v_a_2082_);
v___x_2098_ = l_Lean_Syntax_isOfKind(v_a_2082_, v___x_2097_);
if (v___x_2098_ == 0)
{
lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2099_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2100_ = lean_box(0);
lean_inc(v_a_2082_);
v___x_2101_ = l_Lean_Syntax_formatStx(v_a_2082_, v___x_2100_, v___x_2098_);
v___x_2102_ = l_Std_Format_defWidth;
v___x_2103_ = l_Std_Format_pretty(v___x_2101_, v___x_2102_, v___x_2081_, v___x_2081_);
v___x_2104_ = l_Lean_stringToMessageData(v___x_2103_);
v___x_2105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2099_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
v___x_2106_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2105_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_dec_ref_known(v___x_2106_, 1);
v_a_2075_ = v_b_2066_;
goto v___jp_2074_;
}
else
{
lean_object* v_a_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2114_; 
lean_dec_ref(v_b_2066_);
v_a_2107_ = lean_ctor_get(v___x_2106_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2106_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2109_ = v___x_2106_;
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_a_2107_);
lean_dec(v___x_2106_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2112_; 
if (v_isShared_2110_ == 0)
{
v___x_2112_ = v___x_2109_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v_a_2107_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
}
else
{
lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; uint8_t v___x_2118_; 
v___x_2115_ = lean_unsigned_to_nat(1u);
v___x_2116_ = l_Lean_Syntax_getArg(v_a_2082_, v___x_2115_);
v___x_2117_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7));
lean_inc(v___x_2116_);
v___x_2118_ = l_Lean_Syntax_isOfKind(v___x_2116_, v___x_2117_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
lean_dec(v___x_2116_);
v___x_2119_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2120_ = lean_box(0);
lean_inc(v_a_2082_);
v___x_2121_ = l_Lean_Syntax_formatStx(v_a_2082_, v___x_2120_, v___x_2118_);
v___x_2122_ = l_Std_Format_defWidth;
v___x_2123_ = l_Std_Format_pretty(v___x_2121_, v___x_2122_, v___x_2081_, v___x_2081_);
v___x_2124_ = l_Lean_stringToMessageData(v___x_2123_);
v___x_2125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2119_);
lean_ctor_set(v___x_2125_, 1, v___x_2124_);
v___x_2126_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2125_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_dec_ref_known(v___x_2126_, 1);
v_a_2075_ = v_b_2066_;
goto v___jp_2074_;
}
else
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2134_; 
lean_dec_ref(v_b_2066_);
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2134_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2129_ = v___x_2126_;
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v___x_2126_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2132_; 
if (v_isShared_2130_ == 0)
{
v___x_2132_ = v___x_2129_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_a_2127_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
}
else
{
lean_object* v___x_2135_; lean_object* v___x_2136_; size_t v_sz_2137_; size_t v___x_2138_; lean_object* v___x_2139_; 
v___x_2135_ = l_Lean_Syntax_getArg(v___x_2116_, v___x_2081_);
lean_dec(v___x_2116_);
v___x_2136_ = l_Lean_Syntax_getArgs(v___x_2135_);
lean_dec(v___x_2135_);
v_sz_2137_ = lean_array_size(v___x_2136_);
v___x_2138_ = ((size_t)0ULL);
v___x_2139_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_2096_, v___x_2136_, v_sz_2137_, v___x_2138_, v_b_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
lean_dec_ref(v___x_2136_);
if (lean_obj_tag(v___x_2139_) == 0)
{
lean_object* v_a_2140_; 
v_a_2140_ = lean_ctor_get(v___x_2139_, 0);
lean_inc(v_a_2140_);
lean_dec_ref_known(v___x_2139_, 1);
v_a_2075_ = v_a_2140_;
goto v___jp_2074_;
}
else
{
return v___x_2139_;
}
}
}
}
else
{
lean_object* v___x_2141_; lean_object* v___x_2142_; uint8_t v___x_2143_; 
v___x_2141_ = lean_unsigned_to_nat(2u);
v___x_2142_ = l_Lean_Syntax_getArg(v_a_2082_, v___x_2141_);
v___x_2143_ = l_Lean_Syntax_isNone(v___x_2142_);
if (v___x_2143_ == 0)
{
uint8_t v___x_2144_; 
v___x_2144_ = l_Lean_Syntax_matchesNull(v___x_2142_, v___x_2141_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2145_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2146_ = lean_box(0);
lean_inc(v_a_2082_);
v___x_2147_ = l_Lean_Syntax_formatStx(v_a_2082_, v___x_2146_, v___x_2144_);
v___x_2148_ = l_Std_Format_defWidth;
v___x_2149_ = l_Std_Format_pretty(v___x_2147_, v___x_2148_, v___x_2081_, v___x_2081_);
v___x_2150_ = l_Lean_stringToMessageData(v___x_2149_);
v___x_2151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2145_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2151_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
if (lean_obj_tag(v___x_2152_) == 0)
{
lean_dec_ref_known(v___x_2152_, 1);
v_a_2075_ = v_b_2066_;
goto v___jp_2074_;
}
else
{
lean_object* v_a_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2160_; 
lean_dec_ref(v_b_2066_);
v_a_2153_ = lean_ctor_get(v___x_2152_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2155_ = v___x_2152_;
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_a_2153_);
lean_dec(v___x_2152_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2158_; 
if (v_isShared_2156_ == 0)
{
v___x_2158_ = v___x_2155_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_a_2153_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
else
{
v___y_2084_ = v___y_2067_;
v___y_2085_ = v___y_2068_;
v___y_2086_ = v___y_2069_;
v___y_2087_ = v___y_2070_;
v___y_2088_ = v___y_2071_;
v___y_2089_ = v___y_2072_;
goto v___jp_2083_;
}
}
else
{
lean_dec(v___x_2142_);
v___y_2084_ = v___y_2067_;
v___y_2085_ = v___y_2068_;
v___y_2086_ = v___y_2069_;
v___y_2087_ = v___y_2070_;
v___y_2088_ = v___y_2071_;
v___y_2089_ = v___y_2072_;
goto v___jp_2083_;
}
}
v___jp_2083_:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2090_ = lean_unsigned_to_nat(4u);
v___x_2091_ = l_Lean_Syntax_getArg(v_a_2082_, v___x_2090_);
v___x_2092_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2091_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_);
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_object* v_a_2093_; lean_object* v___x_2094_; 
v_a_2093_ = lean_ctor_get(v___x_2092_, 0);
lean_inc(v_a_2093_);
lean_dec_ref_known(v___x_2092_, 1);
v___x_2094_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_2093_, v_b_2066_);
v_a_2075_ = v___x_2094_;
goto v___jp_2074_;
}
else
{
lean_dec_ref(v_b_2066_);
return v___x_2092_;
}
}
}
v___jp_2074_:
{
size_t v___x_2076_; size_t v___x_2077_; 
v___x_2076_ = ((size_t)1ULL);
v___x_2077_ = lean_usize_add(v_i_2065_, v___x_2076_);
v_i_2065_ = v___x_2077_;
v_b_2066_ = v_a_2075_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(lean_object* v_stx_x3f_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_){
_start:
{
if (lean_obj_tag(v_stx_x3f_2161_) == 0)
{
lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2169_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___x_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2169_);
return v___x_2170_;
}
else
{
lean_object* v_val_2171_; lean_object* v___x_2172_; 
v_val_2171_ = lean_ctor_get(v_stx_x3f_2161_, 0);
lean_inc(v_val_2171_);
lean_dec_ref_known(v_stx_x3f_2161_, 1);
v___x_2172_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2171_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_, v_a_2167_);
return v___x_2172_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(uint8_t v___x_2191_, lean_object* v_as_2192_, size_t v_sz_2193_, size_t v_i_2194_, lean_object* v_b_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_){
_start:
{
lean_object* v_a_2204_; uint8_t v___x_2208_; 
v___x_2208_ = lean_usize_dec_lt(v_i_2194_, v_sz_2193_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2209_; 
v___x_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2209_, 0, v_b_2195_);
return v___x_2209_;
}
else
{
lean_object* v___x_2210_; lean_object* v_a_2211_; uint8_t v___x_2212_; 
v___x_2210_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1));
v_a_2211_ = lean_array_uget_borrowed(v_as_2192_, v_i_2194_);
lean_inc(v_a_2211_);
v___x_2212_ = l_Lean_Syntax_isOfKind(v_a_2211_, v___x_2210_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; 
v___x_2213_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_dec_ref_known(v___x_2213_, 1);
v_a_2204_ = v_b_2195_;
goto v___jp_2203_;
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
lean_dec_ref(v_b_2195_);
v_a_2214_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2213_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2213_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
else
{
lean_object* v___x_2222_; lean_object* v___y_2224_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; uint8_t v___x_2247_; 
v___x_2222_ = lean_unsigned_to_nat(3u);
v___x_2241_ = lean_unsigned_to_nat(1u);
v___x_2242_ = l_Lean_Syntax_getArg(v_a_2211_, v___x_2241_);
v___x_2243_ = l_Lean_Syntax_getArgs(v___x_2242_);
lean_dec(v___x_2242_);
v___x_2244_ = lean_unsigned_to_nat(0u);
v___x_2245_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_2246_ = lean_array_get_size(v___x_2243_);
v___x_2247_ = lean_nat_dec_lt(v___x_2244_, v___x_2246_);
if (v___x_2247_ == 0)
{
lean_dec_ref(v___x_2243_);
v___y_2224_ = v___x_2245_;
goto v___jp_2223_;
}
else
{
lean_object* v___x_2248_; lean_object* v___x_2249_; size_t v___x_2250_; size_t v___x_2251_; lean_object* v___x_2252_; lean_object* v_snd_2253_; 
v___x_2248_ = lean_box(v___x_2247_);
v___x_2249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2248_);
lean_ctor_set(v___x_2249_, 1, v___x_2245_);
v___x_2250_ = ((size_t)0ULL);
v___x_2251_ = lean_usize_of_nat(v___x_2246_);
v___x_2252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2212_, v___x_2191_, v___x_2243_, v___x_2250_, v___x_2251_, v___x_2249_);
lean_dec_ref(v___x_2243_);
v_snd_2253_ = lean_ctor_get(v___x_2252_, 1);
lean_inc(v_snd_2253_);
lean_dec_ref(v___x_2252_);
v___y_2224_ = v_snd_2253_;
goto v___jp_2223_;
}
v___jp_2223_:
{
size_t v_sz_2225_; size_t v___x_2226_; lean_object* v___x_2227_; 
v_sz_2225_ = lean_array_size(v___y_2224_);
v___x_2226_ = ((size_t)0ULL);
v___x_2227_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_2225_, v___x_2226_, v___y_2224_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v___x_2228_; 
v___x_2228_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_dec_ref_known(v___x_2228_, 1);
v_a_2204_ = v_b_2195_;
goto v___jp_2203_;
}
else
{
lean_object* v_a_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
lean_dec_ref(v_b_2195_);
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2231_ = v___x_2228_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_a_2229_);
lean_dec(v___x_2228_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_a_2229_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
}
else
{
lean_object* v___x_2237_; lean_object* v___x_2238_; 
lean_dec_ref_known(v___x_2227_, 1);
v___x_2237_ = l_Lean_Syntax_getArg(v_a_2211_, v___x_2222_);
v___x_2238_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2237_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_object* v_a_2239_; lean_object* v___x_2240_; 
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_a_2239_);
lean_dec_ref_known(v___x_2238_, 1);
v___x_2240_ = l_Lean_Elab_Do_ControlInfo_alternative(v_b_2195_, v_a_2239_);
v_a_2204_ = v___x_2240_;
goto v___jp_2203_;
}
else
{
lean_dec_ref(v_b_2195_);
return v___x_2238_;
}
}
}
}
}
v___jp_2203_:
{
size_t v___x_2205_; size_t v___x_2206_; 
v___x_2205_ = ((size_t)1ULL);
v___x_2206_ = lean_usize_add(v_i_2194_, v___x_2205_);
v_i_2194_ = v___x_2206_;
v_b_2195_ = v_a_2204_;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91(void){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; uint8_t v___x_2292_; uint8_t v___x_2293_; lean_object* v___x_2294_; 
v___x_2290_ = l_Lean_NameSet_empty;
v___x_2291_ = lean_unsigned_to_nat(0u);
v___x_2292_ = 0;
v___x_2293_ = 1;
v___x_2294_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2294_, 0, v___x_2291_);
lean_ctor_set(v___x_2294_, 1, v___x_2290_);
lean_ctor_set_uint8(v___x_2294_, sizeof(void*)*2, v___x_2293_);
lean_ctor_set_uint8(v___x_2294_, sizeof(void*)*2 + 1, v___x_2292_);
lean_ctor_set_uint8(v___x_2294_, sizeof(void*)*2 + 2, v___x_2292_);
lean_ctor_set_uint8(v___x_2294_, sizeof(void*)*2 + 3, v___x_2293_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem(lean_object* v_stx_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_){
_start:
{
lean_object* v___y_2304_; lean_object* v_bodyInfo_2305_; lean_object* v___y_2309_; lean_object* v___y_2310_; lean_object* v___y_2311_; lean_object* v___y_2312_; lean_object* v___y_2313_; lean_object* v___y_2314_; lean_object* v___y_2315_; lean_object* v___y_2316_; lean_object* v___y_2322_; lean_object* v___y_2323_; lean_object* v___y_2324_; lean_object* v___y_2325_; lean_object* v___y_2326_; lean_object* v___y_2327_; lean_object* v___y_2349_; lean_object* v_bodyInfo_2350_; lean_object* v___x_2353_; lean_object* v_env_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2353_ = lean_st_ref_get(v_a_2301_);
v_env_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc_ref(v_env_2354_);
lean_dec(v___x_2353_);
lean_inc(v_stx_2295_);
v___x_2355_ = lean_alloc_closure((void*)(l_Lean_Elab_expandMacroImpl_x3f___boxed), 4, 2);
lean_closure_set(v___x_2355_, 0, v_env_2354_);
lean_closure_set(v___x_2355_, 1, v_stx_2295_);
v___x_2356_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v___x_2355_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2356_) == 0)
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_4912_; 
v_a_2357_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_4912_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_4912_ == 0)
{
v___x_2359_ = v___x_2356_;
v_isShared_2360_ = v_isSharedCheck_4912_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2356_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_4912_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
if (lean_obj_tag(v_a_2357_) == 1)
{
lean_object* v_val_2369_; lean_object* v_snd_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
lean_del_object(v___x_2359_);
lean_dec(v_stx_2295_);
v_val_2369_ = lean_ctor_get(v_a_2357_, 0);
lean_inc(v_val_2369_);
lean_dec_ref_known(v_a_2357_, 1);
v_snd_2370_ = lean_ctor_get(v_val_2369_, 1);
lean_inc(v_snd_2370_);
lean_dec(v_val_2369_);
v___x_2371_ = lean_alloc_closure((void*)(l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed), 4, 2);
lean_closure_set(v___x_2371_, 0, lean_box(0));
lean_closure_set(v___x_2371_, 1, v_snd_2370_);
v___x_2372_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v___x_2371_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v_a_2373_; 
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2372_, 1);
v_stx_2295_ = v_a_2373_;
goto _start;
}
else
{
lean_object* v_a_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2382_; 
v_a_2375_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2377_ = v___x_2372_;
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_a_2375_);
lean_dec(v___x_2372_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2380_; 
if (v_isShared_2378_ == 0)
{
v___x_2380_ = v___x_2377_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v_a_2375_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
return v___x_2380_;
}
}
}
}
else
{
lean_object* v___x_2383_; uint8_t v___x_2384_; uint8_t v___x_2385_; 
lean_dec(v_a_2357_);
v___x_2383_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
lean_inc(v_stx_2295_);
v___x_2384_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2383_);
v___x_2385_ = 1;
if (v___x_2384_ == 0)
{
lean_object* v___x_2386_; uint8_t v___x_2387_; 
v___x_2386_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2295_);
v___x_2387_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2386_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; uint8_t v___x_2389_; 
v___x_2388_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5));
lean_inc(v_stx_2295_);
v___x_2389_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2388_);
if (v___x_2389_ == 0)
{
lean_object* v___x_2390_; uint8_t v___x_2391_; 
v___x_2390_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7));
lean_inc(v_stx_2295_);
v___x_2391_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2390_);
if (v___x_2391_ == 0)
{
lean_object* v___x_2392_; uint8_t v___x_2393_; lean_object* v___y_2395_; lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2400_; lean_object* v___y_2452_; lean_object* v___y_2453_; lean_object* v___y_2454_; lean_object* v___y_2455_; lean_object* v___y_2456_; lean_object* v___y_2457_; 
v___x_2392_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9));
lean_inc(v_stx_2295_);
v___x_2393_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2392_);
if (v___x_2393_ == 0)
{
lean_object* v___x_2508_; uint8_t v___x_2509_; 
v___x_2508_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23));
lean_inc(v_stx_2295_);
v___x_2509_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2508_);
if (v___x_2509_ == 0)
{
lean_object* v___x_2561_; uint8_t v___x_2562_; 
v___x_2561_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25));
lean_inc(v_stx_2295_);
v___x_2562_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2561_);
if (v___x_2562_ == 0)
{
lean_object* v___x_2563_; uint8_t v___x_2564_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2570_; lean_object* v___y_2571_; 
v___x_2563_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27));
lean_inc(v_stx_2295_);
v___x_2564_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2563_);
if (v___x_2564_ == 0)
{
lean_object* v___x_2622_; uint8_t v___x_2623_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; lean_object* v___y_2640_; 
lean_del_object(v___x_2359_);
v___x_2622_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29));
lean_inc(v_stx_2295_);
v___x_2623_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2622_);
if (v___x_2623_ == 0)
{
lean_object* v___x_2691_; uint8_t v___x_2692_; 
v___x_2691_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31));
lean_inc(v_stx_2295_);
v___x_2692_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2691_);
if (v___x_2692_ == 0)
{
lean_object* v___x_2693_; uint8_t v___x_2694_; 
v___x_2693_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33));
lean_inc(v_stx_2295_);
v___x_2694_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2693_);
if (v___x_2694_ == 0)
{
lean_object* v___x_2695_; uint8_t v___x_2696_; 
v___x_2695_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35));
lean_inc(v_stx_2295_);
v___x_2696_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2695_);
if (v___x_2696_ == 0)
{
lean_object* v___x_2697_; uint8_t v___x_2698_; 
v___x_2697_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37));
lean_inc(v_stx_2295_);
v___x_2698_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2697_);
if (v___x_2698_ == 0)
{
lean_object* v___x_2699_; uint8_t v___x_2700_; 
v___x_2699_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39));
lean_inc(v_stx_2295_);
v___x_2700_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2699_);
if (v___x_2700_ == 0)
{
lean_object* v___x_2701_; uint8_t v___x_2702_; 
v___x_2701_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41));
lean_inc(v_stx_2295_);
v___x_2702_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2701_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2703_; uint8_t v___x_2704_; 
v___x_2703_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43));
lean_inc(v_stx_2295_);
v___x_2704_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2703_);
if (v___x_2704_ == 0)
{
lean_object* v___x_2705_; uint8_t v___x_2706_; uint8_t v___y_2708_; lean_object* v___y_2709_; lean_object* v___y_2710_; uint8_t v___y_2711_; 
v___x_2705_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45));
lean_inc(v_stx_2295_);
v___x_2706_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2705_);
if (v___x_2706_ == 0)
{
lean_object* v___x_2714_; uint8_t v___x_2715_; 
v___x_2714_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47));
lean_inc(v_stx_2295_);
v___x_2715_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2714_);
if (v___x_2715_ == 0)
{
lean_object* v___x_2716_; uint8_t v___x_2717_; 
v___x_2716_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49));
lean_inc(v_stx_2295_);
v___x_2717_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2716_);
if (v___x_2717_ == 0)
{
lean_object* v___x_2718_; uint8_t v___x_2719_; 
v___x_2718_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52));
lean_inc(v_stx_2295_);
v___x_2719_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2718_);
if (v___x_2719_ == 0)
{
lean_object* v___x_2720_; uint8_t v___x_2721_; 
v___x_2720_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54));
lean_inc(v_stx_2295_);
v___x_2721_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2720_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; uint8_t v___x_2723_; 
v___x_2722_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56));
lean_inc(v_stx_2295_);
v___x_2723_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2722_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2724_; uint8_t v___x_2725_; 
v___x_2724_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58));
lean_inc(v_stx_2295_);
v___x_2725_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2724_);
if (v___x_2725_ == 0)
{
lean_object* v___x_2726_; uint8_t v___x_2727_; 
v___x_2726_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60));
lean_inc(v_stx_2295_);
v___x_2727_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2726_);
if (v___x_2727_ == 0)
{
lean_object* v___x_2728_; uint8_t v___x_2729_; 
v___x_2728_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62));
lean_inc(v_stx_2295_);
v___x_2729_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2728_);
if (v___x_2729_ == 0)
{
lean_object* v___x_2730_; uint8_t v___x_2731_; 
v___x_2730_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64));
lean_inc(v_stx_2295_);
v___x_2731_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2730_);
if (v___x_2731_ == 0)
{
lean_object* v___x_2732_; uint8_t v___x_2733_; 
v___x_2732_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66));
lean_inc(v_stx_2295_);
v___x_2733_ = l_Lean_Syntax_isOfKind(v_stx_2295_, v___x_2732_);
if (v___x_2733_ == 0)
{
lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v_env_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; 
lean_inc_n(v_stx_2295_, 2);
v___x_2734_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_2735_ = lean_st_ref_get(v_a_2301_);
v_env_2736_ = lean_ctor_get(v___x_2735_, 0);
lean_inc_ref(v_env_2736_);
lean_dec(v___x_2735_);
v___x_2737_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2738_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2737_, v_env_2736_, v___x_2734_);
v___x_2739_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2740_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_2738_, v___x_2739_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_2738_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2771_; 
v_a_2741_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2743_ = v___x_2740_;
v_isShared_2744_ = v_isSharedCheck_2771_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_dec(v___x_2740_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2771_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v_fst_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2769_; 
v_fst_2745_ = lean_ctor_get(v_a_2741_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v_a_2741_);
if (v_isSharedCheck_2769_ == 0)
{
lean_object* v_unused_2770_; 
v_unused_2770_ = lean_ctor_get(v_a_2741_, 1);
lean_dec(v_unused_2770_);
v___x_2747_ = v_a_2741_;
v_isShared_2748_ = v_isSharedCheck_2769_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_fst_2745_);
lean_dec(v_a_2741_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2769_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
if (lean_obj_tag(v_fst_2745_) == 0)
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2752_; 
lean_del_object(v___x_2743_);
v___x_2749_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_2750_ = l_Lean_MessageData_ofName(v___x_2734_);
lean_inc_ref(v___x_2750_);
if (v_isShared_2748_ == 0)
{
lean_ctor_set_tag(v___x_2747_, 7);
lean_ctor_set(v___x_2747_, 1, v___x_2750_);
lean_ctor_set(v___x_2747_, 0, v___x_2749_);
v___x_2752_ = v___x_2747_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v___x_2749_);
lean_ctor_set(v_reuseFailAlloc_2764_, 1, v___x_2750_);
v___x_2752_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2753_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_2754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2754_, 0, v___x_2752_);
lean_ctor_set(v___x_2754_, 1, v___x_2753_);
v___x_2755_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_2756_ = l_Lean_indentD(v___x_2755_);
v___x_2757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2754_);
lean_ctor_set(v___x_2757_, 1, v___x_2756_);
v___x_2758_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_2759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2757_);
lean_ctor_set(v___x_2759_, 1, v___x_2758_);
v___x_2760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2759_);
lean_ctor_set(v___x_2760_, 1, v___x_2750_);
v___x_2761_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_2762_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2760_);
lean_ctor_set(v___x_2762_, 1, v___x_2761_);
v___x_2763_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2762_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_2763_;
}
}
else
{
lean_object* v_val_2765_; lean_object* v___x_2767_; 
lean_del_object(v___x_2747_);
lean_dec(v___x_2734_);
lean_dec(v_stx_2295_);
v_val_2765_ = lean_ctor_get(v_fst_2745_, 0);
lean_inc(v_val_2765_);
lean_dec_ref_known(v_fst_2745_, 1);
if (v_isShared_2744_ == 0)
{
lean_ctor_set(v___x_2743_, 0, v_val_2765_);
v___x_2767_ = v___x_2743_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_val_2765_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
}
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
lean_dec(v___x_2734_);
lean_dec(v_stx_2295_);
v_a_2772_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2740_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2740_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
else
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___y_2784_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2780_ = lean_unsigned_to_nat(1u);
v___x_2781_ = lean_unsigned_to_nat(5u);
v___x_2782_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2781_);
v___x_2793_ = lean_unsigned_to_nat(6u);
v___x_2794_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2793_);
lean_dec(v_stx_2295_);
v___x_2795_ = l_Lean_Syntax_getOptional_x3f(v___x_2794_);
lean_dec(v___x_2794_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v___x_2796_; 
v___x_2796_ = lean_box(0);
v___y_2784_ = v___x_2796_;
goto v___jp_2783_;
}
else
{
lean_object* v_val_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2804_; 
v_val_2797_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2799_ = v___x_2795_;
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_val_2797_);
lean_dec(v___x_2795_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2802_; 
if (v_isShared_2800_ == 0)
{
v___x_2802_ = v___x_2799_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v_val_2797_);
v___x_2802_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
v___y_2784_ = v___x_2802_;
goto v___jp_2783_;
}
}
}
v___jp_2783_:
{
lean_object* v___x_2785_; 
v___x_2785_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2782_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2785_) == 0)
{
if (lean_obj_tag(v___y_2784_) == 0)
{
lean_object* v_a_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v_a_2786_ = lean_ctor_get(v___x_2785_, 0);
lean_inc(v_a_2786_);
lean_dec_ref_known(v___x_2785_, 1);
v___x_2787_ = l_Lean_NameSet_empty;
v___x_2788_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2788_, 0, v___x_2780_);
lean_ctor_set(v___x_2788_, 1, v___x_2787_);
lean_ctor_set_uint8(v___x_2788_, sizeof(void*)*2, v___x_2731_);
lean_ctor_set_uint8(v___x_2788_, sizeof(void*)*2 + 1, v___x_2731_);
lean_ctor_set_uint8(v___x_2788_, sizeof(void*)*2 + 2, v___x_2731_);
lean_ctor_set_uint8(v___x_2788_, sizeof(void*)*2 + 3, v___x_2731_);
v___y_2304_ = v_a_2786_;
v_bodyInfo_2305_ = v___x_2788_;
goto v___jp_2303_;
}
else
{
lean_object* v_a_2789_; lean_object* v_val_2790_; lean_object* v___x_2791_; 
v_a_2789_ = lean_ctor_get(v___x_2785_, 0);
lean_inc(v_a_2789_);
lean_dec_ref_known(v___x_2785_, 1);
v_val_2790_ = lean_ctor_get(v___y_2784_, 0);
lean_inc(v_val_2790_);
lean_dec_ref_known(v___y_2784_, 1);
v___x_2791_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2790_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2792_);
lean_dec_ref_known(v___x_2791_, 1);
v___y_2304_ = v_a_2789_;
v_bodyInfo_2305_ = v_a_2792_;
goto v___jp_2303_;
}
else
{
lean_dec(v_a_2789_);
return v___x_2791_;
}
}
}
else
{
lean_dec(v___y_2784_);
return v___x_2785_;
}
}
}
}
else
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___y_2809_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2805_ = lean_unsigned_to_nat(1u);
v___x_2806_ = lean_unsigned_to_nat(5u);
v___x_2807_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2806_);
v___x_2818_ = lean_unsigned_to_nat(6u);
v___x_2819_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2818_);
lean_dec(v_stx_2295_);
v___x_2820_ = l_Lean_Syntax_getOptional_x3f(v___x_2819_);
lean_dec(v___x_2819_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_object* v___x_2821_; 
v___x_2821_ = lean_box(0);
v___y_2809_ = v___x_2821_;
goto v___jp_2808_;
}
else
{
lean_object* v_val_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2829_; 
v_val_2822_ = lean_ctor_get(v___x_2820_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2824_ = v___x_2820_;
v_isShared_2825_ = v_isSharedCheck_2829_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_val_2822_);
lean_dec(v___x_2820_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2829_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2827_; 
if (v_isShared_2825_ == 0)
{
v___x_2827_ = v___x_2824_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v_val_2822_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
v___y_2809_ = v___x_2827_;
goto v___jp_2808_;
}
}
}
v___jp_2808_:
{
lean_object* v___x_2810_; 
v___x_2810_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2807_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2810_) == 0)
{
if (lean_obj_tag(v___y_2809_) == 0)
{
lean_object* v_a_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_a_2811_);
lean_dec_ref_known(v___x_2810_, 1);
v___x_2812_ = l_Lean_NameSet_empty;
v___x_2813_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2813_, 0, v___x_2805_);
lean_ctor_set(v___x_2813_, 1, v___x_2812_);
lean_ctor_set_uint8(v___x_2813_, sizeof(void*)*2, v___x_2729_);
lean_ctor_set_uint8(v___x_2813_, sizeof(void*)*2 + 1, v___x_2729_);
lean_ctor_set_uint8(v___x_2813_, sizeof(void*)*2 + 2, v___x_2729_);
lean_ctor_set_uint8(v___x_2813_, sizeof(void*)*2 + 3, v___x_2729_);
v___y_2349_ = v_a_2811_;
v_bodyInfo_2350_ = v___x_2813_;
goto v___jp_2348_;
}
else
{
lean_object* v_a_2814_; lean_object* v_val_2815_; lean_object* v___x_2816_; 
v_a_2814_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2810_, 1);
v_val_2815_ = lean_ctor_get(v___y_2809_, 0);
lean_inc(v_val_2815_);
lean_dec_ref_known(v___y_2809_, 1);
v___x_2816_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2815_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; 
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2817_);
lean_dec_ref_known(v___x_2816_, 1);
v___y_2349_ = v_a_2814_;
v_bodyInfo_2350_ = v_a_2817_;
goto v___jp_2348_;
}
else
{
lean_dec(v_a_2814_);
return v___x_2816_;
}
}
}
else
{
lean_dec(v___y_2809_);
return v___x_2810_;
}
}
}
}
else
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2835_; lean_object* v___y_2836_; lean_object* v___y_2837_; lean_object* v___y_2838_; lean_object* v___x_3045_; uint8_t v___x_3046_; 
v___x_2830_ = lean_unsigned_to_nat(0u);
v___x_2831_ = lean_unsigned_to_nat(1u);
v___x_3045_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2831_);
v___x_3046_ = l_Lean_Syntax_isNone(v___x_3045_);
if (v___x_3046_ == 0)
{
lean_object* v___x_3047_; uint8_t v___x_3048_; 
v___x_3047_ = lean_unsigned_to_nat(5u);
v___x_3048_ = l_Lean_Syntax_matchesNull(v___x_3045_, v___x_3047_);
if (v___x_3048_ == 0)
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v_env_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
lean_inc_n(v_stx_2295_, 2);
v___x_3049_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3050_ = lean_st_ref_get(v_a_2301_);
v_env_3051_ = lean_ctor_get(v___x_3050_, 0);
lean_inc_ref(v_env_3051_);
lean_dec(v___x_3050_);
v___x_3052_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3053_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3052_, v_env_3051_, v___x_3049_);
v___x_3054_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3055_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3053_, v___x_3054_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3053_);
if (lean_obj_tag(v___x_3055_) == 0)
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3086_; 
v_a_3056_ = lean_ctor_get(v___x_3055_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_3055_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3058_ = v___x_3055_;
v_isShared_3059_ = v_isSharedCheck_3086_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_3055_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3086_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v_fst_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3084_; 
v_fst_3060_ = lean_ctor_get(v_a_3056_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v_a_3056_);
if (v_isSharedCheck_3084_ == 0)
{
lean_object* v_unused_3085_; 
v_unused_3085_ = lean_ctor_get(v_a_3056_, 1);
lean_dec(v_unused_3085_);
v___x_3062_ = v_a_3056_;
v_isShared_3063_ = v_isSharedCheck_3084_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_fst_3060_);
lean_dec(v_a_3056_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3084_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
if (lean_obj_tag(v_fst_3060_) == 0)
{
lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3067_; 
lean_del_object(v___x_3058_);
v___x_3064_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3065_ = l_Lean_MessageData_ofName(v___x_3049_);
lean_inc_ref(v___x_3065_);
if (v_isShared_3063_ == 0)
{
lean_ctor_set_tag(v___x_3062_, 7);
lean_ctor_set(v___x_3062_, 1, v___x_3065_);
lean_ctor_set(v___x_3062_, 0, v___x_3064_);
v___x_3067_ = v___x_3062_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3079_, 1, v___x_3065_);
v___x_3067_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3068_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3067_);
lean_ctor_set(v___x_3069_, 1, v___x_3068_);
v___x_3070_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3071_ = l_Lean_indentD(v___x_3070_);
v___x_3072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3069_);
lean_ctor_set(v___x_3072_, 1, v___x_3071_);
v___x_3073_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3072_);
lean_ctor_set(v___x_3074_, 1, v___x_3073_);
v___x_3075_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3074_);
lean_ctor_set(v___x_3075_, 1, v___x_3065_);
v___x_3076_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3075_);
lean_ctor_set(v___x_3077_, 1, v___x_3076_);
v___x_3078_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3077_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3078_;
}
}
else
{
lean_object* v_val_3080_; lean_object* v___x_3082_; 
lean_del_object(v___x_3062_);
lean_dec(v___x_3049_);
lean_dec(v_stx_2295_);
v_val_3080_ = lean_ctor_get(v_fst_3060_, 0);
lean_inc(v_val_3080_);
lean_dec_ref_known(v_fst_3060_, 1);
if (v_isShared_3059_ == 0)
{
lean_ctor_set(v___x_3058_, 0, v_val_3080_);
v___x_3082_ = v___x_3058_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_val_3080_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
}
}
}
else
{
lean_object* v_a_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3094_; 
lean_dec(v___x_3049_);
lean_dec(v_stx_2295_);
v_a_3087_ = lean_ctor_get(v___x_3055_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v___x_3055_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3089_ = v___x_3055_;
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_a_3087_);
lean_dec(v___x_3055_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3092_; 
if (v_isShared_3090_ == 0)
{
v___x_3092_ = v___x_3089_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_a_3087_);
v___x_3092_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
return v___x_3092_;
}
}
}
}
else
{
v___y_2833_ = v_a_2296_;
v___y_2834_ = v_a_2297_;
v___y_2835_ = v_a_2298_;
v___y_2836_ = v_a_2299_;
v___y_2837_ = v_a_2300_;
v___y_2838_ = v_a_2301_;
goto v___jp_2832_;
}
}
else
{
lean_dec(v___x_3045_);
v___y_2833_ = v_a_2296_;
v___y_2834_ = v_a_2297_;
v___y_2835_ = v_a_2298_;
v___y_2836_ = v_a_2299_;
v___y_2837_ = v_a_2300_;
v___y_2838_ = v_a_2301_;
goto v___jp_2832_;
}
v___jp_2832_:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; uint8_t v___x_2842_; 
v___x_2839_ = lean_unsigned_to_nat(4u);
v___x_2840_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2839_);
v___x_2841_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68));
lean_inc(v___x_2840_);
v___x_2842_ = l_Lean_Syntax_isOfKind(v___x_2840_, v___x_2841_);
if (v___x_2842_ == 0)
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v_env_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
lean_dec(v___x_2840_);
lean_inc_n(v_stx_2295_, 2);
v___x_2843_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_2844_ = lean_st_ref_get(v___y_2838_);
v_env_2845_ = lean_ctor_get(v___x_2844_, 0);
lean_inc_ref(v_env_2845_);
lean_dec(v___x_2844_);
v___x_2846_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2847_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2846_, v_env_2845_, v___x_2843_);
v___x_2848_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2849_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_2847_, v___x_2848_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
lean_dec(v___x_2847_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2880_; 
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2852_ = v___x_2849_;
v_isShared_2853_ = v_isSharedCheck_2880_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2849_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2880_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v_fst_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2878_; 
v_fst_2854_ = lean_ctor_get(v_a_2850_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v_a_2850_);
if (v_isSharedCheck_2878_ == 0)
{
lean_object* v_unused_2879_; 
v_unused_2879_ = lean_ctor_get(v_a_2850_, 1);
lean_dec(v_unused_2879_);
v___x_2856_ = v_a_2850_;
v_isShared_2857_ = v_isSharedCheck_2878_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_fst_2854_);
lean_dec(v_a_2850_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2878_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
if (lean_obj_tag(v_fst_2854_) == 0)
{
lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2861_; 
lean_del_object(v___x_2852_);
v___x_2858_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_2859_ = l_Lean_MessageData_ofName(v___x_2843_);
lean_inc_ref(v___x_2859_);
if (v_isShared_2857_ == 0)
{
lean_ctor_set_tag(v___x_2856_, 7);
lean_ctor_set(v___x_2856_, 1, v___x_2859_);
lean_ctor_set(v___x_2856_, 0, v___x_2858_);
v___x_2861_ = v___x_2856_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v___x_2858_);
lean_ctor_set(v_reuseFailAlloc_2873_, 1, v___x_2859_);
v___x_2861_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v___x_2862_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_2863_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2863_, 0, v___x_2861_);
lean_ctor_set(v___x_2863_, 1, v___x_2862_);
v___x_2864_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_2865_ = l_Lean_indentD(v___x_2864_);
v___x_2866_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2863_);
lean_ctor_set(v___x_2866_, 1, v___x_2865_);
v___x_2867_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_2868_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2866_);
lean_ctor_set(v___x_2868_, 1, v___x_2867_);
v___x_2869_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2868_);
lean_ctor_set(v___x_2869_, 1, v___x_2859_);
v___x_2870_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_2871_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2869_);
lean_ctor_set(v___x_2871_, 1, v___x_2870_);
v___x_2872_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2871_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
return v___x_2872_;
}
}
else
{
lean_object* v_val_2874_; lean_object* v___x_2876_; 
lean_del_object(v___x_2856_);
lean_dec(v___x_2843_);
lean_dec(v_stx_2295_);
v_val_2874_ = lean_ctor_get(v_fst_2854_, 0);
lean_inc(v_val_2874_);
lean_dec_ref_known(v_fst_2854_, 1);
if (v_isShared_2853_ == 0)
{
lean_ctor_set(v___x_2852_, 0, v_val_2874_);
v___x_2876_ = v___x_2852_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_val_2874_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
}
}
else
{
lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2888_; 
lean_dec(v___x_2843_);
lean_dec(v_stx_2295_);
v_a_2881_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2883_ = v___x_2849_;
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_dec(v___x_2849_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2886_; 
if (v_isShared_2884_ == 0)
{
v___x_2886_ = v___x_2883_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v_a_2881_);
v___x_2886_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
return v___x_2886_;
}
}
}
}
else
{
lean_object* v___x_2889_; lean_object* v___x_2890_; size_t v_sz_2891_; size_t v___x_2892_; lean_object* v___x_2893_; 
v___x_2889_ = l_Lean_Syntax_getArg(v___x_2840_, v___x_2830_);
v___x_2890_ = l_Lean_Syntax_getArgs(v___x_2889_);
lean_dec(v___x_2889_);
v_sz_2891_ = lean_array_size(v___x_2890_);
v___x_2892_ = ((size_t)0ULL);
v___x_2893_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(v___x_2727_, v_sz_2891_, v___x_2892_, v___x_2890_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v_env_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
lean_dec(v___x_2840_);
lean_inc_n(v_stx_2295_, 2);
v___x_2894_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_2895_ = lean_st_ref_get(v___y_2838_);
v_env_2896_ = lean_ctor_get(v___x_2895_, 0);
lean_inc_ref(v_env_2896_);
lean_dec(v___x_2895_);
v___x_2897_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2898_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2897_, v_env_2896_, v___x_2894_);
v___x_2899_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2900_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_2898_, v___x_2899_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
lean_dec(v___x_2898_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2931_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2903_ = v___x_2900_;
v_isShared_2904_ = v_isSharedCheck_2931_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___x_2900_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2931_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v_fst_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2929_; 
v_fst_2905_ = lean_ctor_get(v_a_2901_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v_a_2901_);
if (v_isSharedCheck_2929_ == 0)
{
lean_object* v_unused_2930_; 
v_unused_2930_ = lean_ctor_get(v_a_2901_, 1);
lean_dec(v_unused_2930_);
v___x_2907_ = v_a_2901_;
v_isShared_2908_ = v_isSharedCheck_2929_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_fst_2905_);
lean_dec(v_a_2901_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2929_;
goto v_resetjp_2906_;
}
v_resetjp_2906_:
{
if (lean_obj_tag(v_fst_2905_) == 0)
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2912_; 
lean_del_object(v___x_2903_);
v___x_2909_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_2910_ = l_Lean_MessageData_ofName(v___x_2894_);
lean_inc_ref(v___x_2910_);
if (v_isShared_2908_ == 0)
{
lean_ctor_set_tag(v___x_2907_, 7);
lean_ctor_set(v___x_2907_, 1, v___x_2910_);
lean_ctor_set(v___x_2907_, 0, v___x_2909_);
v___x_2912_ = v___x_2907_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v___x_2909_);
lean_ctor_set(v_reuseFailAlloc_2924_, 1, v___x_2910_);
v___x_2912_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2913_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_2914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2912_);
lean_ctor_set(v___x_2914_, 1, v___x_2913_);
v___x_2915_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_2916_ = l_Lean_indentD(v___x_2915_);
v___x_2917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2914_);
lean_ctor_set(v___x_2917_, 1, v___x_2916_);
v___x_2918_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_2919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2917_);
lean_ctor_set(v___x_2919_, 1, v___x_2918_);
v___x_2920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2920_, 0, v___x_2919_);
lean_ctor_set(v___x_2920_, 1, v___x_2910_);
v___x_2921_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_2922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2920_);
lean_ctor_set(v___x_2922_, 1, v___x_2921_);
v___x_2923_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2922_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
return v___x_2923_;
}
}
else
{
lean_object* v_val_2925_; lean_object* v___x_2927_; 
lean_del_object(v___x_2907_);
lean_dec(v___x_2894_);
lean_dec(v_stx_2295_);
v_val_2925_ = lean_ctor_get(v_fst_2905_, 0);
lean_inc(v_val_2925_);
lean_dec_ref_known(v_fst_2905_, 1);
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 0, v_val_2925_);
v___x_2927_ = v___x_2903_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_val_2925_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
}
}
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_dec(v___x_2894_);
lean_dec(v_stx_2295_);
v_a_2932_ = lean_ctor_get(v___x_2900_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2900_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2900_);
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
v_reuseFailAlloc_2938_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_val_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; uint8_t v___x_2943_; 
v_val_2940_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_val_2940_);
lean_dec_ref_known(v___x_2893_, 1);
v___x_2941_ = l_Lean_Syntax_getArg(v___x_2840_, v___x_2831_);
lean_dec(v___x_2840_);
v___x_2942_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70));
lean_inc(v___x_2941_);
v___x_2943_ = l_Lean_Syntax_isOfKind(v___x_2941_, v___x_2942_);
if (v___x_2943_ == 0)
{
lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v_env_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
lean_dec(v___x_2941_);
lean_dec(v_val_2940_);
lean_inc_n(v_stx_2295_, 2);
v___x_2944_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_2945_ = lean_st_ref_get(v___y_2838_);
v_env_2946_ = lean_ctor_get(v___x_2945_, 0);
lean_inc_ref(v_env_2946_);
lean_dec(v___x_2945_);
v___x_2947_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2948_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2947_, v_env_2946_, v___x_2944_);
v___x_2949_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2950_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_2948_, v___x_2949_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
lean_dec(v___x_2948_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2981_; 
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2953_ = v___x_2950_;
v_isShared_2954_ = v_isSharedCheck_2981_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2950_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2981_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v_fst_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2979_; 
v_fst_2955_ = lean_ctor_get(v_a_2951_, 0);
v_isSharedCheck_2979_ = !lean_is_exclusive(v_a_2951_);
if (v_isSharedCheck_2979_ == 0)
{
lean_object* v_unused_2980_; 
v_unused_2980_ = lean_ctor_get(v_a_2951_, 1);
lean_dec(v_unused_2980_);
v___x_2957_ = v_a_2951_;
v_isShared_2958_ = v_isSharedCheck_2979_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_fst_2955_);
lean_dec(v_a_2951_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2979_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
if (lean_obj_tag(v_fst_2955_) == 0)
{
lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2962_; 
lean_del_object(v___x_2953_);
v___x_2959_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_2960_ = l_Lean_MessageData_ofName(v___x_2944_);
lean_inc_ref(v___x_2960_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set_tag(v___x_2957_, 7);
lean_ctor_set(v___x_2957_, 1, v___x_2960_);
lean_ctor_set(v___x_2957_, 0, v___x_2959_);
v___x_2962_ = v___x_2957_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v___x_2959_);
lean_ctor_set(v_reuseFailAlloc_2974_, 1, v___x_2960_);
v___x_2962_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2963_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_2964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2962_);
lean_ctor_set(v___x_2964_, 1, v___x_2963_);
v___x_2965_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_2966_ = l_Lean_indentD(v___x_2965_);
v___x_2967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2964_);
lean_ctor_set(v___x_2967_, 1, v___x_2966_);
v___x_2968_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_2969_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2969_, 0, v___x_2967_);
lean_ctor_set(v___x_2969_, 1, v___x_2968_);
v___x_2970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2969_);
lean_ctor_set(v___x_2970_, 1, v___x_2960_);
v___x_2971_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_2972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2970_);
lean_ctor_set(v___x_2972_, 1, v___x_2971_);
v___x_2973_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2972_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
return v___x_2973_;
}
}
else
{
lean_object* v_val_2975_; lean_object* v___x_2977_; 
lean_del_object(v___x_2957_);
lean_dec(v___x_2944_);
lean_dec(v_stx_2295_);
v_val_2975_ = lean_ctor_get(v_fst_2955_, 0);
lean_inc(v_val_2975_);
lean_dec_ref_known(v_fst_2955_, 1);
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 0, v_val_2975_);
v___x_2977_ = v___x_2953_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v_val_2975_);
v___x_2977_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
return v___x_2977_;
}
}
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
lean_dec(v___x_2944_);
lean_dec(v_stx_2295_);
v_a_2982_ = lean_ctor_get(v___x_2950_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2950_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2950_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
}
else
{
lean_object* v___x_2990_; lean_object* v___x_2991_; uint8_t v___x_2992_; 
v___x_2990_ = l_Lean_Syntax_getArg(v___x_2941_, v___x_2831_);
v___x_2991_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72));
v___x_2992_ = l_Lean_Syntax_isOfKind(v___x_2990_, v___x_2991_);
if (v___x_2992_ == 0)
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v_env_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
lean_dec(v___x_2941_);
lean_dec(v_val_2940_);
lean_inc_n(v_stx_2295_, 2);
v___x_2993_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_2994_ = lean_st_ref_get(v___y_2838_);
v_env_2995_ = lean_ctor_get(v___x_2994_, 0);
lean_inc_ref(v_env_2995_);
lean_dec(v___x_2994_);
v___x_2996_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2997_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2996_, v_env_2995_, v___x_2993_);
v___x_2998_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2999_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_2997_, v___x_2998_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
lean_dec(v___x_2997_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3030_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3002_ = v___x_2999_;
v_isShared_3003_ = v_isSharedCheck_3030_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2999_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3030_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v_fst_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3028_; 
v_fst_3004_ = lean_ctor_get(v_a_3000_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v_a_3000_);
if (v_isSharedCheck_3028_ == 0)
{
lean_object* v_unused_3029_; 
v_unused_3029_ = lean_ctor_get(v_a_3000_, 1);
lean_dec(v_unused_3029_);
v___x_3006_ = v_a_3000_;
v_isShared_3007_ = v_isSharedCheck_3028_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_fst_3004_);
lean_dec(v_a_3000_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3028_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
if (lean_obj_tag(v_fst_3004_) == 0)
{
lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3011_; 
lean_del_object(v___x_3002_);
v___x_3008_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3009_ = l_Lean_MessageData_ofName(v___x_2993_);
lean_inc_ref(v___x_3009_);
if (v_isShared_3007_ == 0)
{
lean_ctor_set_tag(v___x_3006_, 7);
lean_ctor_set(v___x_3006_, 1, v___x_3009_);
lean_ctor_set(v___x_3006_, 0, v___x_3008_);
v___x_3011_ = v___x_3006_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3008_);
lean_ctor_set(v_reuseFailAlloc_3023_, 1, v___x_3009_);
v___x_3011_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3012_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3011_);
lean_ctor_set(v___x_3013_, 1, v___x_3012_);
v___x_3014_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3015_ = l_Lean_indentD(v___x_3014_);
v___x_3016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3016_, 0, v___x_3013_);
lean_ctor_set(v___x_3016_, 1, v___x_3015_);
v___x_3017_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3016_);
lean_ctor_set(v___x_3018_, 1, v___x_3017_);
v___x_3019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3018_);
lean_ctor_set(v___x_3019_, 1, v___x_3009_);
v___x_3020_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3019_);
lean_ctor_set(v___x_3021_, 1, v___x_3020_);
v___x_3022_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3021_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
return v___x_3022_;
}
}
else
{
lean_object* v_val_3024_; lean_object* v___x_3026_; 
lean_del_object(v___x_3006_);
lean_dec(v___x_2993_);
lean_dec(v_stx_2295_);
v_val_3024_ = lean_ctor_get(v_fst_3004_, 0);
lean_inc(v_val_3024_);
lean_dec_ref_known(v_fst_3004_, 1);
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 0, v_val_3024_);
v___x_3026_ = v___x_3002_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_val_3024_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
}
}
else
{
lean_object* v_a_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
lean_dec(v___x_2993_);
lean_dec(v_stx_2295_);
v_a_3031_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3033_ = v___x_2999_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_a_3031_);
lean_dec(v___x_2999_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3031_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
}
else
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; 
lean_dec(v_stx_2295_);
v___x_3039_ = lean_unsigned_to_nat(3u);
v___x_3040_ = l_Lean_Syntax_getArg(v___x_2941_, v___x_3039_);
lean_dec(v___x_2941_);
v___x_3041_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3040_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
if (lean_obj_tag(v___x_3041_) == 0)
{
lean_object* v_a_3042_; size_t v_sz_3043_; lean_object* v___x_3044_; 
v_a_3042_ = lean_ctor_get(v___x_3041_, 0);
lean_inc(v_a_3042_);
lean_dec_ref_known(v___x_3041_, 1);
v_sz_3043_ = lean_array_size(v_val_2940_);
v___x_3044_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v_val_2940_, v_sz_3043_, v___x_2892_, v_a_3042_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
lean_dec(v_val_2940_);
return v___x_3044_;
}
else
{
lean_dec(v_val_2940_);
return v___x_3041_;
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
lean_object* v___x_3095_; lean_object* v___x_3096_; 
lean_dec(v_stx_2295_);
v___x_3095_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
return v___x_3096_;
}
}
else
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
lean_dec(v_stx_2295_);
v___x_3097_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3097_);
return v___x_3098_;
}
}
else
{
lean_object* v___x_3099_; lean_object* v___x_3100_; 
lean_dec(v_stx_2295_);
v___x_3099_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3099_);
return v___x_3100_;
}
}
else
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
lean_dec(v_stx_2295_);
v___x_3101_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3101_);
return v___x_3102_;
}
}
else
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
lean_dec(v_stx_2295_);
v___x_3103_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3103_);
return v___x_3104_;
}
}
else
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; size_t v_sz_3108_; size_t v___x_3109_; lean_object* v___x_3110_; 
v___x_3105_ = lean_unsigned_to_nat(2u);
v___x_3106_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3105_);
v___x_3107_ = l_Lean_Syntax_getArgs(v___x_3106_);
lean_dec(v___x_3106_);
v_sz_3108_ = lean_array_size(v___x_3107_);
v___x_3109_ = ((size_t)0ULL);
v___x_3110_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v_sz_3108_, v___x_3109_, v___x_3107_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v_env_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; 
lean_inc_n(v_stx_2295_, 2);
v___x_3111_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3112_ = lean_st_ref_get(v_a_2301_);
v_env_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc_ref(v_env_3113_);
lean_dec(v___x_3112_);
v___x_3114_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3115_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3114_, v_env_3113_, v___x_3111_);
v___x_3116_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3117_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3115_, v___x_3116_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3115_);
if (lean_obj_tag(v___x_3117_) == 0)
{
lean_object* v_a_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3148_; 
v_a_3118_ = lean_ctor_get(v___x_3117_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3120_ = v___x_3117_;
v_isShared_3121_ = v_isSharedCheck_3148_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_a_3118_);
lean_dec(v___x_3117_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3148_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v_fst_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3146_; 
v_fst_3122_ = lean_ctor_get(v_a_3118_, 0);
v_isSharedCheck_3146_ = !lean_is_exclusive(v_a_3118_);
if (v_isSharedCheck_3146_ == 0)
{
lean_object* v_unused_3147_; 
v_unused_3147_ = lean_ctor_get(v_a_3118_, 1);
lean_dec(v_unused_3147_);
v___x_3124_ = v_a_3118_;
v_isShared_3125_ = v_isSharedCheck_3146_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_fst_3122_);
lean_dec(v_a_3118_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3146_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
if (lean_obj_tag(v_fst_3122_) == 0)
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3129_; 
lean_del_object(v___x_3120_);
v___x_3126_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3127_ = l_Lean_MessageData_ofName(v___x_3111_);
lean_inc_ref(v___x_3127_);
if (v_isShared_3125_ == 0)
{
lean_ctor_set_tag(v___x_3124_, 7);
lean_ctor_set(v___x_3124_, 1, v___x_3127_);
lean_ctor_set(v___x_3124_, 0, v___x_3126_);
v___x_3129_ = v___x_3124_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v___x_3126_);
lean_ctor_set(v_reuseFailAlloc_3141_, 1, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3130_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3129_);
lean_ctor_set(v___x_3131_, 1, v___x_3130_);
v___x_3132_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3133_ = l_Lean_indentD(v___x_3132_);
v___x_3134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3131_);
lean_ctor_set(v___x_3134_, 1, v___x_3133_);
v___x_3135_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3134_);
lean_ctor_set(v___x_3136_, 1, v___x_3135_);
v___x_3137_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
lean_ctor_set(v___x_3137_, 1, v___x_3127_);
v___x_3138_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3137_);
lean_ctor_set(v___x_3139_, 1, v___x_3138_);
v___x_3140_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3139_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3140_;
}
}
else
{
lean_object* v_val_3142_; lean_object* v___x_3144_; 
lean_del_object(v___x_3124_);
lean_dec(v___x_3111_);
lean_dec(v_stx_2295_);
v_val_3142_ = lean_ctor_get(v_fst_3122_, 0);
lean_inc(v_val_3142_);
lean_dec_ref_known(v_fst_3122_, 1);
if (v_isShared_3121_ == 0)
{
lean_ctor_set(v___x_3120_, 0, v_val_3142_);
v___x_3144_ = v___x_3120_;
goto v_reusejp_3143_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v_val_3142_);
v___x_3144_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
return v___x_3144_;
}
}
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec(v___x_3111_);
lean_dec(v_stx_2295_);
v_a_3149_ = lean_ctor_get(v___x_3117_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3117_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3117_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
else
{
lean_object* v_val_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3291_; 
v_val_3157_ = lean_ctor_get(v___x_3110_, 0);
v_isSharedCheck_3291_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3159_ = v___x_3110_;
v_isShared_3160_ = v_isSharedCheck_3291_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_val_3157_);
lean_dec(v___x_3110_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3291_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v_finSeq_x3f_3164_; lean_object* v___y_3165_; lean_object* v___y_3166_; lean_object* v___y_3167_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___x_3186_; lean_object* v___x_3187_; uint8_t v___x_3188_; 
v___x_3161_ = lean_unsigned_to_nat(1u);
v___x_3162_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3161_);
v___x_3186_ = lean_unsigned_to_nat(3u);
v___x_3187_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3186_);
v___x_3188_ = l_Lean_Syntax_isNone(v___x_3187_);
if (v___x_3188_ == 0)
{
uint8_t v___x_3189_; 
lean_inc(v___x_3187_);
v___x_3189_ = l_Lean_Syntax_matchesNull(v___x_3187_, v___x_3161_);
if (v___x_3189_ == 0)
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v_env_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
lean_dec(v___x_3187_);
lean_dec(v___x_3162_);
lean_del_object(v___x_3159_);
lean_dec(v_val_3157_);
lean_inc_n(v_stx_2295_, 2);
v___x_3190_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3191_ = lean_st_ref_get(v_a_2301_);
v_env_3192_ = lean_ctor_get(v___x_3191_, 0);
lean_inc_ref(v_env_3192_);
lean_dec(v___x_3191_);
v___x_3193_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3194_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3193_, v_env_3192_, v___x_3190_);
v___x_3195_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3196_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3194_, v___x_3195_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3194_);
if (lean_obj_tag(v___x_3196_) == 0)
{
lean_object* v_a_3197_; lean_object* v___x_3199_; uint8_t v_isShared_3200_; uint8_t v_isSharedCheck_3227_; 
v_a_3197_ = lean_ctor_get(v___x_3196_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3196_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3199_ = v___x_3196_;
v_isShared_3200_ = v_isSharedCheck_3227_;
goto v_resetjp_3198_;
}
else
{
lean_inc(v_a_3197_);
lean_dec(v___x_3196_);
v___x_3199_ = lean_box(0);
v_isShared_3200_ = v_isSharedCheck_3227_;
goto v_resetjp_3198_;
}
v_resetjp_3198_:
{
lean_object* v_fst_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3225_; 
v_fst_3201_ = lean_ctor_get(v_a_3197_, 0);
v_isSharedCheck_3225_ = !lean_is_exclusive(v_a_3197_);
if (v_isSharedCheck_3225_ == 0)
{
lean_object* v_unused_3226_; 
v_unused_3226_ = lean_ctor_get(v_a_3197_, 1);
lean_dec(v_unused_3226_);
v___x_3203_ = v_a_3197_;
v_isShared_3204_ = v_isSharedCheck_3225_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_fst_3201_);
lean_dec(v_a_3197_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3225_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
if (lean_obj_tag(v_fst_3201_) == 0)
{
lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3208_; 
lean_del_object(v___x_3199_);
v___x_3205_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3206_ = l_Lean_MessageData_ofName(v___x_3190_);
lean_inc_ref(v___x_3206_);
if (v_isShared_3204_ == 0)
{
lean_ctor_set_tag(v___x_3203_, 7);
lean_ctor_set(v___x_3203_, 1, v___x_3206_);
lean_ctor_set(v___x_3203_, 0, v___x_3205_);
v___x_3208_ = v___x_3203_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v___x_3205_);
lean_ctor_set(v_reuseFailAlloc_3220_, 1, v___x_3206_);
v___x_3208_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3209_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3208_);
lean_ctor_set(v___x_3210_, 1, v___x_3209_);
v___x_3211_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3212_ = l_Lean_indentD(v___x_3211_);
v___x_3213_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3210_);
lean_ctor_set(v___x_3213_, 1, v___x_3212_);
v___x_3214_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3213_);
lean_ctor_set(v___x_3215_, 1, v___x_3214_);
v___x_3216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3215_);
lean_ctor_set(v___x_3216_, 1, v___x_3206_);
v___x_3217_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3216_);
lean_ctor_set(v___x_3218_, 1, v___x_3217_);
v___x_3219_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3218_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3219_;
}
}
else
{
lean_object* v_val_3221_; lean_object* v___x_3223_; 
lean_del_object(v___x_3203_);
lean_dec(v___x_3190_);
lean_dec(v_stx_2295_);
v_val_3221_ = lean_ctor_get(v_fst_3201_, 0);
lean_inc(v_val_3221_);
lean_dec_ref_known(v_fst_3201_, 1);
if (v_isShared_3200_ == 0)
{
lean_ctor_set(v___x_3199_, 0, v_val_3221_);
v___x_3223_ = v___x_3199_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v_val_3221_);
v___x_3223_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
return v___x_3223_;
}
}
}
}
}
else
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3235_; 
lean_dec(v___x_3190_);
lean_dec(v_stx_2295_);
v_a_3228_ = lean_ctor_get(v___x_3196_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3196_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3230_ = v___x_3196_;
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3196_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3233_; 
if (v_isShared_3231_ == 0)
{
v___x_3233_ = v___x_3230_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_a_3228_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
}
else
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; uint8_t v___x_3239_; 
v___x_3236_ = lean_unsigned_to_nat(0u);
v___x_3237_ = l_Lean_Syntax_getArg(v___x_3187_, v___x_3236_);
lean_dec(v___x_3187_);
v___x_3238_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74));
lean_inc(v___x_3237_);
v___x_3239_ = l_Lean_Syntax_isOfKind(v___x_3237_, v___x_3238_);
if (v___x_3239_ == 0)
{
lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v_env_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; 
lean_dec(v___x_3237_);
lean_dec(v___x_3162_);
lean_del_object(v___x_3159_);
lean_dec(v_val_3157_);
lean_inc_n(v_stx_2295_, 2);
v___x_3240_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3241_ = lean_st_ref_get(v_a_2301_);
v_env_3242_ = lean_ctor_get(v___x_3241_, 0);
lean_inc_ref(v_env_3242_);
lean_dec(v___x_3241_);
v___x_3243_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3244_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3243_, v_env_3242_, v___x_3240_);
v___x_3245_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3246_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3244_, v___x_3245_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3244_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3277_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3249_ = v___x_3246_;
v_isShared_3250_ = v_isSharedCheck_3277_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3246_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3277_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v_fst_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3275_; 
v_fst_3251_ = lean_ctor_get(v_a_3247_, 0);
v_isSharedCheck_3275_ = !lean_is_exclusive(v_a_3247_);
if (v_isSharedCheck_3275_ == 0)
{
lean_object* v_unused_3276_; 
v_unused_3276_ = lean_ctor_get(v_a_3247_, 1);
lean_dec(v_unused_3276_);
v___x_3253_ = v_a_3247_;
v_isShared_3254_ = v_isSharedCheck_3275_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_fst_3251_);
lean_dec(v_a_3247_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3275_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
if (lean_obj_tag(v_fst_3251_) == 0)
{
lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3258_; 
lean_del_object(v___x_3249_);
v___x_3255_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3256_ = l_Lean_MessageData_ofName(v___x_3240_);
lean_inc_ref(v___x_3256_);
if (v_isShared_3254_ == 0)
{
lean_ctor_set_tag(v___x_3253_, 7);
lean_ctor_set(v___x_3253_, 1, v___x_3256_);
lean_ctor_set(v___x_3253_, 0, v___x_3255_);
v___x_3258_ = v___x_3253_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v___x_3255_);
lean_ctor_set(v_reuseFailAlloc_3270_, 1, v___x_3256_);
v___x_3258_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3259_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3258_);
lean_ctor_set(v___x_3260_, 1, v___x_3259_);
v___x_3261_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3262_ = l_Lean_indentD(v___x_3261_);
v___x_3263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3260_);
lean_ctor_set(v___x_3263_, 1, v___x_3262_);
v___x_3264_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3265_, 0, v___x_3263_);
lean_ctor_set(v___x_3265_, 1, v___x_3264_);
v___x_3266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3265_);
lean_ctor_set(v___x_3266_, 1, v___x_3256_);
v___x_3267_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3266_);
lean_ctor_set(v___x_3268_, 1, v___x_3267_);
v___x_3269_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3268_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3269_;
}
}
else
{
lean_object* v_val_3271_; lean_object* v___x_3273_; 
lean_del_object(v___x_3253_);
lean_dec(v___x_3240_);
lean_dec(v_stx_2295_);
v_val_3271_ = lean_ctor_get(v_fst_3251_, 0);
lean_inc(v_val_3271_);
lean_dec_ref_known(v_fst_3251_, 1);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 0, v_val_3271_);
v___x_3273_ = v___x_3249_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3274_; 
v_reuseFailAlloc_3274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3274_, 0, v_val_3271_);
v___x_3273_ = v_reuseFailAlloc_3274_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
return v___x_3273_;
}
}
}
}
}
else
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3285_; 
lean_dec(v___x_3240_);
lean_dec(v_stx_2295_);
v_a_3278_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3280_ = v___x_3246_;
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v___x_3246_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3283_; 
if (v_isShared_3281_ == 0)
{
v___x_3283_ = v___x_3280_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_a_3278_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
}
else
{
lean_object* v___x_3286_; lean_object* v___x_3288_; 
lean_dec(v_stx_2295_);
v___x_3286_ = l_Lean_Syntax_getArg(v___x_3237_, v___x_3161_);
lean_dec(v___x_3237_);
if (v_isShared_3160_ == 0)
{
lean_ctor_set(v___x_3159_, 0, v___x_3286_);
v___x_3288_ = v___x_3159_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v___x_3286_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
v_finSeq_x3f_3164_ = v___x_3288_;
v___y_3165_ = v_a_2296_;
v___y_3166_ = v_a_2297_;
v___y_3167_ = v_a_2298_;
v___y_3168_ = v_a_2299_;
v___y_3169_ = v_a_2300_;
v___y_3170_ = v_a_2301_;
goto v___jp_3163_;
}
}
}
}
else
{
lean_object* v___x_3290_; 
lean_dec(v___x_3187_);
lean_del_object(v___x_3159_);
lean_dec(v_stx_2295_);
v___x_3290_ = lean_box(0);
v_finSeq_x3f_3164_ = v___x_3290_;
v___y_3165_ = v_a_2296_;
v___y_3166_ = v_a_2297_;
v___y_3167_ = v_a_2298_;
v___y_3168_ = v_a_2299_;
v___y_3169_ = v_a_2300_;
v___y_3170_ = v_a_2301_;
goto v___jp_3163_;
}
v___jp_3163_:
{
lean_object* v___x_3171_; 
v___x_3171_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3162_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_a_3172_; size_t v_sz_3173_; lean_object* v___x_3174_; 
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
lean_inc(v_a_3172_);
lean_dec_ref_known(v___x_3171_, 1);
v_sz_3173_ = lean_array_size(v_val_3157_);
v___x_3174_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(v_val_3157_, v_sz_3173_, v___x_3109_, v_a_3172_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_);
lean_dec(v_val_3157_);
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_object* v_a_3175_; lean_object* v___x_3176_; 
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
lean_inc(v_a_3175_);
lean_dec_ref_known(v___x_3174_, 1);
v___x_3176_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_finSeq_x3f_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3185_; 
v_a_3177_ = lean_ctor_get(v___x_3176_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v___x_3176_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3179_ = v___x_3176_;
v_isShared_3180_ = v_isSharedCheck_3185_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_dec(v___x_3176_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3185_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3181_; lean_object* v___x_3183_; 
v___x_3181_ = l_Lean_Elab_Do_ControlInfo_sequence(v_a_3175_, v_a_3177_);
if (v_isShared_3180_ == 0)
{
lean_ctor_set(v___x_3179_, 0, v___x_3181_);
v___x_3183_ = v___x_3179_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v___x_3181_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
return v___x_3183_;
}
}
}
else
{
lean_dec(v_a_3175_);
return v___x_3176_;
}
}
else
{
lean_dec(v_finSeq_x3f_3164_);
return v___x_3174_;
}
}
else
{
lean_dec(v_finSeq_x3f_3164_);
lean_dec(v_val_3157_);
return v___x_3171_;
}
}
}
}
}
}
else
{
lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___y_3295_; lean_object* v___y_3296_; lean_object* v___y_3297_; lean_object* v___y_3298_; lean_object* v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___x_3416_; uint8_t v___x_3417_; 
v___x_3292_ = lean_unsigned_to_nat(0u);
v___x_3293_ = lean_unsigned_to_nat(1u);
v___x_3416_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3293_);
v___x_3417_ = l_Lean_Syntax_isNone(v___x_3416_);
if (v___x_3417_ == 0)
{
uint8_t v___x_3418_; 
lean_inc(v___x_3416_);
v___x_3418_ = l_Lean_Syntax_matchesNull(v___x_3416_, v___x_3293_);
if (v___x_3418_ == 0)
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v_env_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; 
lean_dec(v___x_3416_);
lean_inc_n(v_stx_2295_, 2);
v___x_3419_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3420_ = lean_st_ref_get(v_a_2301_);
v_env_3421_ = lean_ctor_get(v___x_3420_, 0);
lean_inc_ref(v_env_3421_);
lean_dec(v___x_3420_);
v___x_3422_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3423_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3422_, v_env_3421_, v___x_3419_);
v___x_3424_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3425_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3423_, v___x_3424_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3423_);
if (lean_obj_tag(v___x_3425_) == 0)
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3456_; 
v_a_3426_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3428_ = v___x_3425_;
v_isShared_3429_ = v_isSharedCheck_3456_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3425_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3456_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v_fst_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3454_; 
v_fst_3430_ = lean_ctor_get(v_a_3426_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v_a_3426_);
if (v_isSharedCheck_3454_ == 0)
{
lean_object* v_unused_3455_; 
v_unused_3455_ = lean_ctor_get(v_a_3426_, 1);
lean_dec(v_unused_3455_);
v___x_3432_ = v_a_3426_;
v_isShared_3433_ = v_isSharedCheck_3454_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_fst_3430_);
lean_dec(v_a_3426_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3454_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
if (lean_obj_tag(v_fst_3430_) == 0)
{
lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3437_; 
lean_del_object(v___x_3428_);
v___x_3434_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3435_ = l_Lean_MessageData_ofName(v___x_3419_);
lean_inc_ref(v___x_3435_);
if (v_isShared_3433_ == 0)
{
lean_ctor_set_tag(v___x_3432_, 7);
lean_ctor_set(v___x_3432_, 1, v___x_3435_);
lean_ctor_set(v___x_3432_, 0, v___x_3434_);
v___x_3437_ = v___x_3432_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3434_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v___x_3435_);
v___x_3437_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3438_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3437_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
v___x_3440_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3441_ = l_Lean_indentD(v___x_3440_);
v___x_3442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3439_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3442_);
lean_ctor_set(v___x_3444_, 1, v___x_3443_);
v___x_3445_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3444_);
lean_ctor_set(v___x_3445_, 1, v___x_3435_);
v___x_3446_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3447_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3445_);
lean_ctor_set(v___x_3447_, 1, v___x_3446_);
v___x_3448_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3447_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3448_;
}
}
else
{
lean_object* v_val_3450_; lean_object* v___x_3452_; 
lean_del_object(v___x_3432_);
lean_dec(v___x_3419_);
lean_dec(v_stx_2295_);
v_val_3450_ = lean_ctor_get(v_fst_3430_, 0);
lean_inc(v_val_3450_);
lean_dec_ref_known(v_fst_3430_, 1);
if (v_isShared_3429_ == 0)
{
lean_ctor_set(v___x_3428_, 0, v_val_3450_);
v___x_3452_ = v___x_3428_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_val_3450_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
return v___x_3452_;
}
}
}
}
}
else
{
lean_object* v_a_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3464_; 
lean_dec(v___x_3419_);
lean_dec(v_stx_2295_);
v_a_3457_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3459_ = v___x_3425_;
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_a_3457_);
lean_dec(v___x_3425_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v___x_3462_; 
if (v_isShared_3460_ == 0)
{
v___x_3462_ = v___x_3459_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v_a_3457_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
}
}
else
{
if (v___x_3417_ == 0)
{
lean_object* v___x_3465_; lean_object* v___x_3466_; uint8_t v___x_3467_; 
v___x_3465_ = l_Lean_Syntax_getArg(v___x_3416_, v___x_3292_);
lean_dec(v___x_3416_);
v___x_3466_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78));
v___x_3467_ = l_Lean_Syntax_isOfKind(v___x_3465_, v___x_3466_);
if (v___x_3467_ == 0)
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v_env_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; 
lean_inc_n(v_stx_2295_, 2);
v___x_3468_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3469_ = lean_st_ref_get(v_a_2301_);
v_env_3470_ = lean_ctor_get(v___x_3469_, 0);
lean_inc_ref(v_env_3470_);
lean_dec(v___x_3469_);
v___x_3471_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3472_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3471_, v_env_3470_, v___x_3468_);
v___x_3473_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3474_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3472_, v___x_3473_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3472_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_a_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3505_; 
v_a_3475_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3477_ = v___x_3474_;
v_isShared_3478_ = v_isSharedCheck_3505_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_a_3475_);
lean_dec(v___x_3474_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3505_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v_fst_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3503_; 
v_fst_3479_ = lean_ctor_get(v_a_3475_, 0);
v_isSharedCheck_3503_ = !lean_is_exclusive(v_a_3475_);
if (v_isSharedCheck_3503_ == 0)
{
lean_object* v_unused_3504_; 
v_unused_3504_ = lean_ctor_get(v_a_3475_, 1);
lean_dec(v_unused_3504_);
v___x_3481_ = v_a_3475_;
v_isShared_3482_ = v_isSharedCheck_3503_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_fst_3479_);
lean_dec(v_a_3475_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3503_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
if (lean_obj_tag(v_fst_3479_) == 0)
{
lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3486_; 
lean_del_object(v___x_3477_);
v___x_3483_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3484_ = l_Lean_MessageData_ofName(v___x_3468_);
lean_inc_ref(v___x_3484_);
if (v_isShared_3482_ == 0)
{
lean_ctor_set_tag(v___x_3481_, 7);
lean_ctor_set(v___x_3481_, 1, v___x_3484_);
lean_ctor_set(v___x_3481_, 0, v___x_3483_);
v___x_3486_ = v___x_3481_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3483_);
lean_ctor_set(v_reuseFailAlloc_3498_, 1, v___x_3484_);
v___x_3486_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v___x_3487_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3488_, 0, v___x_3486_);
lean_ctor_set(v___x_3488_, 1, v___x_3487_);
v___x_3489_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3490_ = l_Lean_indentD(v___x_3489_);
v___x_3491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3488_);
lean_ctor_set(v___x_3491_, 1, v___x_3490_);
v___x_3492_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3491_);
lean_ctor_set(v___x_3493_, 1, v___x_3492_);
v___x_3494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3493_);
lean_ctor_set(v___x_3494_, 1, v___x_3484_);
v___x_3495_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3494_);
lean_ctor_set(v___x_3496_, 1, v___x_3495_);
v___x_3497_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3496_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3497_;
}
}
else
{
lean_object* v_val_3499_; lean_object* v___x_3501_; 
lean_del_object(v___x_3481_);
lean_dec(v___x_3468_);
lean_dec(v_stx_2295_);
v_val_3499_ = lean_ctor_get(v_fst_3479_, 0);
lean_inc(v_val_3499_);
lean_dec_ref_known(v_fst_3479_, 1);
if (v_isShared_3478_ == 0)
{
lean_ctor_set(v___x_3477_, 0, v_val_3499_);
v___x_3501_ = v___x_3477_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v_val_3499_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
return v___x_3501_;
}
}
}
}
}
else
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
lean_dec(v___x_3468_);
lean_dec(v_stx_2295_);
v_a_3506_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v___x_3474_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v___x_3474_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
else
{
v___y_3311_ = v_a_2296_;
v___y_3312_ = v_a_2297_;
v___y_3313_ = v_a_2298_;
v___y_3314_ = v_a_2299_;
v___y_3315_ = v_a_2300_;
v___y_3316_ = v_a_2301_;
goto v___jp_3310_;
}
}
else
{
lean_dec(v___x_3416_);
v___y_3311_ = v_a_2296_;
v___y_3312_ = v_a_2297_;
v___y_3313_ = v_a_2298_;
v___y_3314_ = v_a_2299_;
v___y_3315_ = v_a_2300_;
v___y_3316_ = v_a_2301_;
goto v___jp_3310_;
}
}
}
else
{
lean_dec(v___x_3416_);
v___y_3311_ = v_a_2296_;
v___y_3312_ = v_a_2297_;
v___y_3313_ = v_a_2298_;
v___y_3314_ = v_a_2299_;
v___y_3315_ = v_a_2300_;
v___y_3316_ = v_a_2301_;
goto v___jp_3310_;
}
v___jp_3294_:
{
lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; 
v___x_3301_ = lean_unsigned_to_nat(3u);
v___x_3302_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3301_);
lean_dec(v_stx_2295_);
v___x_3303_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3302_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_);
if (lean_obj_tag(v___x_3303_) == 0)
{
lean_object* v_a_3304_; uint8_t v_breaks_3305_; 
v_a_3304_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_a_3304_);
lean_dec_ref_known(v___x_3303_, 1);
v_breaks_3305_ = lean_ctor_get_uint8(v_a_3304_, sizeof(void*)*2);
if (v_breaks_3305_ == 0)
{
uint8_t v_returnsEarly_3306_; lean_object* v_reassigns_3307_; 
v_returnsEarly_3306_ = lean_ctor_get_uint8(v_a_3304_, sizeof(void*)*2 + 2);
v_reassigns_3307_ = lean_ctor_get(v_a_3304_, 1);
lean_inc(v_reassigns_3307_);
lean_dec(v_a_3304_);
v___y_2708_ = v_returnsEarly_3306_;
v___y_2709_ = v___x_3292_;
v___y_2710_ = v_reassigns_3307_;
v___y_2711_ = v___x_2715_;
goto v___jp_2707_;
}
else
{
uint8_t v_returnsEarly_3308_; lean_object* v_reassigns_3309_; 
v_returnsEarly_3308_ = lean_ctor_get_uint8(v_a_3304_, sizeof(void*)*2 + 2);
v_reassigns_3309_ = lean_ctor_get(v_a_3304_, 1);
lean_inc(v_reassigns_3309_);
lean_dec(v_a_3304_);
v___y_2708_ = v_returnsEarly_3308_;
v___y_2709_ = v___x_3293_;
v___y_2710_ = v_reassigns_3309_;
v___y_2711_ = v___x_2706_;
goto v___jp_2707_;
}
}
else
{
return v___x_3303_;
}
}
v___jp_3310_:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; uint8_t v___x_3319_; 
v___x_3317_ = lean_unsigned_to_nat(2u);
v___x_3318_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3317_);
v___x_3319_ = l_Lean_Syntax_isNone(v___x_3318_);
if (v___x_3319_ == 0)
{
uint8_t v___x_3320_; 
lean_inc(v___x_3318_);
v___x_3320_ = l_Lean_Syntax_matchesNull(v___x_3318_, v___x_3293_);
if (v___x_3320_ == 0)
{
lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v_env_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; 
lean_dec(v___x_3318_);
lean_inc_n(v_stx_2295_, 2);
v___x_3321_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3322_ = lean_st_ref_get(v___y_3316_);
v_env_3323_ = lean_ctor_get(v___x_3322_, 0);
lean_inc_ref(v_env_3323_);
lean_dec(v___x_3322_);
v___x_3324_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3325_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3324_, v_env_3323_, v___x_3321_);
v___x_3326_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3327_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3325_, v___x_3326_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
lean_dec(v___x_3325_);
if (lean_obj_tag(v___x_3327_) == 0)
{
lean_object* v_a_3328_; lean_object* v___x_3330_; uint8_t v_isShared_3331_; uint8_t v_isSharedCheck_3358_; 
v_a_3328_ = lean_ctor_get(v___x_3327_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3330_ = v___x_3327_;
v_isShared_3331_ = v_isSharedCheck_3358_;
goto v_resetjp_3329_;
}
else
{
lean_inc(v_a_3328_);
lean_dec(v___x_3327_);
v___x_3330_ = lean_box(0);
v_isShared_3331_ = v_isSharedCheck_3358_;
goto v_resetjp_3329_;
}
v_resetjp_3329_:
{
lean_object* v_fst_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3356_; 
v_fst_3332_ = lean_ctor_get(v_a_3328_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v_a_3328_);
if (v_isSharedCheck_3356_ == 0)
{
lean_object* v_unused_3357_; 
v_unused_3357_ = lean_ctor_get(v_a_3328_, 1);
lean_dec(v_unused_3357_);
v___x_3334_ = v_a_3328_;
v_isShared_3335_ = v_isSharedCheck_3356_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_fst_3332_);
lean_dec(v_a_3328_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3356_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
if (lean_obj_tag(v_fst_3332_) == 0)
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3339_; 
lean_del_object(v___x_3330_);
v___x_3336_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3337_ = l_Lean_MessageData_ofName(v___x_3321_);
lean_inc_ref(v___x_3337_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set_tag(v___x_3334_, 7);
lean_ctor_set(v___x_3334_, 1, v___x_3337_);
lean_ctor_set(v___x_3334_, 0, v___x_3336_);
v___x_3339_ = v___x_3334_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v___x_3336_);
lean_ctor_set(v_reuseFailAlloc_3351_, 1, v___x_3337_);
v___x_3339_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; 
v___x_3340_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3339_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
v___x_3342_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3343_ = l_Lean_indentD(v___x_3342_);
v___x_3344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3341_);
lean_ctor_set(v___x_3344_, 1, v___x_3343_);
v___x_3345_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3344_);
lean_ctor_set(v___x_3346_, 1, v___x_3345_);
v___x_3347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3346_);
lean_ctor_set(v___x_3347_, 1, v___x_3337_);
v___x_3348_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3347_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
v___x_3350_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3349_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
return v___x_3350_;
}
}
else
{
lean_object* v_val_3352_; lean_object* v___x_3354_; 
lean_del_object(v___x_3334_);
lean_dec(v___x_3321_);
lean_dec(v_stx_2295_);
v_val_3352_ = lean_ctor_get(v_fst_3332_, 0);
lean_inc(v_val_3352_);
lean_dec_ref_known(v_fst_3332_, 1);
if (v_isShared_3331_ == 0)
{
lean_ctor_set(v___x_3330_, 0, v_val_3352_);
v___x_3354_ = v___x_3330_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v_val_3352_);
v___x_3354_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
return v___x_3354_;
}
}
}
}
}
else
{
lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3366_; 
lean_dec(v___x_3321_);
lean_dec(v_stx_2295_);
v_a_3359_ = lean_ctor_get(v___x_3327_, 0);
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3361_ = v___x_3327_;
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3327_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3364_; 
if (v_isShared_3362_ == 0)
{
v___x_3364_ = v___x_3361_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v_a_3359_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
}
}
else
{
if (v___x_3319_ == 0)
{
lean_object* v___x_3367_; lean_object* v___x_3368_; uint8_t v___x_3369_; 
v___x_3367_ = l_Lean_Syntax_getArg(v___x_3318_, v___x_3292_);
lean_dec(v___x_3318_);
v___x_3368_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76));
v___x_3369_ = l_Lean_Syntax_isOfKind(v___x_3367_, v___x_3368_);
if (v___x_3369_ == 0)
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v_env_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
lean_inc_n(v_stx_2295_, 2);
v___x_3370_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3371_ = lean_st_ref_get(v___y_3316_);
v_env_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc_ref(v_env_3372_);
lean_dec(v___x_3371_);
v___x_3373_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3374_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3373_, v_env_3372_, v___x_3370_);
v___x_3375_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3376_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3374_, v___x_3375_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
lean_dec(v___x_3374_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3407_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3407_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3407_ == 0)
{
v___x_3379_ = v___x_3376_;
v_isShared_3380_ = v_isSharedCheck_3407_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v___x_3376_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3407_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v_fst_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3405_; 
v_fst_3381_ = lean_ctor_get(v_a_3377_, 0);
v_isSharedCheck_3405_ = !lean_is_exclusive(v_a_3377_);
if (v_isSharedCheck_3405_ == 0)
{
lean_object* v_unused_3406_; 
v_unused_3406_ = lean_ctor_get(v_a_3377_, 1);
lean_dec(v_unused_3406_);
v___x_3383_ = v_a_3377_;
v_isShared_3384_ = v_isSharedCheck_3405_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_fst_3381_);
lean_dec(v_a_3377_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3405_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
if (lean_obj_tag(v_fst_3381_) == 0)
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3388_; 
lean_del_object(v___x_3379_);
v___x_3385_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3386_ = l_Lean_MessageData_ofName(v___x_3370_);
lean_inc_ref(v___x_3386_);
if (v_isShared_3384_ == 0)
{
lean_ctor_set_tag(v___x_3383_, 7);
lean_ctor_set(v___x_3383_, 1, v___x_3386_);
lean_ctor_set(v___x_3383_, 0, v___x_3385_);
v___x_3388_ = v___x_3383_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v___x_3385_);
lean_ctor_set(v_reuseFailAlloc_3400_, 1, v___x_3386_);
v___x_3388_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3389_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3388_);
lean_ctor_set(v___x_3390_, 1, v___x_3389_);
v___x_3391_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3392_ = l_Lean_indentD(v___x_3391_);
v___x_3393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3390_);
lean_ctor_set(v___x_3393_, 1, v___x_3392_);
v___x_3394_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3393_);
lean_ctor_set(v___x_3395_, 1, v___x_3394_);
v___x_3396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3395_);
lean_ctor_set(v___x_3396_, 1, v___x_3386_);
v___x_3397_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3396_);
lean_ctor_set(v___x_3398_, 1, v___x_3397_);
v___x_3399_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3398_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
return v___x_3399_;
}
}
else
{
lean_object* v_val_3401_; lean_object* v___x_3403_; 
lean_del_object(v___x_3383_);
lean_dec(v___x_3370_);
lean_dec(v_stx_2295_);
v_val_3401_ = lean_ctor_get(v_fst_3381_, 0);
lean_inc(v_val_3401_);
lean_dec_ref_known(v_fst_3381_, 1);
if (v_isShared_3380_ == 0)
{
lean_ctor_set(v___x_3379_, 0, v_val_3401_);
v___x_3403_ = v___x_3379_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v_val_3401_);
v___x_3403_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
return v___x_3403_;
}
}
}
}
}
else
{
lean_object* v_a_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3415_; 
lean_dec(v___x_3370_);
lean_dec(v_stx_2295_);
v_a_3408_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3415_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3415_ == 0)
{
v___x_3410_ = v___x_3376_;
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_a_3408_);
lean_dec(v___x_3376_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3413_; 
if (v_isShared_3411_ == 0)
{
v___x_3413_ = v___x_3410_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_a_3408_);
v___x_3413_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
return v___x_3413_;
}
}
}
}
else
{
v___y_3295_ = v___y_3311_;
v___y_3296_ = v___y_3312_;
v___y_3297_ = v___y_3313_;
v___y_3298_ = v___y_3314_;
v___y_3299_ = v___y_3315_;
v___y_3300_ = v___y_3316_;
goto v___jp_3294_;
}
}
else
{
lean_dec(v___x_3318_);
v___y_3295_ = v___y_3311_;
v___y_3296_ = v___y_3312_;
v___y_3297_ = v___y_3313_;
v___y_3298_ = v___y_3314_;
v___y_3299_ = v___y_3315_;
v___y_3300_ = v___y_3316_;
goto v___jp_3294_;
}
}
}
else
{
lean_dec(v___x_3318_);
v___y_3295_ = v___y_3311_;
v___y_3296_ = v___y_3312_;
v___y_3297_ = v___y_3313_;
v___y_3298_ = v___y_3314_;
v___y_3299_ = v___y_3315_;
v___y_3300_ = v___y_3316_;
goto v___jp_3294_;
}
}
}
}
else
{
lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___y_3517_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___y_3545_; lean_object* v___y_3546_; lean_object* v___y_3547_; lean_object* v___y_3548_; lean_object* v___y_3549_; lean_object* v___y_3550_; lean_object* v___y_3651_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; uint8_t v___x_3804_; 
v___x_3514_ = lean_unsigned_to_nat(0u);
v___x_3515_ = lean_unsigned_to_nat(1u);
v___x_3800_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3515_);
v___x_3801_ = l_Lean_Syntax_getArgs(v___x_3800_);
lean_dec(v___x_3800_);
v___x_3802_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_3803_ = lean_array_get_size(v___x_3801_);
v___x_3804_ = lean_nat_dec_lt(v___x_3514_, v___x_3803_);
if (v___x_3804_ == 0)
{
lean_dec_ref(v___x_3801_);
v___y_3651_ = v___x_3802_;
goto v___jp_3650_;
}
else
{
lean_object* v___x_3805_; lean_object* v___x_3806_; size_t v___x_3807_; size_t v___x_3808_; lean_object* v___x_3809_; lean_object* v_snd_3810_; 
v___x_3805_ = lean_box(v___x_3804_);
v___x_3806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3806_, 0, v___x_3805_);
lean_ctor_set(v___x_3806_, 1, v___x_3802_);
v___x_3807_ = ((size_t)0ULL);
v___x_3808_ = lean_usize_of_nat(v___x_3803_);
v___x_3809_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2706_, v___x_2704_, v___x_3801_, v___x_3807_, v___x_3808_, v___x_3806_);
lean_dec_ref(v___x_3801_);
v_snd_3810_ = lean_ctor_get(v___x_3809_, 1);
lean_inc(v_snd_3810_);
lean_dec_ref(v___x_3809_);
v___y_3651_ = v_snd_3810_;
goto v___jp_3650_;
}
v___jp_3516_:
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; 
v___x_3523_ = lean_unsigned_to_nat(5u);
v___x_3524_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3523_);
lean_dec(v_stx_2295_);
v___x_3525_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3524_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_);
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v_a_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3543_; 
v_a_3526_ = lean_ctor_get(v___x_3525_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3528_ = v___x_3525_;
v_isShared_3529_ = v_isSharedCheck_3543_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_a_3526_);
lean_dec(v___x_3525_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3543_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
uint8_t v_returnsEarly_3530_; lean_object* v_reassigns_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3541_; 
v_returnsEarly_3530_ = lean_ctor_get_uint8(v_a_3526_, sizeof(void*)*2 + 2);
v_reassigns_3531_ = lean_ctor_get(v_a_3526_, 1);
v_isSharedCheck_3541_ = !lean_is_exclusive(v_a_3526_);
if (v_isSharedCheck_3541_ == 0)
{
lean_object* v_unused_3542_; 
v_unused_3542_ = lean_ctor_get(v_a_3526_, 0);
lean_dec(v_unused_3542_);
v___x_3533_ = v_a_3526_;
v_isShared_3534_ = v_isSharedCheck_3541_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_reassigns_3531_);
lean_dec(v_a_3526_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3541_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3536_; 
if (v_isShared_3534_ == 0)
{
lean_ctor_set(v___x_3533_, 0, v___x_3515_);
v___x_3536_ = v___x_3533_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v___x_3515_);
lean_ctor_set(v_reuseFailAlloc_3540_, 1, v_reassigns_3531_);
lean_ctor_set_uint8(v_reuseFailAlloc_3540_, sizeof(void*)*2 + 2, v_returnsEarly_3530_);
v___x_3536_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
lean_object* v___x_3538_; 
lean_ctor_set_uint8(v___x_3536_, sizeof(void*)*2, v___x_2704_);
lean_ctor_set_uint8(v___x_3536_, sizeof(void*)*2 + 1, v___x_2704_);
lean_ctor_set_uint8(v___x_3536_, sizeof(void*)*2 + 3, v___x_2704_);
if (v_isShared_3529_ == 0)
{
lean_ctor_set(v___x_3528_, 0, v___x_3536_);
v___x_3538_ = v___x_3528_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v___x_3536_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
}
}
else
{
return v___x_3525_;
}
}
v___jp_3544_:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; uint8_t v___x_3553_; 
v___x_3551_ = lean_unsigned_to_nat(3u);
v___x_3552_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3551_);
v___x_3553_ = l_Lean_Syntax_isNone(v___x_3552_);
if (v___x_3553_ == 0)
{
uint8_t v___x_3554_; 
lean_inc(v___x_3552_);
v___x_3554_ = l_Lean_Syntax_matchesNull(v___x_3552_, v___x_3515_);
if (v___x_3554_ == 0)
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v_env_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
lean_dec(v___x_3552_);
lean_inc_n(v_stx_2295_, 2);
v___x_3555_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3556_ = lean_st_ref_get(v___y_3550_);
v_env_3557_ = lean_ctor_get(v___x_3556_, 0);
lean_inc_ref(v_env_3557_);
lean_dec(v___x_3556_);
v___x_3558_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3559_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3558_, v_env_3557_, v___x_3555_);
v___x_3560_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3561_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3559_, v___x_3560_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_);
lean_dec(v___x_3559_);
if (lean_obj_tag(v___x_3561_) == 0)
{
lean_object* v_a_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3592_; 
v_a_3562_ = lean_ctor_get(v___x_3561_, 0);
v_isSharedCheck_3592_ = !lean_is_exclusive(v___x_3561_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3564_ = v___x_3561_;
v_isShared_3565_ = v_isSharedCheck_3592_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_a_3562_);
lean_dec(v___x_3561_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3592_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v_fst_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3590_; 
v_fst_3566_ = lean_ctor_get(v_a_3562_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v_a_3562_);
if (v_isSharedCheck_3590_ == 0)
{
lean_object* v_unused_3591_; 
v_unused_3591_ = lean_ctor_get(v_a_3562_, 1);
lean_dec(v_unused_3591_);
v___x_3568_ = v_a_3562_;
v_isShared_3569_ = v_isSharedCheck_3590_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_fst_3566_);
lean_dec(v_a_3562_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3590_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
if (lean_obj_tag(v_fst_3566_) == 0)
{
lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3573_; 
lean_del_object(v___x_3564_);
v___x_3570_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3571_ = l_Lean_MessageData_ofName(v___x_3555_);
lean_inc_ref(v___x_3571_);
if (v_isShared_3569_ == 0)
{
lean_ctor_set_tag(v___x_3568_, 7);
lean_ctor_set(v___x_3568_, 1, v___x_3571_);
lean_ctor_set(v___x_3568_, 0, v___x_3570_);
v___x_3573_ = v___x_3568_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v___x_3570_);
lean_ctor_set(v_reuseFailAlloc_3585_, 1, v___x_3571_);
v___x_3573_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___x_3574_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3573_);
lean_ctor_set(v___x_3575_, 1, v___x_3574_);
v___x_3576_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3577_ = l_Lean_indentD(v___x_3576_);
v___x_3578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3575_);
lean_ctor_set(v___x_3578_, 1, v___x_3577_);
v___x_3579_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3578_);
lean_ctor_set(v___x_3580_, 1, v___x_3579_);
v___x_3581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3580_);
lean_ctor_set(v___x_3581_, 1, v___x_3571_);
v___x_3582_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3581_);
lean_ctor_set(v___x_3583_, 1, v___x_3582_);
v___x_3584_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3583_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_);
return v___x_3584_;
}
}
else
{
lean_object* v_val_3586_; lean_object* v___x_3588_; 
lean_del_object(v___x_3568_);
lean_dec(v___x_3555_);
lean_dec(v_stx_2295_);
v_val_3586_ = lean_ctor_get(v_fst_3566_, 0);
lean_inc(v_val_3586_);
lean_dec_ref_known(v_fst_3566_, 1);
if (v_isShared_3565_ == 0)
{
lean_ctor_set(v___x_3564_, 0, v_val_3586_);
v___x_3588_ = v___x_3564_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_val_3586_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
}
}
else
{
lean_object* v_a_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3600_; 
lean_dec(v___x_3555_);
lean_dec(v_stx_2295_);
v_a_3593_ = lean_ctor_get(v___x_3561_, 0);
v_isSharedCheck_3600_ = !lean_is_exclusive(v___x_3561_);
if (v_isSharedCheck_3600_ == 0)
{
v___x_3595_ = v___x_3561_;
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_a_3593_);
lean_dec(v___x_3561_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3598_; 
if (v_isShared_3596_ == 0)
{
v___x_3598_ = v___x_3595_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v_a_3593_);
v___x_3598_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
return v___x_3598_;
}
}
}
}
else
{
if (v___x_3553_ == 0)
{
lean_object* v___x_3601_; lean_object* v___x_3602_; uint8_t v___x_3603_; 
v___x_3601_ = l_Lean_Syntax_getArg(v___x_3552_, v___x_3514_);
lean_dec(v___x_3552_);
v___x_3602_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76));
v___x_3603_ = l_Lean_Syntax_isOfKind(v___x_3601_, v___x_3602_);
if (v___x_3603_ == 0)
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v_env_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; 
lean_inc_n(v_stx_2295_, 2);
v___x_3604_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3605_ = lean_st_ref_get(v___y_3550_);
v_env_3606_ = lean_ctor_get(v___x_3605_, 0);
lean_inc_ref(v_env_3606_);
lean_dec(v___x_3605_);
v___x_3607_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3608_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3607_, v_env_3606_, v___x_3604_);
v___x_3609_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3610_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3608_, v___x_3609_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_);
lean_dec(v___x_3608_);
if (lean_obj_tag(v___x_3610_) == 0)
{
lean_object* v_a_3611_; lean_object* v___x_3613_; uint8_t v_isShared_3614_; uint8_t v_isSharedCheck_3641_; 
v_a_3611_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3613_ = v___x_3610_;
v_isShared_3614_ = v_isSharedCheck_3641_;
goto v_resetjp_3612_;
}
else
{
lean_inc(v_a_3611_);
lean_dec(v___x_3610_);
v___x_3613_ = lean_box(0);
v_isShared_3614_ = v_isSharedCheck_3641_;
goto v_resetjp_3612_;
}
v_resetjp_3612_:
{
lean_object* v_fst_3615_; lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3639_; 
v_fst_3615_ = lean_ctor_get(v_a_3611_, 0);
v_isSharedCheck_3639_ = !lean_is_exclusive(v_a_3611_);
if (v_isSharedCheck_3639_ == 0)
{
lean_object* v_unused_3640_; 
v_unused_3640_ = lean_ctor_get(v_a_3611_, 1);
lean_dec(v_unused_3640_);
v___x_3617_ = v_a_3611_;
v_isShared_3618_ = v_isSharedCheck_3639_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_fst_3615_);
lean_dec(v_a_3611_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3639_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
if (lean_obj_tag(v_fst_3615_) == 0)
{
lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3622_; 
lean_del_object(v___x_3613_);
v___x_3619_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3620_ = l_Lean_MessageData_ofName(v___x_3604_);
lean_inc_ref(v___x_3620_);
if (v_isShared_3618_ == 0)
{
lean_ctor_set_tag(v___x_3617_, 7);
lean_ctor_set(v___x_3617_, 1, v___x_3620_);
lean_ctor_set(v___x_3617_, 0, v___x_3619_);
v___x_3622_ = v___x_3617_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3634_; 
v_reuseFailAlloc_3634_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3634_, 0, v___x_3619_);
lean_ctor_set(v_reuseFailAlloc_3634_, 1, v___x_3620_);
v___x_3622_ = v_reuseFailAlloc_3634_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3623_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3624_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3622_);
lean_ctor_set(v___x_3624_, 1, v___x_3623_);
v___x_3625_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3626_ = l_Lean_indentD(v___x_3625_);
v___x_3627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3627_, 0, v___x_3624_);
lean_ctor_set(v___x_3627_, 1, v___x_3626_);
v___x_3628_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3627_);
lean_ctor_set(v___x_3629_, 1, v___x_3628_);
v___x_3630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3629_);
lean_ctor_set(v___x_3630_, 1, v___x_3620_);
v___x_3631_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3632_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3632_, 0, v___x_3630_);
lean_ctor_set(v___x_3632_, 1, v___x_3631_);
v___x_3633_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3632_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_);
return v___x_3633_;
}
}
else
{
lean_object* v_val_3635_; lean_object* v___x_3637_; 
lean_del_object(v___x_3617_);
lean_dec(v___x_3604_);
lean_dec(v_stx_2295_);
v_val_3635_ = lean_ctor_get(v_fst_3615_, 0);
lean_inc(v_val_3635_);
lean_dec_ref_known(v_fst_3615_, 1);
if (v_isShared_3614_ == 0)
{
lean_ctor_set(v___x_3613_, 0, v_val_3635_);
v___x_3637_ = v___x_3613_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v_val_3635_);
v___x_3637_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
return v___x_3637_;
}
}
}
}
}
else
{
lean_object* v_a_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3649_; 
lean_dec(v___x_3604_);
lean_dec(v_stx_2295_);
v_a_3642_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3644_ = v___x_3610_;
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_a_3642_);
lean_dec(v___x_3610_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3647_; 
if (v_isShared_3645_ == 0)
{
v___x_3647_ = v___x_3644_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_a_3642_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
}
else
{
v___y_3517_ = v___y_3545_;
v___y_3518_ = v___y_3546_;
v___y_3519_ = v___y_3547_;
v___y_3520_ = v___y_3548_;
v___y_3521_ = v___y_3549_;
v___y_3522_ = v___y_3550_;
goto v___jp_3516_;
}
}
else
{
lean_dec(v___x_3552_);
v___y_3517_ = v___y_3545_;
v___y_3518_ = v___y_3546_;
v___y_3519_ = v___y_3547_;
v___y_3520_ = v___y_3548_;
v___y_3521_ = v___y_3549_;
v___y_3522_ = v___y_3550_;
goto v___jp_3516_;
}
}
}
else
{
lean_dec(v___x_3552_);
v___y_3517_ = v___y_3545_;
v___y_3518_ = v___y_3546_;
v___y_3519_ = v___y_3547_;
v___y_3520_ = v___y_3548_;
v___y_3521_ = v___y_3549_;
v___y_3522_ = v___y_3550_;
goto v___jp_3516_;
}
}
v___jp_3650_:
{
size_t v_sz_3652_; size_t v___x_3653_; lean_object* v___x_3654_; 
v_sz_3652_ = lean_array_size(v___y_3651_);
v___x_3653_ = ((size_t)0ULL);
v___x_3654_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(v_sz_3652_, v___x_3653_, v___y_3651_);
if (lean_obj_tag(v___x_3654_) == 0)
{
lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v_env_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
lean_inc_n(v_stx_2295_, 2);
v___x_3655_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3656_ = lean_st_ref_get(v_a_2301_);
v_env_3657_ = lean_ctor_get(v___x_3656_, 0);
lean_inc_ref(v_env_3657_);
lean_dec(v___x_3656_);
v___x_3658_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3659_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3658_, v_env_3657_, v___x_3655_);
v___x_3660_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3661_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3659_, v___x_3660_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3659_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3692_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3664_ = v___x_3661_;
v_isShared_3665_ = v_isSharedCheck_3692_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3661_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3692_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v_fst_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3690_; 
v_fst_3666_ = lean_ctor_get(v_a_3662_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v_a_3662_);
if (v_isSharedCheck_3690_ == 0)
{
lean_object* v_unused_3691_; 
v_unused_3691_ = lean_ctor_get(v_a_3662_, 1);
lean_dec(v_unused_3691_);
v___x_3668_ = v_a_3662_;
v_isShared_3669_ = v_isSharedCheck_3690_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_fst_3666_);
lean_dec(v_a_3662_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3690_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
if (lean_obj_tag(v_fst_3666_) == 0)
{
lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3673_; 
lean_del_object(v___x_3664_);
v___x_3670_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3671_ = l_Lean_MessageData_ofName(v___x_3655_);
lean_inc_ref(v___x_3671_);
if (v_isShared_3669_ == 0)
{
lean_ctor_set_tag(v___x_3668_, 7);
lean_ctor_set(v___x_3668_, 1, v___x_3671_);
lean_ctor_set(v___x_3668_, 0, v___x_3670_);
v___x_3673_ = v___x_3668_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v___x_3670_);
lean_ctor_set(v_reuseFailAlloc_3685_, 1, v___x_3671_);
v___x_3673_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; 
v___x_3674_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3675_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3675_, 0, v___x_3673_);
lean_ctor_set(v___x_3675_, 1, v___x_3674_);
v___x_3676_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3677_ = l_Lean_indentD(v___x_3676_);
v___x_3678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3678_, 0, v___x_3675_);
lean_ctor_set(v___x_3678_, 1, v___x_3677_);
v___x_3679_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3678_);
lean_ctor_set(v___x_3680_, 1, v___x_3679_);
v___x_3681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3681_, 0, v___x_3680_);
lean_ctor_set(v___x_3681_, 1, v___x_3671_);
v___x_3682_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3683_, 0, v___x_3681_);
lean_ctor_set(v___x_3683_, 1, v___x_3682_);
v___x_3684_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3683_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3684_;
}
}
else
{
lean_object* v_val_3686_; lean_object* v___x_3688_; 
lean_del_object(v___x_3668_);
lean_dec(v___x_3655_);
lean_dec(v_stx_2295_);
v_val_3686_ = lean_ctor_get(v_fst_3666_, 0);
lean_inc(v_val_3686_);
lean_dec_ref_known(v_fst_3666_, 1);
if (v_isShared_3665_ == 0)
{
lean_ctor_set(v___x_3664_, 0, v_val_3686_);
v___x_3688_ = v___x_3664_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_val_3686_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
}
}
else
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3700_; 
lean_dec(v___x_3655_);
lean_dec(v_stx_2295_);
v_a_3693_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3695_ = v___x_3661_;
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3661_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3693_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
else
{
lean_object* v___x_3701_; lean_object* v___x_3702_; uint8_t v___x_3703_; 
lean_dec_ref_known(v___x_3654_, 1);
v___x_3701_ = lean_unsigned_to_nat(2u);
v___x_3702_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3701_);
v___x_3703_ = l_Lean_Syntax_isNone(v___x_3702_);
if (v___x_3703_ == 0)
{
uint8_t v___x_3704_; 
lean_inc(v___x_3702_);
v___x_3704_ = l_Lean_Syntax_matchesNull(v___x_3702_, v___x_3515_);
if (v___x_3704_ == 0)
{
lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v_env_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; 
lean_dec(v___x_3702_);
lean_inc_n(v_stx_2295_, 2);
v___x_3705_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3706_ = lean_st_ref_get(v_a_2301_);
v_env_3707_ = lean_ctor_get(v___x_3706_, 0);
lean_inc_ref(v_env_3707_);
lean_dec(v___x_3706_);
v___x_3708_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3709_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3708_, v_env_3707_, v___x_3705_);
v___x_3710_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3711_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3709_, v___x_3710_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3709_);
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_object* v_a_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3742_; 
v_a_3712_ = lean_ctor_get(v___x_3711_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3714_ = v___x_3711_;
v_isShared_3715_ = v_isSharedCheck_3742_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_a_3712_);
lean_dec(v___x_3711_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3742_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
lean_object* v_fst_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3740_; 
v_fst_3716_ = lean_ctor_get(v_a_3712_, 0);
v_isSharedCheck_3740_ = !lean_is_exclusive(v_a_3712_);
if (v_isSharedCheck_3740_ == 0)
{
lean_object* v_unused_3741_; 
v_unused_3741_ = lean_ctor_get(v_a_3712_, 1);
lean_dec(v_unused_3741_);
v___x_3718_ = v_a_3712_;
v_isShared_3719_ = v_isSharedCheck_3740_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_fst_3716_);
lean_dec(v_a_3712_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3740_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
if (lean_obj_tag(v_fst_3716_) == 0)
{
lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3723_; 
lean_del_object(v___x_3714_);
v___x_3720_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3721_ = l_Lean_MessageData_ofName(v___x_3705_);
lean_inc_ref(v___x_3721_);
if (v_isShared_3719_ == 0)
{
lean_ctor_set_tag(v___x_3718_, 7);
lean_ctor_set(v___x_3718_, 1, v___x_3721_);
lean_ctor_set(v___x_3718_, 0, v___x_3720_);
v___x_3723_ = v___x_3718_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v___x_3720_);
lean_ctor_set(v_reuseFailAlloc_3735_, 1, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3724_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3723_);
lean_ctor_set(v___x_3725_, 1, v___x_3724_);
v___x_3726_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3727_ = l_Lean_indentD(v___x_3726_);
v___x_3728_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3728_, 0, v___x_3725_);
lean_ctor_set(v___x_3728_, 1, v___x_3727_);
v___x_3729_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3730_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3730_, 0, v___x_3728_);
lean_ctor_set(v___x_3730_, 1, v___x_3729_);
v___x_3731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3730_);
lean_ctor_set(v___x_3731_, 1, v___x_3721_);
v___x_3732_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3731_);
lean_ctor_set(v___x_3733_, 1, v___x_3732_);
v___x_3734_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3733_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3734_;
}
}
else
{
lean_object* v_val_3736_; lean_object* v___x_3738_; 
lean_del_object(v___x_3718_);
lean_dec(v___x_3705_);
lean_dec(v_stx_2295_);
v_val_3736_ = lean_ctor_get(v_fst_3716_, 0);
lean_inc(v_val_3736_);
lean_dec_ref_known(v_fst_3716_, 1);
if (v_isShared_3715_ == 0)
{
lean_ctor_set(v___x_3714_, 0, v_val_3736_);
v___x_3738_ = v___x_3714_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v_val_3736_);
v___x_3738_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
return v___x_3738_;
}
}
}
}
}
else
{
lean_object* v_a_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
lean_dec(v___x_3705_);
lean_dec(v_stx_2295_);
v_a_3743_ = lean_ctor_get(v___x_3711_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3711_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v___x_3711_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3743_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
}
else
{
if (v___x_3703_ == 0)
{
lean_object* v___x_3751_; lean_object* v___x_3752_; uint8_t v___x_3753_; 
v___x_3751_ = l_Lean_Syntax_getArg(v___x_3702_, v___x_3514_);
lean_dec(v___x_3702_);
v___x_3752_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78));
v___x_3753_ = l_Lean_Syntax_isOfKind(v___x_3751_, v___x_3752_);
if (v___x_3753_ == 0)
{
lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v_env_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; 
lean_inc_n(v_stx_2295_, 2);
v___x_3754_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3755_ = lean_st_ref_get(v_a_2301_);
v_env_3756_ = lean_ctor_get(v___x_3755_, 0);
lean_inc_ref(v_env_3756_);
lean_dec(v___x_3755_);
v___x_3757_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3758_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3757_, v_env_3756_, v___x_3754_);
v___x_3759_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3760_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3758_, v___x_3759_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3758_);
if (lean_obj_tag(v___x_3760_) == 0)
{
lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3791_; 
v_a_3761_ = lean_ctor_get(v___x_3760_, 0);
v_isSharedCheck_3791_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3791_ == 0)
{
v___x_3763_ = v___x_3760_;
v_isShared_3764_ = v_isSharedCheck_3791_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v___x_3760_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3791_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v_fst_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3789_; 
v_fst_3765_ = lean_ctor_get(v_a_3761_, 0);
v_isSharedCheck_3789_ = !lean_is_exclusive(v_a_3761_);
if (v_isSharedCheck_3789_ == 0)
{
lean_object* v_unused_3790_; 
v_unused_3790_ = lean_ctor_get(v_a_3761_, 1);
lean_dec(v_unused_3790_);
v___x_3767_ = v_a_3761_;
v_isShared_3768_ = v_isSharedCheck_3789_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_fst_3765_);
lean_dec(v_a_3761_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3789_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
if (lean_obj_tag(v_fst_3765_) == 0)
{
lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3772_; 
lean_del_object(v___x_3763_);
v___x_3769_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3770_ = l_Lean_MessageData_ofName(v___x_3754_);
lean_inc_ref(v___x_3770_);
if (v_isShared_3768_ == 0)
{
lean_ctor_set_tag(v___x_3767_, 7);
lean_ctor_set(v___x_3767_, 1, v___x_3770_);
lean_ctor_set(v___x_3767_, 0, v___x_3769_);
v___x_3772_ = v___x_3767_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v___x_3769_);
lean_ctor_set(v_reuseFailAlloc_3784_, 1, v___x_3770_);
v___x_3772_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; 
v___x_3773_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3774_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3772_);
lean_ctor_set(v___x_3774_, 1, v___x_3773_);
v___x_3775_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3776_ = l_Lean_indentD(v___x_3775_);
v___x_3777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3774_);
lean_ctor_set(v___x_3777_, 1, v___x_3776_);
v___x_3778_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3779_, 0, v___x_3777_);
lean_ctor_set(v___x_3779_, 1, v___x_3778_);
v___x_3780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3779_);
lean_ctor_set(v___x_3780_, 1, v___x_3770_);
v___x_3781_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3780_);
lean_ctor_set(v___x_3782_, 1, v___x_3781_);
v___x_3783_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3782_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3783_;
}
}
else
{
lean_object* v_val_3785_; lean_object* v___x_3787_; 
lean_del_object(v___x_3767_);
lean_dec(v___x_3754_);
lean_dec(v_stx_2295_);
v_val_3785_ = lean_ctor_get(v_fst_3765_, 0);
lean_inc(v_val_3785_);
lean_dec_ref_known(v_fst_3765_, 1);
if (v_isShared_3764_ == 0)
{
lean_ctor_set(v___x_3763_, 0, v_val_3785_);
v___x_3787_ = v___x_3763_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v_val_3785_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
}
}
}
else
{
lean_object* v_a_3792_; lean_object* v___x_3794_; uint8_t v_isShared_3795_; uint8_t v_isSharedCheck_3799_; 
lean_dec(v___x_3754_);
lean_dec(v_stx_2295_);
v_a_3792_ = lean_ctor_get(v___x_3760_, 0);
v_isSharedCheck_3799_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3799_ == 0)
{
v___x_3794_ = v___x_3760_;
v_isShared_3795_ = v_isSharedCheck_3799_;
goto v_resetjp_3793_;
}
else
{
lean_inc(v_a_3792_);
lean_dec(v___x_3760_);
v___x_3794_ = lean_box(0);
v_isShared_3795_ = v_isSharedCheck_3799_;
goto v_resetjp_3793_;
}
v_resetjp_3793_:
{
lean_object* v___x_3797_; 
if (v_isShared_3795_ == 0)
{
v___x_3797_ = v___x_3794_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v_a_3792_);
v___x_3797_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
return v___x_3797_;
}
}
}
}
else
{
v___y_3545_ = v_a_2296_;
v___y_3546_ = v_a_2297_;
v___y_3547_ = v_a_2298_;
v___y_3548_ = v_a_2299_;
v___y_3549_ = v_a_2300_;
v___y_3550_ = v_a_2301_;
goto v___jp_3544_;
}
}
else
{
lean_dec(v___x_3702_);
v___y_3545_ = v_a_2296_;
v___y_3546_ = v_a_2297_;
v___y_3547_ = v_a_2298_;
v___y_3548_ = v_a_2299_;
v___y_3549_ = v_a_2300_;
v___y_3550_ = v_a_2301_;
goto v___jp_3544_;
}
}
}
else
{
lean_dec(v___x_3702_);
v___y_3545_ = v_a_2296_;
v___y_3546_ = v_a_2297_;
v___y_3547_ = v_a_2298_;
v___y_3548_ = v_a_2299_;
v___y_3549_ = v_a_2300_;
v___y_3550_ = v_a_2301_;
goto v___jp_3544_;
}
}
}
}
v___jp_2707_:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; 
v___x_2712_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2712_, 0, v___y_2709_);
lean_ctor_set(v___x_2712_, 1, v___y_2710_);
lean_ctor_set_uint8(v___x_2712_, sizeof(void*)*2, v___x_2706_);
lean_ctor_set_uint8(v___x_2712_, sizeof(void*)*2 + 1, v___x_2706_);
lean_ctor_set_uint8(v___x_2712_, sizeof(void*)*2 + 2, v___y_2708_);
lean_ctor_set_uint8(v___x_2712_, sizeof(void*)*2 + 3, v___y_2711_);
v___x_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2712_);
return v___x_2713_;
}
}
else
{
lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3811_ = lean_unsigned_to_nat(1u);
v___x_3812_ = lean_unsigned_to_nat(3u);
v___x_3813_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3812_);
lean_dec(v_stx_2295_);
v___x_3814_ = l_Lean_NameSet_empty;
v___x_3815_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_3815_, 0, v___x_3811_);
lean_ctor_set(v___x_3815_, 1, v___x_3814_);
lean_ctor_set_uint8(v___x_3815_, sizeof(void*)*2, v___x_2702_);
lean_ctor_set_uint8(v___x_3815_, sizeof(void*)*2 + 1, v___x_2702_);
lean_ctor_set_uint8(v___x_3815_, sizeof(void*)*2 + 2, v___x_2702_);
lean_ctor_set_uint8(v___x_3815_, sizeof(void*)*2 + 3, v___x_2702_);
v___x_3816_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3813_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_3816_) == 0)
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3825_; 
v_a_3817_ = lean_ctor_get(v___x_3816_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v___x_3816_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3819_ = v___x_3816_;
v_isShared_3820_ = v_isSharedCheck_3825_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3816_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3825_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3821_; lean_object* v___x_3823_; 
v___x_3821_ = l_Lean_Elab_Do_ControlInfo_alternative(v___x_3815_, v_a_3817_);
if (v_isShared_3820_ == 0)
{
lean_ctor_set(v___x_3819_, 0, v___x_3821_);
v___x_3823_ = v___x_3819_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v___x_3821_);
v___x_3823_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
return v___x_3823_;
}
}
}
else
{
lean_dec_ref_known(v___x_3815_, 2);
return v___x_3816_;
}
}
}
else
{
lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; size_t v_sz_3829_; size_t v___x_3830_; lean_object* v___x_3831_; 
v___x_3826_ = lean_unsigned_to_nat(4u);
v___x_3827_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3826_);
v___x_3828_ = l_Lean_Syntax_getArgs(v___x_3827_);
lean_dec(v___x_3827_);
v_sz_3829_ = lean_array_size(v___x_3828_);
v___x_3830_ = ((size_t)0ULL);
v___x_3831_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(v_sz_3829_, v___x_3830_, v___x_3828_);
if (lean_obj_tag(v___x_3831_) == 0)
{
lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v_env_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
lean_inc_n(v_stx_2295_, 2);
v___x_3832_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3833_ = lean_st_ref_get(v_a_2301_);
v_env_3834_ = lean_ctor_get(v___x_3833_, 0);
lean_inc_ref(v_env_3834_);
lean_dec(v___x_3833_);
v___x_3835_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3836_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3835_, v_env_3834_, v___x_3832_);
v___x_3837_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3838_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3836_, v___x_3837_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3836_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3869_; 
v_a_3839_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3841_ = v___x_3838_;
v_isShared_3842_ = v_isSharedCheck_3869_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3838_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3869_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v_fst_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3867_; 
v_fst_3843_ = lean_ctor_get(v_a_3839_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v_a_3839_);
if (v_isSharedCheck_3867_ == 0)
{
lean_object* v_unused_3868_; 
v_unused_3868_ = lean_ctor_get(v_a_3839_, 1);
lean_dec(v_unused_3868_);
v___x_3845_ = v_a_3839_;
v_isShared_3846_ = v_isSharedCheck_3867_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_fst_3843_);
lean_dec(v_a_3839_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3867_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
if (lean_obj_tag(v_fst_3843_) == 0)
{
lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3850_; 
lean_del_object(v___x_3841_);
v___x_3847_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3848_ = l_Lean_MessageData_ofName(v___x_3832_);
lean_inc_ref(v___x_3848_);
if (v_isShared_3846_ == 0)
{
lean_ctor_set_tag(v___x_3845_, 7);
lean_ctor_set(v___x_3845_, 1, v___x_3848_);
lean_ctor_set(v___x_3845_, 0, v___x_3847_);
v___x_3850_ = v___x_3845_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v___x_3847_);
lean_ctor_set(v_reuseFailAlloc_3862_, 1, v___x_3848_);
v___x_3850_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3851_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3852_, 0, v___x_3850_);
lean_ctor_set(v___x_3852_, 1, v___x_3851_);
v___x_3853_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3854_ = l_Lean_indentD(v___x_3853_);
v___x_3855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3855_, 0, v___x_3852_);
lean_ctor_set(v___x_3855_, 1, v___x_3854_);
v___x_3856_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3857_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3857_, 0, v___x_3855_);
lean_ctor_set(v___x_3857_, 1, v___x_3856_);
v___x_3858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3858_, 0, v___x_3857_);
lean_ctor_set(v___x_3858_, 1, v___x_3848_);
v___x_3859_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3860_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3858_);
lean_ctor_set(v___x_3860_, 1, v___x_3859_);
v___x_3861_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3860_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3861_;
}
}
else
{
lean_object* v_val_3863_; lean_object* v___x_3865_; 
lean_del_object(v___x_3845_);
lean_dec(v___x_3832_);
lean_dec(v_stx_2295_);
v_val_3863_ = lean_ctor_get(v_fst_3843_, 0);
lean_inc(v_val_3863_);
lean_dec_ref_known(v_fst_3843_, 1);
if (v_isShared_3842_ == 0)
{
lean_ctor_set(v___x_3841_, 0, v_val_3863_);
v___x_3865_ = v___x_3841_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_val_3863_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
return v___x_3865_;
}
}
}
}
}
else
{
lean_object* v_a_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3877_; 
lean_dec(v___x_3832_);
lean_dec(v_stx_2295_);
v_a_3870_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3877_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3877_ == 0)
{
v___x_3872_ = v___x_3838_;
v_isShared_3873_ = v_isSharedCheck_3877_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_a_3870_);
lean_dec(v___x_3838_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3877_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3875_; 
if (v_isShared_3873_ == 0)
{
v___x_3875_ = v___x_3872_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3876_; 
v_reuseFailAlloc_3876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3876_, 0, v_a_3870_);
v___x_3875_ = v_reuseFailAlloc_3876_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
return v___x_3875_;
}
}
}
}
else
{
lean_object* v_val_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3965_; 
v_val_3878_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3965_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3965_ == 0)
{
v___x_3880_ = v___x_3831_;
v_isShared_3881_ = v_isSharedCheck_3965_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_val_3878_);
lean_dec(v___x_3831_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3965_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v_elseSeq_x3f_3885_; lean_object* v___y_3886_; lean_object* v___y_3887_; lean_object* v___y_3888_; lean_object* v___y_3889_; lean_object* v___y_3890_; lean_object* v___y_3891_; lean_object* v___x_3908_; lean_object* v___x_3909_; uint8_t v___x_3910_; 
v___x_3882_ = lean_unsigned_to_nat(3u);
v___x_3883_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3882_);
v___x_3908_ = lean_unsigned_to_nat(5u);
v___x_3909_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3908_);
v___x_3910_ = l_Lean_Syntax_isNone(v___x_3909_);
if (v___x_3910_ == 0)
{
lean_object* v___x_3911_; uint8_t v___x_3912_; 
v___x_3911_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3909_);
v___x_3912_ = l_Lean_Syntax_matchesNull(v___x_3909_, v___x_3911_);
if (v___x_3912_ == 0)
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v_env_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; 
lean_dec(v___x_3909_);
lean_dec(v___x_3883_);
lean_del_object(v___x_3880_);
lean_dec(v_val_3878_);
lean_inc_n(v_stx_2295_, 2);
v___x_3913_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3914_ = lean_st_ref_get(v_a_2301_);
v_env_3915_ = lean_ctor_get(v___x_3914_, 0);
lean_inc_ref(v_env_3915_);
lean_dec(v___x_3914_);
v___x_3916_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3917_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3916_, v_env_3915_, v___x_3913_);
v___x_3918_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3919_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3917_, v___x_3918_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_3917_);
if (lean_obj_tag(v___x_3919_) == 0)
{
lean_object* v_a_3920_; lean_object* v___x_3922_; uint8_t v_isShared_3923_; uint8_t v_isSharedCheck_3950_; 
v_a_3920_ = lean_ctor_get(v___x_3919_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v___x_3919_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3922_ = v___x_3919_;
v_isShared_3923_ = v_isSharedCheck_3950_;
goto v_resetjp_3921_;
}
else
{
lean_inc(v_a_3920_);
lean_dec(v___x_3919_);
v___x_3922_ = lean_box(0);
v_isShared_3923_ = v_isSharedCheck_3950_;
goto v_resetjp_3921_;
}
v_resetjp_3921_:
{
lean_object* v_fst_3924_; lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_3948_; 
v_fst_3924_ = lean_ctor_get(v_a_3920_, 0);
v_isSharedCheck_3948_ = !lean_is_exclusive(v_a_3920_);
if (v_isSharedCheck_3948_ == 0)
{
lean_object* v_unused_3949_; 
v_unused_3949_ = lean_ctor_get(v_a_3920_, 1);
lean_dec(v_unused_3949_);
v___x_3926_ = v_a_3920_;
v_isShared_3927_ = v_isSharedCheck_3948_;
goto v_resetjp_3925_;
}
else
{
lean_inc(v_fst_3924_);
lean_dec(v_a_3920_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_3948_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
if (lean_obj_tag(v_fst_3924_) == 0)
{
lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3931_; 
lean_del_object(v___x_3922_);
v___x_3928_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3929_ = l_Lean_MessageData_ofName(v___x_3913_);
lean_inc_ref(v___x_3929_);
if (v_isShared_3927_ == 0)
{
lean_ctor_set_tag(v___x_3926_, 7);
lean_ctor_set(v___x_3926_, 1, v___x_3929_);
lean_ctor_set(v___x_3926_, 0, v___x_3928_);
v___x_3931_ = v___x_3926_;
goto v_reusejp_3930_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v___x_3928_);
lean_ctor_set(v_reuseFailAlloc_3943_, 1, v___x_3929_);
v___x_3931_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3930_;
}
v_reusejp_3930_:
{
lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; 
v___x_3932_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3933_, 0, v___x_3931_);
lean_ctor_set(v___x_3933_, 1, v___x_3932_);
v___x_3934_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_3935_ = l_Lean_indentD(v___x_3934_);
v___x_3936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3936_, 0, v___x_3933_);
lean_ctor_set(v___x_3936_, 1, v___x_3935_);
v___x_3937_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_3938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3936_);
lean_ctor_set(v___x_3938_, 1, v___x_3937_);
v___x_3939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3939_, 0, v___x_3938_);
lean_ctor_set(v___x_3939_, 1, v___x_3929_);
v___x_3940_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_3941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3939_);
lean_ctor_set(v___x_3941_, 1, v___x_3940_);
v___x_3942_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3941_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_3942_;
}
}
else
{
lean_object* v_val_3944_; lean_object* v___x_3946_; 
lean_del_object(v___x_3926_);
lean_dec(v___x_3913_);
lean_dec(v_stx_2295_);
v_val_3944_ = lean_ctor_get(v_fst_3924_, 0);
lean_inc(v_val_3944_);
lean_dec_ref_known(v_fst_3924_, 1);
if (v_isShared_3923_ == 0)
{
lean_ctor_set(v___x_3922_, 0, v_val_3944_);
v___x_3946_ = v___x_3922_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v_val_3944_);
v___x_3946_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
return v___x_3946_;
}
}
}
}
}
else
{
lean_object* v_a_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3958_; 
lean_dec(v___x_3913_);
lean_dec(v_stx_2295_);
v_a_3951_ = lean_ctor_get(v___x_3919_, 0);
v_isSharedCheck_3958_ = !lean_is_exclusive(v___x_3919_);
if (v_isSharedCheck_3958_ == 0)
{
v___x_3953_ = v___x_3919_;
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_a_3951_);
lean_dec(v___x_3919_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3956_; 
if (v_isShared_3954_ == 0)
{
v___x_3956_ = v___x_3953_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3957_; 
v_reuseFailAlloc_3957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3957_, 0, v_a_3951_);
v___x_3956_ = v_reuseFailAlloc_3957_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
return v___x_3956_;
}
}
}
}
else
{
lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3962_; 
lean_dec(v_stx_2295_);
v___x_3959_ = lean_unsigned_to_nat(1u);
v___x_3960_ = l_Lean_Syntax_getArg(v___x_3909_, v___x_3959_);
lean_dec(v___x_3909_);
if (v_isShared_3881_ == 0)
{
lean_ctor_set(v___x_3880_, 0, v___x_3960_);
v___x_3962_ = v___x_3880_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v___x_3960_);
v___x_3962_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
v_elseSeq_x3f_3885_ = v___x_3962_;
v___y_3886_ = v_a_2296_;
v___y_3887_ = v_a_2297_;
v___y_3888_ = v_a_2298_;
v___y_3889_ = v_a_2299_;
v___y_3890_ = v_a_2300_;
v___y_3891_ = v_a_2301_;
goto v___jp_3884_;
}
}
}
else
{
lean_object* v___x_3964_; 
lean_dec(v___x_3909_);
lean_del_object(v___x_3880_);
lean_dec(v_stx_2295_);
v___x_3964_ = lean_box(0);
v_elseSeq_x3f_3885_ = v___x_3964_;
v___y_3886_ = v_a_2296_;
v___y_3887_ = v_a_2297_;
v___y_3888_ = v_a_2298_;
v___y_3889_ = v_a_2299_;
v___y_3890_ = v_a_2300_;
v___y_3891_ = v_a_2301_;
goto v___jp_3884_;
}
v___jp_3884_:
{
lean_object* v___x_3892_; 
v___x_3892_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_elseSeq_x3f_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
if (lean_obj_tag(v___x_3892_) == 0)
{
lean_object* v_a_3893_; lean_object* v___x_3894_; size_t v_sz_3895_; lean_object* v___x_3896_; 
v_a_3893_ = lean_ctor_get(v___x_3892_, 0);
lean_inc(v_a_3893_);
lean_dec_ref_known(v___x_3892_, 1);
v___x_3894_ = l_Array_reverse___redArg(v_val_3878_);
v_sz_3895_ = lean_array_size(v___x_3894_);
v___x_3896_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v___x_3894_, v_sz_3895_, v___x_3830_, v_a_3893_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
lean_dec_ref(v___x_3894_);
if (lean_obj_tag(v___x_3896_) == 0)
{
lean_object* v_a_3897_; lean_object* v___x_3898_; 
v_a_3897_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3897_);
lean_dec_ref_known(v___x_3896_, 1);
v___x_3898_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3883_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3907_; 
v_a_3899_ = lean_ctor_get(v___x_3898_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v___x_3898_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3901_ = v___x_3898_;
v_isShared_3902_ = v_isSharedCheck_3907_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3898_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3907_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___x_3903_; lean_object* v___x_3905_; 
v___x_3903_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_3899_, v_a_3897_);
if (v_isShared_3902_ == 0)
{
lean_ctor_set(v___x_3901_, 0, v___x_3903_);
v___x_3905_ = v___x_3901_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v___x_3903_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
return v___x_3905_;
}
}
}
else
{
lean_dec(v_a_3897_);
return v___x_3898_;
}
}
else
{
lean_dec(v___x_3883_);
return v___x_3896_;
}
}
else
{
lean_dec(v___x_3883_);
lean_dec(v_val_3878_);
return v___x_3892_;
}
}
}
}
}
}
else
{
lean_object* v___x_3966_; lean_object* v___y_3968_; lean_object* v___y_3969_; lean_object* v___y_3970_; lean_object* v___y_3971_; lean_object* v___y_3972_; lean_object* v___y_3973_; lean_object* v___x_4030_; lean_object* v___y_4032_; lean_object* v___y_4033_; lean_object* v___y_4034_; lean_object* v___y_4035_; lean_object* v___y_4036_; lean_object* v___y_4037_; lean_object* v___x_4137_; uint8_t v___x_4138_; 
v___x_3966_ = lean_unsigned_to_nat(0u);
v___x_4030_ = lean_unsigned_to_nat(1u);
v___x_4137_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4030_);
v___x_4138_ = l_Lean_Syntax_isNone(v___x_4137_);
if (v___x_4138_ == 0)
{
uint8_t v___x_4139_; 
lean_inc(v___x_4137_);
v___x_4139_ = l_Lean_Syntax_matchesNull(v___x_4137_, v___x_4030_);
if (v___x_4139_ == 0)
{
lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v_env_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; 
lean_dec(v___x_4137_);
lean_inc_n(v_stx_2295_, 2);
v___x_4140_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4141_ = lean_st_ref_get(v_a_2301_);
v_env_4142_ = lean_ctor_get(v___x_4141_, 0);
lean_inc_ref(v_env_4142_);
lean_dec(v___x_4141_);
v___x_4143_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4144_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4143_, v_env_4142_, v___x_4140_);
v___x_4145_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4146_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4144_, v___x_4145_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4144_);
if (lean_obj_tag(v___x_4146_) == 0)
{
lean_object* v_a_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4177_; 
v_a_4147_ = lean_ctor_get(v___x_4146_, 0);
v_isSharedCheck_4177_ = !lean_is_exclusive(v___x_4146_);
if (v_isSharedCheck_4177_ == 0)
{
v___x_4149_ = v___x_4146_;
v_isShared_4150_ = v_isSharedCheck_4177_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_a_4147_);
lean_dec(v___x_4146_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4177_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v_fst_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4175_; 
v_fst_4151_ = lean_ctor_get(v_a_4147_, 0);
v_isSharedCheck_4175_ = !lean_is_exclusive(v_a_4147_);
if (v_isSharedCheck_4175_ == 0)
{
lean_object* v_unused_4176_; 
v_unused_4176_ = lean_ctor_get(v_a_4147_, 1);
lean_dec(v_unused_4176_);
v___x_4153_ = v_a_4147_;
v_isShared_4154_ = v_isSharedCheck_4175_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_fst_4151_);
lean_dec(v_a_4147_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4175_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
if (lean_obj_tag(v_fst_4151_) == 0)
{
lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4158_; 
lean_del_object(v___x_4149_);
v___x_4155_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4156_ = l_Lean_MessageData_ofName(v___x_4140_);
lean_inc_ref(v___x_4156_);
if (v_isShared_4154_ == 0)
{
lean_ctor_set_tag(v___x_4153_, 7);
lean_ctor_set(v___x_4153_, 1, v___x_4156_);
lean_ctor_set(v___x_4153_, 0, v___x_4155_);
v___x_4158_ = v___x_4153_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v___x_4155_);
lean_ctor_set(v_reuseFailAlloc_4170_, 1, v___x_4156_);
v___x_4158_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; 
v___x_4159_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4160_, 0, v___x_4158_);
lean_ctor_set(v___x_4160_, 1, v___x_4159_);
v___x_4161_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4162_ = l_Lean_indentD(v___x_4161_);
v___x_4163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4160_);
lean_ctor_set(v___x_4163_, 1, v___x_4162_);
v___x_4164_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4165_, 0, v___x_4163_);
lean_ctor_set(v___x_4165_, 1, v___x_4164_);
v___x_4166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4166_, 0, v___x_4165_);
lean_ctor_set(v___x_4166_, 1, v___x_4156_);
v___x_4167_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4168_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4166_);
lean_ctor_set(v___x_4168_, 1, v___x_4167_);
v___x_4169_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4168_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4169_;
}
}
else
{
lean_object* v_val_4171_; lean_object* v___x_4173_; 
lean_del_object(v___x_4153_);
lean_dec(v___x_4140_);
lean_dec(v_stx_2295_);
v_val_4171_ = lean_ctor_get(v_fst_4151_, 0);
lean_inc(v_val_4171_);
lean_dec_ref_known(v_fst_4151_, 1);
if (v_isShared_4150_ == 0)
{
lean_ctor_set(v___x_4149_, 0, v_val_4171_);
v___x_4173_ = v___x_4149_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v_val_4171_);
v___x_4173_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
return v___x_4173_;
}
}
}
}
}
else
{
lean_object* v_a_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4185_; 
lean_dec(v___x_4140_);
lean_dec(v_stx_2295_);
v_a_4178_ = lean_ctor_get(v___x_4146_, 0);
v_isSharedCheck_4185_ = !lean_is_exclusive(v___x_4146_);
if (v_isSharedCheck_4185_ == 0)
{
v___x_4180_ = v___x_4146_;
v_isShared_4181_ = v_isSharedCheck_4185_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_a_4178_);
lean_dec(v___x_4146_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4185_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4183_; 
if (v_isShared_4181_ == 0)
{
v___x_4183_ = v___x_4180_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v_a_4178_);
v___x_4183_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
return v___x_4183_;
}
}
}
}
else
{
lean_object* v___x_4186_; lean_object* v___x_4187_; uint8_t v___x_4188_; 
v___x_4186_ = l_Lean_Syntax_getArg(v___x_4137_, v___x_3966_);
lean_dec(v___x_4137_);
v___x_4187_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82));
v___x_4188_ = l_Lean_Syntax_isOfKind(v___x_4186_, v___x_4187_);
if (v___x_4188_ == 0)
{
lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v_env_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
lean_inc_n(v_stx_2295_, 2);
v___x_4189_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4190_ = lean_st_ref_get(v_a_2301_);
v_env_4191_ = lean_ctor_get(v___x_4190_, 0);
lean_inc_ref(v_env_4191_);
lean_dec(v___x_4190_);
v___x_4192_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4193_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4192_, v_env_4191_, v___x_4189_);
v___x_4194_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4195_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4193_, v___x_4194_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4193_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v_a_4196_; lean_object* v___x_4198_; uint8_t v_isShared_4199_; uint8_t v_isSharedCheck_4226_; 
v_a_4196_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4226_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4226_ == 0)
{
v___x_4198_ = v___x_4195_;
v_isShared_4199_ = v_isSharedCheck_4226_;
goto v_resetjp_4197_;
}
else
{
lean_inc(v_a_4196_);
lean_dec(v___x_4195_);
v___x_4198_ = lean_box(0);
v_isShared_4199_ = v_isSharedCheck_4226_;
goto v_resetjp_4197_;
}
v_resetjp_4197_:
{
lean_object* v_fst_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4224_; 
v_fst_4200_ = lean_ctor_get(v_a_4196_, 0);
v_isSharedCheck_4224_ = !lean_is_exclusive(v_a_4196_);
if (v_isSharedCheck_4224_ == 0)
{
lean_object* v_unused_4225_; 
v_unused_4225_ = lean_ctor_get(v_a_4196_, 1);
lean_dec(v_unused_4225_);
v___x_4202_ = v_a_4196_;
v_isShared_4203_ = v_isSharedCheck_4224_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_fst_4200_);
lean_dec(v_a_4196_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4224_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
if (lean_obj_tag(v_fst_4200_) == 0)
{
lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4207_; 
lean_del_object(v___x_4198_);
v___x_4204_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4205_ = l_Lean_MessageData_ofName(v___x_4189_);
lean_inc_ref(v___x_4205_);
if (v_isShared_4203_ == 0)
{
lean_ctor_set_tag(v___x_4202_, 7);
lean_ctor_set(v___x_4202_, 1, v___x_4205_);
lean_ctor_set(v___x_4202_, 0, v___x_4204_);
v___x_4207_ = v___x_4202_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v___x_4204_);
lean_ctor_set(v_reuseFailAlloc_4219_, 1, v___x_4205_);
v___x_4207_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; 
v___x_4208_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4207_);
lean_ctor_set(v___x_4209_, 1, v___x_4208_);
v___x_4210_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4211_ = l_Lean_indentD(v___x_4210_);
v___x_4212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4212_, 0, v___x_4209_);
lean_ctor_set(v___x_4212_, 1, v___x_4211_);
v___x_4213_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4214_, 0, v___x_4212_);
lean_ctor_set(v___x_4214_, 1, v___x_4213_);
v___x_4215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4215_, 0, v___x_4214_);
lean_ctor_set(v___x_4215_, 1, v___x_4205_);
v___x_4216_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4217_, 0, v___x_4215_);
lean_ctor_set(v___x_4217_, 1, v___x_4216_);
v___x_4218_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4217_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4218_;
}
}
else
{
lean_object* v_val_4220_; lean_object* v___x_4222_; 
lean_del_object(v___x_4202_);
lean_dec(v___x_4189_);
lean_dec(v_stx_2295_);
v_val_4220_ = lean_ctor_get(v_fst_4200_, 0);
lean_inc(v_val_4220_);
lean_dec_ref_known(v_fst_4200_, 1);
if (v_isShared_4199_ == 0)
{
lean_ctor_set(v___x_4198_, 0, v_val_4220_);
v___x_4222_ = v___x_4198_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v_val_4220_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
}
}
}
else
{
lean_object* v_a_4227_; lean_object* v___x_4229_; uint8_t v_isShared_4230_; uint8_t v_isSharedCheck_4234_; 
lean_dec(v___x_4189_);
lean_dec(v_stx_2295_);
v_a_4227_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4234_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4234_ == 0)
{
v___x_4229_ = v___x_4195_;
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
else
{
lean_inc(v_a_4227_);
lean_dec(v___x_4195_);
v___x_4229_ = lean_box(0);
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
v_resetjp_4228_:
{
lean_object* v___x_4232_; 
if (v_isShared_4230_ == 0)
{
v___x_4232_ = v___x_4229_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v_a_4227_);
v___x_4232_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
return v___x_4232_;
}
}
}
}
else
{
v___y_4032_ = v_a_2296_;
v___y_4033_ = v_a_2297_;
v___y_4034_ = v_a_2298_;
v___y_4035_ = v_a_2299_;
v___y_4036_ = v_a_2300_;
v___y_4037_ = v_a_2301_;
goto v___jp_4031_;
}
}
}
else
{
lean_dec(v___x_4137_);
v___y_4032_ = v_a_2296_;
v___y_4033_ = v_a_2297_;
v___y_4034_ = v_a_2298_;
v___y_4035_ = v_a_2299_;
v___y_4036_ = v_a_2300_;
v___y_4037_ = v_a_2301_;
goto v___jp_4031_;
}
v___jp_3967_:
{
lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; uint8_t v___x_3977_; 
v___x_3974_ = lean_unsigned_to_nat(6u);
v___x_3975_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_3974_);
v___x_3976_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7));
lean_inc(v___x_3975_);
v___x_3977_ = l_Lean_Syntax_isOfKind(v___x_3975_, v___x_3976_);
if (v___x_3977_ == 0)
{
lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v_env_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
lean_dec(v___x_3975_);
lean_inc_n(v_stx_2295_, 2);
v___x_3978_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_3979_ = lean_st_ref_get(v___y_3973_);
v_env_3980_ = lean_ctor_get(v___x_3979_, 0);
lean_inc_ref(v_env_3980_);
lean_dec(v___x_3979_);
v___x_3981_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3982_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3981_, v_env_3980_, v___x_3978_);
v___x_3983_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3984_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_3982_, v___x_3983_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
lean_dec(v___x_3982_);
if (lean_obj_tag(v___x_3984_) == 0)
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_4015_; 
v_a_3985_ = lean_ctor_get(v___x_3984_, 0);
v_isSharedCheck_4015_ = !lean_is_exclusive(v___x_3984_);
if (v_isSharedCheck_4015_ == 0)
{
v___x_3987_ = v___x_3984_;
v_isShared_3988_ = v_isSharedCheck_4015_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v___x_3984_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_4015_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v_fst_3989_; lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_4013_; 
v_fst_3989_ = lean_ctor_get(v_a_3985_, 0);
v_isSharedCheck_4013_ = !lean_is_exclusive(v_a_3985_);
if (v_isSharedCheck_4013_ == 0)
{
lean_object* v_unused_4014_; 
v_unused_4014_ = lean_ctor_get(v_a_3985_, 1);
lean_dec(v_unused_4014_);
v___x_3991_ = v_a_3985_;
v_isShared_3992_ = v_isSharedCheck_4013_;
goto v_resetjp_3990_;
}
else
{
lean_inc(v_fst_3989_);
lean_dec(v_a_3985_);
v___x_3991_ = lean_box(0);
v_isShared_3992_ = v_isSharedCheck_4013_;
goto v_resetjp_3990_;
}
v_resetjp_3990_:
{
if (lean_obj_tag(v_fst_3989_) == 0)
{
lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3996_; 
lean_del_object(v___x_3987_);
v___x_3993_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_3994_ = l_Lean_MessageData_ofName(v___x_3978_);
lean_inc_ref(v___x_3994_);
if (v_isShared_3992_ == 0)
{
lean_ctor_set_tag(v___x_3991_, 7);
lean_ctor_set(v___x_3991_, 1, v___x_3994_);
lean_ctor_set(v___x_3991_, 0, v___x_3993_);
v___x_3996_ = v___x_3991_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v___x_3993_);
lean_ctor_set(v_reuseFailAlloc_4008_, 1, v___x_3994_);
v___x_3996_ = v_reuseFailAlloc_4008_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; 
v___x_3997_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_3998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3996_);
lean_ctor_set(v___x_3998_, 1, v___x_3997_);
v___x_3999_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4000_ = l_Lean_indentD(v___x_3999_);
v___x_4001_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4001_, 0, v___x_3998_);
lean_ctor_set(v___x_4001_, 1, v___x_4000_);
v___x_4002_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4003_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4003_, 0, v___x_4001_);
lean_ctor_set(v___x_4003_, 1, v___x_4002_);
v___x_4004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4004_, 0, v___x_4003_);
lean_ctor_set(v___x_4004_, 1, v___x_3994_);
v___x_4005_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4006_, 0, v___x_4004_);
lean_ctor_set(v___x_4006_, 1, v___x_4005_);
v___x_4007_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4006_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
return v___x_4007_;
}
}
else
{
lean_object* v_val_4009_; lean_object* v___x_4011_; 
lean_del_object(v___x_3991_);
lean_dec(v___x_3978_);
lean_dec(v_stx_2295_);
v_val_4009_ = lean_ctor_get(v_fst_3989_, 0);
lean_inc(v_val_4009_);
lean_dec_ref_known(v_fst_3989_, 1);
if (v_isShared_3988_ == 0)
{
lean_ctor_set(v___x_3987_, 0, v_val_4009_);
v___x_4011_ = v___x_3987_;
goto v_reusejp_4010_;
}
else
{
lean_object* v_reuseFailAlloc_4012_; 
v_reuseFailAlloc_4012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4012_, 0, v_val_4009_);
v___x_4011_ = v_reuseFailAlloc_4012_;
goto v_reusejp_4010_;
}
v_reusejp_4010_:
{
return v___x_4011_;
}
}
}
}
}
else
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4023_; 
lean_dec(v___x_3978_);
lean_dec(v_stx_2295_);
v_a_4016_ = lean_ctor_get(v___x_3984_, 0);
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_3984_);
if (v_isSharedCheck_4023_ == 0)
{
v___x_4018_ = v___x_3984_;
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v___x_3984_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4021_; 
if (v_isShared_4019_ == 0)
{
v___x_4021_ = v___x_4018_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v_a_4016_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
return v___x_4021_;
}
}
}
}
else
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; size_t v_sz_4027_; size_t v___x_4028_; lean_object* v___x_4029_; 
lean_dec(v_stx_2295_);
v___x_4024_ = l_Lean_Syntax_getArg(v___x_3975_, v___x_3966_);
lean_dec(v___x_3975_);
v___x_4025_ = l_Lean_Syntax_getArgs(v___x_4024_);
lean_dec(v___x_4024_);
v___x_4026_ = l_Lean_Elab_Do_ControlInfo_empty;
v_sz_4027_ = lean_array_size(v___x_4025_);
v___x_4028_ = ((size_t)0ULL);
v___x_4029_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v___x_2698_, v___x_4025_, v_sz_4027_, v___x_4028_, v___x_4026_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
lean_dec_ref(v___x_4025_);
return v___x_4029_;
}
}
v___jp_4031_:
{
lean_object* v___x_4038_; lean_object* v___x_4039_; uint8_t v___x_4040_; 
v___x_4038_ = lean_unsigned_to_nat(2u);
v___x_4039_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4038_);
v___x_4040_ = l_Lean_Syntax_isNone(v___x_4039_);
if (v___x_4040_ == 0)
{
uint8_t v___x_4041_; 
lean_inc(v___x_4039_);
v___x_4041_ = l_Lean_Syntax_matchesNull(v___x_4039_, v___x_4030_);
if (v___x_4041_ == 0)
{
lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v_env_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; 
lean_dec(v___x_4039_);
lean_inc_n(v_stx_2295_, 2);
v___x_4042_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4043_ = lean_st_ref_get(v___y_4037_);
v_env_4044_ = lean_ctor_get(v___x_4043_, 0);
lean_inc_ref(v_env_4044_);
lean_dec(v___x_4043_);
v___x_4045_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4046_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4045_, v_env_4044_, v___x_4042_);
v___x_4047_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4048_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4046_, v___x_4047_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_);
lean_dec(v___x_4046_);
if (lean_obj_tag(v___x_4048_) == 0)
{
lean_object* v_a_4049_; lean_object* v___x_4051_; uint8_t v_isShared_4052_; uint8_t v_isSharedCheck_4079_; 
v_a_4049_ = lean_ctor_get(v___x_4048_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4048_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4051_ = v___x_4048_;
v_isShared_4052_ = v_isSharedCheck_4079_;
goto v_resetjp_4050_;
}
else
{
lean_inc(v_a_4049_);
lean_dec(v___x_4048_);
v___x_4051_ = lean_box(0);
v_isShared_4052_ = v_isSharedCheck_4079_;
goto v_resetjp_4050_;
}
v_resetjp_4050_:
{
lean_object* v_fst_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4077_; 
v_fst_4053_ = lean_ctor_get(v_a_4049_, 0);
v_isSharedCheck_4077_ = !lean_is_exclusive(v_a_4049_);
if (v_isSharedCheck_4077_ == 0)
{
lean_object* v_unused_4078_; 
v_unused_4078_ = lean_ctor_get(v_a_4049_, 1);
lean_dec(v_unused_4078_);
v___x_4055_ = v_a_4049_;
v_isShared_4056_ = v_isSharedCheck_4077_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_fst_4053_);
lean_dec(v_a_4049_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4077_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
if (lean_obj_tag(v_fst_4053_) == 0)
{
lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4060_; 
lean_del_object(v___x_4051_);
v___x_4057_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4058_ = l_Lean_MessageData_ofName(v___x_4042_);
lean_inc_ref(v___x_4058_);
if (v_isShared_4056_ == 0)
{
lean_ctor_set_tag(v___x_4055_, 7);
lean_ctor_set(v___x_4055_, 1, v___x_4058_);
lean_ctor_set(v___x_4055_, 0, v___x_4057_);
v___x_4060_ = v___x_4055_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v___x_4057_);
lean_ctor_set(v_reuseFailAlloc_4072_, 1, v___x_4058_);
v___x_4060_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
v___x_4061_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4060_);
lean_ctor_set(v___x_4062_, 1, v___x_4061_);
v___x_4063_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4064_ = l_Lean_indentD(v___x_4063_);
v___x_4065_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4062_);
lean_ctor_set(v___x_4065_, 1, v___x_4064_);
v___x_4066_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4067_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4067_, 0, v___x_4065_);
lean_ctor_set(v___x_4067_, 1, v___x_4066_);
v___x_4068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4068_, 0, v___x_4067_);
lean_ctor_set(v___x_4068_, 1, v___x_4058_);
v___x_4069_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4070_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4070_, 0, v___x_4068_);
lean_ctor_set(v___x_4070_, 1, v___x_4069_);
v___x_4071_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4070_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_);
return v___x_4071_;
}
}
else
{
lean_object* v_val_4073_; lean_object* v___x_4075_; 
lean_del_object(v___x_4055_);
lean_dec(v___x_4042_);
lean_dec(v_stx_2295_);
v_val_4073_ = lean_ctor_get(v_fst_4053_, 0);
lean_inc(v_val_4073_);
lean_dec_ref_known(v_fst_4053_, 1);
if (v_isShared_4052_ == 0)
{
lean_ctor_set(v___x_4051_, 0, v_val_4073_);
v___x_4075_ = v___x_4051_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v_val_4073_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
return v___x_4075_;
}
}
}
}
}
else
{
lean_object* v_a_4080_; lean_object* v___x_4082_; uint8_t v_isShared_4083_; uint8_t v_isSharedCheck_4087_; 
lean_dec(v___x_4042_);
lean_dec(v_stx_2295_);
v_a_4080_ = lean_ctor_get(v___x_4048_, 0);
v_isSharedCheck_4087_ = !lean_is_exclusive(v___x_4048_);
if (v_isSharedCheck_4087_ == 0)
{
v___x_4082_ = v___x_4048_;
v_isShared_4083_ = v_isSharedCheck_4087_;
goto v_resetjp_4081_;
}
else
{
lean_inc(v_a_4080_);
lean_dec(v___x_4048_);
v___x_4082_ = lean_box(0);
v_isShared_4083_ = v_isSharedCheck_4087_;
goto v_resetjp_4081_;
}
v_resetjp_4081_:
{
lean_object* v___x_4085_; 
if (v_isShared_4083_ == 0)
{
v___x_4085_ = v___x_4082_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v_a_4080_);
v___x_4085_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
return v___x_4085_;
}
}
}
}
else
{
lean_object* v___x_4088_; lean_object* v___x_4089_; uint8_t v___x_4090_; 
v___x_4088_ = l_Lean_Syntax_getArg(v___x_4039_, v___x_3966_);
lean_dec(v___x_4039_);
v___x_4089_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80));
v___x_4090_ = l_Lean_Syntax_isOfKind(v___x_4088_, v___x_4089_);
if (v___x_4090_ == 0)
{
lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v_env_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; 
lean_inc_n(v_stx_2295_, 2);
v___x_4091_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4092_ = lean_st_ref_get(v___y_4037_);
v_env_4093_ = lean_ctor_get(v___x_4092_, 0);
lean_inc_ref(v_env_4093_);
lean_dec(v___x_4092_);
v___x_4094_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4095_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4094_, v_env_4093_, v___x_4091_);
v___x_4096_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4097_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4095_, v___x_4096_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_);
lean_dec(v___x_4095_);
if (lean_obj_tag(v___x_4097_) == 0)
{
lean_object* v_a_4098_; lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4128_; 
v_a_4098_ = lean_ctor_get(v___x_4097_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4097_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4100_ = v___x_4097_;
v_isShared_4101_ = v_isSharedCheck_4128_;
goto v_resetjp_4099_;
}
else
{
lean_inc(v_a_4098_);
lean_dec(v___x_4097_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4128_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v_fst_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4126_; 
v_fst_4102_ = lean_ctor_get(v_a_4098_, 0);
v_isSharedCheck_4126_ = !lean_is_exclusive(v_a_4098_);
if (v_isSharedCheck_4126_ == 0)
{
lean_object* v_unused_4127_; 
v_unused_4127_ = lean_ctor_get(v_a_4098_, 1);
lean_dec(v_unused_4127_);
v___x_4104_ = v_a_4098_;
v_isShared_4105_ = v_isSharedCheck_4126_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_fst_4102_);
lean_dec(v_a_4098_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4126_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
if (lean_obj_tag(v_fst_4102_) == 0)
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4109_; 
lean_del_object(v___x_4100_);
v___x_4106_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4107_ = l_Lean_MessageData_ofName(v___x_4091_);
lean_inc_ref(v___x_4107_);
if (v_isShared_4105_ == 0)
{
lean_ctor_set_tag(v___x_4104_, 7);
lean_ctor_set(v___x_4104_, 1, v___x_4107_);
lean_ctor_set(v___x_4104_, 0, v___x_4106_);
v___x_4109_ = v___x_4104_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4106_);
lean_ctor_set(v_reuseFailAlloc_4121_, 1, v___x_4107_);
v___x_4109_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; 
v___x_4110_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4109_);
lean_ctor_set(v___x_4111_, 1, v___x_4110_);
v___x_4112_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4113_ = l_Lean_indentD(v___x_4112_);
v___x_4114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4111_);
lean_ctor_set(v___x_4114_, 1, v___x_4113_);
v___x_4115_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4114_);
lean_ctor_set(v___x_4116_, 1, v___x_4115_);
v___x_4117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4116_);
lean_ctor_set(v___x_4117_, 1, v___x_4107_);
v___x_4118_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4119_, 0, v___x_4117_);
lean_ctor_set(v___x_4119_, 1, v___x_4118_);
v___x_4120_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4119_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_);
return v___x_4120_;
}
}
else
{
lean_object* v_val_4122_; lean_object* v___x_4124_; 
lean_del_object(v___x_4104_);
lean_dec(v___x_4091_);
lean_dec(v_stx_2295_);
v_val_4122_ = lean_ctor_get(v_fst_4102_, 0);
lean_inc(v_val_4122_);
lean_dec_ref_known(v_fst_4102_, 1);
if (v_isShared_4101_ == 0)
{
lean_ctor_set(v___x_4100_, 0, v_val_4122_);
v___x_4124_ = v___x_4100_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4125_; 
v_reuseFailAlloc_4125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4125_, 0, v_val_4122_);
v___x_4124_ = v_reuseFailAlloc_4125_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
return v___x_4124_;
}
}
}
}
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4136_; 
lean_dec(v___x_4091_);
lean_dec(v_stx_2295_);
v_a_4129_ = lean_ctor_get(v___x_4097_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4097_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4131_ = v___x_4097_;
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_a_4129_);
lean_dec(v___x_4097_);
v___x_4131_ = lean_box(0);
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
v_resetjp_4130_:
{
lean_object* v___x_4134_; 
if (v_isShared_4132_ == 0)
{
v___x_4134_ = v___x_4131_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v_a_4129_);
v___x_4134_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
return v___x_4134_;
}
}
}
}
else
{
v___y_3968_ = v___y_4032_;
v___y_3969_ = v___y_4033_;
v___y_3970_ = v___y_4034_;
v___y_3971_ = v___y_4035_;
v___y_3972_ = v___y_4036_;
v___y_3973_ = v___y_4037_;
goto v___jp_3967_;
}
}
}
else
{
lean_dec(v___x_4039_);
v___y_3968_ = v___y_4032_;
v___y_3969_ = v___y_4033_;
v___y_3970_ = v___y_4034_;
v___y_3971_ = v___y_4035_;
v___y_3972_ = v___y_4036_;
v___y_3973_ = v___y_4037_;
goto v___jp_3967_;
}
}
}
}
else
{
lean_object* v___x_4235_; lean_object* v___x_4236_; 
v___x_4235_ = lean_unsigned_to_nat(0u);
v___x_4236_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4235_);
if (v___x_2696_ == 0)
{
lean_object* v___x_4237_; uint8_t v___x_4238_; 
v___x_4237_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1));
lean_inc(v___x_4236_);
v___x_4238_ = l_Lean_Syntax_isOfKind(v___x_4236_, v___x_4237_);
if (v___x_4238_ == 0)
{
if (v___x_2696_ == 0)
{
lean_object* v___x_4239_; uint8_t v___x_4240_; 
v___x_4239_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3));
lean_inc(v___x_4236_);
v___x_4240_ = l_Lean_Syntax_isOfKind(v___x_4236_, v___x_4239_);
if (v___x_4240_ == 0)
{
lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v_env_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; 
lean_dec(v___x_4236_);
lean_inc_n(v_stx_2295_, 2);
v___x_4241_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4242_ = lean_st_ref_get(v_a_2301_);
v_env_4243_ = lean_ctor_get(v___x_4242_, 0);
lean_inc_ref(v_env_4243_);
lean_dec(v___x_4242_);
v___x_4244_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4245_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4244_, v_env_4243_, v___x_4241_);
v___x_4246_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4247_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4245_, v___x_4246_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4245_);
if (lean_obj_tag(v___x_4247_) == 0)
{
lean_object* v_a_4248_; lean_object* v___x_4250_; uint8_t v_isShared_4251_; uint8_t v_isSharedCheck_4278_; 
v_a_4248_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4250_ = v___x_4247_;
v_isShared_4251_ = v_isSharedCheck_4278_;
goto v_resetjp_4249_;
}
else
{
lean_inc(v_a_4248_);
lean_dec(v___x_4247_);
v___x_4250_ = lean_box(0);
v_isShared_4251_ = v_isSharedCheck_4278_;
goto v_resetjp_4249_;
}
v_resetjp_4249_:
{
lean_object* v_fst_4252_; lean_object* v___x_4254_; uint8_t v_isShared_4255_; uint8_t v_isSharedCheck_4276_; 
v_fst_4252_ = lean_ctor_get(v_a_4248_, 0);
v_isSharedCheck_4276_ = !lean_is_exclusive(v_a_4248_);
if (v_isSharedCheck_4276_ == 0)
{
lean_object* v_unused_4277_; 
v_unused_4277_ = lean_ctor_get(v_a_4248_, 1);
lean_dec(v_unused_4277_);
v___x_4254_ = v_a_4248_;
v_isShared_4255_ = v_isSharedCheck_4276_;
goto v_resetjp_4253_;
}
else
{
lean_inc(v_fst_4252_);
lean_dec(v_a_4248_);
v___x_4254_ = lean_box(0);
v_isShared_4255_ = v_isSharedCheck_4276_;
goto v_resetjp_4253_;
}
v_resetjp_4253_:
{
if (lean_obj_tag(v_fst_4252_) == 0)
{
lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4259_; 
lean_del_object(v___x_4250_);
v___x_4256_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4257_ = l_Lean_MessageData_ofName(v___x_4241_);
lean_inc_ref(v___x_4257_);
if (v_isShared_4255_ == 0)
{
lean_ctor_set_tag(v___x_4254_, 7);
lean_ctor_set(v___x_4254_, 1, v___x_4257_);
lean_ctor_set(v___x_4254_, 0, v___x_4256_);
v___x_4259_ = v___x_4254_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4271_; 
v_reuseFailAlloc_4271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4271_, 0, v___x_4256_);
lean_ctor_set(v_reuseFailAlloc_4271_, 1, v___x_4257_);
v___x_4259_ = v_reuseFailAlloc_4271_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; 
v___x_4260_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4261_, 0, v___x_4259_);
lean_ctor_set(v___x_4261_, 1, v___x_4260_);
v___x_4262_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4263_ = l_Lean_indentD(v___x_4262_);
v___x_4264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4264_, 0, v___x_4261_);
lean_ctor_set(v___x_4264_, 1, v___x_4263_);
v___x_4265_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4266_, 0, v___x_4264_);
lean_ctor_set(v___x_4266_, 1, v___x_4265_);
v___x_4267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4267_, 0, v___x_4266_);
lean_ctor_set(v___x_4267_, 1, v___x_4257_);
v___x_4268_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4267_);
lean_ctor_set(v___x_4269_, 1, v___x_4268_);
v___x_4270_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4269_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4270_;
}
}
else
{
lean_object* v_val_4272_; lean_object* v___x_4274_; 
lean_del_object(v___x_4254_);
lean_dec(v___x_4241_);
lean_dec(v_stx_2295_);
v_val_4272_ = lean_ctor_get(v_fst_4252_, 0);
lean_inc(v_val_4272_);
lean_dec_ref_known(v_fst_4252_, 1);
if (v_isShared_4251_ == 0)
{
lean_ctor_set(v___x_4250_, 0, v_val_4272_);
v___x_4274_ = v___x_4250_;
goto v_reusejp_4273_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v_val_4272_);
v___x_4274_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4273_;
}
v_reusejp_4273_:
{
return v___x_4274_;
}
}
}
}
}
else
{
lean_object* v_a_4279_; lean_object* v___x_4281_; uint8_t v_isShared_4282_; uint8_t v_isSharedCheck_4286_; 
lean_dec(v___x_4241_);
lean_dec(v_stx_2295_);
v_a_4279_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4286_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4286_ == 0)
{
v___x_4281_ = v___x_4247_;
v_isShared_4282_ = v_isSharedCheck_4286_;
goto v_resetjp_4280_;
}
else
{
lean_inc(v_a_4279_);
lean_dec(v___x_4247_);
v___x_4281_ = lean_box(0);
v_isShared_4282_ = v_isSharedCheck_4286_;
goto v_resetjp_4280_;
}
v_resetjp_4280_:
{
lean_object* v___x_4284_; 
if (v_isShared_4282_ == 0)
{
v___x_4284_ = v___x_4281_;
goto v_reusejp_4283_;
}
else
{
lean_object* v_reuseFailAlloc_4285_; 
v_reuseFailAlloc_4285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4285_, 0, v_a_4279_);
v___x_4284_ = v_reuseFailAlloc_4285_;
goto v_reusejp_4283_;
}
v_reusejp_4283_:
{
return v___x_4284_;
}
}
}
}
else
{
lean_object* v___x_4287_; 
lean_dec(v_stx_2295_);
v___x_4287_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2385_, v___x_4236_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4287_;
}
}
else
{
lean_object* v___x_4288_; 
lean_dec(v_stx_2295_);
v___x_4288_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2385_, v___x_4236_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4288_;
}
}
else
{
lean_object* v___x_4289_; 
lean_dec(v_stx_2295_);
v___x_4289_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2385_, v___x_4236_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4289_;
}
}
else
{
lean_object* v___x_4290_; 
lean_dec(v_stx_2295_);
v___x_4290_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2385_, v___x_4236_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4290_;
}
}
}
else
{
lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4291_ = lean_unsigned_to_nat(0u);
v___x_4292_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4291_);
if (v___x_2694_ == 0)
{
lean_object* v___x_4319_; uint8_t v___x_4320_; 
v___x_4319_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84));
lean_inc(v___x_4292_);
v___x_4320_ = l_Lean_Syntax_isOfKind(v___x_4292_, v___x_4319_);
if (v___x_4320_ == 0)
{
if (v___x_2694_ == 0)
{
lean_object* v___x_4321_; uint8_t v___x_4322_; 
v___x_4321_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86));
lean_inc(v___x_4292_);
v___x_4322_ = l_Lean_Syntax_isOfKind(v___x_4292_, v___x_4321_);
if (v___x_4322_ == 0)
{
lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v_env_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; 
lean_dec(v___x_4292_);
lean_inc_n(v_stx_2295_, 2);
v___x_4323_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4324_ = lean_st_ref_get(v_a_2301_);
v_env_4325_ = lean_ctor_get(v___x_4324_, 0);
lean_inc_ref(v_env_4325_);
lean_dec(v___x_4324_);
v___x_4326_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4327_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4326_, v_env_4325_, v___x_4323_);
v___x_4328_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4329_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4327_, v___x_4328_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4327_);
if (lean_obj_tag(v___x_4329_) == 0)
{
lean_object* v_a_4330_; lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4360_; 
v_a_4330_ = lean_ctor_get(v___x_4329_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4329_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4332_ = v___x_4329_;
v_isShared_4333_ = v_isSharedCheck_4360_;
goto v_resetjp_4331_;
}
else
{
lean_inc(v_a_4330_);
lean_dec(v___x_4329_);
v___x_4332_ = lean_box(0);
v_isShared_4333_ = v_isSharedCheck_4360_;
goto v_resetjp_4331_;
}
v_resetjp_4331_:
{
lean_object* v_fst_4334_; lean_object* v___x_4336_; uint8_t v_isShared_4337_; uint8_t v_isSharedCheck_4358_; 
v_fst_4334_ = lean_ctor_get(v_a_4330_, 0);
v_isSharedCheck_4358_ = !lean_is_exclusive(v_a_4330_);
if (v_isSharedCheck_4358_ == 0)
{
lean_object* v_unused_4359_; 
v_unused_4359_ = lean_ctor_get(v_a_4330_, 1);
lean_dec(v_unused_4359_);
v___x_4336_ = v_a_4330_;
v_isShared_4337_ = v_isSharedCheck_4358_;
goto v_resetjp_4335_;
}
else
{
lean_inc(v_fst_4334_);
lean_dec(v_a_4330_);
v___x_4336_ = lean_box(0);
v_isShared_4337_ = v_isSharedCheck_4358_;
goto v_resetjp_4335_;
}
v_resetjp_4335_:
{
if (lean_obj_tag(v_fst_4334_) == 0)
{
lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4341_; 
lean_del_object(v___x_4332_);
v___x_4338_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4339_ = l_Lean_MessageData_ofName(v___x_4323_);
lean_inc_ref(v___x_4339_);
if (v_isShared_4337_ == 0)
{
lean_ctor_set_tag(v___x_4336_, 7);
lean_ctor_set(v___x_4336_, 1, v___x_4339_);
lean_ctor_set(v___x_4336_, 0, v___x_4338_);
v___x_4341_ = v___x_4336_;
goto v_reusejp_4340_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v___x_4338_);
lean_ctor_set(v_reuseFailAlloc_4353_, 1, v___x_4339_);
v___x_4341_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4340_;
}
v_reusejp_4340_:
{
lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; 
v___x_4342_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4343_, 0, v___x_4341_);
lean_ctor_set(v___x_4343_, 1, v___x_4342_);
v___x_4344_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4345_ = l_Lean_indentD(v___x_4344_);
v___x_4346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4346_, 0, v___x_4343_);
lean_ctor_set(v___x_4346_, 1, v___x_4345_);
v___x_4347_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4348_, 0, v___x_4346_);
lean_ctor_set(v___x_4348_, 1, v___x_4347_);
v___x_4349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4349_, 0, v___x_4348_);
lean_ctor_set(v___x_4349_, 1, v___x_4339_);
v___x_4350_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4351_, 0, v___x_4349_);
lean_ctor_set(v___x_4351_, 1, v___x_4350_);
v___x_4352_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4351_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4352_;
}
}
else
{
lean_object* v_val_4354_; lean_object* v___x_4356_; 
lean_del_object(v___x_4336_);
lean_dec(v___x_4323_);
lean_dec(v_stx_2295_);
v_val_4354_ = lean_ctor_get(v_fst_4334_, 0);
lean_inc(v_val_4354_);
lean_dec_ref_known(v_fst_4334_, 1);
if (v_isShared_4333_ == 0)
{
lean_ctor_set(v___x_4332_, 0, v_val_4354_);
v___x_4356_ = v___x_4332_;
goto v_reusejp_4355_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v_val_4354_);
v___x_4356_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4355_;
}
v_reusejp_4355_:
{
return v___x_4356_;
}
}
}
}
}
else
{
lean_object* v_a_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4368_; 
lean_dec(v___x_4323_);
lean_dec(v_stx_2295_);
v_a_4361_ = lean_ctor_get(v___x_4329_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4329_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4363_ = v___x_4329_;
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_a_4361_);
lean_dec(v___x_4329_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4364_ == 0)
{
v___x_4366_ = v___x_4363_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v_a_4361_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
return v___x_4366_;
}
}
}
}
else
{
lean_dec(v_stx_2295_);
goto v___jp_4293_;
}
}
else
{
lean_dec(v_stx_2295_);
goto v___jp_4293_;
}
}
else
{
lean_dec(v_stx_2295_);
goto v___jp_4306_;
}
}
else
{
lean_dec(v_stx_2295_);
goto v___jp_4306_;
}
v___jp_4293_:
{
lean_object* v___x_4294_; 
v___x_4294_ = l_Lean_Elab_Do_getLetPatDeclVars(v___x_4292_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4292_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v_a_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; 
v_a_4295_ = lean_ctor_get(v___x_4294_, 0);
lean_inc(v_a_4295_);
lean_dec_ref_known(v___x_4294_, 1);
v___x_4296_ = lean_box(0);
v___x_4297_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_a_4295_, v___x_4296_, v___x_4296_, v___x_4296_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4297_;
}
else
{
lean_object* v_a_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4305_; 
v_a_4298_ = lean_ctor_get(v___x_4294_, 0);
v_isSharedCheck_4305_ = !lean_is_exclusive(v___x_4294_);
if (v_isSharedCheck_4305_ == 0)
{
v___x_4300_ = v___x_4294_;
v_isShared_4301_ = v_isSharedCheck_4305_;
goto v_resetjp_4299_;
}
else
{
lean_inc(v_a_4298_);
lean_dec(v___x_4294_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4305_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
lean_object* v___x_4303_; 
if (v_isShared_4301_ == 0)
{
v___x_4303_ = v___x_4300_;
goto v_reusejp_4302_;
}
else
{
lean_object* v_reuseFailAlloc_4304_; 
v_reuseFailAlloc_4304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4304_, 0, v_a_4298_);
v___x_4303_ = v_reuseFailAlloc_4304_;
goto v_reusejp_4302_;
}
v_reusejp_4302_:
{
return v___x_4303_;
}
}
}
}
v___jp_4306_:
{
lean_object* v___x_4307_; 
v___x_4307_ = l_Lean_Elab_Do_getLetIdDeclVars(v___x_4292_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4292_);
if (lean_obj_tag(v___x_4307_) == 0)
{
lean_object* v_a_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; 
v_a_4308_ = lean_ctor_get(v___x_4307_, 0);
lean_inc(v_a_4308_);
lean_dec_ref_known(v___x_4307_, 1);
v___x_4309_ = lean_box(0);
v___x_4310_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_a_4308_, v___x_4309_, v___x_4309_, v___x_4309_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4310_;
}
else
{
lean_object* v_a_4311_; lean_object* v___x_4313_; uint8_t v_isShared_4314_; uint8_t v_isSharedCheck_4318_; 
v_a_4311_ = lean_ctor_get(v___x_4307_, 0);
v_isSharedCheck_4318_ = !lean_is_exclusive(v___x_4307_);
if (v_isSharedCheck_4318_ == 0)
{
v___x_4313_ = v___x_4307_;
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
else
{
lean_inc(v_a_4311_);
lean_dec(v___x_4307_);
v___x_4313_ = lean_box(0);
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
v_resetjp_4312_:
{
lean_object* v___x_4316_; 
if (v_isShared_4314_ == 0)
{
v___x_4316_ = v___x_4313_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4317_; 
v_reuseFailAlloc_4317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4317_, 0, v_a_4311_);
v___x_4316_ = v_reuseFailAlloc_4317_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
return v___x_4316_;
}
}
}
}
}
}
else
{
lean_object* v___x_4369_; lean_object* v___x_4370_; uint8_t v___x_4371_; 
v___x_4369_ = lean_unsigned_to_nat(1u);
v___x_4370_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4369_);
v___x_4371_ = l_Lean_Syntax_isNone(v___x_4370_);
if (v___x_4371_ == 0)
{
uint8_t v___x_4372_; 
v___x_4372_ = l_Lean_Syntax_matchesNull(v___x_4370_, v___x_4369_);
if (v___x_4372_ == 0)
{
lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v_env_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
lean_inc_n(v_stx_2295_, 2);
v___x_4373_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4374_ = lean_st_ref_get(v_a_2301_);
v_env_4375_ = lean_ctor_get(v___x_4374_, 0);
lean_inc_ref(v_env_4375_);
lean_dec(v___x_4374_);
v___x_4376_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4377_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4376_, v_env_4375_, v___x_4373_);
v___x_4378_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4379_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4377_, v___x_4378_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4377_);
if (lean_obj_tag(v___x_4379_) == 0)
{
lean_object* v_a_4380_; lean_object* v___x_4382_; uint8_t v_isShared_4383_; uint8_t v_isSharedCheck_4410_; 
v_a_4380_ = lean_ctor_get(v___x_4379_, 0);
v_isSharedCheck_4410_ = !lean_is_exclusive(v___x_4379_);
if (v_isSharedCheck_4410_ == 0)
{
v___x_4382_ = v___x_4379_;
v_isShared_4383_ = v_isSharedCheck_4410_;
goto v_resetjp_4381_;
}
else
{
lean_inc(v_a_4380_);
lean_dec(v___x_4379_);
v___x_4382_ = lean_box(0);
v_isShared_4383_ = v_isSharedCheck_4410_;
goto v_resetjp_4381_;
}
v_resetjp_4381_:
{
lean_object* v_fst_4384_; lean_object* v___x_4386_; uint8_t v_isShared_4387_; uint8_t v_isSharedCheck_4408_; 
v_fst_4384_ = lean_ctor_get(v_a_4380_, 0);
v_isSharedCheck_4408_ = !lean_is_exclusive(v_a_4380_);
if (v_isSharedCheck_4408_ == 0)
{
lean_object* v_unused_4409_; 
v_unused_4409_ = lean_ctor_get(v_a_4380_, 1);
lean_dec(v_unused_4409_);
v___x_4386_ = v_a_4380_;
v_isShared_4387_ = v_isSharedCheck_4408_;
goto v_resetjp_4385_;
}
else
{
lean_inc(v_fst_4384_);
lean_dec(v_a_4380_);
v___x_4386_ = lean_box(0);
v_isShared_4387_ = v_isSharedCheck_4408_;
goto v_resetjp_4385_;
}
v_resetjp_4385_:
{
if (lean_obj_tag(v_fst_4384_) == 0)
{
lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4391_; 
lean_del_object(v___x_4382_);
v___x_4388_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4389_ = l_Lean_MessageData_ofName(v___x_4373_);
lean_inc_ref(v___x_4389_);
if (v_isShared_4387_ == 0)
{
lean_ctor_set_tag(v___x_4386_, 7);
lean_ctor_set(v___x_4386_, 1, v___x_4389_);
lean_ctor_set(v___x_4386_, 0, v___x_4388_);
v___x_4391_ = v___x_4386_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v___x_4388_);
lean_ctor_set(v_reuseFailAlloc_4403_, 1, v___x_4389_);
v___x_4391_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; 
v___x_4392_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4393_, 0, v___x_4391_);
lean_ctor_set(v___x_4393_, 1, v___x_4392_);
v___x_4394_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4395_ = l_Lean_indentD(v___x_4394_);
v___x_4396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4396_, 0, v___x_4393_);
lean_ctor_set(v___x_4396_, 1, v___x_4395_);
v___x_4397_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4398_, 0, v___x_4396_);
lean_ctor_set(v___x_4398_, 1, v___x_4397_);
v___x_4399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4399_, 0, v___x_4398_);
lean_ctor_set(v___x_4399_, 1, v___x_4389_);
v___x_4400_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4401_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4401_, 0, v___x_4399_);
lean_ctor_set(v___x_4401_, 1, v___x_4400_);
v___x_4402_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4401_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4402_;
}
}
else
{
lean_object* v_val_4404_; lean_object* v___x_4406_; 
lean_del_object(v___x_4386_);
lean_dec(v___x_4373_);
lean_dec(v_stx_2295_);
v_val_4404_ = lean_ctor_get(v_fst_4384_, 0);
lean_inc(v_val_4404_);
lean_dec_ref_known(v_fst_4384_, 1);
if (v_isShared_4383_ == 0)
{
lean_ctor_set(v___x_4382_, 0, v_val_4404_);
v___x_4406_ = v___x_4382_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4407_; 
v_reuseFailAlloc_4407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4407_, 0, v_val_4404_);
v___x_4406_ = v_reuseFailAlloc_4407_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
return v___x_4406_;
}
}
}
}
}
else
{
lean_object* v_a_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4418_; 
lean_dec(v___x_4373_);
lean_dec(v_stx_2295_);
v_a_4411_ = lean_ctor_get(v___x_4379_, 0);
v_isSharedCheck_4418_ = !lean_is_exclusive(v___x_4379_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4413_ = v___x_4379_;
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_a_4411_);
lean_dec(v___x_4379_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
lean_object* v___x_4416_; 
if (v_isShared_4414_ == 0)
{
v___x_4416_ = v___x_4413_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v_a_4411_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
return v___x_4416_;
}
}
}
}
else
{
lean_dec(v_stx_2295_);
goto v___jp_2345_;
}
}
else
{
lean_dec(v___x_4370_);
lean_dec(v_stx_2295_);
goto v___jp_2345_;
}
}
}
else
{
lean_object* v___x_4419_; lean_object* v___x_4420_; uint8_t v___x_4421_; 
v___x_4419_ = lean_unsigned_to_nat(1u);
v___x_4420_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4419_);
v___x_4421_ = l_Lean_Syntax_isNone(v___x_4420_);
if (v___x_4421_ == 0)
{
uint8_t v___x_4422_; 
v___x_4422_ = l_Lean_Syntax_matchesNull(v___x_4420_, v___x_4419_);
if (v___x_4422_ == 0)
{
lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v_env_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; 
lean_inc_n(v_stx_2295_, 2);
v___x_4423_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4424_ = lean_st_ref_get(v_a_2301_);
v_env_4425_ = lean_ctor_get(v___x_4424_, 0);
lean_inc_ref(v_env_4425_);
lean_dec(v___x_4424_);
v___x_4426_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4427_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4426_, v_env_4425_, v___x_4423_);
v___x_4428_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4429_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4427_, v___x_4428_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4427_);
if (lean_obj_tag(v___x_4429_) == 0)
{
lean_object* v_a_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4460_; 
v_a_4430_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4432_ = v___x_4429_;
v_isShared_4433_ = v_isSharedCheck_4460_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_a_4430_);
lean_dec(v___x_4429_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4460_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
lean_object* v_fst_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4458_; 
v_fst_4434_ = lean_ctor_get(v_a_4430_, 0);
v_isSharedCheck_4458_ = !lean_is_exclusive(v_a_4430_);
if (v_isSharedCheck_4458_ == 0)
{
lean_object* v_unused_4459_; 
v_unused_4459_ = lean_ctor_get(v_a_4430_, 1);
lean_dec(v_unused_4459_);
v___x_4436_ = v_a_4430_;
v_isShared_4437_ = v_isSharedCheck_4458_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_fst_4434_);
lean_dec(v_a_4430_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4458_;
goto v_resetjp_4435_;
}
v_resetjp_4435_:
{
if (lean_obj_tag(v_fst_4434_) == 0)
{
lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4441_; 
lean_del_object(v___x_4432_);
v___x_4438_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4439_ = l_Lean_MessageData_ofName(v___x_4423_);
lean_inc_ref(v___x_4439_);
if (v_isShared_4437_ == 0)
{
lean_ctor_set_tag(v___x_4436_, 7);
lean_ctor_set(v___x_4436_, 1, v___x_4439_);
lean_ctor_set(v___x_4436_, 0, v___x_4438_);
v___x_4441_ = v___x_4436_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4453_; 
v_reuseFailAlloc_4453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4453_, 0, v___x_4438_);
lean_ctor_set(v_reuseFailAlloc_4453_, 1, v___x_4439_);
v___x_4441_ = v_reuseFailAlloc_4453_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; 
v___x_4442_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4443_, 0, v___x_4441_);
lean_ctor_set(v___x_4443_, 1, v___x_4442_);
v___x_4444_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4445_ = l_Lean_indentD(v___x_4444_);
v___x_4446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4443_);
lean_ctor_set(v___x_4446_, 1, v___x_4445_);
v___x_4447_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4448_, 0, v___x_4446_);
lean_ctor_set(v___x_4448_, 1, v___x_4447_);
v___x_4449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4449_, 0, v___x_4448_);
lean_ctor_set(v___x_4449_, 1, v___x_4439_);
v___x_4450_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4451_, 0, v___x_4449_);
lean_ctor_set(v___x_4451_, 1, v___x_4450_);
v___x_4452_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4451_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4452_;
}
}
else
{
lean_object* v_val_4454_; lean_object* v___x_4456_; 
lean_del_object(v___x_4436_);
lean_dec(v___x_4423_);
lean_dec(v_stx_2295_);
v_val_4454_ = lean_ctor_get(v_fst_4434_, 0);
lean_inc(v_val_4454_);
lean_dec_ref_known(v_fst_4434_, 1);
if (v_isShared_4433_ == 0)
{
lean_ctor_set(v___x_4432_, 0, v_val_4454_);
v___x_4456_ = v___x_4432_;
goto v_reusejp_4455_;
}
else
{
lean_object* v_reuseFailAlloc_4457_; 
v_reuseFailAlloc_4457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4457_, 0, v_val_4454_);
v___x_4456_ = v_reuseFailAlloc_4457_;
goto v_reusejp_4455_;
}
v_reusejp_4455_:
{
return v___x_4456_;
}
}
}
}
}
else
{
lean_object* v_a_4461_; lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4468_; 
lean_dec(v___x_4423_);
lean_dec(v_stx_2295_);
v_a_4461_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4463_ = v___x_4429_;
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
else
{
lean_inc(v_a_4461_);
lean_dec(v___x_4429_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4466_; 
if (v_isShared_4464_ == 0)
{
v___x_4466_ = v___x_4463_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v_a_4461_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
}
}
else
{
v___y_2635_ = v_a_2296_;
v___y_2636_ = v_a_2297_;
v___y_2637_ = v_a_2298_;
v___y_2638_ = v_a_2299_;
v___y_2639_ = v_a_2300_;
v___y_2640_ = v_a_2301_;
goto v___jp_2634_;
}
}
else
{
lean_dec(v___x_4420_);
v___y_2635_ = v_a_2296_;
v___y_2636_ = v_a_2297_;
v___y_2637_ = v_a_2298_;
v___y_2638_ = v_a_2299_;
v___y_2639_ = v_a_2300_;
v___y_2640_ = v_a_2301_;
goto v___jp_2634_;
}
}
}
else
{
lean_object* v___x_4469_; lean_object* v___x_4470_; uint8_t v___x_4471_; 
v___x_4469_ = lean_unsigned_to_nat(1u);
v___x_4470_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4469_);
v___x_4471_ = l_Lean_Syntax_isNone(v___x_4470_);
if (v___x_4471_ == 0)
{
uint8_t v___x_4472_; 
v___x_4472_ = l_Lean_Syntax_matchesNull(v___x_4470_, v___x_4469_);
if (v___x_4472_ == 0)
{
lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v_env_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; 
lean_inc_n(v_stx_2295_, 2);
v___x_4473_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4474_ = lean_st_ref_get(v_a_2301_);
v_env_4475_ = lean_ctor_get(v___x_4474_, 0);
lean_inc_ref(v_env_4475_);
lean_dec(v___x_4474_);
v___x_4476_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4477_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4476_, v_env_4475_, v___x_4473_);
v___x_4478_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4479_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4477_, v___x_4478_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4477_);
if (lean_obj_tag(v___x_4479_) == 0)
{
lean_object* v_a_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4510_; 
v_a_4480_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4510_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4510_ == 0)
{
v___x_4482_ = v___x_4479_;
v_isShared_4483_ = v_isSharedCheck_4510_;
goto v_resetjp_4481_;
}
else
{
lean_inc(v_a_4480_);
lean_dec(v___x_4479_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4510_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v_fst_4484_; lean_object* v___x_4486_; uint8_t v_isShared_4487_; uint8_t v_isSharedCheck_4508_; 
v_fst_4484_ = lean_ctor_get(v_a_4480_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v_a_4480_);
if (v_isSharedCheck_4508_ == 0)
{
lean_object* v_unused_4509_; 
v_unused_4509_ = lean_ctor_get(v_a_4480_, 1);
lean_dec(v_unused_4509_);
v___x_4486_ = v_a_4480_;
v_isShared_4487_ = v_isSharedCheck_4508_;
goto v_resetjp_4485_;
}
else
{
lean_inc(v_fst_4484_);
lean_dec(v_a_4480_);
v___x_4486_ = lean_box(0);
v_isShared_4487_ = v_isSharedCheck_4508_;
goto v_resetjp_4485_;
}
v_resetjp_4485_:
{
if (lean_obj_tag(v_fst_4484_) == 0)
{
lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4491_; 
lean_del_object(v___x_4482_);
v___x_4488_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4489_ = l_Lean_MessageData_ofName(v___x_4473_);
lean_inc_ref(v___x_4489_);
if (v_isShared_4487_ == 0)
{
lean_ctor_set_tag(v___x_4486_, 7);
lean_ctor_set(v___x_4486_, 1, v___x_4489_);
lean_ctor_set(v___x_4486_, 0, v___x_4488_);
v___x_4491_ = v___x_4486_;
goto v_reusejp_4490_;
}
else
{
lean_object* v_reuseFailAlloc_4503_; 
v_reuseFailAlloc_4503_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4503_, 0, v___x_4488_);
lean_ctor_set(v_reuseFailAlloc_4503_, 1, v___x_4489_);
v___x_4491_ = v_reuseFailAlloc_4503_;
goto v_reusejp_4490_;
}
v_reusejp_4490_:
{
lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; 
v___x_4492_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4493_, 0, v___x_4491_);
lean_ctor_set(v___x_4493_, 1, v___x_4492_);
v___x_4494_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4495_ = l_Lean_indentD(v___x_4494_);
v___x_4496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4496_, 0, v___x_4493_);
lean_ctor_set(v___x_4496_, 1, v___x_4495_);
v___x_4497_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4498_, 0, v___x_4496_);
lean_ctor_set(v___x_4498_, 1, v___x_4497_);
v___x_4499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4498_);
lean_ctor_set(v___x_4499_, 1, v___x_4489_);
v___x_4500_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4501_, 0, v___x_4499_);
lean_ctor_set(v___x_4501_, 1, v___x_4500_);
v___x_4502_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4501_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4502_;
}
}
else
{
lean_object* v_val_4504_; lean_object* v___x_4506_; 
lean_del_object(v___x_4486_);
lean_dec(v___x_4473_);
lean_dec(v_stx_2295_);
v_val_4504_ = lean_ctor_get(v_fst_4484_, 0);
lean_inc(v_val_4504_);
lean_dec_ref_known(v_fst_4484_, 1);
if (v_isShared_4483_ == 0)
{
lean_ctor_set(v___x_4482_, 0, v_val_4504_);
v___x_4506_ = v___x_4482_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_val_4504_);
v___x_4506_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
return v___x_4506_;
}
}
}
}
}
else
{
lean_object* v_a_4511_; lean_object* v___x_4513_; uint8_t v_isShared_4514_; uint8_t v_isSharedCheck_4518_; 
lean_dec(v___x_4473_);
lean_dec(v_stx_2295_);
v_a_4511_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4518_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4518_ == 0)
{
v___x_4513_ = v___x_4479_;
v_isShared_4514_ = v_isSharedCheck_4518_;
goto v_resetjp_4512_;
}
else
{
lean_inc(v_a_4511_);
lean_dec(v___x_4479_);
v___x_4513_ = lean_box(0);
v_isShared_4514_ = v_isSharedCheck_4518_;
goto v_resetjp_4512_;
}
v_resetjp_4512_:
{
lean_object* v___x_4516_; 
if (v_isShared_4514_ == 0)
{
v___x_4516_ = v___x_4513_;
goto v_reusejp_4515_;
}
else
{
lean_object* v_reuseFailAlloc_4517_; 
v_reuseFailAlloc_4517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4517_, 0, v_a_4511_);
v___x_4516_ = v_reuseFailAlloc_4517_;
goto v_reusejp_4515_;
}
v_reusejp_4515_:
{
return v___x_4516_;
}
}
}
}
else
{
v___y_2566_ = v_a_2296_;
v___y_2567_ = v_a_2297_;
v___y_2568_ = v_a_2298_;
v___y_2569_ = v_a_2299_;
v___y_2570_ = v_a_2300_;
v___y_2571_ = v_a_2301_;
goto v___jp_2565_;
}
}
else
{
lean_dec(v___x_4470_);
v___y_2566_ = v_a_2296_;
v___y_2567_ = v_a_2297_;
v___y_2568_ = v_a_2298_;
v___y_2569_ = v_a_2299_;
v___y_2570_ = v_a_2300_;
v___y_2571_ = v_a_2301_;
goto v___jp_2565_;
}
}
v___jp_2624_:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2631_ = lean_unsigned_to_nat(3u);
v___x_2632_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2631_);
lean_dec(v_stx_2295_);
v___x_2633_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2623_, v___x_2632_, v___y_2629_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2630_, v___y_2628_);
return v___x_2633_;
}
v___jp_2634_:
{
if (v___x_2623_ == 0)
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; uint8_t v___x_2644_; 
v___x_2641_ = lean_unsigned_to_nat(2u);
v___x_2642_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2641_);
v___x_2643_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21));
v___x_2644_ = l_Lean_Syntax_isOfKind(v___x_2642_, v___x_2643_);
if (v___x_2644_ == 0)
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v_env_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
lean_inc_n(v_stx_2295_, 2);
v___x_2645_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_2646_ = lean_st_ref_get(v___y_2640_);
v_env_2647_ = lean_ctor_get(v___x_2646_, 0);
lean_inc_ref(v_env_2647_);
lean_dec(v___x_2646_);
v___x_2648_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2649_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2648_, v_env_2647_, v___x_2645_);
v___x_2650_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2651_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_2649_, v___x_2650_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
lean_dec(v___x_2649_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2682_; 
v_a_2652_ = lean_ctor_get(v___x_2651_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2654_ = v___x_2651_;
v_isShared_2655_ = v_isSharedCheck_2682_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2652_);
lean_dec(v___x_2651_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2682_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v_fst_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2680_; 
v_fst_2656_ = lean_ctor_get(v_a_2652_, 0);
v_isSharedCheck_2680_ = !lean_is_exclusive(v_a_2652_);
if (v_isSharedCheck_2680_ == 0)
{
lean_object* v_unused_2681_; 
v_unused_2681_ = lean_ctor_get(v_a_2652_, 1);
lean_dec(v_unused_2681_);
v___x_2658_ = v_a_2652_;
v_isShared_2659_ = v_isSharedCheck_2680_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_fst_2656_);
lean_dec(v_a_2652_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2680_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
if (lean_obj_tag(v_fst_2656_) == 0)
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2663_; 
lean_del_object(v___x_2654_);
v___x_2660_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_2661_ = l_Lean_MessageData_ofName(v___x_2645_);
lean_inc_ref(v___x_2661_);
if (v_isShared_2659_ == 0)
{
lean_ctor_set_tag(v___x_2658_, 7);
lean_ctor_set(v___x_2658_, 1, v___x_2661_);
lean_ctor_set(v___x_2658_, 0, v___x_2660_);
v___x_2663_ = v___x_2658_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v___x_2660_);
lean_ctor_set(v_reuseFailAlloc_2675_, 1, v___x_2661_);
v___x_2663_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; 
v___x_2664_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_2665_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2663_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
v___x_2666_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_2667_ = l_Lean_indentD(v___x_2666_);
v___x_2668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2665_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
v___x_2669_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_2670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2668_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
v___x_2671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
lean_ctor_set(v___x_2671_, 1, v___x_2661_);
v___x_2672_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_2673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2671_);
lean_ctor_set(v___x_2673_, 1, v___x_2672_);
v___x_2674_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2673_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
return v___x_2674_;
}
}
else
{
lean_object* v_val_2676_; lean_object* v___x_2678_; 
lean_del_object(v___x_2658_);
lean_dec(v___x_2645_);
lean_dec(v_stx_2295_);
v_val_2676_ = lean_ctor_get(v_fst_2656_, 0);
lean_inc(v_val_2676_);
lean_dec_ref_known(v_fst_2656_, 1);
if (v_isShared_2655_ == 0)
{
lean_ctor_set(v___x_2654_, 0, v_val_2676_);
v___x_2678_ = v___x_2654_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v_val_2676_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
return v___x_2678_;
}
}
}
}
}
else
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2690_; 
lean_dec(v___x_2645_);
lean_dec(v_stx_2295_);
v_a_2683_ = lean_ctor_get(v___x_2651_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2685_ = v___x_2651_;
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2651_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
else
{
v___y_2625_ = v___y_2636_;
v___y_2626_ = v___y_2637_;
v___y_2627_ = v___y_2638_;
v___y_2628_ = v___y_2640_;
v___y_2629_ = v___y_2635_;
v___y_2630_ = v___y_2639_;
goto v___jp_2624_;
}
}
else
{
v___y_2625_ = v___y_2636_;
v___y_2626_ = v___y_2637_;
v___y_2627_ = v___y_2638_;
v___y_2628_ = v___y_2640_;
v___y_2629_ = v___y_2635_;
v___y_2630_ = v___y_2639_;
goto v___jp_2624_;
}
}
}
else
{
lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; uint8_t v___x_4522_; 
v___x_4519_ = lean_unsigned_to_nat(0u);
v___x_4520_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4519_);
v___x_4521_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1));
v___x_4522_ = l_Lean_Syntax_isOfKind(v___x_4520_, v___x_4521_);
if (v___x_4522_ == 0)
{
lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v_env_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; 
lean_del_object(v___x_2359_);
lean_inc_n(v_stx_2295_, 2);
v___x_4523_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4524_ = lean_st_ref_get(v_a_2301_);
v_env_4525_ = lean_ctor_get(v___x_4524_, 0);
lean_inc_ref(v_env_4525_);
lean_dec(v___x_4524_);
v___x_4526_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4527_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4526_, v_env_4525_, v___x_4523_);
v___x_4528_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4529_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4527_, v___x_4528_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4527_);
if (lean_obj_tag(v___x_4529_) == 0)
{
lean_object* v_a_4530_; lean_object* v___x_4532_; uint8_t v_isShared_4533_; uint8_t v_isSharedCheck_4560_; 
v_a_4530_ = lean_ctor_get(v___x_4529_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___x_4529_);
if (v_isSharedCheck_4560_ == 0)
{
v___x_4532_ = v___x_4529_;
v_isShared_4533_ = v_isSharedCheck_4560_;
goto v_resetjp_4531_;
}
else
{
lean_inc(v_a_4530_);
lean_dec(v___x_4529_);
v___x_4532_ = lean_box(0);
v_isShared_4533_ = v_isSharedCheck_4560_;
goto v_resetjp_4531_;
}
v_resetjp_4531_:
{
lean_object* v_fst_4534_; lean_object* v___x_4536_; uint8_t v_isShared_4537_; uint8_t v_isSharedCheck_4558_; 
v_fst_4534_ = lean_ctor_get(v_a_4530_, 0);
v_isSharedCheck_4558_ = !lean_is_exclusive(v_a_4530_);
if (v_isSharedCheck_4558_ == 0)
{
lean_object* v_unused_4559_; 
v_unused_4559_ = lean_ctor_get(v_a_4530_, 1);
lean_dec(v_unused_4559_);
v___x_4536_ = v_a_4530_;
v_isShared_4537_ = v_isSharedCheck_4558_;
goto v_resetjp_4535_;
}
else
{
lean_inc(v_fst_4534_);
lean_dec(v_a_4530_);
v___x_4536_ = lean_box(0);
v_isShared_4537_ = v_isSharedCheck_4558_;
goto v_resetjp_4535_;
}
v_resetjp_4535_:
{
if (lean_obj_tag(v_fst_4534_) == 0)
{
lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4541_; 
lean_del_object(v___x_4532_);
v___x_4538_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4539_ = l_Lean_MessageData_ofName(v___x_4523_);
lean_inc_ref(v___x_4539_);
if (v_isShared_4537_ == 0)
{
lean_ctor_set_tag(v___x_4536_, 7);
lean_ctor_set(v___x_4536_, 1, v___x_4539_);
lean_ctor_set(v___x_4536_, 0, v___x_4538_);
v___x_4541_ = v___x_4536_;
goto v_reusejp_4540_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v___x_4538_);
lean_ctor_set(v_reuseFailAlloc_4553_, 1, v___x_4539_);
v___x_4541_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4540_;
}
v_reusejp_4540_:
{
lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; 
v___x_4542_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4543_, 0, v___x_4541_);
lean_ctor_set(v___x_4543_, 1, v___x_4542_);
v___x_4544_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4545_ = l_Lean_indentD(v___x_4544_);
v___x_4546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4546_, 0, v___x_4543_);
lean_ctor_set(v___x_4546_, 1, v___x_4545_);
v___x_4547_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4548_, 0, v___x_4546_);
lean_ctor_set(v___x_4548_, 1, v___x_4547_);
v___x_4549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4549_, 0, v___x_4548_);
lean_ctor_set(v___x_4549_, 1, v___x_4539_);
v___x_4550_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4551_, 0, v___x_4549_);
lean_ctor_set(v___x_4551_, 1, v___x_4550_);
v___x_4552_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4551_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4552_;
}
}
else
{
lean_object* v_val_4554_; lean_object* v___x_4556_; 
lean_del_object(v___x_4536_);
lean_dec(v___x_4523_);
lean_dec(v_stx_2295_);
v_val_4554_ = lean_ctor_get(v_fst_4534_, 0);
lean_inc(v_val_4554_);
lean_dec_ref_known(v_fst_4534_, 1);
if (v_isShared_4533_ == 0)
{
lean_ctor_set(v___x_4532_, 0, v_val_4554_);
v___x_4556_ = v___x_4532_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_val_4554_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
return v___x_4556_;
}
}
}
}
}
else
{
lean_object* v_a_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4568_; 
lean_dec(v___x_4523_);
lean_dec(v_stx_2295_);
v_a_4561_ = lean_ctor_get(v___x_4529_, 0);
v_isSharedCheck_4568_ = !lean_is_exclusive(v___x_4529_);
if (v_isSharedCheck_4568_ == 0)
{
v___x_4563_ = v___x_4529_;
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_a_4561_);
lean_dec(v___x_4529_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4566_; 
if (v_isShared_4564_ == 0)
{
v___x_4566_ = v___x_4563_;
goto v_reusejp_4565_;
}
else
{
lean_object* v_reuseFailAlloc_4567_; 
v_reuseFailAlloc_4567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4567_, 0, v_a_4561_);
v___x_4566_ = v_reuseFailAlloc_4567_;
goto v_reusejp_4565_;
}
v_reusejp_4565_:
{
return v___x_4566_;
}
}
}
}
else
{
lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; uint8_t v___x_4572_; 
v___x_4569_ = lean_unsigned_to_nat(1u);
v___x_4570_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4569_);
v___x_4571_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88));
lean_inc(v___x_4570_);
v___x_4572_ = l_Lean_Syntax_isOfKind(v___x_4570_, v___x_4571_);
if (v___x_4572_ == 0)
{
lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v_env_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
lean_dec(v___x_4570_);
lean_del_object(v___x_2359_);
lean_inc_n(v_stx_2295_, 2);
v___x_4573_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4574_ = lean_st_ref_get(v_a_2301_);
v_env_4575_ = lean_ctor_get(v___x_4574_, 0);
lean_inc_ref(v_env_4575_);
lean_dec(v___x_4574_);
v___x_4576_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4577_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4576_, v_env_4575_, v___x_4573_);
v___x_4578_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4579_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4577_, v___x_4578_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4577_);
if (lean_obj_tag(v___x_4579_) == 0)
{
lean_object* v_a_4580_; lean_object* v___x_4582_; uint8_t v_isShared_4583_; uint8_t v_isSharedCheck_4610_; 
v_a_4580_ = lean_ctor_get(v___x_4579_, 0);
v_isSharedCheck_4610_ = !lean_is_exclusive(v___x_4579_);
if (v_isSharedCheck_4610_ == 0)
{
v___x_4582_ = v___x_4579_;
v_isShared_4583_ = v_isSharedCheck_4610_;
goto v_resetjp_4581_;
}
else
{
lean_inc(v_a_4580_);
lean_dec(v___x_4579_);
v___x_4582_ = lean_box(0);
v_isShared_4583_ = v_isSharedCheck_4610_;
goto v_resetjp_4581_;
}
v_resetjp_4581_:
{
lean_object* v_fst_4584_; lean_object* v___x_4586_; uint8_t v_isShared_4587_; uint8_t v_isSharedCheck_4608_; 
v_fst_4584_ = lean_ctor_get(v_a_4580_, 0);
v_isSharedCheck_4608_ = !lean_is_exclusive(v_a_4580_);
if (v_isSharedCheck_4608_ == 0)
{
lean_object* v_unused_4609_; 
v_unused_4609_ = lean_ctor_get(v_a_4580_, 1);
lean_dec(v_unused_4609_);
v___x_4586_ = v_a_4580_;
v_isShared_4587_ = v_isSharedCheck_4608_;
goto v_resetjp_4585_;
}
else
{
lean_inc(v_fst_4584_);
lean_dec(v_a_4580_);
v___x_4586_ = lean_box(0);
v_isShared_4587_ = v_isSharedCheck_4608_;
goto v_resetjp_4585_;
}
v_resetjp_4585_:
{
if (lean_obj_tag(v_fst_4584_) == 0)
{
lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4591_; 
lean_del_object(v___x_4582_);
v___x_4588_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4589_ = l_Lean_MessageData_ofName(v___x_4573_);
lean_inc_ref(v___x_4589_);
if (v_isShared_4587_ == 0)
{
lean_ctor_set_tag(v___x_4586_, 7);
lean_ctor_set(v___x_4586_, 1, v___x_4589_);
lean_ctor_set(v___x_4586_, 0, v___x_4588_);
v___x_4591_ = v___x_4586_;
goto v_reusejp_4590_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v___x_4588_);
lean_ctor_set(v_reuseFailAlloc_4603_, 1, v___x_4589_);
v___x_4591_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4590_;
}
v_reusejp_4590_:
{
lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4592_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4593_, 0, v___x_4591_);
lean_ctor_set(v___x_4593_, 1, v___x_4592_);
v___x_4594_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4595_ = l_Lean_indentD(v___x_4594_);
v___x_4596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4596_, 0, v___x_4593_);
lean_ctor_set(v___x_4596_, 1, v___x_4595_);
v___x_4597_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4598_, 0, v___x_4596_);
lean_ctor_set(v___x_4598_, 1, v___x_4597_);
v___x_4599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4598_);
lean_ctor_set(v___x_4599_, 1, v___x_4589_);
v___x_4600_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4601_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4601_, 0, v___x_4599_);
lean_ctor_set(v___x_4601_, 1, v___x_4600_);
v___x_4602_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4601_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4602_;
}
}
else
{
lean_object* v_val_4604_; lean_object* v___x_4606_; 
lean_del_object(v___x_4586_);
lean_dec(v___x_4573_);
lean_dec(v_stx_2295_);
v_val_4604_ = lean_ctor_get(v_fst_4584_, 0);
lean_inc(v_val_4604_);
lean_dec_ref_known(v_fst_4584_, 1);
if (v_isShared_4583_ == 0)
{
lean_ctor_set(v___x_4582_, 0, v_val_4604_);
v___x_4606_ = v___x_4582_;
goto v_reusejp_4605_;
}
else
{
lean_object* v_reuseFailAlloc_4607_; 
v_reuseFailAlloc_4607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4607_, 0, v_val_4604_);
v___x_4606_ = v_reuseFailAlloc_4607_;
goto v_reusejp_4605_;
}
v_reusejp_4605_:
{
return v___x_4606_;
}
}
}
}
}
else
{
lean_object* v_a_4611_; lean_object* v___x_4613_; uint8_t v_isShared_4614_; uint8_t v_isSharedCheck_4618_; 
lean_dec(v___x_4573_);
lean_dec(v_stx_2295_);
v_a_4611_ = lean_ctor_get(v___x_4579_, 0);
v_isSharedCheck_4618_ = !lean_is_exclusive(v___x_4579_);
if (v_isSharedCheck_4618_ == 0)
{
v___x_4613_ = v___x_4579_;
v_isShared_4614_ = v_isSharedCheck_4618_;
goto v_resetjp_4612_;
}
else
{
lean_inc(v_a_4611_);
lean_dec(v___x_4579_);
v___x_4613_ = lean_box(0);
v_isShared_4614_ = v_isSharedCheck_4618_;
goto v_resetjp_4612_;
}
v_resetjp_4612_:
{
lean_object* v___x_4616_; 
if (v_isShared_4614_ == 0)
{
v___x_4616_ = v___x_4613_;
goto v_reusejp_4615_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v_a_4611_);
v___x_4616_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4615_;
}
v_reusejp_4615_:
{
return v___x_4616_;
}
}
}
}
else
{
lean_object* v___x_4619_; uint8_t v___x_4620_; 
v___x_4619_ = l_Lean_Syntax_getArg(v___x_4570_, v___x_4519_);
lean_dec(v___x_4570_);
lean_inc(v___x_4619_);
v___x_4620_ = l_Lean_Syntax_matchesNull(v___x_4619_, v___x_4569_);
if (v___x_4620_ == 0)
{
lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v_env_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; 
lean_dec(v___x_4619_);
lean_del_object(v___x_2359_);
lean_inc_n(v_stx_2295_, 2);
v___x_4621_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4622_ = lean_st_ref_get(v_a_2301_);
v_env_4623_ = lean_ctor_get(v___x_4622_, 0);
lean_inc_ref(v_env_4623_);
lean_dec(v___x_4622_);
v___x_4624_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4625_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4624_, v_env_4623_, v___x_4621_);
v___x_4626_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4627_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4625_, v___x_4626_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4625_);
if (lean_obj_tag(v___x_4627_) == 0)
{
lean_object* v_a_4628_; lean_object* v___x_4630_; uint8_t v_isShared_4631_; uint8_t v_isSharedCheck_4658_; 
v_a_4628_ = lean_ctor_get(v___x_4627_, 0);
v_isSharedCheck_4658_ = !lean_is_exclusive(v___x_4627_);
if (v_isSharedCheck_4658_ == 0)
{
v___x_4630_ = v___x_4627_;
v_isShared_4631_ = v_isSharedCheck_4658_;
goto v_resetjp_4629_;
}
else
{
lean_inc(v_a_4628_);
lean_dec(v___x_4627_);
v___x_4630_ = lean_box(0);
v_isShared_4631_ = v_isSharedCheck_4658_;
goto v_resetjp_4629_;
}
v_resetjp_4629_:
{
lean_object* v_fst_4632_; lean_object* v___x_4634_; uint8_t v_isShared_4635_; uint8_t v_isSharedCheck_4656_; 
v_fst_4632_ = lean_ctor_get(v_a_4628_, 0);
v_isSharedCheck_4656_ = !lean_is_exclusive(v_a_4628_);
if (v_isSharedCheck_4656_ == 0)
{
lean_object* v_unused_4657_; 
v_unused_4657_ = lean_ctor_get(v_a_4628_, 1);
lean_dec(v_unused_4657_);
v___x_4634_ = v_a_4628_;
v_isShared_4635_ = v_isSharedCheck_4656_;
goto v_resetjp_4633_;
}
else
{
lean_inc(v_fst_4632_);
lean_dec(v_a_4628_);
v___x_4634_ = lean_box(0);
v_isShared_4635_ = v_isSharedCheck_4656_;
goto v_resetjp_4633_;
}
v_resetjp_4633_:
{
if (lean_obj_tag(v_fst_4632_) == 0)
{
lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4639_; 
lean_del_object(v___x_4630_);
v___x_4636_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4637_ = l_Lean_MessageData_ofName(v___x_4621_);
lean_inc_ref(v___x_4637_);
if (v_isShared_4635_ == 0)
{
lean_ctor_set_tag(v___x_4634_, 7);
lean_ctor_set(v___x_4634_, 1, v___x_4637_);
lean_ctor_set(v___x_4634_, 0, v___x_4636_);
v___x_4639_ = v___x_4634_;
goto v_reusejp_4638_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v___x_4636_);
lean_ctor_set(v_reuseFailAlloc_4651_, 1, v___x_4637_);
v___x_4639_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; 
v___x_4640_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4641_, 0, v___x_4639_);
lean_ctor_set(v___x_4641_, 1, v___x_4640_);
v___x_4642_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4643_ = l_Lean_indentD(v___x_4642_);
v___x_4644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4644_, 0, v___x_4641_);
lean_ctor_set(v___x_4644_, 1, v___x_4643_);
v___x_4645_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4646_, 0, v___x_4644_);
lean_ctor_set(v___x_4646_, 1, v___x_4645_);
v___x_4647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4647_, 0, v___x_4646_);
lean_ctor_set(v___x_4647_, 1, v___x_4637_);
v___x_4648_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4649_, 0, v___x_4647_);
lean_ctor_set(v___x_4649_, 1, v___x_4648_);
v___x_4650_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4649_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4650_;
}
}
else
{
lean_object* v_val_4652_; lean_object* v___x_4654_; 
lean_del_object(v___x_4634_);
lean_dec(v___x_4621_);
lean_dec(v_stx_2295_);
v_val_4652_ = lean_ctor_get(v_fst_4632_, 0);
lean_inc(v_val_4652_);
lean_dec_ref_known(v_fst_4632_, 1);
if (v_isShared_4631_ == 0)
{
lean_ctor_set(v___x_4630_, 0, v_val_4652_);
v___x_4654_ = v___x_4630_;
goto v_reusejp_4653_;
}
else
{
lean_object* v_reuseFailAlloc_4655_; 
v_reuseFailAlloc_4655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4655_, 0, v_val_4652_);
v___x_4654_ = v_reuseFailAlloc_4655_;
goto v_reusejp_4653_;
}
v_reusejp_4653_:
{
return v___x_4654_;
}
}
}
}
}
else
{
lean_object* v_a_4659_; lean_object* v___x_4661_; uint8_t v_isShared_4662_; uint8_t v_isSharedCheck_4666_; 
lean_dec(v___x_4621_);
lean_dec(v_stx_2295_);
v_a_4659_ = lean_ctor_get(v___x_4627_, 0);
v_isSharedCheck_4666_ = !lean_is_exclusive(v___x_4627_);
if (v_isSharedCheck_4666_ == 0)
{
v___x_4661_ = v___x_4627_;
v_isShared_4662_ = v_isSharedCheck_4666_;
goto v_resetjp_4660_;
}
else
{
lean_inc(v_a_4659_);
lean_dec(v___x_4627_);
v___x_4661_ = lean_box(0);
v_isShared_4662_ = v_isSharedCheck_4666_;
goto v_resetjp_4660_;
}
v_resetjp_4660_:
{
lean_object* v___x_4664_; 
if (v_isShared_4662_ == 0)
{
v___x_4664_ = v___x_4661_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4665_; 
v_reuseFailAlloc_4665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4665_, 0, v_a_4659_);
v___x_4664_ = v_reuseFailAlloc_4665_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
return v___x_4664_;
}
}
}
}
else
{
if (v___x_2562_ == 0)
{
lean_object* v___x_4667_; lean_object* v___x_4668_; uint8_t v___x_4669_; 
v___x_4667_ = l_Lean_Syntax_getArg(v___x_4619_, v___x_4519_);
lean_dec(v___x_4619_);
v___x_4668_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90));
v___x_4669_ = l_Lean_Syntax_isOfKind(v___x_4667_, v___x_4668_);
if (v___x_4669_ == 0)
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v_env_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; 
lean_del_object(v___x_2359_);
lean_inc_n(v_stx_2295_, 2);
v___x_4670_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4671_ = lean_st_ref_get(v_a_2301_);
v_env_4672_ = lean_ctor_get(v___x_4671_, 0);
lean_inc_ref(v_env_4672_);
lean_dec(v___x_4671_);
v___x_4673_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4674_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4673_, v_env_4672_, v___x_4670_);
v___x_4675_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4676_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4674_, v___x_4675_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4674_);
if (lean_obj_tag(v___x_4676_) == 0)
{
lean_object* v_a_4677_; lean_object* v___x_4679_; uint8_t v_isShared_4680_; uint8_t v_isSharedCheck_4707_; 
v_a_4677_ = lean_ctor_get(v___x_4676_, 0);
v_isSharedCheck_4707_ = !lean_is_exclusive(v___x_4676_);
if (v_isSharedCheck_4707_ == 0)
{
v___x_4679_ = v___x_4676_;
v_isShared_4680_ = v_isSharedCheck_4707_;
goto v_resetjp_4678_;
}
else
{
lean_inc(v_a_4677_);
lean_dec(v___x_4676_);
v___x_4679_ = lean_box(0);
v_isShared_4680_ = v_isSharedCheck_4707_;
goto v_resetjp_4678_;
}
v_resetjp_4678_:
{
lean_object* v_fst_4681_; lean_object* v___x_4683_; uint8_t v_isShared_4684_; uint8_t v_isSharedCheck_4705_; 
v_fst_4681_ = lean_ctor_get(v_a_4677_, 0);
v_isSharedCheck_4705_ = !lean_is_exclusive(v_a_4677_);
if (v_isSharedCheck_4705_ == 0)
{
lean_object* v_unused_4706_; 
v_unused_4706_ = lean_ctor_get(v_a_4677_, 1);
lean_dec(v_unused_4706_);
v___x_4683_ = v_a_4677_;
v_isShared_4684_ = v_isSharedCheck_4705_;
goto v_resetjp_4682_;
}
else
{
lean_inc(v_fst_4681_);
lean_dec(v_a_4677_);
v___x_4683_ = lean_box(0);
v_isShared_4684_ = v_isSharedCheck_4705_;
goto v_resetjp_4682_;
}
v_resetjp_4682_:
{
if (lean_obj_tag(v_fst_4681_) == 0)
{
lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4688_; 
lean_del_object(v___x_4679_);
v___x_4685_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4686_ = l_Lean_MessageData_ofName(v___x_4670_);
lean_inc_ref(v___x_4686_);
if (v_isShared_4684_ == 0)
{
lean_ctor_set_tag(v___x_4683_, 7);
lean_ctor_set(v___x_4683_, 1, v___x_4686_);
lean_ctor_set(v___x_4683_, 0, v___x_4685_);
v___x_4688_ = v___x_4683_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4700_; 
v_reuseFailAlloc_4700_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4700_, 0, v___x_4685_);
lean_ctor_set(v_reuseFailAlloc_4700_, 1, v___x_4686_);
v___x_4688_ = v_reuseFailAlloc_4700_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; 
v___x_4689_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4690_, 0, v___x_4688_);
lean_ctor_set(v___x_4690_, 1, v___x_4689_);
v___x_4691_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4692_ = l_Lean_indentD(v___x_4691_);
v___x_4693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4693_, 0, v___x_4690_);
lean_ctor_set(v___x_4693_, 1, v___x_4692_);
v___x_4694_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4695_, 0, v___x_4693_);
lean_ctor_set(v___x_4695_, 1, v___x_4694_);
v___x_4696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4696_, 0, v___x_4695_);
lean_ctor_set(v___x_4696_, 1, v___x_4686_);
v___x_4697_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4698_, 0, v___x_4696_);
lean_ctor_set(v___x_4698_, 1, v___x_4697_);
v___x_4699_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4698_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4699_;
}
}
else
{
lean_object* v_val_4701_; lean_object* v___x_4703_; 
lean_del_object(v___x_4683_);
lean_dec(v___x_4670_);
lean_dec(v_stx_2295_);
v_val_4701_ = lean_ctor_get(v_fst_4681_, 0);
lean_inc(v_val_4701_);
lean_dec_ref_known(v_fst_4681_, 1);
if (v_isShared_4680_ == 0)
{
lean_ctor_set(v___x_4679_, 0, v_val_4701_);
v___x_4703_ = v___x_4679_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v_val_4701_);
v___x_4703_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
return v___x_4703_;
}
}
}
}
}
else
{
lean_object* v_a_4708_; lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4715_; 
lean_dec(v___x_4670_);
lean_dec(v_stx_2295_);
v_a_4708_ = lean_ctor_get(v___x_4676_, 0);
v_isSharedCheck_4715_ = !lean_is_exclusive(v___x_4676_);
if (v_isSharedCheck_4715_ == 0)
{
v___x_4710_ = v___x_4676_;
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
else
{
lean_inc(v_a_4708_);
lean_dec(v___x_4676_);
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
else
{
lean_dec(v_stx_2295_);
goto v___jp_2361_;
}
}
else
{
lean_dec(v___x_4619_);
lean_dec(v_stx_2295_);
goto v___jp_2361_;
}
}
}
}
}
v___jp_2565_:
{
if (v___x_2564_ == 0)
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; uint8_t v___x_2575_; 
v___x_2572_ = lean_unsigned_to_nat(2u);
v___x_2573_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2572_);
v___x_2574_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21));
v___x_2575_ = l_Lean_Syntax_isOfKind(v___x_2573_, v___x_2574_);
if (v___x_2575_ == 0)
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v_env_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
lean_inc_n(v_stx_2295_, 2);
v___x_2576_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_2577_ = lean_st_ref_get(v___y_2571_);
v_env_2578_ = lean_ctor_get(v___x_2577_, 0);
lean_inc_ref(v_env_2578_);
lean_dec(v___x_2577_);
v___x_2579_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2580_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2579_, v_env_2578_, v___x_2576_);
v___x_2581_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2582_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_2580_, v___x_2581_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_);
lean_dec(v___x_2580_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2613_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2585_ = v___x_2582_;
v_isShared_2586_ = v_isSharedCheck_2613_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2582_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2613_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v_fst_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2611_; 
v_fst_2587_ = lean_ctor_get(v_a_2583_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v_a_2583_);
if (v_isSharedCheck_2611_ == 0)
{
lean_object* v_unused_2612_; 
v_unused_2612_ = lean_ctor_get(v_a_2583_, 1);
lean_dec(v_unused_2612_);
v___x_2589_ = v_a_2583_;
v_isShared_2590_ = v_isSharedCheck_2611_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_fst_2587_);
lean_dec(v_a_2583_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2611_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
if (lean_obj_tag(v_fst_2587_) == 0)
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2594_; 
lean_del_object(v___x_2585_);
v___x_2591_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_2592_ = l_Lean_MessageData_ofName(v___x_2576_);
lean_inc_ref(v___x_2592_);
if (v_isShared_2590_ == 0)
{
lean_ctor_set_tag(v___x_2589_, 7);
lean_ctor_set(v___x_2589_, 1, v___x_2592_);
lean_ctor_set(v___x_2589_, 0, v___x_2591_);
v___x_2594_ = v___x_2589_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v___x_2591_);
lean_ctor_set(v_reuseFailAlloc_2606_, 1, v___x_2592_);
v___x_2594_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2595_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_2596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2594_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_2598_ = l_Lean_indentD(v___x_2597_);
v___x_2599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2596_);
lean_ctor_set(v___x_2599_, 1, v___x_2598_);
v___x_2600_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_2601_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2599_);
lean_ctor_set(v___x_2601_, 1, v___x_2600_);
v___x_2602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2601_);
lean_ctor_set(v___x_2602_, 1, v___x_2592_);
v___x_2603_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_2604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2602_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2604_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_);
return v___x_2605_;
}
}
else
{
lean_object* v_val_2607_; lean_object* v___x_2609_; 
lean_del_object(v___x_2589_);
lean_dec(v___x_2576_);
lean_dec(v_stx_2295_);
v_val_2607_ = lean_ctor_get(v_fst_2587_, 0);
lean_inc(v_val_2607_);
lean_dec_ref_known(v_fst_2587_, 1);
if (v_isShared_2586_ == 0)
{
lean_ctor_set(v___x_2585_, 0, v_val_2607_);
v___x_2609_ = v___x_2585_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_val_2607_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
}
else
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2621_; 
lean_dec(v___x_2576_);
lean_dec(v_stx_2295_);
v_a_2614_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2616_ = v___x_2582_;
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2582_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2619_; 
if (v_isShared_2617_ == 0)
{
v___x_2619_ = v___x_2616_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_a_2614_);
v___x_2619_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
return v___x_2619_;
}
}
}
}
else
{
v___y_2322_ = v___y_2567_;
v___y_2323_ = v___y_2570_;
v___y_2324_ = v___y_2568_;
v___y_2325_ = v___y_2571_;
v___y_2326_ = v___y_2566_;
v___y_2327_ = v___y_2569_;
goto v___jp_2321_;
}
}
else
{
v___y_2322_ = v___y_2567_;
v___y_2323_ = v___y_2570_;
v___y_2324_ = v___y_2568_;
v___y_2325_ = v___y_2571_;
v___y_2326_ = v___y_2566_;
v___y_2327_ = v___y_2569_;
goto v___jp_2321_;
}
}
}
else
{
lean_del_object(v___x_2359_);
if (v___x_2509_ == 0)
{
lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; uint8_t v___x_4719_; 
v___x_4716_ = lean_unsigned_to_nat(1u);
v___x_4717_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4716_);
v___x_4718_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21));
v___x_4719_ = l_Lean_Syntax_isOfKind(v___x_4717_, v___x_4718_);
if (v___x_4719_ == 0)
{
lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v_env_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; 
lean_inc_n(v_stx_2295_, 2);
v___x_4720_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4721_ = lean_st_ref_get(v_a_2301_);
v_env_4722_ = lean_ctor_get(v___x_4721_, 0);
lean_inc_ref(v_env_4722_);
lean_dec(v___x_4721_);
v___x_4723_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4724_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4723_, v_env_4722_, v___x_4720_);
v___x_4725_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4726_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4724_, v___x_4725_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4724_);
if (lean_obj_tag(v___x_4726_) == 0)
{
lean_object* v_a_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4757_; 
v_a_4727_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4757_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4757_ == 0)
{
v___x_4729_ = v___x_4726_;
v_isShared_4730_ = v_isSharedCheck_4757_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_a_4727_);
lean_dec(v___x_4726_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4757_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
lean_object* v_fst_4731_; lean_object* v___x_4733_; uint8_t v_isShared_4734_; uint8_t v_isSharedCheck_4755_; 
v_fst_4731_ = lean_ctor_get(v_a_4727_, 0);
v_isSharedCheck_4755_ = !lean_is_exclusive(v_a_4727_);
if (v_isSharedCheck_4755_ == 0)
{
lean_object* v_unused_4756_; 
v_unused_4756_ = lean_ctor_get(v_a_4727_, 1);
lean_dec(v_unused_4756_);
v___x_4733_ = v_a_4727_;
v_isShared_4734_ = v_isSharedCheck_4755_;
goto v_resetjp_4732_;
}
else
{
lean_inc(v_fst_4731_);
lean_dec(v_a_4727_);
v___x_4733_ = lean_box(0);
v_isShared_4734_ = v_isSharedCheck_4755_;
goto v_resetjp_4732_;
}
v_resetjp_4732_:
{
if (lean_obj_tag(v_fst_4731_) == 0)
{
lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4738_; 
lean_del_object(v___x_4729_);
v___x_4735_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4736_ = l_Lean_MessageData_ofName(v___x_4720_);
lean_inc_ref(v___x_4736_);
if (v_isShared_4734_ == 0)
{
lean_ctor_set_tag(v___x_4733_, 7);
lean_ctor_set(v___x_4733_, 1, v___x_4736_);
lean_ctor_set(v___x_4733_, 0, v___x_4735_);
v___x_4738_ = v___x_4733_;
goto v_reusejp_4737_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v___x_4735_);
lean_ctor_set(v_reuseFailAlloc_4750_, 1, v___x_4736_);
v___x_4738_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4737_;
}
v_reusejp_4737_:
{
lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; 
v___x_4739_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4740_, 0, v___x_4738_);
lean_ctor_set(v___x_4740_, 1, v___x_4739_);
v___x_4741_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4742_ = l_Lean_indentD(v___x_4741_);
v___x_4743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4743_, 0, v___x_4740_);
lean_ctor_set(v___x_4743_, 1, v___x_4742_);
v___x_4744_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4745_, 0, v___x_4743_);
lean_ctor_set(v___x_4745_, 1, v___x_4744_);
v___x_4746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4746_, 0, v___x_4745_);
lean_ctor_set(v___x_4746_, 1, v___x_4736_);
v___x_4747_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4748_, 0, v___x_4746_);
lean_ctor_set(v___x_4748_, 1, v___x_4747_);
v___x_4749_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4748_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4749_;
}
}
else
{
lean_object* v_val_4751_; lean_object* v___x_4753_; 
lean_del_object(v___x_4733_);
lean_dec(v___x_4720_);
lean_dec(v_stx_2295_);
v_val_4751_ = lean_ctor_get(v_fst_4731_, 0);
lean_inc(v_val_4751_);
lean_dec_ref_known(v_fst_4731_, 1);
if (v_isShared_4730_ == 0)
{
lean_ctor_set(v___x_4729_, 0, v_val_4751_);
v___x_4753_ = v___x_4729_;
goto v_reusejp_4752_;
}
else
{
lean_object* v_reuseFailAlloc_4754_; 
v_reuseFailAlloc_4754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4754_, 0, v_val_4751_);
v___x_4753_ = v_reuseFailAlloc_4754_;
goto v_reusejp_4752_;
}
v_reusejp_4752_:
{
return v___x_4753_;
}
}
}
}
}
else
{
lean_object* v_a_4758_; lean_object* v___x_4760_; uint8_t v_isShared_4761_; uint8_t v_isSharedCheck_4765_; 
lean_dec(v___x_4720_);
lean_dec(v_stx_2295_);
v_a_4758_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4765_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4765_ == 0)
{
v___x_4760_ = v___x_4726_;
v_isShared_4761_ = v_isSharedCheck_4765_;
goto v_resetjp_4759_;
}
else
{
lean_inc(v_a_4758_);
lean_dec(v___x_4726_);
v___x_4760_ = lean_box(0);
v_isShared_4761_ = v_isSharedCheck_4765_;
goto v_resetjp_4759_;
}
v_resetjp_4759_:
{
lean_object* v___x_4763_; 
if (v_isShared_4761_ == 0)
{
v___x_4763_ = v___x_4760_;
goto v_reusejp_4762_;
}
else
{
lean_object* v_reuseFailAlloc_4764_; 
v_reuseFailAlloc_4764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4764_, 0, v_a_4758_);
v___x_4763_ = v_reuseFailAlloc_4764_;
goto v_reusejp_4762_;
}
v_reusejp_4762_:
{
return v___x_4763_;
}
}
}
}
else
{
goto v___jp_2510_;
}
}
else
{
goto v___jp_2510_;
}
}
}
else
{
lean_object* v___x_4766_; lean_object* v___x_4767_; uint8_t v___x_4768_; 
lean_del_object(v___x_2359_);
v___x_4766_ = lean_unsigned_to_nat(1u);
v___x_4767_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4766_);
v___x_4768_ = l_Lean_Syntax_isNone(v___x_4767_);
if (v___x_4768_ == 0)
{
uint8_t v___x_4769_; 
v___x_4769_ = l_Lean_Syntax_matchesNull(v___x_4767_, v___x_4766_);
if (v___x_4769_ == 0)
{
lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v_env_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; 
lean_inc_n(v_stx_2295_, 2);
v___x_4770_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4771_ = lean_st_ref_get(v_a_2301_);
v_env_4772_ = lean_ctor_get(v___x_4771_, 0);
lean_inc_ref(v_env_4772_);
lean_dec(v___x_4771_);
v___x_4773_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4774_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4773_, v_env_4772_, v___x_4770_);
v___x_4775_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4776_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4774_, v___x_4775_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4774_);
if (lean_obj_tag(v___x_4776_) == 0)
{
lean_object* v_a_4777_; lean_object* v___x_4779_; uint8_t v_isShared_4780_; uint8_t v_isSharedCheck_4807_; 
v_a_4777_ = lean_ctor_get(v___x_4776_, 0);
v_isSharedCheck_4807_ = !lean_is_exclusive(v___x_4776_);
if (v_isSharedCheck_4807_ == 0)
{
v___x_4779_ = v___x_4776_;
v_isShared_4780_ = v_isSharedCheck_4807_;
goto v_resetjp_4778_;
}
else
{
lean_inc(v_a_4777_);
lean_dec(v___x_4776_);
v___x_4779_ = lean_box(0);
v_isShared_4780_ = v_isSharedCheck_4807_;
goto v_resetjp_4778_;
}
v_resetjp_4778_:
{
lean_object* v_fst_4781_; lean_object* v___x_4783_; uint8_t v_isShared_4784_; uint8_t v_isSharedCheck_4805_; 
v_fst_4781_ = lean_ctor_get(v_a_4777_, 0);
v_isSharedCheck_4805_ = !lean_is_exclusive(v_a_4777_);
if (v_isSharedCheck_4805_ == 0)
{
lean_object* v_unused_4806_; 
v_unused_4806_ = lean_ctor_get(v_a_4777_, 1);
lean_dec(v_unused_4806_);
v___x_4783_ = v_a_4777_;
v_isShared_4784_ = v_isSharedCheck_4805_;
goto v_resetjp_4782_;
}
else
{
lean_inc(v_fst_4781_);
lean_dec(v_a_4777_);
v___x_4783_ = lean_box(0);
v_isShared_4784_ = v_isSharedCheck_4805_;
goto v_resetjp_4782_;
}
v_resetjp_4782_:
{
if (lean_obj_tag(v_fst_4781_) == 0)
{
lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4788_; 
lean_del_object(v___x_4779_);
v___x_4785_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4786_ = l_Lean_MessageData_ofName(v___x_4770_);
lean_inc_ref(v___x_4786_);
if (v_isShared_4784_ == 0)
{
lean_ctor_set_tag(v___x_4783_, 7);
lean_ctor_set(v___x_4783_, 1, v___x_4786_);
lean_ctor_set(v___x_4783_, 0, v___x_4785_);
v___x_4788_ = v___x_4783_;
goto v_reusejp_4787_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v___x_4785_);
lean_ctor_set(v_reuseFailAlloc_4800_, 1, v___x_4786_);
v___x_4788_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4787_;
}
v_reusejp_4787_:
{
lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; 
v___x_4789_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4790_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4790_, 0, v___x_4788_);
lean_ctor_set(v___x_4790_, 1, v___x_4789_);
v___x_4791_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4792_ = l_Lean_indentD(v___x_4791_);
v___x_4793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4793_, 0, v___x_4790_);
lean_ctor_set(v___x_4793_, 1, v___x_4792_);
v___x_4794_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4795_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4795_, 0, v___x_4793_);
lean_ctor_set(v___x_4795_, 1, v___x_4794_);
v___x_4796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4796_, 0, v___x_4795_);
lean_ctor_set(v___x_4796_, 1, v___x_4786_);
v___x_4797_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4798_, 0, v___x_4796_);
lean_ctor_set(v___x_4798_, 1, v___x_4797_);
v___x_4799_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4798_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4799_;
}
}
else
{
lean_object* v_val_4801_; lean_object* v___x_4803_; 
lean_del_object(v___x_4783_);
lean_dec(v___x_4770_);
lean_dec(v_stx_2295_);
v_val_4801_ = lean_ctor_get(v_fst_4781_, 0);
lean_inc(v_val_4801_);
lean_dec_ref_known(v_fst_4781_, 1);
if (v_isShared_4780_ == 0)
{
lean_ctor_set(v___x_4779_, 0, v_val_4801_);
v___x_4803_ = v___x_4779_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v_val_4801_);
v___x_4803_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
return v___x_4803_;
}
}
}
}
}
else
{
lean_object* v_a_4808_; lean_object* v___x_4810_; uint8_t v_isShared_4811_; uint8_t v_isSharedCheck_4815_; 
lean_dec(v___x_4770_);
lean_dec(v_stx_2295_);
v_a_4808_ = lean_ctor_get(v___x_4776_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v___x_4776_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4810_ = v___x_4776_;
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
else
{
lean_inc(v_a_4808_);
lean_dec(v___x_4776_);
v___x_4810_ = lean_box(0);
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
v_resetjp_4809_:
{
lean_object* v___x_4813_; 
if (v_isShared_4811_ == 0)
{
v___x_4813_ = v___x_4810_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v_a_4808_);
v___x_4813_ = v_reuseFailAlloc_4814_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
return v___x_4813_;
}
}
}
}
else
{
v___y_2452_ = v_a_2296_;
v___y_2453_ = v_a_2297_;
v___y_2454_ = v_a_2298_;
v___y_2455_ = v_a_2299_;
v___y_2456_ = v_a_2300_;
v___y_2457_ = v_a_2301_;
goto v___jp_2451_;
}
}
else
{
lean_dec(v___x_4767_);
v___y_2452_ = v_a_2296_;
v___y_2453_ = v_a_2297_;
v___y_2454_ = v_a_2298_;
v___y_2455_ = v_a_2299_;
v___y_2456_ = v_a_2300_;
v___y_2457_ = v_a_2301_;
goto v___jp_2451_;
}
}
v___jp_2510_:
{
if (v___x_2509_ == 0)
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; uint8_t v___x_2514_; 
v___x_2511_ = lean_unsigned_to_nat(2u);
v___x_2512_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2511_);
v___x_2513_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11));
v___x_2514_ = l_Lean_Syntax_isOfKind(v___x_2512_, v___x_2513_);
if (v___x_2514_ == 0)
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v_env_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
lean_inc_n(v_stx_2295_, 2);
v___x_2515_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_2516_ = lean_st_ref_get(v_a_2301_);
v_env_2517_ = lean_ctor_get(v___x_2516_, 0);
lean_inc_ref(v_env_2517_);
lean_dec(v___x_2516_);
v___x_2518_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2519_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2518_, v_env_2517_, v___x_2515_);
v___x_2520_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2521_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_2519_, v___x_2520_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_2519_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2552_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2524_ = v___x_2521_;
v_isShared_2525_ = v_isSharedCheck_2552_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2521_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2552_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v_fst_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2550_; 
v_fst_2526_ = lean_ctor_get(v_a_2522_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v_a_2522_);
if (v_isSharedCheck_2550_ == 0)
{
lean_object* v_unused_2551_; 
v_unused_2551_ = lean_ctor_get(v_a_2522_, 1);
lean_dec(v_unused_2551_);
v___x_2528_ = v_a_2522_;
v_isShared_2529_ = v_isSharedCheck_2550_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_fst_2526_);
lean_dec(v_a_2522_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2550_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
if (lean_obj_tag(v_fst_2526_) == 0)
{
lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2533_; 
lean_del_object(v___x_2524_);
v___x_2530_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_2531_ = l_Lean_MessageData_ofName(v___x_2515_);
lean_inc_ref(v___x_2531_);
if (v_isShared_2529_ == 0)
{
lean_ctor_set_tag(v___x_2528_, 7);
lean_ctor_set(v___x_2528_, 1, v___x_2531_);
lean_ctor_set(v___x_2528_, 0, v___x_2530_);
v___x_2533_ = v___x_2528_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v___x_2530_);
lean_ctor_set(v_reuseFailAlloc_2545_, 1, v___x_2531_);
v___x_2533_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2534_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_2535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2533_);
lean_ctor_set(v___x_2535_, 1, v___x_2534_);
v___x_2536_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_2537_ = l_Lean_indentD(v___x_2536_);
v___x_2538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2535_);
lean_ctor_set(v___x_2538_, 1, v___x_2537_);
v___x_2539_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_2540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2538_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
v___x_2541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2540_);
lean_ctor_set(v___x_2541_, 1, v___x_2531_);
v___x_2542_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_2543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2541_);
lean_ctor_set(v___x_2543_, 1, v___x_2542_);
v___x_2544_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2543_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_2544_;
}
}
else
{
lean_object* v_val_2546_; lean_object* v___x_2548_; 
lean_del_object(v___x_2528_);
lean_dec(v___x_2515_);
lean_dec(v_stx_2295_);
v_val_2546_ = lean_ctor_get(v_fst_2526_, 0);
lean_inc(v_val_2546_);
lean_dec_ref_known(v_fst_2526_, 1);
if (v_isShared_2525_ == 0)
{
lean_ctor_set(v___x_2524_, 0, v_val_2546_);
v___x_2548_ = v___x_2524_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_val_2546_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
}
else
{
lean_object* v_a_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2560_; 
lean_dec(v___x_2515_);
lean_dec(v_stx_2295_);
v_a_2553_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2560_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2555_ = v___x_2521_;
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_a_2553_);
lean_dec(v___x_2521_);
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
lean_dec(v_stx_2295_);
goto v___jp_2366_;
}
}
else
{
lean_dec(v_stx_2295_);
goto v___jp_2366_;
}
}
}
else
{
lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; 
lean_del_object(v___x_2359_);
v___x_4816_ = lean_unsigned_to_nat(1u);
v___x_4817_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4816_);
lean_dec(v_stx_2295_);
v___x_4818_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4817_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4818_;
}
v___jp_2394_:
{
if (v___x_2393_ == 0)
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; uint8_t v___x_2404_; 
v___x_2401_ = lean_unsigned_to_nat(3u);
v___x_2402_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2401_);
v___x_2403_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11));
v___x_2404_ = l_Lean_Syntax_isOfKind(v___x_2402_, v___x_2403_);
if (v___x_2404_ == 0)
{
lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v_env_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; 
lean_inc_n(v_stx_2295_, 2);
v___x_2405_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_2406_ = lean_st_ref_get(v___y_2395_);
v_env_2407_ = lean_ctor_get(v___x_2406_, 0);
lean_inc_ref(v_env_2407_);
lean_dec(v___x_2406_);
v___x_2408_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2409_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2408_, v_env_2407_, v___x_2405_);
v___x_2410_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2411_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_2409_, v___x_2410_, v___y_2398_, v___y_2397_, v___y_2400_, v___y_2396_, v___y_2399_, v___y_2395_);
lean_dec(v___x_2409_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2442_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2414_ = v___x_2411_;
v_isShared_2415_ = v_isSharedCheck_2442_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_a_2412_);
lean_dec(v___x_2411_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2442_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v_fst_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2440_; 
v_fst_2416_ = lean_ctor_get(v_a_2412_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v_a_2412_);
if (v_isSharedCheck_2440_ == 0)
{
lean_object* v_unused_2441_; 
v_unused_2441_ = lean_ctor_get(v_a_2412_, 1);
lean_dec(v_unused_2441_);
v___x_2418_ = v_a_2412_;
v_isShared_2419_ = v_isSharedCheck_2440_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_fst_2416_);
lean_dec(v_a_2412_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2440_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
if (lean_obj_tag(v_fst_2416_) == 0)
{
lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2423_; 
lean_del_object(v___x_2414_);
v___x_2420_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_2421_ = l_Lean_MessageData_ofName(v___x_2405_);
lean_inc_ref(v___x_2421_);
if (v_isShared_2419_ == 0)
{
lean_ctor_set_tag(v___x_2418_, 7);
lean_ctor_set(v___x_2418_, 1, v___x_2421_);
lean_ctor_set(v___x_2418_, 0, v___x_2420_);
v___x_2423_ = v___x_2418_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v___x_2420_);
lean_ctor_set(v_reuseFailAlloc_2435_, 1, v___x_2421_);
v___x_2423_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2424_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_2425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2423_);
lean_ctor_set(v___x_2425_, 1, v___x_2424_);
v___x_2426_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_2427_ = l_Lean_indentD(v___x_2426_);
v___x_2428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2425_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v___x_2429_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_2430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2428_);
lean_ctor_set(v___x_2430_, 1, v___x_2429_);
v___x_2431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2430_);
lean_ctor_set(v___x_2431_, 1, v___x_2421_);
v___x_2432_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_2433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2431_);
lean_ctor_set(v___x_2433_, 1, v___x_2432_);
v___x_2434_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2433_, v___y_2398_, v___y_2397_, v___y_2400_, v___y_2396_, v___y_2399_, v___y_2395_);
return v___x_2434_;
}
}
else
{
lean_object* v_val_2436_; lean_object* v___x_2438_; 
lean_del_object(v___x_2418_);
lean_dec(v___x_2405_);
lean_dec(v_stx_2295_);
v_val_2436_ = lean_ctor_get(v_fst_2416_, 0);
lean_inc(v_val_2436_);
lean_dec_ref_known(v_fst_2416_, 1);
if (v_isShared_2415_ == 0)
{
lean_ctor_set(v___x_2414_, 0, v_val_2436_);
v___x_2438_ = v___x_2414_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_val_2436_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
}
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2450_; 
lean_dec(v___x_2405_);
lean_dec(v_stx_2295_);
v_a_2443_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2445_ = v___x_2411_;
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2411_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2448_; 
if (v_isShared_2446_ == 0)
{
v___x_2448_ = v___x_2445_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_a_2443_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
}
else
{
lean_dec(v_stx_2295_);
goto v___jp_2342_;
}
}
else
{
lean_dec(v_stx_2295_);
goto v___jp_2342_;
}
}
v___jp_2451_:
{
if (v___x_2393_ == 0)
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint8_t v___x_2461_; 
v___x_2458_ = lean_unsigned_to_nat(2u);
v___x_2459_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2458_);
v___x_2460_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21));
v___x_2461_ = l_Lean_Syntax_isOfKind(v___x_2459_, v___x_2460_);
if (v___x_2461_ == 0)
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v_env_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
lean_inc_n(v_stx_2295_, 2);
v___x_2462_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_2463_ = lean_st_ref_get(v___y_2457_);
v_env_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc_ref(v_env_2464_);
lean_dec(v___x_2463_);
v___x_2465_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2466_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2465_, v_env_2464_, v___x_2462_);
v___x_2467_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2468_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_2466_, v___x_2467_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_);
lean_dec(v___x_2466_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2499_; 
v_a_2469_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2471_ = v___x_2468_;
v_isShared_2472_ = v_isSharedCheck_2499_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2468_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2499_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v_fst_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2497_; 
v_fst_2473_ = lean_ctor_get(v_a_2469_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v_a_2469_);
if (v_isSharedCheck_2497_ == 0)
{
lean_object* v_unused_2498_; 
v_unused_2498_ = lean_ctor_get(v_a_2469_, 1);
lean_dec(v_unused_2498_);
v___x_2475_ = v_a_2469_;
v_isShared_2476_ = v_isSharedCheck_2497_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_fst_2473_);
lean_dec(v_a_2469_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2497_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
if (lean_obj_tag(v_fst_2473_) == 0)
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2480_; 
lean_del_object(v___x_2471_);
v___x_2477_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_2478_ = l_Lean_MessageData_ofName(v___x_2462_);
lean_inc_ref(v___x_2478_);
if (v_isShared_2476_ == 0)
{
lean_ctor_set_tag(v___x_2475_, 7);
lean_ctor_set(v___x_2475_, 1, v___x_2478_);
lean_ctor_set(v___x_2475_, 0, v___x_2477_);
v___x_2480_ = v___x_2475_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v___x_2477_);
lean_ctor_set(v_reuseFailAlloc_2492_, 1, v___x_2478_);
v___x_2480_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2481_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_2482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v___x_2483_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_2484_ = l_Lean_indentD(v___x_2483_);
v___x_2485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2482_);
lean_ctor_set(v___x_2485_, 1, v___x_2484_);
v___x_2486_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_2487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2487_, 0, v___x_2485_);
lean_ctor_set(v___x_2487_, 1, v___x_2486_);
v___x_2488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2487_);
lean_ctor_set(v___x_2488_, 1, v___x_2478_);
v___x_2489_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_2490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2488_);
lean_ctor_set(v___x_2490_, 1, v___x_2489_);
v___x_2491_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2490_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_);
return v___x_2491_;
}
}
else
{
lean_object* v_val_2493_; lean_object* v___x_2495_; 
lean_del_object(v___x_2475_);
lean_dec(v___x_2462_);
lean_dec(v_stx_2295_);
v_val_2493_ = lean_ctor_get(v_fst_2473_, 0);
lean_inc(v_val_2493_);
lean_dec_ref_known(v_fst_2473_, 1);
if (v_isShared_2472_ == 0)
{
lean_ctor_set(v___x_2471_, 0, v_val_2493_);
v___x_2495_ = v___x_2471_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_val_2493_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
}
}
else
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
lean_dec(v___x_2462_);
lean_dec(v_stx_2295_);
v_a_2500_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2468_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2468_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
else
{
v___y_2395_ = v___y_2457_;
v___y_2396_ = v___y_2455_;
v___y_2397_ = v___y_2453_;
v___y_2398_ = v___y_2452_;
v___y_2399_ = v___y_2456_;
v___y_2400_ = v___y_2454_;
goto v___jp_2394_;
}
}
else
{
v___y_2395_ = v___y_2457_;
v___y_2396_ = v___y_2455_;
v___y_2397_ = v___y_2453_;
v___y_2398_ = v___y_2452_;
v___y_2399_ = v___y_2456_;
v___y_2400_ = v___y_2454_;
goto v___jp_2394_;
}
}
}
else
{
lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; 
lean_del_object(v___x_2359_);
v___x_4819_ = lean_unsigned_to_nat(0u);
v___x_4820_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4819_);
lean_dec(v_stx_2295_);
v___x_4821_ = l_Lean_Elab_Do_Forward_matchApp_x3f(v___x_4820_);
if (lean_obj_tag(v___x_4821_) == 1)
{
lean_object* v_val_4822_; lean_object* v_snd_4823_; lean_object* v_body_4824_; lean_object* v___x_4825_; 
v_val_4822_ = lean_ctor_get(v___x_4821_, 0);
lean_inc(v_val_4822_);
lean_dec_ref_known(v___x_4821_, 1);
v_snd_4823_ = lean_ctor_get(v_val_4822_, 1);
lean_inc(v_snd_4823_);
lean_dec(v_val_4822_);
v_body_4824_ = lean_ctor_get(v_snd_4823_, 1);
lean_inc(v_body_4824_);
lean_dec(v_snd_4823_);
v___x_4825_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_body_4824_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_4825_) == 0)
{
lean_object* v_a_4826_; lean_object* v___x_4828_; uint8_t v_isShared_4829_; uint8_t v_isSharedCheck_4846_; 
v_a_4826_ = lean_ctor_get(v___x_4825_, 0);
v_isSharedCheck_4846_ = !lean_is_exclusive(v___x_4825_);
if (v_isSharedCheck_4846_ == 0)
{
v___x_4828_ = v___x_4825_;
v_isShared_4829_ = v_isSharedCheck_4846_;
goto v_resetjp_4827_;
}
else
{
lean_inc(v_a_4826_);
lean_dec(v___x_4825_);
v___x_4828_ = lean_box(0);
v_isShared_4829_ = v_isSharedCheck_4846_;
goto v_resetjp_4827_;
}
v_resetjp_4827_:
{
uint8_t v_breaks_4830_; uint8_t v_continues_4831_; uint8_t v_returnsEarly_4832_; lean_object* v_reassigns_4833_; lean_object* v___x_4835_; uint8_t v_isShared_4836_; uint8_t v_isSharedCheck_4844_; 
v_breaks_4830_ = lean_ctor_get_uint8(v_a_4826_, sizeof(void*)*2);
v_continues_4831_ = lean_ctor_get_uint8(v_a_4826_, sizeof(void*)*2 + 1);
v_returnsEarly_4832_ = lean_ctor_get_uint8(v_a_4826_, sizeof(void*)*2 + 2);
v_reassigns_4833_ = lean_ctor_get(v_a_4826_, 1);
v_isSharedCheck_4844_ = !lean_is_exclusive(v_a_4826_);
if (v_isSharedCheck_4844_ == 0)
{
lean_object* v_unused_4845_; 
v_unused_4845_ = lean_ctor_get(v_a_4826_, 0);
lean_dec(v_unused_4845_);
v___x_4835_ = v_a_4826_;
v_isShared_4836_ = v_isSharedCheck_4844_;
goto v_resetjp_4834_;
}
else
{
lean_inc(v_reassigns_4833_);
lean_dec(v_a_4826_);
v___x_4835_ = lean_box(0);
v_isShared_4836_ = v_isSharedCheck_4844_;
goto v_resetjp_4834_;
}
v_resetjp_4834_:
{
lean_object* v___x_4837_; lean_object* v___x_4839_; 
v___x_4837_ = lean_unsigned_to_nat(1u);
if (v_isShared_4836_ == 0)
{
lean_ctor_set(v___x_4835_, 0, v___x_4837_);
v___x_4839_ = v___x_4835_;
goto v_reusejp_4838_;
}
else
{
lean_object* v_reuseFailAlloc_4843_; 
v_reuseFailAlloc_4843_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_4843_, 0, v___x_4837_);
lean_ctor_set(v_reuseFailAlloc_4843_, 1, v_reassigns_4833_);
lean_ctor_set_uint8(v_reuseFailAlloc_4843_, sizeof(void*)*2, v_breaks_4830_);
lean_ctor_set_uint8(v_reuseFailAlloc_4843_, sizeof(void*)*2 + 1, v_continues_4831_);
lean_ctor_set_uint8(v_reuseFailAlloc_4843_, sizeof(void*)*2 + 2, v_returnsEarly_4832_);
v___x_4839_ = v_reuseFailAlloc_4843_;
goto v_reusejp_4838_;
}
v_reusejp_4838_:
{
lean_object* v___x_4841_; 
lean_ctor_set_uint8(v___x_4839_, sizeof(void*)*2 + 3, v___x_2389_);
if (v_isShared_4829_ == 0)
{
lean_ctor_set(v___x_4828_, 0, v___x_4839_);
v___x_4841_ = v___x_4828_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v___x_4839_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
return v___x_4841_;
}
}
}
}
}
else
{
return v___x_4825_;
}
}
else
{
lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; 
lean_dec(v___x_4821_);
v___x_4847_ = lean_unsigned_to_nat(1u);
v___x_4848_ = l_Lean_NameSet_empty;
v___x_4849_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_4849_, 0, v___x_4847_);
lean_ctor_set(v___x_4849_, 1, v___x_4848_);
lean_ctor_set_uint8(v___x_4849_, sizeof(void*)*2, v___x_2389_);
lean_ctor_set_uint8(v___x_4849_, sizeof(void*)*2 + 1, v___x_2389_);
lean_ctor_set_uint8(v___x_4849_, sizeof(void*)*2 + 2, v___x_2389_);
lean_ctor_set_uint8(v___x_4849_, sizeof(void*)*2 + 3, v___x_2389_);
v___x_4850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4850_, 0, v___x_4849_);
return v___x_4850_;
}
}
}
else
{
lean_object* v___x_4851_; lean_object* v___x_4856_; lean_object* v___x_4857_; uint8_t v___x_4858_; 
lean_del_object(v___x_2359_);
v___x_4851_ = lean_unsigned_to_nat(0u);
v___x_4856_ = lean_unsigned_to_nat(1u);
v___x_4857_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_4856_);
v___x_4858_ = l_Lean_Syntax_isNone(v___x_4857_);
if (v___x_4858_ == 0)
{
uint8_t v___x_4859_; 
v___x_4859_ = l_Lean_Syntax_matchesNull(v___x_4857_, v___x_4856_);
if (v___x_4859_ == 0)
{
lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v_env_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; 
lean_inc_n(v_stx_2295_, 2);
v___x_4860_ = l_Lean_Syntax_getKind(v_stx_2295_);
v___x_4861_ = lean_st_ref_get(v_a_2301_);
v_env_4862_ = lean_ctor_get(v___x_4861_, 0);
lean_inc_ref(v_env_4862_);
lean_dec(v___x_4861_);
v___x_4863_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4864_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4863_, v_env_4862_, v___x_4860_);
v___x_4865_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4866_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2295_, v___x_4864_, v___x_4865_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v___x_4864_);
if (lean_obj_tag(v___x_4866_) == 0)
{
lean_object* v_a_4867_; lean_object* v___x_4869_; uint8_t v_isShared_4870_; uint8_t v_isSharedCheck_4897_; 
v_a_4867_ = lean_ctor_get(v___x_4866_, 0);
v_isSharedCheck_4897_ = !lean_is_exclusive(v___x_4866_);
if (v_isSharedCheck_4897_ == 0)
{
v___x_4869_ = v___x_4866_;
v_isShared_4870_ = v_isSharedCheck_4897_;
goto v_resetjp_4868_;
}
else
{
lean_inc(v_a_4867_);
lean_dec(v___x_4866_);
v___x_4869_ = lean_box(0);
v_isShared_4870_ = v_isSharedCheck_4897_;
goto v_resetjp_4868_;
}
v_resetjp_4868_:
{
lean_object* v_fst_4871_; lean_object* v___x_4873_; uint8_t v_isShared_4874_; uint8_t v_isSharedCheck_4895_; 
v_fst_4871_ = lean_ctor_get(v_a_4867_, 0);
v_isSharedCheck_4895_ = !lean_is_exclusive(v_a_4867_);
if (v_isSharedCheck_4895_ == 0)
{
lean_object* v_unused_4896_; 
v_unused_4896_ = lean_ctor_get(v_a_4867_, 1);
lean_dec(v_unused_4896_);
v___x_4873_ = v_a_4867_;
v_isShared_4874_ = v_isSharedCheck_4895_;
goto v_resetjp_4872_;
}
else
{
lean_inc(v_fst_4871_);
lean_dec(v_a_4867_);
v___x_4873_ = lean_box(0);
v_isShared_4874_ = v_isSharedCheck_4895_;
goto v_resetjp_4872_;
}
v_resetjp_4872_:
{
if (lean_obj_tag(v_fst_4871_) == 0)
{
lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4878_; 
lean_del_object(v___x_4869_);
v___x_4875_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13);
v___x_4876_ = l_Lean_MessageData_ofName(v___x_4860_);
lean_inc_ref(v___x_4876_);
if (v_isShared_4874_ == 0)
{
lean_ctor_set_tag(v___x_4873_, 7);
lean_ctor_set(v___x_4873_, 1, v___x_4876_);
lean_ctor_set(v___x_4873_, 0, v___x_4875_);
v___x_4878_ = v___x_4873_;
goto v_reusejp_4877_;
}
else
{
lean_object* v_reuseFailAlloc_4890_; 
v_reuseFailAlloc_4890_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4890_, 0, v___x_4875_);
lean_ctor_set(v_reuseFailAlloc_4890_, 1, v___x_4876_);
v___x_4878_ = v_reuseFailAlloc_4890_;
goto v_reusejp_4877_;
}
v_reusejp_4877_:
{
lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; 
v___x_4879_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15);
v___x_4880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4880_, 0, v___x_4878_);
lean_ctor_set(v___x_4880_, 1, v___x_4879_);
v___x_4881_ = l_Lean_MessageData_ofSyntax(v_stx_2295_);
v___x_4882_ = l_Lean_indentD(v___x_4881_);
v___x_4883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4883_, 0, v___x_4880_);
lean_ctor_set(v___x_4883_, 1, v___x_4882_);
v___x_4884_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17);
v___x_4885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4885_, 0, v___x_4883_);
lean_ctor_set(v___x_4885_, 1, v___x_4884_);
v___x_4886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4886_, 0, v___x_4885_);
lean_ctor_set(v___x_4886_, 1, v___x_4876_);
v___x_4887_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19);
v___x_4888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4888_, 0, v___x_4886_);
lean_ctor_set(v___x_4888_, 1, v___x_4887_);
v___x_4889_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4888_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_4889_;
}
}
else
{
lean_object* v_val_4891_; lean_object* v___x_4893_; 
lean_del_object(v___x_4873_);
lean_dec(v___x_4860_);
lean_dec(v_stx_2295_);
v_val_4891_ = lean_ctor_get(v_fst_4871_, 0);
lean_inc(v_val_4891_);
lean_dec_ref_known(v_fst_4871_, 1);
if (v_isShared_4870_ == 0)
{
lean_ctor_set(v___x_4869_, 0, v_val_4891_);
v___x_4893_ = v___x_4869_;
goto v_reusejp_4892_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v_val_4891_);
v___x_4893_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4892_;
}
v_reusejp_4892_:
{
return v___x_4893_;
}
}
}
}
}
else
{
lean_object* v_a_4898_; lean_object* v___x_4900_; uint8_t v_isShared_4901_; uint8_t v_isSharedCheck_4905_; 
lean_dec(v___x_4860_);
lean_dec(v_stx_2295_);
v_a_4898_ = lean_ctor_get(v___x_4866_, 0);
v_isSharedCheck_4905_ = !lean_is_exclusive(v___x_4866_);
if (v_isSharedCheck_4905_ == 0)
{
v___x_4900_ = v___x_4866_;
v_isShared_4901_ = v_isSharedCheck_4905_;
goto v_resetjp_4899_;
}
else
{
lean_inc(v_a_4898_);
lean_dec(v___x_4866_);
v___x_4900_ = lean_box(0);
v_isShared_4901_ = v_isSharedCheck_4905_;
goto v_resetjp_4899_;
}
v_resetjp_4899_:
{
lean_object* v___x_4903_; 
if (v_isShared_4901_ == 0)
{
v___x_4903_ = v___x_4900_;
goto v_reusejp_4902_;
}
else
{
lean_object* v_reuseFailAlloc_4904_; 
v_reuseFailAlloc_4904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4904_, 0, v_a_4898_);
v___x_4903_ = v_reuseFailAlloc_4904_;
goto v_reusejp_4902_;
}
v_reusejp_4902_:
{
return v___x_4903_;
}
}
}
}
else
{
lean_dec(v_stx_2295_);
goto v___jp_4852_;
}
}
else
{
lean_dec(v___x_4857_);
lean_dec(v_stx_2295_);
goto v___jp_4852_;
}
v___jp_4852_:
{
lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; 
v___x_4853_ = l_Lean_NameSet_empty;
v___x_4854_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_4854_, 0, v___x_4851_);
lean_ctor_set(v___x_4854_, 1, v___x_4853_);
lean_ctor_set_uint8(v___x_4854_, sizeof(void*)*2, v___x_2387_);
lean_ctor_set_uint8(v___x_4854_, sizeof(void*)*2 + 1, v___x_2387_);
lean_ctor_set_uint8(v___x_4854_, sizeof(void*)*2 + 2, v___x_2385_);
lean_ctor_set_uint8(v___x_4854_, sizeof(void*)*2 + 3, v___x_2385_);
v___x_4855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4855_, 0, v___x_4854_);
return v___x_4855_;
}
}
}
else
{
lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; 
lean_del_object(v___x_2359_);
lean_dec(v_stx_2295_);
v___x_4906_ = lean_unsigned_to_nat(0u);
v___x_4907_ = l_Lean_NameSet_empty;
v___x_4908_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_4908_, 0, v___x_4906_);
lean_ctor_set(v___x_4908_, 1, v___x_4907_);
lean_ctor_set_uint8(v___x_4908_, sizeof(void*)*2, v___x_2384_);
lean_ctor_set_uint8(v___x_4908_, sizeof(void*)*2 + 1, v___x_2385_);
lean_ctor_set_uint8(v___x_4908_, sizeof(void*)*2 + 2, v___x_2384_);
lean_ctor_set_uint8(v___x_4908_, sizeof(void*)*2 + 3, v___x_2385_);
v___x_4909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4909_, 0, v___x_4908_);
return v___x_4909_;
}
}
else
{
lean_object* v___x_4910_; lean_object* v___x_4911_; 
lean_del_object(v___x_2359_);
lean_dec(v_stx_2295_);
v___x_4910_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91);
v___x_4911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4911_, 0, v___x_4910_);
return v___x_4911_;
}
}
v___jp_2361_:
{
lean_object* v___x_2362_; lean_object* v___x_2364_; 
v___x_2362_ = l_Lean_Elab_Do_ControlInfo_pure;
if (v_isShared_2360_ == 0)
{
lean_ctor_set(v___x_2359_, 0, v___x_2362_);
v___x_2364_ = v___x_2359_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2362_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
v___jp_2366_:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2367_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2367_);
return v___x_2368_;
}
}
}
else
{
lean_object* v_a_4913_; lean_object* v___x_4915_; uint8_t v_isShared_4916_; uint8_t v_isSharedCheck_4920_; 
lean_dec(v_stx_2295_);
v_a_4913_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_4920_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_4920_ == 0)
{
v___x_4915_ = v___x_2356_;
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
else
{
lean_inc(v_a_4913_);
lean_dec(v___x_2356_);
v___x_4915_ = lean_box(0);
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
v_resetjp_4914_:
{
lean_object* v___x_4918_; 
if (v_isShared_4916_ == 0)
{
v___x_4918_ = v___x_4915_;
goto v_reusejp_4917_;
}
else
{
lean_object* v_reuseFailAlloc_4919_; 
v_reuseFailAlloc_4919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4919_, 0, v_a_4913_);
v___x_4918_ = v_reuseFailAlloc_4919_;
goto v_reusejp_4917_;
}
v_reusejp_4917_:
{
return v___x_4918_;
}
}
}
v___jp_2303_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2306_ = l_Lean_Elab_Do_ControlInfo_alternative(v___y_2304_, v_bodyInfo_2305_);
v___x_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2306_);
return v___x_2307_;
}
v___jp_2308_:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2317_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___x_2318_ = lean_box(0);
v___x_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2319_, 0, v___y_2310_);
v___x_2320_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v___x_2317_, v___x_2318_, v___x_2319_, v___y_2316_, v___y_2315_, v___y_2309_, v___y_2312_, v___y_2314_, v___y_2311_, v___y_2313_);
return v___x_2320_;
}
v___jp_2321_:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2328_ = lean_unsigned_to_nat(7u);
v___x_2329_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2328_);
v___x_2330_ = lean_unsigned_to_nat(8u);
v___x_2331_ = l_Lean_Syntax_getArg(v_stx_2295_, v___x_2330_);
lean_dec(v_stx_2295_);
v___x_2332_ = l_Lean_Syntax_getOptional_x3f(v___x_2331_);
lean_dec(v___x_2331_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v___x_2333_; 
v___x_2333_ = lean_box(0);
v___y_2309_ = v___y_2322_;
v___y_2310_ = v___x_2329_;
v___y_2311_ = v___y_2323_;
v___y_2312_ = v___y_2324_;
v___y_2313_ = v___y_2325_;
v___y_2314_ = v___y_2327_;
v___y_2315_ = v___y_2326_;
v___y_2316_ = v___x_2333_;
goto v___jp_2308_;
}
else
{
lean_object* v_val_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2341_; 
v_val_2334_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2341_ == 0)
{
v___x_2336_ = v___x_2332_;
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_val_2334_);
lean_dec(v___x_2332_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2339_; 
if (v_isShared_2337_ == 0)
{
v___x_2339_ = v___x_2336_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v_val_2334_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
v___y_2309_ = v___y_2322_;
v___y_2310_ = v___x_2329_;
v___y_2311_ = v___y_2323_;
v___y_2312_ = v___y_2324_;
v___y_2313_ = v___y_2325_;
v___y_2314_ = v___y_2327_;
v___y_2315_ = v___y_2326_;
v___y_2316_ = v___x_2339_;
goto v___jp_2308_;
}
}
}
}
v___jp_2342_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_2344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2343_);
return v___x_2344_;
}
v___jp_2345_:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; 
v___x_2346_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2346_);
return v___x_2347_;
}
v___jp_2348_:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2351_ = l_Lean_Elab_Do_ControlInfo_alternative(v___y_2349_, v_bodyInfo_2350_);
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2351_);
return v___x_2352_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(lean_object* v_as_4921_, size_t v_sz_4922_, size_t v_i_4923_, lean_object* v_b_4924_, lean_object* v___y_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_){
_start:
{
uint8_t v___x_4932_; 
v___x_4932_ = lean_usize_dec_lt(v_i_4923_, v_sz_4922_);
if (v___x_4932_ == 0)
{
lean_object* v___x_4933_; 
v___x_4933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4933_, 0, v_b_4924_);
return v___x_4933_;
}
else
{
lean_object* v_a_4934_; lean_object* v___x_4935_; 
v_a_4934_ = lean_array_uget_borrowed(v_as_4921_, v_i_4923_);
lean_inc(v_a_4934_);
v___x_4935_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_a_4934_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_, v___y_4929_, v___y_4930_);
if (lean_obj_tag(v___x_4935_) == 0)
{
lean_object* v_a_4936_; lean_object* v___x_4937_; size_t v___x_4938_; size_t v___x_4939_; 
v_a_4936_ = lean_ctor_get(v___x_4935_, 0);
lean_inc(v_a_4936_);
lean_dec_ref_known(v___x_4935_, 1);
v___x_4937_ = l_Lean_Elab_Do_ControlInfo_sequence(v_b_4924_, v_a_4936_);
v___x_4938_ = ((size_t)1ULL);
v___x_4939_ = lean_usize_add(v_i_4923_, v___x_4938_);
v_i_4923_ = v___x_4939_;
v_b_4924_ = v___x_4937_;
goto _start;
}
else
{
lean_dec_ref(v_b_4924_);
return v___x_4935_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object* v_stx_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_, lean_object* v_a_4946_, lean_object* v_a_4947_){
_start:
{
lean_object* v_info_4949_; lean_object* v___x_4950_; size_t v_sz_4951_; size_t v___x_4952_; lean_object* v___x_4953_; 
v_info_4949_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___x_4950_ = l_Lean_Parser_Term_getDoElems(v_stx_4941_);
v_sz_4951_ = lean_array_size(v___x_4950_);
v___x_4952_ = ((size_t)0ULL);
v___x_4953_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(v___x_4950_, v_sz_4951_, v___x_4952_, v_info_4949_, v_a_4942_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_);
lean_dec_ref(v___x_4950_);
return v___x_4953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq___boxed(lean_object* v_stx_4954_, lean_object* v_a_4955_, lean_object* v_a_4956_, lean_object* v_a_4957_, lean_object* v_a_4958_, lean_object* v_a_4959_, lean_object* v_a_4960_, lean_object* v_a_4961_){
_start:
{
lean_object* v_res_4962_; 
v_res_4962_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_stx_4954_, v_a_4955_, v_a_4956_, v_a_4957_, v_a_4958_, v_a_4959_, v_a_4960_);
lean_dec(v_a_4960_);
lean_dec_ref(v_a_4959_);
lean_dec(v_a_4958_);
lean_dec_ref(v_a_4957_);
lean_dec(v_a_4956_);
lean_dec_ref(v_a_4955_);
return v_res_4962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq___boxed(lean_object* v_stx_x3f_4963_, lean_object* v_a_4964_, lean_object* v_a_4965_, lean_object* v_a_4966_, lean_object* v_a_4967_, lean_object* v_a_4968_, lean_object* v_a_4969_, lean_object* v_a_4970_){
_start:
{
lean_object* v_res_4971_; 
v_res_4971_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_stx_x3f_4963_, v_a_4964_, v_a_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_);
lean_dec(v_a_4969_);
lean_dec_ref(v_a_4968_);
lean_dec(v_a_4967_);
lean_dec_ref(v_a_4966_);
lean_dec(v_a_4965_);
lean_dec_ref(v_a_4964_);
return v_res_4971_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___boxed(lean_object* v_as_4972_, lean_object* v_sz_4973_, lean_object* v_i_4974_, lean_object* v_b_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_){
_start:
{
size_t v_sz_boxed_4983_; size_t v_i_boxed_4984_; lean_object* v_res_4985_; 
v_sz_boxed_4983_ = lean_unbox_usize(v_sz_4973_);
lean_dec(v_sz_4973_);
v_i_boxed_4984_ = lean_unbox_usize(v_i_4974_);
lean_dec(v_i_4974_);
v_res_4985_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v_as_4972_, v_sz_boxed_4983_, v_i_boxed_4984_, v_b_4975_, v___y_4976_, v___y_4977_, v___y_4978_, v___y_4979_, v___y_4980_, v___y_4981_);
lean_dec(v___y_4981_);
lean_dec_ref(v___y_4980_);
lean_dec(v___y_4979_);
lean_dec_ref(v___y_4978_);
lean_dec(v___y_4977_);
lean_dec_ref(v___y_4976_);
lean_dec_ref(v_as_4972_);
return v_res_4985_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17___boxed(lean_object* v_as_4986_, lean_object* v_sz_4987_, lean_object* v_i_4988_, lean_object* v_b_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_){
_start:
{
size_t v_sz_boxed_4997_; size_t v_i_boxed_4998_; lean_object* v_res_4999_; 
v_sz_boxed_4997_ = lean_unbox_usize(v_sz_4987_);
lean_dec(v_sz_4987_);
v_i_boxed_4998_ = lean_unbox_usize(v_i_4988_);
lean_dec(v_i_4988_);
v_res_4999_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(v_as_4986_, v_sz_boxed_4997_, v_i_boxed_4998_, v_b_4989_, v___y_4990_, v___y_4991_, v___y_4992_, v___y_4993_, v___y_4994_, v___y_4995_);
lean_dec(v___y_4995_);
lean_dec_ref(v___y_4994_);
lean_dec(v___y_4993_);
lean_dec_ref(v___y_4992_);
lean_dec(v___y_4991_);
lean_dec_ref(v___y_4990_);
lean_dec_ref(v_as_4986_);
return v_res_4999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___boxed(lean_object* v___x_5000_, lean_object* v_as_5001_, lean_object* v_sz_5002_, lean_object* v_i_5003_, lean_object* v_b_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
uint8_t v___x_169452__boxed_5012_; size_t v_sz_boxed_5013_; size_t v_i_boxed_5014_; lean_object* v_res_5015_; 
v___x_169452__boxed_5012_ = lean_unbox(v___x_5000_);
v_sz_boxed_5013_ = lean_unbox_usize(v_sz_5002_);
lean_dec(v_sz_5002_);
v_i_boxed_5014_ = lean_unbox_usize(v_i_5003_);
lean_dec(v_i_5003_);
v_res_5015_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_169452__boxed_5012_, v_as_5001_, v_sz_boxed_5013_, v_i_boxed_5014_, v_b_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
lean_dec(v___y_5010_);
lean_dec_ref(v___y_5009_);
lean_dec(v___y_5008_);
lean_dec_ref(v___y_5007_);
lean_dec(v___y_5006_);
lean_dec_ref(v___y_5005_);
lean_dec_ref(v_as_5001_);
return v_res_5015_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14___boxed(lean_object* v___x_5016_, lean_object* v_as_5017_, lean_object* v_sz_5018_, lean_object* v_i_5019_, lean_object* v_b_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_){
_start:
{
uint8_t v___x_169499__boxed_5028_; size_t v_sz_boxed_5029_; size_t v_i_boxed_5030_; lean_object* v_res_5031_; 
v___x_169499__boxed_5028_ = lean_unbox(v___x_5016_);
v_sz_boxed_5029_ = lean_unbox_usize(v_sz_5018_);
lean_dec(v_sz_5018_);
v_i_boxed_5030_ = lean_unbox_usize(v_i_5019_);
lean_dec(v_i_5019_);
v_res_5031_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v___x_169499__boxed_5028_, v_as_5017_, v_sz_boxed_5029_, v_i_boxed_5030_, v_b_5020_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_);
lean_dec(v___y_5026_);
lean_dec_ref(v___y_5025_);
lean_dec(v___y_5024_);
lean_dec_ref(v___y_5023_);
lean_dec(v___y_5022_);
lean_dec_ref(v___y_5021_);
lean_dec_ref(v_as_5017_);
return v_res_5031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign___boxed(lean_object* v_reassigned_5032_, lean_object* v_rhs_x3f_5033_, lean_object* v_otherwise_x3f_5034_, lean_object* v_body_x3f_5035_, lean_object* v_a_5036_, lean_object* v_a_5037_, lean_object* v_a_5038_, lean_object* v_a_5039_, lean_object* v_a_5040_, lean_object* v_a_5041_, lean_object* v_a_5042_){
_start:
{
lean_object* v_res_5043_; 
v_res_5043_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigned_5032_, v_rhs_x3f_5033_, v_otherwise_x3f_5034_, v_body_x3f_5035_, v_a_5036_, v_a_5037_, v_a_5038_, v_a_5039_, v_a_5040_, v_a_5041_);
lean_dec(v_a_5041_);
lean_dec_ref(v_a_5040_);
lean_dec(v_a_5039_);
lean_dec_ref(v_a_5038_);
lean_dec(v_a_5037_);
lean_dec_ref(v_a_5036_);
return v_res_5043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___boxed(lean_object* v_as_5044_, lean_object* v_sz_5045_, lean_object* v_i_5046_, lean_object* v_b_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_, lean_object* v___y_5052_, lean_object* v___y_5053_, lean_object* v___y_5054_){
_start:
{
size_t v_sz_boxed_5055_; size_t v_i_boxed_5056_; lean_object* v_res_5057_; 
v_sz_boxed_5055_ = lean_unbox_usize(v_sz_5045_);
lean_dec(v_sz_5045_);
v_i_boxed_5056_ = lean_unbox_usize(v_i_5046_);
lean_dec(v_i_5046_);
v_res_5057_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(v_as_5044_, v_sz_boxed_5055_, v_i_boxed_5056_, v_b_5047_, v___y_5048_, v___y_5049_, v___y_5050_, v___y_5051_, v___y_5052_, v___y_5053_);
lean_dec(v___y_5053_);
lean_dec_ref(v___y_5052_);
lean_dec(v___y_5051_);
lean_dec_ref(v___y_5050_);
lean_dec(v___y_5049_);
lean_dec_ref(v___y_5048_);
lean_dec_ref(v_as_5044_);
return v_res_5057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___boxed(lean_object* v_reassignment_5058_, lean_object* v_decl_5059_, lean_object* v_a_5060_, lean_object* v_a_5061_, lean_object* v_a_5062_, lean_object* v_a_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_, lean_object* v_a_5066_){
_start:
{
uint8_t v_reassignment_boxed_5067_; lean_object* v_res_5068_; 
v_reassignment_boxed_5067_ = lean_unbox(v_reassignment_5058_);
v_res_5068_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v_reassignment_boxed_5067_, v_decl_5059_, v_a_5060_, v_a_5061_, v_a_5062_, v_a_5063_, v_a_5064_, v_a_5065_);
lean_dec(v_a_5065_);
lean_dec_ref(v_a_5064_);
lean_dec(v_a_5063_);
lean_dec_ref(v_a_5062_);
lean_dec(v_a_5061_);
lean_dec_ref(v_a_5060_);
return v_res_5068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___boxed(lean_object* v_stx_5069_, lean_object* v_a_5070_, lean_object* v_a_5071_, lean_object* v_a_5072_, lean_object* v_a_5073_, lean_object* v_a_5074_, lean_object* v_a_5075_, lean_object* v_a_5076_){
_start:
{
lean_object* v_res_5077_; 
v_res_5077_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_stx_5069_, v_a_5070_, v_a_5071_, v_a_5072_, v_a_5073_, v_a_5074_, v_a_5075_);
lean_dec(v_a_5075_);
lean_dec_ref(v_a_5074_);
lean_dec(v_a_5073_);
lean_dec_ref(v_a_5072_);
lean_dec(v_a_5071_);
lean_dec_ref(v_a_5070_);
return v_res_5077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(lean_object* v_00_u03b1_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_, lean_object* v___y_5083_, lean_object* v___y_5084_){
_start:
{
lean_object* v___x_5086_; 
v___x_5086_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v___x_5086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___boxed(lean_object* v_00_u03b1_5087_, lean_object* v___y_5088_, lean_object* v___y_5089_, lean_object* v___y_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_){
_start:
{
lean_object* v_res_5095_; 
v_res_5095_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(v_00_u03b1_5087_, v___y_5088_, v___y_5089_, v___y_5090_, v___y_5091_, v___y_5092_, v___y_5093_);
lean_dec(v___y_5093_);
lean_dec_ref(v___y_5092_);
lean_dec(v___y_5091_);
lean_dec_ref(v___y_5090_);
lean_dec(v___y_5089_);
lean_dec_ref(v___y_5088_);
return v_res_5095_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(lean_object* v_00_u03b1_5096_, lean_object* v_ref_5097_, lean_object* v___y_5098_, lean_object* v___y_5099_, lean_object* v___y_5100_, lean_object* v___y_5101_, lean_object* v___y_5102_, lean_object* v___y_5103_){
_start:
{
lean_object* v___x_5105_; 
v___x_5105_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_ref_5097_);
return v___x_5105_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___boxed(lean_object* v_00_u03b1_5106_, lean_object* v_ref_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_, lean_object* v___y_5112_, lean_object* v___y_5113_, lean_object* v___y_5114_){
_start:
{
lean_object* v_res_5115_; 
v_res_5115_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(v_00_u03b1_5106_, v_ref_5107_, v___y_5108_, v___y_5109_, v___y_5110_, v___y_5111_, v___y_5112_, v___y_5113_);
lean_dec(v___y_5113_);
lean_dec_ref(v___y_5112_);
lean_dec(v___y_5111_);
lean_dec_ref(v___y_5110_);
lean_dec(v___y_5109_);
lean_dec_ref(v___y_5108_);
return v_res_5115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(lean_object* v_00_u03b1_5116_, lean_object* v_x_5117_, lean_object* v___y_5118_, lean_object* v___y_5119_, lean_object* v___y_5120_, lean_object* v___y_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_){
_start:
{
lean_object* v___x_5125_; 
v___x_5125_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_x_5117_, v___y_5118_, v___y_5119_, v___y_5120_, v___y_5121_, v___y_5122_, v___y_5123_);
return v___x_5125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___boxed(lean_object* v_00_u03b1_5126_, lean_object* v_x_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_, lean_object* v___y_5134_){
_start:
{
lean_object* v_res_5135_; 
v_res_5135_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(v_00_u03b1_5126_, v_x_5127_, v___y_5128_, v___y_5129_, v___y_5130_, v___y_5131_, v___y_5132_, v___y_5133_);
lean_dec(v___y_5133_);
lean_dec_ref(v___y_5132_);
lean_dec(v___y_5131_);
lean_dec_ref(v___y_5130_);
lean_dec(v___y_5129_);
lean_dec_ref(v___y_5128_);
return v_res_5135_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(lean_object* v_stx_5136_, lean_object* v_as_5137_, lean_object* v_as_x27_5138_, lean_object* v_b_5139_, lean_object* v_a_5140_, lean_object* v___y_5141_, lean_object* v___y_5142_, lean_object* v___y_5143_, lean_object* v___y_5144_, lean_object* v___y_5145_, lean_object* v___y_5146_){
_start:
{
lean_object* v___x_5148_; 
v___x_5148_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_5136_, v_as_x27_5138_, v_b_5139_, v___y_5141_, v___y_5142_, v___y_5143_, v___y_5144_, v___y_5145_, v___y_5146_);
return v___x_5148_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed(lean_object* v_stx_5149_, lean_object* v_as_5150_, lean_object* v_as_x27_5151_, lean_object* v_b_5152_, lean_object* v_a_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_){
_start:
{
lean_object* v_res_5161_; 
v_res_5161_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(v_stx_5149_, v_as_5150_, v_as_x27_5151_, v_b_5152_, v_a_5153_, v___y_5154_, v___y_5155_, v___y_5156_, v___y_5157_, v___y_5158_, v___y_5159_);
lean_dec(v___y_5159_);
lean_dec_ref(v___y_5158_);
lean_dec(v___y_5157_);
lean_dec_ref(v___y_5156_);
lean_dec(v___y_5155_);
lean_dec_ref(v___y_5154_);
lean_dec(v_as_x27_5151_);
lean_dec(v_as_5150_);
return v_res_5161_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(lean_object* v_00_u03b1_5162_, lean_object* v_msg_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_){
_start:
{
lean_object* v___x_5171_; 
v___x_5171_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, v___y_5168_, v___y_5169_);
return v___x_5171_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___boxed(lean_object* v_00_u03b1_5172_, lean_object* v_msg_5173_, lean_object* v___y_5174_, lean_object* v___y_5175_, lean_object* v___y_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_){
_start:
{
lean_object* v_res_5181_; 
v_res_5181_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(v_00_u03b1_5172_, v_msg_5173_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_, v___y_5178_, v___y_5179_);
lean_dec(v___y_5179_);
lean_dec_ref(v___y_5178_);
lean_dec(v___y_5177_);
lean_dec_ref(v___y_5176_);
lean_dec(v___y_5175_);
lean_dec_ref(v___y_5174_);
return v_res_5181_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(lean_object* v_cls_5182_, lean_object* v_msg_5183_, lean_object* v___y_5184_, lean_object* v___y_5185_, lean_object* v___y_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_){
_start:
{
lean_object* v___x_5191_; 
v___x_5191_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_5182_, v_msg_5183_, v___y_5186_, v___y_5187_, v___y_5188_, v___y_5189_);
return v___x_5191_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___boxed(lean_object* v_cls_5192_, lean_object* v_msg_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_, lean_object* v___y_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_){
_start:
{
lean_object* v_res_5201_; 
v_res_5201_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(v_cls_5192_, v_msg_5193_, v___y_5194_, v___y_5195_, v___y_5196_, v___y_5197_, v___y_5198_, v___y_5199_);
lean_dec(v___y_5199_);
lean_dec_ref(v___y_5198_);
lean_dec(v___y_5197_);
lean_dec_ref(v___y_5196_);
lean_dec(v___y_5195_);
lean_dec_ref(v___y_5194_);
return v_res_5201_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(lean_object* v_as_5202_, lean_object* v_as_x27_5203_, lean_object* v_b_5204_, lean_object* v_a_5205_, lean_object* v___y_5206_, lean_object* v___y_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_){
_start:
{
lean_object* v___x_5213_; 
v___x_5213_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_as_x27_5203_, v_b_5204_, v___y_5206_, v___y_5207_, v___y_5208_, v___y_5209_, v___y_5210_, v___y_5211_);
return v___x_5213_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___boxed(lean_object* v_as_5214_, lean_object* v_as_x27_5215_, lean_object* v_b_5216_, lean_object* v_a_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_, lean_object* v___y_5224_){
_start:
{
lean_object* v_res_5225_; 
v_res_5225_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(v_as_5214_, v_as_x27_5215_, v_b_5216_, v_a_5217_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_, v___y_5223_);
lean_dec(v___y_5223_);
lean_dec_ref(v___y_5222_);
lean_dec(v___y_5221_);
lean_dec_ref(v___y_5220_);
lean_dec(v___y_5219_);
lean_dec_ref(v___y_5218_);
lean_dec(v_as_x27_5215_);
lean_dec(v_as_5214_);
return v_res_5225_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(lean_object* v_00_u03b1_5226_, lean_object* v_ref_5227_, lean_object* v_msg_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_){
_start:
{
lean_object* v___x_5236_; 
v___x_5236_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_ref_5227_, v_msg_5228_, v___y_5229_, v___y_5230_, v___y_5231_, v___y_5232_, v___y_5233_, v___y_5234_);
return v___x_5236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___boxed(lean_object* v_00_u03b1_5237_, lean_object* v_ref_5238_, lean_object* v_msg_5239_, lean_object* v___y_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_){
_start:
{
lean_object* v_res_5247_; 
v_res_5247_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(v_00_u03b1_5237_, v_ref_5238_, v_msg_5239_, v___y_5240_, v___y_5241_, v___y_5242_, v___y_5243_, v___y_5244_, v___y_5245_);
lean_dec(v___y_5245_);
lean_dec_ref(v___y_5244_);
lean_dec(v___y_5243_);
lean_dec_ref(v___y_5242_);
lean_dec(v___y_5241_);
lean_dec_ref(v___y_5240_);
lean_dec(v_ref_5238_);
return v_res_5247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(lean_object* v_msgData_5248_, lean_object* v_macroStack_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_, lean_object* v___y_5254_, lean_object* v___y_5255_){
_start:
{
lean_object* v___x_5257_; 
v___x_5257_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_msgData_5248_, v_macroStack_5249_, v___y_5254_);
return v___x_5257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___boxed(lean_object* v_msgData_5258_, lean_object* v_macroStack_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_){
_start:
{
lean_object* v_res_5267_; 
v_res_5267_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(v_msgData_5258_, v_macroStack_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v___y_5264_, v___y_5265_);
lean_dec(v___y_5265_);
lean_dec_ref(v___y_5264_);
lean_dec(v___y_5263_);
lean_dec_ref(v___y_5262_);
lean_dec(v___y_5261_);
lean_dec_ref(v___y_5260_);
return v_res_5267_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(lean_object* v_00_u03b2_5268_, lean_object* v_m_5269_, lean_object* v_a_5270_){
_start:
{
lean_object* v___x_5271_; 
v___x_5271_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v_m_5269_, v_a_5270_);
return v___x_5271_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___boxed(lean_object* v_00_u03b2_5272_, lean_object* v_m_5273_, lean_object* v_a_5274_){
_start:
{
lean_object* v_res_5275_; 
v_res_5275_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(v_00_u03b2_5272_, v_m_5273_, v_a_5274_);
lean_dec(v_a_5274_);
lean_dec_ref(v_m_5273_);
return v_res_5275_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(lean_object* v_00_u03b2_5276_, lean_object* v_x_5277_, lean_object* v_x_5278_){
_start:
{
uint8_t v___x_5279_; 
v___x_5279_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(v_x_5277_, v_x_5278_);
return v___x_5279_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___boxed(lean_object* v_00_u03b2_5280_, lean_object* v_x_5281_, lean_object* v_x_5282_){
_start:
{
uint8_t v_res_5283_; lean_object* v_r_5284_; 
v_res_5283_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(v_00_u03b2_5280_, v_x_5281_, v_x_5282_);
lean_dec_ref(v_x_5282_);
lean_dec_ref(v_x_5281_);
v_r_5284_ = lean_box(v_res_5283_);
return v_r_5284_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29(lean_object* v_00_u03b2_5285_, lean_object* v_a_5286_, lean_object* v_x_5287_){
_start:
{
lean_object* v___x_5288_; 
v___x_5288_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29___redArg(v_a_5286_, v_x_5287_);
return v___x_5288_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29___boxed(lean_object* v_00_u03b2_5289_, lean_object* v_a_5290_, lean_object* v_x_5291_){
_start:
{
lean_object* v_res_5292_; 
v_res_5292_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__29(v_00_u03b2_5289_, v_a_5290_, v_x_5291_);
lean_dec(v_x_5291_);
lean_dec(v_a_5290_);
return v_res_5292_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(lean_object* v_00_u03b2_5293_, lean_object* v_x_5294_, size_t v_x_5295_, lean_object* v_x_5296_){
_start:
{
uint8_t v___x_5297_; 
v___x_5297_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(v_x_5294_, v_x_5295_, v_x_5296_);
return v___x_5297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___boxed(lean_object* v_00_u03b2_5298_, lean_object* v_x_5299_, lean_object* v_x_5300_, lean_object* v_x_5301_){
_start:
{
size_t v_x_176322__boxed_5302_; uint8_t v_res_5303_; lean_object* v_r_5304_; 
v_x_176322__boxed_5302_ = lean_unbox_usize(v_x_5300_);
lean_dec(v_x_5300_);
v_res_5303_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(v_00_u03b2_5298_, v_x_5299_, v_x_176322__boxed_5302_, v_x_5301_);
lean_dec_ref(v_x_5301_);
lean_dec_ref(v_x_5299_);
v_r_5304_ = lean_box(v_res_5303_);
return v_r_5304_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36(lean_object* v_00_u03b2_5305_, lean_object* v_keys_5306_, lean_object* v_vals_5307_, lean_object* v_heq_5308_, lean_object* v_i_5309_, lean_object* v_k_5310_){
_start:
{
uint8_t v___x_5311_; 
v___x_5311_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(v_keys_5306_, v_i_5309_, v_k_5310_);
return v___x_5311_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___boxed(lean_object* v_00_u03b2_5312_, lean_object* v_keys_5313_, lean_object* v_vals_5314_, lean_object* v_heq_5315_, lean_object* v_i_5316_, lean_object* v_k_5317_){
_start:
{
uint8_t v_res_5318_; lean_object* v_r_5319_; 
v_res_5318_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36(v_00_u03b2_5312_, v_keys_5313_, v_vals_5314_, v_heq_5315_, v_i_5316_, v_k_5317_);
lean_dec_ref(v_k_5317_);
lean_dec_ref(v_vals_5314_);
lean_dec_ref(v_keys_5313_);
v_r_5319_ = lean_box(v_res_5318_);
return v_r_5319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object* v_doSeq_5320_, lean_object* v_a_5321_, lean_object* v_a_5322_, lean_object* v_a_5323_, lean_object* v_a_5324_, lean_object* v_a_5325_, lean_object* v_a_5326_){
_start:
{
lean_object* v___x_5328_; 
v___x_5328_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_doSeq_5320_, v_a_5321_, v_a_5322_, v_a_5323_, v_a_5324_, v_a_5325_, v_a_5326_);
return v___x_5328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq___boxed(lean_object* v_doSeq_5329_, lean_object* v_a_5330_, lean_object* v_a_5331_, lean_object* v_a_5332_, lean_object* v_a_5333_, lean_object* v_a_5334_, lean_object* v_a_5335_, lean_object* v_a_5336_){
_start:
{
lean_object* v_res_5337_; 
v_res_5337_ = l_Lean_Elab_Do_inferControlInfoSeq(v_doSeq_5329_, v_a_5330_, v_a_5331_, v_a_5332_, v_a_5333_, v_a_5334_, v_a_5335_);
lean_dec(v_a_5335_);
lean_dec_ref(v_a_5334_);
lean_dec(v_a_5333_);
lean_dec_ref(v_a_5332_);
lean_dec(v_a_5331_);
lean_dec_ref(v_a_5330_);
return v_res_5337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object* v_doElem_5338_, lean_object* v_a_5339_, lean_object* v_a_5340_, lean_object* v_a_5341_, lean_object* v_a_5342_, lean_object* v_a_5343_, lean_object* v_a_5344_){
_start:
{
lean_object* v___x_5346_; 
v___x_5346_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_doElem_5338_, v_a_5339_, v_a_5340_, v_a_5341_, v_a_5342_, v_a_5343_, v_a_5344_);
return v___x_5346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem___boxed(lean_object* v_doElem_5347_, lean_object* v_a_5348_, lean_object* v_a_5349_, lean_object* v_a_5350_, lean_object* v_a_5351_, lean_object* v_a_5352_, lean_object* v_a_5353_, lean_object* v_a_5354_){
_start:
{
lean_object* v_res_5355_; 
v_res_5355_ = l_Lean_Elab_Do_inferControlInfoElem(v_doElem_5347_, v_a_5348_, v_a_5349_, v_a_5350_, v_a_5351_, v_a_5352_, v_a_5353_);
lean_dec(v_a_5353_);
lean_dec_ref(v_a_5352_);
lean_dec(v_a_5351_);
lean_dec_ref(v_a_5350_);
lean_dec(v_a_5349_);
lean_dec_ref(v_a_5348_);
return v_res_5355_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_ForwardSyntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_ForwardSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Do_instInhabitedControlInfo_default = _init_l_Lean_Elab_Do_instInhabitedControlInfo_default();
lean_mark_persistent(l_Lean_Elab_Do_instInhabitedControlInfo_default);
l_Lean_Elab_Do_instInhabitedControlInfo = _init_l_Lean_Elab_Do_instInhabitedControlInfo();
lean_mark_persistent(l_Lean_Elab_Do_instInhabitedControlInfo);
l_Lean_Elab_Do_ControlInfo_pure = _init_l_Lean_Elab_Do_ControlInfo_pure();
lean_mark_persistent(l_Lean_Elab_Do_ControlInfo_pure);
l_Lean_Elab_Do_ControlInfo_empty = _init_l_Lean_Elab_Do_ControlInfo_empty();
lean_mark_persistent(l_Lean_Elab_Do_ControlInfo_empty);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Do_controlInfoElemAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Do_controlInfoElemAttribute);
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_ForwardSyntax(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_ForwardSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Do_InferControlInfo(builtin);
}
#ifdef __cplusplus
}
#endif
