// Lean compiler output
// Module: Lean.Exception
// Imports: public import Lean.InternalExceptionId public import Lean.ErrorExplanation
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
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_kindOfErrorName(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_ReaderT_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_tagWithErrorName(lean_object*, lean_object*);
lean_object* l_Lean_registerInternalExceptionId(lean_object*);
extern lean_object* l_Lean_instInhabitedMessageData_default;
lean_object* l_Lean_MessageData_stripNestedTags(lean_object*);
lean_object* l_Lean_MessageData_kind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_InternalExceptionId_toString(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_error_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_error_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_internal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_internal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_toMessageData(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Exception_hasSyntheticSorry(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_hasSyntheticSorry___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_getRef(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_getRef___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedException___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedException___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedException;
LEAN_EXPORT lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_unknownIdentifierMessageTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_unknownIdentifierMessageTag___closed__0 = (const lean_object*)&l_Lean_unknownIdentifierMessageTag___closed__0_value;
static const lean_string_object l_Lean_unknownIdentifierMessageTag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "unknownIdentifier"};
static const lean_object* l_Lean_unknownIdentifierMessageTag___closed__1 = (const lean_object*)&l_Lean_unknownIdentifierMessageTag___closed__1_value;
static const lean_ctor_object l_Lean_unknownIdentifierMessageTag___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unknownIdentifierMessageTag___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 31, 155, 49, 49, 182, 172, 127)}};
static const lean_ctor_object l_Lean_unknownIdentifierMessageTag___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unknownIdentifierMessageTag___closed__2_value_aux_0),((lean_object*)&l_Lean_unknownIdentifierMessageTag___closed__1_value),LEAN_SCALAR_PTR_LITERAL(76, 52, 199, 197, 93, 108, 22, 179)}};
static const lean_object* l_Lean_unknownIdentifierMessageTag___closed__2 = (const lean_object*)&l_Lean_unknownIdentifierMessageTag___closed__2_value;
static lean_once_cell_t l_Lean_unknownIdentifierMessageTag___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_unknownIdentifierMessageTag___closed__3;
LEAN_EXPORT lean_object* l_Lean_unknownIdentifierMessageTag;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedErrorAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Exception_0__Lean_initFn___closed__0_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "interrupt"};
static const lean_object* l___private_Lean_Exception_0__Lean_initFn___closed__0_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Exception_0__Lean_initFn___closed__0_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Exception_0__Lean_initFn___closed__1_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Exception_0__Lean_initFn___closed__0_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 100, 242, 233, 23, 237, 26, 183)}};
static const lean_object* l___private_Lean_Exception_0__Lean_initFn___closed__1_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Exception_0__Lean_initFn___closed__1_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Exception_0__Lean_initFn_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Exception_0__Lean_initFn_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_interruptExceptionId;
static lean_once_cell_t l_Lean_throwInterruptException___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Exception_isInterrupt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_isInterrupt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthStateRefT_x27OfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthStateRefT_x27OfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthStateRefT_x27OfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthMonadCacheTOfMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthMonadCacheTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthMonadCacheTOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Exception_isMaxRecDepth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_isMaxRecDepth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_termThrowError_____00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_termThrowError_____00__closed__0 = (const lean_object*)&l_Lean_termThrowError_____00__closed__0_value;
static const lean_string_object l_Lean_termThrowError_____00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "termThrowError__"};
static const lean_object* l_Lean_termThrowError_____00__closed__1 = (const lean_object*)&l_Lean_termThrowError_____00__closed__1_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_termThrowError_____00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__2_value_aux_0),((lean_object*)&l_Lean_termThrowError_____00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 45, 105, 121, 242, 5, 105, 46)}};
static const lean_object* l_Lean_termThrowError_____00__closed__2 = (const lean_object*)&l_Lean_termThrowError_____00__closed__2_value;
static const lean_string_object l_Lean_termThrowError_____00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_termThrowError_____00__closed__3 = (const lean_object*)&l_Lean_termThrowError_____00__closed__3_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_termThrowError_____00__closed__4 = (const lean_object*)&l_Lean_termThrowError_____00__closed__4_value;
static const lean_string_object l_Lean_termThrowError_____00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "throwError "};
static const lean_object* l_Lean_termThrowError_____00__closed__5 = (const lean_object*)&l_Lean_termThrowError_____00__closed__5_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__5_value)}};
static const lean_object* l_Lean_termThrowError_____00__closed__6 = (const lean_object*)&l_Lean_termThrowError_____00__closed__6_value;
static const lean_string_object l_Lean_termThrowError_____00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lean_termThrowError_____00__closed__7 = (const lean_object*)&l_Lean_termThrowError_____00__closed__7_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__7_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lean_termThrowError_____00__closed__8 = (const lean_object*)&l_Lean_termThrowError_____00__closed__8_value;
static const lean_string_object l_Lean_termThrowError_____00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l_Lean_termThrowError_____00__closed__9 = (const lean_object*)&l_Lean_termThrowError_____00__closed__9_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__9_value),LEAN_SCALAR_PTR_LITERAL(156, 58, 177, 246, 99, 11, 16, 252)}};
static const lean_object* l_Lean_termThrowError_____00__closed__10 = (const lean_object*)&l_Lean_termThrowError_____00__closed__10_value;
static const lean_string_object l_Lean_termThrowError_____00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_termThrowError_____00__closed__11 = (const lean_object*)&l_Lean_termThrowError_____00__closed__11_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__11_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_termThrowError_____00__closed__12 = (const lean_object*)&l_Lean_termThrowError_____00__closed__12_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_termThrowError_____00__closed__13 = (const lean_object*)&l_Lean_termThrowError_____00__closed__13_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__10_value),((lean_object*)&l_Lean_termThrowError_____00__closed__13_value)}};
static const lean_object* l_Lean_termThrowError_____00__closed__14 = (const lean_object*)&l_Lean_termThrowError_____00__closed__14_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__8_value),((lean_object*)&l_Lean_termThrowError_____00__closed__14_value),((lean_object*)&l_Lean_termThrowError_____00__closed__13_value)}};
static const lean_object* l_Lean_termThrowError_____00__closed__15 = (const lean_object*)&l_Lean_termThrowError_____00__closed__15_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__4_value),((lean_object*)&l_Lean_termThrowError_____00__closed__6_value),((lean_object*)&l_Lean_termThrowError_____00__closed__15_value)}};
static const lean_object* l_Lean_termThrowError_____00__closed__16 = (const lean_object*)&l_Lean_termThrowError_____00__closed__16_value;
static const lean_ctor_object l_Lean_termThrowError_____00__closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__2_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__16_value)}};
static const lean_object* l_Lean_termThrowError_____00__closed__17 = (const lean_object*)&l_Lean_termThrowError_____00__closed__17_value;
LEAN_EXPORT const lean_object* l_Lean_termThrowError____ = (const lean_object*)&l_Lean_termThrowError_____00__closed__17_value;
static const lean_string_object l_Lean_termThrowErrorAt_________00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "termThrowErrorAt____"};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__0 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__0_value;
static const lean_ctor_object l_Lean_termThrowErrorAt_________00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_termThrowErrorAt_________00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__1_value_aux_0),((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 135, 54, 14, 35, 246, 144, 68)}};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__1 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__1_value;
static const lean_string_object l_Lean_termThrowErrorAt_________00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "throwErrorAt "};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__2 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__2_value;
static const lean_ctor_object l_Lean_termThrowErrorAt_________00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__2_value)}};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__3 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__3_value;
static const lean_ctor_object l_Lean_termThrowErrorAt_________00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__12_value),((lean_object*)(((size_t)(1024) << 1) | 1))}};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__4 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__4_value;
static const lean_ctor_object l_Lean_termThrowErrorAt_________00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__4_value),((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__3_value),((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__4_value)}};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__5 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__5_value;
static const lean_string_object l_Lean_termThrowErrorAt_________00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ppSpace"};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__6 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__6_value;
static const lean_ctor_object l_Lean_termThrowErrorAt_________00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(207, 47, 58, 43, 30, 240, 125, 246)}};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__7 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__7_value;
static const lean_ctor_object l_Lean_termThrowErrorAt_________00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__7_value)}};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__8 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__8_value;
static const lean_ctor_object l_Lean_termThrowErrorAt_________00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__4_value),((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__5_value),((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__8_value)}};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__9 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__9_value;
static const lean_ctor_object l_Lean_termThrowErrorAt_________00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termThrowError_____00__closed__4_value),((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__9_value),((lean_object*)&l_Lean_termThrowError_____00__closed__15_value)}};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__10 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__10_value;
static const lean_ctor_object l_Lean_termThrowErrorAt_________00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_termThrowErrorAt_________00__closed__10_value)}};
static const lean_object* l_Lean_termThrowErrorAt_________00__closed__11 = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_termThrowErrorAt________ = (const lean_object*)&l_Lean_termThrowErrorAt_________00__closed__11_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__0 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__0_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__1 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__1_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__2 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__2_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__3 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__3_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__4 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__4_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.throwError"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__6 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__6_value;
static lean_once_cell_t l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__7;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "throwError"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__8 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__8_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__9_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(205, 114, 235, 161, 61, 182, 120, 70)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__9 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__9_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__10 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__10_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__9_value)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__11 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__11_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__12 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__12_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__10_value),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__12_value)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__13 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__13_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__14 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__14_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__15 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__15_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__16 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__16_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__18 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__18_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__20 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__20_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__21 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__21_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__22 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__22_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__23 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__23_value;
static lean_once_cell_t l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__24;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__25 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__25_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__25_value)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__26 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__26_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__27 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__27_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termM!_"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__28 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__28_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__29_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(241, 254, 249, 246, 41, 222, 210, 184)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__29 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__29_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "m!"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__30 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__30_value;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__31 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__31_value;
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.throwErrorAt"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__0 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__0_value;
static lean_once_cell_t l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__1;
static const lean_string_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "throwErrorAt"};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__2 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__2_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termThrowError_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__3_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 66, 91, 242, 19, 251, 76, 72)}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__3 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__3_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__4 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__4_value;
static const lean_ctor_object l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__5 = (const lean_object*)&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Exception_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Exception_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_ref_8_; lean_object* v_msg_9_; lean_object* v___x_10_; 
v_ref_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_ref_8_);
v_msg_9_ = lean_ctor_get(v_t_6_, 1);
lean_inc_ref(v_msg_9_);
lean_dec_ref_known(v_t_6_, 2);
v___x_10_ = lean_apply_2(v_k_7_, v_ref_8_, v_msg_9_);
return v___x_10_;
}
else
{
lean_object* v_id_11_; lean_object* v_extra_12_; lean_object* v___x_13_; 
v_id_11_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_id_11_);
v_extra_12_ = lean_ctor_get(v_t_6_, 1);
lean_inc(v_extra_12_);
lean_dec_ref_known(v_t_6_, 2);
v___x_13_ = lean_apply_2(v_k_7_, v_id_11_, v_extra_12_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_ctorElim(lean_object* v_motive_14_, lean_object* v_ctorIdx_15_, lean_object* v_t_16_, lean_object* v_h_17_, lean_object* v_k_18_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Exception_ctorElim___redArg(v_t_16_, v_k_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_ctorElim___boxed(lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Exception_ctorElim(v_motive_20_, v_ctorIdx_21_, v_t_22_, v_h_23_, v_k_24_);
lean_dec(v_ctorIdx_21_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_error_elim___redArg(lean_object* v_t_26_, lean_object* v_error_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Exception_ctorElim___redArg(v_t_26_, v_error_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_error_elim(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_error_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Exception_ctorElim___redArg(v_t_30_, v_error_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_internal_elim___redArg(lean_object* v_t_34_, lean_object* v_internal_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Exception_ctorElim___redArg(v_t_34_, v_internal_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_internal_elim(lean_object* v_motive_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_internal_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Exception_ctorElim___redArg(v_t_38_, v_internal_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_toMessageData(lean_object* v_x_42_){
_start:
{
if (lean_obj_tag(v_x_42_) == 0)
{
lean_object* v_msg_43_; 
v_msg_43_ = lean_ctor_get(v_x_42_, 1);
lean_inc_ref(v_msg_43_);
lean_dec_ref_known(v_x_42_, 2);
return v_msg_43_;
}
else
{
lean_object* v_id_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v_id_44_ = lean_ctor_get(v_x_42_, 0);
lean_inc(v_id_44_);
lean_dec_ref_known(v_x_42_, 2);
v___x_45_ = l_Lean_InternalExceptionId_toString(v_id_44_);
v___x_46_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
v___x_47_ = l_Lean_MessageData_ofFormat(v___x_46_);
return v___x_47_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Exception_hasSyntheticSorry(lean_object* v_x_48_){
_start:
{
if (lean_obj_tag(v_x_48_) == 0)
{
lean_object* v_msg_49_; uint8_t v___x_50_; 
v_msg_49_ = lean_ctor_get(v_x_48_, 1);
lean_inc_ref(v_msg_49_);
lean_dec_ref_known(v_x_48_, 2);
v___x_50_ = l_Lean_MessageData_hasSyntheticSorry(v_msg_49_);
return v___x_50_;
}
else
{
uint8_t v___x_51_; 
lean_dec_ref(v_x_48_);
v___x_51_ = 0;
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_hasSyntheticSorry___boxed(lean_object* v_x_52_){
_start:
{
uint8_t v_res_53_; lean_object* v_r_54_; 
v_res_53_ = l_Lean_Exception_hasSyntheticSorry(v_x_52_);
v_r_54_ = lean_box(v_res_53_);
return v_r_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_getRef(lean_object* v_x_55_){
_start:
{
if (lean_obj_tag(v_x_55_) == 0)
{
lean_object* v_ref_56_; 
v_ref_56_ = lean_ctor_get(v_x_55_, 0);
lean_inc(v_ref_56_);
return v_ref_56_;
}
else
{
lean_object* v___x_57_; 
v___x_57_ = lean_box(0);
return v___x_57_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_getRef___boxed(lean_object* v_x_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lean_Exception_getRef(v_x_58_);
lean_dec_ref(v_x_58_);
return v_res_59_;
}
}
static lean_object* _init_l_Lean_instInhabitedException___closed__0(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = l_Lean_instInhabitedMessageData_default;
v___x_61_ = lean_box(0);
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_instInhabitedException(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_obj_once(&l_Lean_instInhabitedException___closed__0, &l_Lean_instInhabitedException___closed__0_once, _init_l_Lean_instInhabitedException___closed__0);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg___lam__0(lean_object* v_ref_64_, lean_object* v_toPure_65_, lean_object* v_msg_66_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_67_, 0, v_ref_64_);
lean_ctor_set(v___x_67_, 1, v_msg_66_);
v___x_68_ = lean_apply_2(v_toPure_65_, lean_box(0), v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg___lam__1(lean_object* v_toPure_69_, lean_object* v_inst_70_, lean_object* v_toBind_71_, lean_object* v_ref_72_, lean_object* v_msg_73_){
_start:
{
lean_object* v___f_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___f_74_ = lean_alloc_closure((void*)(l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg___lam__0), 3, 2);
lean_closure_set(v___f_74_, 0, v_ref_72_);
lean_closure_set(v___f_74_, 1, v_toPure_69_);
v___x_75_ = lean_apply_1(v_inst_70_, v_msg_73_);
v___x_76_ = lean_apply_4(v_toBind_71_, lean_box(0), lean_box(0), v___x_75_, v___f_74_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object* v_inst_77_, lean_object* v_inst_78_){
_start:
{
lean_object* v_toApplicative_79_; lean_object* v_toBind_80_; lean_object* v_toPure_81_; lean_object* v___f_82_; 
v_toApplicative_79_ = lean_ctor_get(v_inst_78_, 0);
lean_inc_ref(v_toApplicative_79_);
v_toBind_80_ = lean_ctor_get(v_inst_78_, 1);
lean_inc(v_toBind_80_);
lean_dec_ref(v_inst_78_);
v_toPure_81_ = lean_ctor_get(v_toApplicative_79_, 1);
lean_inc(v_toPure_81_);
lean_dec_ref(v_toApplicative_79_);
v___f_82_ = lean_alloc_closure((void*)(l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg___lam__1), 5, 3);
lean_closure_set(v___f_82_, 0, v_toPure_81_);
lean_closure_set(v___f_82_, 1, v_inst_77_);
lean_closure_set(v___f_82_, 2, v_toBind_80_);
return v___f_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad(lean_object* v_m_83_, lean_object* v_inst_84_, lean_object* v_inst_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v_inst_84_, v_inst_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___redArg___lam__0(lean_object* v_toMonadExceptOf_87_, lean_object* v_____x_88_){
_start:
{
lean_object* v_fst_89_; lean_object* v_snd_90_; lean_object* v_throw_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_99_; 
v_fst_89_ = lean_ctor_get(v_____x_88_, 0);
v_snd_90_ = lean_ctor_get(v_____x_88_, 1);
v_throw_91_ = lean_ctor_get(v_toMonadExceptOf_87_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v_toMonadExceptOf_87_);
if (v_isSharedCheck_99_ == 0)
{
lean_object* v_unused_100_; 
v_unused_100_ = lean_ctor_get(v_toMonadExceptOf_87_, 1);
lean_dec(v_unused_100_);
v___x_93_ = v_toMonadExceptOf_87_;
v_isShared_94_ = v_isSharedCheck_99_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_throw_91_);
lean_dec(v_toMonadExceptOf_87_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_99_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___x_96_; 
lean_inc(v_snd_90_);
lean_inc(v_fst_89_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v_snd_90_);
lean_ctor_set(v___x_93_, 0, v_fst_89_);
v___x_96_ = v___x_93_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_fst_89_);
lean_ctor_set(v_reuseFailAlloc_98_, 1, v_snd_90_);
v___x_96_ = v_reuseFailAlloc_98_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
lean_object* v___x_97_; 
v___x_97_ = lean_apply_2(v_throw_91_, lean_box(0), v___x_96_);
return v___x_97_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___redArg___lam__0___boxed(lean_object* v_toMonadExceptOf_101_, lean_object* v_____x_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_throwError___redArg___lam__0(v_toMonadExceptOf_101_, v_____x_102_);
lean_dec_ref(v_____x_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___redArg___lam__1(lean_object* v_toAddErrorMessageContext_104_, lean_object* v_msg_105_, lean_object* v_toBind_106_, lean_object* v___f_107_, lean_object* v_ref_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = lean_apply_2(v_toAddErrorMessageContext_104_, v_ref_108_, v_msg_105_);
v___x_110_ = lean_apply_4(v_toBind_106_, lean_box(0), lean_box(0), v___x_109_, v___f_107_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___redArg(lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_msg_113_){
_start:
{
lean_object* v_toMonadRef_114_; lean_object* v_toBind_115_; lean_object* v_toMonadExceptOf_116_; lean_object* v_toAddErrorMessageContext_117_; lean_object* v_getRef_118_; lean_object* v___f_119_; lean_object* v___f_120_; lean_object* v___x_121_; 
v_toMonadRef_114_ = lean_ctor_get(v_inst_112_, 1);
lean_inc_ref(v_toMonadRef_114_);
v_toBind_115_ = lean_ctor_get(v_inst_111_, 1);
lean_inc_n(v_toBind_115_, 2);
lean_dec_ref(v_inst_111_);
v_toMonadExceptOf_116_ = lean_ctor_get(v_inst_112_, 0);
lean_inc_ref(v_toMonadExceptOf_116_);
v_toAddErrorMessageContext_117_ = lean_ctor_get(v_inst_112_, 2);
lean_inc(v_toAddErrorMessageContext_117_);
lean_dec_ref(v_inst_112_);
v_getRef_118_ = lean_ctor_get(v_toMonadRef_114_, 0);
lean_inc(v_getRef_118_);
lean_dec_ref(v_toMonadRef_114_);
v___f_119_ = lean_alloc_closure((void*)(l_Lean_throwError___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_119_, 0, v_toMonadExceptOf_116_);
v___f_120_ = lean_alloc_closure((void*)(l_Lean_throwError___redArg___lam__1), 5, 4);
lean_closure_set(v___f_120_, 0, v_toAddErrorMessageContext_117_);
lean_closure_set(v___f_120_, 1, v_msg_113_);
lean_closure_set(v___f_120_, 2, v_toBind_115_);
lean_closure_set(v___f_120_, 3, v___f_119_);
v___x_121_ = lean_apply_4(v_toBind_115_, lean_box(0), lean_box(0), v_getRef_118_, v___f_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError(lean_object* v_m_122_, lean_object* v_00_u03b1_123_, lean_object* v_inst_124_, lean_object* v_inst_125_, lean_object* v_msg_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lean_throwError___redArg(v_inst_124_, v_inst_125_, v_msg_126_);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_unknownIdentifierMessageTag___closed__3(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = ((lean_object*)(l_Lean_unknownIdentifierMessageTag___closed__2));
v___x_134_ = l_Lean_kindOfErrorName(v___x_133_);
return v___x_134_;
}
}
static lean_object* _init_l_Lean_unknownIdentifierMessageTag(void){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_obj_once(&l_Lean_unknownIdentifierMessageTag___closed__3, &l_Lean_unknownIdentifierMessageTag___closed__3_once, _init_l_Lean_unknownIdentifierMessageTag___closed__3);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___redArg___lam__0(lean_object* v_ref_136_, lean_object* v_withRef_137_, lean_object* v___x_138_, lean_object* v_oldRef_139_){
_start:
{
lean_object* v_ref_140_; lean_object* v___x_141_; 
v_ref_140_ = l_Lean_replaceRef(v_ref_136_, v_oldRef_139_);
v___x_141_ = lean_apply_3(v_withRef_137_, lean_box(0), v_ref_140_, v___x_138_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___redArg___lam__0___boxed(lean_object* v_ref_142_, lean_object* v_withRef_143_, lean_object* v___x_144_, lean_object* v_oldRef_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_throwErrorAt___redArg___lam__0(v_ref_142_, v_withRef_143_, v___x_144_, v_oldRef_145_);
lean_dec(v_oldRef_145_);
lean_dec(v_ref_142_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___redArg(lean_object* v_inst_147_, lean_object* v_inst_148_, lean_object* v_ref_149_, lean_object* v_msg_150_){
_start:
{
lean_object* v_toMonadRef_151_; lean_object* v_toBind_152_; lean_object* v_getRef_153_; lean_object* v_withRef_154_; lean_object* v___x_155_; lean_object* v___f_156_; lean_object* v___x_157_; 
v_toMonadRef_151_ = lean_ctor_get(v_inst_148_, 1);
v_toBind_152_ = lean_ctor_get(v_inst_147_, 1);
lean_inc(v_toBind_152_);
v_getRef_153_ = lean_ctor_get(v_toMonadRef_151_, 0);
lean_inc(v_getRef_153_);
v_withRef_154_ = lean_ctor_get(v_toMonadRef_151_, 1);
lean_inc(v_withRef_154_);
v___x_155_ = l_Lean_throwError___redArg(v_inst_147_, v_inst_148_, v_msg_150_);
v___f_156_ = lean_alloc_closure((void*)(l_Lean_throwErrorAt___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_156_, 0, v_ref_149_);
lean_closure_set(v___f_156_, 1, v_withRef_154_);
lean_closure_set(v___f_156_, 2, v___x_155_);
v___x_157_ = lean_apply_4(v_toBind_152_, lean_box(0), lean_box(0), v_getRef_153_, v___f_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt(lean_object* v_m_158_, lean_object* v_00_u03b1_159_, lean_object* v_inst_160_, lean_object* v_inst_161_, lean_object* v_ref_162_, lean_object* v_msg_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_throwErrorAt___redArg(v_inst_160_, v_inst_161_, v_ref_162_, v_msg_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedError___redArg___lam__1(lean_object* v_msg_165_, lean_object* v_name_166_, lean_object* v_toAddErrorMessageContext_167_, lean_object* v_toBind_168_, lean_object* v___f_169_, lean_object* v_ref_170_){
_start:
{
lean_object* v_msg_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v_msg_171_ = l_Lean_MessageData_tagWithErrorName(v_msg_165_, v_name_166_);
v___x_172_ = lean_apply_2(v_toAddErrorMessageContext_167_, v_ref_170_, v_msg_171_);
v___x_173_ = lean_apply_4(v_toBind_168_, lean_box(0), lean_box(0), v___x_172_, v___f_169_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedError___redArg(lean_object* v_inst_174_, lean_object* v_inst_175_, lean_object* v_name_176_, lean_object* v_msg_177_){
_start:
{
lean_object* v_toMonadRef_178_; lean_object* v_toBind_179_; lean_object* v_toMonadExceptOf_180_; lean_object* v_toAddErrorMessageContext_181_; lean_object* v_getRef_182_; lean_object* v___f_183_; lean_object* v___f_184_; lean_object* v___x_185_; 
v_toMonadRef_178_ = lean_ctor_get(v_inst_175_, 1);
lean_inc_ref(v_toMonadRef_178_);
v_toBind_179_ = lean_ctor_get(v_inst_174_, 1);
lean_inc_n(v_toBind_179_, 2);
lean_dec_ref(v_inst_174_);
v_toMonadExceptOf_180_ = lean_ctor_get(v_inst_175_, 0);
lean_inc_ref(v_toMonadExceptOf_180_);
v_toAddErrorMessageContext_181_ = lean_ctor_get(v_inst_175_, 2);
lean_inc(v_toAddErrorMessageContext_181_);
lean_dec_ref(v_inst_175_);
v_getRef_182_ = lean_ctor_get(v_toMonadRef_178_, 0);
lean_inc(v_getRef_182_);
lean_dec_ref(v_toMonadRef_178_);
v___f_183_ = lean_alloc_closure((void*)(l_Lean_throwError___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_183_, 0, v_toMonadExceptOf_180_);
v___f_184_ = lean_alloc_closure((void*)(l_Lean_throwNamedError___redArg___lam__1), 6, 5);
lean_closure_set(v___f_184_, 0, v_msg_177_);
lean_closure_set(v___f_184_, 1, v_name_176_);
lean_closure_set(v___f_184_, 2, v_toAddErrorMessageContext_181_);
lean_closure_set(v___f_184_, 3, v_toBind_179_);
lean_closure_set(v___f_184_, 4, v___f_183_);
v___x_185_ = lean_apply_4(v_toBind_179_, lean_box(0), lean_box(0), v_getRef_182_, v___f_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedError(lean_object* v_m_186_, lean_object* v_00_u03b1_187_, lean_object* v_inst_188_, lean_object* v_inst_189_, lean_object* v_name_190_, lean_object* v_msg_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_throwNamedError___redArg(v_inst_188_, v_inst_189_, v_name_190_, v_msg_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedErrorAt___redArg(lean_object* v_inst_193_, lean_object* v_inst_194_, lean_object* v_ref_195_, lean_object* v_name_196_, lean_object* v_msg_197_){
_start:
{
lean_object* v_toMonadRef_198_; lean_object* v_toBind_199_; lean_object* v_getRef_200_; lean_object* v_withRef_201_; lean_object* v___x_202_; lean_object* v___f_203_; lean_object* v___x_204_; 
v_toMonadRef_198_ = lean_ctor_get(v_inst_194_, 1);
v_toBind_199_ = lean_ctor_get(v_inst_193_, 1);
lean_inc(v_toBind_199_);
v_getRef_200_ = lean_ctor_get(v_toMonadRef_198_, 0);
lean_inc(v_getRef_200_);
v_withRef_201_ = lean_ctor_get(v_toMonadRef_198_, 1);
lean_inc(v_withRef_201_);
v___x_202_ = l_Lean_throwNamedError___redArg(v_inst_193_, v_inst_194_, v_name_196_, v_msg_197_);
v___f_203_ = lean_alloc_closure((void*)(l_Lean_throwErrorAt___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_203_, 0, v_ref_195_);
lean_closure_set(v___f_203_, 1, v_withRef_201_);
lean_closure_set(v___f_203_, 2, v___x_202_);
v___x_204_ = lean_apply_4(v_toBind_199_, lean_box(0), lean_box(0), v_getRef_200_, v___f_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedErrorAt(lean_object* v_m_205_, lean_object* v_00_u03b1_206_, lean_object* v_inst_207_, lean_object* v_inst_208_, lean_object* v_ref_209_, lean_object* v_name_210_, lean_object* v_msg_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lean_throwNamedErrorAt___redArg(v_inst_207_, v_inst_208_, v_ref_209_, v_name_210_, v_msg_211_);
return v___x_212_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_213_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__0);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
return v___x_215_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_216_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__1);
v___x_217_ = lean_unsigned_to_nat(0u);
v___x_218_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
lean_ctor_set(v___x_218_, 2, v___x_217_);
lean_ctor_set(v___x_218_, 3, v___x_217_);
lean_ctor_set(v___x_218_, 4, v___x_216_);
lean_ctor_set(v___x_218_, 5, v___x_216_);
lean_ctor_set(v___x_218_, 6, v___x_216_);
lean_ctor_set(v___x_218_, 7, v___x_216_);
lean_ctor_set(v___x_218_, 8, v___x_216_);
lean_ctor_set(v___x_218_, 9, v___x_216_);
lean_ctor_set(v___x_218_, 10, v___x_216_);
return v___x_218_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_219_ = lean_unsigned_to_nat(32u);
v___x_220_ = lean_mk_empty_array_with_capacity(v___x_219_);
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__4(void){
_start:
{
size_t v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_222_ = ((size_t)5ULL);
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_224_ = lean_unsigned_to_nat(32u);
v___x_225_ = lean_mk_empty_array_with_capacity(v___x_224_);
v___x_226_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__3);
v___x_227_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v___x_225_);
lean_ctor_set(v___x_227_, 2, v___x_223_);
lean_ctor_set(v___x_227_, 3, v___x_223_);
lean_ctor_set_usize(v___x_227_, 4, v___x_222_);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_228_ = lean_box(1);
v___x_229_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__4);
v___x_230_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__1);
v___x_231_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
lean_ctor_set(v___x_231_, 1, v___x_229_);
lean_ctor_set(v___x_231_, 2, v___x_228_);
return v___x_231_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__6));
v___x_234_ = l_Lean_stringToMessageData(v___x_233_);
return v___x_234_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__9(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__8));
v___x_237_ = l_Lean_stringToMessageData(v___x_236_);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__11(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__10));
v___x_240_ = l_Lean_stringToMessageData(v___x_239_);
return v___x_240_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__13(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__12));
v___x_243_ = l_Lean_stringToMessageData(v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__15(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__14));
v___x_246_ = l_Lean_stringToMessageData(v___x_245_);
return v___x_246_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__17(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__16));
v___x_249_ = l_Lean_stringToMessageData(v___x_248_);
return v___x_249_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__19(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__18));
v___x_252_ = l_Lean_stringToMessageData(v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0(lean_object* v_declHint_253_, lean_object* v_toPure_254_, lean_object* v_msg_255_, lean_object* v___x_256_, lean_object* v_env_257_){
_start:
{
uint8_t v___x_258_; 
v___x_258_ = l_Lean_Name_isAnonymous(v_declHint_253_);
if (v___x_258_ == 0)
{
uint8_t v_isExporting_259_; 
v_isExporting_259_ = lean_ctor_get_uint8(v_env_257_, sizeof(void*)*8);
if (v_isExporting_259_ == 0)
{
lean_object* v___x_260_; 
lean_dec_ref(v_env_257_);
lean_dec(v_declHint_253_);
v___x_260_ = lean_apply_2(v_toPure_254_, lean_box(0), v_msg_255_);
return v___x_260_;
}
else
{
lean_object* v___x_261_; uint8_t v___x_262_; 
lean_inc_ref(v_env_257_);
v___x_261_ = l_Lean_Environment_setExporting(v_env_257_, v___x_258_);
lean_inc(v_declHint_253_);
lean_inc_ref(v___x_261_);
v___x_262_ = l_Lean_Environment_contains(v___x_261_, v_declHint_253_, v_isExporting_259_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; 
lean_dec_ref(v___x_261_);
lean_dec_ref(v_env_257_);
lean_dec(v_declHint_253_);
v___x_263_ = lean_apply_2(v_toPure_254_, lean_box(0), v_msg_255_);
return v___x_263_;
}
else
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v_c_269_; lean_object* v___x_270_; 
v___x_264_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__2);
v___x_265_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__5);
v___x_266_ = l_Lean_Options_empty;
v___x_267_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_267_, 0, v___x_261_);
lean_ctor_set(v___x_267_, 1, v___x_264_);
lean_ctor_set(v___x_267_, 2, v___x_265_);
lean_ctor_set(v___x_267_, 3, v___x_266_);
lean_inc(v_declHint_253_);
v___x_268_ = l_Lean_MessageData_ofConstName(v_declHint_253_, v___x_258_);
v_c_269_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_269_, 0, v___x_267_);
lean_ctor_set(v_c_269_, 1, v___x_268_);
v___x_270_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_257_, v_declHint_253_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec_ref(v_env_257_);
lean_dec(v_declHint_253_);
v___x_271_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__7);
v___x_272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v_c_269_);
v___x_273_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__9);
v___x_274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_272_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = l_Lean_MessageData_note(v___x_274_);
v___x_276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_276_, 0, v_msg_255_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_apply_2(v_toPure_254_, lean_box(0), v___x_276_);
return v___x_277_;
}
else
{
lean_object* v_val_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_mod_281_; uint8_t v___x_282_; 
v_val_278_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_val_278_);
lean_dec_ref_known(v___x_270_, 1);
v___x_279_ = l_Lean_Environment_header(v_env_257_);
lean_dec_ref(v_env_257_);
v___x_280_ = l_Lean_EnvironmentHeader_moduleNames(v___x_279_);
v_mod_281_ = lean_array_get(v___x_256_, v___x_280_, v_val_278_);
lean_dec(v_val_278_);
lean_dec_ref(v___x_280_);
v___x_282_ = l_Lean_isPrivateName(v_declHint_253_);
lean_dec(v_declHint_253_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_283_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__11);
v___x_284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v_c_269_);
v___x_285_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__13);
v___x_286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = l_Lean_MessageData_ofName(v_mod_281_);
v___x_288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_286_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__15);
v___x_290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_288_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = l_Lean_MessageData_note(v___x_290_);
v___x_292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_292_, 0, v_msg_255_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = lean_apply_2(v_toPure_254_, lean_box(0), v___x_292_);
return v___x_293_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_294_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__7);
v___x_295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v_c_269_);
v___x_296_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__17);
v___x_297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_295_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = l_Lean_MessageData_ofName(v_mod_281_);
v___x_299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___closed__19);
v___x_301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_299_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
v___x_302_ = l_Lean_MessageData_note(v___x_301_);
v___x_303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_303_, 0, v_msg_255_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
v___x_304_ = lean_apply_2(v_toPure_254_, lean_box(0), v___x_303_);
return v___x_304_;
}
}
}
}
}
else
{
lean_object* v___x_305_; 
lean_dec_ref(v_env_257_);
lean_dec(v_declHint_253_);
v___x_305_ = lean_apply_2(v_toPure_254_, lean_box(0), v_msg_255_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___boxed(lean_object* v_declHint_306_, lean_object* v_toPure_307_, lean_object* v_msg_308_, lean_object* v___x_309_, lean_object* v_env_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0(v_declHint_306_, v_toPure_307_, v_msg_308_, v___x_309_, v_env_310_);
lean_dec(v___x_309_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___redArg(lean_object* v_inst_312_, lean_object* v_inst_313_, lean_object* v_msg_314_, lean_object* v_declHint_315_){
_start:
{
lean_object* v_toApplicative_316_; lean_object* v_toBind_317_; lean_object* v_getEnv_318_; lean_object* v_toPure_319_; lean_object* v___x_320_; lean_object* v___f_321_; lean_object* v___x_322_; 
v_toApplicative_316_ = lean_ctor_get(v_inst_312_, 0);
lean_inc_ref(v_toApplicative_316_);
v_toBind_317_ = lean_ctor_get(v_inst_312_, 1);
lean_inc(v_toBind_317_);
lean_dec_ref(v_inst_312_);
v_getEnv_318_ = lean_ctor_get(v_inst_313_, 0);
lean_inc(v_getEnv_318_);
lean_dec_ref(v_inst_313_);
v_toPure_319_ = lean_ctor_get(v_toApplicative_316_, 1);
lean_inc(v_toPure_319_);
lean_dec_ref(v_toApplicative_316_);
v___x_320_ = lean_box(0);
v___f_321_ = lean_alloc_closure((void*)(l_Lean_mkUnknownIdentifierMessageCore___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_321_, 0, v_declHint_315_);
lean_closure_set(v___f_321_, 1, v_toPure_319_);
lean_closure_set(v___f_321_, 2, v_msg_314_);
lean_closure_set(v___f_321_, 3, v___x_320_);
v___x_322_ = lean_apply_4(v_toBind_317_, lean_box(0), lean_box(0), v_getEnv_318_, v___f_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore(lean_object* v_m_323_, lean_object* v_inst_324_, lean_object* v_inst_325_, lean_object* v_inst_326_, lean_object* v_msg_327_, lean_object* v_declHint_328_){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = l_Lean_mkUnknownIdentifierMessageCore___redArg(v_inst_324_, v_inst_325_, v_msg_327_, v_declHint_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___boxed(lean_object* v_m_330_, lean_object* v_inst_331_, lean_object* v_inst_332_, lean_object* v_inst_333_, lean_object* v_msg_334_, lean_object* v_declHint_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_mkUnknownIdentifierMessageCore(v_m_330_, v_inst_331_, v_inst_332_, v_inst_333_, v_msg_334_, v_declHint_335_);
lean_dec_ref(v_inst_333_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___redArg___lam__0(lean_object* v_toPure_337_, lean_object* v_msg_338_){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_339_ = l_Lean_unknownIdentifierMessageTag;
v___x_340_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v_msg_338_);
v___x_341_ = lean_apply_2(v_toPure_337_, lean_box(0), v___x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___redArg(lean_object* v_inst_342_, lean_object* v_inst_343_, lean_object* v_msg_344_, lean_object* v_declHint_345_){
_start:
{
lean_object* v_toApplicative_346_; lean_object* v_toBind_347_; lean_object* v_toPure_348_; lean_object* v___x_349_; lean_object* v___f_350_; lean_object* v___x_351_; 
v_toApplicative_346_ = lean_ctor_get(v_inst_342_, 0);
v_toBind_347_ = lean_ctor_get(v_inst_342_, 1);
lean_inc(v_toBind_347_);
v_toPure_348_ = lean_ctor_get(v_toApplicative_346_, 1);
lean_inc(v_toPure_348_);
v___x_349_ = l_Lean_mkUnknownIdentifierMessageCore___redArg(v_inst_342_, v_inst_343_, v_msg_344_, v_declHint_345_);
v___f_350_ = lean_alloc_closure((void*)(l_Lean_mkUnknownIdentifierMessage___redArg___lam__0), 2, 1);
lean_closure_set(v___f_350_, 0, v_toPure_348_);
v___x_351_ = lean_apply_4(v_toBind_347_, lean_box(0), lean_box(0), v___x_349_, v___f_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage(lean_object* v_m_352_, lean_object* v_inst_353_, lean_object* v_inst_354_, lean_object* v_inst_355_, lean_object* v_msg_356_, lean_object* v_declHint_357_){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Lean_mkUnknownIdentifierMessage___redArg(v_inst_353_, v_inst_354_, v_msg_356_, v_declHint_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___boxed(lean_object* v_m_359_, lean_object* v_inst_360_, lean_object* v_inst_361_, lean_object* v_inst_362_, lean_object* v_msg_363_, lean_object* v_declHint_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lean_mkUnknownIdentifierMessage(v_m_359_, v_inst_360_, v_inst_361_, v_inst_362_, v_msg_363_, v_declHint_364_);
lean_dec_ref(v_inst_362_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___redArg___lam__0(lean_object* v_inst_366_, lean_object* v_inst_367_, lean_object* v_ref_368_, lean_object* v_____do__lift_369_){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = l_Lean_throwErrorAt___redArg(v_inst_366_, v_inst_367_, v_ref_368_, v_____do__lift_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___redArg(lean_object* v_inst_371_, lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_ref_374_, lean_object* v_msg_375_, lean_object* v_declHint_376_){
_start:
{
lean_object* v_toBind_377_; lean_object* v___f_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v_toBind_377_ = lean_ctor_get(v_inst_371_, 1);
lean_inc(v_toBind_377_);
lean_inc_ref(v_inst_371_);
v___f_378_ = lean_alloc_closure((void*)(l_Lean_throwUnknownIdentifierAt___redArg___lam__0), 4, 3);
lean_closure_set(v___f_378_, 0, v_inst_371_);
lean_closure_set(v___f_378_, 1, v_inst_373_);
lean_closure_set(v___f_378_, 2, v_ref_374_);
v___x_379_ = l_Lean_mkUnknownIdentifierMessage___redArg(v_inst_371_, v_inst_372_, v_msg_375_, v_declHint_376_);
v___x_380_ = lean_apply_4(v_toBind_377_, lean_box(0), lean_box(0), v___x_379_, v___f_378_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt(lean_object* v_m_381_, lean_object* v_00_u03b1_382_, lean_object* v_inst_383_, lean_object* v_inst_384_, lean_object* v_inst_385_, lean_object* v_ref_386_, lean_object* v_msg_387_, lean_object* v_declHint_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_throwUnknownIdentifierAt___redArg(v_inst_383_, v_inst_384_, v_inst_385_, v_ref_386_, v_msg_387_, v_declHint_388_);
return v___x_389_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___redArg___closed__1(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___redArg___closed__0));
v___x_392_ = l_Lean_stringToMessageData(v___x_391_);
return v___x_392_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___redArg___closed__3(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___redArg___closed__2));
v___x_395_ = l_Lean_stringToMessageData(v___x_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___redArg(lean_object* v_inst_396_, lean_object* v_inst_397_, lean_object* v_inst_398_, lean_object* v_ref_399_, lean_object* v_constName_400_){
_start:
{
lean_object* v___x_401_; uint8_t v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_401_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___redArg___closed__1, &l_Lean_throwUnknownConstantAt___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___redArg___closed__1);
v___x_402_ = 0;
lean_inc(v_constName_400_);
v___x_403_ = l_Lean_MessageData_ofConstName(v_constName_400_, v___x_402_);
v___x_404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_401_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___redArg___closed__3, &l_Lean_throwUnknownConstantAt___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___redArg___closed__3);
v___x_406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_404_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = l_Lean_throwUnknownIdentifierAt___redArg(v_inst_396_, v_inst_397_, v_inst_398_, v_ref_399_, v___x_406_, v_constName_400_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt(lean_object* v_m_408_, lean_object* v_00_u03b1_409_, lean_object* v_inst_410_, lean_object* v_inst_411_, lean_object* v_inst_412_, lean_object* v_ref_413_, lean_object* v_constName_414_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = l_Lean_throwUnknownConstantAt___redArg(v_inst_410_, v_inst_411_, v_inst_412_, v_ref_413_, v_constName_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___redArg___lam__0(lean_object* v_inst_416_, lean_object* v_inst_417_, lean_object* v_inst_418_, lean_object* v_constName_419_, lean_object* v_____do__lift_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_throwUnknownConstantAt___redArg(v_inst_416_, v_inst_417_, v_inst_418_, v_____do__lift_420_, v_constName_419_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___redArg(lean_object* v_inst_422_, lean_object* v_inst_423_, lean_object* v_inst_424_, lean_object* v_constName_425_){
_start:
{
lean_object* v_toMonadRef_426_; lean_object* v_toBind_427_; lean_object* v_getRef_428_; lean_object* v___f_429_; lean_object* v___x_430_; 
v_toMonadRef_426_ = lean_ctor_get(v_inst_424_, 1);
v_toBind_427_ = lean_ctor_get(v_inst_422_, 1);
lean_inc(v_toBind_427_);
v_getRef_428_ = lean_ctor_get(v_toMonadRef_426_, 0);
lean_inc(v_getRef_428_);
v___f_429_ = lean_alloc_closure((void*)(l_Lean_throwUnknownConstant___redArg___lam__0), 5, 4);
lean_closure_set(v___f_429_, 0, v_inst_422_);
lean_closure_set(v___f_429_, 1, v_inst_423_);
lean_closure_set(v___f_429_, 2, v_inst_424_);
lean_closure_set(v___f_429_, 3, v_constName_425_);
v___x_430_ = lean_apply_4(v_toBind_427_, lean_box(0), lean_box(0), v_getRef_428_, v___f_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant(lean_object* v_m_431_, lean_object* v_00_u03b1_432_, lean_object* v_inst_433_, lean_object* v_inst_434_, lean_object* v_inst_435_, lean_object* v_constName_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_throwUnknownConstant___redArg(v_inst_433_, v_inst_434_, v_inst_435_, v_constName_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___redArg(lean_object* v_inst_438_, lean_object* v_inst_439_, lean_object* v_inst_440_, lean_object* v_x_441_){
_start:
{
if (lean_obj_tag(v_x_441_) == 0)
{
lean_object* v_a_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_a_442_ = lean_ctor_get(v_x_441_, 0);
lean_inc(v_a_442_);
lean_dec_ref_known(v_x_441_, 1);
v___x_443_ = lean_apply_1(v_inst_440_, v_a_442_);
v___x_444_ = l_Lean_throwError___redArg(v_inst_438_, v_inst_439_, v___x_443_);
return v___x_444_;
}
else
{
lean_object* v_toApplicative_445_; lean_object* v_toPure_446_; lean_object* v_a_447_; lean_object* v___x_448_; 
v_toApplicative_445_ = lean_ctor_get(v_inst_438_, 0);
lean_inc_ref(v_toApplicative_445_);
lean_dec_ref(v_inst_440_);
lean_dec_ref(v_inst_439_);
lean_dec_ref(v_inst_438_);
v_toPure_446_ = lean_ctor_get(v_toApplicative_445_, 1);
lean_inc(v_toPure_446_);
lean_dec_ref(v_toApplicative_445_);
v_a_447_ = lean_ctor_get(v_x_441_, 0);
lean_inc(v_a_447_);
lean_dec_ref_known(v_x_441_, 1);
v___x_448_ = lean_apply_2(v_toPure_446_, lean_box(0), v_a_447_);
return v___x_448_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept(lean_object* v_m_449_, lean_object* v_00_u03b5_450_, lean_object* v_00_u03b1_451_, lean_object* v_inst_452_, lean_object* v_inst_453_, lean_object* v_inst_454_, lean_object* v_x_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_Lean_ofExcept___redArg(v_inst_452_, v_inst_453_, v_inst_454_, v_x_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Exception_0__Lean_initFn_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = ((lean_object*)(l___private_Lean_Exception_0__Lean_initFn___closed__1_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2_));
v___x_462_ = l_Lean_registerInternalExceptionId(v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Exception_0__Lean_initFn_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2____boxed(lean_object* v___y_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l___private_Lean_Exception_0__Lean_initFn_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2_();
return v_res_464_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___redArg___closed__0(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_box(0);
v___x_466_ = l_Lean_interruptExceptionId;
v___x_467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
lean_ctor_set(v___x_467_, 1, v___x_465_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___redArg(lean_object* v_inst_468_){
_start:
{
lean_object* v_toMonadExceptOf_469_; lean_object* v_throw_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_toMonadExceptOf_469_ = lean_ctor_get(v_inst_468_, 0);
lean_inc_ref(v_toMonadExceptOf_469_);
lean_dec_ref(v_inst_468_);
v_throw_470_ = lean_ctor_get(v_toMonadExceptOf_469_, 0);
lean_inc(v_throw_470_);
lean_dec_ref(v_toMonadExceptOf_469_);
v___x_471_ = lean_obj_once(&l_Lean_throwInterruptException___redArg___closed__0, &l_Lean_throwInterruptException___redArg___closed__0_once, _init_l_Lean_throwInterruptException___redArg___closed__0);
v___x_472_ = lean_apply_2(v_throw_470_, lean_box(0), v___x_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException(lean_object* v_m_473_, lean_object* v_00_u03b1_474_, lean_object* v_inst_475_, lean_object* v_inst_476_, lean_object* v_inst_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l_Lean_throwInterruptException___redArg(v_inst_476_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___boxed(lean_object* v_m_479_, lean_object* v_00_u03b1_480_, lean_object* v_inst_481_, lean_object* v_inst_482_, lean_object* v_inst_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lean_throwInterruptException(v_m_479_, v_00_u03b1_480_, v_inst_481_, v_inst_482_, v_inst_483_);
lean_dec(v_inst_483_);
lean_dec_ref(v_inst_481_);
return v_res_484_;
}
}
LEAN_EXPORT uint8_t l_Lean_Exception_isInterrupt(lean_object* v_x_485_){
_start:
{
if (lean_obj_tag(v_x_485_) == 1)
{
lean_object* v_id_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v_id_486_ = lean_ctor_get(v_x_485_, 0);
v___x_487_ = l_Lean_interruptExceptionId;
v___x_488_ = l_Lean_instBEqInternalExceptionId_beq(v_id_486_, v___x_487_);
return v___x_488_;
}
else
{
uint8_t v___x_489_; 
v___x_489_ = 0;
return v___x_489_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_isInterrupt___boxed(lean_object* v_x_490_){
_start:
{
uint8_t v_res_491_; lean_object* v_r_492_; 
v_res_491_ = l_Lean_Exception_isInterrupt(v_x_490_);
lean_dec_ref(v_x_490_);
v_r_492_ = lean_box(v_res_491_);
return v_r_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___redArg___lam__0(lean_object* v_ex_493_, lean_object* v_inst_494_, lean_object* v_inst_495_, lean_object* v_____do__lift_496_){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = l_Lean_Kernel_Exception_toMessageData(v_ex_493_, v_____do__lift_496_);
v___x_498_ = l_Lean_throwError___redArg(v_inst_494_, v_inst_495_, v___x_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___redArg___lam__1(lean_object* v_toBind_499_, lean_object* v_inst_500_, lean_object* v___f_501_, lean_object* v_____r_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lean_apply_4(v_toBind_499_, lean_box(0), lean_box(0), v_inst_500_, v___f_501_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___redArg(lean_object* v_inst_504_, lean_object* v_inst_505_, lean_object* v_inst_506_, lean_object* v_ex_507_){
_start:
{
lean_object* v_toBind_508_; lean_object* v___f_509_; 
v_toBind_508_ = lean_ctor_get(v_inst_504_, 1);
lean_inc(v_toBind_508_);
lean_inc_ref(v_inst_505_);
lean_inc(v_ex_507_);
v___f_509_ = lean_alloc_closure((void*)(l_Lean_throwKernelException___redArg___lam__0), 4, 3);
lean_closure_set(v___f_509_, 0, v_ex_507_);
lean_closure_set(v___f_509_, 1, v_inst_504_);
lean_closure_set(v___f_509_, 2, v_inst_505_);
if (lean_obj_tag(v_ex_507_) == 16)
{
lean_object* v___f_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
lean_inc(v_toBind_508_);
v___f_510_ = lean_alloc_closure((void*)(l_Lean_throwKernelException___redArg___lam__1), 4, 3);
lean_closure_set(v___f_510_, 0, v_toBind_508_);
lean_closure_set(v___f_510_, 1, v_inst_506_);
lean_closure_set(v___f_510_, 2, v___f_509_);
v___x_511_ = l_Lean_throwInterruptException___redArg(v_inst_505_);
v___x_512_ = lean_apply_4(v_toBind_508_, lean_box(0), lean_box(0), v___x_511_, v___f_510_);
return v___x_512_;
}
else
{
lean_object* v___x_513_; 
lean_dec(v_ex_507_);
lean_dec_ref(v_inst_505_);
v___x_513_ = lean_apply_4(v_toBind_508_, lean_box(0), lean_box(0), v_inst_506_, v___f_509_);
return v___x_513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException(lean_object* v_m_514_, lean_object* v_00_u03b1_515_, lean_object* v_inst_516_, lean_object* v_inst_517_, lean_object* v_inst_518_, lean_object* v_ex_519_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = l_Lean_throwKernelException___redArg(v_inst_516_, v_inst_517_, v_inst_518_, v_ex_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___redArg(lean_object* v_inst_521_, lean_object* v_inst_522_, lean_object* v_inst_523_, lean_object* v_x_524_){
_start:
{
if (lean_obj_tag(v_x_524_) == 0)
{
lean_object* v_a_525_; lean_object* v___x_526_; 
v_a_525_ = lean_ctor_get(v_x_524_, 0);
lean_inc(v_a_525_);
lean_dec_ref_known(v_x_524_, 1);
v___x_526_ = l_Lean_throwKernelException___redArg(v_inst_521_, v_inst_522_, v_inst_523_, v_a_525_);
return v___x_526_;
}
else
{
lean_object* v_toApplicative_527_; lean_object* v_toPure_528_; lean_object* v_a_529_; lean_object* v___x_530_; 
v_toApplicative_527_ = lean_ctor_get(v_inst_521_, 0);
lean_inc_ref(v_toApplicative_527_);
lean_dec(v_inst_523_);
lean_dec_ref(v_inst_522_);
lean_dec_ref(v_inst_521_);
v_toPure_528_ = lean_ctor_get(v_toApplicative_527_, 1);
lean_inc(v_toPure_528_);
lean_dec_ref(v_toApplicative_527_);
v_a_529_ = lean_ctor_get(v_x_524_, 0);
lean_inc(v_a_529_);
lean_dec_ref_known(v_x_524_, 1);
v___x_530_ = lean_apply_2(v_toPure_528_, lean_box(0), v_a_529_);
return v___x_530_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException(lean_object* v_m_531_, lean_object* v_00_u03b1_532_, lean_object* v_inst_533_, lean_object* v_inst_534_, lean_object* v_inst_535_, lean_object* v_x_536_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l_Lean_ofExceptKernelException___redArg(v_inst_533_, v_inst_534_, v_inst_535_, v_x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__0(lean_object* v_inst_538_, lean_object* v_00_u03b1_539_, lean_object* v_d_540_, lean_object* v_x_541_, lean_object* v___y_542_){
_start:
{
lean_object* v_withRecDepth_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v_withRecDepth_543_ = lean_ctor_get(v_inst_538_, 0);
lean_inc(v_withRecDepth_543_);
lean_dec_ref(v_inst_538_);
lean_inc(v___y_542_);
v___x_544_ = lean_apply_1(v_x_541_, v___y_542_);
v___x_545_ = lean_apply_3(v_withRecDepth_543_, lean_box(0), v_d_540_, v___x_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__0___boxed(lean_object* v_inst_546_, lean_object* v_00_u03b1_547_, lean_object* v_d_548_, lean_object* v_x_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lean_instMonadRecDepthReaderT___redArg___lam__0(v_inst_546_, v_00_u03b1_547_, v_d_548_, v_x_549_, v___y_550_);
lean_dec(v___y_550_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__1(lean_object* v_inst_552_, lean_object* v_x_553_){
_start:
{
lean_object* v_getRecDepth_554_; 
v_getRecDepth_554_ = lean_ctor_get(v_inst_552_, 1);
lean_inc(v_getRecDepth_554_);
return v_getRecDepth_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__1___boxed(lean_object* v_inst_555_, lean_object* v_x_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lean_instMonadRecDepthReaderT___redArg___lam__1(v_inst_555_, v_x_556_);
lean_dec(v_x_556_);
lean_dec_ref(v_inst_555_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__2(lean_object* v_inst_558_, lean_object* v_x_559_){
_start:
{
lean_object* v_getMaxRecDepth_560_; 
v_getMaxRecDepth_560_ = lean_ctor_get(v_inst_558_, 2);
lean_inc(v_getMaxRecDepth_560_);
return v_getMaxRecDepth_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg___lam__2___boxed(lean_object* v_inst_561_, lean_object* v_x_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lean_instMonadRecDepthReaderT___redArg___lam__2(v_inst_561_, v_x_562_);
lean_dec(v_x_562_);
lean_dec_ref(v_inst_561_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT___redArg(lean_object* v_inst_564_){
_start:
{
lean_object* v___f_565_; lean_object* v___f_566_; lean_object* v___f_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
lean_inc_ref_n(v_inst_564_, 2);
v___f_565_ = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_565_, 0, v_inst_564_);
v___f_566_ = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_566_, 0, v_inst_564_);
v___f_567_ = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_567_, 0, v_inst_564_);
v___x_568_ = lean_alloc_closure((void*)(l_ReaderT_mk___boxed), 5, 4);
lean_closure_set(v___x_568_, 0, lean_box(0));
lean_closure_set(v___x_568_, 1, lean_box(0));
lean_closure_set(v___x_568_, 2, lean_box(0));
lean_closure_set(v___x_568_, 3, v___f_566_);
v___x_569_ = lean_alloc_closure((void*)(l_ReaderT_mk___boxed), 5, 4);
lean_closure_set(v___x_569_, 0, lean_box(0));
lean_closure_set(v___x_569_, 1, lean_box(0));
lean_closure_set(v___x_569_, 2, lean_box(0));
lean_closure_set(v___x_569_, 3, v___f_567_);
v___x_570_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_570_, 0, v___f_565_);
lean_ctor_set(v___x_570_, 1, v___x_568_);
lean_ctor_set(v___x_570_, 2, v___x_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthReaderT(lean_object* v_m_571_, lean_object* v_00_u03c1_572_, lean_object* v_inst_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_instMonadRecDepthReaderT___redArg(v_inst_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthStateRefT_x27OfMonad___redArg(lean_object* v_inst_575_){
_start:
{
lean_object* v___f_576_; lean_object* v___f_577_; lean_object* v___f_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
lean_inc_ref_n(v_inst_575_, 2);
v___f_576_ = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_576_, 0, v_inst_575_);
v___f_577_ = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_577_, 0, v_inst_575_);
v___f_578_ = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_578_, 0, v_inst_575_);
v___x_579_ = lean_alloc_closure((void*)(l_ReaderT_mk___boxed), 5, 4);
lean_closure_set(v___x_579_, 0, lean_box(0));
lean_closure_set(v___x_579_, 1, lean_box(0));
lean_closure_set(v___x_579_, 2, lean_box(0));
lean_closure_set(v___x_579_, 3, v___f_577_);
v___x_580_ = lean_alloc_closure((void*)(l_ReaderT_mk___boxed), 5, 4);
lean_closure_set(v___x_580_, 0, lean_box(0));
lean_closure_set(v___x_580_, 1, lean_box(0));
lean_closure_set(v___x_580_, 2, lean_box(0));
lean_closure_set(v___x_580_, 3, v___f_578_);
v___x_581_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_581_, 0, v___f_576_);
lean_ctor_set(v___x_581_, 1, v___x_579_);
lean_ctor_set(v___x_581_, 2, v___x_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthStateRefT_x27OfMonad(lean_object* v_m_582_, lean_object* v_00_u03c9_583_, lean_object* v_00_u03c3_584_, lean_object* v_inst_585_, lean_object* v_inst_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_instMonadRecDepthStateRefT_x27OfMonad___redArg(v_inst_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthStateRefT_x27OfMonad___boxed(lean_object* v_m_588_, lean_object* v_00_u03c9_589_, lean_object* v_00_u03c3_590_, lean_object* v_inst_591_, lean_object* v_inst_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_instMonadRecDepthStateRefT_x27OfMonad(v_m_588_, v_00_u03c9_589_, v_00_u03c3_590_, v_inst_591_, v_inst_592_);
lean_dec_ref(v_inst_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthMonadCacheTOfMonad___redArg(lean_object* v_inst_594_, lean_object* v_inst_595_, lean_object* v_inst_596_, lean_object* v_inst_597_){
_start:
{
lean_object* v___f_598_; lean_object* v___f_599_; lean_object* v___f_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
lean_inc_ref_n(v_inst_597_, 2);
v___f_598_ = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_598_, 0, v_inst_597_);
v___f_599_ = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_599_, 0, v_inst_597_);
v___f_600_ = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_600_, 0, v_inst_597_);
v___x_601_ = lean_alloc_closure((void*)(l_ReaderT_mk___boxed), 5, 4);
lean_closure_set(v___x_601_, 0, lean_box(0));
lean_closure_set(v___x_601_, 1, lean_box(0));
lean_closure_set(v___x_601_, 2, lean_box(0));
lean_closure_set(v___x_601_, 3, v___f_599_);
lean_inc_ref(v_inst_595_);
lean_inc_ref(v_inst_594_);
v___x_602_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_mk___boxed), 10, 9);
lean_closure_set(v___x_602_, 0, lean_box(0));
lean_closure_set(v___x_602_, 1, lean_box(0));
lean_closure_set(v___x_602_, 2, lean_box(0));
lean_closure_set(v___x_602_, 3, lean_box(0));
lean_closure_set(v___x_602_, 4, v_inst_596_);
lean_closure_set(v___x_602_, 5, v_inst_594_);
lean_closure_set(v___x_602_, 6, v_inst_595_);
lean_closure_set(v___x_602_, 7, lean_box(0));
lean_closure_set(v___x_602_, 8, v___x_601_);
v___x_603_ = lean_alloc_closure((void*)(l_ReaderT_mk___boxed), 5, 4);
lean_closure_set(v___x_603_, 0, lean_box(0));
lean_closure_set(v___x_603_, 1, lean_box(0));
lean_closure_set(v___x_603_, 2, lean_box(0));
lean_closure_set(v___x_603_, 3, v___f_600_);
v___x_604_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_mk___boxed), 10, 9);
lean_closure_set(v___x_604_, 0, lean_box(0));
lean_closure_set(v___x_604_, 1, lean_box(0));
lean_closure_set(v___x_604_, 2, lean_box(0));
lean_closure_set(v___x_604_, 3, lean_box(0));
lean_closure_set(v___x_604_, 4, v_inst_596_);
lean_closure_set(v___x_604_, 5, v_inst_594_);
lean_closure_set(v___x_604_, 6, v_inst_595_);
lean_closure_set(v___x_604_, 7, lean_box(0));
lean_closure_set(v___x_604_, 8, v___x_603_);
v___x_605_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_605_, 0, v___f_598_);
lean_ctor_set(v___x_605_, 1, v___x_602_);
lean_ctor_set(v___x_605_, 2, v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthMonadCacheTOfMonad(lean_object* v_00_u03b1_606_, lean_object* v_m_607_, lean_object* v_00_u03c9_608_, lean_object* v_00_u03b2_609_, lean_object* v_inst_610_, lean_object* v_inst_611_, lean_object* v_inst_612_, lean_object* v_inst_613_, lean_object* v_inst_614_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lean_instMonadRecDepthMonadCacheTOfMonad___redArg(v_inst_610_, v_inst_611_, v_inst_613_, v_inst_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadRecDepthMonadCacheTOfMonad___boxed(lean_object* v_00_u03b1_616_, lean_object* v_m_617_, lean_object* v_00_u03c9_618_, lean_object* v_00_u03b2_619_, lean_object* v_inst_620_, lean_object* v_inst_621_, lean_object* v_inst_622_, lean_object* v_inst_623_, lean_object* v_inst_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_instMonadRecDepthMonadCacheTOfMonad(v_00_u03b1_616_, v_m_617_, v_00_u03c9_618_, v_00_u03b2_619_, v_inst_620_, v_inst_621_, v_inst_622_, v_inst_623_, v_inst_624_);
lean_dec_ref(v_inst_622_);
return v_res_625_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___redArg___closed__3(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = l_Lean_maxRecDepthErrorMessage;
v___x_632_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
return v___x_632_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___redArg___closed__4(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___redArg___closed__3);
v___x_634_ = l_Lean_MessageData_ofFormat(v___x_633_);
return v___x_634_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___redArg___closed__5(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_635_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___redArg___closed__4);
v___x_636_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___redArg___closed__2));
v___x_637_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
lean_ctor_set(v___x_637_, 1, v___x_635_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___redArg(lean_object* v_inst_638_, lean_object* v_ref_639_){
_start:
{
lean_object* v_toMonadExceptOf_640_; lean_object* v_throw_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_650_; 
v_toMonadExceptOf_640_ = lean_ctor_get(v_inst_638_, 0);
lean_inc_ref(v_toMonadExceptOf_640_);
lean_dec_ref(v_inst_638_);
v_throw_641_ = lean_ctor_get(v_toMonadExceptOf_640_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v_toMonadExceptOf_640_);
if (v_isSharedCheck_650_ == 0)
{
lean_object* v_unused_651_; 
v_unused_651_ = lean_ctor_get(v_toMonadExceptOf_640_, 1);
lean_dec(v_unused_651_);
v___x_643_ = v_toMonadExceptOf_640_;
v_isShared_644_ = v_isSharedCheck_650_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_throw_641_);
lean_dec(v_toMonadExceptOf_640_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_650_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_645_; lean_object* v___x_647_; 
v___x_645_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___redArg___closed__5);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 1, v___x_645_);
lean_ctor_set(v___x_643_, 0, v_ref_639_);
v___x_647_ = v___x_643_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_ref_639_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v___x_645_);
v___x_647_ = v_reuseFailAlloc_649_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
lean_object* v___x_648_; 
v___x_648_ = lean_apply_2(v_throw_641_, lean_box(0), v___x_647_);
return v___x_648_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt(lean_object* v_m_652_, lean_object* v_00_u03b1_653_, lean_object* v_inst_654_, lean_object* v_ref_655_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l_Lean_throwMaxRecDepthAt___redArg(v_inst_654_, v_ref_655_);
return v___x_656_;
}
}
LEAN_EXPORT uint8_t l_Lean_Exception_isMaxRecDepth(lean_object* v_ex_657_){
_start:
{
if (lean_obj_tag(v_ex_657_) == 0)
{
lean_object* v_msg_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; uint8_t v___x_662_; 
v_msg_658_ = lean_ctor_get(v_ex_657_, 1);
lean_inc_ref(v_msg_658_);
lean_dec_ref_known(v_ex_657_, 2);
v___x_659_ = l_Lean_MessageData_stripNestedTags(v_msg_658_);
v___x_660_ = l_Lean_MessageData_kind(v___x_659_);
lean_dec_ref(v___x_659_);
v___x_661_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___redArg___closed__2));
v___x_662_ = lean_name_eq(v___x_660_, v___x_661_);
lean_dec(v___x_660_);
return v___x_662_;
}
else
{
uint8_t v___x_663_; 
lean_dec_ref(v_ex_657_);
v___x_663_ = 0;
return v___x_663_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_isMaxRecDepth___boxed(lean_object* v_ex_664_){
_start:
{
uint8_t v_res_665_; lean_object* v_r_666_; 
v_res_665_ = l_Lean_Exception_isMaxRecDepth(v_ex_664_);
v_r_666_ = lean_box(v_res_665_);
return v_r_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth___redArg___lam__0(lean_object* v_inst_667_, lean_object* v_____do__lift_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l_Lean_throwMaxRecDepthAt___redArg(v_inst_667_, v_____do__lift_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth___redArg___lam__1(lean_object* v_curr_670_, lean_object* v_withRecDepth_671_, lean_object* v_x_672_, lean_object* v_toMonadRef_673_, lean_object* v_toBind_674_, lean_object* v___f_675_, lean_object* v_max_676_){
_start:
{
lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_681_ = lean_unsigned_to_nat(0u);
v___x_682_ = lean_nat_dec_eq(v_max_676_, v___x_681_);
if (v___x_682_ == 0)
{
uint8_t v___x_683_; 
v___x_683_ = lean_nat_dec_eq(v_curr_670_, v_max_676_);
if (v___x_683_ == 0)
{
lean_dec(v___f_675_);
lean_dec(v_toBind_674_);
lean_dec_ref(v_toMonadRef_673_);
goto v___jp_677_;
}
else
{
lean_object* v_getRef_684_; lean_object* v___x_685_; 
lean_dec(v_x_672_);
lean_dec(v_withRecDepth_671_);
v_getRef_684_ = lean_ctor_get(v_toMonadRef_673_, 0);
lean_inc(v_getRef_684_);
lean_dec_ref(v_toMonadRef_673_);
v___x_685_ = lean_apply_4(v_toBind_674_, lean_box(0), lean_box(0), v_getRef_684_, v___f_675_);
return v___x_685_;
}
}
else
{
lean_dec(v___f_675_);
lean_dec(v_toBind_674_);
lean_dec_ref(v_toMonadRef_673_);
goto v___jp_677_;
}
v___jp_677_:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_678_ = lean_unsigned_to_nat(1u);
v___x_679_ = lean_nat_add(v_curr_670_, v___x_678_);
v___x_680_ = lean_apply_3(v_withRecDepth_671_, lean_box(0), v___x_679_, v_x_672_);
return v___x_680_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth___redArg___lam__1___boxed(lean_object* v_curr_686_, lean_object* v_withRecDepth_687_, lean_object* v_x_688_, lean_object* v_toMonadRef_689_, lean_object* v_toBind_690_, lean_object* v___f_691_, lean_object* v_max_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lean_withIncRecDepth___redArg___lam__1(v_curr_686_, v_withRecDepth_687_, v_x_688_, v_toMonadRef_689_, v_toBind_690_, v___f_691_, v_max_692_);
lean_dec(v_max_692_);
lean_dec(v_curr_686_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth___redArg___lam__2(lean_object* v_withRecDepth_694_, lean_object* v_x_695_, lean_object* v_toMonadRef_696_, lean_object* v_toBind_697_, lean_object* v___f_698_, lean_object* v_getMaxRecDepth_699_, lean_object* v_curr_700_){
_start:
{
lean_object* v___f_701_; lean_object* v___x_702_; 
lean_inc(v_toBind_697_);
v___f_701_ = lean_alloc_closure((void*)(l_Lean_withIncRecDepth___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_701_, 0, v_curr_700_);
lean_closure_set(v___f_701_, 1, v_withRecDepth_694_);
lean_closure_set(v___f_701_, 2, v_x_695_);
lean_closure_set(v___f_701_, 3, v_toMonadRef_696_);
lean_closure_set(v___f_701_, 4, v_toBind_697_);
lean_closure_set(v___f_701_, 5, v___f_698_);
v___x_702_ = lean_apply_4(v_toBind_697_, lean_box(0), lean_box(0), v_getMaxRecDepth_699_, v___f_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth___redArg(lean_object* v_inst_703_, lean_object* v_inst_704_, lean_object* v_inst_705_, lean_object* v_x_706_){
_start:
{
lean_object* v_toBind_707_; lean_object* v_withRecDepth_708_; lean_object* v_getRecDepth_709_; lean_object* v_getMaxRecDepth_710_; lean_object* v_toMonadRef_711_; lean_object* v___f_712_; lean_object* v___f_713_; lean_object* v___x_714_; 
v_toBind_707_ = lean_ctor_get(v_inst_703_, 1);
lean_inc_n(v_toBind_707_, 2);
lean_dec_ref(v_inst_703_);
v_withRecDepth_708_ = lean_ctor_get(v_inst_705_, 0);
lean_inc(v_withRecDepth_708_);
v_getRecDepth_709_ = lean_ctor_get(v_inst_705_, 1);
lean_inc(v_getRecDepth_709_);
v_getMaxRecDepth_710_ = lean_ctor_get(v_inst_705_, 2);
lean_inc(v_getMaxRecDepth_710_);
lean_dec_ref(v_inst_705_);
v_toMonadRef_711_ = lean_ctor_get(v_inst_704_, 1);
lean_inc_ref(v_toMonadRef_711_);
v___f_712_ = lean_alloc_closure((void*)(l_Lean_withIncRecDepth___redArg___lam__0), 2, 1);
lean_closure_set(v___f_712_, 0, v_inst_704_);
v___f_713_ = lean_alloc_closure((void*)(l_Lean_withIncRecDepth___redArg___lam__2), 7, 6);
lean_closure_set(v___f_713_, 0, v_withRecDepth_708_);
lean_closure_set(v___f_713_, 1, v_x_706_);
lean_closure_set(v___f_713_, 2, v_toMonadRef_711_);
lean_closure_set(v___f_713_, 3, v_toBind_707_);
lean_closure_set(v___f_713_, 4, v___f_712_);
lean_closure_set(v___f_713_, 5, v_getMaxRecDepth_710_);
v___x_714_ = lean_apply_4(v_toBind_707_, lean_box(0), lean_box(0), v_getRecDepth_709_, v___f_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_withIncRecDepth(lean_object* v_m_715_, lean_object* v_00_u03b1_716_, lean_object* v_inst_717_, lean_object* v_inst_718_, lean_object* v_inst_719_, lean_object* v_x_720_){
_start:
{
lean_object* v_toBind_721_; lean_object* v_withRecDepth_722_; lean_object* v_getRecDepth_723_; lean_object* v_getMaxRecDepth_724_; lean_object* v_toMonadRef_725_; lean_object* v___f_726_; lean_object* v___f_727_; lean_object* v___x_728_; 
v_toBind_721_ = lean_ctor_get(v_inst_717_, 1);
lean_inc_n(v_toBind_721_, 2);
lean_dec_ref(v_inst_717_);
v_withRecDepth_722_ = lean_ctor_get(v_inst_719_, 0);
lean_inc(v_withRecDepth_722_);
v_getRecDepth_723_ = lean_ctor_get(v_inst_719_, 1);
lean_inc(v_getRecDepth_723_);
v_getMaxRecDepth_724_ = lean_ctor_get(v_inst_719_, 2);
lean_inc(v_getMaxRecDepth_724_);
lean_dec_ref(v_inst_719_);
v_toMonadRef_725_ = lean_ctor_get(v_inst_718_, 1);
lean_inc_ref(v_toMonadRef_725_);
v___f_726_ = lean_alloc_closure((void*)(l_Lean_withIncRecDepth___redArg___lam__0), 2, 1);
lean_closure_set(v___f_726_, 0, v_inst_718_);
v___f_727_ = lean_alloc_closure((void*)(l_Lean_withIncRecDepth___redArg___lam__2), 7, 6);
lean_closure_set(v___f_727_, 0, v_withRecDepth_722_);
lean_closure_set(v___f_727_, 1, v_x_720_);
lean_closure_set(v___f_727_, 2, v_toMonadRef_725_);
lean_closure_set(v___f_727_, 3, v_toBind_721_);
lean_closure_set(v___f_727_, 4, v___f_726_);
lean_closure_set(v___f_727_, 5, v_getMaxRecDepth_724_);
v___x_728_ = lean_apply_4(v_toBind_721_, lean_box(0), lean_box(0), v_getRecDepth_723_, v___f_727_);
return v___x_728_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__7(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__6));
v___x_813_ = l_String_toRawSubstring_x27(v___x_812_);
return v___x_813_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__24(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__23));
v___x_850_ = l_String_toRawSubstring_x27(v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1(lean_object* v_x_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_867_ = ((lean_object*)(l_Lean_termThrowError_____00__closed__2));
lean_inc(v_x_864_);
v___x_868_ = l_Lean_Syntax_isOfKind(v_x_864_, v___x_867_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; lean_object* v___x_870_; 
lean_dec(v_x_864_);
v___x_869_ = lean_box(1);
v___x_870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
lean_ctor_set(v___x_870_, 1, v___y_866_);
return v___x_870_;
}
else
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_871_ = lean_unsigned_to_nat(1u);
v___x_872_ = l_Lean_Syntax_getArg(v_x_864_, v___x_871_);
lean_dec(v_x_864_);
v___x_873_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__1));
lean_inc(v___x_872_);
v___x_874_ = l_Lean_Syntax_isOfKind(v___x_872_, v___x_873_);
if (v___x_874_ == 0)
{
lean_object* v_quotContext_875_; lean_object* v_currMacroScope_876_; lean_object* v_ref_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v_quotContext_875_ = lean_ctor_get(v___y_865_, 1);
v_currMacroScope_876_ = lean_ctor_get(v___y_865_, 2);
v_ref_877_ = lean_ctor_get(v___y_865_, 5);
v___x_878_ = l_Lean_SourceInfo_fromRef(v_ref_877_, v___x_874_);
v___x_879_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5));
v___x_880_ = lean_obj_once(&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__7, &l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__7_once, _init_l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__7);
v___x_881_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__9));
lean_inc(v_currMacroScope_876_);
lean_inc(v_quotContext_875_);
v___x_882_ = l_Lean_addMacroScope(v_quotContext_875_, v___x_881_, v_currMacroScope_876_);
v___x_883_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__13));
lean_inc_n(v___x_878_, 2);
v___x_884_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_884_, 0, v___x_878_);
lean_ctor_set(v___x_884_, 1, v___x_880_);
lean_ctor_set(v___x_884_, 2, v___x_882_);
lean_ctor_set(v___x_884_, 3, v___x_883_);
v___x_885_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__15));
v___x_886_ = l_Lean_Syntax_node1(v___x_878_, v___x_885_, v___x_872_);
v___x_887_ = l_Lean_Syntax_node2(v___x_878_, v___x_879_, v___x_884_, v___x_886_);
v___x_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
lean_ctor_set(v___x_888_, 1, v___y_866_);
return v___x_888_;
}
else
{
lean_object* v_quotContext_889_; lean_object* v_currMacroScope_890_; lean_object* v_ref_891_; uint8_t v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_quotContext_889_ = lean_ctor_get(v___y_865_, 1);
v_currMacroScope_890_ = lean_ctor_get(v___y_865_, 2);
v_ref_891_ = lean_ctor_get(v___y_865_, 5);
v___x_892_ = 0;
v___x_893_ = l_Lean_SourceInfo_fromRef(v_ref_891_, v___x_892_);
v___x_894_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5));
v___x_895_ = lean_obj_once(&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__7, &l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__7_once, _init_l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__7);
v___x_896_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__9));
lean_inc_n(v_currMacroScope_890_, 2);
lean_inc_n(v_quotContext_889_, 2);
v___x_897_ = l_Lean_addMacroScope(v_quotContext_889_, v___x_896_, v_currMacroScope_890_);
v___x_898_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__13));
lean_inc_n(v___x_893_, 10);
v___x_899_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_899_, 0, v___x_893_);
lean_ctor_set(v___x_899_, 1, v___x_895_);
lean_ctor_set(v___x_899_, 2, v___x_897_);
lean_ctor_set(v___x_899_, 3, v___x_898_);
v___x_900_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__15));
v___x_901_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17));
v___x_902_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19));
v___x_903_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__20));
v___x_904_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_893_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__22));
v___x_906_ = lean_obj_once(&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__24, &l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__24_once, _init_l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__24);
v___x_907_ = lean_box(0);
v___x_908_ = l_Lean_addMacroScope(v_quotContext_889_, v___x_907_, v_currMacroScope_890_);
v___x_909_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__27));
v___x_910_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_910_, 0, v___x_893_);
lean_ctor_set(v___x_910_, 1, v___x_906_);
lean_ctor_set(v___x_910_, 2, v___x_908_);
lean_ctor_set(v___x_910_, 3, v___x_909_);
v___x_911_ = l_Lean_Syntax_node1(v___x_893_, v___x_905_, v___x_910_);
v___x_912_ = l_Lean_Syntax_node2(v___x_893_, v___x_902_, v___x_904_, v___x_911_);
v___x_913_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__29));
v___x_914_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__30));
v___x_915_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_893_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = l_Lean_Syntax_node2(v___x_893_, v___x_913_, v___x_915_, v___x_872_);
v___x_917_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__31));
v___x_918_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_893_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l_Lean_Syntax_node3(v___x_893_, v___x_901_, v___x_912_, v___x_916_, v___x_918_);
v___x_920_ = l_Lean_Syntax_node1(v___x_893_, v___x_900_, v___x_919_);
v___x_921_ = l_Lean_Syntax_node2(v___x_893_, v___x_894_, v___x_899_, v___x_920_);
v___x_922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
lean_ctor_set(v___x_922_, 1, v___y_866_);
return v___x_922_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___boxed(lean_object* v_x_923_, lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1(v_x_923_, v___y_924_, v___y_925_);
lean_dec_ref(v___y_924_);
return v_res_926_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__1(void){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__0));
v___x_929_ = l_String_toRawSubstring_x27(v___x_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1(lean_object* v_x_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_943_ = ((lean_object*)(l_Lean_termThrowErrorAt_________00__closed__1));
lean_inc(v_x_940_);
v___x_944_ = l_Lean_Syntax_isOfKind(v_x_940_, v___x_943_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; lean_object* v___x_946_; 
lean_dec(v_x_940_);
v___x_945_ = lean_box(1);
v___x_946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
lean_ctor_set(v___x_946_, 1, v___y_942_);
return v___x_946_;
}
else
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; uint8_t v___x_952_; 
v___x_947_ = lean_unsigned_to_nat(1u);
v___x_948_ = l_Lean_Syntax_getArg(v_x_940_, v___x_947_);
v___x_949_ = lean_unsigned_to_nat(2u);
v___x_950_ = l_Lean_Syntax_getArg(v_x_940_, v___x_949_);
lean_dec(v_x_940_);
v___x_951_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__1));
lean_inc(v___x_950_);
v___x_952_ = l_Lean_Syntax_isOfKind(v___x_950_, v___x_951_);
if (v___x_952_ == 0)
{
lean_object* v_quotContext_953_; lean_object* v_currMacroScope_954_; lean_object* v_ref_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_quotContext_953_ = lean_ctor_get(v___y_941_, 1);
v_currMacroScope_954_ = lean_ctor_get(v___y_941_, 2);
v_ref_955_ = lean_ctor_get(v___y_941_, 5);
v___x_956_ = l_Lean_SourceInfo_fromRef(v_ref_955_, v___x_952_);
v___x_957_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5));
v___x_958_ = lean_obj_once(&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__1, &l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__1_once, _init_l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__1);
v___x_959_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__3));
lean_inc(v_currMacroScope_954_);
lean_inc(v_quotContext_953_);
v___x_960_ = l_Lean_addMacroScope(v_quotContext_953_, v___x_959_, v_currMacroScope_954_);
v___x_961_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__5));
lean_inc_n(v___x_956_, 2);
v___x_962_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_962_, 0, v___x_956_);
lean_ctor_set(v___x_962_, 1, v___x_958_);
lean_ctor_set(v___x_962_, 2, v___x_960_);
lean_ctor_set(v___x_962_, 3, v___x_961_);
v___x_963_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__15));
v___x_964_ = l_Lean_Syntax_node2(v___x_956_, v___x_963_, v___x_948_, v___x_950_);
v___x_965_ = l_Lean_Syntax_node2(v___x_956_, v___x_957_, v___x_962_, v___x_964_);
v___x_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
lean_ctor_set(v___x_966_, 1, v___y_942_);
return v___x_966_;
}
else
{
lean_object* v_quotContext_967_; lean_object* v_currMacroScope_968_; lean_object* v_ref_969_; uint8_t v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v_quotContext_967_ = lean_ctor_get(v___y_941_, 1);
v_currMacroScope_968_ = lean_ctor_get(v___y_941_, 2);
v_ref_969_ = lean_ctor_get(v___y_941_, 5);
v___x_970_ = 0;
v___x_971_ = l_Lean_SourceInfo_fromRef(v_ref_969_, v___x_970_);
v___x_972_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__5));
v___x_973_ = lean_obj_once(&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__1, &l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__1_once, _init_l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__1);
v___x_974_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__3));
lean_inc_n(v_currMacroScope_968_, 2);
lean_inc_n(v_quotContext_967_, 2);
v___x_975_ = l_Lean_addMacroScope(v_quotContext_967_, v___x_974_, v_currMacroScope_968_);
v___x_976_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___closed__5));
lean_inc_n(v___x_971_, 10);
v___x_977_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_977_, 0, v___x_971_);
lean_ctor_set(v___x_977_, 1, v___x_973_);
lean_ctor_set(v___x_977_, 2, v___x_975_);
lean_ctor_set(v___x_977_, 3, v___x_976_);
v___x_978_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__15));
v___x_979_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__17));
v___x_980_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__19));
v___x_981_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__20));
v___x_982_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_971_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__22));
v___x_984_ = lean_obj_once(&l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__24, &l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__24_once, _init_l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__24);
v___x_985_ = lean_box(0);
v___x_986_ = l_Lean_addMacroScope(v_quotContext_967_, v___x_985_, v_currMacroScope_968_);
v___x_987_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__27));
v___x_988_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_988_, 0, v___x_971_);
lean_ctor_set(v___x_988_, 1, v___x_984_);
lean_ctor_set(v___x_988_, 2, v___x_986_);
lean_ctor_set(v___x_988_, 3, v___x_987_);
v___x_989_ = l_Lean_Syntax_node1(v___x_971_, v___x_983_, v___x_988_);
v___x_990_ = l_Lean_Syntax_node2(v___x_971_, v___x_980_, v___x_982_, v___x_989_);
v___x_991_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__29));
v___x_992_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__30));
v___x_993_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_971_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = l_Lean_Syntax_node2(v___x_971_, v___x_991_, v___x_993_, v___x_950_);
v___x_995_ = ((lean_object*)(l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowError______1___closed__31));
v___x_996_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_971_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = l_Lean_Syntax_node3(v___x_971_, v___x_979_, v___x_990_, v___x_994_, v___x_996_);
v___x_998_ = l_Lean_Syntax_node2(v___x_971_, v___x_978_, v___x_948_, v___x_997_);
v___x_999_ = l_Lean_Syntax_node2(v___x_971_, v___x_972_, v___x_977_, v___x_998_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
lean_ctor_set(v___x_1000_, 1, v___y_942_);
return v___x_1000_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1___boxed(lean_object* v_x_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Lean___aux__Lean__Exception______macroRules__Lean__termThrowErrorAt__________1(v_x_1001_, v___y_1002_, v___y_1003_);
lean_dec_ref(v___y_1002_);
return v_res_1004_;
}
}
lean_object* runtime_initialize_Lean_InternalExceptionId(uint8_t builtin);
lean_object* runtime_initialize_Lean_ErrorExplanation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Exception(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_InternalExceptionId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ErrorExplanation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedException = _init_l_Lean_instInhabitedException();
lean_mark_persistent(l_Lean_instInhabitedException);
l_Lean_unknownIdentifierMessageTag = _init_l_Lean_unknownIdentifierMessageTag();
lean_mark_persistent(l_Lean_unknownIdentifierMessageTag);
res = l___private_Lean_Exception_0__Lean_initFn_00___x40_Lean_Exception_2633972168____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_interruptExceptionId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_interruptExceptionId);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Exception(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_InternalExceptionId(uint8_t builtin);
lean_object* initialize_Lean_ErrorExplanation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Exception(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_InternalExceptionId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ErrorExplanation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Exception(builtin);
}
#ifdef __cplusplus
}
#endif
