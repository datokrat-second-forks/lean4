// Lean compiler output
// Module: Lake.Toml.Elab.Expression
// Imports: public import Lake.Toml.Elab.Value meta import all Lake.Toml.Grammar
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_findIdx_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_empty___redArg();
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lake_Toml_RBDict_appendArray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_push___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Exception_getRef(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_elabSimpleKey(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_Toml_elabVal(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_instInhabitedKeyTy_default;
LEAN_EXPORT uint8_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedKeyTy;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "table"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "array"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__2_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dotted"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__4 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instToStringKeyTy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instToStringKeyTy___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instToStringKeyTy___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instToStringKeyTy = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instToStringKeyTy___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_isValidPrefix(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_isValidPrefix___boxed(lean_object*);
static const lean_array_object l_Lake_Toml_instInhabitedElabState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Toml_instInhabitedElabState_default___closed__0 = (const lean_object*)&l_Lake_Toml_instInhabitedElabState_default___closed__0_value;
static const lean_ctor_object l_Lake_Toml_instInhabitedElabState_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Toml_instInhabitedElabState_default___closed__0_value)}};
static const lean_object* l_Lake_Toml_instInhabitedElabState_default___closed__1 = (const lean_object*)&l_Lake_Toml_instInhabitedElabState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_instInhabitedElabState_default = (const lean_object*)&l_Lake_Toml_instInhabitedElabState_default___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedElabState = (const lean_object*)&l_Lake_Toml_instInhabitedElabState_default___closed__1_value;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "cannot redefine "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " key `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Toml"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpleKey"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(187, 51, 117, 190, 121, 223, 170, 220)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "keyval"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 46, 78, 232, 161, 211, 209, 25)}};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "ill-formed key-value pair syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__4 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__4_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__4_value),LEAN_SCALAR_PTR_LITERAL(44, 24, 166, 18, 184, 133, 165, 53)}};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ill-formed key syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__6 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__6_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7;
static const lean_array_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "(internal) bad array key `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stdTable"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__1_value),LEAN_SCALAR_PTR_LITERAL(204, 45, 156, 80, 41, 178, 181, 196)}};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "ill-formed table syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "arrayTable"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 220, 56, 86, 146, 203, 81, 19)}};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "ill-formed array table syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "ill-formed expression syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__0_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__0 = (const lean_object*)&l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_TomlElabM_run(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_TomlElabM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2(uint8_t, lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_elabToml___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "toml"};
static const lean_object* l_Lake_Toml_elabToml___closed__0 = (const lean_object*)&l_Lake_Toml_elabToml___closed__0_value;
static const lean_ctor_object l_Lake_Toml_elabToml___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_elabToml___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_elabToml___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_elabToml___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_elabToml___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_elabToml___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 110, 132, 157, 201, 185, 149, 61)}};
static const lean_object* l_Lake_Toml_elabToml___closed__1 = (const lean_object*)&l_Lake_Toml_elabToml___closed__1_value;
static const lean_string_object l_Lake_Toml_elabToml___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ill-formed TOML syntax"};
static const lean_object* l_Lake_Toml_elabToml___closed__2 = (const lean_object*)&l_Lake_Toml_elabToml___closed__2_value;
static lean_once_cell_t l_Lake_Toml_elabToml___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_elabToml___closed__3;
static const lean_ctor_object l_Lake_Toml_elabToml___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_elabToml___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_elabToml___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_elabToml___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_elabToml___closed__4_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__4_value),LEAN_SCALAR_PTR_LITERAL(169, 19, 11, 35, 86, 242, 57, 11)}};
static const lean_object* l_Lake_Toml_elabToml___closed__4 = (const lean_object*)&l_Lake_Toml_elabToml___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_Toml_elabToml(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_elabToml___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorIdx(uint8_t v_x_1_){
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
default: 
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorIdx___boxed(lean_object* v_x_7_){
_start:
{
uint8_t v_x_boxed_8_; lean_object* v_res_9_; 
v_x_boxed_8_ = lean_unbox(v_x_7_);
v_res_9_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorIdx(v_x_boxed_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___redArg(lean_object* v_k_10_){
_start:
{
lean_inc(v_k_10_);
return v_k_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___redArg___boxed(lean_object* v_k_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___redArg(v_k_11_);
lean_dec(v_k_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, uint8_t v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_inc(v_k_17_);
return v_k_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
uint8_t v_t_boxed_23_; lean_object* v_res_24_; 
v_t_boxed_23_ = lean_unbox(v_t_20_);
v_res_24_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_boxed_23_, v_h_21_, v_k_22_);
lean_dec(v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___redArg(lean_object* v_value_25_){
_start:
{
lean_inc(v_value_25_);
return v_value_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___redArg___boxed(lean_object* v_value_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___redArg(v_value_26_);
lean_dec(v_value_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim(lean_object* v_motive_28_, uint8_t v_t_29_, lean_object* v_h_30_, lean_object* v_value_31_){
_start:
{
lean_inc(v_value_31_);
return v_value_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___boxed(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_value_35_){
_start:
{
uint8_t v_t_boxed_36_; lean_object* v_res_37_; 
v_t_boxed_36_ = lean_unbox(v_t_33_);
v_res_37_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim(v_motive_32_, v_t_boxed_36_, v_h_34_, v_value_35_);
lean_dec(v_value_35_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___redArg(lean_object* v_stdTable_38_){
_start:
{
lean_inc(v_stdTable_38_);
return v_stdTable_38_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___redArg___boxed(lean_object* v_stdTable_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___redArg(v_stdTable_39_);
lean_dec(v_stdTable_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim(lean_object* v_motive_41_, uint8_t v_t_42_, lean_object* v_h_43_, lean_object* v_stdTable_44_){
_start:
{
lean_inc(v_stdTable_44_);
return v_stdTable_44_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___boxed(lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_stdTable_48_){
_start:
{
uint8_t v_t_boxed_49_; lean_object* v_res_50_; 
v_t_boxed_49_ = lean_unbox(v_t_46_);
v_res_50_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim(v_motive_45_, v_t_boxed_49_, v_h_47_, v_stdTable_48_);
lean_dec(v_stdTable_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___redArg(lean_object* v_array_51_){
_start:
{
lean_inc(v_array_51_);
return v_array_51_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___redArg___boxed(lean_object* v_array_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___redArg(v_array_52_);
lean_dec(v_array_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim(lean_object* v_motive_54_, uint8_t v_t_55_, lean_object* v_h_56_, lean_object* v_array_57_){
_start:
{
lean_inc(v_array_57_);
return v_array_57_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___boxed(lean_object* v_motive_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_array_61_){
_start:
{
uint8_t v_t_boxed_62_; lean_object* v_res_63_; 
v_t_boxed_62_ = lean_unbox(v_t_59_);
v_res_63_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim(v_motive_58_, v_t_boxed_62_, v_h_60_, v_array_61_);
lean_dec(v_array_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___redArg(lean_object* v_dottedPrefix_64_){
_start:
{
lean_inc(v_dottedPrefix_64_);
return v_dottedPrefix_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___redArg___boxed(lean_object* v_dottedPrefix_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___redArg(v_dottedPrefix_65_);
lean_dec(v_dottedPrefix_65_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim(lean_object* v_motive_67_, uint8_t v_t_68_, lean_object* v_h_69_, lean_object* v_dottedPrefix_70_){
_start:
{
lean_inc(v_dottedPrefix_70_);
return v_dottedPrefix_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___boxed(lean_object* v_motive_71_, lean_object* v_t_72_, lean_object* v_h_73_, lean_object* v_dottedPrefix_74_){
_start:
{
uint8_t v_t_boxed_75_; lean_object* v_res_76_; 
v_t_boxed_75_ = lean_unbox(v_t_72_);
v_res_76_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim(v_motive_71_, v_t_boxed_75_, v_h_73_, v_dottedPrefix_74_);
lean_dec(v_dottedPrefix_74_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___redArg(lean_object* v_headerPrefix_77_){
_start:
{
lean_inc(v_headerPrefix_77_);
return v_headerPrefix_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___redArg___boxed(lean_object* v_headerPrefix_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___redArg(v_headerPrefix_78_);
lean_dec(v_headerPrefix_78_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim(lean_object* v_motive_80_, uint8_t v_t_81_, lean_object* v_h_82_, lean_object* v_headerPrefix_83_){
_start:
{
lean_inc(v_headerPrefix_83_);
return v_headerPrefix_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___boxed(lean_object* v_motive_84_, lean_object* v_t_85_, lean_object* v_h_86_, lean_object* v_headerPrefix_87_){
_start:
{
uint8_t v_t_boxed_88_; lean_object* v_res_89_; 
v_t_boxed_88_ = lean_unbox(v_t_85_);
v_res_89_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim(v_motive_84_, v_t_boxed_88_, v_h_86_, v_headerPrefix_87_);
lean_dec(v_headerPrefix_87_);
return v_res_89_;
}
}
static uint8_t _init_l_Lake_Toml_instInhabitedKeyTy_default(void){
_start:
{
uint8_t v___x_90_; 
v___x_90_ = 0;
return v___x_90_;
}
}
static uint8_t _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedKeyTy(void){
_start:
{
uint8_t v___x_91_; 
v___x_91_ = 0;
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(uint8_t v_ty_97_){
_start:
{
switch(v_ty_97_)
{
case 0:
{
lean_object* v___x_98_; 
v___x_98_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__0));
return v___x_98_;
}
case 1:
{
lean_object* v___x_99_; 
v___x_99_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__1));
return v___x_99_;
}
case 2:
{
lean_object* v___x_100_; 
v___x_100_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__2));
return v___x_100_;
}
case 3:
{
lean_object* v___x_101_; 
v___x_101_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__3));
return v___x_101_;
}
default: 
{
lean_object* v___x_102_; 
v___x_102_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__4));
return v___x_102_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___boxed(lean_object* v_ty_103_){
_start:
{
uint8_t v_ty_boxed_104_; lean_object* v_res_105_; 
v_ty_boxed_104_ = lean_unbox(v_ty_103_);
v_res_105_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v_ty_boxed_104_);
return v_res_105_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_isValidPrefix(uint8_t v_ty_108_){
_start:
{
switch(v_ty_108_)
{
case 1:
{
uint8_t v___x_109_; 
v___x_109_ = 1;
return v___x_109_;
}
case 4:
{
uint8_t v___x_110_; 
v___x_110_ = 1;
return v___x_110_;
}
case 3:
{
uint8_t v___x_111_; 
v___x_111_ = 1;
return v___x_111_;
}
default: 
{
uint8_t v___x_112_; 
v___x_112_ = 0;
return v___x_112_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_isValidPrefix___boxed(lean_object* v_ty_113_){
_start:
{
uint8_t v_ty_boxed_114_; uint8_t v_res_115_; lean_object* v_r_116_; 
v_ty_boxed_114_ = lean_unbox(v_ty_113_);
v_res_115_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_isValidPrefix(v_ty_boxed_114_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_125_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0);
v___x_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_128_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1);
v___x_129_ = lean_unsigned_to_nat(0u);
v___x_130_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
lean_ctor_set(v___x_130_, 2, v___x_129_);
lean_ctor_set(v___x_130_, 3, v___x_129_);
lean_ctor_set(v___x_130_, 4, v___x_128_);
lean_ctor_set(v___x_130_, 5, v___x_128_);
lean_ctor_set(v___x_130_, 6, v___x_128_);
lean_ctor_set(v___x_130_, 7, v___x_128_);
lean_ctor_set(v___x_130_, 8, v___x_128_);
lean_ctor_set(v___x_130_, 9, v___x_128_);
lean_ctor_set(v___x_130_, 10, v___x_128_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = lean_unsigned_to_nat(32u);
v___x_132_ = lean_mk_empty_array_with_capacity(v___x_131_);
v___x_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4(void){
_start:
{
size_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_134_ = ((size_t)5ULL);
v___x_135_ = lean_unsigned_to_nat(0u);
v___x_136_ = lean_unsigned_to_nat(32u);
v___x_137_ = lean_mk_empty_array_with_capacity(v___x_136_);
v___x_138_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3);
v___x_139_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_139_, 0, v___x_138_);
lean_ctor_set(v___x_139_, 1, v___x_137_);
lean_ctor_set(v___x_139_, 2, v___x_135_);
lean_ctor_set(v___x_139_, 3, v___x_135_);
lean_ctor_set_usize(v___x_139_, 4, v___x_134_);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_140_ = lean_box(1);
v___x_141_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4);
v___x_142_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1);
v___x_143_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v___x_141_);
lean_ctor_set(v___x_143_, 2, v___x_140_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(lean_object* v_msgData_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___x_148_; lean_object* v_toCold_149_; lean_object* v_env_150_; lean_object* v_options_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_148_ = lean_st_ref_get(v___y_146_);
v_toCold_149_ = lean_ctor_get(v___y_145_, 0);
v_env_150_ = lean_ctor_get(v___x_148_, 0);
lean_inc_ref(v_env_150_);
lean_dec(v___x_148_);
v_options_151_ = lean_ctor_get(v_toCold_149_, 2);
v___x_152_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2);
v___x_153_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5);
lean_inc_ref(v_options_151_);
v___x_154_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_154_, 0, v_env_150_);
lean_ctor_set(v___x_154_, 1, v___x_152_);
lean_ctor_set(v___x_154_, 2, v___x_153_);
lean_ctor_set(v___x_154_, 3, v_options_151_);
v___x_155_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
lean_ctor_set(v___x_155_, 1, v_msgData_144_);
v___x_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(v_msgData_157_, v___y_158_, v___y_159_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(lean_object* v_msg_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
lean_object* v_ref_166_; lean_object* v___x_167_; lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_176_; 
v_ref_166_ = lean_ctor_get(v___y_163_, 2);
v___x_167_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(v_msg_162_, v___y_163_, v___y_164_);
v_a_168_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_176_ == 0)
{
v___x_170_ = v___x_167_;
v_isShared_171_ = v_isSharedCheck_176_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_167_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_176_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; lean_object* v___x_174_; 
lean_inc(v_ref_166_);
v___x_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_172_, 0, v_ref_166_);
lean_ctor_set(v___x_172_, 1, v_a_168_);
if (v_isShared_171_ == 0)
{
lean_ctor_set_tag(v___x_170_, 1);
lean_ctor_set(v___x_170_, 0, v___x_172_);
v___x_174_ = v___x_170_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg___boxed(lean_object* v_msg_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(v_msg_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(lean_object* v_ref_182_, lean_object* v_msg_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_toCold_188_; lean_object* v_currRecDepth_189_; lean_object* v_ref_190_; uint8_t v_diag_191_; uint8_t v_suppressElabErrors_192_; lean_object* v_ref_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_toCold_188_ = lean_ctor_get(v___y_185_, 0);
v_currRecDepth_189_ = lean_ctor_get(v___y_185_, 1);
v_ref_190_ = lean_ctor_get(v___y_185_, 2);
v_diag_191_ = lean_ctor_get_uint8(v___y_185_, sizeof(void*)*3);
v_suppressElabErrors_192_ = lean_ctor_get_uint8(v___y_185_, sizeof(void*)*3 + 1);
v_ref_193_ = l_Lean_replaceRef(v_ref_182_, v_ref_190_);
lean_inc(v_currRecDepth_189_);
lean_inc_ref(v_toCold_188_);
v___x_194_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_194_, 0, v_toCold_188_);
lean_ctor_set(v___x_194_, 1, v_currRecDepth_189_);
lean_ctor_set(v___x_194_, 2, v_ref_193_);
lean_ctor_set_uint8(v___x_194_, sizeof(void*)*3, v_diag_191_);
lean_ctor_set_uint8(v___x_194_, sizeof(void*)*3 + 1, v_suppressElabErrors_192_);
v___x_195_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(v_msg_183_, v___x_194_, v___y_186_);
lean_dec_ref_known(v___x_194_, 3);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg___boxed(lean_object* v_ref_196_, lean_object* v_msg_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_ref_196_, v_msg_197_, v___y_198_, v___y_199_, v___y_200_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v_ref_196_);
return v_res_202_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__0));
v___x_205_ = l_Lean_stringToMessageData(v___x_204_);
return v___x_205_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__2));
v___x_208_ = l_Lean_stringToMessageData(v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__4));
v___x_211_ = l_Lean_stringToMessageData(v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1(lean_object* v_as_212_, size_t v_i_213_, size_t v_stop_214_, lean_object* v_b_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_fst_221_; lean_object* v_snd_222_; uint8_t v___x_226_; 
v___x_226_ = lean_usize_dec_eq(v_i_213_, v_stop_214_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_array_uget_borrowed(v_as_212_, v_i_213_);
lean_inc(v___x_227_);
v___x_228_ = l_Lake_Toml_elabSimpleKey(v___x_227_, v___y_217_, v___y_218_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v_keyTys_230_; lean_object* v_arrKeyTys_231_; lean_object* v_arrParents_232_; lean_object* v_currArrKey_233_; lean_object* v_currKey_234_; lean_object* v_items_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v___x_228_, 1);
v_keyTys_230_ = lean_ctor_get(v___y_216_, 0);
v_arrKeyTys_231_ = lean_ctor_get(v___y_216_, 1);
v_arrParents_232_ = lean_ctor_get(v___y_216_, 2);
v_currArrKey_233_ = lean_ctor_get(v___y_216_, 3);
v_currKey_234_ = lean_ctor_get(v___y_216_, 4);
v_items_235_ = lean_ctor_get(v___y_216_, 5);
v___x_236_ = l_Lean_Name_str___override(v_b_215_, v_a_229_);
v___x_237_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_keyTys_230_, v___x_236_);
if (lean_obj_tag(v___x_237_) == 1)
{
lean_object* v_val_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_268_; 
v_val_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_268_ == 0)
{
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_268_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_val_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_268_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
uint8_t v___x_242_; 
v___x_242_ = lean_unbox(v_val_238_);
if (v___x_242_ == 3)
{
lean_del_object(v___x_240_);
lean_dec(v_val_238_);
v_fst_221_ = v___x_236_;
v_snd_222_ = v___y_216_;
goto v___jp_220_;
}
else
{
lean_object* v___x_243_; uint8_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_247_; 
v___x_243_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1);
v___x_244_ = lean_unbox(v_val_238_);
lean_dec(v_val_238_);
v___x_245_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v___x_244_);
if (v_isShared_241_ == 0)
{
lean_ctor_set_tag(v___x_240_, 3);
lean_ctor_set(v___x_240_, 0, v___x_245_);
v___x_247_ = v___x_240_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_245_);
v___x_247_ = v_reuseFailAlloc_267_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_248_ = l_Lean_MessageData_ofFormat(v___x_247_);
v___x_249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_243_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3);
v___x_251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_249_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
lean_inc(v___x_236_);
v___x_252_ = l_Lean_MessageData_ofName(v___x_236_);
v___x_253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_251_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_227_, v___x_255_, v___y_216_, v___y_217_, v___y_218_);
lean_dec_ref(v___y_216_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; lean_object* v_snd_258_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_a_257_);
lean_dec_ref_known(v___x_256_, 1);
v_snd_258_ = lean_ctor_get(v_a_257_, 1);
lean_inc(v_snd_258_);
lean_dec(v_a_257_);
v_fst_221_ = v___x_236_;
v_snd_222_ = v_snd_258_;
goto v___jp_220_;
}
else
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_266_; 
lean_dec(v___x_236_);
v_a_259_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_266_ == 0)
{
v___x_261_ = v___x_256_;
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_256_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_264_; 
if (v_isShared_262_ == 0)
{
v___x_264_ = v___x_261_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_a_259_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_278_; 
lean_inc_ref(v_items_235_);
lean_inc(v_currKey_234_);
lean_inc(v_currArrKey_233_);
lean_inc(v_arrParents_232_);
lean_inc(v_arrKeyTys_231_);
lean_inc(v_keyTys_230_);
lean_dec(v___x_237_);
v_isSharedCheck_278_ = !lean_is_exclusive(v___y_216_);
if (v_isSharedCheck_278_ == 0)
{
lean_object* v_unused_279_; lean_object* v_unused_280_; lean_object* v_unused_281_; lean_object* v_unused_282_; lean_object* v_unused_283_; lean_object* v_unused_284_; 
v_unused_279_ = lean_ctor_get(v___y_216_, 5);
lean_dec(v_unused_279_);
v_unused_280_ = lean_ctor_get(v___y_216_, 4);
lean_dec(v_unused_280_);
v_unused_281_ = lean_ctor_get(v___y_216_, 3);
lean_dec(v_unused_281_);
v_unused_282_ = lean_ctor_get(v___y_216_, 2);
lean_dec(v_unused_282_);
v_unused_283_ = lean_ctor_get(v___y_216_, 1);
lean_dec(v_unused_283_);
v_unused_284_ = lean_ctor_get(v___y_216_, 0);
lean_dec(v_unused_284_);
v___x_270_ = v___y_216_;
v_isShared_271_ = v_isSharedCheck_278_;
goto v_resetjp_269_;
}
else
{
lean_dec(v___y_216_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_278_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
uint8_t v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_276_; 
v___x_272_ = 3;
v___x_273_ = lean_box(v___x_272_);
lean_inc(v___x_236_);
v___x_274_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_236_, v___x_273_, v_keyTys_230_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 0, v___x_274_);
v___x_276_ = v___x_270_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_274_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v_arrKeyTys_231_);
lean_ctor_set(v_reuseFailAlloc_277_, 2, v_arrParents_232_);
lean_ctor_set(v_reuseFailAlloc_277_, 3, v_currArrKey_233_);
lean_ctor_set(v_reuseFailAlloc_277_, 4, v_currKey_234_);
lean_ctor_set(v_reuseFailAlloc_277_, 5, v_items_235_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
v_fst_221_ = v___x_236_;
v_snd_222_ = v___x_276_;
goto v___jp_220_;
}
}
}
}
else
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_292_; 
lean_dec_ref(v___y_216_);
lean_dec(v_b_215_);
v_a_285_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_292_ == 0)
{
v___x_287_ = v___x_228_;
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_228_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_a_285_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
}
else
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v_b_215_);
lean_ctor_set(v___x_293_, 1, v___y_216_);
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
return v___x_294_;
}
v___jp_220_:
{
size_t v___x_223_; size_t v___x_224_; 
v___x_223_ = ((size_t)1ULL);
v___x_224_ = lean_usize_add(v_i_213_, v___x_223_);
v_i_213_ = v___x_224_;
v_b_215_ = v_fst_221_;
v___y_216_ = v_snd_222_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___boxed(lean_object* v_as_295_, lean_object* v_i_296_, lean_object* v_stop_297_, lean_object* v_b_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
size_t v_i_boxed_303_; size_t v_stop_boxed_304_; lean_object* v_res_305_; 
v_i_boxed_303_ = lean_unbox_usize(v_i_296_);
lean_dec(v_i_296_);
v_stop_boxed_304_ = lean_unbox_usize(v_stop_297_);
lean_dec(v_stop_297_);
v_res_305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1(v_as_295_, v_i_boxed_303_, v_stop_boxed_304_, v_b_298_, v___y_299_, v___y_300_, v___y_301_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec_ref(v_as_295_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys(lean_object* v_ks_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_currKey_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v_currKey_311_ = lean_ctor_get(v_a_307_, 4);
lean_inc(v_currKey_311_);
v___x_312_ = lean_unsigned_to_nat(0u);
v___x_313_ = lean_array_get_size(v_ks_306_);
v___x_314_ = lean_nat_dec_lt(v___x_312_, v___x_313_);
if (v___x_314_ == 0)
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v_currKey_311_);
lean_ctor_set(v___x_315_, 1, v_a_307_);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
return v___x_316_;
}
else
{
uint8_t v___x_317_; 
v___x_317_ = lean_nat_dec_le(v___x_313_, v___x_313_);
if (v___x_317_ == 0)
{
if (v___x_314_ == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v_currKey_311_);
lean_ctor_set(v___x_318_, 1, v_a_307_);
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
return v___x_319_;
}
else
{
size_t v___x_320_; size_t v___x_321_; lean_object* v___x_322_; 
v___x_320_ = ((size_t)0ULL);
v___x_321_ = lean_usize_of_nat(v___x_313_);
v___x_322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1(v_ks_306_, v___x_320_, v___x_321_, v_currKey_311_, v_a_307_, v_a_308_, v_a_309_);
return v___x_322_;
}
}
else
{
size_t v___x_323_; size_t v___x_324_; lean_object* v___x_325_; 
v___x_323_ = ((size_t)0ULL);
v___x_324_ = lean_usize_of_nat(v___x_313_);
v___x_325_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1(v_ks_306_, v___x_323_, v___x_324_, v_currKey_311_, v_a_307_, v_a_308_, v_a_309_);
return v___x_325_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys___boxed(lean_object* v_ks_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys(v_ks_326_, v_a_327_, v_a_328_, v_a_329_);
lean_dec(v_a_329_);
lean_dec_ref(v_a_328_);
lean_dec_ref(v_ks_326_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0(lean_object* v_00_u03b1_332_, lean_object* v_ref_333_, lean_object* v_msg_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_ref_333_, v_msg_334_, v___y_335_, v___y_336_, v___y_337_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___boxed(lean_object* v_00_u03b1_340_, lean_object* v_ref_341_, lean_object* v_msg_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0(v_00_u03b1_340_, v_ref_341_, v_msg_342_, v___y_343_, v___y_344_, v___y_345_);
lean_dec(v___y_345_);
lean_dec_ref(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v_ref_341_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0(lean_object* v_00_u03b1_348_, lean_object* v_msg_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(v_msg_349_, v___y_351_, v___y_352_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___boxed(lean_object* v_00_u03b1_355_, lean_object* v_msg_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0(v_00_u03b1_355_, v_msg_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec_ref(v___y_357_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(uint8_t v___x_362_, lean_object* v_as_363_, size_t v_i_364_, size_t v_stop_365_, lean_object* v_b_366_){
_start:
{
lean_object* v___y_368_; uint8_t v___x_372_; 
v___x_372_ = lean_usize_dec_eq(v_i_364_, v_stop_365_);
if (v___x_372_ == 0)
{
lean_object* v_fst_373_; uint8_t v___x_374_; 
v_fst_373_ = lean_ctor_get(v_b_366_, 0);
v___x_374_ = lean_unbox(v_fst_373_);
if (v___x_374_ == 0)
{
lean_object* v_snd_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_383_; 
v_snd_375_ = lean_ctor_get(v_b_366_, 1);
v_isSharedCheck_383_ = !lean_is_exclusive(v_b_366_);
if (v_isSharedCheck_383_ == 0)
{
lean_object* v_unused_384_; 
v_unused_384_ = lean_ctor_get(v_b_366_, 0);
lean_dec(v_unused_384_);
v___x_377_ = v_b_366_;
v_isShared_378_ = v_isSharedCheck_383_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_snd_375_);
lean_dec(v_b_366_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_383_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_379_ = lean_box(v___x_362_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_379_);
v___x_381_ = v___x_377_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
lean_ctor_set(v_reuseFailAlloc_382_, 1, v_snd_375_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
v___y_368_ = v___x_381_;
goto v___jp_367_;
}
}
}
else
{
lean_object* v_snd_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_395_; 
v_snd_385_ = lean_ctor_get(v_b_366_, 1);
v_isSharedCheck_395_ = !lean_is_exclusive(v_b_366_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; 
v_unused_396_ = lean_ctor_get(v_b_366_, 0);
lean_dec(v_unused_396_);
v___x_387_ = v_b_366_;
v_isShared_388_ = v_isSharedCheck_395_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_snd_385_);
lean_dec(v_b_366_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_395_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_389_ = lean_array_uget_borrowed(v_as_363_, v_i_364_);
lean_inc(v___x_389_);
v___x_390_ = lean_array_push(v_snd_385_, v___x_389_);
v___x_391_ = lean_box(v___x_372_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 1, v___x_390_);
lean_ctor_set(v___x_387_, 0, v___x_391_);
v___x_393_ = v___x_387_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_391_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v___x_390_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
v___y_368_ = v___x_393_;
goto v___jp_367_;
}
}
}
}
else
{
return v_b_366_;
}
v___jp_367_:
{
size_t v___x_369_; size_t v___x_370_; 
v___x_369_ = ((size_t)1ULL);
v___x_370_ = lean_usize_add(v_i_364_, v___x_369_);
v_i_364_ = v___x_370_;
v_b_366_ = v___y_368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1___boxed(lean_object* v___x_397_, lean_object* v_as_398_, lean_object* v_i_399_, lean_object* v_stop_400_, lean_object* v_b_401_){
_start:
{
uint8_t v___x_2936__boxed_402_; size_t v_i_boxed_403_; size_t v_stop_boxed_404_; lean_object* v_res_405_; 
v___x_2936__boxed_402_ = lean_unbox(v___x_397_);
v_i_boxed_403_ = lean_unbox_usize(v_i_399_);
lean_dec(v_i_399_);
v_stop_boxed_404_ = lean_unbox_usize(v_stop_400_);
lean_dec(v_stop_400_);
v_res_405_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(v___x_2936__boxed_402_, v_as_398_, v_i_boxed_403_, v_stop_boxed_404_, v_b_401_);
lean_dec_ref(v_as_398_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(size_t v_sz_413_, size_t v_i_414_, lean_object* v_bs_415_){
_start:
{
uint8_t v___x_416_; 
v___x_416_ = lean_usize_dec_lt(v_i_414_, v_sz_413_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; 
v___x_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_417_, 0, v_bs_415_);
return v___x_417_;
}
else
{
lean_object* v_v_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v_v_418_ = lean_array_uget(v_bs_415_, v_i_414_);
v___x_419_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3));
lean_inc(v_v_418_);
v___x_420_ = l_Lean_Syntax_isOfKind(v_v_418_, v___x_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; 
lean_dec(v_v_418_);
lean_dec_ref(v_bs_415_);
v___x_421_ = lean_box(0);
return v___x_421_;
}
else
{
lean_object* v___x_422_; lean_object* v_bs_x27_423_; size_t v___x_424_; size_t v___x_425_; lean_object* v___x_426_; 
v___x_422_ = lean_unsigned_to_nat(0u);
v_bs_x27_423_ = lean_array_uset(v_bs_415_, v_i_414_, v___x_422_);
v___x_424_ = ((size_t)1ULL);
v___x_425_ = lean_usize_add(v_i_414_, v___x_424_);
v___x_426_ = lean_array_uset(v_bs_x27_423_, v_i_414_, v_v_418_);
v_i_414_ = v___x_425_;
v_bs_415_ = v___x_426_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___boxed(lean_object* v_sz_428_, lean_object* v_i_429_, lean_object* v_bs_430_){
_start:
{
size_t v_sz_boxed_431_; size_t v_i_boxed_432_; lean_object* v_res_433_; 
v_sz_boxed_431_ = lean_unbox_usize(v_sz_428_);
lean_dec(v_sz_428_);
v_i_boxed_432_ = lean_unbox_usize(v_i_429_);
lean_dec(v_i_429_);
v_res_433_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(v_sz_boxed_431_, v_i_boxed_432_, v_bs_430_);
return v_res_433_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3(void){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_440_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__2));
v___x_441_ = l_Lean_stringToMessageData(v___x_440_);
return v___x_441_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__6));
v___x_449_ = l_Lean_stringToMessageData(v___x_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval(lean_object* v_kv_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_){
_start:
{
lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_457_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1));
lean_inc(v_kv_452_);
v___x_458_ = l_Lean_Syntax_isOfKind(v_kv_452_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3);
v___x_460_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_kv_452_, v___x_459_, v_a_453_, v_a_454_, v_a_455_);
lean_dec_ref(v_a_453_);
lean_dec(v_kv_452_);
return v___x_460_;
}
else
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = l_Lean_Syntax_getArg(v_kv_452_, v___x_461_);
v___x_463_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5));
lean_inc(v___x_462_);
v___x_464_ = l_Lean_Syntax_isOfKind(v___x_462_, v___x_463_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; 
lean_dec(v_kv_452_);
v___x_465_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_466_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_462_, v___x_465_, v_a_453_, v_a_454_, v_a_455_);
lean_dec_ref(v_a_453_);
lean_dec(v___x_462_);
return v___x_466_;
}
else
{
lean_object* v___x_467_; lean_object* v_v_468_; lean_object* v___y_470_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_467_ = lean_unsigned_to_nat(2u);
v_v_468_ = l_Lean_Syntax_getArg(v_kv_452_, v___x_467_);
lean_dec(v_kv_452_);
v___x_576_ = l_Lean_Syntax_getArg(v___x_462_, v___x_461_);
v___x_577_ = l_Lean_Syntax_getArgs(v___x_576_);
lean_dec(v___x_576_);
v___x_578_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8));
v___x_579_ = lean_array_get_size(v___x_577_);
v___x_580_ = lean_nat_dec_lt(v___x_461_, v___x_579_);
if (v___x_580_ == 0)
{
lean_dec_ref(v___x_577_);
v___y_470_ = v___x_578_;
goto v___jp_469_;
}
else
{
lean_object* v___x_581_; lean_object* v___x_582_; size_t v___x_583_; size_t v___x_584_; lean_object* v___x_585_; lean_object* v_snd_586_; 
v___x_581_ = lean_box(v___x_580_);
v___x_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set(v___x_582_, 1, v___x_578_);
v___x_583_ = ((size_t)0ULL);
v___x_584_ = lean_usize_of_nat(v___x_579_);
v___x_585_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(v___x_464_, v___x_577_, v___x_583_, v___x_584_, v___x_582_);
lean_dec_ref(v___x_577_);
v_snd_586_ = lean_ctor_get(v___x_585_, 1);
lean_inc(v_snd_586_);
lean_dec_ref(v___x_585_);
v___y_470_ = v_snd_586_;
goto v___jp_469_;
}
v___jp_469_:
{
size_t v_sz_471_; size_t v___x_472_; lean_object* v___x_473_; 
v_sz_471_ = lean_array_size(v___y_470_);
v___x_472_ = ((size_t)0ULL);
v___x_473_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(v_sz_471_, v___x_472_, v___y_470_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec(v_v_468_);
v___x_474_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_475_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_462_, v___x_474_, v_a_453_, v_a_454_, v_a_455_);
lean_dec_ref(v_a_453_);
lean_dec(v___x_462_);
return v___x_475_;
}
else
{
lean_object* v_val_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v_tailKeyStx_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_val_476_ = lean_ctor_get(v___x_473_, 0);
lean_inc(v_val_476_);
lean_dec_ref_known(v___x_473_, 1);
v___x_477_ = lean_box(0);
v___x_478_ = lean_array_get_size(v_val_476_);
v___x_479_ = lean_unsigned_to_nat(1u);
v___x_480_ = lean_nat_sub(v___x_478_, v___x_479_);
v_tailKeyStx_481_ = lean_array_get(v___x_477_, v_val_476_, v___x_480_);
lean_dec(v___x_480_);
v___x_482_ = lean_array_pop(v_val_476_);
v___x_483_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys(v___x_482_, v_a_453_, v_a_454_, v_a_455_);
lean_dec_ref(v___x_482_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; lean_object* v_fst_485_; lean_object* v_snd_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_567_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
lean_inc(v_a_484_);
lean_dec_ref_known(v___x_483_, 1);
v_fst_485_ = lean_ctor_get(v_a_484_, 0);
v_snd_486_ = lean_ctor_get(v_a_484_, 1);
v_isSharedCheck_567_ = !lean_is_exclusive(v_a_484_);
if (v_isSharedCheck_567_ == 0)
{
v___x_488_ = v_a_484_;
v_isShared_489_ = v_isSharedCheck_567_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_snd_486_);
lean_inc(v_fst_485_);
lean_dec(v_a_484_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_567_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; 
lean_inc(v_tailKeyStx_481_);
v___x_490_ = l_Lake_Toml_elabSimpleKey(v_tailKeyStx_481_, v_a_454_, v_a_455_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v_keyTys_492_; lean_object* v_arrKeyTys_493_; lean_object* v_arrParents_494_; lean_object* v_currArrKey_495_; lean_object* v_currKey_496_; lean_object* v_items_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_490_, 1);
v_keyTys_492_ = lean_ctor_get(v_snd_486_, 0);
v_arrKeyTys_493_ = lean_ctor_get(v_snd_486_, 1);
v_arrParents_494_ = lean_ctor_get(v_snd_486_, 2);
v_currArrKey_495_ = lean_ctor_get(v_snd_486_, 3);
v_currKey_496_ = lean_ctor_get(v_snd_486_, 4);
v_items_497_ = lean_ctor_get(v_snd_486_, 5);
v___x_498_ = l_Lean_Name_str___override(v_fst_485_, v_a_491_);
v___x_499_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_keyTys_492_, v___x_498_);
if (lean_obj_tag(v___x_499_) == 1)
{
lean_object* v_val_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_519_; 
lean_del_object(v___x_488_);
lean_dec(v_v_468_);
lean_dec(v___x_462_);
v_val_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_519_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_519_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_val_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_519_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; uint8_t v___x_505_; lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_504_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1);
v___x_505_ = lean_unbox(v_val_500_);
lean_dec(v_val_500_);
v___x_506_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v___x_505_);
if (v_isShared_503_ == 0)
{
lean_ctor_set_tag(v___x_502_, 3);
lean_ctor_set(v___x_502_, 0, v___x_506_);
v___x_508_ = v___x_502_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_518_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_509_ = l_Lean_MessageData_ofFormat(v___x_508_);
v___x_510_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_504_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
v___x_511_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3);
v___x_512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_510_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = l_Lean_MessageData_ofName(v___x_498_);
v___x_514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_516_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_514_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_tailKeyStx_481_, v___x_516_, v_snd_486_, v_a_454_, v_a_455_);
lean_dec(v_snd_486_);
lean_dec(v_tailKeyStx_481_);
return v___x_517_;
}
}
}
else
{
lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_552_; 
lean_inc_ref(v_items_497_);
lean_inc(v_currKey_496_);
lean_inc(v_currArrKey_495_);
lean_inc(v_arrParents_494_);
lean_inc(v_arrKeyTys_493_);
lean_inc(v_keyTys_492_);
lean_dec(v___x_499_);
lean_dec(v_tailKeyStx_481_);
v_isSharedCheck_552_ = !lean_is_exclusive(v_snd_486_);
if (v_isSharedCheck_552_ == 0)
{
lean_object* v_unused_553_; lean_object* v_unused_554_; lean_object* v_unused_555_; lean_object* v_unused_556_; lean_object* v_unused_557_; lean_object* v_unused_558_; 
v_unused_553_ = lean_ctor_get(v_snd_486_, 5);
lean_dec(v_unused_553_);
v_unused_554_ = lean_ctor_get(v_snd_486_, 4);
lean_dec(v_unused_554_);
v_unused_555_ = lean_ctor_get(v_snd_486_, 3);
lean_dec(v_unused_555_);
v_unused_556_ = lean_ctor_get(v_snd_486_, 2);
lean_dec(v_unused_556_);
v_unused_557_ = lean_ctor_get(v_snd_486_, 1);
lean_dec(v_unused_557_);
v_unused_558_ = lean_ctor_get(v_snd_486_, 0);
lean_dec(v_unused_558_);
v___x_521_ = v_snd_486_;
v_isShared_522_ = v_isSharedCheck_552_;
goto v_resetjp_520_;
}
else
{
lean_dec(v_snd_486_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_552_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; 
v___x_523_ = l_Lake_Toml_elabVal(v_v_468_, v_a_454_, v_a_455_);
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_543_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_543_ == 0)
{
v___x_526_ = v___x_523_;
v_isShared_527_ = v_isSharedCheck_543_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_523_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_543_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; uint8_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_535_; 
v___x_528_ = lean_box(0);
v___x_529_ = 0;
v___x_530_ = lean_box(v___x_529_);
lean_inc(v___x_498_);
v___x_531_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_498_, v___x_530_, v_keyTys_492_);
v___x_532_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_532_, 0, v___x_462_);
lean_ctor_set(v___x_532_, 1, v___x_498_);
lean_ctor_set(v___x_532_, 2, v_a_524_);
v___x_533_ = lean_array_push(v_items_497_, v___x_532_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 5, v___x_533_);
lean_ctor_set(v___x_521_, 0, v___x_531_);
v___x_535_ = v___x_521_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v___x_531_);
lean_ctor_set(v_reuseFailAlloc_542_, 1, v_arrKeyTys_493_);
lean_ctor_set(v_reuseFailAlloc_542_, 2, v_arrParents_494_);
lean_ctor_set(v_reuseFailAlloc_542_, 3, v_currArrKey_495_);
lean_ctor_set(v_reuseFailAlloc_542_, 4, v_currKey_496_);
lean_ctor_set(v_reuseFailAlloc_542_, 5, v___x_533_);
v___x_535_ = v_reuseFailAlloc_542_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
lean_object* v___x_537_; 
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 1, v___x_535_);
lean_ctor_set(v___x_488_, 0, v___x_528_);
v___x_537_ = v___x_488_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_541_, 1, v___x_535_);
v___x_537_ = v_reuseFailAlloc_541_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
lean_object* v___x_539_; 
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_537_);
v___x_539_ = v___x_526_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
}
else
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_551_; 
lean_del_object(v___x_521_);
lean_dec(v___x_498_);
lean_dec_ref(v_items_497_);
lean_dec(v_currKey_496_);
lean_dec(v_currArrKey_495_);
lean_dec(v_arrParents_494_);
lean_dec(v_arrKeyTys_493_);
lean_dec(v_keyTys_492_);
lean_del_object(v___x_488_);
lean_dec(v___x_462_);
v_a_544_ = lean_ctor_get(v___x_523_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_551_ == 0)
{
v___x_546_ = v___x_523_;
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_523_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_a_544_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
lean_del_object(v___x_488_);
lean_dec(v_snd_486_);
lean_dec(v_fst_485_);
lean_dec(v_tailKeyStx_481_);
lean_dec(v_v_468_);
lean_dec(v___x_462_);
v_a_559_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_490_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_490_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
}
else
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
lean_dec(v_tailKeyStx_481_);
lean_dec(v_v_468_);
lean_dec(v___x_462_);
v_a_568_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_575_ == 0)
{
v___x_570_ = v___x_483_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_483_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_568_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___boxed(lean_object* v_kv_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval(v_kv_587_, v_a_588_, v_a_589_, v_a_590_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
return v_res_592_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__0));
v___x_595_ = l_Lean_stringToMessageData(v___x_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0(lean_object* v_as_596_, size_t v_i_597_, size_t v_stop_598_, lean_object* v_b_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_fst_605_; lean_object* v_snd_606_; uint8_t v___x_610_; 
v___x_610_ = lean_usize_dec_eq(v_i_597_, v_stop_598_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_array_uget_borrowed(v_as_596_, v_i_597_);
lean_inc(v___x_611_);
v___x_612_ = l_Lake_Toml_elabSimpleKey(v___x_611_, v___y_601_, v___y_602_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v_keyTys_614_; lean_object* v_arrKeyTys_615_; lean_object* v_arrParents_616_; lean_object* v_currArrKey_617_; lean_object* v_currKey_618_; lean_object* v_items_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_a_613_);
lean_dec_ref_known(v___x_612_, 1);
v_keyTys_614_ = lean_ctor_get(v___y_600_, 0);
v_arrKeyTys_615_ = lean_ctor_get(v___y_600_, 1);
v_arrParents_616_ = lean_ctor_get(v___y_600_, 2);
v_currArrKey_617_ = lean_ctor_get(v___y_600_, 3);
v_currKey_618_ = lean_ctor_get(v___y_600_, 4);
v_items_619_ = lean_ctor_get(v___y_600_, 5);
v___x_620_ = l_Lean_Name_str___override(v_b_599_, v_a_613_);
v___x_621_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_keyTys_614_, v___x_620_);
if (lean_obj_tag(v___x_621_) == 1)
{
lean_object* v_val_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_683_; 
v_val_622_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_683_ == 0)
{
v___x_624_ = v___x_621_;
v_isShared_625_ = v_isSharedCheck_683_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_val_622_);
lean_dec(v___x_621_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_683_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
uint8_t v___x_626_; 
v___x_626_ = lean_unbox(v_val_622_);
switch(v___x_626_)
{
case 2:
{
lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_651_; 
lean_inc_ref(v_items_619_);
lean_inc(v_currKey_618_);
lean_inc(v_arrParents_616_);
lean_inc(v_arrKeyTys_615_);
lean_del_object(v___x_624_);
lean_dec(v_val_622_);
v_isSharedCheck_651_ = !lean_is_exclusive(v___y_600_);
if (v_isSharedCheck_651_ == 0)
{
lean_object* v_unused_652_; lean_object* v_unused_653_; lean_object* v_unused_654_; lean_object* v_unused_655_; lean_object* v_unused_656_; lean_object* v_unused_657_; 
v_unused_652_ = lean_ctor_get(v___y_600_, 5);
lean_dec(v_unused_652_);
v_unused_653_ = lean_ctor_get(v___y_600_, 4);
lean_dec(v_unused_653_);
v_unused_654_ = lean_ctor_get(v___y_600_, 3);
lean_dec(v_unused_654_);
v_unused_655_ = lean_ctor_get(v___y_600_, 2);
lean_dec(v_unused_655_);
v_unused_656_ = lean_ctor_get(v___y_600_, 1);
lean_dec(v_unused_656_);
v_unused_657_ = lean_ctor_get(v___y_600_, 0);
lean_dec(v_unused_657_);
v___x_628_ = v___y_600_;
v_isShared_629_ = v_isSharedCheck_651_;
goto v_resetjp_627_;
}
else
{
lean_dec(v___y_600_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_651_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; 
v___x_630_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_arrKeyTys_615_, v___x_620_);
if (lean_obj_tag(v___x_630_) == 1)
{
lean_object* v_val_631_; lean_object* v___x_633_; 
v_val_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_val_631_);
lean_dec_ref_known(v___x_630_, 1);
lean_inc(v___x_620_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 3, v___x_620_);
lean_ctor_set(v___x_628_, 0, v_val_631_);
v___x_633_ = v___x_628_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_val_631_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v_arrKeyTys_615_);
lean_ctor_set(v_reuseFailAlloc_634_, 2, v_arrParents_616_);
lean_ctor_set(v_reuseFailAlloc_634_, 3, v___x_620_);
lean_ctor_set(v_reuseFailAlloc_634_, 4, v_currKey_618_);
lean_ctor_set(v_reuseFailAlloc_634_, 5, v_items_619_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
v_fst_605_ = v___x_620_;
v_snd_606_ = v___x_633_;
goto v___jp_604_;
}
}
else
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
lean_dec(v___x_630_);
lean_del_object(v___x_628_);
lean_dec_ref(v_items_619_);
lean_dec(v_currKey_618_);
lean_dec(v_arrParents_616_);
lean_dec(v_arrKeyTys_615_);
v___x_635_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1);
lean_inc(v___x_620_);
v___x_636_ = l_Lean_MessageData_ofName(v___x_620_);
v___x_637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_637_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
v___x_640_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(v___x_639_, v___y_601_, v___y_602_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v_snd_642_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
lean_dec_ref_known(v___x_640_, 1);
v_snd_642_ = lean_ctor_get(v_a_641_, 1);
lean_inc(v_snd_642_);
lean_dec(v_a_641_);
v_fst_605_ = v___x_620_;
v_snd_606_ = v_snd_642_;
goto v___jp_604_;
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_dec(v___x_620_);
v_a_643_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_640_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_640_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
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
case 1:
{
lean_del_object(v___x_624_);
lean_dec(v_val_622_);
v_fst_605_ = v___x_620_;
v_snd_606_ = v___y_600_;
goto v___jp_604_;
}
case 4:
{
lean_del_object(v___x_624_);
lean_dec(v_val_622_);
v_fst_605_ = v___x_620_;
v_snd_606_ = v___y_600_;
goto v___jp_604_;
}
case 3:
{
lean_del_object(v___x_624_);
lean_dec(v_val_622_);
v_fst_605_ = v___x_620_;
v_snd_606_ = v___y_600_;
goto v___jp_604_;
}
default: 
{
lean_object* v___x_658_; uint8_t v___x_659_; lean_object* v___x_660_; lean_object* v___x_662_; 
v___x_658_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1);
v___x_659_ = lean_unbox(v_val_622_);
lean_dec(v_val_622_);
v___x_660_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v___x_659_);
if (v_isShared_625_ == 0)
{
lean_ctor_set_tag(v___x_624_, 3);
lean_ctor_set(v___x_624_, 0, v___x_660_);
v___x_662_ = v___x_624_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_660_);
v___x_662_ = v_reuseFailAlloc_682_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_663_ = l_Lean_MessageData_ofFormat(v___x_662_);
v___x_664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_658_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
v___x_665_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3);
v___x_666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_664_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
lean_inc(v___x_620_);
v___x_667_ = l_Lean_MessageData_ofName(v___x_620_);
v___x_668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_666_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_668_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_611_, v___x_670_, v___y_600_, v___y_601_, v___y_602_);
lean_dec_ref(v___y_600_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v_a_672_; lean_object* v_snd_673_; 
v_a_672_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_a_672_);
lean_dec_ref_known(v___x_671_, 1);
v_snd_673_ = lean_ctor_get(v_a_672_, 1);
lean_inc(v_snd_673_);
lean_dec(v_a_672_);
v_fst_605_ = v___x_620_;
v_snd_606_ = v_snd_673_;
goto v___jp_604_;
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_dec(v___x_620_);
v_a_674_ = lean_ctor_get(v___x_671_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_671_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_671_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
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
lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_693_; 
lean_inc_ref(v_items_619_);
lean_inc(v_currKey_618_);
lean_inc(v_currArrKey_617_);
lean_inc(v_arrParents_616_);
lean_inc(v_arrKeyTys_615_);
lean_inc(v_keyTys_614_);
lean_dec(v___x_621_);
v_isSharedCheck_693_ = !lean_is_exclusive(v___y_600_);
if (v_isSharedCheck_693_ == 0)
{
lean_object* v_unused_694_; lean_object* v_unused_695_; lean_object* v_unused_696_; lean_object* v_unused_697_; lean_object* v_unused_698_; lean_object* v_unused_699_; 
v_unused_694_ = lean_ctor_get(v___y_600_, 5);
lean_dec(v_unused_694_);
v_unused_695_ = lean_ctor_get(v___y_600_, 4);
lean_dec(v_unused_695_);
v_unused_696_ = lean_ctor_get(v___y_600_, 3);
lean_dec(v_unused_696_);
v_unused_697_ = lean_ctor_get(v___y_600_, 2);
lean_dec(v_unused_697_);
v_unused_698_ = lean_ctor_get(v___y_600_, 1);
lean_dec(v_unused_698_);
v_unused_699_ = lean_ctor_get(v___y_600_, 0);
lean_dec(v_unused_699_);
v___x_685_ = v___y_600_;
v_isShared_686_ = v_isSharedCheck_693_;
goto v_resetjp_684_;
}
else
{
lean_dec(v___y_600_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_693_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
uint8_t v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_687_ = 4;
v___x_688_ = lean_box(v___x_687_);
lean_inc(v___x_620_);
v___x_689_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_620_, v___x_688_, v_keyTys_614_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 0, v___x_689_);
v___x_691_ = v___x_685_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_arrKeyTys_615_);
lean_ctor_set(v_reuseFailAlloc_692_, 2, v_arrParents_616_);
lean_ctor_set(v_reuseFailAlloc_692_, 3, v_currArrKey_617_);
lean_ctor_set(v_reuseFailAlloc_692_, 4, v_currKey_618_);
lean_ctor_set(v_reuseFailAlloc_692_, 5, v_items_619_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
v_fst_605_ = v___x_620_;
v_snd_606_ = v___x_691_;
goto v___jp_604_;
}
}
}
}
else
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
lean_dec_ref(v___y_600_);
lean_dec(v_b_599_);
v_a_700_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_612_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_612_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_a_700_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
else
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_708_, 0, v_b_599_);
lean_ctor_set(v___x_708_, 1, v___y_600_);
v___x_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
return v___x_709_;
}
v___jp_604_:
{
size_t v___x_607_; size_t v___x_608_; 
v___x_607_ = ((size_t)1ULL);
v___x_608_ = lean_usize_add(v_i_597_, v___x_607_);
v_i_597_ = v___x_608_;
v_b_599_ = v_fst_605_;
v___y_600_ = v_snd_606_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___boxed(lean_object* v_as_710_, lean_object* v_i_711_, lean_object* v_stop_712_, lean_object* v_b_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
size_t v_i_boxed_718_; size_t v_stop_boxed_719_; lean_object* v_res_720_; 
v_i_boxed_718_ = lean_unbox_usize(v_i_711_);
lean_dec(v_i_711_);
v_stop_boxed_719_ = lean_unbox_usize(v_stop_712_);
lean_dec(v_stop_712_);
v_res_720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0(v_as_710_, v_i_boxed_718_, v_stop_boxed_719_, v_b_713_, v___y_714_, v___y_715_, v___y_716_);
lean_dec(v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec_ref(v_as_710_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys(lean_object* v_ks_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_keyTys_726_; lean_object* v_arrKeyTys_727_; lean_object* v_arrParents_728_; lean_object* v_currArrKey_729_; lean_object* v_currKey_730_; lean_object* v_items_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_759_; 
v_keyTys_726_ = lean_ctor_get(v_a_722_, 0);
v_arrKeyTys_727_ = lean_ctor_get(v_a_722_, 1);
v_arrParents_728_ = lean_ctor_get(v_a_722_, 2);
v_currArrKey_729_ = lean_ctor_get(v_a_722_, 3);
v_currKey_730_ = lean_ctor_get(v_a_722_, 4);
v_items_731_ = lean_ctor_get(v_a_722_, 5);
v_isSharedCheck_759_ = !lean_is_exclusive(v_a_722_);
if (v_isSharedCheck_759_ == 0)
{
v___x_733_ = v_a_722_;
v_isShared_734_ = v_isSharedCheck_759_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_items_731_);
lean_inc(v_currKey_730_);
lean_inc(v_currArrKey_729_);
lean_inc(v_arrParents_728_);
lean_inc(v_arrKeyTys_727_);
lean_inc(v_keyTys_726_);
lean_dec(v_a_722_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_759_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v_arrKeyTys_735_; lean_object* v___x_736_; lean_object* v___y_738_; lean_object* v___x_756_; 
v_arrKeyTys_735_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_currArrKey_729_, v_keyTys_726_, v_arrKeyTys_727_);
v___x_736_ = lean_box(0);
v___x_756_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_arrKeyTys_735_, v___x_736_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v___x_757_; 
v___x_757_ = lean_box(1);
v___y_738_ = v___x_757_;
goto v___jp_737_;
}
else
{
lean_object* v_val_758_; 
v_val_758_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_val_758_);
lean_dec_ref_known(v___x_756_, 1);
v___y_738_ = v_val_758_;
goto v___jp_737_;
}
v___jp_737_:
{
lean_object* v___x_740_; 
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 3, v___x_736_);
lean_ctor_set(v___x_733_, 1, v_arrKeyTys_735_);
lean_ctor_set(v___x_733_, 0, v___y_738_);
v___x_740_ = v___x_733_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v___y_738_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v_arrKeyTys_735_);
lean_ctor_set(v_reuseFailAlloc_755_, 2, v_arrParents_728_);
lean_ctor_set(v_reuseFailAlloc_755_, 3, v___x_736_);
lean_ctor_set(v_reuseFailAlloc_755_, 4, v_currKey_730_);
lean_ctor_set(v_reuseFailAlloc_755_, 5, v_items_731_);
v___x_740_ = v_reuseFailAlloc_755_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = lean_array_get_size(v_ks_721_);
v___x_743_ = lean_nat_dec_lt(v___x_741_, v___x_742_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_736_);
lean_ctor_set(v___x_744_, 1, v___x_740_);
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
return v___x_745_;
}
else
{
uint8_t v___x_746_; 
v___x_746_ = lean_nat_dec_le(v___x_742_, v___x_742_);
if (v___x_746_ == 0)
{
if (v___x_743_ == 0)
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_747_, 0, v___x_736_);
lean_ctor_set(v___x_747_, 1, v___x_740_);
v___x_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
return v___x_748_;
}
else
{
size_t v___x_749_; size_t v___x_750_; lean_object* v___x_751_; 
v___x_749_ = ((size_t)0ULL);
v___x_750_ = lean_usize_of_nat(v___x_742_);
v___x_751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0(v_ks_721_, v___x_749_, v___x_750_, v___x_736_, v___x_740_, v_a_723_, v_a_724_);
return v___x_751_;
}
}
else
{
size_t v___x_752_; size_t v___x_753_; lean_object* v___x_754_; 
v___x_752_ = ((size_t)0ULL);
v___x_753_ = lean_usize_of_nat(v___x_742_);
v___x_754_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0(v_ks_721_, v___x_752_, v___x_753_, v___x_736_, v___x_740_, v_a_723_, v_a_724_);
return v___x_754_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys___boxed(lean_object* v_ks_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys(v_ks_760_, v_a_761_, v_a_762_, v_a_763_);
lean_dec(v_a_763_);
lean_dec_ref(v_a_762_);
lean_dec_ref(v_ks_760_);
return v_res_765_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0(void){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Lake_Toml_RBDict_empty___redArg();
return v___x_766_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4(void){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__3));
v___x_774_ = l_Lean_stringToMessageData(v___x_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable(lean_object* v_x_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_){
_start:
{
lean_object* v___y_781_; lean_object* v_keyTys_782_; lean_object* v_arrKeyTys_783_; lean_object* v_arrParents_784_; lean_object* v_currArrKey_785_; lean_object* v_items_786_; lean_object* v_toCold_798_; lean_object* v_currRecDepth_799_; lean_object* v_ref_800_; uint8_t v_diag_801_; uint8_t v_suppressElabErrors_802_; lean_object* v___x_803_; uint8_t v___x_804_; lean_object* v_ref_805_; lean_object* v___x_806_; 
v_toCold_798_ = lean_ctor_get(v_a_777_, 0);
v_currRecDepth_799_ = lean_ctor_get(v_a_777_, 1);
v_ref_800_ = lean_ctor_get(v_a_777_, 2);
v_diag_801_ = lean_ctor_get_uint8(v_a_777_, sizeof(void*)*3);
v_suppressElabErrors_802_ = lean_ctor_get_uint8(v_a_777_, sizeof(void*)*3 + 1);
v___x_803_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2));
lean_inc(v_x_775_);
v___x_804_ = l_Lean_Syntax_isOfKind(v_x_775_, v___x_803_);
v_ref_805_ = l_Lean_replaceRef(v_x_775_, v_ref_800_);
lean_inc(v_currRecDepth_799_);
lean_inc_ref(v_toCold_798_);
v___x_806_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_806_, 0, v_toCold_798_);
lean_ctor_set(v___x_806_, 1, v_currRecDepth_799_);
lean_ctor_set(v___x_806_, 2, v_ref_805_);
lean_ctor_set_uint8(v___x_806_, sizeof(void*)*3, v_diag_801_);
lean_ctor_set_uint8(v___x_806_, sizeof(void*)*3 + 1, v_suppressElabErrors_802_);
if (v___x_804_ == 0)
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4);
v___x_808_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_x_775_, v___x_807_, v_a_776_, v___x_806_, v_a_778_);
lean_dec_ref_known(v___x_806_, 3);
lean_dec_ref(v_a_776_);
lean_dec(v_x_775_);
return v___x_808_;
}
else
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___y_812_; lean_object* v___x_880_; uint8_t v___x_881_; 
v___x_809_ = lean_unsigned_to_nat(1u);
v___x_810_ = l_Lean_Syntax_getArg(v_x_775_, v___x_809_);
v___x_880_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5));
lean_inc(v___x_810_);
v___x_881_ = l_Lean_Syntax_isOfKind(v___x_810_, v___x_880_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; lean_object* v___x_883_; 
lean_dec(v_x_775_);
v___x_882_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_883_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_810_, v___x_882_, v_a_776_, v___x_806_, v_a_778_);
lean_dec_ref_known(v___x_806_, 3);
lean_dec_ref(v_a_776_);
lean_dec(v___x_810_);
return v___x_883_;
}
else
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
v___x_884_ = lean_unsigned_to_nat(0u);
v___x_885_ = l_Lean_Syntax_getArg(v___x_810_, v___x_884_);
v___x_886_ = l_Lean_Syntax_getArgs(v___x_885_);
lean_dec(v___x_885_);
v___x_887_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8));
v___x_888_ = lean_array_get_size(v___x_886_);
v___x_889_ = lean_nat_dec_lt(v___x_884_, v___x_888_);
if (v___x_889_ == 0)
{
lean_dec_ref(v___x_886_);
v___y_812_ = v___x_887_;
goto v___jp_811_;
}
else
{
lean_object* v___x_890_; lean_object* v___x_891_; size_t v___x_892_; size_t v___x_893_; lean_object* v___x_894_; lean_object* v_snd_895_; 
v___x_890_ = lean_box(v___x_889_);
v___x_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
lean_ctor_set(v___x_891_, 1, v___x_887_);
v___x_892_ = ((size_t)0ULL);
v___x_893_ = lean_usize_of_nat(v___x_888_);
v___x_894_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(v___x_881_, v___x_886_, v___x_892_, v___x_893_, v___x_891_);
lean_dec_ref(v___x_886_);
v_snd_895_ = lean_ctor_get(v___x_894_, 1);
lean_inc(v_snd_895_);
lean_dec_ref(v___x_894_);
v___y_812_ = v_snd_895_;
goto v___jp_811_;
}
}
v___jp_811_:
{
size_t v_sz_813_; size_t v___x_814_; lean_object* v___x_815_; 
v_sz_813_ = lean_array_size(v___y_812_);
v___x_814_ = ((size_t)0ULL);
v___x_815_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(v_sz_813_, v___x_814_, v___y_812_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v___x_816_; lean_object* v___x_817_; 
lean_dec(v_x_775_);
v___x_816_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_817_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_810_, v___x_816_, v_a_776_, v___x_806_, v_a_778_);
lean_dec_ref_known(v___x_806_, 3);
lean_dec_ref(v_a_776_);
lean_dec(v___x_810_);
return v___x_817_;
}
else
{
lean_object* v_val_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v_tailKey_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec(v___x_810_);
v_val_818_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_val_818_);
lean_dec_ref_known(v___x_815_, 1);
v___x_819_ = lean_box(0);
v___x_820_ = lean_array_get_size(v_val_818_);
v___x_821_ = lean_nat_sub(v___x_820_, v___x_809_);
v_tailKey_822_ = lean_array_get(v___x_819_, v_val_818_, v___x_821_);
lean_dec(v___x_821_);
v___x_823_ = lean_array_pop(v_val_818_);
v___x_824_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys(v___x_823_, v_a_776_, v___x_806_, v_a_778_);
lean_dec_ref(v___x_823_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v_fst_826_; lean_object* v_snd_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_871_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_825_);
lean_dec_ref_known(v___x_824_, 1);
v_fst_826_ = lean_ctor_get(v_a_825_, 0);
v_snd_827_ = lean_ctor_get(v_a_825_, 1);
v_isSharedCheck_871_ = !lean_is_exclusive(v_a_825_);
if (v_isSharedCheck_871_ == 0)
{
v___x_829_ = v_a_825_;
v_isShared_830_ = v_isSharedCheck_871_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_snd_827_);
lean_inc(v_fst_826_);
lean_dec(v_a_825_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_871_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_831_; 
lean_inc(v_tailKey_822_);
v___x_831_ = l_Lake_Toml_elabSimpleKey(v_tailKey_822_, v___x_806_, v_a_778_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v_a_832_; lean_object* v_keyTys_833_; lean_object* v_arrKeyTys_834_; lean_object* v_arrParents_835_; lean_object* v_currArrKey_836_; lean_object* v_items_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v_a_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_832_);
lean_dec_ref_known(v___x_831_, 1);
v_keyTys_833_ = lean_ctor_get(v_snd_827_, 0);
v_arrKeyTys_834_ = lean_ctor_get(v_snd_827_, 1);
v_arrParents_835_ = lean_ctor_get(v_snd_827_, 2);
v_currArrKey_836_ = lean_ctor_get(v_snd_827_, 3);
v_items_837_ = lean_ctor_get(v_snd_827_, 5);
v___x_838_ = l_Lean_Name_str___override(v_fst_826_, v_a_832_);
v___x_839_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_keyTys_833_, v___x_838_);
if (lean_obj_tag(v___x_839_) == 1)
{
lean_object* v_val_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_862_; 
v_val_840_ = lean_ctor_get(v___x_839_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_862_ == 0)
{
v___x_842_ = v___x_839_;
v_isShared_843_ = v_isSharedCheck_862_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_val_840_);
lean_dec(v___x_839_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_862_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
uint8_t v___x_844_; 
v___x_844_ = lean_unbox(v_val_840_);
if (v___x_844_ == 4)
{
lean_inc_ref(v_items_837_);
lean_inc(v_currArrKey_836_);
lean_inc(v_arrParents_835_);
lean_inc(v_arrKeyTys_834_);
lean_inc(v_keyTys_833_);
lean_del_object(v___x_842_);
lean_dec(v_val_840_);
lean_del_object(v___x_829_);
lean_dec(v_snd_827_);
lean_dec(v_tailKey_822_);
lean_dec_ref_known(v___x_806_, 3);
v___y_781_ = v___x_838_;
v_keyTys_782_ = v_keyTys_833_;
v_arrKeyTys_783_ = v_arrKeyTys_834_;
v_arrParents_784_ = v_arrParents_835_;
v_currArrKey_785_ = v_currArrKey_836_;
v_items_786_ = v_items_837_;
goto v___jp_780_;
}
else
{
lean_object* v___x_845_; uint8_t v___x_846_; lean_object* v___x_847_; lean_object* v___x_849_; 
lean_dec(v_x_775_);
v___x_845_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1);
v___x_846_ = lean_unbox(v_val_840_);
lean_dec(v_val_840_);
v___x_847_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v___x_846_);
if (v_isShared_843_ == 0)
{
lean_ctor_set_tag(v___x_842_, 3);
lean_ctor_set(v___x_842_, 0, v___x_847_);
v___x_849_ = v___x_842_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_847_);
v___x_849_ = v_reuseFailAlloc_861_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_850_ = l_Lean_MessageData_ofFormat(v___x_849_);
if (v_isShared_830_ == 0)
{
lean_ctor_set_tag(v___x_829_, 7);
lean_ctor_set(v___x_829_, 1, v___x_850_);
lean_ctor_set(v___x_829_, 0, v___x_845_);
v___x_852_ = v___x_829_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_845_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v___x_850_);
v___x_852_ = v_reuseFailAlloc_860_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_853_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3);
v___x_854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_854_, 0, v___x_852_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
v___x_855_ = l_Lean_MessageData_ofName(v___x_838_);
v___x_856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_856_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
v___x_859_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_tailKey_822_, v___x_858_, v_snd_827_, v___x_806_, v_a_778_);
lean_dec_ref_known(v___x_806_, 3);
lean_dec(v_snd_827_);
lean_dec(v_tailKey_822_);
return v___x_859_;
}
}
}
}
}
else
{
lean_inc_ref(v_items_837_);
lean_inc(v_currArrKey_836_);
lean_inc(v_arrParents_835_);
lean_inc(v_arrKeyTys_834_);
lean_inc(v_keyTys_833_);
lean_dec(v___x_839_);
lean_del_object(v___x_829_);
lean_dec(v_snd_827_);
lean_dec(v_tailKey_822_);
lean_dec_ref_known(v___x_806_, 3);
v___y_781_ = v___x_838_;
v_keyTys_782_ = v_keyTys_833_;
v_arrKeyTys_783_ = v_arrKeyTys_834_;
v_arrParents_784_ = v_arrParents_835_;
v_currArrKey_785_ = v_currArrKey_836_;
v_items_786_ = v_items_837_;
goto v___jp_780_;
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
lean_del_object(v___x_829_);
lean_dec(v_snd_827_);
lean_dec(v_fst_826_);
lean_dec(v_tailKey_822_);
lean_dec_ref_known(v___x_806_, 3);
lean_dec(v_x_775_);
v_a_863_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_831_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_831_);
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
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
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
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
lean_dec(v_tailKey_822_);
lean_dec_ref_known(v___x_806_, 3);
lean_dec(v_x_775_);
v_a_872_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_824_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_824_);
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
}
v___jp_780_:
{
lean_object* v___x_787_; uint8_t v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_787_ = lean_box(0);
v___x_788_ = 1;
v___x_789_ = lean_box(v___x_788_);
lean_inc_n(v___y_781_, 2);
v___x_790_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___y_781_, v___x_789_, v_keyTys_782_);
v___x_791_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
lean_inc(v_x_775_);
v___x_792_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_792_, 0, v_x_775_);
lean_ctor_set(v___x_792_, 1, v___x_791_);
v___x_793_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_793_, 0, v_x_775_);
lean_ctor_set(v___x_793_, 1, v___y_781_);
lean_ctor_set(v___x_793_, 2, v___x_792_);
v___x_794_ = lean_array_push(v_items_786_, v___x_793_);
v___x_795_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_795_, 0, v___x_790_);
lean_ctor_set(v___x_795_, 1, v_arrKeyTys_783_);
lean_ctor_set(v___x_795_, 2, v_arrParents_784_);
lean_ctor_set(v___x_795_, 3, v_currArrKey_785_);
lean_ctor_set(v___x_795_, 4, v___y_781_);
lean_ctor_set(v___x_795_, 5, v___x_794_);
v___x_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_787_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
return v___x_797_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___boxed(lean_object* v_x_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable(v_x_896_, v_a_897_, v_a_898_, v_a_899_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
return v_res_901_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3(void){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__2));
v___x_909_ = l_Lean_stringToMessageData(v___x_908_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable(lean_object* v_x_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_){
_start:
{
lean_object* v_toCold_915_; lean_object* v_currRecDepth_916_; lean_object* v_ref_917_; uint8_t v_diag_918_; uint8_t v_suppressElabErrors_919_; lean_object* v___x_920_; uint8_t v___x_921_; lean_object* v_ref_922_; lean_object* v___x_923_; lean_object* v___y_925_; 
v_toCold_915_ = lean_ctor_get(v_a_912_, 0);
v_currRecDepth_916_ = lean_ctor_get(v_a_912_, 1);
v_ref_917_ = lean_ctor_get(v_a_912_, 2);
v_diag_918_ = lean_ctor_get_uint8(v_a_912_, sizeof(void*)*3);
v_suppressElabErrors_919_ = lean_ctor_get_uint8(v_a_912_, sizeof(void*)*3 + 1);
v___x_920_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1));
lean_inc(v_x_910_);
v___x_921_ = l_Lean_Syntax_isOfKind(v_x_910_, v___x_920_);
v_ref_922_ = l_Lean_replaceRef(v_x_910_, v_ref_917_);
lean_inc(v_currRecDepth_916_);
lean_inc_ref(v_toCold_915_);
v___x_923_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_923_, 0, v_toCold_915_);
lean_ctor_set(v___x_923_, 1, v_currRecDepth_916_);
lean_ctor_set(v___x_923_, 2, v_ref_922_);
lean_ctor_set_uint8(v___x_923_, sizeof(void*)*3, v_diag_918_);
lean_ctor_set_uint8(v___x_923_, sizeof(void*)*3 + 1, v_suppressElabErrors_919_);
if (v___x_921_ == 0)
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3);
v___x_933_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_x_910_, v___x_932_, v_a_911_, v___x_923_, v_a_913_);
lean_dec_ref_known(v___x_923_, 3);
lean_dec_ref(v_a_911_);
lean_dec(v_x_910_);
return v___x_933_;
}
else
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; uint8_t v___x_937_; lean_object* v___y_939_; 
v___x_934_ = lean_unsigned_to_nat(2u);
v___x_935_ = l_Lean_Syntax_getArg(v_x_910_, v___x_934_);
v___x_936_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5));
lean_inc(v___x_935_);
v___x_937_ = l_Lean_Syntax_isOfKind(v___x_935_, v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
lean_dec(v___x_935_);
v___x_1073_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_1074_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_x_910_, v___x_1073_, v_a_911_, v___x_923_, v_a_913_);
lean_dec_ref_known(v___x_923_, 3);
lean_dec_ref(v_a_911_);
lean_dec(v_x_910_);
return v___x_1074_;
}
else
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1075_ = lean_unsigned_to_nat(0u);
v___x_1076_ = l_Lean_Syntax_getArg(v___x_935_, v___x_1075_);
lean_dec(v___x_935_);
v___x_1077_ = l_Lean_Syntax_getArgs(v___x_1076_);
lean_dec(v___x_1076_);
v___x_1078_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8));
v___x_1079_ = lean_array_get_size(v___x_1077_);
v___x_1080_ = lean_nat_dec_lt(v___x_1075_, v___x_1079_);
if (v___x_1080_ == 0)
{
lean_dec_ref(v___x_1077_);
v___y_939_ = v___x_1078_;
goto v___jp_938_;
}
else
{
lean_object* v___x_1081_; lean_object* v___x_1082_; size_t v___x_1083_; size_t v___x_1084_; lean_object* v___x_1085_; lean_object* v_snd_1086_; 
v___x_1081_ = lean_box(v___x_1080_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1081_);
lean_ctor_set(v___x_1082_, 1, v___x_1078_);
v___x_1083_ = ((size_t)0ULL);
v___x_1084_ = lean_usize_of_nat(v___x_1079_);
v___x_1085_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(v___x_937_, v___x_1077_, v___x_1083_, v___x_1084_, v___x_1082_);
lean_dec_ref(v___x_1077_);
v_snd_1086_ = lean_ctor_get(v___x_1085_, 1);
lean_inc(v_snd_1086_);
lean_dec_ref(v___x_1085_);
v___y_939_ = v_snd_1086_;
goto v___jp_938_;
}
}
v___jp_938_:
{
size_t v_sz_940_; size_t v___x_941_; lean_object* v___x_942_; 
v_sz_940_ = lean_array_size(v___y_939_);
v___x_941_ = ((size_t)0ULL);
v___x_942_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(v_sz_940_, v___x_941_, v___y_939_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_944_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_x_910_, v___x_943_, v_a_911_, v___x_923_, v_a_913_);
lean_dec_ref_known(v___x_923_, 3);
lean_dec_ref(v_a_911_);
lean_dec(v_x_910_);
return v___x_944_;
}
else
{
lean_object* v_val_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v_tailKey_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v_val_945_ = lean_ctor_get(v___x_942_, 0);
lean_inc(v_val_945_);
lean_dec_ref_known(v___x_942_, 1);
v___x_946_ = lean_box(0);
v___x_947_ = lean_array_get_size(v_val_945_);
v___x_948_ = lean_unsigned_to_nat(1u);
v___x_949_ = lean_nat_sub(v___x_947_, v___x_948_);
v_tailKey_950_ = lean_array_get(v___x_946_, v_val_945_, v___x_949_);
lean_dec(v___x_949_);
v___x_951_ = lean_array_pop(v_val_945_);
v___x_952_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys(v___x_951_, v_a_911_, v___x_923_, v_a_913_);
lean_dec_ref(v___x_951_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; lean_object* v_fst_954_; lean_object* v_snd_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_1064_; 
v_a_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_952_, 1);
v_fst_954_ = lean_ctor_get(v_a_953_, 0);
v_snd_955_ = lean_ctor_get(v_a_953_, 1);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_a_953_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_957_ = v_a_953_;
v_isShared_958_ = v_isSharedCheck_1064_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_snd_955_);
lean_inc(v_fst_954_);
lean_dec(v_a_953_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_1064_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_959_; 
lean_inc(v_tailKey_950_);
v___x_959_ = l_Lake_Toml_elabSimpleKey(v_tailKey_950_, v___x_923_, v_a_913_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_1055_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_962_ = v___x_959_;
v_isShared_963_ = v_isSharedCheck_1055_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_959_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_1055_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v_keyTys_964_; lean_object* v_arrKeyTys_965_; lean_object* v_arrParents_966_; lean_object* v_currArrKey_967_; lean_object* v_items_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v_keyTys_964_ = lean_ctor_get(v_snd_955_, 0);
v_arrKeyTys_965_ = lean_ctor_get(v_snd_955_, 1);
v_arrParents_966_ = lean_ctor_get(v_snd_955_, 2);
v_currArrKey_967_ = lean_ctor_get(v_snd_955_, 3);
v_items_968_ = lean_ctor_get(v_snd_955_, 5);
v___x_969_ = l_Lean_Name_str___override(v_fst_954_, v_a_960_);
v___x_970_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_keyTys_964_, v___x_969_);
if (lean_obj_tag(v___x_970_) == 1)
{
lean_object* v_val_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_1022_; 
v_val_971_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_973_ = v___x_970_;
v_isShared_974_ = v_isSharedCheck_1022_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_val_971_);
lean_dec(v___x_970_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_1022_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
uint8_t v___x_975_; 
v___x_975_ = lean_unbox(v_val_971_);
if (v___x_975_ == 2)
{
lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_1000_; 
lean_inc_ref(v_items_968_);
lean_inc(v_arrParents_966_);
lean_inc(v_arrKeyTys_965_);
lean_del_object(v___x_973_);
lean_dec(v_val_971_);
lean_dec(v_tailKey_950_);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_snd_955_);
if (v_isSharedCheck_1000_ == 0)
{
lean_object* v_unused_1001_; lean_object* v_unused_1002_; lean_object* v_unused_1003_; lean_object* v_unused_1004_; lean_object* v_unused_1005_; lean_object* v_unused_1006_; 
v_unused_1001_ = lean_ctor_get(v_snd_955_, 5);
lean_dec(v_unused_1001_);
v_unused_1002_ = lean_ctor_get(v_snd_955_, 4);
lean_dec(v_unused_1002_);
v_unused_1003_ = lean_ctor_get(v_snd_955_, 3);
lean_dec(v_unused_1003_);
v_unused_1004_ = lean_ctor_get(v_snd_955_, 2);
lean_dec(v_unused_1004_);
v_unused_1005_ = lean_ctor_get(v_snd_955_, 1);
lean_dec(v_unused_1005_);
v_unused_1006_ = lean_ctor_get(v_snd_955_, 0);
lean_dec(v_unused_1006_);
v___x_977_ = v_snd_955_;
v_isShared_978_ = v_isSharedCheck_1000_;
goto v_resetjp_976_;
}
else
{
lean_dec(v_snd_955_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_1000_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_979_; 
v___x_979_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_arrParents_966_, v___x_969_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_del_object(v___x_977_);
lean_dec_ref(v_items_968_);
lean_dec(v_arrParents_966_);
lean_dec(v_arrKeyTys_965_);
lean_del_object(v___x_962_);
lean_del_object(v___x_957_);
lean_dec(v_x_910_);
v___y_925_ = v___x_969_;
goto v___jp_924_;
}
else
{
lean_object* v_val_980_; lean_object* v___x_981_; 
v_val_980_ = lean_ctor_get(v___x_979_, 0);
lean_inc(v_val_980_);
lean_dec_ref_known(v___x_979_, 1);
v___x_981_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_arrKeyTys_965_, v_val_980_);
lean_dec(v_val_980_);
if (lean_obj_tag(v___x_981_) == 1)
{
lean_object* v_val_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_992_; 
lean_dec_ref_known(v___x_923_, 3);
v_val_982_ = lean_ctor_get(v___x_981_, 0);
lean_inc(v_val_982_);
lean_dec_ref_known(v___x_981_, 1);
v___x_983_ = lean_box(0);
v___x_984_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
lean_inc_n(v_x_910_, 2);
v___x_985_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_985_, 0, v_x_910_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = lean_mk_empty_array_with_capacity(v___x_948_);
v___x_987_ = lean_array_push(v___x_986_, v___x_985_);
v___x_988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_988_, 0, v_x_910_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
lean_inc_n(v___x_969_, 2);
v___x_989_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_989_, 0, v_x_910_);
lean_ctor_set(v___x_989_, 1, v___x_969_);
lean_ctor_set(v___x_989_, 2, v___x_988_);
v___x_990_ = lean_array_push(v_items_968_, v___x_989_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 5, v___x_990_);
lean_ctor_set(v___x_977_, 4, v___x_969_);
lean_ctor_set(v___x_977_, 3, v___x_969_);
lean_ctor_set(v___x_977_, 0, v_val_982_);
v___x_992_ = v___x_977_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_val_982_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v_arrKeyTys_965_);
lean_ctor_set(v_reuseFailAlloc_999_, 2, v_arrParents_966_);
lean_ctor_set(v_reuseFailAlloc_999_, 3, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_999_, 4, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_999_, 5, v___x_990_);
v___x_992_ = v_reuseFailAlloc_999_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
lean_object* v___x_994_; 
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 1, v___x_992_);
lean_ctor_set(v___x_957_, 0, v___x_983_);
v___x_994_ = v___x_957_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v___x_983_);
lean_ctor_set(v_reuseFailAlloc_998_, 1, v___x_992_);
v___x_994_ = v_reuseFailAlloc_998_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
lean_object* v___x_996_; 
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_994_);
v___x_996_ = v___x_962_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_994_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
else
{
lean_dec(v___x_981_);
lean_del_object(v___x_977_);
lean_dec_ref(v_items_968_);
lean_dec(v_arrParents_966_);
lean_dec(v_arrKeyTys_965_);
lean_del_object(v___x_962_);
lean_del_object(v___x_957_);
lean_dec(v_x_910_);
v___y_925_ = v___x_969_;
goto v___jp_924_;
}
}
}
}
else
{
lean_object* v___x_1007_; uint8_t v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1018_; 
lean_del_object(v___x_962_);
lean_del_object(v___x_957_);
lean_dec(v_x_910_);
v___x_1007_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__0));
v___x_1008_ = lean_unbox(v_val_971_);
lean_dec(v_val_971_);
v___x_1009_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v___x_1008_);
v___x_1010_ = lean_string_append(v___x_1007_, v___x_1009_);
lean_dec_ref(v___x_1009_);
v___x_1011_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__2));
v___x_1012_ = lean_string_append(v___x_1010_, v___x_1011_);
v___x_1013_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_969_, v___x_937_);
v___x_1014_ = lean_string_append(v___x_1012_, v___x_1013_);
lean_dec_ref(v___x_1013_);
v___x_1015_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__4));
v___x_1016_ = lean_string_append(v___x_1014_, v___x_1015_);
if (v_isShared_974_ == 0)
{
lean_ctor_set_tag(v___x_973_, 3);
lean_ctor_set(v___x_973_, 0, v___x_1016_);
v___x_1018_ = v___x_973_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = l_Lean_MessageData_ofFormat(v___x_1018_);
v___x_1020_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_tailKey_950_, v___x_1019_, v_snd_955_, v___x_923_, v_a_913_);
lean_dec_ref_known(v___x_923_, 3);
lean_dec(v_snd_955_);
lean_dec(v_tailKey_950_);
return v___x_1020_;
}
}
}
}
else
{
lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1048_; 
lean_inc_ref(v_items_968_);
lean_inc(v_currArrKey_967_);
lean_inc(v_arrParents_966_);
lean_inc(v_arrKeyTys_965_);
lean_inc(v_keyTys_964_);
lean_dec(v___x_970_);
lean_dec(v_tailKey_950_);
lean_dec_ref_known(v___x_923_, 3);
v_isSharedCheck_1048_ = !lean_is_exclusive(v_snd_955_);
if (v_isSharedCheck_1048_ == 0)
{
lean_object* v_unused_1049_; lean_object* v_unused_1050_; lean_object* v_unused_1051_; lean_object* v_unused_1052_; lean_object* v_unused_1053_; lean_object* v_unused_1054_; 
v_unused_1049_ = lean_ctor_get(v_snd_955_, 5);
lean_dec(v_unused_1049_);
v_unused_1050_ = lean_ctor_get(v_snd_955_, 4);
lean_dec(v_unused_1050_);
v_unused_1051_ = lean_ctor_get(v_snd_955_, 3);
lean_dec(v_unused_1051_);
v_unused_1052_ = lean_ctor_get(v_snd_955_, 2);
lean_dec(v_unused_1052_);
v_unused_1053_ = lean_ctor_get(v_snd_955_, 1);
lean_dec(v_unused_1053_);
v_unused_1054_ = lean_ctor_get(v_snd_955_, 0);
lean_dec(v_unused_1054_);
v___x_1024_ = v_snd_955_;
v_isShared_1025_ = v_isSharedCheck_1048_;
goto v_resetjp_1023_;
}
else
{
lean_dec(v_snd_955_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1048_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1026_; uint8_t v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1040_; 
v___x_1026_ = lean_box(0);
v___x_1027_ = 2;
v___x_1028_ = lean_box(v___x_1027_);
lean_inc_n(v___x_969_, 4);
v___x_1029_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_969_, v___x_1028_, v_keyTys_964_);
lean_inc(v___x_1029_);
lean_inc(v_currArrKey_967_);
v___x_1030_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_currArrKey_967_, v___x_1029_, v_arrKeyTys_965_);
v___x_1031_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_969_, v_currArrKey_967_, v_arrParents_966_);
v___x_1032_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
lean_inc_n(v_x_910_, 2);
v___x_1033_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1033_, 0, v_x_910_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
v___x_1034_ = lean_mk_empty_array_with_capacity(v___x_948_);
v___x_1035_ = lean_array_push(v___x_1034_, v___x_1033_);
v___x_1036_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1036_, 0, v_x_910_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1037_, 0, v_x_910_);
lean_ctor_set(v___x_1037_, 1, v___x_969_);
lean_ctor_set(v___x_1037_, 2, v___x_1036_);
v___x_1038_ = lean_array_push(v_items_968_, v___x_1037_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 5, v___x_1038_);
lean_ctor_set(v___x_1024_, 4, v___x_969_);
lean_ctor_set(v___x_1024_, 3, v___x_969_);
lean_ctor_set(v___x_1024_, 2, v___x_1031_);
lean_ctor_set(v___x_1024_, 1, v___x_1030_);
lean_ctor_set(v___x_1024_, 0, v___x_1029_);
v___x_1040_ = v___x_1024_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v___x_1029_);
lean_ctor_set(v_reuseFailAlloc_1047_, 1, v___x_1030_);
lean_ctor_set(v_reuseFailAlloc_1047_, 2, v___x_1031_);
lean_ctor_set(v_reuseFailAlloc_1047_, 3, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_1047_, 4, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_1047_, 5, v___x_1038_);
v___x_1040_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1042_; 
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 1, v___x_1040_);
lean_ctor_set(v___x_957_, 0, v___x_1026_);
v___x_1042_ = v___x_957_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v___x_1026_);
lean_ctor_set(v_reuseFailAlloc_1046_, 1, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
lean_object* v___x_1044_; 
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_1042_);
v___x_1044_ = v___x_962_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1042_);
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
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_del_object(v___x_957_);
lean_dec(v_snd_955_);
lean_dec(v_fst_954_);
lean_dec(v_tailKey_950_);
lean_dec_ref_known(v___x_923_, 3);
lean_dec(v_x_910_);
v_a_1056_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_959_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_959_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
}
else
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1072_; 
lean_dec(v_tailKey_950_);
lean_dec_ref_known(v___x_923_, 3);
lean_dec(v_x_910_);
v_a_1065_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1067_ = v___x_952_;
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_952_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1070_; 
if (v_isShared_1068_ == 0)
{
v___x_1070_ = v___x_1067_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_a_1065_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
}
}
v___jp_924_:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_926_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1);
v___x_927_ = l_Lean_MessageData_ofName(v___y_925_);
v___x_928_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_928_, 0, v___x_926_);
lean_ctor_set(v___x_928_, 1, v___x_927_);
v___x_929_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_930_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_928_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(v___x_930_, v___x_923_, v_a_913_);
lean_dec_ref_known(v___x_923_, 3);
return v___x_931_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___boxed(lean_object* v_x_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable(v_x_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
lean_dec(v_a_1090_);
lean_dec_ref(v_a_1089_);
return v_res_1092_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1(void){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__0));
v___x_1095_ = l_Lean_stringToMessageData(v___x_1094_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression(lean_object* v_x_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_){
_start:
{
lean_object* v___x_1101_; uint8_t v___x_1102_; 
v___x_1101_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1));
lean_inc(v_x_1096_);
v___x_1102_ = l_Lean_Syntax_isOfKind(v_x_1096_, v___x_1101_);
if (v___x_1102_ == 0)
{
lean_object* v___x_1103_; uint8_t v___x_1104_; 
v___x_1103_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2));
lean_inc(v_x_1096_);
v___x_1104_ = l_Lean_Syntax_isOfKind(v_x_1096_, v___x_1103_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1105_; uint8_t v___x_1106_; 
v___x_1105_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1));
lean_inc(v_x_1096_);
v___x_1106_ = l_Lean_Syntax_isOfKind(v_x_1096_, v___x_1105_);
if (v___x_1106_ == 0)
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1);
v___x_1108_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_x_1096_, v___x_1107_, v_a_1097_, v_a_1098_, v_a_1099_);
lean_dec_ref(v_a_1097_);
lean_dec(v_x_1096_);
return v___x_1108_;
}
else
{
lean_object* v___x_1109_; 
v___x_1109_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable(v_x_1096_, v_a_1097_, v_a_1098_, v_a_1099_);
return v___x_1109_;
}
}
else
{
lean_object* v___x_1110_; 
v___x_1110_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable(v_x_1096_, v_a_1097_, v_a_1098_, v_a_1099_);
return v___x_1110_;
}
}
else
{
lean_object* v___x_1111_; 
v___x_1111_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval(v_x_1096_, v_a_1097_, v_a_1098_, v_a_1099_);
return v___x_1111_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___boxed(lean_object* v_x_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression(v_x_1112_, v_a_1113_, v_a_1114_, v_a_1115_);
lean_dec(v_a_1115_);
lean_dec_ref(v_a_1114_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0(lean_object* v_ref_1119_, lean_object* v_as_1120_, size_t v_i_1121_, size_t v_stop_1122_, lean_object* v_b_1123_){
_start:
{
lean_object* v___y_1125_; uint8_t v___x_1129_; 
v___x_1129_ = lean_usize_dec_eq(v_i_1121_, v_stop_1122_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; lean_object* v_fst_1131_; lean_object* v_snd_1132_; lean_object* v___x_1133_; 
v___x_1130_ = lean_array_uget_borrowed(v_as_1120_, v_i_1121_);
v_fst_1131_ = lean_ctor_get(v___x_1130_, 0);
v_snd_1132_ = lean_ctor_get(v___x_1130_, 1);
lean_inc(v_fst_1131_);
v___x_1133_ = l_Lean_Name_components(v_fst_1131_);
if (lean_obj_tag(v___x_1133_) == 0)
{
v___y_1125_ = v_b_1123_;
goto v___jp_1124_;
}
else
{
lean_object* v_head_1134_; lean_object* v_tail_1135_; lean_object* v___x_1136_; 
v_head_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_head_1134_);
v_tail_1135_ = lean_ctor_get(v___x_1133_, 1);
lean_inc(v_tail_1135_);
lean_dec_ref_known(v___x_1133_, 2);
lean_inc(v_snd_1132_);
lean_inc(v_ref_1119_);
v___x_1136_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v_b_1123_, v_ref_1119_, v_head_1134_, v_tail_1135_, v_snd_1132_);
v___y_1125_ = v___x_1136_;
goto v___jp_1124_;
}
}
else
{
lean_dec(v_ref_1119_);
return v_b_1123_;
}
v___jp_1124_:
{
size_t v___x_1126_; size_t v___x_1127_; 
v___x_1126_ = ((size_t)1ULL);
v___x_1127_ = lean_usize_add(v_i_1121_, v___x_1126_);
v_i_1121_ = v___x_1127_;
v_b_1123_ = v___y_1125_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1(size_t v_sz_1137_, size_t v_i_1138_, lean_object* v_bs_1139_){
_start:
{
uint8_t v___x_1140_; 
v___x_1140_ = lean_usize_dec_lt(v_i_1138_, v_sz_1137_);
if (v___x_1140_ == 0)
{
return v_bs_1139_;
}
else
{
lean_object* v_v_1141_; lean_object* v___x_1142_; lean_object* v_bs_x27_1143_; lean_object* v___x_1144_; size_t v___x_1145_; size_t v___x_1146_; lean_object* v___x_1147_; 
v_v_1141_ = lean_array_uget(v_bs_1139_, v_i_1138_);
v___x_1142_ = lean_unsigned_to_nat(0u);
v_bs_x27_1143_ = lean_array_uset(v_bs_1139_, v_i_1138_, v___x_1142_);
v___x_1144_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(v_v_1141_);
v___x_1145_ = ((size_t)1ULL);
v___x_1146_ = lean_usize_add(v_i_1138_, v___x_1145_);
v___x_1147_ = lean_array_uset(v_bs_x27_1143_, v_i_1138_, v___x_1144_);
v_i_1138_ = v___x_1146_;
v_bs_1139_ = v___x_1147_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(lean_object* v_a_1149_){
_start:
{
switch(lean_obj_tag(v_a_1149_))
{
case 6:
{
lean_object* v_xs_1150_; lean_object* v_ref_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1179_; 
v_xs_1150_ = lean_ctor_get(v_a_1149_, 1);
v_ref_1151_ = lean_ctor_get(v_a_1149_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v_a_1149_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1153_ = v_a_1149_;
v_isShared_1154_ = v_isSharedCheck_1179_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_xs_1150_);
lean_inc(v_ref_1151_);
lean_dec(v_a_1149_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1179_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v_items_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; uint8_t v___x_1159_; 
v_items_1155_ = lean_ctor_get(v_xs_1150_, 0);
lean_inc_ref(v_items_1155_);
lean_dec_ref(v_xs_1150_);
v___x_1156_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
v___x_1157_ = lean_unsigned_to_nat(0u);
v___x_1158_ = lean_array_get_size(v_items_1155_);
v___x_1159_ = lean_nat_dec_lt(v___x_1157_, v___x_1158_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1161_; 
lean_dec_ref(v_items_1155_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 1, v___x_1156_);
v___x_1161_ = v___x_1153_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_ref_1151_);
lean_ctor_set(v_reuseFailAlloc_1162_, 1, v___x_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
else
{
uint8_t v___x_1163_; 
v___x_1163_ = lean_nat_dec_le(v___x_1158_, v___x_1158_);
if (v___x_1163_ == 0)
{
if (v___x_1159_ == 0)
{
lean_object* v___x_1165_; 
lean_dec_ref(v_items_1155_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 1, v___x_1156_);
v___x_1165_ = v___x_1153_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_ref_1151_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v___x_1156_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
else
{
size_t v___x_1167_; size_t v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1171_; 
v___x_1167_ = ((size_t)0ULL);
v___x_1168_ = lean_usize_of_nat(v___x_1158_);
lean_inc(v_ref_1151_);
v___x_1169_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0(v_ref_1151_, v_items_1155_, v___x_1167_, v___x_1168_, v___x_1156_);
lean_dec_ref(v_items_1155_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 1, v___x_1169_);
v___x_1171_ = v___x_1153_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_ref_1151_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v___x_1169_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
else
{
size_t v___x_1173_; size_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1173_ = ((size_t)0ULL);
v___x_1174_ = lean_usize_of_nat(v___x_1158_);
lean_inc(v_ref_1151_);
v___x_1175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0(v_ref_1151_, v_items_1155_, v___x_1173_, v___x_1174_, v___x_1156_);
lean_dec_ref(v_items_1155_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 1, v___x_1175_);
v___x_1177_ = v___x_1153_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_ref_1151_);
lean_ctor_set(v_reuseFailAlloc_1178_, 1, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
}
case 5:
{
lean_object* v_ref_1180_; lean_object* v_xs_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1191_; 
v_ref_1180_ = lean_ctor_get(v_a_1149_, 0);
v_xs_1181_ = lean_ctor_get(v_a_1149_, 1);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_a_1149_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1183_ = v_a_1149_;
v_isShared_1184_ = v_isSharedCheck_1191_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_xs_1181_);
lean_inc(v_ref_1180_);
lean_dec(v_a_1149_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1191_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
size_t v_sz_1185_; size_t v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1189_; 
v_sz_1185_ = lean_array_size(v_xs_1181_);
v___x_1186_ = ((size_t)0ULL);
v___x_1187_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1(v_sz_1185_, v___x_1186_, v_xs_1181_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 1, v___x_1187_);
v___x_1189_ = v___x_1183_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_ref_1180_);
lean_ctor_set(v_reuseFailAlloc_1190_, 1, v___x_1187_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
default: 
{
return v_a_1149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___lam__0(lean_object* v_newV_1192_, lean_object* v___x_1193_, lean_object* v_v_x3f_1194_){
_start:
{
if (lean_obj_tag(v_v_x3f_1194_) == 1)
{
lean_object* v_val_1195_; 
v_val_1195_ = lean_ctor_get(v_v_x3f_1194_, 0);
lean_inc(v_val_1195_);
lean_dec_ref_known(v_v_x3f_1194_, 1);
switch(lean_obj_tag(v_val_1195_))
{
case 6:
{
lean_object* v_ref_1196_; lean_object* v_xs_1197_; lean_object* v___x_1198_; 
v_ref_1196_ = lean_ctor_get(v_val_1195_, 0);
lean_inc(v_ref_1196_);
v_xs_1197_ = lean_ctor_get(v_val_1195_, 1);
lean_inc_ref(v_xs_1197_);
lean_dec_ref_known(v_val_1195_, 2);
v___x_1198_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(v_newV_1192_);
if (lean_obj_tag(v___x_1198_) == 6)
{
lean_object* v_xs_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1208_; 
v_xs_1199_ = lean_ctor_get(v___x_1198_, 1);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1208_ == 0)
{
lean_object* v_unused_1209_; 
v_unused_1209_ = lean_ctor_get(v___x_1198_, 0);
lean_dec(v_unused_1209_);
v___x_1201_ = v___x_1198_;
v_isShared_1202_ = v_isSharedCheck_1208_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_xs_1199_);
lean_dec(v___x_1198_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1208_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v_items_1203_; lean_object* v___x_1204_; lean_object* v___x_1206_; 
v_items_1203_ = lean_ctor_get(v_xs_1199_, 0);
lean_inc_ref(v_items_1203_);
lean_dec_ref(v_xs_1199_);
v___x_1204_ = l_Lake_Toml_RBDict_appendArray___redArg(v___x_1193_, v_xs_1197_, v_items_1203_);
lean_dec_ref(v_items_1203_);
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 1, v___x_1204_);
lean_ctor_set(v___x_1201_, 0, v_ref_1196_);
v___x_1206_ = v___x_1201_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_ref_1196_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v___x_1204_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
else
{
lean_dec_ref(v_xs_1197_);
lean_dec(v_ref_1196_);
lean_dec_ref(v___x_1193_);
return v___x_1198_;
}
}
case 5:
{
lean_object* v_ref_1210_; lean_object* v_xs_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1230_; 
lean_dec_ref(v___x_1193_);
v_ref_1210_ = lean_ctor_get(v_val_1195_, 0);
v_xs_1211_ = lean_ctor_get(v_val_1195_, 1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v_val_1195_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1213_ = v_val_1195_;
v_isShared_1214_ = v_isSharedCheck_1230_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_xs_1211_);
lean_inc(v_ref_1210_);
lean_dec(v_val_1195_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1230_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1215_; 
v___x_1215_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(v_newV_1192_);
if (lean_obj_tag(v___x_1215_) == 5)
{
lean_object* v_xs_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1224_; 
lean_del_object(v___x_1213_);
v_xs_1216_ = lean_ctor_get(v___x_1215_, 1);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1224_ == 0)
{
lean_object* v_unused_1225_; 
v_unused_1225_ = lean_ctor_get(v___x_1215_, 0);
lean_dec(v_unused_1225_);
v___x_1218_ = v___x_1215_;
v_isShared_1219_ = v_isSharedCheck_1224_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_xs_1216_);
lean_dec(v___x_1215_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1224_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1220_; lean_object* v___x_1222_; 
v___x_1220_ = l_Array_append___redArg(v_xs_1211_, v_xs_1216_);
lean_dec_ref(v_xs_1216_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 1, v___x_1220_);
lean_ctor_set(v___x_1218_, 0, v_ref_1210_);
v___x_1222_ = v___x_1218_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_ref_1210_);
lean_ctor_set(v_reuseFailAlloc_1223_, 1, v___x_1220_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
else
{
lean_object* v___x_1226_; lean_object* v___x_1228_; 
v___x_1226_ = lean_array_push(v_xs_1211_, v___x_1215_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 1, v___x_1226_);
v___x_1228_ = v___x_1213_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_ref_1210_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v___x_1226_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
default: 
{
lean_object* v___x_1231_; 
lean_dec(v_val_1195_);
lean_dec_ref(v___x_1193_);
v___x_1231_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(v_newV_1192_);
return v___x_1231_;
}
}
}
else
{
lean_object* v___x_1232_; 
lean_dec(v_v_x3f_1194_);
lean_dec_ref(v___x_1193_);
v___x_1232_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(v_newV_1192_);
return v___x_1232_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3(lean_object* v_newV_1233_, lean_object* v_k_1234_, lean_object* v_t_1235_){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = ((lean_object*)(l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__0));
lean_inc_ref(v_t_1235_);
lean_inc(v_k_1234_);
v___x_1237_ = l_Lake_Toml_RBDict_findIdx_x3f___redArg(v___x_1236_, v_k_1234_, v_t_1235_);
if (lean_obj_tag(v___x_1237_) == 1)
{
lean_object* v_val_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1273_; 
lean_dec(v_k_1234_);
v_val_1238_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1240_ = v___x_1237_;
v_isShared_1241_ = v_isSharedCheck_1273_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_val_1238_);
lean_dec(v___x_1237_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1273_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v_items_1242_; lean_object* v_indices_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1272_; 
v_items_1242_ = lean_ctor_get(v_t_1235_, 0);
v_indices_1243_ = lean_ctor_get(v_t_1235_, 1);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_t_1235_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1245_ = v_t_1235_;
v_isShared_1246_ = v_isSharedCheck_1272_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_indices_1243_);
lean_inc(v_items_1242_);
lean_dec(v_t_1235_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1272_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1247_; uint8_t v___x_1248_; 
v___x_1247_ = lean_array_get_size(v_items_1242_);
v___x_1248_ = lean_nat_dec_lt(v_val_1238_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1250_; 
lean_del_object(v___x_1240_);
lean_dec(v_val_1238_);
lean_dec_ref(v_newV_1233_);
if (v_isShared_1246_ == 0)
{
v___x_1250_ = v___x_1245_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_items_1242_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_indices_1243_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
else
{
lean_object* v_v_1252_; lean_object* v_fst_1253_; lean_object* v_snd_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1271_; 
v_v_1252_ = lean_array_fget(v_items_1242_, v_val_1238_);
v_fst_1253_ = lean_ctor_get(v_v_1252_, 0);
v_snd_1254_ = lean_ctor_get(v_v_1252_, 1);
v_isSharedCheck_1271_ = !lean_is_exclusive(v_v_1252_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1256_ = v_v_1252_;
v_isShared_1257_ = v_isSharedCheck_1271_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_snd_1254_);
lean_inc(v_fst_1253_);
lean_dec(v_v_1252_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1271_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1258_; lean_object* v_xs_x27_1259_; lean_object* v___x_1261_; 
v___x_1258_ = lean_box(0);
v_xs_x27_1259_ = lean_array_fset(v_items_1242_, v_val_1238_, v___x_1258_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 0, v_snd_1254_);
v___x_1261_ = v___x_1240_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_snd_1254_);
v___x_1261_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v___x_1262_; lean_object* v___x_1264_; 
v___x_1262_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___lam__0(v_newV_1233_, v___x_1236_, v___x_1261_);
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 1, v___x_1262_);
v___x_1264_ = v___x_1256_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_fst_1253_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v___x_1262_);
v___x_1264_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1265_ = lean_array_fset(v_xs_x27_1259_, v_val_1238_, v___x_1264_);
lean_dec(v_val_1238_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v___x_1265_);
v___x_1267_ = v___x_1245_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1265_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v_indices_1243_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
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
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
lean_dec(v___x_1237_);
v___x_1274_ = lean_box(0);
v___x_1275_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___lam__0(v_newV_1233_, v___x_1236_, v___x_1274_);
v___x_1276_ = l_Lake_Toml_RBDict_push___redArg(v___x_1236_, v_k_1234_, v___x_1275_, v_t_1235_);
return v___x_1276_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4___lam__0(lean_object* v_kRef_1277_, lean_object* v_head_1278_, lean_object* v_tail_1279_, lean_object* v_newV_1280_, lean_object* v_v_x3f_1281_){
_start:
{
if (lean_obj_tag(v_v_x3f_1281_) == 1)
{
lean_object* v_val_1282_; 
v_val_1282_ = lean_ctor_get(v_v_x3f_1281_, 0);
lean_inc(v_val_1282_);
lean_dec_ref_known(v_v_x3f_1281_, 1);
switch(lean_obj_tag(v_val_1282_))
{
case 5:
{
lean_object* v_ref_1283_; lean_object* v_xs_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v_ref_1283_ = lean_ctor_get(v_val_1282_, 0);
v_xs_1284_ = lean_ctor_get(v_val_1282_, 1);
v___x_1285_ = lean_array_get_size(v_xs_1284_);
v___x_1286_ = lean_unsigned_to_nat(1u);
v___x_1287_ = lean_nat_sub(v___x_1285_, v___x_1286_);
v___x_1288_ = lean_nat_dec_lt(v___x_1287_, v___x_1285_);
if (v___x_1288_ == 0)
{
lean_dec(v___x_1287_);
lean_dec_ref(v_newV_1280_);
lean_dec(v_tail_1279_);
lean_dec(v_head_1278_);
lean_dec(v_kRef_1277_);
return v_val_1282_;
}
else
{
lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1313_; 
lean_inc_ref(v_xs_1284_);
lean_inc(v_ref_1283_);
v_isSharedCheck_1313_ = !lean_is_exclusive(v_val_1282_);
if (v_isSharedCheck_1313_ == 0)
{
lean_object* v_unused_1314_; lean_object* v_unused_1315_; 
v_unused_1314_ = lean_ctor_get(v_val_1282_, 1);
lean_dec(v_unused_1314_);
v_unused_1315_ = lean_ctor_get(v_val_1282_, 0);
lean_dec(v_unused_1315_);
v___x_1290_ = v_val_1282_;
v_isShared_1291_ = v_isSharedCheck_1313_;
goto v_resetjp_1289_;
}
else
{
lean_dec(v_val_1282_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1313_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v_v_1292_; lean_object* v___x_1293_; lean_object* v_xs_x27_1294_; lean_object* v___y_1296_; 
v_v_1292_ = lean_array_fget(v_xs_1284_, v___x_1287_);
v___x_1293_ = lean_box(0);
v_xs_x27_1294_ = lean_array_fset(v_xs_1284_, v___x_1287_, v___x_1293_);
if (lean_obj_tag(v_v_1292_) == 6)
{
lean_object* v_ref_1301_; lean_object* v_xs_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1310_; 
v_ref_1301_ = lean_ctor_get(v_v_1292_, 0);
v_xs_1302_ = lean_ctor_get(v_v_1292_, 1);
v_isSharedCheck_1310_ = !lean_is_exclusive(v_v_1292_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1304_ = v_v_1292_;
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_xs_1302_);
lean_inc(v_ref_1301_);
lean_dec(v_v_1292_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1306_; lean_object* v___x_1308_; 
v___x_1306_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v_xs_1302_, v_kRef_1277_, v_head_1278_, v_tail_1279_, v_newV_1280_);
if (v_isShared_1305_ == 0)
{
lean_ctor_set(v___x_1304_, 1, v___x_1306_);
v___x_1308_ = v___x_1304_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_ref_1301_);
lean_ctor_set(v_reuseFailAlloc_1309_, 1, v___x_1306_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
v___y_1296_ = v___x_1308_;
goto v___jp_1295_;
}
}
}
else
{
lean_object* v___x_1311_; lean_object* v___x_1312_; 
lean_dec(v_v_1292_);
lean_dec_ref(v_newV_1280_);
lean_dec(v_tail_1279_);
lean_dec(v_head_1278_);
v___x_1311_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
v___x_1312_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1312_, 0, v_kRef_1277_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
v___y_1296_ = v___x_1312_;
goto v___jp_1295_;
}
v___jp_1295_:
{
lean_object* v___x_1297_; lean_object* v___x_1299_; 
v___x_1297_ = lean_array_fset(v_xs_x27_1294_, v___x_1287_, v___y_1296_);
lean_dec(v___x_1287_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 1, v___x_1297_);
v___x_1299_ = v___x_1290_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_ref_1283_);
lean_ctor_set(v_reuseFailAlloc_1300_, 1, v___x_1297_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
}
case 6:
{
lean_object* v_ref_1316_; lean_object* v_xs_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1325_; 
v_ref_1316_ = lean_ctor_get(v_val_1282_, 0);
v_xs_1317_ = lean_ctor_get(v_val_1282_, 1);
v_isSharedCheck_1325_ = !lean_is_exclusive(v_val_1282_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1319_ = v_val_1282_;
v_isShared_1320_ = v_isSharedCheck_1325_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_xs_1317_);
lean_inc(v_ref_1316_);
lean_dec(v_val_1282_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1325_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1321_; lean_object* v___x_1323_; 
v___x_1321_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v_xs_1317_, v_kRef_1277_, v_head_1278_, v_tail_1279_, v_newV_1280_);
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 1, v___x_1321_);
v___x_1323_ = v___x_1319_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_ref_1316_);
lean_ctor_set(v_reuseFailAlloc_1324_, 1, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
default: 
{
lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_dec(v_val_1282_);
v___x_1326_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
lean_inc(v_kRef_1277_);
v___x_1327_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v___x_1326_, v_kRef_1277_, v_head_1278_, v_tail_1279_, v_newV_1280_);
v___x_1328_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1328_, 0, v_kRef_1277_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
return v___x_1328_;
}
}
}
else
{
lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
lean_dec(v_v_x3f_1281_);
v___x_1329_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
lean_inc(v_kRef_1277_);
v___x_1330_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v___x_1329_, v_kRef_1277_, v_head_1278_, v_tail_1279_, v_newV_1280_);
v___x_1331_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1331_, 0, v_kRef_1277_);
lean_ctor_set(v___x_1331_, 1, v___x_1330_);
return v___x_1331_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4(lean_object* v_kRef_1332_, lean_object* v_head_1333_, lean_object* v_tail_1334_, lean_object* v_newV_1335_, lean_object* v_k_1336_, lean_object* v_t_1337_){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = ((lean_object*)(l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__0));
lean_inc_ref(v_t_1337_);
lean_inc(v_k_1336_);
v___x_1339_ = l_Lake_Toml_RBDict_findIdx_x3f___redArg(v___x_1338_, v_k_1336_, v_t_1337_);
if (lean_obj_tag(v___x_1339_) == 1)
{
lean_object* v_val_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1375_; 
lean_dec(v_k_1336_);
v_val_1340_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1342_ = v___x_1339_;
v_isShared_1343_ = v_isSharedCheck_1375_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_val_1340_);
lean_dec(v___x_1339_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1375_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v_items_1344_; lean_object* v_indices_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1374_; 
v_items_1344_ = lean_ctor_get(v_t_1337_, 0);
v_indices_1345_ = lean_ctor_get(v_t_1337_, 1);
v_isSharedCheck_1374_ = !lean_is_exclusive(v_t_1337_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1347_ = v_t_1337_;
v_isShared_1348_ = v_isSharedCheck_1374_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_indices_1345_);
lean_inc(v_items_1344_);
lean_dec(v_t_1337_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1374_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = lean_array_get_size(v_items_1344_);
v___x_1350_ = lean_nat_dec_lt(v_val_1340_, v___x_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1352_; 
lean_del_object(v___x_1342_);
lean_dec(v_val_1340_);
lean_dec_ref(v_newV_1335_);
lean_dec(v_tail_1334_);
lean_dec(v_head_1333_);
lean_dec(v_kRef_1332_);
if (v_isShared_1348_ == 0)
{
v___x_1352_ = v___x_1347_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_items_1344_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_indices_1345_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
else
{
lean_object* v_v_1354_; lean_object* v_fst_1355_; lean_object* v_snd_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1373_; 
v_v_1354_ = lean_array_fget(v_items_1344_, v_val_1340_);
v_fst_1355_ = lean_ctor_get(v_v_1354_, 0);
v_snd_1356_ = lean_ctor_get(v_v_1354_, 1);
v_isSharedCheck_1373_ = !lean_is_exclusive(v_v_1354_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1358_ = v_v_1354_;
v_isShared_1359_ = v_isSharedCheck_1373_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_snd_1356_);
lean_inc(v_fst_1355_);
lean_dec(v_v_1354_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1373_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1360_; lean_object* v_xs_x27_1361_; lean_object* v___x_1363_; 
v___x_1360_ = lean_box(0);
v_xs_x27_1361_ = lean_array_fset(v_items_1344_, v_val_1340_, v___x_1360_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 0, v_snd_1356_);
v___x_1363_ = v___x_1342_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_snd_1356_);
v___x_1363_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
lean_object* v___x_1364_; lean_object* v___x_1366_; 
v___x_1364_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4___lam__0(v_kRef_1332_, v_head_1333_, v_tail_1334_, v_newV_1335_, v___x_1363_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 1, v___x_1364_);
v___x_1366_ = v___x_1358_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_fst_1355_);
lean_ctor_set(v_reuseFailAlloc_1371_, 1, v___x_1364_);
v___x_1366_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
lean_object* v___x_1367_; lean_object* v___x_1369_; 
v___x_1367_ = lean_array_fset(v_xs_x27_1361_, v_val_1340_, v___x_1366_);
lean_dec(v_val_1340_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 0, v___x_1367_);
v___x_1369_ = v___x_1347_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v___x_1367_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v_indices_1345_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
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
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
lean_dec(v___x_1339_);
v___x_1376_ = lean_box(0);
v___x_1377_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4___lam__0(v_kRef_1332_, v_head_1333_, v_tail_1334_, v_newV_1335_, v___x_1376_);
v___x_1378_ = l_Lake_Toml_RBDict_push___redArg(v___x_1338_, v_k_1336_, v___x_1377_, v_t_1337_);
return v___x_1378_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(lean_object* v_t_1379_, lean_object* v_kRef_1380_, lean_object* v_k_1381_, lean_object* v_ks_1382_, lean_object* v_newV_1383_){
_start:
{
if (lean_obj_tag(v_ks_1382_) == 0)
{
lean_object* v___x_1384_; 
lean_dec(v_kRef_1380_);
v___x_1384_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3(v_newV_1383_, v_k_1381_, v_t_1379_);
return v___x_1384_;
}
else
{
lean_object* v_head_1385_; lean_object* v_tail_1386_; lean_object* v___x_1387_; 
v_head_1385_ = lean_ctor_get(v_ks_1382_, 0);
lean_inc(v_head_1385_);
v_tail_1386_ = lean_ctor_get(v_ks_1382_, 1);
lean_inc(v_tail_1386_);
lean_dec_ref_known(v_ks_1382_, 2);
v___x_1387_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4(v_kRef_1380_, v_head_1385_, v_tail_1386_, v_newV_1383_, v_k_1381_, v_t_1379_);
return v___x_1387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1___boxed(lean_object* v_sz_1388_, lean_object* v_i_1389_, lean_object* v_bs_1390_){
_start:
{
size_t v_sz_boxed_1391_; size_t v_i_boxed_1392_; lean_object* v_res_1393_; 
v_sz_boxed_1391_ = lean_unbox_usize(v_sz_1388_);
lean_dec(v_sz_1388_);
v_i_boxed_1392_ = lean_unbox_usize(v_i_1389_);
lean_dec(v_i_1389_);
v_res_1393_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1(v_sz_boxed_1391_, v_i_boxed_1392_, v_bs_1390_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0___boxed(lean_object* v_ref_1394_, lean_object* v_as_1395_, lean_object* v_i_1396_, lean_object* v_stop_1397_, lean_object* v_b_1398_){
_start:
{
size_t v_i_boxed_1399_; size_t v_stop_boxed_1400_; lean_object* v_res_1401_; 
v_i_boxed_1399_ = lean_unbox_usize(v_i_1396_);
lean_dec(v_i_1396_);
v_stop_boxed_1400_ = lean_unbox_usize(v_stop_1397_);
lean_dec(v_stop_1397_);
v_res_1401_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0(v_ref_1394_, v_as_1395_, v_i_boxed_1399_, v_stop_boxed_1400_, v_b_1398_);
lean_dec_ref(v_as_1395_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0(lean_object* v_as_1402_, size_t v_i_1403_, size_t v_stop_1404_, lean_object* v_b_1405_){
_start:
{
lean_object* v___y_1407_; uint8_t v___x_1411_; 
v___x_1411_ = lean_usize_dec_eq(v_i_1403_, v_stop_1404_);
if (v___x_1411_ == 0)
{
lean_object* v___x_1412_; lean_object* v_ref_1413_; lean_object* v_key_1414_; lean_object* v_val_1415_; lean_object* v___x_1416_; 
v___x_1412_ = lean_array_uget_borrowed(v_as_1402_, v_i_1403_);
v_ref_1413_ = lean_ctor_get(v___x_1412_, 0);
v_key_1414_ = lean_ctor_get(v___x_1412_, 1);
v_val_1415_ = lean_ctor_get(v___x_1412_, 2);
lean_inc(v_key_1414_);
v___x_1416_ = l_Lean_Name_components(v_key_1414_);
if (lean_obj_tag(v___x_1416_) == 0)
{
v___y_1407_ = v_b_1405_;
goto v___jp_1406_;
}
else
{
lean_object* v_head_1417_; lean_object* v_tail_1418_; lean_object* v___x_1419_; 
v_head_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_head_1417_);
v_tail_1418_ = lean_ctor_get(v___x_1416_, 1);
lean_inc(v_tail_1418_);
lean_dec_ref_known(v___x_1416_, 2);
lean_inc_ref(v_val_1415_);
lean_inc(v_ref_1413_);
v___x_1419_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v_b_1405_, v_ref_1413_, v_head_1417_, v_tail_1418_, v_val_1415_);
v___y_1407_ = v___x_1419_;
goto v___jp_1406_;
}
}
else
{
return v_b_1405_;
}
v___jp_1406_:
{
size_t v___x_1408_; size_t v___x_1409_; 
v___x_1408_ = ((size_t)1ULL);
v___x_1409_ = lean_usize_add(v_i_1403_, v___x_1408_);
v_i_1403_ = v___x_1409_;
v_b_1405_ = v___y_1407_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0___boxed(lean_object* v_as_1420_, lean_object* v_i_1421_, lean_object* v_stop_1422_, lean_object* v_b_1423_){
_start:
{
size_t v_i_boxed_1424_; size_t v_stop_boxed_1425_; lean_object* v_res_1426_; 
v_i_boxed_1424_ = lean_unbox_usize(v_i_1421_);
lean_dec(v_i_1421_);
v_stop_boxed_1425_ = lean_unbox_usize(v_stop_1422_);
lean_dec(v_stop_1422_);
v_res_1426_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0(v_as_1420_, v_i_boxed_1424_, v_stop_boxed_1425_, v_b_1423_);
lean_dec_ref(v_as_1420_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable(lean_object* v_items_1427_){
_start:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1428_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
v___x_1429_ = lean_unsigned_to_nat(0u);
v___x_1430_ = lean_array_get_size(v_items_1427_);
v___x_1431_ = lean_nat_dec_lt(v___x_1429_, v___x_1430_);
if (v___x_1431_ == 0)
{
return v___x_1428_;
}
else
{
uint8_t v___x_1432_; 
v___x_1432_ = lean_nat_dec_le(v___x_1430_, v___x_1430_);
if (v___x_1432_ == 0)
{
if (v___x_1431_ == 0)
{
return v___x_1428_;
}
else
{
size_t v___x_1433_; size_t v___x_1434_; lean_object* v___x_1435_; 
v___x_1433_ = ((size_t)0ULL);
v___x_1434_ = lean_usize_of_nat(v___x_1430_);
v___x_1435_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0(v_items_1427_, v___x_1433_, v___x_1434_, v___x_1428_);
return v___x_1435_;
}
}
else
{
size_t v___x_1436_; size_t v___x_1437_; lean_object* v___x_1438_; 
v___x_1436_ = ((size_t)0ULL);
v___x_1437_ = lean_usize_of_nat(v___x_1430_);
v___x_1438_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0(v_items_1427_, v___x_1436_, v___x_1437_, v___x_1428_);
return v___x_1438_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable___boxed(lean_object* v_items_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable(v_items_1439_);
lean_dec_ref(v_items_1439_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_TomlElabM_run(lean_object* v_x_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_){
_start:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = ((lean_object*)(l_Lake_Toml_instInhabitedElabState_default___closed__1));
lean_inc(v_a_1443_);
lean_inc_ref(v_a_1442_);
v___x_1446_ = lean_apply_4(v_x_1441_, v___x_1445_, v_a_1442_, v_a_1443_, lean_box(0));
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1457_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1449_ = v___x_1446_;
v_isShared_1450_ = v_isSharedCheck_1457_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1446_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1457_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v_snd_1451_; lean_object* v_items_1452_; lean_object* v___x_1453_; lean_object* v___x_1455_; 
v_snd_1451_ = lean_ctor_get(v_a_1447_, 1);
lean_inc(v_snd_1451_);
lean_dec(v_a_1447_);
v_items_1452_ = lean_ctor_get(v_snd_1451_, 5);
lean_inc_ref(v_items_1452_);
lean_dec(v_snd_1451_);
v___x_1453_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable(v_items_1452_);
lean_dec_ref(v_items_1452_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v___x_1453_);
v___x_1455_ = v___x_1449_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
v_a_1458_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1446_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1446_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
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
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_TomlElabM_run___boxed(lean_object* v_x_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_TomlElabM_run(v_x_1466_, v_a_1467_, v_a_1468_);
lean_dec(v_a_1468_);
lean_dec_ref(v_a_1467_);
return v_res_1470_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0(uint8_t v_suppressElabErrors_1479_, uint8_t v___y_1480_, lean_object* v_x_1481_){
_start:
{
if (lean_obj_tag(v_x_1481_) == 1)
{
lean_object* v_pre_1482_; 
v_pre_1482_ = lean_ctor_get(v_x_1481_, 0);
switch(lean_obj_tag(v_pre_1482_))
{
case 1:
{
lean_object* v_pre_1483_; 
v_pre_1483_ = lean_ctor_get(v_pre_1482_, 0);
switch(lean_obj_tag(v_pre_1483_))
{
case 0:
{
lean_object* v_str_1484_; lean_object* v_str_1485_; lean_object* v___x_1486_; uint8_t v___x_1487_; 
v_str_1484_ = lean_ctor_get(v_x_1481_, 1);
v_str_1485_ = lean_ctor_get(v_pre_1482_, 1);
v___x_1486_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__0));
v___x_1487_ = lean_string_dec_eq(v_str_1485_, v___x_1486_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; uint8_t v___x_1489_; 
v___x_1488_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__1));
v___x_1489_ = lean_string_dec_eq(v_str_1485_, v___x_1488_);
if (v___x_1489_ == 0)
{
return v___x_1489_;
}
else
{
lean_object* v___x_1490_; uint8_t v___x_1491_; 
v___x_1490_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__2));
v___x_1491_ = lean_string_dec_eq(v_str_1484_, v___x_1490_);
if (v___x_1491_ == 0)
{
return v___x_1491_;
}
else
{
return v_suppressElabErrors_1479_;
}
}
}
else
{
lean_object* v___x_1492_; uint8_t v___x_1493_; 
v___x_1492_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__3));
v___x_1493_ = lean_string_dec_eq(v_str_1484_, v___x_1492_);
if (v___x_1493_ == 0)
{
return v___x_1493_;
}
else
{
return v_suppressElabErrors_1479_;
}
}
}
case 1:
{
lean_object* v_pre_1494_; 
v_pre_1494_ = lean_ctor_get(v_pre_1483_, 0);
if (lean_obj_tag(v_pre_1494_) == 0)
{
lean_object* v_str_1495_; lean_object* v_str_1496_; lean_object* v_str_1497_; lean_object* v___x_1498_; uint8_t v___x_1499_; 
v_str_1495_ = lean_ctor_get(v_x_1481_, 1);
v_str_1496_ = lean_ctor_get(v_pre_1482_, 1);
v_str_1497_ = lean_ctor_get(v_pre_1483_, 1);
v___x_1498_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__4));
v___x_1499_ = lean_string_dec_eq(v_str_1497_, v___x_1498_);
if (v___x_1499_ == 0)
{
return v___x_1499_;
}
else
{
lean_object* v___x_1500_; uint8_t v___x_1501_; 
v___x_1500_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__5));
v___x_1501_ = lean_string_dec_eq(v_str_1496_, v___x_1500_);
if (v___x_1501_ == 0)
{
return v___x_1501_;
}
else
{
lean_object* v___x_1502_; uint8_t v___x_1503_; 
v___x_1502_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__6));
v___x_1503_ = lean_string_dec_eq(v_str_1495_, v___x_1502_);
if (v___x_1503_ == 0)
{
return v___x_1503_;
}
else
{
return v_suppressElabErrors_1479_;
}
}
}
}
else
{
return v___y_1480_;
}
}
default: 
{
return v___y_1480_;
}
}
}
case 0:
{
lean_object* v_str_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; 
v_str_1504_ = lean_ctor_get(v_x_1481_, 1);
v___x_1505_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__7));
v___x_1506_ = lean_string_dec_eq(v_str_1504_, v___x_1505_);
if (v___x_1506_ == 0)
{
return v___x_1506_;
}
else
{
return v_suppressElabErrors_1479_;
}
}
default: 
{
return v___y_1480_;
}
}
}
else
{
return v___y_1480_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___boxed(lean_object* v_suppressElabErrors_1507_, lean_object* v___y_1508_, lean_object* v_x_1509_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1510_; uint8_t v___y_10667__boxed_1511_; uint8_t v_res_1512_; lean_object* v_r_1513_; 
v_suppressElabErrors_boxed_1510_ = lean_unbox(v_suppressElabErrors_1507_);
v___y_10667__boxed_1511_ = lean_unbox(v___y_1508_);
v_res_1512_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0(v_suppressElabErrors_boxed_1510_, v___y_10667__boxed_1511_, v_x_1509_);
lean_dec(v_x_1509_);
v_r_1513_ = lean_box(v_res_1512_);
return v_r_1513_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3(lean_object* v_opts_1514_, lean_object* v_opt_1515_){
_start:
{
lean_object* v_name_1516_; lean_object* v_defValue_1517_; lean_object* v_map_1518_; lean_object* v___x_1519_; 
v_name_1516_ = lean_ctor_get(v_opt_1515_, 0);
v_defValue_1517_ = lean_ctor_get(v_opt_1515_, 1);
v_map_1518_ = lean_ctor_get(v_opts_1514_, 0);
v___x_1519_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1518_, v_name_1516_);
if (lean_obj_tag(v___x_1519_) == 0)
{
uint8_t v___x_1520_; 
v___x_1520_ = lean_unbox(v_defValue_1517_);
return v___x_1520_;
}
else
{
lean_object* v_val_1521_; 
v_val_1521_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_val_1521_);
lean_dec_ref_known(v___x_1519_, 1);
if (lean_obj_tag(v_val_1521_) == 1)
{
uint8_t v_v_1522_; 
v_v_1522_ = lean_ctor_get_uint8(v_val_1521_, 0);
lean_dec_ref_known(v_val_1521_, 0);
return v_v_1522_;
}
else
{
uint8_t v___x_1523_; 
lean_dec(v_val_1521_);
v___x_1523_ = lean_unbox(v_defValue_1517_);
return v___x_1523_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3___boxed(lean_object* v_opts_1524_, lean_object* v_opt_1525_){
_start:
{
uint8_t v_res_1526_; lean_object* v_r_1527_; 
v_res_1526_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3(v_opts_1524_, v_opt_1525_);
lean_dec_ref(v_opt_1525_);
lean_dec_ref(v_opts_1524_);
v_r_1527_ = lean_box(v_res_1526_);
return v_r_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2(lean_object* v_ref_1529_, lean_object* v_msgData_1530_, uint8_t v_severity_1531_, uint8_t v_isSilent_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v_a_1538_; uint8_t v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; uint8_t v___y_1545_; lean_object* v___y_1546_; lean_object* v___y_1547_; lean_object* v___y_1548_; lean_object* v_currNamespace_1549_; lean_object* v_openDecls_1550_; lean_object* v___y_1551_; lean_object* v___y_1576_; lean_object* v___y_1577_; lean_object* v___y_1578_; uint8_t v___y_1579_; uint8_t v___y_1580_; uint8_t v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; uint8_t v___y_1605_; uint8_t v___y_1606_; uint8_t v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1615_; lean_object* v___y_1616_; lean_object* v___y_1617_; uint8_t v___y_1618_; uint8_t v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1621_; lean_object* v___y_1622_; uint8_t v___y_1623_; uint8_t v___x_1628_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; uint8_t v___y_1635_; uint8_t v___y_1636_; lean_object* v___y_1637_; uint8_t v___y_1638_; uint8_t v___y_1640_; uint8_t v___x_1659_; 
v___x_1628_ = 2;
v___x_1659_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1531_, v___x_1628_);
if (v___x_1659_ == 0)
{
v___y_1640_ = v___x_1659_;
goto v___jp_1639_;
}
else
{
uint8_t v___x_1660_; 
lean_inc_ref(v_msgData_1530_);
v___x_1660_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1530_);
v___y_1640_ = v___x_1660_;
goto v___jp_1639_;
}
v___jp_1537_:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1539_, 0, v_a_1538_);
lean_ctor_set(v___x_1539_, 1, v___y_1533_);
v___x_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1539_);
return v___x_1540_;
}
v___jp_1541_:
{
lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v_env_1556_; lean_object* v_nextMacroScope_1557_; lean_object* v_ngen_1558_; lean_object* v_auxDeclNGen_1559_; lean_object* v_traceState_1560_; lean_object* v_cache_1561_; lean_object* v_messages_1562_; lean_object* v_infoState_1563_; lean_object* v_snapshotTasks_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1574_; 
lean_inc(v_openDecls_1550_);
lean_inc(v_currNamespace_1549_);
v___x_1552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1552_, 0, v_currNamespace_1549_);
lean_ctor_set(v___x_1552_, 1, v_openDecls_1550_);
v___x_1553_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
lean_ctor_set(v___x_1553_, 1, v___y_1544_);
lean_inc_ref(v___y_1547_);
lean_inc_ref(v___y_1546_);
v___x_1554_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1554_, 0, v___y_1546_);
lean_ctor_set(v___x_1554_, 1, v___y_1548_);
lean_ctor_set(v___x_1554_, 2, v___y_1543_);
lean_ctor_set(v___x_1554_, 3, v___y_1547_);
lean_ctor_set(v___x_1554_, 4, v___x_1553_);
lean_ctor_set_uint8(v___x_1554_, sizeof(void*)*5, v___y_1545_);
lean_ctor_set_uint8(v___x_1554_, sizeof(void*)*5 + 1, v___y_1542_);
lean_ctor_set_uint8(v___x_1554_, sizeof(void*)*5 + 2, v_isSilent_1532_);
v___x_1555_ = lean_st_ref_take(v___y_1551_);
v_env_1556_ = lean_ctor_get(v___x_1555_, 0);
v_nextMacroScope_1557_ = lean_ctor_get(v___x_1555_, 1);
v_ngen_1558_ = lean_ctor_get(v___x_1555_, 2);
v_auxDeclNGen_1559_ = lean_ctor_get(v___x_1555_, 3);
v_traceState_1560_ = lean_ctor_get(v___x_1555_, 4);
v_cache_1561_ = lean_ctor_get(v___x_1555_, 5);
v_messages_1562_ = lean_ctor_get(v___x_1555_, 6);
v_infoState_1563_ = lean_ctor_get(v___x_1555_, 7);
v_snapshotTasks_1564_ = lean_ctor_get(v___x_1555_, 8);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1566_ = v___x_1555_;
v_isShared_1567_ = v_isSharedCheck_1574_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_snapshotTasks_1564_);
lean_inc(v_infoState_1563_);
lean_inc(v_messages_1562_);
lean_inc(v_cache_1561_);
lean_inc(v_traceState_1560_);
lean_inc(v_auxDeclNGen_1559_);
lean_inc(v_ngen_1558_);
lean_inc(v_nextMacroScope_1557_);
lean_inc(v_env_1556_);
lean_dec(v___x_1555_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1574_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1571_; 
v___x_1568_ = lean_box(0);
v___x_1569_ = l_Lean_MessageLog_add(v___x_1554_, v_messages_1562_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 6, v___x_1569_);
v___x_1571_ = v___x_1566_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_env_1556_);
lean_ctor_set(v_reuseFailAlloc_1573_, 1, v_nextMacroScope_1557_);
lean_ctor_set(v_reuseFailAlloc_1573_, 2, v_ngen_1558_);
lean_ctor_set(v_reuseFailAlloc_1573_, 3, v_auxDeclNGen_1559_);
lean_ctor_set(v_reuseFailAlloc_1573_, 4, v_traceState_1560_);
lean_ctor_set(v_reuseFailAlloc_1573_, 5, v_cache_1561_);
lean_ctor_set(v_reuseFailAlloc_1573_, 6, v___x_1569_);
lean_ctor_set(v_reuseFailAlloc_1573_, 7, v_infoState_1563_);
lean_ctor_set(v_reuseFailAlloc_1573_, 8, v_snapshotTasks_1564_);
v___x_1571_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_st_ref_put(v___y_1551_, v___x_1571_);
v_a_1538_ = v___x_1568_;
goto v___jp_1537_;
}
}
}
v___jp_1575_:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1600_; 
v___x_1586_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1530_);
v___x_1587_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(v___x_1586_, v___y_1534_, v___y_1535_);
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1590_ = v___x_1587_;
v_isShared_1591_ = v_isSharedCheck_1600_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_dec(v___x_1587_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1600_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1595_; 
lean_inc_ref_n(v___y_1584_, 2);
v___x_1592_ = l_Lean_FileMap_toPosition(v___y_1584_, v___y_1582_);
lean_dec(v___y_1582_);
v___x_1593_ = l_Lean_FileMap_toPosition(v___y_1584_, v___y_1585_);
lean_dec(v___y_1585_);
if (v_isShared_1591_ == 0)
{
lean_ctor_set_tag(v___x_1590_, 1);
lean_ctor_set(v___x_1590_, 0, v___x_1593_);
v___x_1595_ = v___x_1590_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v___x_1593_);
v___x_1595_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
lean_object* v___x_1596_; 
v___x_1596_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___closed__0));
if (v___y_1581_ == 0)
{
lean_dec_ref(v___y_1577_);
v___y_1542_ = v___y_1579_;
v___y_1543_ = v___x_1595_;
v___y_1544_ = v_a_1588_;
v___y_1545_ = v___y_1580_;
v___y_1546_ = v___y_1583_;
v___y_1547_ = v___x_1596_;
v___y_1548_ = v___x_1592_;
v_currNamespace_1549_ = v___y_1578_;
v_openDecls_1550_ = v___y_1576_;
v___y_1551_ = v___y_1535_;
goto v___jp_1541_;
}
else
{
uint8_t v___x_1597_; 
lean_inc(v_a_1588_);
v___x_1597_ = l_Lean_MessageData_hasTag(v___y_1577_, v_a_1588_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; 
lean_dec_ref(v___x_1595_);
lean_dec_ref(v___x_1592_);
lean_dec(v_a_1588_);
v___x_1598_ = lean_box(0);
v_a_1538_ = v___x_1598_;
goto v___jp_1537_;
}
else
{
v___y_1542_ = v___y_1579_;
v___y_1543_ = v___x_1595_;
v___y_1544_ = v_a_1588_;
v___y_1545_ = v___y_1580_;
v___y_1546_ = v___y_1583_;
v___y_1547_ = v___x_1596_;
v___y_1548_ = v___x_1592_;
v_currNamespace_1549_ = v___y_1578_;
v_openDecls_1550_ = v___y_1576_;
v___y_1551_ = v___y_1535_;
goto v___jp_1541_;
}
}
}
}
}
v___jp_1601_:
{
lean_object* v___x_1612_; 
v___x_1612_ = l_Lean_Syntax_getTailPos_x3f(v___y_1608_, v___y_1606_);
lean_dec(v___y_1608_);
if (lean_obj_tag(v___x_1612_) == 0)
{
lean_inc(v___y_1611_);
v___y_1576_ = v___y_1602_;
v___y_1577_ = v___y_1603_;
v___y_1578_ = v___y_1604_;
v___y_1579_ = v___y_1605_;
v___y_1580_ = v___y_1606_;
v___y_1581_ = v___y_1607_;
v___y_1582_ = v___y_1611_;
v___y_1583_ = v___y_1609_;
v___y_1584_ = v___y_1610_;
v___y_1585_ = v___y_1611_;
goto v___jp_1575_;
}
else
{
lean_object* v_val_1613_; 
v_val_1613_ = lean_ctor_get(v___x_1612_, 0);
lean_inc(v_val_1613_);
lean_dec_ref_known(v___x_1612_, 1);
v___y_1576_ = v___y_1602_;
v___y_1577_ = v___y_1603_;
v___y_1578_ = v___y_1604_;
v___y_1579_ = v___y_1605_;
v___y_1580_ = v___y_1606_;
v___y_1581_ = v___y_1607_;
v___y_1582_ = v___y_1611_;
v___y_1583_ = v___y_1609_;
v___y_1584_ = v___y_1610_;
v___y_1585_ = v_val_1613_;
goto v___jp_1575_;
}
}
v___jp_1614_:
{
lean_object* v_ref_1624_; lean_object* v___x_1625_; 
v_ref_1624_ = l_Lean_replaceRef(v_ref_1529_, v___y_1620_);
v___x_1625_ = l_Lean_Syntax_getPos_x3f(v_ref_1624_, v___y_1618_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v___x_1626_; 
v___x_1626_ = lean_unsigned_to_nat(0u);
v___y_1602_ = v___y_1615_;
v___y_1603_ = v___y_1616_;
v___y_1604_ = v___y_1617_;
v___y_1605_ = v___y_1623_;
v___y_1606_ = v___y_1618_;
v___y_1607_ = v___y_1619_;
v___y_1608_ = v_ref_1624_;
v___y_1609_ = v___y_1621_;
v___y_1610_ = v___y_1622_;
v___y_1611_ = v___x_1626_;
goto v___jp_1601_;
}
else
{
lean_object* v_val_1627_; 
v_val_1627_ = lean_ctor_get(v___x_1625_, 0);
lean_inc(v_val_1627_);
lean_dec_ref_known(v___x_1625_, 1);
v___y_1602_ = v___y_1615_;
v___y_1603_ = v___y_1616_;
v___y_1604_ = v___y_1617_;
v___y_1605_ = v___y_1623_;
v___y_1606_ = v___y_1618_;
v___y_1607_ = v___y_1619_;
v___y_1608_ = v_ref_1624_;
v___y_1609_ = v___y_1621_;
v___y_1610_ = v___y_1622_;
v___y_1611_ = v_val_1627_;
goto v___jp_1601_;
}
}
v___jp_1629_:
{
if (v___y_1638_ == 0)
{
v___y_1615_ = v___y_1630_;
v___y_1616_ = v___y_1631_;
v___y_1617_ = v___y_1632_;
v___y_1618_ = v___y_1635_;
v___y_1619_ = v___y_1636_;
v___y_1620_ = v___y_1637_;
v___y_1621_ = v___y_1633_;
v___y_1622_ = v___y_1634_;
v___y_1623_ = v_severity_1531_;
goto v___jp_1614_;
}
else
{
v___y_1615_ = v___y_1630_;
v___y_1616_ = v___y_1631_;
v___y_1617_ = v___y_1632_;
v___y_1618_ = v___y_1635_;
v___y_1619_ = v___y_1636_;
v___y_1620_ = v___y_1637_;
v___y_1621_ = v___y_1633_;
v___y_1622_ = v___y_1634_;
v___y_1623_ = v___x_1628_;
goto v___jp_1614_;
}
}
v___jp_1639_:
{
if (v___y_1640_ == 0)
{
lean_object* v_toCold_1641_; lean_object* v_ref_1642_; uint8_t v_suppressElabErrors_1643_; lean_object* v_fileName_1644_; lean_object* v_fileMap_1645_; lean_object* v_options_1646_; lean_object* v_currNamespace_1647_; lean_object* v_openDecls_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___f_1651_; uint8_t v___x_1652_; uint8_t v___x_1653_; 
v_toCold_1641_ = lean_ctor_get(v___y_1534_, 0);
v_ref_1642_ = lean_ctor_get(v___y_1534_, 2);
v_suppressElabErrors_1643_ = lean_ctor_get_uint8(v___y_1534_, sizeof(void*)*3 + 1);
v_fileName_1644_ = lean_ctor_get(v_toCold_1641_, 0);
v_fileMap_1645_ = lean_ctor_get(v_toCold_1641_, 1);
v_options_1646_ = lean_ctor_get(v_toCold_1641_, 2);
v_currNamespace_1647_ = lean_ctor_get(v_toCold_1641_, 4);
v_openDecls_1648_ = lean_ctor_get(v_toCold_1641_, 5);
v___x_1649_ = lean_box(v_suppressElabErrors_1643_);
v___x_1650_ = lean_box(v___y_1640_);
v___f_1651_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1651_, 0, v___x_1649_);
lean_closure_set(v___f_1651_, 1, v___x_1650_);
v___x_1652_ = 1;
v___x_1653_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1531_, v___x_1652_);
if (v___x_1653_ == 0)
{
v___y_1630_ = v_openDecls_1648_;
v___y_1631_ = v___f_1651_;
v___y_1632_ = v_currNamespace_1647_;
v___y_1633_ = v_fileName_1644_;
v___y_1634_ = v_fileMap_1645_;
v___y_1635_ = v___y_1640_;
v___y_1636_ = v_suppressElabErrors_1643_;
v___y_1637_ = v_ref_1642_;
v___y_1638_ = v___x_1653_;
goto v___jp_1629_;
}
else
{
lean_object* v___x_1654_; uint8_t v___x_1655_; 
v___x_1654_ = l_Lean_warningAsError;
v___x_1655_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3(v_options_1646_, v___x_1654_);
v___y_1630_ = v_openDecls_1648_;
v___y_1631_ = v___f_1651_;
v___y_1632_ = v_currNamespace_1647_;
v___y_1633_ = v_fileName_1644_;
v___y_1634_ = v_fileMap_1645_;
v___y_1635_ = v___y_1640_;
v___y_1636_ = v_suppressElabErrors_1643_;
v___y_1637_ = v_ref_1642_;
v___y_1638_ = v___x_1655_;
goto v___jp_1629_;
}
}
else
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
lean_dec_ref(v_msgData_1530_);
v___x_1656_ = lean_box(0);
v___x_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
lean_ctor_set(v___x_1657_, 1, v___y_1533_);
v___x_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
return v___x_1658_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___boxed(lean_object* v_ref_1661_, lean_object* v_msgData_1662_, lean_object* v_severity_1663_, lean_object* v_isSilent_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
uint8_t v_severity_boxed_1669_; uint8_t v_isSilent_boxed_1670_; lean_object* v_res_1671_; 
v_severity_boxed_1669_ = lean_unbox(v_severity_1663_);
v_isSilent_boxed_1670_ = lean_unbox(v_isSilent_1664_);
v_res_1671_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2(v_ref_1661_, v_msgData_1662_, v_severity_boxed_1669_, v_isSilent_boxed_1670_, v___y_1665_, v___y_1666_, v___y_1667_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v_ref_1661_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1(lean_object* v_ref_1672_, lean_object* v_msgData_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
uint8_t v___x_1678_; uint8_t v___x_1679_; lean_object* v___x_1680_; 
v___x_1678_ = 2;
v___x_1679_ = 0;
v___x_1680_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2(v_ref_1672_, v_msgData_1673_, v___x_1678_, v___x_1679_, v___y_1674_, v___y_1675_, v___y_1676_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1___boxed(lean_object* v_ref_1681_, lean_object* v_msgData_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1(v_ref_1681_, v_msgData_1682_, v___y_1683_, v___y_1684_, v___y_1685_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
lean_dec(v_ref_1681_);
return v_res_1687_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__0));
v___x_1691_ = l_Lean_MessageData_ofFormat(v___x_1690_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2(uint8_t v_recovering_1692_, lean_object* v_as_1693_, size_t v_sz_1694_, size_t v_i_1695_, uint8_t v_b_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
lean_object* v_snd_1702_; lean_object* v_snd_1703_; lean_object* v___y_1709_; uint8_t v___y_1710_; lean_object* v_a_1727_; uint8_t v___x_1730_; 
v___x_1730_ = lean_usize_dec_lt(v_i_1695_, v_sz_1694_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1731_ = lean_box(v_b_1696_);
v___x_1732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1731_);
lean_ctor_set(v___x_1732_, 1, v___y_1697_);
v___x_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1732_);
return v___x_1733_;
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1735_; uint8_t v_recovering_1736_; 
v_a_1734_ = lean_array_uget_borrowed(v_as_1693_, v_i_1695_);
v___x_1735_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1));
lean_inc(v_a_1734_);
v_recovering_1736_ = l_Lean_Syntax_isOfKind(v_a_1734_, v___x_1735_);
if (v_recovering_1736_ == 0)
{
lean_object* v___x_1737_; uint8_t v___x_1738_; 
v___x_1737_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2));
lean_inc(v_a_1734_);
v___x_1738_ = l_Lean_Syntax_isOfKind(v_a_1734_, v___x_1737_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1739_; uint8_t v___x_1740_; 
v___x_1739_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1));
lean_inc(v_a_1734_);
v___x_1740_ = l_Lean_Syntax_isOfKind(v_a_1734_, v___x_1739_);
if (v___x_1740_ == 0)
{
lean_object* v___x_1741_; lean_object* v___x_1742_; 
v___x_1741_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1);
lean_inc_ref(v___y_1697_);
v___x_1742_ = l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1(v_a_1734_, v___x_1741_, v___y_1697_, v___y_1698_, v___y_1699_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v_snd_1744_; lean_object* v___x_1745_; 
lean_dec_ref(v___y_1697_);
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1742_, 1);
v_snd_1744_ = lean_ctor_get(v_a_1743_, 1);
lean_inc(v_snd_1744_);
lean_dec(v_a_1743_);
v___x_1745_ = lean_box(v_b_1696_);
v_snd_1702_ = v___x_1745_;
v_snd_1703_ = v_snd_1744_;
goto v___jp_1701_;
}
else
{
lean_object* v_a_1746_; 
v_a_1746_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1742_, 1);
v_a_1727_ = v_a_1746_;
goto v___jp_1726_;
}
}
else
{
lean_object* v___x_1747_; 
lean_inc_ref(v___y_1697_);
lean_inc(v_a_1734_);
v___x_1747_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable(v_a_1734_, v___y_1697_, v___y_1698_, v___y_1699_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v_snd_1749_; lean_object* v___x_1750_; 
lean_dec_ref(v___y_1697_);
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
lean_inc(v_a_1748_);
lean_dec_ref_known(v___x_1747_, 1);
v_snd_1749_ = lean_ctor_get(v_a_1748_, 1);
lean_inc(v_snd_1749_);
lean_dec(v_a_1748_);
v___x_1750_ = lean_box(v_recovering_1736_);
v_snd_1702_ = v___x_1750_;
v_snd_1703_ = v_snd_1749_;
goto v___jp_1701_;
}
else
{
lean_object* v_a_1751_; 
v_a_1751_ = lean_ctor_get(v___x_1747_, 0);
lean_inc(v_a_1751_);
lean_dec_ref_known(v___x_1747_, 1);
v_a_1727_ = v_a_1751_;
goto v___jp_1726_;
}
}
}
else
{
lean_object* v___x_1752_; 
lean_inc_ref(v___y_1697_);
lean_inc(v_a_1734_);
v___x_1752_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable(v_a_1734_, v___y_1697_, v___y_1698_, v___y_1699_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_object* v_a_1753_; lean_object* v_snd_1754_; lean_object* v___x_1755_; 
lean_dec_ref(v___y_1697_);
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_a_1753_);
lean_dec_ref_known(v___x_1752_, 1);
v_snd_1754_ = lean_ctor_get(v_a_1753_, 1);
lean_inc(v_snd_1754_);
lean_dec(v_a_1753_);
v___x_1755_ = lean_box(v_recovering_1736_);
v_snd_1702_ = v___x_1755_;
v_snd_1703_ = v_snd_1754_;
goto v___jp_1701_;
}
else
{
lean_object* v_a_1756_; 
v_a_1756_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_a_1756_);
lean_dec_ref_known(v___x_1752_, 1);
v_a_1727_ = v_a_1756_;
goto v___jp_1726_;
}
}
}
else
{
if (v_b_1696_ == 0)
{
lean_object* v___x_1757_; 
lean_inc_ref(v___y_1697_);
lean_inc(v_a_1734_);
v___x_1757_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval(v_a_1734_, v___y_1697_, v___y_1698_, v___y_1699_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v_a_1758_; lean_object* v_snd_1759_; lean_object* v___x_1760_; 
lean_dec_ref(v___y_1697_);
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
lean_inc(v_a_1758_);
lean_dec_ref_known(v___x_1757_, 1);
v_snd_1759_ = lean_ctor_get(v_a_1758_, 1);
lean_inc(v_snd_1759_);
lean_dec(v_a_1758_);
v___x_1760_ = lean_box(v_b_1696_);
v_snd_1702_ = v___x_1760_;
v_snd_1703_ = v_snd_1759_;
goto v___jp_1701_;
}
else
{
lean_object* v_a_1761_; 
v_a_1761_ = lean_ctor_get(v___x_1757_, 0);
lean_inc(v_a_1761_);
lean_dec_ref_known(v___x_1757_, 1);
v_a_1727_ = v_a_1761_;
goto v___jp_1726_;
}
}
else
{
lean_object* v___x_1762_; 
v___x_1762_ = lean_box(v_b_1696_);
v_snd_1702_ = v___x_1762_;
v_snd_1703_ = v___y_1697_;
goto v___jp_1701_;
}
}
}
v___jp_1701_:
{
size_t v___x_1704_; size_t v___x_1705_; uint8_t v___x_1706_; 
v___x_1704_ = ((size_t)1ULL);
v___x_1705_ = lean_usize_add(v_i_1695_, v___x_1704_);
v___x_1706_ = lean_unbox(v_snd_1702_);
lean_dec(v_snd_1702_);
v_i_1695_ = v___x_1705_;
v_b_1696_ = v___x_1706_;
v___y_1697_ = v_snd_1703_;
goto _start;
}
v___jp_1708_:
{
if (v___y_1710_ == 0)
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1711_ = l_Lean_Exception_getRef(v___y_1709_);
v___x_1712_ = l_Lean_Exception_toMessageData(v___y_1709_);
v___x_1713_ = l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1(v___x_1711_, v___x_1712_, v___y_1697_, v___y_1698_, v___y_1699_);
lean_dec(v___x_1711_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; lean_object* v_snd_1715_; lean_object* v___x_1716_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
lean_inc(v_a_1714_);
lean_dec_ref_known(v___x_1713_, 1);
v_snd_1715_ = lean_ctor_get(v_a_1714_, 1);
lean_inc(v_snd_1715_);
lean_dec(v_a_1714_);
v___x_1716_ = lean_box(v_recovering_1692_);
v_snd_1702_ = v___x_1716_;
v_snd_1703_ = v_snd_1715_;
goto v___jp_1701_;
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
v_a_1717_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1713_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1713_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
else
{
lean_object* v___x_1725_; 
lean_dec_ref(v___y_1697_);
v___x_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1725_, 0, v___y_1709_);
return v___x_1725_;
}
}
v___jp_1726_:
{
uint8_t v___x_1728_; 
v___x_1728_ = l_Lean_Exception_isInterrupt(v_a_1727_);
if (v___x_1728_ == 0)
{
uint8_t v___x_1729_; 
lean_inc_ref(v_a_1727_);
v___x_1729_ = l_Lean_Exception_isRuntime(v_a_1727_);
v___y_1709_ = v_a_1727_;
v___y_1710_ = v___x_1729_;
goto v___jp_1708_;
}
else
{
v___y_1709_ = v_a_1727_;
v___y_1710_ = v___x_1728_;
goto v___jp_1708_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___boxed(lean_object* v_recovering_1763_, lean_object* v_as_1764_, lean_object* v_sz_1765_, lean_object* v_i_1766_, lean_object* v_b_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
uint8_t v_recovering_boxed_1772_; size_t v_sz_boxed_1773_; size_t v_i_boxed_1774_; uint8_t v_b_boxed_1775_; lean_object* v_res_1776_; 
v_recovering_boxed_1772_ = lean_unbox(v_recovering_1763_);
v_sz_boxed_1773_ = lean_unbox_usize(v_sz_1765_);
lean_dec(v_sz_1765_);
v_i_boxed_1774_ = lean_unbox_usize(v_i_1766_);
lean_dec(v_i_1766_);
v_b_boxed_1775_ = lean_unbox(v_b_1767_);
v_res_1776_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2(v_recovering_boxed_1772_, v_as_1764_, v_sz_boxed_1773_, v_i_boxed_1774_, v_b_boxed_1775_, v___y_1768_, v___y_1769_, v___y_1770_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v_as_1764_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg(lean_object* v_msg_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_ref_1781_; lean_object* v___x_1782_; lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1791_; 
v_ref_1781_ = lean_ctor_get(v___y_1778_, 2);
v___x_1782_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(v_msg_1777_, v___y_1778_, v___y_1779_);
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1791_ == 0)
{
v___x_1785_ = v___x_1782_;
v_isShared_1786_ = v_isSharedCheck_1791_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___x_1782_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1791_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1787_; lean_object* v___x_1789_; 
lean_inc(v_ref_1781_);
v___x_1787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1787_, 0, v_ref_1781_);
lean_ctor_set(v___x_1787_, 1, v_a_1783_);
if (v_isShared_1786_ == 0)
{
lean_ctor_set_tag(v___x_1785_, 1);
lean_ctor_set(v___x_1785_, 0, v___x_1787_);
v___x_1789_ = v___x_1785_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg___boxed(lean_object* v_msg_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg(v_msg_1792_, v___y_1793_, v___y_1794_);
lean_dec(v___y_1794_);
lean_dec_ref(v___y_1793_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(lean_object* v_ref_1797_, lean_object* v_msg_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
lean_object* v_toCold_1802_; lean_object* v_currRecDepth_1803_; lean_object* v_ref_1804_; uint8_t v_diag_1805_; uint8_t v_suppressElabErrors_1806_; lean_object* v_ref_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v_toCold_1802_ = lean_ctor_get(v___y_1799_, 0);
v_currRecDepth_1803_ = lean_ctor_get(v___y_1799_, 1);
v_ref_1804_ = lean_ctor_get(v___y_1799_, 2);
v_diag_1805_ = lean_ctor_get_uint8(v___y_1799_, sizeof(void*)*3);
v_suppressElabErrors_1806_ = lean_ctor_get_uint8(v___y_1799_, sizeof(void*)*3 + 1);
v_ref_1807_ = l_Lean_replaceRef(v_ref_1797_, v_ref_1804_);
lean_inc(v_currRecDepth_1803_);
lean_inc_ref(v_toCold_1802_);
v___x_1808_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1808_, 0, v_toCold_1802_);
lean_ctor_set(v___x_1808_, 1, v_currRecDepth_1803_);
lean_ctor_set(v___x_1808_, 2, v_ref_1807_);
lean_ctor_set_uint8(v___x_1808_, sizeof(void*)*3, v_diag_1805_);
lean_ctor_set_uint8(v___x_1808_, sizeof(void*)*3 + 1, v_suppressElabErrors_1806_);
v___x_1809_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg(v_msg_1798_, v___x_1808_, v___y_1800_);
lean_dec_ref_known(v___x_1808_, 3);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg___boxed(lean_object* v_ref_1810_, lean_object* v_msg_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(v_ref_1810_, v_msg_1811_, v___y_1812_, v___y_1813_);
lean_dec(v___y_1813_);
lean_dec_ref(v___y_1812_);
lean_dec(v_ref_1810_);
return v_res_1815_;
}
}
static lean_object* _init_l_Lake_Toml_elabToml___closed__3(void){
_start:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1822_ = ((lean_object*)(l_Lake_Toml_elabToml___closed__2));
v___x_1823_ = l_Lean_stringToMessageData(v___x_1822_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_elabToml(lean_object* v_x_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_){
_start:
{
lean_object* v___x_1832_; uint8_t v___x_1833_; 
v___x_1832_ = ((lean_object*)(l_Lake_Toml_elabToml___closed__1));
lean_inc(v_x_1828_);
v___x_1833_ = l_Lean_Syntax_isOfKind(v_x_1828_, v___x_1832_);
if (v___x_1833_ == 0)
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = lean_obj_once(&l_Lake_Toml_elabToml___closed__3, &l_Lake_Toml_elabToml___closed__3_once, _init_l_Lake_Toml_elabToml___closed__3);
v___x_1835_ = l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(v_x_1828_, v___x_1834_, v_a_1829_, v_a_1830_);
lean_dec(v_x_1828_);
return v___x_1835_;
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; uint8_t v_recovering_1839_; 
v___x_1836_ = lean_unsigned_to_nat(0u);
v___x_1837_ = l_Lean_Syntax_getArg(v_x_1828_, v___x_1836_);
v___x_1838_ = ((lean_object*)(l_Lake_Toml_elabToml___closed__4));
v_recovering_1839_ = l_Lean_Syntax_isOfKind(v___x_1837_, v___x_1838_);
if (v_recovering_1839_ == 0)
{
lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1840_ = lean_obj_once(&l_Lake_Toml_elabToml___closed__3, &l_Lake_Toml_elabToml___closed__3_once, _init_l_Lake_Toml_elabToml___closed__3);
v___x_1841_ = l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(v_x_1828_, v___x_1840_, v_a_1829_, v_a_1830_);
lean_dec(v_x_1828_);
return v___x_1841_;
}
else
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v_xs_1844_; uint8_t v_recovering_1845_; lean_object* v___x_1846_; size_t v_sz_1847_; size_t v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1842_ = lean_unsigned_to_nat(1u);
v___x_1843_ = l_Lean_Syntax_getArg(v_x_1828_, v___x_1842_);
lean_dec(v_x_1828_);
v_xs_1844_ = l_Lean_Syntax_getArgs(v___x_1843_);
lean_dec(v___x_1843_);
v_recovering_1845_ = 0;
v___x_1846_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_xs_1844_);
lean_dec_ref(v_xs_1844_);
v_sz_1847_ = lean_array_size(v___x_1846_);
v___x_1848_ = ((size_t)0ULL);
v___x_1849_ = ((lean_object*)(l_Lake_Toml_instInhabitedElabState_default___closed__1));
v___x_1850_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2(v_recovering_1839_, v___x_1846_, v_sz_1847_, v___x_1848_, v_recovering_1845_, v___x_1849_, v_a_1829_, v_a_1830_);
lean_dec_ref(v___x_1846_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1861_; 
v_a_1851_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1853_ = v___x_1850_;
v_isShared_1854_ = v_isSharedCheck_1861_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1850_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1861_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v_snd_1855_; lean_object* v_items_1856_; lean_object* v___x_1857_; lean_object* v___x_1859_; 
v_snd_1855_ = lean_ctor_get(v_a_1851_, 1);
lean_inc(v_snd_1855_);
lean_dec(v_a_1851_);
v_items_1856_ = lean_ctor_get(v_snd_1855_, 5);
lean_inc_ref(v_items_1856_);
lean_dec(v_snd_1855_);
v___x_1857_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable(v_items_1856_);
lean_dec_ref(v_items_1856_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 0, v___x_1857_);
v___x_1859_ = v___x_1853_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___x_1857_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
else
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
v_a_1862_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1864_ = v___x_1850_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1850_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1867_; 
if (v_isShared_1865_ == 0)
{
v___x_1867_ = v___x_1864_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1862_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_elabToml___boxed(lean_object* v_x_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lake_Toml_elabToml(v_x_1870_, v_a_1871_, v_a_1872_);
lean_dec(v_a_1872_);
lean_dec_ref(v_a_1871_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0(lean_object* v_00_u03b1_1875_, lean_object* v_ref_1876_, lean_object* v_msg_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(v_ref_1876_, v_msg_1877_, v___y_1878_, v___y_1879_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___boxed(lean_object* v_00_u03b1_1882_, lean_object* v_ref_1883_, lean_object* v_msg_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0(v_00_u03b1_1882_, v_ref_1883_, v_msg_1884_, v___y_1885_, v___y_1886_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v_ref_1883_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0(lean_object* v_00_u03b1_1889_, lean_object* v_msg_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg(v_msg_1890_, v___y_1891_, v___y_1892_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1895_, lean_object* v_msg_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0(v_00_u03b1_1895_, v_msg_1896_, v___y_1897_, v___y_1898_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
return v_res_1900_;
}
}
lean_object* runtime_initialize_Lake_Toml_Elab_Value(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_Elab_Expression(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Toml_Elab_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Toml_instInhabitedKeyTy_default = _init_l_Lake_Toml_instInhabitedKeyTy_default();
l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedKeyTy = _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedKeyTy();
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Toml_Grammar(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_Elab_Expression(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Toml_Elab_Value(uint8_t builtin);
lean_object* initialize_Lake_Toml_Grammar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_Elab_Expression(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Toml_Elab_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Elab_Expression(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_Elab_Expression(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_Elab_Expression(builtin);
}
#ifdef __cplusplus
}
#endif
