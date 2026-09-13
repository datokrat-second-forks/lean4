// Lean compiler output
// Module: Lean.Compiler.LCNF.ToImpureType
// Imports: public import Lean.Compiler.LCNF.Irrelevant import Lean.Compiler.LCNF.MonoTypes import Init.Data.Format.Macro
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameMap_toArray___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Irrelevant_setHasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorInfo_default;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_toLCNFType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_toMonoType(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Compiler_LCNF_Irrelevant_hasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getOtherDeclBaseType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getParamTypes(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_CtorInfo_checkValid(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
uint8_t l_Lean_Expr_isErased(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tagged"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 57, 252, 162, 142, 133, 51, 193)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__7_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__10_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ToImpureType"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 154, 3, 9, 42, 52, 199, 231)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(14, 103, 172, 122, 112, 104, 83, 202)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(183, 21, 192, 83, 126, 85, 186, 68)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(169, 76, 182, 201, 28, 76, 239, 149)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(172, 159, 124, 100, 112, 3, 128, 86)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "impureTypeExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(123, 215, 204, 232, 104, 251, 181, 107)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeExt;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "impureTrivialStructureInfoExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(121, 218, 151, 106, 231, 134, 17, 84)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTrivialStructureInfoExt;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Subtype"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Void"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nonemptyType"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "USize"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Float32"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lcErased"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lcVoid"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(68, 180, 59, 167, 252, 217, 37, 174)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__7_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__10_value),LEAN_SCALAR_PTR_LITERAL(25, 168, 138, 20, 203, 141, 233, 12)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__11_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(171, 218, 234, 194, 194, 57, 75, 5)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__14 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__14_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(246, 232, 182, 48, 64, 193, 160, 231)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__17 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__17_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__20 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__20_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 217, 26, 131, 232, 198, 207, 245)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__23 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__23_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__26 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__26_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___boxed(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Compiler.LCNF.ToImpureType"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "_private.Lean.Compiler.LCNF.ToImpureType.0.Lean.Compiler.LCNF.computeImpureType"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__3;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__4_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__5;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__6;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__9;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__11;
static const lean_array_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__12 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__12_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__13;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__14;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__15;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__16;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__17;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "obj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 235, 44, 74, 242, 121, 239, 90)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_setImpureType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_setImpureType___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_setImpureType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_setImpureType___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setImpureType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setImpureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_nameToImpureType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Compiler_LCNF_nameToImpureType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_nameToImpureType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_nameToImpureType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_nameToImpureType___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_nameToImpureType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "` was not compiled; `compileDecls` must run on inductive types first"};
static const lean_object* l_Lean_Compiler_LCNF_nameToImpureType___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_nameToImpureType___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_nameToImpureType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_nameToImpureType___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_nameToImpureType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_nameToImpureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lcAny"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_toImpureType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_toImpureType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_toImpureType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toImpureType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toImpureType___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_toImpureType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Compiler.LCNF.toImpureType"};
static const lean_object* l_Lean_Compiler_LCNF_toImpureType___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_toImpureType___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toImpureType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toImpureType___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_toImpureType___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toImpureType___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpureType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_erased_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_erased_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_usize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_usize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_scalar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_scalar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_void_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_void_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "◾"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "obj@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__2_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__4_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "usize@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__6_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scalar#"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__8_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__8_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__10_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__11_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "void"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__12 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__12_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__12_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__13 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format(lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_instToFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_instToFormat___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_instToFormat___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_instToFormat = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_instToFormat___closed__0_value;
static const lean_array_object l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorLayout;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ctorLayoutExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(157, 123, 250, 80, 124, 9, 225, 155)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_ctorLayoutExt;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "_private.Lean.Compiler.LCNF.ToImpureType.0.Lean.Compiler.LCNF.setCtorLayout.fillCache"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setCtorLayout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setCtorLayout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getCtorLayout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getCtorLayout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Compiler.LCNF.compileInductives"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_compileInductives___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_compileInductives___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_compileInductives___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_compileInductives(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_compileInductives___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_10_ = lean_box(0);
v___x_11_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__4));
v___x_12_ = l_Lean_Expr_const___override(v___x_11_, v___x_10_);
return v___x_12_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_box(0);
v___x_17_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__7));
v___x_18_ = l_Lean_Expr_const___override(v___x_17_, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = lean_box(0);
v___x_23_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__10));
v___x_24_ = l_Lean_Expr_const___override(v___x_23_, v___x_22_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum(lean_object* v_numCtors_25_){
_start:
{
lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_26_ = lean_unsigned_to_nat(1u);
v___x_27_ = lean_nat_dec_eq(v_numCtors_25_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_28_ = lean_unsigned_to_nat(256u);
v___x_29_ = lean_nat_dec_lt(v_numCtors_25_, v___x_28_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(65536u);
v___x_31_ = lean_nat_dec_lt(v_numCtors_25_, v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_cstr_to_nat("4294967296");
v___x_33_ = lean_nat_dec_lt(v_numCtors_25_, v___x_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_34_; 
v___x_34_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2);
return v___x_34_;
}
else
{
lean_object* v___x_35_; 
v___x_35_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5);
return v___x_35_;
}
}
else
{
lean_object* v___x_36_; 
v___x_36_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8);
return v___x_36_;
}
}
else
{
lean_object* v___x_37_; 
v___x_37_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11);
return v___x_37_;
}
}
else
{
lean_object* v___x_38_; 
v___x_38_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2);
return v___x_38_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___boxed(lean_object* v_numCtors_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum(v_numCtors_39_);
lean_dec(v_numCtors_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0(lean_object* v_env_41_, lean_object* v_as_42_, size_t v_i_43_, size_t v_stop_44_, lean_object* v_b_45_){
_start:
{
lean_object* v___y_47_; uint8_t v___x_51_; 
v___x_51_ = lean_usize_dec_eq(v_i_43_, v_stop_44_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; lean_object* v_fst_53_; uint8_t v___x_54_; 
v___x_52_ = lean_array_uget_borrowed(v_as_42_, v_i_43_);
v_fst_53_ = lean_ctor_get(v___x_52_, 0);
lean_inc(v_fst_53_);
lean_inc_ref(v_env_41_);
v___x_54_ = l_Lean_Environment_contains(v_env_41_, v_fst_53_, v___x_51_);
if (v___x_54_ == 0)
{
v___y_47_ = v_b_45_;
goto v___jp_46_;
}
else
{
lean_object* v___x_55_; 
lean_inc(v___x_52_);
v___x_55_ = lean_array_push(v_b_45_, v___x_52_);
v___y_47_ = v___x_55_;
goto v___jp_46_;
}
}
else
{
lean_dec_ref(v_env_41_);
return v_b_45_;
}
v___jp_46_:
{
size_t v___x_48_; size_t v___x_49_; 
v___x_48_ = ((size_t)1ULL);
v___x_49_ = lean_usize_add(v_i_43_, v___x_48_);
v_i_43_ = v___x_49_;
v_b_45_ = v___y_47_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_56_, lean_object* v_as_57_, lean_object* v_i_58_, lean_object* v_stop_59_, lean_object* v_b_60_){
_start:
{
size_t v_i_boxed_61_; size_t v_stop_boxed_62_; lean_object* v_res_63_; 
v_i_boxed_61_ = lean_unbox_usize(v_i_58_);
lean_dec(v_i_58_);
v_stop_boxed_62_ = lean_unbox_usize(v_stop_59_);
lean_dec(v_stop_59_);
v_res_63_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0(v_env_56_, v_as_57_, v_i_boxed_61_, v_stop_boxed_62_, v_b_60_);
lean_dec_ref(v_as_57_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_(lean_object* v___x_64_, lean_object* v_env_65_, lean_object* v_s_66_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; uint8_t v___x_70_; 
v___x_67_ = l_Lean_NameMap_toArray___redArg(v_s_66_);
v___x_68_ = lean_array_get_size(v___x_67_);
v___x_69_ = lean_mk_empty_array_with_capacity(v___x_64_);
v___x_70_ = lean_nat_dec_lt(v___x_64_, v___x_68_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; 
lean_dec_ref(v___x_67_);
lean_dec_ref(v_env_65_);
lean_inc_ref_n(v___x_69_, 2);
v___x_71_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_71_, 0, v___x_69_);
lean_ctor_set(v___x_71_, 1, v___x_69_);
lean_ctor_set(v___x_71_, 2, v___x_69_);
return v___x_71_;
}
else
{
uint8_t v___x_72_; 
v___x_72_ = lean_nat_dec_le(v___x_68_, v___x_68_);
if (v___x_72_ == 0)
{
if (v___x_70_ == 0)
{
lean_object* v___x_73_; 
lean_dec_ref(v___x_67_);
lean_dec_ref(v_env_65_);
lean_inc_ref_n(v___x_69_, 2);
v___x_73_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_73_, 0, v___x_69_);
lean_ctor_set(v___x_73_, 1, v___x_69_);
lean_ctor_set(v___x_73_, 2, v___x_69_);
return v___x_73_;
}
else
{
size_t v___x_74_; size_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_74_ = ((size_t)0ULL);
v___x_75_ = lean_usize_of_nat(v___x_68_);
v___x_76_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0(v_env_65_, v___x_67_, v___x_74_, v___x_75_, v___x_69_);
lean_dec_ref(v___x_67_);
lean_inc_ref_n(v___x_76_, 2);
v___x_77_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
lean_ctor_set(v___x_77_, 2, v___x_76_);
return v___x_77_;
}
}
else
{
size_t v___x_78_; size_t v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_78_ = ((size_t)0ULL);
v___x_79_ = lean_usize_of_nat(v___x_68_);
v___x_80_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0(v_env_65_, v___x_67_, v___x_78_, v___x_79_, v___x_69_);
lean_dec_ref(v___x_67_);
lean_inc_ref_n(v___x_80_, 2);
v___x_81_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
lean_ctor_set(v___x_81_, 2, v___x_80_);
return v___x_81_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2____boxed(lean_object* v___x_82_, lean_object* v_env_83_, lean_object* v_s_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_(v___x_82_, v_env_83_, v_s_84_);
lean_dec(v_s_84_);
lean_dec(v___x_82_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___f_125_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_));
v___x_126_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_));
v___x_127_ = lean_box(0);
v___x_128_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_126_, v___x_127_, v___f_125_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2____boxed(lean_object* v_a_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_();
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0(lean_object* v_env_131_, lean_object* v_as_132_, size_t v_i_133_, size_t v_stop_134_, lean_object* v_b_135_){
_start:
{
lean_object* v___y_137_; uint8_t v___x_141_; 
v___x_141_ = lean_usize_dec_eq(v_i_133_, v_stop_134_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; lean_object* v_fst_143_; uint8_t v___x_144_; 
v___x_142_ = lean_array_uget_borrowed(v_as_132_, v_i_133_);
v_fst_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_fst_143_);
lean_inc_ref(v_env_131_);
v___x_144_ = l_Lean_Environment_contains(v_env_131_, v_fst_143_, v___x_141_);
if (v___x_144_ == 0)
{
v___y_137_ = v_b_135_;
goto v___jp_136_;
}
else
{
lean_object* v___x_145_; 
lean_inc(v___x_142_);
v___x_145_ = lean_array_push(v_b_135_, v___x_142_);
v___y_137_ = v___x_145_;
goto v___jp_136_;
}
}
else
{
lean_dec_ref(v_env_131_);
return v_b_135_;
}
v___jp_136_:
{
size_t v___x_138_; size_t v___x_139_; 
v___x_138_ = ((size_t)1ULL);
v___x_139_ = lean_usize_add(v_i_133_, v___x_138_);
v_i_133_ = v___x_139_;
v_b_135_ = v___y_137_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_146_, lean_object* v_as_147_, lean_object* v_i_148_, lean_object* v_stop_149_, lean_object* v_b_150_){
_start:
{
size_t v_i_boxed_151_; size_t v_stop_boxed_152_; lean_object* v_res_153_; 
v_i_boxed_151_ = lean_unbox_usize(v_i_148_);
lean_dec(v_i_148_);
v_stop_boxed_152_ = lean_unbox_usize(v_stop_149_);
lean_dec(v_stop_149_);
v_res_153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0(v_env_146_, v_as_147_, v_i_boxed_151_, v_stop_boxed_152_, v_b_150_);
lean_dec_ref(v_as_147_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_(lean_object* v___x_154_, lean_object* v_env_155_, lean_object* v_s_156_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_157_ = l_Lean_NameMap_toArray___redArg(v_s_156_);
v___x_158_ = lean_array_get_size(v___x_157_);
v___x_159_ = lean_mk_empty_array_with_capacity(v___x_154_);
v___x_160_ = lean_nat_dec_lt(v___x_154_, v___x_158_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; 
lean_dec_ref(v___x_157_);
lean_dec_ref(v_env_155_);
lean_inc_ref_n(v___x_159_, 2);
v___x_161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_161_, 0, v___x_159_);
lean_ctor_set(v___x_161_, 1, v___x_159_);
lean_ctor_set(v___x_161_, 2, v___x_159_);
return v___x_161_;
}
else
{
uint8_t v___x_162_; 
v___x_162_ = lean_nat_dec_le(v___x_158_, v___x_158_);
if (v___x_162_ == 0)
{
if (v___x_160_ == 0)
{
lean_object* v___x_163_; 
lean_dec_ref(v___x_157_);
lean_dec_ref(v_env_155_);
lean_inc_ref_n(v___x_159_, 2);
v___x_163_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_163_, 0, v___x_159_);
lean_ctor_set(v___x_163_, 1, v___x_159_);
lean_ctor_set(v___x_163_, 2, v___x_159_);
return v___x_163_;
}
else
{
size_t v___x_164_; size_t v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_164_ = ((size_t)0ULL);
v___x_165_ = lean_usize_of_nat(v___x_158_);
v___x_166_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0(v_env_155_, v___x_157_, v___x_164_, v___x_165_, v___x_159_);
lean_dec_ref(v___x_157_);
lean_inc_ref_n(v___x_166_, 2);
v___x_167_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
lean_ctor_set(v___x_167_, 2, v___x_166_);
return v___x_167_;
}
}
else
{
size_t v___x_168_; size_t v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = ((size_t)0ULL);
v___x_169_ = lean_usize_of_nat(v___x_158_);
v___x_170_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0(v_env_155_, v___x_157_, v___x_168_, v___x_169_, v___x_159_);
lean_dec_ref(v___x_157_);
lean_inc_ref_n(v___x_170_, 2);
v___x_171_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
lean_ctor_set(v___x_171_, 2, v___x_170_);
return v___x_171_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2____boxed(lean_object* v___x_172_, lean_object* v_env_173_, lean_object* v_s_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_(v___x_172_, v_env_173_, v_s_174_);
lean_dec(v_s_174_);
lean_dec(v___x_172_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___f_183_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_));
v___x_184_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_));
v___x_185_ = lean_box(0);
v___x_186_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_184_, v___x_185_, v___f_183_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2____boxed(lean_object* v_a_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_();
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType(lean_object* v_type_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_){
_start:
{
lean_object* v___x_198_; 
lean_inc_ref(v_type_192_);
v___x_198_ = l_Lean_Meta_isProp(v_type_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; uint8_t v___x_200_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
lean_inc(v_a_199_);
v___x_200_ = lean_unbox(v_a_199_);
lean_dec(v_a_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; 
lean_dec_ref_known(v___x_198_, 1);
lean_inc_ref(v_type_192_);
v___x_201_ = l_Lean_Meta_isTypeFormerType(v_type_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; uint8_t v___x_203_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_a_202_);
v___x_203_ = lean_unbox(v_a_202_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; 
lean_dec_ref_known(v___x_201_, 1);
v___x_204_ = l_Lean_Meta_whnfD(v_type_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_274_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_274_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_274_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_274_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
if (lean_obj_tag(v_a_205_) == 11)
{
lean_object* v_typeName_209_; 
v_typeName_209_ = lean_ctor_get(v_a_205_, 0);
lean_inc(v_typeName_209_);
if (lean_obj_tag(v_typeName_209_) == 1)
{
lean_object* v_pre_210_; 
v_pre_210_ = lean_ctor_get(v_typeName_209_, 0);
if (lean_obj_tag(v_pre_210_) == 0)
{
lean_object* v_idx_211_; lean_object* v_struct_212_; lean_object* v_str_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v_idx_211_ = lean_ctor_get(v_a_205_, 1);
lean_inc(v_idx_211_);
v_struct_212_ = lean_ctor_get(v_a_205_, 2);
lean_inc_ref(v_struct_212_);
lean_dec_ref_known(v_a_205_, 3);
v_str_213_ = lean_ctor_get(v_typeName_209_, 1);
lean_inc_ref(v_str_213_);
lean_dec_ref_known(v_typeName_209_, 2);
v___x_214_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__0));
v___x_215_ = lean_string_dec_eq(v_str_213_, v___x_214_);
lean_dec_ref(v_str_213_);
if (v___x_215_ == 0)
{
lean_object* v___x_217_; 
lean_dec_ref(v_struct_212_);
lean_dec(v_idx_211_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_217_ = v___x_207_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_a_202_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
else
{
lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_219_ = lean_unsigned_to_nat(0u);
v___x_220_ = lean_nat_dec_eq(v_idx_211_, v___x_219_);
lean_dec(v_idx_211_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; lean_object* v___x_223_; 
lean_dec_ref(v_struct_212_);
lean_dec(v_a_202_);
v___x_221_ = lean_box(v___x_220_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_221_);
v___x_223_ = v___x_207_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v___x_221_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
else
{
if (lean_obj_tag(v_struct_212_) == 5)
{
lean_object* v_fn_225_; 
v_fn_225_ = lean_ctor_get(v_struct_212_, 0);
lean_inc_ref(v_fn_225_);
lean_dec_ref_known(v_struct_212_, 2);
if (lean_obj_tag(v_fn_225_) == 4)
{
lean_object* v_declName_226_; 
v_declName_226_ = lean_ctor_get(v_fn_225_, 0);
lean_inc(v_declName_226_);
if (lean_obj_tag(v_declName_226_) == 1)
{
lean_object* v_pre_227_; 
v_pre_227_ = lean_ctor_get(v_declName_226_, 0);
lean_inc(v_pre_227_);
if (lean_obj_tag(v_pre_227_) == 1)
{
lean_object* v_pre_228_; 
v_pre_228_ = lean_ctor_get(v_pre_227_, 0);
if (lean_obj_tag(v_pre_228_) == 0)
{
lean_object* v_us_229_; lean_object* v_str_230_; lean_object* v_str_231_; lean_object* v___x_232_; uint8_t v___x_233_; 
v_us_229_ = lean_ctor_get(v_fn_225_, 1);
lean_inc(v_us_229_);
lean_dec_ref_known(v_fn_225_, 2);
v_str_230_ = lean_ctor_get(v_declName_226_, 1);
lean_inc_ref(v_str_230_);
lean_dec_ref_known(v_declName_226_, 2);
v_str_231_ = lean_ctor_get(v_pre_227_, 1);
lean_inc_ref(v_str_231_);
lean_dec_ref_known(v_pre_227_, 2);
v___x_232_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__1));
v___x_233_ = lean_string_dec_eq(v_str_231_, v___x_232_);
lean_dec_ref(v_str_231_);
if (v___x_233_ == 0)
{
lean_object* v___x_235_; 
lean_dec_ref(v_str_230_);
lean_dec(v_us_229_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_235_ = v___x_207_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_202_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
else
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__2));
v___x_238_ = lean_string_dec_eq(v_str_230_, v___x_237_);
lean_dec_ref(v_str_230_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; lean_object* v___x_241_; 
lean_dec(v_us_229_);
lean_dec(v_a_202_);
v___x_239_ = lean_box(v___x_238_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_239_);
v___x_241_ = v___x_207_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
else
{
if (lean_obj_tag(v_us_229_) == 0)
{
lean_object* v___x_243_; lean_object* v___x_245_; 
lean_dec(v_a_202_);
v___x_243_ = lean_box(v___x_238_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_243_);
v___x_245_ = v___x_207_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_243_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
else
{
lean_object* v___x_248_; 
lean_dec(v_us_229_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_248_ = v___x_207_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_202_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
else
{
lean_object* v___x_251_; 
lean_dec_ref_known(v_pre_227_, 2);
lean_dec_ref_known(v_declName_226_, 2);
lean_dec_ref_known(v_fn_225_, 2);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_251_ = v___x_207_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_a_202_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
else
{
lean_object* v___x_254_; 
lean_dec(v_pre_227_);
lean_dec_ref_known(v_declName_226_, 2);
lean_dec_ref_known(v_fn_225_, 2);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_254_ = v___x_207_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_202_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
else
{
lean_object* v___x_257_; 
lean_dec_ref_known(v_fn_225_, 2);
lean_dec(v_declName_226_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_257_ = v___x_207_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_a_202_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
else
{
lean_object* v___x_260_; 
lean_dec_ref(v_fn_225_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_260_ = v___x_207_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_202_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
else
{
lean_object* v___x_263_; 
lean_dec_ref(v_struct_212_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_263_ = v___x_207_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_202_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
else
{
lean_object* v___x_266_; 
lean_dec_ref_known(v_typeName_209_, 2);
lean_dec_ref_known(v_a_205_, 3);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_266_ = v___x_207_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_202_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
else
{
lean_object* v___x_269_; 
lean_dec(v_typeName_209_);
lean_dec_ref_known(v_a_205_, 3);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_269_ = v___x_207_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_202_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
else
{
lean_object* v___x_272_; 
lean_dec(v_a_205_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_a_202_);
v___x_272_ = v___x_207_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_202_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
else
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
lean_dec(v_a_202_);
v_a_275_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_204_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_204_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_a_275_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
}
else
{
lean_dec(v_a_202_);
lean_dec_ref(v_type_192_);
return v___x_201_;
}
}
else
{
lean_dec_ref(v_type_192_);
return v___x_201_;
}
}
else
{
lean_dec_ref(v_type_192_);
return v___x_198_;
}
}
else
{
lean_dec_ref(v_type_192_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___boxed(lean_object* v_type_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType(v_type_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
lean_dec(v_a_285_);
lean_dec_ref(v_a_284_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f(lean_object* v_declName_291_, lean_object* v_a_292_, lean_object* v_a_293_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_295_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTrivialStructureInfoExt;
v___x_296_ = ((lean_object*)(l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___closed__0));
v___x_297_ = l_Lean_Compiler_LCNF_Irrelevant_setHasTrivialStructure_x3f(v___x_295_, v___x_296_, v_declName_291_, v_a_292_, v_a_293_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___boxed(lean_object* v_declName_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f(v_declName_298_, v_a_299_, v_a_300_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(lean_object* v_declName_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTrivialStructureInfoExt;
v___x_308_ = l_Lean_Compiler_LCNF_Irrelevant_hasTrivialStructure_x3f(v___x_307_, v_declName_303_, v_a_304_, v_a_305_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f___boxed(lean_object* v_declName_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(v_declName_309_, v_a_310_, v_a_311_);
lean_dec(v_a_311_);
lean_dec_ref(v_a_310_);
return v_res_313_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = lean_box(0);
v___x_324_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__7));
v___x_325_ = l_Lean_Expr_const___override(v___x_324_, v___x_323_);
return v___x_325_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8);
v___x_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
return v___x_327_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = lean_box(0);
v___x_332_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__11));
v___x_333_ = l_Lean_Expr_const___override(v___x_332_, v___x_331_);
return v___x_333_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12);
v___x_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
return v___x_335_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_box(0);
v___x_339_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__14));
v___x_340_ = l_Lean_Expr_const___override(v___x_339_, v___x_338_);
return v___x_340_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15);
v___x_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_345_ = lean_box(0);
v___x_346_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__17));
v___x_347_ = l_Lean_Expr_const___override(v___x_346_, v___x_345_);
return v___x_347_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18);
v___x_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_box(0);
v___x_353_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__20));
v___x_354_ = l_Lean_Expr_const___override(v___x_353_, v___x_352_);
return v___x_354_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21);
v___x_356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
return v___x_356_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_359_ = lean_box(0);
v___x_360_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__23));
v___x_361_ = l_Lean_Expr_const___override(v___x_360_, v___x_359_);
return v___x_361_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24);
v___x_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
return v___x_363_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_366_ = lean_box(0);
v___x_367_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__26));
v___x_368_ = l_Lean_Expr_const___override(v___x_367_, v___x_366_);
return v___x_368_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27);
v___x_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
return v___x_370_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5);
v___x_372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
return v___x_372_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8);
v___x_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
return v___x_374_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11);
v___x_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(lean_object* v_x_377_){
_start:
{
if (lean_obj_tag(v_x_377_) == 1)
{
lean_object* v_pre_378_; 
v_pre_378_ = lean_ctor_get(v_x_377_, 0);
if (lean_obj_tag(v_pre_378_) == 0)
{
lean_object* v_str_379_; lean_object* v___x_380_; uint8_t v___x_381_; 
v_str_379_ = lean_ctor_get(v_x_377_, 1);
v___x_380_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9));
v___x_381_ = lean_string_dec_eq(v_str_379_, v___x_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_382_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6));
v___x_383_ = lean_string_dec_eq(v_str_379_, v___x_382_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_384_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3));
v___x_385_ = lean_string_dec_eq(v_str_379_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; uint8_t v___x_387_; 
v___x_386_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0));
v___x_387_ = lean_string_dec_eq(v_str_379_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_388_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1));
v___x_389_ = lean_string_dec_eq(v_str_379_, v___x_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_390_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2));
v___x_391_ = lean_string_dec_eq(v_str_379_, v___x_390_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3));
v___x_393_ = lean_string_dec_eq(v_str_379_, v___x_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_394_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4));
v___x_395_ = lean_string_dec_eq(v_str_379_, v___x_394_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_396_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__5));
v___x_397_ = lean_string_dec_eq(v_str_379_, v___x_396_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_398_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6));
v___x_399_ = lean_string_dec_eq(v_str_379_, v___x_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; 
v___x_400_ = lean_box(0);
return v___x_400_;
}
else
{
lean_object* v___x_401_; 
v___x_401_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9);
return v___x_401_;
}
}
else
{
lean_object* v___x_402_; 
v___x_402_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13);
return v___x_402_;
}
}
else
{
lean_object* v___x_403_; 
v___x_403_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16);
return v___x_403_;
}
}
else
{
lean_object* v___x_404_; 
v___x_404_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19);
return v___x_404_;
}
}
else
{
lean_object* v___x_405_; 
v___x_405_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22);
return v___x_405_;
}
}
else
{
lean_object* v___x_406_; 
v___x_406_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25);
return v___x_406_;
}
}
else
{
lean_object* v___x_407_; 
v___x_407_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28);
return v___x_407_;
}
}
else
{
lean_object* v___x_408_; 
v___x_408_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29);
return v___x_408_;
}
}
else
{
lean_object* v___x_409_; 
v___x_409_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30);
return v___x_409_;
}
}
else
{
lean_object* v___x_410_; 
v___x_410_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31);
return v___x_410_;
}
}
else
{
lean_object* v___x_411_; 
v___x_411_ = lean_box(0);
return v___x_411_;
}
}
else
{
lean_object* v___x_412_; 
v___x_412_ = lean_box(0);
return v___x_412_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___boxed(lean_object* v_x_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(v_x_413_);
lean_dec(v_x_413_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0(lean_object* v_msg_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v___f_420_; lean_object* v___x_5644__overap_421_; lean_object* v___x_422_; 
v___f_420_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0));
v___x_5644__overap_421_ = lean_panic_fn_borrowed(v___f_420_, v_msg_416_);
lean_inc(v___y_418_);
lean_inc_ref(v___y_417_);
v___x_422_ = lean_apply_3(v___x_5644__overap_421_, v___y_417_, v___y_418_, lean_box(0));
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___boxed(lean_object* v_msg_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0(v_msg_423_, v___y_424_, v___y_425_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___lam__0(lean_object* v_k_428_, lean_object* v_b_429_, lean_object* v_c_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v___x_436_; 
lean_inc(v___y_434_);
lean_inc_ref(v___y_433_);
lean_inc(v___y_432_);
lean_inc_ref(v___y_431_);
v___x_436_ = lean_apply_7(v_k_428_, v_b_429_, v_c_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, lean_box(0));
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___lam__0___boxed(lean_object* v_k_437_, lean_object* v_b_438_, lean_object* v_c_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___lam__0(v_k_437_, v_b_438_, v_c_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg(lean_object* v_type_446_, lean_object* v_k_447_, uint8_t v_cleanupAnnotations_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v___f_454_; uint8_t v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___f_454_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_454_, 0, v_k_447_);
v___x_455_ = 0;
v___x_456_ = lean_box(0);
v___x_457_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_455_, v___x_456_, v_type_446_, v___f_454_, v_cleanupAnnotations_448_, v___x_455_, v___y_449_, v___y_450_, v___y_451_, v___y_452_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_457_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
else
{
lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
v_a_466_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_473_ == 0)
{
v___x_468_ = v___x_457_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_457_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_471_; 
if (v_isShared_469_ == 0)
{
v___x_471_ = v___x_468_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_466_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___boxed(lean_object* v_type_474_, lean_object* v_k_475_, lean_object* v_cleanupAnnotations_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_482_; lean_object* v_res_483_; 
v_cleanupAnnotations_boxed_482_ = lean_unbox(v_cleanupAnnotations_476_);
v_res_483_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg(v_type_474_, v_k_475_, v_cleanupAnnotations_boxed_482_, v___y_477_, v___y_478_, v___y_479_, v___y_480_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2(lean_object* v_00_u03b1_484_, lean_object* v_type_485_, lean_object* v_k_486_, uint8_t v_cleanupAnnotations_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg(v_type_485_, v_k_486_, v_cleanupAnnotations_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___boxed(lean_object* v_00_u03b1_494_, lean_object* v_type_495_, lean_object* v_k_496_, lean_object* v_cleanupAnnotations_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_503_; lean_object* v_res_504_; 
v_cleanupAnnotations_boxed_503_ = lean_unbox(v_cleanupAnnotations_497_);
v_res_504_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2(v_00_u03b1_494_, v_type_495_, v_k_496_, v_cleanupAnnotations_boxed_503_, v___y_498_, v___y_499_, v___y_500_, v___y_501_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg(lean_object* v_a_508_, lean_object* v_b_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
lean_object* v_array_515_; lean_object* v_start_516_; lean_object* v_stop_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_574_; 
v_array_515_ = lean_ctor_get(v_a_508_, 0);
v_start_516_ = lean_ctor_get(v_a_508_, 1);
v_stop_517_ = lean_ctor_get(v_a_508_, 2);
v_isSharedCheck_574_ = !lean_is_exclusive(v_a_508_);
if (v_isSharedCheck_574_ == 0)
{
v___x_519_ = v_a_508_;
v_isShared_520_ = v_isSharedCheck_574_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_stop_517_);
lean_inc(v_start_516_);
lean_inc(v_array_515_);
lean_dec(v_a_508_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_574_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
uint8_t v___x_521_; 
v___x_521_ = lean_nat_dec_lt(v_start_516_, v_stop_517_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; 
lean_del_object(v___x_519_);
lean_dec(v_stop_517_);
lean_dec(v_start_516_);
lean_dec_ref(v_array_515_);
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v_b_509_);
return v___x_522_;
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_528_; 
lean_dec_ref(v_b_509_);
v___x_523_ = lean_box(0);
v___x_524_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___closed__0));
v___x_525_ = lean_unsigned_to_nat(1u);
v___x_526_ = lean_nat_add(v_start_516_, v___x_525_);
lean_inc_ref(v_array_515_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 1, v___x_526_);
v___x_528_ = v___x_519_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_array_515_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_573_, 2, v_stop_517_);
v___x_528_ = v_reuseFailAlloc_573_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_array_fget(v_array_515_, v_start_516_);
lean_dec(v_start_516_);
lean_dec_ref(v_array_515_);
v___x_530_ = l_Lean_Expr_fvarId_x21(v___x_529_);
lean_dec(v___x_529_);
v___x_531_ = l_Lean_FVarId_getType___redArg(v___x_530_, v___y_510_, v___y_512_, v___y_513_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_533_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_a_532_);
lean_dec_ref_known(v___x_531_, 1);
v___x_533_ = l_Lean_Compiler_LCNF_toLCNFType(v_a_532_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_535_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref_known(v___x_533_, 1);
v___x_535_ = l_Lean_Compiler_LCNF_toMonoType(v_a_534_, v___y_512_, v___y_513_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_548_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_548_ == 0)
{
v___x_538_ = v___x_535_;
v_isShared_539_ = v_isSharedCheck_548_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_535_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_548_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
uint8_t v___x_540_; 
v___x_540_ = l_Lean_Expr_isErased(v_a_536_);
lean_dec(v_a_536_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_545_; 
lean_dec_ref(v___x_528_);
v___x_541_ = lean_box(v___x_521_);
v___x_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
v___x_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
lean_ctor_set(v___x_543_, 1, v___x_523_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_543_);
v___x_545_ = v___x_538_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_543_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
else
{
lean_del_object(v___x_538_);
v_a_508_ = v___x_528_;
v_b_509_ = v___x_524_;
goto _start;
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec_ref(v___x_528_);
v_a_549_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_535_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_535_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v___x_528_);
v_a_557_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_533_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_533_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_dec_ref(v___x_528_);
v_a_565_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_531_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_531_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___boxed(lean_object* v_a_575_, lean_object* v_b_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg(v_a_575_, v_b_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0(uint8_t v___x_583_, lean_object* v_numParams_584_, lean_object* v___x_585_, lean_object* v_params_586_, lean_object* v_x_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_lower_594_; lean_object* v_upper_595_; lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_621_ = lean_array_get_size(v_params_586_);
v___x_622_ = lean_nat_dec_le(v_numParams_584_, v___x_585_);
if (v___x_622_ == 0)
{
lean_dec(v___x_585_);
v_lower_594_ = v_numParams_584_;
v_upper_595_ = v___x_621_;
goto v___jp_593_;
}
else
{
lean_dec(v_numParams_584_);
v_lower_594_ = v___x_585_;
v_upper_595_ = v___x_621_;
goto v___jp_593_;
}
v___jp_593_:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_596_ = l_Array_toSubarray___redArg(v_params_586_, v_lower_594_, v_upper_595_);
v___x_597_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___closed__0));
v___x_598_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg(v___x_596_, v___x_597_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
if (lean_obj_tag(v___x_598_) == 0)
{
lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_612_; 
v_a_599_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_612_ == 0)
{
v___x_601_ = v___x_598_;
v_isShared_602_ = v_isSharedCheck_612_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_598_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_612_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v_fst_603_; 
v_fst_603_ = lean_ctor_get(v_a_599_, 0);
lean_inc(v_fst_603_);
lean_dec(v_a_599_);
if (lean_obj_tag(v_fst_603_) == 0)
{
lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_604_ = lean_box(v___x_583_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v___x_604_);
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
else
{
lean_object* v_val_608_; lean_object* v___x_610_; 
v_val_608_ = lean_ctor_get(v_fst_603_, 0);
lean_inc(v_val_608_);
lean_dec_ref_known(v_fst_603_, 1);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v_val_608_);
v___x_610_ = v___x_601_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_val_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
v_a_613_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_598_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_598_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0___boxed(lean_object* v___x_623_, lean_object* v_numParams_624_, lean_object* v___x_625_, lean_object* v_params_626_, lean_object* v_x_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
uint8_t v___x_7045__boxed_633_; lean_object* v_res_634_; 
v___x_7045__boxed_633_ = lean_unbox(v___x_623_);
v_res_634_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0(v___x_7045__boxed_633_, v_numParams_624_, v___x_625_, v_params_626_, v_x_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
lean_dec_ref(v_x_627_);
return v_res_634_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_638_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__2));
v___x_639_ = lean_unsigned_to_nat(58u);
v___x_640_ = lean_unsigned_to_nat(92u);
v___x_641_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__1));
v___x_642_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__0));
v___x_643_ = l_mkPanicMessageWithDecl(v___x_642_, v___x_641_, v___x_640_, v___x_639_, v___x_638_);
return v___x_643_;
}
}
static uint64_t _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_650_; uint64_t v___x_651_; 
v___x_650_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__4));
v___x_651_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_650_);
return v___x_651_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__6(void){
_start:
{
uint64_t v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_652_ = lean_uint64_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__5);
v___x_653_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__4));
v___x_654_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_654_, 0, v___x_653_);
lean_ctor_set_uint64(v___x_654_, sizeof(void*)*1, v___x_652_);
return v___x_654_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7(void){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_655_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7);
v___x_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
return v___x_657_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__9(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_658_ = lean_unsigned_to_nat(32u);
v___x_659_ = lean_mk_empty_array_with_capacity(v___x_658_);
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
return v___x_660_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10(void){
_start:
{
size_t v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_661_ = ((size_t)5ULL);
v___x_662_ = lean_unsigned_to_nat(0u);
v___x_663_ = lean_unsigned_to_nat(32u);
v___x_664_ = lean_mk_empty_array_with_capacity(v___x_663_);
v___x_665_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__9, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__9_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__9);
v___x_666_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_666_, 0, v___x_665_);
lean_ctor_set(v___x_666_, 1, v___x_664_);
lean_ctor_set(v___x_666_, 2, v___x_662_);
lean_ctor_set(v___x_666_, 3, v___x_662_);
lean_ctor_set_usize(v___x_666_, 4, v___x_661_);
return v___x_666_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__11(void){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_667_ = lean_box(1);
v___x_668_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10);
v___x_669_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8);
v___x_670_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
lean_ctor_set(v___x_670_, 1, v___x_668_);
lean_ctor_set(v___x_670_, 2, v___x_667_);
return v___x_670_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__13(void){
_start:
{
uint8_t v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_673_ = 1;
v___x_674_ = lean_unsigned_to_nat(0u);
v___x_675_ = lean_box(0);
v___x_676_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__12));
v___x_677_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__11, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__11_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__11);
v___x_678_ = lean_box(1);
v___x_679_ = 0;
v___x_680_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__6);
v___x_681_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v___x_678_);
lean_ctor_set(v___x_681_, 2, v___x_677_);
lean_ctor_set(v___x_681_, 3, v___x_676_);
lean_ctor_set(v___x_681_, 4, v___x_675_);
lean_ctor_set(v___x_681_, 5, v___x_674_);
lean_ctor_set(v___x_681_, 6, v___x_675_);
lean_ctor_set_uint8(v___x_681_, sizeof(void*)*7, v___x_679_);
lean_ctor_set_uint8(v___x_681_, sizeof(void*)*7 + 1, v___x_679_);
lean_ctor_set_uint8(v___x_681_, sizeof(void*)*7 + 2, v___x_679_);
lean_ctor_set_uint8(v___x_681_, sizeof(void*)*7 + 3, v___x_673_);
return v___x_681_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__14(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_682_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8);
v___x_683_ = lean_unsigned_to_nat(0u);
v___x_684_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
lean_ctor_set(v___x_684_, 2, v___x_683_);
lean_ctor_set(v___x_684_, 3, v___x_683_);
lean_ctor_set(v___x_684_, 4, v___x_682_);
lean_ctor_set(v___x_684_, 5, v___x_682_);
lean_ctor_set(v___x_684_, 6, v___x_682_);
lean_ctor_set(v___x_684_, 7, v___x_682_);
lean_ctor_set(v___x_684_, 8, v___x_682_);
lean_ctor_set(v___x_684_, 9, v___x_682_);
lean_ctor_set(v___x_684_, 10, v___x_682_);
return v___x_684_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__15(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8);
v___x_686_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
lean_ctor_set(v___x_686_, 2, v___x_685_);
lean_ctor_set(v___x_686_, 3, v___x_685_);
lean_ctor_set(v___x_686_, 4, v___x_685_);
lean_ctor_set(v___x_686_, 5, v___x_685_);
return v___x_686_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__16(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_687_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__8);
v___x_688_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
lean_ctor_set(v___x_688_, 2, v___x_687_);
lean_ctor_set(v___x_688_, 3, v___x_687_);
lean_ctor_set(v___x_688_, 4, v___x_687_);
return v___x_688_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__17(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_689_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__16, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__16_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__16);
v___x_690_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10);
v___x_691_ = lean_box(1);
v___x_692_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__15, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__15_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__15);
v___x_693_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__14, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__14_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__14);
v___x_694_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
lean_ctor_set(v___x_694_, 1, v___x_692_);
lean_ctor_set(v___x_694_, 2, v___x_691_);
lean_ctor_set(v___x_694_, 3, v___x_690_);
lean_ctor_set(v___x_694_, 4, v___x_689_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg(lean_object* v___x_695_, lean_object* v_as_x27_696_, lean_object* v_b_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
if (lean_obj_tag(v_as_x27_696_) == 0)
{
lean_object* v___x_701_; 
lean_dec_ref(v___x_695_);
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v_b_697_);
return v___x_701_;
}
else
{
lean_object* v_head_702_; lean_object* v_tail_703_; uint8_t v_a_705_; lean_object* v___y_711_; lean_object* v___y_712_; uint8_t v___x_724_; lean_object* v___x_725_; 
v_head_702_ = lean_ctor_get(v_as_x27_696_, 0);
v_tail_703_ = lean_ctor_get(v_as_x27_696_, 1);
v___x_724_ = 0;
lean_inc(v_head_702_);
lean_inc_ref(v___x_695_);
v___x_725_ = l_Lean_Environment_find_x3f(v___x_695_, v_head_702_, v___x_724_);
if (lean_obj_tag(v___x_725_) == 1)
{
lean_object* v_val_726_; 
v_val_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_val_726_);
lean_dec_ref_known(v___x_725_, 1);
if (lean_obj_tag(v_val_726_) == 6)
{
lean_object* v_val_727_; lean_object* v_toConstantVal_728_; lean_object* v_numParams_729_; lean_object* v_type_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___f_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_val_727_ = lean_ctor_get(v_val_726_, 0);
lean_inc_ref(v_val_727_);
lean_dec_ref_known(v_val_726_, 1);
v_toConstantVal_728_ = lean_ctor_get(v_val_727_, 0);
lean_inc_ref(v_toConstantVal_728_);
v_numParams_729_ = lean_ctor_get(v_val_727_, 3);
lean_inc(v_numParams_729_);
lean_dec_ref(v_val_727_);
v_type_730_ = lean_ctor_get(v_toConstantVal_728_, 2);
lean_inc_ref(v_type_730_);
lean_dec_ref(v_toConstantVal_728_);
v___x_731_ = lean_unsigned_to_nat(0u);
v___x_732_ = lean_box(v___x_724_);
v___f_733_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_733_, 0, v___x_732_);
lean_closure_set(v___f_733_, 1, v_numParams_729_);
lean_closure_set(v___f_733_, 2, v___x_731_);
v___x_734_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__13, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__13_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__13);
v___x_735_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__17, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__17_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__17);
v___x_736_ = lean_st_mk_ref(v___x_735_);
v___x_737_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg(v_type_730_, v___f_733_, v___x_724_, v___x_734_, v___x_736_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_739_; uint8_t v___x_740_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
v___x_739_ = lean_st_ref_get(v___x_736_);
lean_dec(v___x_736_);
lean_dec(v___x_739_);
v___x_740_ = lean_unbox(v_a_738_);
lean_dec(v_a_738_);
v_a_705_ = v___x_740_;
goto v___jp_704_;
}
else
{
lean_dec(v___x_736_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_741_; uint8_t v___x_742_; 
v_a_741_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_737_, 1);
v___x_742_ = lean_unbox(v_a_741_);
lean_dec(v_a_741_);
v_a_705_ = v___x_742_;
goto v___jp_704_;
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec(v_b_697_);
lean_dec_ref(v___x_695_);
v_a_743_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_737_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_737_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
}
else
{
lean_dec(v_val_726_);
v___y_711_ = v___y_698_;
v___y_712_ = v___y_699_;
goto v___jp_710_;
}
}
else
{
lean_dec(v___x_725_);
v___y_711_ = v___y_698_;
v___y_712_ = v___y_699_;
goto v___jp_710_;
}
v___jp_704_:
{
if (v_a_705_ == 0)
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = lean_unsigned_to_nat(1u);
v___x_707_ = lean_nat_add(v_b_697_, v___x_706_);
lean_dec(v_b_697_);
v_as_x27_696_ = v_tail_703_;
v_b_697_ = v___x_707_;
goto _start;
}
else
{
v_as_x27_696_ = v_tail_703_;
goto _start;
}
}
v___jp_710_:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__3);
v___x_714_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0(v___x_713_, v___y_711_, v___y_712_);
if (lean_obj_tag(v___x_714_) == 0)
{
lean_dec_ref_known(v___x_714_, 1);
v_as_x27_696_ = v_tail_703_;
goto _start;
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec(v_b_697_);
lean_dec_ref(v___x_695_);
v_a_716_ = lean_ctor_get(v___x_714_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_714_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_714_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_714_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___boxed(lean_object* v___x_751_, lean_object* v_as_x27_752_, lean_object* v_b_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg(v___x_751_, v_as_x27_752_, v_b_753_, v___y_754_, v___y_755_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v_as_x27_752_);
return v_res_757_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2(void){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_761_ = lean_box(0);
v___x_762_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__1));
v___x_763_ = l_Lean_Expr_const___override(v___x_762_, v___x_761_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType(lean_object* v_name_764_, lean_object* v_a_765_, lean_object* v_a_766_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(v_name_764_);
if (lean_obj_tag(v___x_771_) == 1)
{
lean_object* v_val_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
lean_dec(v_name_764_);
v_val_772_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_779_ == 0)
{
v___x_774_ = v___x_771_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_val_772_);
lean_dec(v___x_771_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
lean_ctor_set_tag(v___x_774_, 0);
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_val_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
else
{
lean_object* v___x_780_; lean_object* v_env_781_; uint8_t v___x_782_; lean_object* v___x_783_; 
lean_dec(v___x_771_);
v___x_780_ = lean_st_ref_get(v_a_766_);
v_env_781_ = lean_ctor_get(v___x_780_, 0);
lean_inc_ref_n(v_env_781_, 2);
lean_dec(v___x_780_);
v___x_782_ = 0;
v___x_783_ = l_Lean_Environment_find_x3f(v_env_781_, v_name_764_, v___x_782_);
if (lean_obj_tag(v___x_783_) == 1)
{
lean_object* v_val_784_; 
v_val_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_val_784_);
lean_dec_ref_known(v___x_783_, 1);
if (lean_obj_tag(v_val_784_) == 5)
{
lean_object* v_val_785_; lean_object* v_ctors_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v_val_785_ = lean_ctor_get(v_val_784_, 0);
lean_inc_ref(v_val_785_);
lean_dec_ref_known(v_val_784_, 1);
v_ctors_786_ = lean_ctor_get(v_val_785_, 4);
lean_inc(v_ctors_786_);
lean_dec_ref(v_val_785_);
v___x_787_ = l_List_lengthTR___redArg(v_ctors_786_);
v___x_788_ = lean_unsigned_to_nat(0u);
v___x_789_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg(v_env_781_, v_ctors_786_, v___x_788_, v_a_765_, v_a_766_);
lean_dec(v_ctors_786_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_808_; 
v_a_790_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_808_ == 0)
{
v___x_792_ = v___x_789_;
v_isShared_793_ = v_isSharedCheck_808_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_808_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
uint8_t v___x_794_; 
v___x_794_ = lean_nat_dec_eq(v_a_790_, v___x_787_);
if (v___x_794_ == 0)
{
uint8_t v___x_795_; 
lean_dec(v___x_787_);
v___x_795_ = lean_nat_dec_eq(v_a_790_, v___x_788_);
lean_dec(v_a_790_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_796_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 0, v___x_796_);
v___x_798_ = v___x_792_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_796_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
else
{
lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_800_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 0, v___x_800_);
v___x_802_ = v___x_792_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_800_);
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
lean_object* v___x_804_; lean_object* v___x_806_; 
lean_dec(v_a_790_);
v___x_804_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum(v___x_787_);
lean_dec(v___x_787_);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 0, v___x_804_);
v___x_806_ = v___x_792_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v___x_804_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
lean_dec(v___x_787_);
v_a_809_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_789_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_789_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
else
{
lean_dec(v_val_784_);
lean_dec_ref(v_env_781_);
goto v___jp_768_;
}
}
else
{
lean_dec(v___x_783_);
lean_dec_ref(v_env_781_);
goto v___jp_768_;
}
}
v___jp_768_:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12);
v___x_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
return v___x_770_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___boxed(lean_object* v_name_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType(v_name_817_, v_a_818_, v_a_819_);
lean_dec(v_a_819_);
lean_dec_ref(v_a_818_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1(lean_object* v_inst_822_, lean_object* v_R_823_, lean_object* v_a_824_, lean_object* v_b_825_, lean_object* v_c_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg(v_a_824_, v_b_825_, v___y_827_, v___y_828_, v___y_829_, v___y_830_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___boxed(lean_object* v_inst_833_, lean_object* v_R_834_, lean_object* v_a_835_, lean_object* v_b_836_, lean_object* v_c_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1(v_inst_833_, v_R_834_, v_a_835_, v_b_836_, v_c_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3(lean_object* v___x_844_, lean_object* v_as_845_, lean_object* v_as_x27_846_, lean_object* v_b_847_, lean_object* v_a_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg(v___x_844_, v_as_x27_846_, v_b_847_, v___y_849_, v___y_850_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___boxed(lean_object* v___x_853_, lean_object* v_as_854_, lean_object* v_as_x27_855_, lean_object* v_b_856_, lean_object* v_a_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3(v___x_853_, v_as_854_, v_as_x27_855_, v_b_856_, v_a_857_, v___y_858_, v___y_859_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec(v_as_x27_855_);
lean_dec(v_as_854_);
return v_res_861_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_setImpureType___closed__0(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7);
v___x_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_863_, 0, v___x_862_);
return v___x_863_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_setImpureType___closed__1(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = lean_obj_once(&l_Lean_Compiler_LCNF_setImpureType___closed__0, &l_Lean_Compiler_LCNF_setImpureType___closed__0_once, _init_l_Lean_Compiler_LCNF_setImpureType___closed__0);
v___x_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setImpureType(lean_object* v_name_866_, lean_object* v_a_867_, lean_object* v_a_868_){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(v_name_866_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v_env_873_; lean_object* v___x_874_; lean_object* v_toEnvExtension_875_; lean_object* v_asyncMode_876_; uint8_t v___x_877_; lean_object* v___x_878_; 
v___x_871_ = l_Lean_instInhabitedExpr;
v___x_872_ = lean_st_ref_get(v_a_868_);
v_env_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc_ref(v_env_873_);
lean_dec(v___x_872_);
v___x_874_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeExt;
v_toEnvExtension_875_ = lean_ctor_get(v___x_874_, 0);
v_asyncMode_876_ = lean_ctor_get(v_toEnvExtension_875_, 2);
v___x_877_ = 0;
lean_inc(v_name_866_);
v___x_878_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_871_, v___x_874_, v_env_873_, v_name_866_, v_asyncMode_876_, v___x_877_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v___x_879_; 
lean_inc(v_name_866_);
v___x_879_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType(v_name_866_, v_a_867_, v_a_868_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_908_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_908_ == 0)
{
v___x_882_ = v___x_879_;
v_isShared_883_ = v_isSharedCheck_908_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_879_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_908_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_884_; lean_object* v_env_885_; lean_object* v_nextMacroScope_886_; lean_object* v_ngen_887_; lean_object* v_auxDeclNGen_888_; lean_object* v_traceState_889_; lean_object* v_messages_890_; lean_object* v_infoState_891_; lean_object* v_snapshotTasks_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_906_; 
v___x_884_ = lean_st_ref_take(v_a_868_);
v_env_885_ = lean_ctor_get(v___x_884_, 0);
v_nextMacroScope_886_ = lean_ctor_get(v___x_884_, 1);
v_ngen_887_ = lean_ctor_get(v___x_884_, 2);
v_auxDeclNGen_888_ = lean_ctor_get(v___x_884_, 3);
v_traceState_889_ = lean_ctor_get(v___x_884_, 4);
v_messages_890_ = lean_ctor_get(v___x_884_, 6);
v_infoState_891_ = lean_ctor_get(v___x_884_, 7);
v_snapshotTasks_892_ = lean_ctor_get(v___x_884_, 8);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_906_ == 0)
{
lean_object* v_unused_907_; 
v_unused_907_ = lean_ctor_get(v___x_884_, 5);
lean_dec(v_unused_907_);
v___x_894_ = v___x_884_;
v_isShared_895_ = v_isSharedCheck_906_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_snapshotTasks_892_);
lean_inc(v_infoState_891_);
lean_inc(v_messages_890_);
lean_inc(v_traceState_889_);
lean_inc(v_auxDeclNGen_888_);
lean_inc(v_ngen_887_);
lean_inc(v_nextMacroScope_886_);
lean_inc(v_env_885_);
lean_dec(v___x_884_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_906_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_900_; 
v___x_896_ = lean_box(0);
v___x_897_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_874_, v_env_885_, v_name_866_, v_a_880_);
v___x_898_ = lean_obj_once(&l_Lean_Compiler_LCNF_setImpureType___closed__1, &l_Lean_Compiler_LCNF_setImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_setImpureType___closed__1);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 5, v___x_898_);
lean_ctor_set(v___x_894_, 0, v___x_897_);
v___x_900_ = v___x_894_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_897_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_nextMacroScope_886_);
lean_ctor_set(v_reuseFailAlloc_905_, 2, v_ngen_887_);
lean_ctor_set(v_reuseFailAlloc_905_, 3, v_auxDeclNGen_888_);
lean_ctor_set(v_reuseFailAlloc_905_, 4, v_traceState_889_);
lean_ctor_set(v_reuseFailAlloc_905_, 5, v___x_898_);
lean_ctor_set(v_reuseFailAlloc_905_, 6, v_messages_890_);
lean_ctor_set(v_reuseFailAlloc_905_, 7, v_infoState_891_);
lean_ctor_set(v_reuseFailAlloc_905_, 8, v_snapshotTasks_892_);
v___x_900_ = v_reuseFailAlloc_905_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
lean_object* v___x_901_; lean_object* v___x_903_; 
v___x_901_ = lean_st_ref_put(v_a_868_, v___x_900_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v___x_896_);
v___x_903_ = v___x_882_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_896_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec(v_name_866_);
v_a_909_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_879_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_879_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_924_; 
lean_dec(v_name_866_);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_924_ == 0)
{
lean_object* v_unused_925_; 
v_unused_925_ = lean_ctor_get(v___x_878_, 0);
lean_dec(v_unused_925_);
v___x_918_ = v___x_878_;
v_isShared_919_ = v_isSharedCheck_924_;
goto v_resetjp_917_;
}
else
{
lean_dec(v___x_878_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_924_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; lean_object* v___x_922_; 
v___x_920_ = lean_box(0);
if (v_isShared_919_ == 0)
{
lean_ctor_set_tag(v___x_918_, 0);
lean_ctor_set(v___x_918_, 0, v___x_920_);
v___x_922_ = v___x_918_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v___x_920_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
else
{
lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_933_; 
lean_dec(v_name_866_);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_933_ == 0)
{
lean_object* v_unused_934_; 
v_unused_934_ = lean_ctor_get(v___x_870_, 0);
lean_dec(v_unused_934_);
v___x_927_ = v___x_870_;
v_isShared_928_ = v_isSharedCheck_933_;
goto v_resetjp_926_;
}
else
{
lean_dec(v___x_870_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_933_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_929_; lean_object* v___x_931_; 
v___x_929_ = lean_box(0);
if (v_isShared_928_ == 0)
{
lean_ctor_set_tag(v___x_927_, 0);
lean_ctor_set(v___x_927_, 0, v___x_929_);
v___x_931_ = v___x_927_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v___x_929_);
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
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setImpureType___boxed(lean_object* v_name_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_Compiler_LCNF_setImpureType(v_name_935_, v_a_936_, v_a_937_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
return v_res_939_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__7);
v___x_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
return v___x_941_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_942_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0);
v___x_943_ = lean_unsigned_to_nat(0u);
v___x_944_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
lean_ctor_set(v___x_944_, 2, v___x_943_);
lean_ctor_set(v___x_944_, 3, v___x_943_);
lean_ctor_set(v___x_944_, 4, v___x_942_);
lean_ctor_set(v___x_944_, 5, v___x_942_);
lean_ctor_set(v___x_944_, 6, v___x_942_);
lean_ctor_set(v___x_944_, 7, v___x_942_);
lean_ctor_set(v___x_944_, 8, v___x_942_);
lean_ctor_set(v___x_944_, 9, v___x_942_);
lean_ctor_set(v___x_944_, 10, v___x_942_);
return v___x_944_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_945_ = lean_box(1);
v___x_946_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__10);
v___x_947_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0);
v___x_948_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_948_, 0, v___x_947_);
lean_ctor_set(v___x_948_, 1, v___x_946_);
lean_ctor_set(v___x_948_, 2, v___x_945_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0(lean_object* v_msgData_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v___x_953_; lean_object* v_toCold_954_; lean_object* v_env_955_; lean_object* v_options_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_953_ = lean_st_ref_get(v___y_951_);
v_toCold_954_ = lean_ctor_get(v___y_950_, 0);
v_env_955_ = lean_ctor_get(v___x_953_, 0);
lean_inc_ref(v_env_955_);
lean_dec(v___x_953_);
v_options_956_ = lean_ctor_get(v_toCold_954_, 2);
v___x_957_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1);
v___x_958_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2);
lean_inc_ref(v_options_956_);
v___x_959_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_959_, 0, v_env_955_);
lean_ctor_set(v___x_959_, 1, v___x_957_);
lean_ctor_set(v___x_959_, 2, v___x_958_);
lean_ctor_set(v___x_959_, 3, v_options_956_);
v___x_960_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_959_);
lean_ctor_set(v___x_960_, 1, v_msgData_949_);
v___x_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___boxed(lean_object* v_msgData_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0(v_msgData_962_, v___y_963_, v___y_964_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(lean_object* v_msg_967_, lean_object* v___y_968_, lean_object* v___y_969_){
_start:
{
lean_object* v_ref_971_; lean_object* v___x_972_; lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_981_; 
v_ref_971_ = lean_ctor_get(v___y_968_, 2);
v___x_972_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0(v_msg_967_, v___y_968_, v___y_969_);
v_a_973_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_981_ == 0)
{
v___x_975_ = v___x_972_;
v_isShared_976_ = v_isSharedCheck_981_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_972_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_981_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_977_; lean_object* v___x_979_; 
lean_inc(v_ref_971_);
v___x_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_977_, 0, v_ref_971_);
lean_ctor_set(v___x_977_, 1, v_a_973_);
if (v_isShared_976_ == 0)
{
lean_ctor_set_tag(v___x_975_, 1);
lean_ctor_set(v___x_975_, 0, v___x_977_);
v___x_979_ = v___x_975_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_977_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg___boxed(lean_object* v_msg_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(v_msg_982_, v___y_983_, v___y_984_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
return v_res_986_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__1(void){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = ((lean_object*)(l_Lean_Compiler_LCNF_nameToImpureType___closed__0));
v___x_989_ = l_Lean_stringToMessageData(v___x_988_);
return v___x_989_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__3(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = ((lean_object*)(l_Lean_Compiler_LCNF_nameToImpureType___closed__2));
v___x_992_ = l_Lean_stringToMessageData(v___x_991_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_nameToImpureType(lean_object* v_name_993_, lean_object* v_a_994_, lean_object* v_a_995_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(v_name_993_);
if (lean_obj_tag(v___x_1000_) == 1)
{
lean_object* v_val_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
lean_dec(v_name_993_);
v_val_1001_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_1000_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_val_1001_);
lean_dec(v___x_1000_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
lean_ctor_set_tag(v___x_1003_, 0);
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_val_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
else
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v_env_1011_; uint8_t v___x_1012_; lean_object* v___x_1013_; 
lean_dec(v___x_1000_);
v___x_1009_ = l_Lean_instInhabitedExpr;
v___x_1010_ = lean_st_ref_get(v_a_995_);
v_env_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc_ref(v_env_1011_);
lean_dec(v___x_1010_);
v___x_1012_ = 0;
lean_inc(v_name_993_);
v___x_1013_ = l_Lean_Environment_find_x3f(v_env_1011_, v_name_993_, v___x_1012_);
if (lean_obj_tag(v___x_1013_) == 1)
{
lean_object* v_val_1014_; 
v_val_1014_ = lean_ctor_get(v___x_1013_, 0);
lean_inc(v_val_1014_);
lean_dec_ref_known(v___x_1013_, 1);
if (lean_obj_tag(v_val_1014_) == 5)
{
lean_object* v___x_1015_; lean_object* v_env_1016_; lean_object* v___x_1017_; lean_object* v_toEnvExtension_1018_; lean_object* v_asyncMode_1019_; uint8_t v___x_1020_; lean_object* v___x_1021_; 
lean_dec_ref_known(v_val_1014_, 1);
v___x_1015_ = lean_st_ref_get(v_a_995_);
v_env_1016_ = lean_ctor_get(v___x_1015_, 0);
lean_inc_ref(v_env_1016_);
lean_dec(v___x_1015_);
v___x_1017_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeExt;
v_toEnvExtension_1018_ = lean_ctor_get(v___x_1017_, 0);
v_asyncMode_1019_ = lean_ctor_get(v_toEnvExtension_1018_, 2);
v___x_1020_ = 0;
lean_inc(v_name_993_);
v___x_1021_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1009_, v___x_1017_, v_env_1016_, v_name_993_, v_asyncMode_1019_, v___x_1020_);
if (lean_obj_tag(v___x_1021_) == 1)
{
lean_object* v_val_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
lean_dec(v_name_993_);
v_val_1022_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_1021_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_val_1022_);
lean_dec(v___x_1021_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
lean_ctor_set_tag(v___x_1024_, 0);
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_val_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
else
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
lean_dec(v___x_1021_);
v___x_1030_ = lean_obj_once(&l_Lean_Compiler_LCNF_nameToImpureType___closed__1, &l_Lean_Compiler_LCNF_nameToImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__1);
v___x_1031_ = l_Lean_MessageData_ofName(v_name_993_);
v___x_1032_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1030_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = lean_obj_once(&l_Lean_Compiler_LCNF_nameToImpureType___closed__3, &l_Lean_Compiler_LCNF_nameToImpureType___closed__3_once, _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__3);
v___x_1034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1032_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(v___x_1034_, v_a_994_, v_a_995_);
return v___x_1035_;
}
}
else
{
lean_dec(v_val_1014_);
lean_dec(v_name_993_);
goto v___jp_997_;
}
}
else
{
lean_dec(v___x_1013_);
lean_dec(v_name_993_);
goto v___jp_997_;
}
}
v___jp_997_:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12);
v___x_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
return v___x_999_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_nameToImpureType___boxed(lean_object* v_name_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_Compiler_LCNF_nameToImpureType(v_name_1036_, v_a_1037_, v_a_1038_);
lean_dec(v_a_1038_);
lean_dec_ref(v_a_1037_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0(lean_object* v_00_u03b1_1041_, lean_object* v_msg_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v___x_1046_; 
v___x_1046_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(v_msg_1042_, v___y_1043_, v___y_1044_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___boxed(lean_object* v_00_u03b1_1047_, lean_object* v_msg_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0(v_00_u03b1_1047_, v_msg_1048_, v___y_1049_, v___y_1050_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
return v_res_1052_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType(lean_object* v_type_1054_){
_start:
{
switch(lean_obj_tag(v_type_1054_))
{
case 4:
{
lean_object* v_declName_1055_; 
v_declName_1055_ = lean_ctor_get(v_type_1054_, 0);
if (lean_obj_tag(v_declName_1055_) == 1)
{
lean_object* v_pre_1056_; 
v_pre_1056_ = lean_ctor_get(v_declName_1055_, 0);
if (lean_obj_tag(v_pre_1056_) == 0)
{
lean_object* v_str_1057_; lean_object* v___x_1058_; uint8_t v___x_1059_; 
v_str_1057_ = lean_ctor_get(v_declName_1055_, 1);
v___x_1058_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___closed__0));
v___x_1059_ = lean_string_dec_eq(v_str_1057_, v___x_1058_);
return v___x_1059_;
}
else
{
uint8_t v___x_1060_; 
v___x_1060_ = 0;
return v___x_1060_;
}
}
else
{
uint8_t v___x_1061_; 
v___x_1061_ = 0;
return v___x_1061_;
}
}
case 7:
{
lean_object* v_body_1062_; 
v_body_1062_ = lean_ctor_get(v_type_1054_, 2);
v_type_1054_ = v_body_1062_;
goto _start;
}
default: 
{
uint8_t v___x_1064_; 
v___x_1064_ = 0;
return v___x_1064_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___boxed(lean_object* v_type_1065_){
_start:
{
uint8_t v_res_1066_; lean_object* v_r_1067_; 
v_res_1066_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType(v_type_1065_);
lean_dec_ref(v_type_1065_);
v_r_1067_ = lean_box(v_res_1066_);
return v_r_1067_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1(lean_object* v_msg_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v___f_1072_; lean_object* v___x_877__overap_1073_; lean_object* v___x_1074_; 
v___f_1072_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0));
v___x_877__overap_1073_ = lean_panic_fn_borrowed(v___f_1072_, v_msg_1068_);
lean_inc(v___y_1070_);
lean_inc_ref(v___y_1069_);
v___x_1074_ = lean_apply_3(v___x_877__overap_1073_, v___y_1069_, v___y_1070_, lean_box(0));
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1___boxed(lean_object* v_msg_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1(v_msg_1075_, v___y_1076_, v___y_1077_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
return v_res_1079_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toImpureType___closed__1(void){
_start:
{
lean_object* v___x_1082_; lean_object* v_dummy_1083_; 
v___x_1082_ = lean_box(0);
v_dummy_1083_ = l_Lean_Expr_sort___override(v___x_1082_);
return v_dummy_1083_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toImpureType___closed__3(void){
_start:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1085_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__2));
v___x_1086_ = lean_unsigned_to_nat(41u);
v___x_1087_ = lean_unsigned_to_nat(138u);
v___x_1088_ = ((lean_object*)(l_Lean_Compiler_LCNF_toImpureType___closed__2));
v___x_1089_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__0));
v___x_1090_ = l_mkPanicMessageWithDecl(v___x_1089_, v___x_1088_, v___x_1087_, v___x_1086_, v___x_1085_);
return v___x_1090_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toImpureType___closed__4(void){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1091_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__2));
v___x_1092_ = lean_unsigned_to_nat(9u);
v___x_1093_ = lean_unsigned_to_nat(150u);
v___x_1094_ = ((lean_object*)(l_Lean_Compiler_LCNF_toImpureType___closed__2));
v___x_1095_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__0));
v___x_1096_ = l_mkPanicMessageWithDecl(v___x_1095_, v___x_1094_, v___x_1093_, v___x_1092_, v___x_1091_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpureType(lean_object* v_type_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_){
_start:
{
switch(lean_obj_tag(v_type_1097_))
{
case 4:
{
lean_object* v_declName_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v_declName_1101_ = lean_ctor_get(v_type_1097_, 0);
lean_inc(v_declName_1101_);
lean_dec_ref_known(v_type_1097_, 2);
v___x_1102_ = ((lean_object*)(l_Lean_Compiler_LCNF_toImpureType___closed__0));
v___x_1103_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp(v_declName_1101_, v___x_1102_, v_a_1098_, v_a_1099_);
return v___x_1103_;
}
case 5:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_Lean_Expr_getAppFn(v_type_1097_);
if (lean_obj_tag(v___x_1104_) == 4)
{
lean_object* v_declName_1105_; lean_object* v_dummy_1106_; lean_object* v_nargs_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v_declName_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_declName_1105_);
lean_dec_ref_known(v___x_1104_, 2);
v_dummy_1106_ = lean_obj_once(&l_Lean_Compiler_LCNF_toImpureType___closed__1, &l_Lean_Compiler_LCNF_toImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_toImpureType___closed__1);
v_nargs_1107_ = l_Lean_Expr_getAppNumArgs(v_type_1097_);
lean_inc(v_nargs_1107_);
v___x_1108_ = lean_mk_array(v_nargs_1107_, v_dummy_1106_);
v___x_1109_ = lean_unsigned_to_nat(1u);
v___x_1110_ = lean_nat_sub(v_nargs_1107_, v___x_1109_);
lean_dec(v_nargs_1107_);
v___x_1111_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_type_1097_, v___x_1108_, v___x_1110_);
v___x_1112_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp(v_declName_1105_, v___x_1111_, v_a_1098_, v_a_1099_);
return v___x_1112_;
}
else
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
lean_dec_ref(v___x_1104_);
lean_dec_ref_known(v_type_1097_, 2);
v___x_1113_ = lean_obj_once(&l_Lean_Compiler_LCNF_toImpureType___closed__3, &l_Lean_Compiler_LCNF_toImpureType___closed__3_once, _init_l_Lean_Compiler_LCNF_toImpureType___closed__3);
v___x_1114_ = l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1(v___x_1113_, v_a_1098_, v_a_1099_);
return v___x_1114_;
}
}
case 7:
{
lean_object* v_body_1115_; uint8_t v___x_1116_; 
v_body_1115_ = lean_ctor_get(v_type_1097_, 2);
lean_inc_ref(v_body_1115_);
lean_dec_ref_known(v_type_1097_, 3);
v___x_1116_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType(v_body_1115_);
lean_dec_ref(v_body_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2);
v___x_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
return v___x_1118_;
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1119_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12);
v___x_1120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
return v___x_1120_;
}
}
case 10:
{
lean_object* v_expr_1121_; 
v_expr_1121_ = lean_ctor_get(v_type_1097_, 1);
lean_inc_ref(v_expr_1121_);
lean_dec_ref_known(v_type_1097_, 2);
v_type_1097_ = v_expr_1121_;
goto _start;
}
default: 
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
lean_dec_ref(v_type_1097_);
v___x_1123_ = lean_obj_once(&l_Lean_Compiler_LCNF_toImpureType___closed__4, &l_Lean_Compiler_LCNF_toImpureType___closed__4_once, _init_l_Lean_Compiler_LCNF_toImpureType___closed__4);
v___x_1124_ = l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1(v___x_1123_, v_a_1098_, v_a_1099_);
return v___x_1124_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp(lean_object* v_declName_1125_, lean_object* v_args_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1130_ = l_Lean_instInhabitedExpr;
lean_inc(v_declName_1125_);
v___x_1131_ = l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(v_declName_1125_, v_a_1127_, v_a_1128_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_a_1132_);
lean_dec_ref_known(v___x_1131_, 1);
if (lean_obj_tag(v_a_1132_) == 1)
{
lean_object* v_val_1133_; lean_object* v_ctorName_1134_; lean_object* v_numParams_1135_; lean_object* v_fieldIdx_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_dec(v_declName_1125_);
v_val_1133_ = lean_ctor_get(v_a_1132_, 0);
lean_inc(v_val_1133_);
lean_dec_ref_known(v_a_1132_, 1);
v_ctorName_1134_ = lean_ctor_get(v_val_1133_, 0);
lean_inc(v_ctorName_1134_);
v_numParams_1135_ = lean_ctor_get(v_val_1133_, 1);
lean_inc(v_numParams_1135_);
v_fieldIdx_1136_ = lean_ctor_get(v_val_1133_, 2);
lean_inc(v_fieldIdx_1136_);
lean_dec(v_val_1133_);
v___x_1137_ = lean_box(0);
v___x_1138_ = l_Lean_Compiler_LCNF_getOtherDeclBaseType(v_ctorName_1134_, v___x_1137_, v_a_1127_, v_a_1128_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v_a_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v_a_1139_ = lean_ctor_get(v___x_1138_, 0);
lean_inc(v_a_1139_);
lean_dec_ref_known(v___x_1138_, 1);
v___x_1140_ = lean_unsigned_to_nat(0u);
v___x_1141_ = l_Array_toSubarray___redArg(v_args_1126_, v___x_1140_, v_numParams_1135_);
v___x_1142_ = l_Subarray_copy___redArg(v___x_1141_);
v___x_1143_ = l_Lean_Compiler_LCNF_instantiateForall(v_a_1139_, v___x_1142_, v_a_1127_, v_a_1128_);
lean_dec_ref(v___x_1142_);
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v_a_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_a_1144_);
lean_dec_ref_known(v___x_1143_, 1);
v___x_1145_ = l_Lean_Compiler_LCNF_getParamTypes(v_a_1144_);
v___x_1146_ = lean_array_get(v___x_1130_, v___x_1145_, v_fieldIdx_1136_);
lean_dec(v_fieldIdx_1136_);
lean_dec_ref(v___x_1145_);
v___x_1147_ = l_Lean_Compiler_LCNF_toMonoType(v___x_1146_, v_a_1127_, v_a_1128_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v___x_1149_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v___x_1147_, 1);
v___x_1149_ = l_Lean_Compiler_LCNF_toImpureType(v_a_1148_, v_a_1127_, v_a_1128_);
return v___x_1149_;
}
else
{
return v___x_1147_;
}
}
else
{
lean_dec(v_fieldIdx_1136_);
return v___x_1143_;
}
}
else
{
lean_dec(v_fieldIdx_1136_);
lean_dec(v_numParams_1135_);
lean_dec_ref(v_args_1126_);
return v___x_1138_;
}
}
else
{
lean_object* v___x_1150_; 
lean_dec(v_a_1132_);
lean_dec_ref(v_args_1126_);
v___x_1150_ = l_Lean_Compiler_LCNF_nameToImpureType(v_declName_1125_, v_a_1127_, v_a_1128_);
return v___x_1150_;
}
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
lean_dec_ref(v_args_1126_);
lean_dec(v_declName_1125_);
v_a_1151_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1131_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1131_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp___boxed(lean_object* v_declName_1159_, lean_object* v_args_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp(v_declName_1159_, v_args_1160_, v_a_1161_, v_a_1162_);
lean_dec(v_a_1162_);
lean_dec_ref(v_a_1161_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpureType___boxed(lean_object* v_type_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lean_Compiler_LCNF_toImpureType(v_type_1165_, v_a_1166_, v_a_1167_);
lean_dec(v_a_1167_);
lean_dec_ref(v_a_1166_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorIdx(lean_object* v_x_1170_){
_start:
{
switch(lean_obj_tag(v_x_1170_))
{
case 0:
{
lean_object* v___x_1171_; 
v___x_1171_ = lean_unsigned_to_nat(0u);
return v___x_1171_;
}
case 1:
{
lean_object* v___x_1172_; 
v___x_1172_ = lean_unsigned_to_nat(1u);
return v___x_1172_;
}
case 2:
{
lean_object* v___x_1173_; 
v___x_1173_ = lean_unsigned_to_nat(2u);
return v___x_1173_;
}
case 3:
{
lean_object* v___x_1174_; 
v___x_1174_ = lean_unsigned_to_nat(3u);
return v___x_1174_;
}
default: 
{
lean_object* v___x_1175_; 
v___x_1175_ = lean_unsigned_to_nat(4u);
return v___x_1175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorIdx___boxed(lean_object* v_x_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorIdx(v_x_1176_);
lean_dec(v_x_1176_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(lean_object* v_t_1178_, lean_object* v_k_1179_){
_start:
{
switch(lean_obj_tag(v_t_1178_))
{
case 1:
{
lean_object* v_i_1180_; lean_object* v_type_1181_; lean_object* v___x_1182_; 
v_i_1180_ = lean_ctor_get(v_t_1178_, 0);
lean_inc(v_i_1180_);
v_type_1181_ = lean_ctor_get(v_t_1178_, 1);
lean_inc_ref(v_type_1181_);
lean_dec_ref_known(v_t_1178_, 2);
v___x_1182_ = lean_apply_2(v_k_1179_, v_i_1180_, v_type_1181_);
return v___x_1182_;
}
case 2:
{
lean_object* v_i_1183_; lean_object* v___x_1184_; 
v_i_1183_ = lean_ctor_get(v_t_1178_, 0);
lean_inc(v_i_1183_);
lean_dec_ref_known(v_t_1178_, 1);
v___x_1184_ = lean_apply_1(v_k_1179_, v_i_1183_);
return v___x_1184_;
}
case 3:
{
lean_object* v_sz_1185_; lean_object* v_offset_1186_; lean_object* v_type_1187_; lean_object* v___x_1188_; 
v_sz_1185_ = lean_ctor_get(v_t_1178_, 0);
lean_inc(v_sz_1185_);
v_offset_1186_ = lean_ctor_get(v_t_1178_, 1);
lean_inc(v_offset_1186_);
v_type_1187_ = lean_ctor_get(v_t_1178_, 2);
lean_inc_ref(v_type_1187_);
lean_dec_ref_known(v_t_1178_, 3);
v___x_1188_ = lean_apply_3(v_k_1179_, v_sz_1185_, v_offset_1186_, v_type_1187_);
return v___x_1188_;
}
default: 
{
lean_dec(v_t_1178_);
return v_k_1179_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim(lean_object* v_motive_1189_, lean_object* v_ctorIdx_1190_, lean_object* v_t_1191_, lean_object* v_h_1192_, lean_object* v_k_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1191_, v_k_1193_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___boxed(lean_object* v_motive_1195_, lean_object* v_ctorIdx_1196_, lean_object* v_t_1197_, lean_object* v_h_1198_, lean_object* v_k_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim(v_motive_1195_, v_ctorIdx_1196_, v_t_1197_, v_h_1198_, v_k_1199_);
lean_dec(v_ctorIdx_1196_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_erased_elim___redArg(lean_object* v_t_1201_, lean_object* v_erased_1202_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1201_, v_erased_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_erased_elim(lean_object* v_motive_1204_, lean_object* v_t_1205_, lean_object* v_h_1206_, lean_object* v_erased_1207_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1205_, v_erased_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_object_elim___redArg(lean_object* v_t_1209_, lean_object* v_object_1210_){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1209_, v_object_1210_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_object_elim(lean_object* v_motive_1212_, lean_object* v_t_1213_, lean_object* v_h_1214_, lean_object* v_object_1215_){
_start:
{
lean_object* v___x_1216_; 
v___x_1216_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1213_, v_object_1215_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_usize_elim___redArg(lean_object* v_t_1217_, lean_object* v_usize_1218_){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1217_, v_usize_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_usize_elim(lean_object* v_motive_1220_, lean_object* v_t_1221_, lean_object* v_h_1222_, lean_object* v_usize_1223_){
_start:
{
lean_object* v___x_1224_; 
v___x_1224_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1221_, v_usize_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_scalar_elim___redArg(lean_object* v_t_1225_, lean_object* v_scalar_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1225_, v_scalar_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_scalar_elim(lean_object* v_motive_1228_, lean_object* v_t_1229_, lean_object* v_h_1230_, lean_object* v_scalar_1231_){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1229_, v_scalar_1231_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_void_elim___redArg(lean_object* v_t_1233_, lean_object* v_void_1234_){
_start:
{
lean_object* v___x_1235_; 
v___x_1235_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1233_, v_void_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_void_elim(lean_object* v_motive_1236_, lean_object* v_t_1237_, lean_object* v_h_1238_, lean_object* v_void_1239_){
_start:
{
lean_object* v___x_1240_; 
v___x_1240_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1237_, v_void_1239_);
return v___x_1240_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo_default(void){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = lean_box(0);
return v___x_1241_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo(void){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = lean_box(0);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format(lean_object* v_x_1264_){
_start:
{
switch(lean_obj_tag(v_x_1264_))
{
case 0:
{
lean_object* v___x_1265_; 
v___x_1265_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__1));
return v___x_1265_;
}
case 1:
{
lean_object* v_i_1266_; lean_object* v_type_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1282_; 
v_i_1266_ = lean_ctor_get(v_x_1264_, 0);
v_type_1267_ = lean_ctor_get(v_x_1264_, 1);
v_isSharedCheck_1282_ = !lean_is_exclusive(v_x_1264_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1269_ = v_x_1264_;
v_isShared_1270_ = v_isSharedCheck_1282_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_type_1267_);
lean_inc(v_i_1266_);
lean_dec(v_x_1264_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1282_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1275_; 
v___x_1271_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__3));
v___x_1272_ = l_Nat_reprFast(v_i_1266_);
v___x_1273_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
if (v_isShared_1270_ == 0)
{
lean_ctor_set_tag(v___x_1269_, 5);
lean_ctor_set(v___x_1269_, 1, v___x_1273_);
lean_ctor_set(v___x_1269_, 0, v___x_1271_);
v___x_1275_ = v___x_1269_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1271_);
lean_ctor_set(v_reuseFailAlloc_1281_, 1, v___x_1273_);
v___x_1275_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1276_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5));
v___x_1277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1275_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
v___x_1278_ = lean_expr_dbg_to_string(v_type_1267_);
lean_dec_ref(v_type_1267_);
v___x_1279_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
v___x_1280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1277_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
return v___x_1280_;
}
}
}
case 2:
{
lean_object* v_i_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1293_; 
v_i_1283_ = lean_ctor_get(v_x_1264_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v_x_1264_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1285_ = v_x_1264_;
v_isShared_1286_ = v_isSharedCheck_1293_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_i_1283_);
lean_dec(v_x_1264_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1293_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1290_; 
v___x_1287_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__7));
v___x_1288_ = l_Nat_reprFast(v_i_1283_);
if (v_isShared_1286_ == 0)
{
lean_ctor_set_tag(v___x_1285_, 3);
lean_ctor_set(v___x_1285_, 0, v___x_1288_);
v___x_1290_ = v___x_1285_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1288_);
v___x_1290_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
lean_object* v___x_1291_; 
v___x_1291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1287_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
return v___x_1291_;
}
}
}
case 3:
{
lean_object* v_sz_1294_; lean_object* v_offset_1295_; lean_object* v_type_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_sz_1294_ = lean_ctor_get(v_x_1264_, 0);
lean_inc(v_sz_1294_);
v_offset_1295_ = lean_ctor_get(v_x_1264_, 1);
lean_inc(v_offset_1295_);
v_type_1296_ = lean_ctor_get(v_x_1264_, 2);
lean_inc_ref(v_type_1296_);
lean_dec_ref_known(v_x_1264_, 3);
v___x_1297_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__9));
v___x_1298_ = l_Nat_reprFast(v_sz_1294_);
v___x_1299_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
v___x_1300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1297_);
lean_ctor_set(v___x_1300_, 1, v___x_1299_);
v___x_1301_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__11));
v___x_1302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1300_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
v___x_1303_ = l_Nat_reprFast(v_offset_1295_);
v___x_1304_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
v___x_1305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1302_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5));
v___x_1307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1305_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = lean_expr_dbg_to_string(v_type_1296_);
lean_dec_ref(v_type_1296_);
v___x_1309_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1308_);
v___x_1310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1307_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
return v___x_1310_;
}
default: 
{
lean_object* v___x_1311_; 
v___x_1311_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__13));
return v___x_1311_;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1(void){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1316_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__0));
v___x_1317_ = l_Lean_Compiler_LCNF_instInhabitedCtorInfo_default;
v___x_1318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
lean_ctor_set(v___x_1318_, 1, v___x_1316_);
return v___x_1318_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default(void){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1, &l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1_once, _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1);
return v___x_1319_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout(void){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default;
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0(lean_object* v_env_1321_, lean_object* v_as_1322_, size_t v_i_1323_, size_t v_stop_1324_, lean_object* v_b_1325_){
_start:
{
lean_object* v___y_1327_; uint8_t v___x_1331_; 
v___x_1331_ = lean_usize_dec_eq(v_i_1323_, v_stop_1324_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; lean_object* v_fst_1333_; uint8_t v___x_1334_; 
v___x_1332_ = lean_array_uget_borrowed(v_as_1322_, v_i_1323_);
v_fst_1333_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_fst_1333_);
lean_inc_ref(v_env_1321_);
v___x_1334_ = l_Lean_Environment_contains(v_env_1321_, v_fst_1333_, v___x_1331_);
if (v___x_1334_ == 0)
{
v___y_1327_ = v_b_1325_;
goto v___jp_1326_;
}
else
{
lean_object* v___x_1335_; 
lean_inc(v___x_1332_);
v___x_1335_ = lean_array_push(v_b_1325_, v___x_1332_);
v___y_1327_ = v___x_1335_;
goto v___jp_1326_;
}
}
else
{
lean_dec_ref(v_env_1321_);
return v_b_1325_;
}
v___jp_1326_:
{
size_t v___x_1328_; size_t v___x_1329_; 
v___x_1328_ = ((size_t)1ULL);
v___x_1329_ = lean_usize_add(v_i_1323_, v___x_1328_);
v_i_1323_ = v___x_1329_;
v_b_1325_ = v___y_1327_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_1336_, lean_object* v_as_1337_, lean_object* v_i_1338_, lean_object* v_stop_1339_, lean_object* v_b_1340_){
_start:
{
size_t v_i_boxed_1341_; size_t v_stop_boxed_1342_; lean_object* v_res_1343_; 
v_i_boxed_1341_ = lean_unbox_usize(v_i_1338_);
lean_dec(v_i_1338_);
v_stop_boxed_1342_ = lean_unbox_usize(v_stop_1339_);
lean_dec(v_stop_1339_);
v_res_1343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0(v_env_1336_, v_as_1337_, v_i_boxed_1341_, v_stop_boxed_1342_, v_b_1340_);
lean_dec_ref(v_as_1337_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_(lean_object* v___x_1344_, lean_object* v_env_1345_, lean_object* v_s_1346_){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1347_ = l_Lean_NameMap_toArray___redArg(v_s_1346_);
v___x_1348_ = lean_array_get_size(v___x_1347_);
v___x_1349_ = lean_mk_empty_array_with_capacity(v___x_1344_);
v___x_1350_ = lean_nat_dec_lt(v___x_1344_, v___x_1348_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; 
lean_dec_ref(v___x_1347_);
lean_dec_ref(v_env_1345_);
lean_inc_ref_n(v___x_1349_, 2);
v___x_1351_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1349_);
lean_ctor_set(v___x_1351_, 1, v___x_1349_);
lean_ctor_set(v___x_1351_, 2, v___x_1349_);
return v___x_1351_;
}
else
{
uint8_t v___x_1352_; 
v___x_1352_ = lean_nat_dec_le(v___x_1348_, v___x_1348_);
if (v___x_1352_ == 0)
{
if (v___x_1350_ == 0)
{
lean_object* v___x_1353_; 
lean_dec_ref(v___x_1347_);
lean_dec_ref(v_env_1345_);
lean_inc_ref_n(v___x_1349_, 2);
v___x_1353_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1349_);
lean_ctor_set(v___x_1353_, 1, v___x_1349_);
lean_ctor_set(v___x_1353_, 2, v___x_1349_);
return v___x_1353_;
}
else
{
size_t v___x_1354_; size_t v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1354_ = ((size_t)0ULL);
v___x_1355_ = lean_usize_of_nat(v___x_1348_);
v___x_1356_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0(v_env_1345_, v___x_1347_, v___x_1354_, v___x_1355_, v___x_1349_);
lean_dec_ref(v___x_1347_);
lean_inc_ref_n(v___x_1356_, 2);
v___x_1357_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
lean_ctor_set(v___x_1357_, 2, v___x_1356_);
return v___x_1357_;
}
}
else
{
size_t v___x_1358_; size_t v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1358_ = ((size_t)0ULL);
v___x_1359_ = lean_usize_of_nat(v___x_1348_);
v___x_1360_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0(v_env_1345_, v___x_1347_, v___x_1358_, v___x_1359_, v___x_1349_);
lean_dec_ref(v___x_1347_);
lean_inc_ref_n(v___x_1360_, 2);
v___x_1361_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
lean_ctor_set(v___x_1361_, 2, v___x_1360_);
return v___x_1361_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2____boxed(lean_object* v___x_1362_, lean_object* v_env_1363_, lean_object* v_s_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_(v___x_1362_, v_env_1363_, v_s_1364_);
lean_dec(v_s_1364_);
lean_dec(v___x_1362_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___f_1373_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_));
v___x_1374_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_));
v___x_1375_ = lean_box(0);
v___x_1376_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_1374_, v___x_1375_, v___f_1373_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2____boxed(lean_object* v_a_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_();
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout(lean_object* v_layout_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_){
_start:
{
lean_object* v_ctorInfo_1383_; lean_object* v___x_1384_; 
v_ctorInfo_1383_ = lean_ctor_get(v_layout_1379_, 0);
lean_inc_ref(v_ctorInfo_1383_);
lean_dec_ref(v_layout_1379_);
v___x_1384_ = l_Lean_Compiler_LCNF_CtorInfo_checkValid(v_ctorInfo_1383_, v_a_1380_, v_a_1381_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout___boxed(lean_object* v_layout_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout(v_layout_1385_, v_a_1386_, v_a_1387_);
lean_dec(v_a_1387_);
lean_dec_ref(v_a_1386_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1(lean_object* v_msg_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v___f_1394_; lean_object* v___x_11614__overap_1395_; lean_object* v___x_1396_; 
v___f_1394_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0));
v___x_11614__overap_1395_ = lean_panic_fn_borrowed(v___f_1394_, v_msg_1390_);
lean_inc(v___y_1392_);
lean_inc_ref(v___y_1391_);
v___x_1396_ = lean_apply_3(v___x_11614__overap_1395_, v___y_1391_, v___y_1392_, lean_box(0));
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1___boxed(lean_object* v_msg_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1(v_msg_1397_, v___y_1398_, v___y_1399_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2(lean_object* v_msg_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_){
_start:
{
lean_object* v___f_1409_; lean_object* v___x_11624__overap_1410_; lean_object* v___x_1411_; 
v___f_1409_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___closed__0));
v___x_11624__overap_1410_ = lean_panic_fn_borrowed(v___f_1409_, v_msg_1403_);
lean_inc(v___y_1407_);
lean_inc_ref(v___y_1406_);
lean_inc(v___y_1405_);
lean_inc_ref(v___y_1404_);
v___x_1411_ = lean_apply_5(v___x_11624__overap_1410_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, lean_box(0));
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___boxed(lean_object* v_msg_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2(v_msg_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_);
lean_dec(v___y_1416_);
lean_dec_ref(v___y_1415_);
lean_dec(v___y_1414_);
lean_dec_ref(v___y_1413_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___redArg(lean_object* v_type_1419_, lean_object* v_k_1420_, uint8_t v_cleanupAnnotations_1421_, uint8_t v_whnfType_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v___f_1428_; lean_object* v___x_1429_; 
v___f_1428_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1428_, 0, v_k_1420_);
v___x_1429_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1419_, v___f_1428_, v_cleanupAnnotations_1421_, v_whnfType_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1429_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1429_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
v_a_1438_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1429_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1429_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___redArg___boxed(lean_object* v_type_1446_, lean_object* v_k_1447_, lean_object* v_cleanupAnnotations_1448_, lean_object* v_whnfType_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1455_; uint8_t v_whnfType_boxed_1456_; lean_object* v_res_1457_; 
v_cleanupAnnotations_boxed_1455_ = lean_unbox(v_cleanupAnnotations_1448_);
v_whnfType_boxed_1456_ = lean_unbox(v_whnfType_1449_);
v_res_1457_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___redArg(v_type_1446_, v_k_1447_, v_cleanupAnnotations_boxed_1455_, v_whnfType_boxed_1456_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5(lean_object* v_00_u03b1_1458_, lean_object* v_type_1459_, lean_object* v_k_1460_, uint8_t v_cleanupAnnotations_1461_, uint8_t v_whnfType_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___redArg(v_type_1459_, v_k_1460_, v_cleanupAnnotations_1461_, v_whnfType_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___boxed(lean_object* v_00_u03b1_1469_, lean_object* v_type_1470_, lean_object* v_k_1471_, lean_object* v_cleanupAnnotations_1472_, lean_object* v_whnfType_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1479_; uint8_t v_whnfType_boxed_1480_; lean_object* v_res_1481_; 
v_cleanupAnnotations_boxed_1479_ = lean_unbox(v_cleanupAnnotations_1472_);
v_whnfType_boxed_1480_ = lean_unbox(v_whnfType_1473_);
v_res_1481_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5(v_00_u03b1_1469_, v_type_1470_, v_k_1471_, v_cleanupAnnotations_boxed_1479_, v_whnfType_boxed_1480_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0(lean_object* v_size_1482_, size_t v_sz_1483_, size_t v_i_1484_, lean_object* v_bs_1485_, lean_object* v___y_1486_){
_start:
{
uint8_t v___x_1487_; 
v___x_1487_ = lean_usize_dec_lt(v_i_1484_, v_sz_1483_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; 
v___x_1488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1488_, 0, v_bs_1485_);
lean_ctor_set(v___x_1488_, 1, v___y_1486_);
return v___x_1488_;
}
else
{
lean_object* v_v_1489_; lean_object* v___x_1490_; lean_object* v_bs_x27_1491_; lean_object* v_fst_1493_; lean_object* v_snd_1494_; 
v_v_1489_ = lean_array_uget(v_bs_1485_, v_i_1484_);
v___x_1490_ = lean_unsigned_to_nat(0u);
v_bs_x27_1491_ = lean_array_uset(v_bs_1485_, v_i_1484_, v___x_1490_);
switch(lean_obj_tag(v_v_1489_))
{
case 1:
{
v_fst_1493_ = v_v_1489_;
v_snd_1494_ = v___y_1486_;
goto v___jp_1492_;
}
case 2:
{
v_fst_1493_ = v_v_1489_;
v_snd_1494_ = v___y_1486_;
goto v___jp_1492_;
}
case 3:
{
lean_object* v_sz_1499_; lean_object* v_type_1500_; uint8_t v___x_1501_; 
v_sz_1499_ = lean_ctor_get(v_v_1489_, 0);
v_type_1500_ = lean_ctor_get(v_v_1489_, 2);
v___x_1501_ = lean_nat_dec_eq(v_sz_1499_, v_size_1482_);
if (v___x_1501_ == 0)
{
v_fst_1493_ = v_v_1489_;
v_snd_1494_ = v___y_1486_;
goto v___jp_1492_;
}
else
{
lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1509_; 
lean_inc_ref(v_type_1500_);
lean_inc(v_sz_1499_);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_v_1489_);
if (v_isSharedCheck_1509_ == 0)
{
lean_object* v_unused_1510_; lean_object* v_unused_1511_; lean_object* v_unused_1512_; 
v_unused_1510_ = lean_ctor_get(v_v_1489_, 2);
lean_dec(v_unused_1510_);
v_unused_1511_ = lean_ctor_get(v_v_1489_, 1);
lean_dec(v_unused_1511_);
v_unused_1512_ = lean_ctor_get(v_v_1489_, 0);
lean_dec(v_unused_1512_);
v___x_1503_ = v_v_1489_;
v_isShared_1504_ = v_isSharedCheck_1509_;
goto v_resetjp_1502_;
}
else
{
lean_dec(v_v_1489_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1509_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1505_; lean_object* v___x_1507_; 
v___x_1505_ = lean_nat_add(v___y_1486_, v_sz_1499_);
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 1, v___y_1486_);
v___x_1507_ = v___x_1503_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_sz_1499_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v___y_1486_);
lean_ctor_set(v_reuseFailAlloc_1508_, 2, v_type_1500_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
v_fst_1493_ = v___x_1507_;
v_snd_1494_ = v___x_1505_;
goto v___jp_1492_;
}
}
}
}
default: 
{
v_fst_1493_ = v_v_1489_;
v_snd_1494_ = v___y_1486_;
goto v___jp_1492_;
}
}
v___jp_1492_:
{
size_t v___x_1495_; size_t v___x_1496_; lean_object* v___x_1497_; 
v___x_1495_ = ((size_t)1ULL);
v___x_1496_ = lean_usize_add(v_i_1484_, v___x_1495_);
v___x_1497_ = lean_array_uset(v_bs_x27_1491_, v_i_1484_, v_fst_1493_);
v_i_1484_ = v___x_1496_;
v_bs_1485_ = v___x_1497_;
v___y_1486_ = v_snd_1494_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0___boxed(lean_object* v_size_1513_, lean_object* v_sz_1514_, lean_object* v_i_1515_, lean_object* v_bs_1516_, lean_object* v___y_1517_){
_start:
{
size_t v_sz_boxed_1518_; size_t v_i_boxed_1519_; lean_object* v_res_1520_; 
v_sz_boxed_1518_ = lean_unbox_usize(v_sz_1514_);
lean_dec(v_sz_1514_);
v_i_boxed_1519_ = lean_unbox_usize(v_i_1515_);
lean_dec(v_i_1515_);
v_res_1520_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0(v_size_1513_, v_sz_boxed_1518_, v_i_boxed_1519_, v_bs_1516_, v___y_1517_);
lean_dec(v_size_1513_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0(lean_object* v_fields_1521_, lean_object* v_size_1522_, lean_object* v_nextOffset_1523_){
_start:
{
size_t v_sz_1524_; size_t v___x_1525_; lean_object* v___x_1526_; 
v_sz_1524_ = lean_array_size(v_fields_1521_);
v___x_1525_ = ((size_t)0ULL);
v___x_1526_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0(v_size_1522_, v_sz_1524_, v___x_1525_, v_fields_1521_, v_nextOffset_1523_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0___boxed(lean_object* v_fields_1527_, lean_object* v_size_1528_, lean_object* v_nextOffset_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0(v_fields_1527_, v_size_1528_, v_nextOffset_1529_);
lean_dec(v_size_1528_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4(size_t v_sz_1531_, size_t v_i_1532_, lean_object* v_bs_1533_, lean_object* v___y_1534_){
_start:
{
uint8_t v___x_1535_; 
v___x_1535_ = lean_usize_dec_lt(v_i_1532_, v_sz_1531_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1536_, 0, v_bs_1533_);
lean_ctor_set(v___x_1536_, 1, v___y_1534_);
return v___x_1536_;
}
else
{
lean_object* v_v_1537_; lean_object* v___x_1538_; lean_object* v_bs_x27_1539_; lean_object* v_fst_1541_; lean_object* v_snd_1542_; 
v_v_1537_ = lean_array_uget(v_bs_1533_, v_i_1532_);
v___x_1538_ = lean_unsigned_to_nat(0u);
v_bs_x27_1539_ = lean_array_uset(v_bs_1533_, v_i_1532_, v___x_1538_);
switch(lean_obj_tag(v_v_1537_))
{
case 1:
{
v_fst_1541_ = v_v_1537_;
v_snd_1542_ = v___y_1534_;
goto v___jp_1540_;
}
case 2:
{
lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1555_; 
v_isSharedCheck_1555_ = !lean_is_exclusive(v_v_1537_);
if (v_isSharedCheck_1555_ == 0)
{
lean_object* v_unused_1556_; 
v_unused_1556_ = lean_ctor_get(v_v_1537_, 0);
lean_dec(v_unused_1556_);
v___x_1548_ = v_v_1537_;
v_isShared_1549_ = v_isSharedCheck_1555_;
goto v_resetjp_1547_;
}
else
{
lean_dec(v_v_1537_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1555_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1550_ = lean_unsigned_to_nat(1u);
v___x_1551_ = lean_nat_add(v___y_1534_, v___x_1550_);
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v___y_1534_);
v___x_1553_ = v___x_1548_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___y_1534_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
v_fst_1541_ = v___x_1553_;
v_snd_1542_ = v___x_1551_;
goto v___jp_1540_;
}
}
}
case 3:
{
v_fst_1541_ = v_v_1537_;
v_snd_1542_ = v___y_1534_;
goto v___jp_1540_;
}
default: 
{
v_fst_1541_ = v_v_1537_;
v_snd_1542_ = v___y_1534_;
goto v___jp_1540_;
}
}
v___jp_1540_:
{
size_t v___x_1543_; size_t v___x_1544_; lean_object* v___x_1545_; 
v___x_1543_ = ((size_t)1ULL);
v___x_1544_ = lean_usize_add(v_i_1532_, v___x_1543_);
v___x_1545_ = lean_array_uset(v_bs_x27_1539_, v_i_1532_, v_fst_1541_);
v_i_1532_ = v___x_1544_;
v_bs_1533_ = v___x_1545_;
v___y_1534_ = v_snd_1542_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4___boxed(lean_object* v_sz_1557_, lean_object* v_i_1558_, lean_object* v_bs_1559_, lean_object* v___y_1560_){
_start:
{
size_t v_sz_boxed_1561_; size_t v_i_boxed_1562_; lean_object* v_res_1563_; 
v_sz_boxed_1561_ = lean_unbox_usize(v_sz_1557_);
lean_dec(v_sz_1557_);
v_i_boxed_1562_ = lean_unbox_usize(v_i_1558_);
lean_dec(v_i_1558_);
v_res_1563_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4(v_sz_boxed_1561_, v_i_boxed_1562_, v_bs_1559_, v___y_1560_);
return v_res_1563_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1565_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__2));
v___x_1566_ = lean_unsigned_to_nat(15u);
v___x_1567_ = lean_unsigned_to_nat(238u);
v___x_1568_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__0));
v___x_1569_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__0));
v___x_1570_ = l_mkPanicMessageWithDecl(v___x_1569_, v___x_1568_, v___x_1567_, v___x_1566_, v___x_1565_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(lean_object* v___f_1571_, lean_object* v_fst_1572_, lean_object* v_fst_1573_, lean_object* v_fst_1574_, lean_object* v_fst_1575_, lean_object* v_snd_1576_, lean_object* v_x_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1);
v___x_1584_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2(v___x_1583_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; lean_object* v___x_1586_; 
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_a_1585_);
lean_dec_ref_known(v___x_1584_, 1);
lean_inc(v___y_1581_);
lean_inc_ref(v___y_1580_);
lean_inc(v___y_1579_);
lean_inc_ref(v___y_1578_);
v___x_1586_ = lean_apply_11(v___f_1571_, v_a_1585_, v_fst_1572_, v_fst_1573_, v_fst_1574_, v_fst_1575_, v_snd_1576_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, lean_box(0));
return v___x_1586_;
}
else
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
lean_dec(v_snd_1576_);
lean_dec(v_fst_1575_);
lean_dec(v_fst_1574_);
lean_dec(v_fst_1573_);
lean_dec(v_fst_1572_);
lean_dec_ref(v___f_1571_);
v_a_1587_ = lean_ctor_get(v___x_1584_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1589_ = v___x_1584_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___x_1584_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1587_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___boxed(lean_object* v___f_1595_, lean_object* v_fst_1596_, lean_object* v_fst_1597_, lean_object* v_fst_1598_, lean_object* v_fst_1599_, lean_object* v_snd_1600_, lean_object* v_x_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1595_, v_fst_1596_, v_fst_1597_, v_fst_1598_, v_fst_1599_, v_snd_1600_, v_x_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec_ref(v_x_1601_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(lean_object* v_fst_1608_, lean_object* v_ctorField_1609_, lean_object* v_nextIdx_1610_, uint8_t v_has1BScalar_1611_, uint8_t v_has2BScalar_1612_, uint8_t v_has4BScalar_1613_, uint8_t v_has8BScalar_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1620_ = lean_array_push(v_fst_1608_, v_ctorField_1609_);
v___x_1621_ = lean_box(v_has4BScalar_1613_);
v___x_1622_ = lean_box(v_has8BScalar_1614_);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = lean_box(v_has2BScalar_1612_);
v___x_1625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1624_);
lean_ctor_set(v___x_1625_, 1, v___x_1623_);
v___x_1626_ = lean_box(v_has1BScalar_1611_);
v___x_1627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
lean_ctor_set(v___x_1627_, 1, v___x_1625_);
v___x_1628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1628_, 0, v_nextIdx_1610_);
lean_ctor_set(v___x_1628_, 1, v___x_1627_);
v___x_1629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1620_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
v___x_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1629_);
v___x_1631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0___boxed(lean_object* v_fst_1632_, lean_object* v_ctorField_1633_, lean_object* v_nextIdx_1634_, lean_object* v_has1BScalar_1635_, lean_object* v_has2BScalar_1636_, lean_object* v_has4BScalar_1637_, lean_object* v_has8BScalar_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
uint8_t v_has1BScalar_boxed_1644_; uint8_t v_has2BScalar_boxed_1645_; uint8_t v_has4BScalar_boxed_1646_; uint8_t v_has8BScalar_boxed_1647_; lean_object* v_res_1648_; 
v_has1BScalar_boxed_1644_ = lean_unbox(v_has1BScalar_1635_);
v_has2BScalar_boxed_1645_ = lean_unbox(v_has2BScalar_1636_);
v_has4BScalar_boxed_1646_ = lean_unbox(v_has4BScalar_1637_);
v_has8BScalar_boxed_1647_ = lean_unbox(v_has8BScalar_1638_);
v_res_1648_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1632_, v_ctorField_1633_, v_nextIdx_1634_, v_has1BScalar_boxed_1644_, v_has2BScalar_boxed_1645_, v_has4BScalar_boxed_1646_, v_has8BScalar_boxed_1647_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(lean_object* v_fst_1649_, lean_object* v___x_1650_, lean_object* v_a_1651_, lean_object* v___f_1652_, lean_object* v_fst_1653_, lean_object* v_fst_1654_, lean_object* v_fst_1655_, lean_object* v_snd_1656_, lean_object* v_00___1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1663_ = lean_nat_add(v_fst_1649_, v___x_1650_);
v___x_1664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1664_, 0, v_fst_1649_);
lean_ctor_set(v___x_1664_, 1, v_a_1651_);
lean_inc(v___y_1661_);
lean_inc_ref(v___y_1660_);
lean_inc(v___y_1659_);
lean_inc_ref(v___y_1658_);
v___x_1665_ = lean_apply_11(v___f_1652_, v___x_1664_, v___x_1663_, v_fst_1653_, v_fst_1654_, v_fst_1655_, v_snd_1656_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, lean_box(0));
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2___boxed(lean_object* v_fst_1666_, lean_object* v___x_1667_, lean_object* v_a_1668_, lean_object* v___f_1669_, lean_object* v_fst_1670_, lean_object* v_fst_1671_, lean_object* v_fst_1672_, lean_object* v_snd_1673_, lean_object* v_00___1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(v_fst_1666_, v___x_1667_, v_a_1668_, v___f_1669_, v_fst_1670_, v_fst_1671_, v_fst_1672_, v_snd_1673_, v_00___1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v___x_1667_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg(lean_object* v_a_1683_, lean_object* v_b_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v_array_1690_; lean_object* v_start_1691_; lean_object* v_stop_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1917_; 
v_array_1690_ = lean_ctor_get(v_a_1683_, 0);
v_start_1691_ = lean_ctor_get(v_a_1683_, 1);
v_stop_1692_ = lean_ctor_get(v_a_1683_, 2);
v_isSharedCheck_1917_ = !lean_is_exclusive(v_a_1683_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1694_ = v_a_1683_;
v_isShared_1695_ = v_isSharedCheck_1917_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_stop_1692_);
lean_inc(v_start_1691_);
lean_inc(v_array_1690_);
lean_dec(v_a_1683_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1917_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
uint8_t v___x_1696_; 
v___x_1696_ = lean_nat_dec_lt(v_start_1691_, v_stop_1692_);
if (v___x_1696_ == 0)
{
lean_object* v___x_1697_; 
lean_del_object(v___x_1694_);
lean_dec(v_stop_1692_);
lean_dec(v_start_1691_);
lean_dec_ref(v_array_1690_);
v___x_1697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1697_, 0, v_b_1684_);
return v___x_1697_;
}
else
{
lean_object* v_snd_1698_; lean_object* v_snd_1699_; lean_object* v_snd_1700_; lean_object* v_snd_1701_; lean_object* v_fst_1702_; lean_object* v_fst_1703_; lean_object* v_fst_1704_; lean_object* v_fst_1705_; lean_object* v_fst_1706_; lean_object* v_snd_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1712_; 
v_snd_1698_ = lean_ctor_get(v_b_1684_, 1);
lean_inc(v_snd_1698_);
v_snd_1699_ = lean_ctor_get(v_snd_1698_, 1);
lean_inc(v_snd_1699_);
v_snd_1700_ = lean_ctor_get(v_snd_1699_, 1);
lean_inc(v_snd_1700_);
v_snd_1701_ = lean_ctor_get(v_snd_1700_, 1);
lean_inc(v_snd_1701_);
v_fst_1702_ = lean_ctor_get(v_b_1684_, 0);
lean_inc(v_fst_1702_);
lean_dec_ref(v_b_1684_);
v_fst_1703_ = lean_ctor_get(v_snd_1698_, 0);
lean_inc(v_fst_1703_);
lean_dec(v_snd_1698_);
v_fst_1704_ = lean_ctor_get(v_snd_1699_, 0);
lean_inc(v_fst_1704_);
lean_dec(v_snd_1699_);
v_fst_1705_ = lean_ctor_get(v_snd_1700_, 0);
lean_inc(v_fst_1705_);
lean_dec(v_snd_1700_);
v_fst_1706_ = lean_ctor_get(v_snd_1701_, 0);
lean_inc(v_fst_1706_);
v_snd_1707_ = lean_ctor_get(v_snd_1701_, 1);
lean_inc(v_snd_1707_);
lean_dec(v_snd_1701_);
v___x_1708_ = lean_unsigned_to_nat(0u);
v___x_1709_ = lean_unsigned_to_nat(1u);
v___x_1710_ = lean_nat_add(v_start_1691_, v___x_1709_);
lean_inc_ref(v_array_1690_);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 1, v___x_1710_);
v___x_1712_ = v___x_1694_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_array_1690_);
lean_ctor_set(v_reuseFailAlloc_1916_, 1, v___x_1710_);
lean_ctor_set(v_reuseFailAlloc_1916_, 2, v_stop_1692_);
v___x_1712_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
lean_object* v___y_1714_; lean_object* v___x_1734_; lean_object* v___f_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1734_ = lean_array_fget(v_array_1690_, v_start_1691_);
lean_dec(v_start_1691_);
lean_dec_ref(v_array_1690_);
lean_inc(v_fst_1702_);
v___f_1735_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0___boxed), 12, 1);
lean_closure_set(v___f_1735_, 0, v_fst_1702_);
v___x_1736_ = l_Lean_Expr_fvarId_x21(v___x_1734_);
lean_dec(v___x_1734_);
v___x_1737_ = l_Lean_FVarId_getType___redArg(v___x_1736_, v___y_1685_, v___y_1687_, v___y_1688_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1739_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v___x_1737_, 1);
v___x_1739_ = l_Lean_Compiler_LCNF_toLCNFType(v_a_1738_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; lean_object* v___x_1741_; 
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
lean_inc(v_a_1740_);
lean_dec_ref_known(v___x_1739_, 1);
v___x_1741_ = l_Lean_Compiler_LCNF_toMonoType(v_a_1740_, v___y_1687_, v___y_1688_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v___x_1743_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1742_);
lean_dec_ref_known(v___x_1741_, 1);
v___x_1743_ = l_Lean_Compiler_LCNF_toImpureType(v_a_1742_, v___y_1687_, v___y_1688_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v_a_1744_; 
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1744_);
lean_dec_ref_known(v___x_1743_, 1);
if (lean_obj_tag(v_a_1744_) == 4)
{
lean_object* v_declName_1745_; 
v_declName_1745_ = lean_ctor_get(v_a_1744_, 0);
if (lean_obj_tag(v_declName_1745_) == 1)
{
lean_object* v_pre_1746_; 
v_pre_1746_ = lean_ctor_get(v_declName_1745_, 0);
if (lean_obj_tag(v_pre_1746_) == 0)
{
lean_object* v_us_1747_; lean_object* v_str_1748_; lean_object* v___x_1749_; uint8_t v___x_1750_; 
v_us_1747_ = lean_ctor_get(v_a_1744_, 1);
v_str_1748_ = lean_ctor_get(v_declName_1745_, 1);
v___x_1749_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__0));
v___x_1750_ = lean_string_dec_eq(v_str_1748_, v___x_1749_);
if (v___x_1750_ == 0)
{
lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1751_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__0));
v___x_1752_ = lean_string_dec_eq(v_str_1748_, v___x_1751_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1753_; uint8_t v___x_1754_; 
v___x_1753_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__10));
v___x_1754_ = lean_string_dec_eq(v_str_1748_, v___x_1753_);
if (v___x_1754_ == 0)
{
lean_object* v___x_1755_; uint8_t v___x_1756_; 
v___x_1755_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1));
v___x_1756_ = lean_string_dec_eq(v_str_1748_, v___x_1755_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1757_; uint8_t v___x_1758_; 
v___x_1757_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4));
v___x_1758_ = lean_string_dec_eq(v_str_1748_, v___x_1757_);
if (v___x_1758_ == 0)
{
lean_object* v___x_1759_; uint8_t v___x_1760_; 
v___x_1759_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6));
v___x_1760_ = lean_string_dec_eq(v_str_1748_, v___x_1759_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; uint8_t v___x_1762_; 
v___x_1761_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9));
v___x_1762_ = lean_string_dec_eq(v_str_1748_, v___x_1761_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; uint8_t v___x_1764_; 
v___x_1763_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6));
v___x_1764_ = lean_string_dec_eq(v_str_1748_, v___x_1763_);
if (v___x_1764_ == 0)
{
lean_object* v___x_1765_; uint8_t v___x_1766_; 
v___x_1765_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3));
v___x_1766_ = lean_string_dec_eq(v_str_1748_, v___x_1765_);
if (v___x_1766_ == 0)
{
lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1767_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0));
v___x_1768_ = lean_string_dec_eq(v_str_1748_, v___x_1767_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; uint8_t v___x_1770_; 
v___x_1769_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3));
v___x_1770_ = lean_string_dec_eq(v_str_1748_, v___x_1769_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; uint8_t v___x_1772_; 
v___x_1771_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2));
v___x_1772_ = lean_string_dec_eq(v_str_1748_, v___x_1771_);
if (v___x_1772_ == 0)
{
lean_object* v___x_1773_; 
lean_dec(v_fst_1702_);
v___x_1773_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v_a_1744_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref_known(v_a_1744_, 2);
v___y_1714_ = v___x_1773_;
goto v___jp_1713_;
}
else
{
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; uint8_t v___x_1778_; uint8_t v___x_1779_; uint8_t v___x_1780_; lean_object* v___x_1781_; 
lean_dec_ref(v___f_1735_);
lean_dec(v_snd_1707_);
v___x_1774_ = lean_unsigned_to_nat(8u);
v___x_1775_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__20));
v___x_1776_ = l_Lean_Expr_const___override(v___x_1775_, v_us_1747_);
v___x_1777_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1774_);
lean_ctor_set(v___x_1777_, 1, v___x_1708_);
lean_ctor_set(v___x_1777_, 2, v___x_1776_);
v___x_1778_ = lean_unbox(v_fst_1704_);
lean_dec(v_fst_1704_);
v___x_1779_ = lean_unbox(v_fst_1705_);
lean_dec(v_fst_1705_);
v___x_1780_ = lean_unbox(v_fst_1706_);
lean_dec(v_fst_1706_);
v___x_1781_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1702_, v___x_1777_, v_fst_1703_, v___x_1778_, v___x_1779_, v___x_1780_, v___x_1772_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1781_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
lean_dec(v_fst_1702_);
v___x_1782_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1771_);
v___x_1783_ = l_Lean_Expr_const___override(v___x_1782_, v_us_1747_);
v___x_1784_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1783_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1783_);
v___y_1714_ = v___x_1784_;
goto v___jp_1713_;
}
}
}
else
{
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; uint8_t v___x_1789_; uint8_t v___x_1790_; uint8_t v___x_1791_; lean_object* v___x_1792_; 
lean_dec_ref(v___f_1735_);
lean_dec(v_fst_1706_);
v___x_1785_ = lean_unsigned_to_nat(4u);
v___x_1786_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__17));
v___x_1787_ = l_Lean_Expr_const___override(v___x_1786_, v_us_1747_);
v___x_1788_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1785_);
lean_ctor_set(v___x_1788_, 1, v___x_1708_);
lean_ctor_set(v___x_1788_, 2, v___x_1787_);
v___x_1789_ = lean_unbox(v_fst_1704_);
lean_dec(v_fst_1704_);
v___x_1790_ = lean_unbox(v_fst_1705_);
lean_dec(v_fst_1705_);
v___x_1791_ = lean_unbox(v_snd_1707_);
lean_dec(v_snd_1707_);
v___x_1792_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1702_, v___x_1788_, v_fst_1703_, v___x_1789_, v___x_1790_, v___x_1770_, v___x_1791_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1792_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_dec(v_fst_1702_);
v___x_1793_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1769_);
v___x_1794_ = l_Lean_Expr_const___override(v___x_1793_, v_us_1747_);
v___x_1795_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1794_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1794_);
v___y_1714_ = v___x_1795_;
goto v___jp_1713_;
}
}
}
else
{
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; uint8_t v___x_1800_; uint8_t v___x_1801_; uint8_t v___x_1802_; lean_object* v___x_1803_; 
lean_dec_ref(v___f_1735_);
lean_dec(v_snd_1707_);
v___x_1796_ = lean_unsigned_to_nat(8u);
v___x_1797_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__26));
v___x_1798_ = l_Lean_Expr_const___override(v___x_1797_, v_us_1747_);
v___x_1799_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1796_);
lean_ctor_set(v___x_1799_, 1, v___x_1708_);
lean_ctor_set(v___x_1799_, 2, v___x_1798_);
v___x_1800_ = lean_unbox(v_fst_1704_);
lean_dec(v_fst_1704_);
v___x_1801_ = lean_unbox(v_fst_1705_);
lean_dec(v_fst_1705_);
v___x_1802_ = lean_unbox(v_fst_1706_);
lean_dec(v_fst_1706_);
v___x_1803_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1702_, v___x_1799_, v_fst_1703_, v___x_1800_, v___x_1801_, v___x_1802_, v___x_1768_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1803_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
lean_dec(v_fst_1702_);
v___x_1804_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1767_);
v___x_1805_ = l_Lean_Expr_const___override(v___x_1804_, v_us_1747_);
v___x_1806_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1805_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1805_);
v___y_1714_ = v___x_1806_;
goto v___jp_1713_;
}
}
}
else
{
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; uint8_t v___x_1811_; uint8_t v___x_1812_; uint8_t v___x_1813_; lean_object* v___x_1814_; 
lean_dec_ref(v___f_1735_);
lean_dec(v_fst_1706_);
v___x_1807_ = lean_unsigned_to_nat(4u);
v___x_1808_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__4));
v___x_1809_ = l_Lean_Expr_const___override(v___x_1808_, v_us_1747_);
v___x_1810_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1807_);
lean_ctor_set(v___x_1810_, 1, v___x_1708_);
lean_ctor_set(v___x_1810_, 2, v___x_1809_);
v___x_1811_ = lean_unbox(v_fst_1704_);
lean_dec(v_fst_1704_);
v___x_1812_ = lean_unbox(v_fst_1705_);
lean_dec(v_fst_1705_);
v___x_1813_ = lean_unbox(v_snd_1707_);
lean_dec(v_snd_1707_);
v___x_1814_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1702_, v___x_1810_, v_fst_1703_, v___x_1811_, v___x_1812_, v___x_1766_, v___x_1813_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1814_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
lean_dec(v_fst_1702_);
v___x_1815_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1765_);
v___x_1816_ = l_Lean_Expr_const___override(v___x_1815_, v_us_1747_);
v___x_1817_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1816_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1816_);
v___y_1714_ = v___x_1817_;
goto v___jp_1713_;
}
}
}
else
{
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; uint8_t v___x_1822_; uint8_t v___x_1823_; uint8_t v___x_1824_; lean_object* v___x_1825_; 
lean_dec_ref(v___f_1735_);
lean_dec(v_fst_1705_);
v___x_1818_ = lean_unsigned_to_nat(2u);
v___x_1819_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__7));
v___x_1820_ = l_Lean_Expr_const___override(v___x_1819_, v_us_1747_);
v___x_1821_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1818_);
lean_ctor_set(v___x_1821_, 1, v___x_1708_);
lean_ctor_set(v___x_1821_, 2, v___x_1820_);
v___x_1822_ = lean_unbox(v_fst_1704_);
lean_dec(v_fst_1704_);
v___x_1823_ = lean_unbox(v_fst_1706_);
lean_dec(v_fst_1706_);
v___x_1824_ = lean_unbox(v_snd_1707_);
lean_dec(v_snd_1707_);
v___x_1825_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1702_, v___x_1821_, v_fst_1703_, v___x_1822_, v___x_1764_, v___x_1823_, v___x_1824_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1825_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
lean_dec(v_fst_1702_);
v___x_1826_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1763_);
v___x_1827_ = l_Lean_Expr_const___override(v___x_1826_, v_us_1747_);
v___x_1828_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1827_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1827_);
v___y_1714_ = v___x_1828_;
goto v___jp_1713_;
}
}
}
else
{
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; uint8_t v___x_1832_; uint8_t v___x_1833_; uint8_t v___x_1834_; lean_object* v___x_1835_; 
lean_dec_ref(v___f_1735_);
lean_dec(v_fst_1704_);
v___x_1829_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__10));
v___x_1830_ = l_Lean_Expr_const___override(v___x_1829_, v_us_1747_);
v___x_1831_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1709_);
lean_ctor_set(v___x_1831_, 1, v___x_1708_);
lean_ctor_set(v___x_1831_, 2, v___x_1830_);
v___x_1832_ = lean_unbox(v_fst_1705_);
lean_dec(v_fst_1705_);
v___x_1833_ = lean_unbox(v_fst_1706_);
lean_dec(v_fst_1706_);
v___x_1834_ = lean_unbox(v_snd_1707_);
lean_dec(v_snd_1707_);
v___x_1835_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1702_, v___x_1831_, v_fst_1703_, v___x_1762_, v___x_1832_, v___x_1833_, v___x_1834_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1835_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
lean_dec(v_fst_1702_);
v___x_1836_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1761_);
v___x_1837_ = l_Lean_Expr_const___override(v___x_1836_, v_us_1747_);
v___x_1838_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1837_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1837_);
v___y_1714_ = v___x_1838_;
goto v___jp_1713_;
}
}
}
else
{
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1839_; uint8_t v___x_1840_; uint8_t v___x_1841_; uint8_t v___x_1842_; uint8_t v___x_1843_; lean_object* v___x_1844_; 
lean_dec_ref(v___f_1735_);
v___x_1839_ = lean_box(4);
v___x_1840_ = lean_unbox(v_fst_1704_);
lean_dec(v_fst_1704_);
v___x_1841_ = lean_unbox(v_fst_1705_);
lean_dec(v_fst_1705_);
v___x_1842_ = lean_unbox(v_fst_1706_);
lean_dec(v_fst_1706_);
v___x_1843_ = lean_unbox(v_snd_1707_);
lean_dec(v_snd_1707_);
v___x_1844_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1702_, v___x_1839_, v_fst_1703_, v___x_1840_, v___x_1841_, v___x_1842_, v___x_1843_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1844_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
lean_dec(v_fst_1702_);
v___x_1845_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1759_);
v___x_1846_ = l_Lean_Expr_const___override(v___x_1845_, v_us_1747_);
v___x_1847_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1846_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1846_);
v___y_1714_ = v___x_1847_;
goto v___jp_1713_;
}
}
}
else
{
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1848_; uint8_t v___x_1849_; uint8_t v___x_1850_; uint8_t v___x_1851_; uint8_t v___x_1852_; lean_object* v___x_1853_; 
lean_dec_ref(v___f_1735_);
v___x_1848_ = lean_box(0);
v___x_1849_ = lean_unbox(v_fst_1704_);
lean_dec(v_fst_1704_);
v___x_1850_ = lean_unbox(v_fst_1705_);
lean_dec(v_fst_1705_);
v___x_1851_ = lean_unbox(v_fst_1706_);
lean_dec(v_fst_1706_);
v___x_1852_ = lean_unbox(v_snd_1707_);
lean_dec(v_snd_1707_);
v___x_1853_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1702_, v___x_1848_, v_fst_1703_, v___x_1849_, v___x_1850_, v___x_1851_, v___x_1852_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1853_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
lean_dec(v_fst_1702_);
v___x_1854_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1757_);
v___x_1855_ = l_Lean_Expr_const___override(v___x_1854_, v_us_1747_);
v___x_1856_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1855_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1855_);
v___y_1714_ = v___x_1856_;
goto v___jp_1713_;
}
}
}
else
{
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1857_; uint8_t v___x_1858_; uint8_t v___x_1859_; uint8_t v___x_1860_; uint8_t v___x_1861_; lean_object* v___x_1862_; 
lean_dec_ref(v___f_1735_);
v___x_1857_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___closed__0));
v___x_1858_ = lean_unbox(v_fst_1704_);
lean_dec(v_fst_1704_);
v___x_1859_ = lean_unbox(v_fst_1705_);
lean_dec(v_fst_1705_);
v___x_1860_ = lean_unbox(v_fst_1706_);
lean_dec(v_fst_1706_);
v___x_1861_ = lean_unbox(v_snd_1707_);
lean_dec(v_snd_1707_);
v___x_1862_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1702_, v___x_1857_, v_fst_1703_, v___x_1858_, v___x_1859_, v___x_1860_, v___x_1861_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1862_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; 
lean_dec(v_fst_1702_);
v___x_1863_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1755_);
v___x_1864_ = l_Lean_Expr_const___override(v___x_1863_, v_us_1747_);
v___x_1865_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1864_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1864_);
v___y_1714_ = v___x_1865_;
goto v___jp_1713_;
}
}
}
else
{
lean_dec(v_fst_1702_);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = lean_box(0);
v___x_1867_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(v_fst_1703_, v___x_1709_, v_a_1744_, v___f_1735_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1866_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1867_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
v___x_1868_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1753_);
v___x_1869_ = l_Lean_Expr_const___override(v___x_1868_, v_us_1747_);
v___x_1870_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1869_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1869_);
v___y_1714_ = v___x_1870_;
goto v___jp_1713_;
}
}
}
else
{
lean_dec(v_fst_1702_);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1871_ = lean_box(0);
v___x_1872_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(v_fst_1703_, v___x_1709_, v_a_1744_, v___f_1735_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1871_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1872_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
v___x_1873_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1751_);
v___x_1874_ = l_Lean_Expr_const___override(v___x_1873_, v_us_1747_);
v___x_1875_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1874_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1874_);
v___y_1714_ = v___x_1875_;
goto v___jp_1713_;
}
}
}
else
{
lean_dec(v_fst_1702_);
if (lean_obj_tag(v_us_1747_) == 0)
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = lean_box(0);
v___x_1877_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(v_fst_1703_, v___x_1709_, v_a_1744_, v___f_1735_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1876_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
v___y_1714_ = v___x_1877_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
lean_inc(v_pre_1746_);
lean_inc(v_us_1747_);
lean_dec_ref_known(v_a_1744_, 2);
v___x_1878_ = l_Lean_Name_str___override(v_pre_1746_, v___x_1749_);
v___x_1879_ = l_Lean_Expr_const___override(v___x_1878_, v_us_1747_);
v___x_1880_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v___x_1879_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref(v___x_1879_);
v___y_1714_ = v___x_1880_;
goto v___jp_1713_;
}
}
}
else
{
lean_object* v___x_1881_; 
lean_dec(v_fst_1702_);
v___x_1881_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v_a_1744_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref_known(v_a_1744_, 2);
v___y_1714_ = v___x_1881_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_1882_; 
lean_dec(v_fst_1702_);
v___x_1882_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v_a_1744_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec_ref_known(v_a_1744_, 2);
v___y_1714_ = v___x_1882_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_1883_; 
lean_dec(v_fst_1702_);
v___x_1883_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1735_, v_fst_1703_, v_fst_1704_, v_fst_1705_, v_fst_1706_, v_snd_1707_, v_a_1744_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec(v_a_1744_);
v___y_1714_ = v___x_1883_;
goto v___jp_1713_;
}
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_dec_ref(v___f_1735_);
lean_dec_ref(v___x_1712_);
lean_dec(v_snd_1707_);
lean_dec(v_fst_1706_);
lean_dec(v_fst_1705_);
lean_dec(v_fst_1704_);
lean_dec(v_fst_1703_);
lean_dec(v_fst_1702_);
v_a_1884_ = lean_ctor_get(v___x_1743_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1743_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1743_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
else
{
lean_object* v_a_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1899_; 
lean_dec_ref(v___f_1735_);
lean_dec_ref(v___x_1712_);
lean_dec(v_snd_1707_);
lean_dec(v_fst_1706_);
lean_dec(v_fst_1705_);
lean_dec(v_fst_1704_);
lean_dec(v_fst_1703_);
lean_dec(v_fst_1702_);
v_a_1892_ = lean_ctor_get(v___x_1741_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1894_ = v___x_1741_;
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_a_1892_);
lean_dec(v___x_1741_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1897_; 
if (v_isShared_1895_ == 0)
{
v___x_1897_ = v___x_1894_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1892_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1907_; 
lean_dec_ref(v___f_1735_);
lean_dec_ref(v___x_1712_);
lean_dec(v_snd_1707_);
lean_dec(v_fst_1706_);
lean_dec(v_fst_1705_);
lean_dec(v_fst_1704_);
lean_dec(v_fst_1703_);
lean_dec(v_fst_1702_);
v_a_1900_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1902_ = v___x_1739_;
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1739_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1903_ == 0)
{
v___x_1905_ = v___x_1902_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_a_1900_);
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
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
lean_dec_ref(v___f_1735_);
lean_dec_ref(v___x_1712_);
lean_dec(v_snd_1707_);
lean_dec(v_fst_1706_);
lean_dec(v_fst_1705_);
lean_dec(v_fst_1704_);
lean_dec(v_fst_1703_);
lean_dec(v_fst_1702_);
v_a_1908_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v___x_1737_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1737_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
v___jp_1713_:
{
if (lean_obj_tag(v___y_1714_) == 0)
{
lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1725_; 
v_a_1715_ = lean_ctor_get(v___y_1714_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___y_1714_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1717_ = v___y_1714_;
v_isShared_1718_ = v_isSharedCheck_1725_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_dec(v___y_1714_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1725_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
if (lean_obj_tag(v_a_1715_) == 0)
{
lean_object* v_a_1719_; lean_object* v___x_1721_; 
lean_dec_ref(v___x_1712_);
v_a_1719_ = lean_ctor_get(v_a_1715_, 0);
lean_inc(v_a_1719_);
lean_dec_ref_known(v_a_1715_, 1);
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 0, v_a_1719_);
v___x_1721_ = v___x_1717_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_a_1719_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
else
{
lean_object* v_a_1723_; 
lean_del_object(v___x_1717_);
v_a_1723_ = lean_ctor_get(v_a_1715_, 0);
lean_inc(v_a_1723_);
lean_dec_ref_known(v_a_1715_, 1);
v_a_1683_ = v___x_1712_;
v_b_1684_ = v_a_1723_;
goto _start;
}
}
}
else
{
lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1733_; 
lean_dec_ref(v___x_1712_);
v_a_1726_ = lean_ctor_get(v___y_1714_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___y_1714_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1728_ = v___y_1714_;
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_dec(v___y_1714_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1731_; 
if (v_isShared_1729_ == 0)
{
v___x_1731_ = v___x_1728_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_a_1726_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___boxed(lean_object* v_a_1918_, lean_object* v_b_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg(v_a_1918_, v_b_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1(lean_object* v_numFields_1926_, lean_object* v_numParams_1927_, uint8_t v___x_1928_, lean_object* v_ctorName_1929_, lean_object* v_cidx_1930_, lean_object* v___f_1931_, lean_object* v_params_1932_, lean_object* v_x_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1939_ = lean_mk_empty_array_with_capacity(v_numFields_1926_);
v___x_1940_ = lean_unsigned_to_nat(0u);
v___x_1941_ = lean_nat_add(v_numParams_1927_, v_numFields_1926_);
v___x_1942_ = l_Array_toSubarray___redArg(v_params_1932_, v_numParams_1927_, v___x_1941_);
v___x_1943_ = lean_box(v___x_1928_);
v___x_1944_ = lean_box(v___x_1928_);
v___x_1945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1943_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = lean_box(v___x_1928_);
v___x_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1946_);
lean_ctor_set(v___x_1947_, 1, v___x_1945_);
v___x_1948_ = lean_box(v___x_1928_);
v___x_1949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
lean_ctor_set(v___x_1949_, 1, v___x_1947_);
v___x_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1940_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
v___x_1951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1939_);
lean_ctor_set(v___x_1951_, 1, v___x_1950_);
v___x_1952_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg(v___x_1942_, v___x_1951_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_2016_; 
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_1955_ = v___x_1952_;
v_isShared_1956_ = v_isSharedCheck_2016_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1952_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_2016_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v_snd_1957_; lean_object* v_fst_1958_; lean_object* v_fst_1959_; lean_object* v_snd_1960_; size_t v_sz_1961_; size_t v___x_1962_; lean_object* v___x_1963_; lean_object* v_snd_1964_; lean_object* v_snd_1965_; lean_object* v_fst_1966_; lean_object* v_snd_1967_; lean_object* v_fst_1968_; lean_object* v_fst_1969_; lean_object* v_fst_1970_; lean_object* v_snd_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_2015_; 
v_snd_1957_ = lean_ctor_get(v_a_1953_, 1);
lean_inc(v_snd_1957_);
v_fst_1958_ = lean_ctor_get(v_a_1953_, 0);
lean_inc(v_fst_1958_);
lean_dec(v_a_1953_);
v_fst_1959_ = lean_ctor_get(v_snd_1957_, 0);
lean_inc_n(v_fst_1959_, 2);
v_snd_1960_ = lean_ctor_get(v_snd_1957_, 1);
lean_inc(v_snd_1960_);
lean_dec(v_snd_1957_);
v_sz_1961_ = lean_array_size(v_fst_1958_);
v___x_1962_ = ((size_t)0ULL);
v___x_1963_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4(v_sz_1961_, v___x_1962_, v_fst_1958_, v_fst_1959_);
v_snd_1964_ = lean_ctor_get(v_snd_1960_, 1);
lean_inc(v_snd_1964_);
v_snd_1965_ = lean_ctor_get(v_snd_1964_, 1);
lean_inc(v_snd_1965_);
v_fst_1966_ = lean_ctor_get(v___x_1963_, 0);
lean_inc(v_fst_1966_);
v_snd_1967_ = lean_ctor_get(v___x_1963_, 1);
lean_inc(v_snd_1967_);
lean_dec_ref(v___x_1963_);
v_fst_1968_ = lean_ctor_get(v_snd_1960_, 0);
lean_inc(v_fst_1968_);
lean_dec(v_snd_1960_);
v_fst_1969_ = lean_ctor_get(v_snd_1964_, 0);
lean_inc(v_fst_1969_);
lean_dec(v_snd_1964_);
v_fst_1970_ = lean_ctor_get(v_snd_1965_, 0);
v_snd_1971_ = lean_ctor_get(v_snd_1965_, 1);
v_isSharedCheck_2015_ = !lean_is_exclusive(v_snd_1965_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_1973_ = v_snd_1965_;
v_isShared_1974_ = v_isSharedCheck_2015_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_snd_1971_);
lean_inc(v_fst_1970_);
lean_dec(v_snd_1965_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_2015_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1975_; lean_object* v_fields_1977_; lean_object* v_nextOffset_1978_; lean_object* v_fields_1987_; lean_object* v_nextOffset_1988_; lean_object* v_fields_1995_; lean_object* v_nextOffset_1996_; lean_object* v_fields_2003_; lean_object* v_nextOffset_2004_; uint8_t v___x_2010_; 
v___x_1975_ = lean_nat_sub(v_snd_1967_, v_fst_1959_);
lean_dec(v_snd_1967_);
v___x_2010_ = lean_unbox(v_snd_1971_);
lean_dec(v_snd_1971_);
if (v___x_2010_ == 0)
{
v_fields_2003_ = v_fst_1966_;
v_nextOffset_2004_ = v___x_1940_;
goto v___jp_2002_;
}
else
{
lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v_fst_2013_; lean_object* v_snd_2014_; 
v___x_2011_ = lean_unsigned_to_nat(8u);
lean_inc_ref(v___f_1931_);
v___x_2012_ = lean_apply_3(v___f_1931_, v_fst_1966_, v___x_2011_, v___x_1940_);
v_fst_2013_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_fst_2013_);
v_snd_2014_ = lean_ctor_get(v___x_2012_, 1);
lean_inc(v_snd_2014_);
lean_dec_ref(v___x_2012_);
v_fields_2003_ = v_fst_2013_;
v_nextOffset_2004_ = v_snd_2014_;
goto v___jp_2002_;
}
v___jp_1976_:
{
lean_object* v___x_1979_; lean_object* v___x_1981_; 
v___x_1979_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1979_, 0, v_ctorName_1929_);
lean_ctor_set(v___x_1979_, 1, v_cidx_1930_);
lean_ctor_set(v___x_1979_, 2, v_fst_1959_);
lean_ctor_set(v___x_1979_, 3, v___x_1975_);
lean_ctor_set(v___x_1979_, 4, v_nextOffset_1978_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 1, v_fields_1977_);
lean_ctor_set(v___x_1973_, 0, v___x_1979_);
v___x_1981_ = v___x_1973_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v___x_1979_);
lean_ctor_set(v_reuseFailAlloc_1985_, 1, v_fields_1977_);
v___x_1981_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
lean_object* v___x_1983_; 
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 0, v___x_1981_);
v___x_1983_ = v___x_1955_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v___x_1981_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
v___jp_1986_:
{
uint8_t v___x_1989_; 
v___x_1989_ = lean_unbox(v_fst_1968_);
lean_dec(v_fst_1968_);
if (v___x_1989_ == 0)
{
lean_dec_ref(v___f_1931_);
v_fields_1977_ = v_fields_1987_;
v_nextOffset_1978_ = v_nextOffset_1988_;
goto v___jp_1976_;
}
else
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v_fst_1992_; lean_object* v_snd_1993_; 
v___x_1990_ = lean_unsigned_to_nat(1u);
v___x_1991_ = lean_apply_3(v___f_1931_, v_fields_1987_, v___x_1990_, v_nextOffset_1988_);
v_fst_1992_ = lean_ctor_get(v___x_1991_, 0);
lean_inc(v_fst_1992_);
v_snd_1993_ = lean_ctor_get(v___x_1991_, 1);
lean_inc(v_snd_1993_);
lean_dec_ref(v___x_1991_);
v_fields_1977_ = v_fst_1992_;
v_nextOffset_1978_ = v_snd_1993_;
goto v___jp_1976_;
}
}
v___jp_1994_:
{
uint8_t v___x_1997_; 
v___x_1997_ = lean_unbox(v_fst_1969_);
lean_dec(v_fst_1969_);
if (v___x_1997_ == 0)
{
v_fields_1987_ = v_fields_1995_;
v_nextOffset_1988_ = v_nextOffset_1996_;
goto v___jp_1986_;
}
else
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v_fst_2000_; lean_object* v_snd_2001_; 
v___x_1998_ = lean_unsigned_to_nat(2u);
lean_inc_ref(v___f_1931_);
v___x_1999_ = lean_apply_3(v___f_1931_, v_fields_1995_, v___x_1998_, v_nextOffset_1996_);
v_fst_2000_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_fst_2000_);
v_snd_2001_ = lean_ctor_get(v___x_1999_, 1);
lean_inc(v_snd_2001_);
lean_dec_ref(v___x_1999_);
v_fields_1987_ = v_fst_2000_;
v_nextOffset_1988_ = v_snd_2001_;
goto v___jp_1986_;
}
}
v___jp_2002_:
{
uint8_t v___x_2005_; 
v___x_2005_ = lean_unbox(v_fst_1970_);
lean_dec(v_fst_1970_);
if (v___x_2005_ == 0)
{
v_fields_1995_ = v_fields_2003_;
v_nextOffset_1996_ = v_nextOffset_2004_;
goto v___jp_1994_;
}
else
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v_fst_2008_; lean_object* v_snd_2009_; 
v___x_2006_ = lean_unsigned_to_nat(4u);
lean_inc_ref(v___f_1931_);
v___x_2007_ = lean_apply_3(v___f_1931_, v_fields_2003_, v___x_2006_, v_nextOffset_2004_);
v_fst_2008_ = lean_ctor_get(v___x_2007_, 0);
lean_inc(v_fst_2008_);
v_snd_2009_ = lean_ctor_get(v___x_2007_, 1);
lean_inc(v_snd_2009_);
lean_dec_ref(v___x_2007_);
v_fields_1995_ = v_fst_2008_;
v_nextOffset_1996_ = v_snd_2009_;
goto v___jp_1994_;
}
}
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
lean_dec_ref(v___f_1931_);
lean_dec(v_cidx_1930_);
lean_dec(v_ctorName_1929_);
v_a_2017_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_1952_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_1952_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___boxed(lean_object* v_numFields_2025_, lean_object* v_numParams_2026_, lean_object* v___x_2027_, lean_object* v_ctorName_2028_, lean_object* v_cidx_2029_, lean_object* v___f_2030_, lean_object* v_params_2031_, lean_object* v_x_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_){
_start:
{
uint8_t v___x_13893__boxed_2038_; lean_object* v_res_2039_; 
v___x_13893__boxed_2038_ = lean_unbox(v___x_2027_);
v_res_2039_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1(v_numFields_2025_, v_numParams_2026_, v___x_13893__boxed_2038_, v_ctorName_2028_, v_cidx_2029_, v___f_2030_, v_params_2031_, v_x_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_);
lean_dec(v___y_2036_);
lean_dec_ref(v___y_2035_);
lean_dec(v___y_2034_);
lean_dec_ref(v___y_2033_);
lean_dec_ref(v_x_2032_);
lean_dec(v_numFields_2025_);
return v_res_2039_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0(void){
_start:
{
lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2040_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__2));
v___x_2041_ = lean_unsigned_to_nat(66u);
v___x_2042_ = lean_unsigned_to_nat(199u);
v___x_2043_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__0));
v___x_2044_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__0));
v___x_2045_ = l_mkPanicMessageWithDecl(v___x_2044_, v___x_2043_, v___x_2042_, v___x_2041_, v___x_2040_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache(lean_object* v_ctorName_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_){
_start:
{
lean_object* v___y_2052_; lean_object* v___y_2053_; lean_object* v___f_2056_; lean_object* v___x_2057_; lean_object* v_env_2058_; uint8_t v___x_2059_; lean_object* v___x_2060_; 
v___f_2056_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__1));
v___x_2057_ = lean_st_ref_get(v_a_2049_);
v_env_2058_ = lean_ctor_get(v___x_2057_, 0);
lean_inc_ref(v_env_2058_);
lean_dec(v___x_2057_);
v___x_2059_ = 0;
lean_inc(v_ctorName_2047_);
v___x_2060_ = l_Lean_Environment_find_x3f(v_env_2058_, v_ctorName_2047_, v___x_2059_);
if (lean_obj_tag(v___x_2060_) == 1)
{
lean_object* v_val_2061_; 
v_val_2061_ = lean_ctor_get(v___x_2060_, 0);
lean_inc(v_val_2061_);
lean_dec_ref_known(v___x_2060_, 1);
if (lean_obj_tag(v_val_2061_) == 6)
{
lean_object* v_val_2062_; lean_object* v_toConstantVal_2063_; lean_object* v_cidx_2064_; lean_object* v_numParams_2065_; lean_object* v_numFields_2066_; lean_object* v_type_2067_; lean_object* v___x_2068_; lean_object* v___f_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v_val_2062_ = lean_ctor_get(v_val_2061_, 0);
lean_inc_ref(v_val_2062_);
lean_dec_ref_known(v_val_2061_, 1);
v_toConstantVal_2063_ = lean_ctor_get(v_val_2062_, 0);
lean_inc_ref(v_toConstantVal_2063_);
v_cidx_2064_ = lean_ctor_get(v_val_2062_, 2);
lean_inc(v_cidx_2064_);
v_numParams_2065_ = lean_ctor_get(v_val_2062_, 3);
lean_inc(v_numParams_2065_);
v_numFields_2066_ = lean_ctor_get(v_val_2062_, 4);
lean_inc(v_numFields_2066_);
lean_dec_ref(v_val_2062_);
v_type_2067_ = lean_ctor_get(v_toConstantVal_2063_, 2);
lean_inc_ref(v_type_2067_);
lean_dec_ref(v_toConstantVal_2063_);
v___x_2068_ = lean_box(v___x_2059_);
v___f_2069_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___boxed), 13, 6);
lean_closure_set(v___f_2069_, 0, v_numFields_2066_);
lean_closure_set(v___f_2069_, 1, v_numParams_2065_);
lean_closure_set(v___f_2069_, 2, v___x_2068_);
lean_closure_set(v___f_2069_, 3, v_ctorName_2047_);
lean_closure_set(v___f_2069_, 4, v_cidx_2064_);
lean_closure_set(v___f_2069_, 5, v___f_2056_);
v___x_2070_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__13, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__13_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__13);
v___x_2071_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__17, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__17_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__17);
v___x_2072_ = lean_st_mk_ref(v___x_2071_);
v___x_2073_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___redArg(v_type_2067_, v___f_2069_, v___x_2059_, v___x_2059_, v___x_2070_, v___x_2072_, v_a_2048_, v_a_2049_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2082_; 
v_a_2074_ = lean_ctor_get(v___x_2073_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2076_ = v___x_2073_;
v_isShared_2077_ = v_isSharedCheck_2082_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2073_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2082_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2078_; lean_object* v___x_2080_; 
v___x_2078_ = lean_st_ref_get(v___x_2072_);
lean_dec(v___x_2072_);
lean_dec(v___x_2078_);
if (v_isShared_2077_ == 0)
{
v___x_2080_ = v___x_2076_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_a_2074_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
else
{
lean_dec(v___x_2072_);
return v___x_2073_;
}
}
else
{
lean_dec(v_val_2061_);
lean_dec(v_ctorName_2047_);
v___y_2052_ = v_a_2048_;
v___y_2053_ = v_a_2049_;
goto v___jp_2051_;
}
}
else
{
lean_dec(v___x_2060_);
lean_dec(v_ctorName_2047_);
v___y_2052_ = v_a_2048_;
v___y_2053_ = v_a_2049_;
goto v___jp_2051_;
}
v___jp_2051_:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2054_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0);
v___x_2055_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1(v___x_2054_, v___y_2052_, v___y_2053_);
return v___x_2055_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___boxed(lean_object* v_ctorName_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache(v_ctorName_2083_, v_a_2084_, v_a_2085_);
lean_dec(v_a_2085_);
lean_dec_ref(v_a_2084_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3(lean_object* v_inst_2088_, lean_object* v_R_2089_, lean_object* v_a_2090_, lean_object* v_b_2091_, lean_object* v_c_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
lean_object* v___x_2098_; 
v___x_2098_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg(v_a_2090_, v_b_2091_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___boxed(lean_object* v_inst_2099_, lean_object* v_R_2100_, lean_object* v_a_2101_, lean_object* v_b_2102_, lean_object* v_c_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v_res_2109_; 
v_res_2109_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3(v_inst_2099_, v_R_2100_, v_a_2101_, v_b_2102_, v_c_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setCtorLayout(lean_object* v_ctorName_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v_env_2116_; lean_object* v___x_2117_; lean_object* v_toEnvExtension_2118_; lean_object* v_asyncMode_2119_; uint8_t v___x_2120_; lean_object* v___x_2121_; 
v___x_2114_ = l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default;
v___x_2115_ = lean_st_ref_get(v_a_2112_);
v_env_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc_ref(v_env_2116_);
lean_dec(v___x_2115_);
v___x_2117_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_ctorLayoutExt;
v_toEnvExtension_2118_ = lean_ctor_get(v___x_2117_, 0);
v_asyncMode_2119_ = lean_ctor_get(v_toEnvExtension_2118_, 2);
v___x_2120_ = 0;
lean_inc(v_ctorName_2110_);
v___x_2121_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_2114_, v___x_2117_, v_env_2116_, v_ctorName_2110_, v_asyncMode_2119_, v___x_2120_);
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v___x_2122_; 
lean_inc(v_ctorName_2110_);
v___x_2122_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache(v_ctorName_2110_, v_a_2111_, v_a_2112_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2124_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
lean_inc_n(v_a_2123_, 2);
lean_dec_ref_known(v___x_2122_, 1);
v___x_2124_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout(v_a_2123_, v_a_2111_, v_a_2112_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2152_; 
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2152_ == 0)
{
lean_object* v_unused_2153_; 
v_unused_2153_ = lean_ctor_get(v___x_2124_, 0);
lean_dec(v_unused_2153_);
v___x_2126_ = v___x_2124_;
v_isShared_2127_ = v_isSharedCheck_2152_;
goto v_resetjp_2125_;
}
else
{
lean_dec(v___x_2124_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2152_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2128_; lean_object* v_env_2129_; lean_object* v_nextMacroScope_2130_; lean_object* v_ngen_2131_; lean_object* v_auxDeclNGen_2132_; lean_object* v_traceState_2133_; lean_object* v_messages_2134_; lean_object* v_infoState_2135_; lean_object* v_snapshotTasks_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2150_; 
v___x_2128_ = lean_st_ref_take(v_a_2112_);
v_env_2129_ = lean_ctor_get(v___x_2128_, 0);
v_nextMacroScope_2130_ = lean_ctor_get(v___x_2128_, 1);
v_ngen_2131_ = lean_ctor_get(v___x_2128_, 2);
v_auxDeclNGen_2132_ = lean_ctor_get(v___x_2128_, 3);
v_traceState_2133_ = lean_ctor_get(v___x_2128_, 4);
v_messages_2134_ = lean_ctor_get(v___x_2128_, 6);
v_infoState_2135_ = lean_ctor_get(v___x_2128_, 7);
v_snapshotTasks_2136_ = lean_ctor_get(v___x_2128_, 8);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2150_ == 0)
{
lean_object* v_unused_2151_; 
v_unused_2151_ = lean_ctor_get(v___x_2128_, 5);
lean_dec(v_unused_2151_);
v___x_2138_ = v___x_2128_;
v_isShared_2139_ = v_isSharedCheck_2150_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_snapshotTasks_2136_);
lean_inc(v_infoState_2135_);
lean_inc(v_messages_2134_);
lean_inc(v_traceState_2133_);
lean_inc(v_auxDeclNGen_2132_);
lean_inc(v_ngen_2131_);
lean_inc(v_nextMacroScope_2130_);
lean_inc(v_env_2129_);
lean_dec(v___x_2128_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2150_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2144_; 
v___x_2140_ = lean_box(0);
v___x_2141_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2117_, v_env_2129_, v_ctorName_2110_, v_a_2123_);
v___x_2142_ = lean_obj_once(&l_Lean_Compiler_LCNF_setImpureType___closed__1, &l_Lean_Compiler_LCNF_setImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_setImpureType___closed__1);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 5, v___x_2142_);
lean_ctor_set(v___x_2138_, 0, v___x_2141_);
v___x_2144_ = v___x_2138_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2149_, 1, v_nextMacroScope_2130_);
lean_ctor_set(v_reuseFailAlloc_2149_, 2, v_ngen_2131_);
lean_ctor_set(v_reuseFailAlloc_2149_, 3, v_auxDeclNGen_2132_);
lean_ctor_set(v_reuseFailAlloc_2149_, 4, v_traceState_2133_);
lean_ctor_set(v_reuseFailAlloc_2149_, 5, v___x_2142_);
lean_ctor_set(v_reuseFailAlloc_2149_, 6, v_messages_2134_);
lean_ctor_set(v_reuseFailAlloc_2149_, 7, v_infoState_2135_);
lean_ctor_set(v_reuseFailAlloc_2149_, 8, v_snapshotTasks_2136_);
v___x_2144_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
lean_object* v___x_2145_; lean_object* v___x_2147_; 
v___x_2145_ = lean_st_ref_put(v_a_2112_, v___x_2144_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 0, v___x_2140_);
v___x_2147_ = v___x_2126_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v___x_2140_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
}
}
else
{
lean_dec(v_a_2123_);
lean_dec(v_ctorName_2110_);
return v___x_2124_;
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_dec(v_ctorName_2110_);
v_a_2154_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2122_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2122_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
else
{
lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2169_; 
lean_dec(v_ctorName_2110_);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2169_ == 0)
{
lean_object* v_unused_2170_; 
v_unused_2170_ = lean_ctor_get(v___x_2121_, 0);
lean_dec(v_unused_2170_);
v___x_2163_ = v___x_2121_;
v_isShared_2164_ = v_isSharedCheck_2169_;
goto v_resetjp_2162_;
}
else
{
lean_dec(v___x_2121_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2169_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v___x_2165_; lean_object* v___x_2167_; 
v___x_2165_ = lean_box(0);
if (v_isShared_2164_ == 0)
{
lean_ctor_set_tag(v___x_2163_, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2165_);
v___x_2167_ = v___x_2163_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2165_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setCtorLayout___boxed(lean_object* v_ctorName_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_){
_start:
{
lean_object* v_res_2175_; 
v_res_2175_ = l_Lean_Compiler_LCNF_setCtorLayout(v_ctorName_2171_, v_a_2172_, v_a_2173_);
lean_dec(v_a_2173_);
lean_dec_ref(v_a_2172_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getCtorLayout(lean_object* v_ctorName_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_){
_start:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v_env_2182_; lean_object* v___x_2183_; lean_object* v_toEnvExtension_2184_; lean_object* v_asyncMode_2185_; uint8_t v___x_2186_; lean_object* v___x_2187_; 
v___x_2180_ = l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default;
v___x_2181_ = lean_st_ref_get(v_a_2178_);
v_env_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc_ref(v_env_2182_);
lean_dec(v___x_2181_);
v___x_2183_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_ctorLayoutExt;
v_toEnvExtension_2184_ = lean_ctor_get(v___x_2183_, 0);
v_asyncMode_2185_ = lean_ctor_get(v_toEnvExtension_2184_, 2);
v___x_2186_ = 0;
lean_inc(v_ctorName_2176_);
v___x_2187_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_2180_, v___x_2183_, v_env_2182_, v_ctorName_2176_, v_asyncMode_2185_, v___x_2186_);
if (lean_obj_tag(v___x_2187_) == 1)
{
lean_object* v_val_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2195_; 
lean_dec(v_ctorName_2176_);
v_val_2188_ = lean_ctor_get(v___x_2187_, 0);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2190_ = v___x_2187_;
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_val_2188_);
lean_dec(v___x_2187_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2193_; 
if (v_isShared_2191_ == 0)
{
lean_ctor_set_tag(v___x_2190_, 0);
v___x_2193_ = v___x_2190_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_val_2188_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
return v___x_2193_;
}
}
}
else
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
lean_dec(v___x_2187_);
v___x_2196_ = lean_obj_once(&l_Lean_Compiler_LCNF_nameToImpureType___closed__1, &l_Lean_Compiler_LCNF_nameToImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__1);
v___x_2197_ = l_Lean_MessageData_ofName(v_ctorName_2176_);
v___x_2198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2196_);
lean_ctor_set(v___x_2198_, 1, v___x_2197_);
v___x_2199_ = lean_obj_once(&l_Lean_Compiler_LCNF_nameToImpureType___closed__3, &l_Lean_Compiler_LCNF_nameToImpureType___closed__3_once, _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__3);
v___x_2200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2198_);
lean_ctor_set(v___x_2200_, 1, v___x_2199_);
v___x_2201_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(v___x_2200_, v_a_2177_, v_a_2178_);
return v___x_2201_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getCtorLayout___boxed(lean_object* v_ctorName_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l_Lean_Compiler_LCNF_getCtorLayout(v_ctorName_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_a_2204_);
lean_dec_ref(v_a_2203_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2(lean_object* v_as_2207_, size_t v_sz_2208_, size_t v_i_2209_, lean_object* v_b_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
uint8_t v___x_2214_; 
v___x_2214_ = lean_usize_dec_lt(v_i_2209_, v_sz_2208_);
if (v___x_2214_ == 0)
{
lean_object* v___x_2215_; 
v___x_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2215_, 0, v_b_2210_);
return v___x_2215_;
}
else
{
lean_object* v___x_2216_; lean_object* v_a_2217_; lean_object* v___x_2218_; 
v___x_2216_ = lean_box(0);
v_a_2217_ = lean_array_uget_borrowed(v_as_2207_, v_i_2209_);
lean_inc(v_a_2217_);
v___x_2218_ = l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f(v_a_2217_, v___y_2211_, v___y_2212_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v___x_2219_; 
lean_dec_ref_known(v___x_2218_, 1);
lean_inc(v_a_2217_);
v___x_2219_ = l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f(v_a_2217_, v___y_2211_, v___y_2212_);
if (lean_obj_tag(v___x_2219_) == 0)
{
size_t v___x_2220_; size_t v___x_2221_; 
lean_dec_ref_known(v___x_2219_, 1);
v___x_2220_ = ((size_t)1ULL);
v___x_2221_ = lean_usize_add(v_i_2209_, v___x_2220_);
v_i_2209_ = v___x_2221_;
v_b_2210_ = v___x_2216_;
goto _start;
}
else
{
return v___x_2219_;
}
}
else
{
return v___x_2218_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2___boxed(lean_object* v_as_2223_, lean_object* v_sz_2224_, lean_object* v_i_2225_, lean_object* v_b_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
size_t v_sz_boxed_2230_; size_t v_i_boxed_2231_; lean_object* v_res_2232_; 
v_sz_boxed_2230_ = lean_unbox_usize(v_sz_2224_);
lean_dec(v_sz_2224_);
v_i_boxed_2231_ = lean_unbox_usize(v_i_2225_);
lean_dec(v_i_2225_);
v_res_2232_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2(v_as_2223_, v_sz_boxed_2230_, v_i_boxed_2231_, v_b_2226_, v___y_2227_, v___y_2228_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec_ref(v_as_2223_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg(lean_object* v_as_x27_2233_, lean_object* v_b_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
if (lean_obj_tag(v_as_x27_2233_) == 0)
{
lean_object* v___x_2238_; 
v___x_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2238_, 0, v_b_2234_);
return v___x_2238_;
}
else
{
lean_object* v_head_2239_; lean_object* v_tail_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v_head_2239_ = lean_ctor_get(v_as_x27_2233_, 0);
v_tail_2240_ = lean_ctor_get(v_as_x27_2233_, 1);
v___x_2241_ = lean_box(0);
lean_inc(v_head_2239_);
v___x_2242_ = l_Lean_Compiler_LCNF_setOtherDeclMonoType(v_head_2239_, v___y_2235_, v___y_2236_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v___x_2243_; 
lean_dec_ref_known(v___x_2242_, 1);
lean_inc(v_head_2239_);
v___x_2243_ = l_Lean_Compiler_LCNF_setCtorLayout(v_head_2239_, v___y_2235_, v___y_2236_);
if (lean_obj_tag(v___x_2243_) == 0)
{
lean_dec_ref_known(v___x_2243_, 1);
v_as_x27_2233_ = v_tail_2240_;
v_b_2234_ = v___x_2241_;
goto _start;
}
else
{
return v___x_2243_;
}
}
else
{
return v___x_2242_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg___boxed(lean_object* v_as_x27_2245_, lean_object* v_b_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg(v_as_x27_2245_, v_b_2246_, v___y_2247_, v___y_2248_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v_as_x27_2245_);
return v_res_2250_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2252_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__0));
v___x_2253_ = l_Lean_stringToMessageData(v___x_2252_);
return v___x_2253_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__2));
v___x_2256_ = l_Lean_stringToMessageData(v___x_2255_);
return v___x_2256_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5(void){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2258_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__4));
v___x_2259_ = l_Lean_stringToMessageData(v___x_2258_);
return v___x_2259_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7(void){
_start:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2261_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__6));
v___x_2262_ = l_Lean_stringToMessageData(v___x_2261_);
return v___x_2262_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9(void){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2264_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__8));
v___x_2265_ = l_Lean_stringToMessageData(v___x_2264_);
return v___x_2265_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11(void){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__10));
v___x_2268_ = l_Lean_stringToMessageData(v___x_2267_);
return v___x_2268_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13(void){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__12));
v___x_2271_ = l_Lean_stringToMessageData(v___x_2270_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg(lean_object* v_msg_2272_, lean_object* v_declHint_2273_, lean_object* v___y_2274_){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v_env_2278_; uint8_t v___x_2279_; 
v___x_2276_ = lean_box(0);
v___x_2277_ = lean_st_ref_get(v___y_2274_);
v_env_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc_ref(v_env_2278_);
lean_dec(v___x_2277_);
v___x_2279_ = l_Lean_Name_isAnonymous(v_declHint_2273_);
if (v___x_2279_ == 0)
{
uint8_t v_isExporting_2280_; 
v_isExporting_2280_ = lean_ctor_get_uint8(v_env_2278_, sizeof(void*)*8);
if (v_isExporting_2280_ == 0)
{
lean_object* v___x_2281_; 
lean_dec_ref(v_env_2278_);
lean_dec(v_declHint_2273_);
v___x_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2281_, 0, v_msg_2272_);
return v___x_2281_;
}
else
{
lean_object* v___x_2282_; uint8_t v___x_2283_; 
lean_inc_ref(v_env_2278_);
v___x_2282_ = l_Lean_Environment_setExporting(v_env_2278_, v___x_2279_);
lean_inc(v_declHint_2273_);
lean_inc_ref(v___x_2282_);
v___x_2283_ = l_Lean_Environment_contains(v___x_2282_, v_declHint_2273_, v_isExporting_2280_);
if (v___x_2283_ == 0)
{
lean_object* v___x_2284_; 
lean_dec_ref(v___x_2282_);
lean_dec_ref(v_env_2278_);
lean_dec(v_declHint_2273_);
v___x_2284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2284_, 0, v_msg_2272_);
return v___x_2284_;
}
else
{
lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v_c_2290_; lean_object* v___x_2291_; 
v___x_2285_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1);
v___x_2286_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2);
v___x_2287_ = l_Lean_Options_empty;
v___x_2288_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2282_);
lean_ctor_set(v___x_2288_, 1, v___x_2285_);
lean_ctor_set(v___x_2288_, 2, v___x_2286_);
lean_ctor_set(v___x_2288_, 3, v___x_2287_);
lean_inc(v_declHint_2273_);
v___x_2289_ = l_Lean_MessageData_ofConstName(v_declHint_2273_, v___x_2279_);
v_c_2290_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2290_, 0, v___x_2288_);
lean_ctor_set(v_c_2290_, 1, v___x_2289_);
v___x_2291_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2278_, v_declHint_2273_);
if (lean_obj_tag(v___x_2291_) == 0)
{
lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
lean_dec_ref(v_env_2278_);
lean_dec(v_declHint_2273_);
v___x_2292_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_2293_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2292_);
lean_ctor_set(v___x_2293_, 1, v_c_2290_);
v___x_2294_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3);
v___x_2295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2293_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = l_Lean_MessageData_note(v___x_2295_);
v___x_2297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2297_, 0, v_msg_2272_);
lean_ctor_set(v___x_2297_, 1, v___x_2296_);
v___x_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2297_);
return v___x_2298_;
}
else
{
lean_object* v_val_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2333_; 
v_val_2299_ = lean_ctor_get(v___x_2291_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v___x_2291_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2301_ = v___x_2291_;
v_isShared_2302_ = v_isSharedCheck_2333_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_val_2299_);
lean_dec(v___x_2291_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2333_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v_mod_2305_; uint8_t v___x_2306_; 
v___x_2303_ = l_Lean_Environment_header(v_env_2278_);
lean_dec_ref(v_env_2278_);
v___x_2304_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2303_);
v_mod_2305_ = lean_array_get(v___x_2276_, v___x_2304_, v_val_2299_);
lean_dec(v_val_2299_);
lean_dec_ref(v___x_2304_);
v___x_2306_ = l_Lean_isPrivateName(v_declHint_2273_);
lean_dec(v_declHint_2273_);
if (v___x_2306_ == 0)
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2318_; 
v___x_2307_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5);
v___x_2308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2307_);
lean_ctor_set(v___x_2308_, 1, v_c_2290_);
v___x_2309_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7);
v___x_2310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2308_);
lean_ctor_set(v___x_2310_, 1, v___x_2309_);
v___x_2311_ = l_Lean_MessageData_ofName(v_mod_2305_);
v___x_2312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2310_);
lean_ctor_set(v___x_2312_, 1, v___x_2311_);
v___x_2313_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9);
v___x_2314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2312_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
v___x_2315_ = l_Lean_MessageData_note(v___x_2314_);
v___x_2316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2316_, 0, v_msg_2272_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
if (v_isShared_2302_ == 0)
{
lean_ctor_set_tag(v___x_2301_, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2316_);
v___x_2318_ = v___x_2301_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v___x_2316_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
else
{
lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2331_; 
v___x_2320_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_2321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2320_);
lean_ctor_set(v___x_2321_, 1, v_c_2290_);
v___x_2322_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11);
v___x_2323_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2321_);
lean_ctor_set(v___x_2323_, 1, v___x_2322_);
v___x_2324_ = l_Lean_MessageData_ofName(v_mod_2305_);
v___x_2325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2323_);
lean_ctor_set(v___x_2325_, 1, v___x_2324_);
v___x_2326_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13);
v___x_2327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2325_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
v___x_2328_ = l_Lean_MessageData_note(v___x_2327_);
v___x_2329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2329_, 0, v_msg_2272_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
if (v_isShared_2302_ == 0)
{
lean_ctor_set_tag(v___x_2301_, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2329_);
v___x_2331_ = v___x_2301_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v___x_2329_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2334_; 
lean_dec_ref(v_env_2278_);
lean_dec(v_declHint_2273_);
v___x_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2334_, 0, v_msg_2272_);
return v___x_2334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___boxed(lean_object* v_msg_2335_, lean_object* v_declHint_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_){
_start:
{
lean_object* v_res_2339_; 
v_res_2339_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg(v_msg_2335_, v_declHint_2336_, v___y_2337_);
lean_dec(v___y_2337_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8(lean_object* v_msg_2340_, lean_object* v_declHint_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_){
_start:
{
lean_object* v___x_2345_; lean_object* v_a_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2355_; 
v___x_2345_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg(v_msg_2340_, v_declHint_2341_, v___y_2343_);
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2348_ = v___x_2345_;
v_isShared_2349_ = v_isSharedCheck_2355_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_a_2346_);
lean_dec(v___x_2345_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2355_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2353_; 
v___x_2350_ = l_Lean_unknownIdentifierMessageTag;
v___x_2351_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2350_);
lean_ctor_set(v___x_2351_, 1, v_a_2346_);
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 0, v___x_2351_);
v___x_2353_ = v___x_2348_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___x_2351_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8___boxed(lean_object* v_msg_2356_, lean_object* v_declHint_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_){
_start:
{
lean_object* v_res_2361_; 
v_res_2361_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8(v_msg_2356_, v_declHint_2357_, v___y_2358_, v___y_2359_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg(lean_object* v_ref_2362_, lean_object* v_msg_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v_toCold_2367_; lean_object* v_currRecDepth_2368_; lean_object* v_ref_2369_; uint8_t v_diag_2370_; uint8_t v_suppressElabErrors_2371_; lean_object* v_ref_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; 
v_toCold_2367_ = lean_ctor_get(v___y_2364_, 0);
v_currRecDepth_2368_ = lean_ctor_get(v___y_2364_, 1);
v_ref_2369_ = lean_ctor_get(v___y_2364_, 2);
v_diag_2370_ = lean_ctor_get_uint8(v___y_2364_, sizeof(void*)*3);
v_suppressElabErrors_2371_ = lean_ctor_get_uint8(v___y_2364_, sizeof(void*)*3 + 1);
v_ref_2372_ = l_Lean_replaceRef(v_ref_2362_, v_ref_2369_);
lean_inc(v_currRecDepth_2368_);
lean_inc_ref(v_toCold_2367_);
v___x_2373_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2373_, 0, v_toCold_2367_);
lean_ctor_set(v___x_2373_, 1, v_currRecDepth_2368_);
lean_ctor_set(v___x_2373_, 2, v_ref_2372_);
lean_ctor_set_uint8(v___x_2373_, sizeof(void*)*3, v_diag_2370_);
lean_ctor_set_uint8(v___x_2373_, sizeof(void*)*3 + 1, v_suppressElabErrors_2371_);
v___x_2374_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(v_msg_2363_, v___x_2373_, v___y_2365_);
lean_dec_ref_known(v___x_2373_, 3);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg___boxed(lean_object* v_ref_2375_, lean_object* v_msg_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg(v_ref_2375_, v_msg_2376_, v___y_2377_, v___y_2378_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
lean_dec(v_ref_2375_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg(lean_object* v_ref_2381_, lean_object* v_msg_2382_, lean_object* v_declHint_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_){
_start:
{
lean_object* v___x_2387_; lean_object* v_a_2388_; lean_object* v___x_2389_; 
v___x_2387_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8(v_msg_2382_, v_declHint_2383_, v___y_2384_, v___y_2385_);
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2388_);
lean_dec_ref(v___x_2387_);
v___x_2389_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg(v_ref_2381_, v_a_2388_, v___y_2384_, v___y_2385_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg___boxed(lean_object* v_ref_2390_, lean_object* v_msg_2391_, lean_object* v_declHint_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg(v_ref_2390_, v_msg_2391_, v_declHint_2392_, v___y_2393_, v___y_2394_);
lean_dec(v___y_2394_);
lean_dec_ref(v___y_2393_);
lean_dec(v_ref_2390_);
return v_res_2396_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2398_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_2399_ = l_Lean_stringToMessageData(v___x_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_2400_, lean_object* v_constName_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v___x_2405_; uint8_t v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; 
v___x_2405_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_2406_ = 0;
lean_inc(v_constName_2401_);
v___x_2407_ = l_Lean_MessageData_ofConstName(v_constName_2401_, v___x_2406_);
v___x_2408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2405_);
lean_ctor_set(v___x_2408_, 1, v___x_2407_);
v___x_2409_ = lean_obj_once(&l_Lean_Compiler_LCNF_nameToImpureType___closed__1, &l_Lean_Compiler_LCNF_nameToImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__1);
v___x_2410_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2408_);
lean_ctor_set(v___x_2410_, 1, v___x_2409_);
v___x_2411_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg(v_ref_2400_, v___x_2410_, v_constName_2401_, v___y_2402_, v___y_2403_);
return v___x_2411_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_2412_, lean_object* v_constName_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_){
_start:
{
lean_object* v_res_2417_; 
v_res_2417_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg(v_ref_2412_, v_constName_2413_, v___y_2414_, v___y_2415_);
lean_dec(v___y_2415_);
lean_dec_ref(v___y_2414_);
lean_dec(v_ref_2412_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg(lean_object* v_constName_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
lean_object* v_ref_2422_; lean_object* v___x_2423_; 
v_ref_2422_ = lean_ctor_get(v___y_2419_, 2);
v___x_2423_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg(v_ref_2422_, v_constName_2418_, v___y_2419_, v___y_2420_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg___boxed(lean_object* v_constName_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg(v_constName_2424_, v___y_2425_, v___y_2426_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0(lean_object* v_constName_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v___x_2433_; lean_object* v_env_2434_; uint8_t v___x_2435_; lean_object* v___x_2436_; 
v___x_2433_ = lean_st_ref_get(v___y_2431_);
v_env_2434_ = lean_ctor_get(v___x_2433_, 0);
lean_inc_ref(v_env_2434_);
lean_dec(v___x_2433_);
v___x_2435_ = 0;
lean_inc(v_constName_2429_);
v___x_2436_ = l_Lean_Environment_find_x3f(v_env_2434_, v_constName_2429_, v___x_2435_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v___x_2437_; 
v___x_2437_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg(v_constName_2429_, v___y_2430_, v___y_2431_);
return v___x_2437_;
}
else
{
lean_object* v_val_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2445_; 
lean_dec(v_constName_2429_);
v_val_2438_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2440_ = v___x_2436_;
v_isShared_2441_ = v_isSharedCheck_2445_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_val_2438_);
lean_dec(v___x_2436_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2445_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v___x_2443_; 
if (v_isShared_2441_ == 0)
{
lean_ctor_set_tag(v___x_2440_, 0);
v___x_2443_ = v___x_2440_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v_val_2438_);
v___x_2443_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
return v___x_2443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0___boxed(lean_object* v_constName_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0(v_constName_2446_, v___y_2447_, v___y_2448_);
lean_dec(v___y_2448_);
lean_dec_ref(v___y_2447_);
return v_res_2450_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2452_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__2));
v___x_2453_ = lean_unsigned_to_nat(49u);
v___x_2454_ = lean_unsigned_to_nat(303u);
v___x_2455_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__0));
v___x_2456_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___closed__0));
v___x_2457_ = l_mkPanicMessageWithDecl(v___x_2456_, v___x_2455_, v___x_2454_, v___x_2453_, v___x_2452_);
return v___x_2457_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4(lean_object* v_as_2458_, size_t v_sz_2459_, size_t v_i_2460_, lean_object* v_b_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_){
_start:
{
lean_object* v_a_2466_; uint8_t v___x_2470_; 
v___x_2470_ = lean_usize_dec_lt(v_i_2460_, v_sz_2459_);
if (v___x_2470_ == 0)
{
lean_object* v___x_2471_; 
v___x_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2471_, 0, v_b_2461_);
return v___x_2471_;
}
else
{
lean_object* v___x_2472_; lean_object* v_a_2473_; lean_object* v___x_2474_; 
v___x_2472_ = lean_box(0);
v_a_2473_ = lean_array_uget_borrowed(v_as_2458_, v_i_2460_);
lean_inc(v_a_2473_);
v___x_2474_ = l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0(v_a_2473_, v___y_2462_, v___y_2463_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
if (lean_obj_tag(v_a_2475_) == 5)
{
lean_object* v_val_2476_; lean_object* v_ctors_2477_; lean_object* v___x_2478_; 
v_val_2476_ = lean_ctor_get(v_a_2475_, 0);
lean_inc_ref(v_val_2476_);
lean_dec_ref_known(v_a_2475_, 1);
v_ctors_2477_ = lean_ctor_get(v_val_2476_, 4);
lean_inc(v_ctors_2477_);
lean_dec_ref(v_val_2476_);
v___x_2478_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg(v_ctors_2477_, v___x_2472_, v___y_2462_, v___y_2463_);
lean_dec(v_ctors_2477_);
if (lean_obj_tag(v___x_2478_) == 0)
{
lean_dec_ref_known(v___x_2478_, 1);
v_a_2466_ = v___x_2472_;
goto v___jp_2465_;
}
else
{
return v___x_2478_;
}
}
else
{
lean_object* v___x_2479_; lean_object* v___x_2480_; 
lean_dec(v_a_2475_);
v___x_2479_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1);
v___x_2480_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0(v___x_2479_, v___y_2462_, v___y_2463_);
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_dec_ref_known(v___x_2480_, 1);
v_a_2466_ = v___x_2472_;
goto v___jp_2465_;
}
else
{
return v___x_2480_;
}
}
}
else
{
lean_object* v_a_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2488_; 
v_a_2481_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2483_ = v___x_2474_;
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_a_2481_);
lean_dec(v___x_2474_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2486_; 
if (v_isShared_2484_ == 0)
{
v___x_2486_ = v___x_2483_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2481_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
v___jp_2465_:
{
size_t v___x_2467_; size_t v___x_2468_; 
v___x_2467_ = ((size_t)1ULL);
v___x_2468_ = lean_usize_add(v_i_2460_, v___x_2467_);
v_i_2460_ = v___x_2468_;
v_b_2461_ = v_a_2466_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___boxed(lean_object* v_as_2489_, lean_object* v_sz_2490_, lean_object* v_i_2491_, lean_object* v_b_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
size_t v_sz_boxed_2496_; size_t v_i_boxed_2497_; lean_object* v_res_2498_; 
v_sz_boxed_2496_ = lean_unbox_usize(v_sz_2490_);
lean_dec(v_sz_2490_);
v_i_boxed_2497_ = lean_unbox_usize(v_i_2491_);
lean_dec(v_i_2491_);
v_res_2498_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4(v_as_2489_, v_sz_boxed_2496_, v_i_boxed_2497_, v_b_2492_, v___y_2493_, v___y_2494_);
lean_dec(v___y_2494_);
lean_dec_ref(v___y_2493_);
lean_dec_ref(v_as_2489_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3(lean_object* v_as_2499_, size_t v_sz_2500_, size_t v_i_2501_, lean_object* v_b_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_){
_start:
{
uint8_t v___x_2506_; 
v___x_2506_ = lean_usize_dec_lt(v_i_2501_, v_sz_2500_);
if (v___x_2506_ == 0)
{
lean_object* v___x_2507_; 
v___x_2507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2507_, 0, v_b_2502_);
return v___x_2507_;
}
else
{
lean_object* v___x_2508_; lean_object* v_a_2509_; lean_object* v___x_2510_; 
v___x_2508_ = lean_box(0);
v_a_2509_ = lean_array_uget_borrowed(v_as_2499_, v_i_2501_);
lean_inc(v_a_2509_);
v___x_2510_ = l_Lean_Compiler_LCNF_setOtherDeclMonoType(v_a_2509_, v___y_2503_, v___y_2504_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v___x_2511_; 
lean_dec_ref_known(v___x_2510_, 1);
lean_inc(v_a_2509_);
v___x_2511_ = l_Lean_Compiler_LCNF_setImpureType(v_a_2509_, v___y_2503_, v___y_2504_);
if (lean_obj_tag(v___x_2511_) == 0)
{
size_t v___x_2512_; size_t v___x_2513_; 
lean_dec_ref_known(v___x_2511_, 1);
v___x_2512_ = ((size_t)1ULL);
v___x_2513_ = lean_usize_add(v_i_2501_, v___x_2512_);
v_i_2501_ = v___x_2513_;
v_b_2502_ = v___x_2508_;
goto _start;
}
else
{
return v___x_2511_;
}
}
else
{
return v___x_2510_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3___boxed(lean_object* v_as_2515_, lean_object* v_sz_2516_, lean_object* v_i_2517_, lean_object* v_b_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_){
_start:
{
size_t v_sz_boxed_2522_; size_t v_i_boxed_2523_; lean_object* v_res_2524_; 
v_sz_boxed_2522_ = lean_unbox_usize(v_sz_2516_);
lean_dec(v_sz_2516_);
v_i_boxed_2523_ = lean_unbox_usize(v_i_2517_);
lean_dec(v_i_2517_);
v_res_2524_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3(v_as_2515_, v_sz_boxed_2522_, v_i_boxed_2523_, v_b_2518_, v___y_2519_, v___y_2520_);
lean_dec(v___y_2520_);
lean_dec_ref(v___y_2519_);
lean_dec_ref(v_as_2515_);
return v_res_2524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(lean_object* v_as_2525_, size_t v_i_2526_, size_t v_stop_2527_, lean_object* v_b_2528_, lean_object* v___y_2529_){
_start:
{
lean_object* v_a_2532_; uint8_t v___x_2536_; 
v___x_2536_ = lean_usize_dec_eq(v_i_2526_, v_stop_2527_);
if (v___x_2536_ == 0)
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v_env_2539_; lean_object* v___x_2540_; 
v___x_2537_ = lean_array_uget_borrowed(v_as_2525_, v_i_2526_);
v___x_2538_ = lean_st_ref_get(v___y_2529_);
v_env_2539_ = lean_ctor_get(v___x_2538_, 0);
lean_inc_ref(v_env_2539_);
lean_dec(v___x_2538_);
lean_inc(v___x_2537_);
v___x_2540_ = l_Lean_Environment_find_x3f(v_env_2539_, v___x_2537_, v___x_2536_);
if (lean_obj_tag(v___x_2540_) == 1)
{
lean_object* v_val_2541_; 
v_val_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_val_2541_);
lean_dec_ref_known(v___x_2540_, 1);
if (lean_obj_tag(v_val_2541_) == 5)
{
lean_object* v___x_2542_; 
lean_dec_ref_known(v_val_2541_, 1);
lean_inc(v___x_2537_);
v___x_2542_ = lean_array_push(v_b_2528_, v___x_2537_);
v_a_2532_ = v___x_2542_;
goto v___jp_2531_;
}
else
{
lean_dec(v_val_2541_);
v_a_2532_ = v_b_2528_;
goto v___jp_2531_;
}
}
else
{
lean_dec(v___x_2540_);
v_a_2532_ = v_b_2528_;
goto v___jp_2531_;
}
}
else
{
lean_object* v___x_2543_; 
v___x_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2543_, 0, v_b_2528_);
return v___x_2543_;
}
v___jp_2531_:
{
size_t v___x_2533_; size_t v___x_2534_; 
v___x_2533_ = ((size_t)1ULL);
v___x_2534_ = lean_usize_add(v_i_2526_, v___x_2533_);
v_i_2526_ = v___x_2534_;
v_b_2528_ = v_a_2532_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg___boxed(lean_object* v_as_2544_, lean_object* v_i_2545_, lean_object* v_stop_2546_, lean_object* v_b_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_){
_start:
{
size_t v_i_boxed_2550_; size_t v_stop_boxed_2551_; lean_object* v_res_2552_; 
v_i_boxed_2550_ = lean_unbox_usize(v_i_2545_);
lean_dec(v_i_2545_);
v_stop_boxed_2551_ = lean_unbox_usize(v_stop_2546_);
lean_dec(v_stop_2546_);
v_res_2552_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(v_as_2544_, v_i_boxed_2550_, v_stop_boxed_2551_, v_b_2547_, v___y_2548_);
lean_dec(v___y_2548_);
lean_dec_ref(v_as_2544_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_compileInductives(lean_object* v_typeNames_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_){
_start:
{
lean_object* v_a_2560_; lean_object* v___y_2576_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; uint8_t v___x_2589_; 
v___x_2586_ = lean_unsigned_to_nat(0u);
v___x_2587_ = lean_array_get_size(v_typeNames_2555_);
v___x_2588_ = ((lean_object*)(l_Lean_Compiler_LCNF_compileInductives___closed__0));
v___x_2589_ = lean_nat_dec_lt(v___x_2586_, v___x_2587_);
if (v___x_2589_ == 0)
{
v_a_2560_ = v___x_2588_;
goto v___jp_2559_;
}
else
{
uint8_t v___x_2590_; 
v___x_2590_ = lean_nat_dec_le(v___x_2587_, v___x_2587_);
if (v___x_2590_ == 0)
{
if (v___x_2589_ == 0)
{
v_a_2560_ = v___x_2588_;
goto v___jp_2559_;
}
else
{
size_t v___x_2591_; size_t v___x_2592_; lean_object* v___x_2593_; 
v___x_2591_ = ((size_t)0ULL);
v___x_2592_ = lean_usize_of_nat(v___x_2587_);
v___x_2593_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(v_typeNames_2555_, v___x_2591_, v___x_2592_, v___x_2588_, v_a_2557_);
v___y_2576_ = v___x_2593_;
goto v___jp_2575_;
}
}
else
{
size_t v___x_2594_; size_t v___x_2595_; lean_object* v___x_2596_; 
v___x_2594_ = ((size_t)0ULL);
v___x_2595_ = lean_usize_of_nat(v___x_2587_);
v___x_2596_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(v_typeNames_2555_, v___x_2594_, v___x_2595_, v___x_2588_, v_a_2557_);
v___y_2576_ = v___x_2596_;
goto v___jp_2575_;
}
}
v___jp_2559_:
{
lean_object* v___x_2561_; size_t v_sz_2562_; size_t v___x_2563_; lean_object* v___x_2564_; 
v___x_2561_ = lean_box(0);
v_sz_2562_ = lean_array_size(v_a_2560_);
v___x_2563_ = ((size_t)0ULL);
v___x_2564_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2(v_a_2560_, v_sz_2562_, v___x_2563_, v___x_2561_, v_a_2556_, v_a_2557_);
if (lean_obj_tag(v___x_2564_) == 0)
{
lean_object* v___x_2565_; 
lean_dec_ref_known(v___x_2564_, 1);
v___x_2565_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3(v_a_2560_, v_sz_2562_, v___x_2563_, v___x_2561_, v_a_2556_, v_a_2557_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v___x_2566_; 
lean_dec_ref_known(v___x_2565_, 1);
v___x_2566_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4(v_a_2560_, v_sz_2562_, v___x_2563_, v___x_2561_, v_a_2556_, v_a_2557_);
lean_dec_ref(v_a_2560_);
if (lean_obj_tag(v___x_2566_) == 0)
{
lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2566_);
if (v_isSharedCheck_2573_ == 0)
{
lean_object* v_unused_2574_; 
v_unused_2574_ = lean_ctor_get(v___x_2566_, 0);
lean_dec(v_unused_2574_);
v___x_2568_ = v___x_2566_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_dec(v___x_2566_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
lean_ctor_set(v___x_2568_, 0, v___x_2561_);
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v___x_2561_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
else
{
return v___x_2566_;
}
}
else
{
lean_dec_ref(v_a_2560_);
return v___x_2565_;
}
}
else
{
lean_dec_ref(v_a_2560_);
return v___x_2564_;
}
}
v___jp_2575_:
{
if (lean_obj_tag(v___y_2576_) == 0)
{
lean_object* v_a_2577_; 
v_a_2577_ = lean_ctor_get(v___y_2576_, 0);
lean_inc(v_a_2577_);
lean_dec_ref_known(v___y_2576_, 1);
v_a_2560_ = v_a_2577_;
goto v___jp_2559_;
}
else
{
lean_object* v_a_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2585_; 
v_a_2578_ = lean_ctor_get(v___y_2576_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___y_2576_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2580_ = v___y_2576_;
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_a_2578_);
lean_dec(v___y_2576_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2583_; 
if (v_isShared_2581_ == 0)
{
v___x_2583_ = v___x_2580_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_a_2578_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_compileInductives___boxed(lean_object* v_typeNames_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_){
_start:
{
lean_object* v_res_2601_; 
v_res_2601_ = l_Lean_Compiler_LCNF_compileInductives(v_typeNames_2597_, v_a_2598_, v_a_2599_);
lean_dec(v_a_2599_);
lean_dec_ref(v_a_2598_);
lean_dec_ref(v_typeNames_2597_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1(lean_object* v_as_2602_, lean_object* v_as_x27_2603_, lean_object* v_b_2604_, lean_object* v_a_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v___x_2609_; 
v___x_2609_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg(v_as_x27_2603_, v_b_2604_, v___y_2606_, v___y_2607_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___boxed(lean_object* v_as_2610_, lean_object* v_as_x27_2611_, lean_object* v_b_2612_, lean_object* v_a_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1(v_as_2610_, v_as_x27_2611_, v_b_2612_, v_a_2613_, v___y_2614_, v___y_2615_);
lean_dec(v___y_2615_);
lean_dec_ref(v___y_2614_);
lean_dec(v_as_x27_2611_);
lean_dec(v_as_2610_);
return v_res_2617_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5(lean_object* v_as_2618_, size_t v_i_2619_, size_t v_stop_2620_, lean_object* v_b_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_){
_start:
{
lean_object* v___x_2625_; 
v___x_2625_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(v_as_2618_, v_i_2619_, v_stop_2620_, v_b_2621_, v___y_2623_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___boxed(lean_object* v_as_2626_, lean_object* v_i_2627_, lean_object* v_stop_2628_, lean_object* v_b_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
size_t v_i_boxed_2633_; size_t v_stop_boxed_2634_; lean_object* v_res_2635_; 
v_i_boxed_2633_ = lean_unbox_usize(v_i_2627_);
lean_dec(v_i_2627_);
v_stop_boxed_2634_ = lean_unbox_usize(v_stop_2628_);
lean_dec(v_stop_2628_);
v_res_2635_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5(v_as_2626_, v_i_boxed_2633_, v_stop_boxed_2634_, v_b_2629_, v___y_2630_, v___y_2631_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec_ref(v_as_2626_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0(lean_object* v_00_u03b1_2636_, lean_object* v_constName_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_){
_start:
{
lean_object* v___x_2641_; 
v___x_2641_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg(v_constName_2637_, v___y_2638_, v___y_2639_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2642_, lean_object* v_constName_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0(v_00_u03b1_2642_, v_constName_2643_, v___y_2644_, v___y_2645_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2648_, lean_object* v_ref_2649_, lean_object* v_constName_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_){
_start:
{
lean_object* v___x_2654_; 
v___x_2654_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg(v_ref_2649_, v_constName_2650_, v___y_2651_, v___y_2652_);
return v___x_2654_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2655_, lean_object* v_ref_2656_, lean_object* v_constName_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_){
_start:
{
lean_object* v_res_2661_; 
v_res_2661_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1(v_00_u03b1_2655_, v_ref_2656_, v_constName_2657_, v___y_2658_, v___y_2659_);
lean_dec(v___y_2659_);
lean_dec_ref(v___y_2658_);
lean_dec(v_ref_2656_);
return v_res_2661_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7(lean_object* v_00_u03b1_2662_, lean_object* v_ref_2663_, lean_object* v_msg_2664_, lean_object* v_declHint_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_){
_start:
{
lean_object* v___x_2669_; 
v___x_2669_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg(v_ref_2663_, v_msg_2664_, v_declHint_2665_, v___y_2666_, v___y_2667_);
return v___x_2669_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___boxed(lean_object* v_00_u03b1_2670_, lean_object* v_ref_2671_, lean_object* v_msg_2672_, lean_object* v_declHint_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7(v_00_u03b1_2670_, v_ref_2671_, v_msg_2672_, v_declHint_2673_, v___y_2674_, v___y_2675_);
lean_dec(v___y_2675_);
lean_dec_ref(v___y_2674_);
lean_dec(v_ref_2671_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9(lean_object* v_msg_2678_, lean_object* v_declHint_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_){
_start:
{
lean_object* v___x_2683_; 
v___x_2683_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg(v_msg_2678_, v_declHint_2679_, v___y_2681_);
return v___x_2683_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_2684_, lean_object* v_declHint_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9(v_msg_2684_, v_declHint_2685_, v___y_2686_, v___y_2687_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9(lean_object* v_00_u03b1_2690_, lean_object* v_ref_2691_, lean_object* v_msg_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
lean_object* v___x_2696_; 
v___x_2696_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg(v_ref_2691_, v_msg_2692_, v___y_2693_, v___y_2694_);
return v___x_2696_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___boxed(lean_object* v_00_u03b1_2697_, lean_object* v_ref_2698_, lean_object* v_msg_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
lean_object* v_res_2703_; 
v_res_2703_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9(v_00_u03b1_2697_, v_ref_2698_, v_msg_2699_, v___y_2700_, v___y_2701_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec(v_ref_2698_);
return v_res_2703_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Irrelevant(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ToImpureType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Irrelevant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTrivialStructureInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTrivialStructureInfoExt);
lean_dec_ref(res);
l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo_default = _init_l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo_default);
l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo = _init_l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo);
l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default = _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default);
l_Lean_Compiler_LCNF_instInhabitedCtorLayout = _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedCtorLayout);
res = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_ctorLayoutExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_ctorLayoutExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ToImpureType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Irrelevant(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ToImpureType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Irrelevant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToImpureType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ToImpureType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ToImpureType(builtin);
}
#ifdef __cplusplus
}
#endif
