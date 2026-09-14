// Lean compiler output
// Module: Lean.Meta.Constructions.SparseCasesOn
// Imports: public import Lean.Meta.Basic import Lean.AddDecl import Lean.Meta.Constructions.CtorIdx import Lean.Meta.HasNotBit import Lean.Meta.Transform
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
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
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_mkHasNotBitProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_Environment_hasExposedBody(lean_object*, lean_object*);
lean_object* l_Lean_NameMap_toArray___redArg(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_DeclNameGenerator_mkUniqueName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkHasNotBit(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_value_x21(lean_object*, uint8_t);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_markSparseCasesOn(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_mkCtorIdxName(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey___closed__0_value;
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash_spec__0(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_sparseCasesOnCacheExt;
static const lean_array_object l_Lean_Meta_instInhabitedSparseCasesOnInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedSparseCasesOnInfo_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedSparseCasesOnInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedSparseCasesOnInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedSparseCasesOnInfo_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_instInhabitedSparseCasesOnInfo_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedSparseCasesOnInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedSparseCasesOnInfo_default = (const lean_object*)&l_Lean_Meta_instInhabitedSparseCasesOnInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedSparseCasesOnInfo = (const lean_object*)&l_Lean_Meta_instInhabitedSparseCasesOnInfo_default___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Constructions"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(224, 107, 212, 234, 74, 49, 105, 87)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "SparseCasesOn"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 142, 211, 52, 27, 176, 89, 6)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(93, 38, 184, 128, 76, 32, 215, 209)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 79, 91, 86, 222, 171, 161, 209)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 83, 47, 52, 170, 238, 223, 102)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "sparseCasesOnInfoExt"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 231, 162, 79, 58, 254, 239, 178)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_sparseCasesOnInfoExt;
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_mkSparseCasesOn_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_mkSparseCasesOn_spec__16___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_mkSparseCasesOn_spec__16___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkSparseCasesOn_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkSparseCasesOn_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10_spec__26___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__8(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkSparseCasesOn___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkSparseCasesOn___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkSparseCasesOn___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___lam__2___closed__1_value;
static const lean_string_object l_Lean_Meta_mkSparseCasesOn___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___lam__2___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkSparseCasesOn___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkSparseCasesOn___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 140, 41, 106, 106, 114, 66, 206)}};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2___closed__3 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___lam__2___closed__3_value;
static const lean_array_object l_Lean_Meta_mkSparseCasesOn___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2___closed__4 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___lam__2___closed__4_value;
static const lean_string_object l_Lean_Meta_mkSparseCasesOn___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "mkSparseCasesOn: unexpected number of parameters in type of `"};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2___closed__5 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___lam__2___closed__5_value;
static lean_once_cell_t l_Lean_Meta_mkSparseCasesOn___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_mkSparseCasesOn_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_mkSparseCasesOn_spec__17___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "mkSparseCasesOn: constructor "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = " is not a constructor of "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkSparseCasesOn_spec__6(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__0;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__1;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkSparseCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Meta.Constructions.SparseCasesOn"};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___closed__0 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___closed__0_value;
static const lean_string_object l_Lean_Meta_mkSparseCasesOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.mkSparseCasesOn"};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___closed__1 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___closed__1_value;
static lean_once_cell_t l_Lean_Meta_mkSparseCasesOn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkSparseCasesOn___closed__2;
static const lean_string_object l_Lean_Meta_mkSparseCasesOn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "mkSparseCasesOn: unexpected number of universe parameters in `"};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___closed__3 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___closed__3_value;
static lean_once_cell_t l_Lean_Meta_mkSparseCasesOn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkSparseCasesOn___closed__4;
static lean_once_cell_t l_Lean_Meta_mkSparseCasesOn___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkSparseCasesOn___closed__5;
static const lean_string_object l_Lean_Meta_mkSparseCasesOn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "_sparseCasesOn"};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___closed__6 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___closed__6_value;
static const lean_ctor_object l_Lean_Meta_mkSparseCasesOn___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkSparseCasesOn___closed__6_value),LEAN_SCALAR_PTR_LITERAL(111, 99, 43, 146, 60, 255, 155, 135)}};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___closed__7 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___closed__7_value;
static const lean_string_object l_Lean_Meta_mkSparseCasesOn___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "mkSparseCasesOn: requested casesOn combinator is not sparse"};
static const lean_object* l_Lean_Meta_mkSparseCasesOn___closed__8 = (const lean_object*)&l_Lean_Meta_mkSparseCasesOn___closed__8_value;
static lean_once_cell_t l_Lean_Meta_mkSparseCasesOn___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkSparseCasesOn___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnInfoCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnInfo___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnInfo___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnInfo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0___redArg(lean_object* v_xs_1_, lean_object* v_ys_2_, lean_object* v_x_3_){
_start:
{
lean_object* v_zero_4_; uint8_t v_isZero_5_; 
v_zero_4_ = lean_unsigned_to_nat(0u);
v_isZero_5_ = lean_nat_dec_eq(v_x_3_, v_zero_4_);
if (v_isZero_5_ == 1)
{
lean_dec(v_x_3_);
return v_isZero_5_;
}
else
{
lean_object* v_one_6_; lean_object* v_n_7_; lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v_one_6_ = lean_unsigned_to_nat(1u);
v_n_7_ = lean_nat_sub(v_x_3_, v_one_6_);
lean_dec(v_x_3_);
v___x_8_ = lean_array_fget_borrowed(v_xs_1_, v_n_7_);
v___x_9_ = lean_array_fget_borrowed(v_ys_2_, v_n_7_);
v___x_10_ = lean_name_eq(v___x_8_, v___x_9_);
if (v___x_10_ == 0)
{
lean_dec(v_n_7_);
return v___x_10_;
}
else
{
v_x_3_ = v_n_7_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0___redArg___boxed(lean_object* v_xs_12_, lean_object* v_ys_13_, lean_object* v_x_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0___redArg(v_xs_12_, v_ys_13_, v_x_14_);
lean_dec_ref(v_ys_13_);
lean_dec_ref(v_xs_12_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq(lean_object* v_x_17_, lean_object* v_x_18_){
_start:
{
lean_object* v_indName_19_; lean_object* v_ctors_20_; uint8_t v_isPrivate_21_; lean_object* v_indName_22_; lean_object* v_ctors_23_; uint8_t v_isPrivate_24_; uint8_t v___x_25_; 
v_indName_19_ = lean_ctor_get(v_x_17_, 0);
v_ctors_20_ = lean_ctor_get(v_x_17_, 1);
v_isPrivate_21_ = lean_ctor_get_uint8(v_x_17_, sizeof(void*)*2);
v_indName_22_ = lean_ctor_get(v_x_18_, 0);
v_ctors_23_ = lean_ctor_get(v_x_18_, 1);
v_isPrivate_24_ = lean_ctor_get_uint8(v_x_18_, sizeof(void*)*2);
v___x_25_ = lean_name_eq(v_indName_19_, v_indName_22_);
if (v___x_25_ == 0)
{
return v___x_25_;
}
else
{
lean_object* v___x_26_; lean_object* v___x_27_; uint8_t v___x_28_; 
v___x_26_ = lean_array_get_size(v_ctors_20_);
v___x_27_ = lean_array_get_size(v_ctors_23_);
v___x_28_ = lean_nat_dec_eq(v___x_26_, v___x_27_);
if (v___x_28_ == 0)
{
return v___x_28_;
}
else
{
uint8_t v___x_29_; 
v___x_29_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0___redArg(v_ctors_20_, v_ctors_23_, v___x_26_);
if (v___x_29_ == 0)
{
return v___x_29_;
}
else
{
if (v_isPrivate_24_ == 0)
{
if (v_isPrivate_21_ == 0)
{
return v___x_29_;
}
else
{
return v_isPrivate_24_;
}
}
else
{
return v_isPrivate_21_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq___boxed(lean_object* v_x_30_, lean_object* v_x_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq(v_x_30_, v_x_31_);
lean_dec_ref(v_x_31_);
lean_dec_ref(v_x_30_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0(lean_object* v_xs_34_, lean_object* v_ys_35_, lean_object* v_hsz_36_, lean_object* v_x_37_, lean_object* v_x_38_){
_start:
{
uint8_t v___x_39_; 
v___x_39_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0___redArg(v_xs_34_, v_ys_35_, v_x_37_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0___boxed(lean_object* v_xs_40_, lean_object* v_ys_41_, lean_object* v_hsz_42_, lean_object* v_x_43_, lean_object* v_x_44_){
_start:
{
uint8_t v_res_45_; lean_object* v_r_46_; 
v_res_45_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq_spec__0(v_xs_40_, v_ys_41_, v_hsz_42_, v_x_43_, v_x_44_);
lean_dec_ref(v_ys_41_);
lean_dec_ref(v_xs_40_);
v_r_46_ = lean_box(v_res_45_);
return v_r_46_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash_spec__0(lean_object* v_as_49_, size_t v_i_50_, size_t v_stop_51_, uint64_t v_b_52_){
_start:
{
uint64_t v___y_54_; uint8_t v___x_59_; 
v___x_59_ = lean_usize_dec_eq(v_i_50_, v_stop_51_);
if (v___x_59_ == 0)
{
lean_object* v___x_60_; 
v___x_60_ = lean_array_uget_borrowed(v_as_49_, v_i_50_);
if (lean_obj_tag(v___x_60_) == 0)
{
uint64_t v___x_61_; 
v___x_61_ = 1723ULL;
v___y_54_ = v___x_61_;
goto v___jp_53_;
}
else
{
uint64_t v_hash_62_; 
v_hash_62_ = lean_ctor_get_uint64(v___x_60_, sizeof(void*)*2);
v___y_54_ = v_hash_62_;
goto v___jp_53_;
}
}
else
{
return v_b_52_;
}
v___jp_53_:
{
uint64_t v___x_55_; size_t v___x_56_; size_t v___x_57_; 
v___x_55_ = lean_uint64_mix_hash(v_b_52_, v___y_54_);
v___x_56_ = ((size_t)1ULL);
v___x_57_ = lean_usize_add(v_i_50_, v___x_56_);
v_i_50_ = v___x_57_;
v_b_52_ = v___x_55_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash_spec__0___boxed(lean_object* v_as_63_, lean_object* v_i_64_, lean_object* v_stop_65_, lean_object* v_b_66_){
_start:
{
size_t v_i_boxed_67_; size_t v_stop_boxed_68_; uint64_t v_b_boxed_69_; uint64_t v_res_70_; lean_object* v_r_71_; 
v_i_boxed_67_ = lean_unbox_usize(v_i_64_);
lean_dec(v_i_64_);
v_stop_boxed_68_ = lean_unbox_usize(v_stop_65_);
lean_dec(v_stop_65_);
v_b_boxed_69_ = lean_unbox_uint64(v_b_66_);
lean_dec_ref(v_b_66_);
v_res_70_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash_spec__0(v_as_63_, v_i_boxed_67_, v_stop_boxed_68_, v_b_boxed_69_);
lean_dec_ref(v_as_63_);
v_r_71_ = lean_box_uint64(v_res_70_);
return v_r_71_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash(lean_object* v_x_72_){
_start:
{
lean_object* v_indName_73_; lean_object* v_ctors_74_; uint8_t v_isPrivate_75_; uint64_t v___y_77_; uint64_t v___y_78_; uint64_t v___x_84_; uint64_t v___y_86_; 
v_indName_73_ = lean_ctor_get(v_x_72_, 0);
v_ctors_74_ = lean_ctor_get(v_x_72_, 1);
v_isPrivate_75_ = lean_ctor_get_uint8(v_x_72_, sizeof(void*)*2);
v___x_84_ = 0ULL;
if (lean_obj_tag(v_indName_73_) == 0)
{
uint64_t v___x_95_; 
v___x_95_ = 1723ULL;
v___y_86_ = v___x_95_;
goto v___jp_85_;
}
else
{
uint64_t v_hash_96_; 
v_hash_96_ = lean_ctor_get_uint64(v_indName_73_, sizeof(void*)*2);
v___y_86_ = v_hash_96_;
goto v___jp_85_;
}
v___jp_76_:
{
uint64_t v___x_79_; 
v___x_79_ = lean_uint64_mix_hash(v___y_77_, v___y_78_);
if (v_isPrivate_75_ == 0)
{
uint64_t v___x_80_; uint64_t v___x_81_; 
v___x_80_ = 13ULL;
v___x_81_ = lean_uint64_mix_hash(v___x_79_, v___x_80_);
return v___x_81_;
}
else
{
uint64_t v___x_82_; uint64_t v___x_83_; 
v___x_82_ = 11ULL;
v___x_83_ = lean_uint64_mix_hash(v___x_79_, v___x_82_);
return v___x_83_;
}
}
v___jp_85_:
{
uint64_t v___x_87_; uint64_t v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_87_ = lean_uint64_mix_hash(v___x_84_, v___y_86_);
v___x_88_ = 7ULL;
v___x_89_ = lean_unsigned_to_nat(0u);
v___x_90_ = lean_array_get_size(v_ctors_74_);
v___x_91_ = lean_nat_dec_lt(v___x_89_, v___x_90_);
if (v___x_91_ == 0)
{
v___y_77_ = v___x_87_;
v___y_78_ = v___x_88_;
goto v___jp_76_;
}
else
{
size_t v___x_92_; size_t v___x_93_; uint64_t v___x_94_; 
v___x_92_ = ((size_t)0ULL);
v___x_93_ = lean_usize_of_nat(v___x_90_);
v___x_94_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash_spec__0(v_ctors_74_, v___x_92_, v___x_93_, v___x_88_);
v___y_77_ = v___x_87_;
v___y_78_ = v___x_94_;
goto v___jp_76_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash___boxed(lean_object* v_x_97_){
_start:
{
uint64_t v_res_98_; lean_object* v_r_99_; 
v_res_98_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash(v_x_97_);
lean_dec_ref(v_x_97_);
v_r_99_ = lean_box_uint64(v_res_98_);
return v_r_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_(lean_object* v___x_102_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_104_, 0, v___x_102_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2____boxed(lean_object* v___x_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_(v___x_105_);
return v_res_107_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_108_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_);
v___x_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
return v___x_110_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_111_; lean_object* v___f_112_; 
v___x_111_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_);
v___f_112_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_112_, 0, v___x_111_);
return v___f_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___f_114_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_);
v___x_115_ = lean_box(0);
v___x_116_ = lean_box(1);
v___x_117_ = l_Lean_registerEnvExtension___redArg(v___f_114_, v___x_115_, v___x_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2____boxed(lean_object* v___y_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_();
return v_res_119_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_(lean_object* v_env_128_, lean_object* v_n_129_, lean_object* v_x_130_){
_start:
{
uint8_t v___x_131_; 
v___x_131_ = l_Lean_Environment_hasExposedBody(v_env_128_, v_n_129_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2____boxed(lean_object* v_env_132_, lean_object* v_n_133_, lean_object* v_x_134_){
_start:
{
uint8_t v_res_135_; lean_object* v_r_136_; 
v_res_135_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_(v_env_132_, v_n_133_, v_x_134_);
lean_dec_ref(v_x_134_);
v_r_136_ = lean_box(v_res_135_);
return v_r_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_(lean_object* v_env_137_, lean_object* v_s_138_){
_start:
{
lean_object* v___f_139_; lean_object* v_all_140_; lean_object* v___x_141_; lean_object* v_exported_142_; lean_object* v___x_143_; 
v___f_139_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2____boxed), 3, 1);
lean_closure_set(v___f_139_, 0, v_env_137_);
v_all_140_ = l_Lean_NameMap_toArray___redArg(v_s_138_);
v___x_141_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v___f_139_, v_s_138_);
v_exported_142_ = l_Lean_NameMap_toArray___redArg(v___x_141_);
lean_dec(v___x_141_);
lean_inc_ref(v_exported_142_);
v___x_143_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_143_, 0, v_exported_142_);
lean_ctor_set(v___x_143_, 1, v_exported_142_);
lean_ctor_set(v___x_143_, 2, v_all_140_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___f_181_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_));
v___x_182_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_));
v___x_183_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_));
v___x_184_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_182_, v___x_183_, v___f_181_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2____boxed(lean_object* v___y_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_();
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2___redArg(lean_object* v_kind_187_, lean_object* v___y_188_){
_start:
{
lean_object* v___x_190_; lean_object* v_auxDeclNGen_191_; lean_object* v___x_192_; lean_object* v_env_193_; lean_object* v___x_194_; lean_object* v_fst_195_; lean_object* v_snd_196_; lean_object* v___x_197_; lean_object* v_env_198_; lean_object* v_nextMacroScope_199_; lean_object* v_ngen_200_; lean_object* v_traceState_201_; lean_object* v_cache_202_; lean_object* v_messages_203_; lean_object* v_infoState_204_; lean_object* v_snapshotTasks_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_214_; 
v___x_190_ = lean_st_ref_get(v___y_188_);
v_auxDeclNGen_191_ = lean_ctor_get(v___x_190_, 3);
lean_inc_ref(v_auxDeclNGen_191_);
lean_dec(v___x_190_);
v___x_192_ = lean_st_ref_get(v___y_188_);
v_env_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc_ref(v_env_193_);
lean_dec(v___x_192_);
v___x_194_ = l_Lean_DeclNameGenerator_mkUniqueName(v_env_193_, v_auxDeclNGen_191_, v_kind_187_);
v_fst_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_fst_195_);
v_snd_196_ = lean_ctor_get(v___x_194_, 1);
lean_inc(v_snd_196_);
lean_dec_ref(v___x_194_);
v___x_197_ = lean_st_ref_take(v___y_188_);
v_env_198_ = lean_ctor_get(v___x_197_, 0);
v_nextMacroScope_199_ = lean_ctor_get(v___x_197_, 1);
v_ngen_200_ = lean_ctor_get(v___x_197_, 2);
v_traceState_201_ = lean_ctor_get(v___x_197_, 4);
v_cache_202_ = lean_ctor_get(v___x_197_, 5);
v_messages_203_ = lean_ctor_get(v___x_197_, 6);
v_infoState_204_ = lean_ctor_get(v___x_197_, 7);
v_snapshotTasks_205_ = lean_ctor_get(v___x_197_, 8);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_214_ == 0)
{
lean_object* v_unused_215_; 
v_unused_215_ = lean_ctor_get(v___x_197_, 3);
lean_dec(v_unused_215_);
v___x_207_ = v___x_197_;
v_isShared_208_ = v_isSharedCheck_214_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_snapshotTasks_205_);
lean_inc(v_infoState_204_);
lean_inc(v_messages_203_);
lean_inc(v_cache_202_);
lean_inc(v_traceState_201_);
lean_inc(v_ngen_200_);
lean_inc(v_nextMacroScope_199_);
lean_inc(v_env_198_);
lean_dec(v___x_197_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_214_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 3, v_snd_196_);
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_env_198_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_nextMacroScope_199_);
lean_ctor_set(v_reuseFailAlloc_213_, 2, v_ngen_200_);
lean_ctor_set(v_reuseFailAlloc_213_, 3, v_snd_196_);
lean_ctor_set(v_reuseFailAlloc_213_, 4, v_traceState_201_);
lean_ctor_set(v_reuseFailAlloc_213_, 5, v_cache_202_);
lean_ctor_set(v_reuseFailAlloc_213_, 6, v_messages_203_);
lean_ctor_set(v_reuseFailAlloc_213_, 7, v_infoState_204_);
lean_ctor_set(v_reuseFailAlloc_213_, 8, v_snapshotTasks_205_);
v___x_210_ = v_reuseFailAlloc_213_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = lean_st_ref_put(v___y_188_, v___x_210_);
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v_fst_195_);
return v___x_212_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2___redArg___boxed(lean_object* v_kind_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2___redArg(v_kind_216_, v___y_217_);
lean_dec(v___y_217_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2(lean_object* v_kind_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2___redArg(v_kind_220_, v___y_224_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2___boxed(lean_object* v_kind_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2(v_kind_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg___lam__0(lean_object* v_k_234_, lean_object* v_b_235_, lean_object* v_c_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
lean_object* v___x_242_; 
lean_inc(v___y_240_);
lean_inc_ref(v___y_239_);
lean_inc(v___y_238_);
lean_inc_ref(v___y_237_);
v___x_242_ = lean_apply_7(v_k_234_, v_b_235_, v_c_236_, v___y_237_, v___y_238_, v___y_239_, v___y_240_, lean_box(0));
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg___lam__0___boxed(lean_object* v_k_243_, lean_object* v_b_244_, lean_object* v_c_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg___lam__0(v_k_243_, v_b_244_, v_c_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg(lean_object* v_type_252_, lean_object* v_k_253_, uint8_t v_cleanupAnnotations_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___f_260_; uint8_t v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___f_260_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_260_, 0, v_k_253_);
v___x_261_ = 0;
v___x_262_ = lean_box(0);
v___x_263_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_261_, v___x_262_, v_type_252_, v___f_260_, v_cleanupAnnotations_254_, v___x_261_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
v_a_264_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_263_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_263_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
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
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
v_a_272_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v___x_263_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_263_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg___boxed(lean_object* v_type_280_, lean_object* v_k_281_, lean_object* v_cleanupAnnotations_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_288_; lean_object* v_res_289_; 
v_cleanupAnnotations_boxed_288_ = lean_unbox(v_cleanupAnnotations_282_);
v_res_289_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg(v_type_280_, v_k_281_, v_cleanupAnnotations_boxed_288_, v___y_283_, v___y_284_, v___y_285_, v___y_286_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11(lean_object* v_00_u03b1_290_, lean_object* v_type_291_, lean_object* v_k_292_, uint8_t v_cleanupAnnotations_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg(v_type_291_, v_k_292_, v_cleanupAnnotations_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___boxed(lean_object* v_00_u03b1_300_, lean_object* v_type_301_, lean_object* v_k_302_, lean_object* v_cleanupAnnotations_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_309_; lean_object* v_res_310_; 
v_cleanupAnnotations_boxed_309_ = lean_unbox(v_cleanupAnnotations_303_);
v_res_310_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11(v_00_u03b1_300_, v_type_301_, v_k_302_, v_cleanupAnnotations_boxed_309_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
lean_dec(v___y_307_);
lean_dec_ref(v___y_306_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14___redArg(lean_object* v_name_311_, lean_object* v_levelParams_312_, lean_object* v_type_313_, lean_object* v_value_314_, lean_object* v_hints_315_, lean_object* v___y_316_){
_start:
{
lean_object* v___x_318_; uint8_t v___y_320_; uint8_t v___y_327_; lean_object* v_env_330_; uint8_t v___x_331_; 
v___x_318_ = lean_st_ref_get(v___y_316_);
v_env_330_ = lean_ctor_get(v___x_318_, 0);
lean_inc_ref_n(v_env_330_, 2);
lean_dec(v___x_318_);
v___x_331_ = l_Lean_Environment_hasUnsafe(v_env_330_, v_type_313_);
if (v___x_331_ == 0)
{
uint8_t v___x_332_; 
v___x_332_ = l_Lean_Environment_hasUnsafe(v_env_330_, v_value_314_);
v___y_327_ = v___x_332_;
goto v___jp_326_;
}
else
{
lean_dec_ref(v_env_330_);
v___y_327_ = v___x_331_;
goto v___jp_326_;
}
v___jp_319_:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
lean_inc(v_name_311_);
v___x_321_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_321_, 0, v_name_311_);
lean_ctor_set(v___x_321_, 1, v_levelParams_312_);
lean_ctor_set(v___x_321_, 2, v_type_313_);
v___x_322_ = lean_box(0);
v___x_323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_323_, 0, v_name_311_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_324_, 0, v___x_321_);
lean_ctor_set(v___x_324_, 1, v_value_314_);
lean_ctor_set(v___x_324_, 2, v_hints_315_);
lean_ctor_set(v___x_324_, 3, v___x_323_);
lean_ctor_set_uint8(v___x_324_, sizeof(void*)*4, v___y_320_);
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
return v___x_325_;
}
v___jp_326_:
{
if (v___y_327_ == 0)
{
uint8_t v___x_328_; 
v___x_328_ = 1;
v___y_320_ = v___x_328_;
goto v___jp_319_;
}
else
{
uint8_t v___x_329_; 
v___x_329_ = 0;
v___y_320_ = v___x_329_;
goto v___jp_319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14___redArg___boxed(lean_object* v_name_333_, lean_object* v_levelParams_334_, lean_object* v_type_335_, lean_object* v_value_336_, lean_object* v_hints_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14___redArg(v_name_333_, v_levelParams_334_, v_type_335_, v_value_336_, v_hints_337_, v___y_338_);
lean_dec(v___y_338_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14(lean_object* v_name_341_, lean_object* v_levelParams_342_, lean_object* v_type_343_, lean_object* v_value_344_, lean_object* v_hints_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14___redArg(v_name_341_, v_levelParams_342_, v_type_343_, v_value_344_, v_hints_345_, v___y_349_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14___boxed(lean_object* v_name_352_, lean_object* v_levelParams_353_, lean_object* v_type_354_, lean_object* v_value_355_, lean_object* v_hints_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14(v_name_352_, v_levelParams_353_, v_type_354_, v_value_355_, v_hints_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkSparseCasesOn_spec__16(lean_object* v_msg_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v___f_370_; lean_object* v___x_17437__overap_371_; lean_object* v___x_372_; 
v___f_370_ = ((lean_object*)(l_panic___at___00Lean_Meta_mkSparseCasesOn_spec__16___closed__0));
v___x_17437__overap_371_ = lean_panic_fn_borrowed(v___f_370_, v_msg_364_);
lean_inc(v___y_368_);
lean_inc_ref(v___y_367_);
lean_inc(v___y_366_);
lean_inc_ref(v___y_365_);
v___x_372_ = lean_apply_5(v___x_17437__overap_371_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, lean_box(0));
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkSparseCasesOn_spec__16___boxed(lean_object* v_msg_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_panic___at___00Lean_Meta_mkSparseCasesOn_spec__16(v_msg_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10_spec__26___redArg(lean_object* v_x_380_, lean_object* v_x_381_, lean_object* v_x_382_, lean_object* v_x_383_){
_start:
{
lean_object* v_ks_384_; lean_object* v_vs_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_409_; 
v_ks_384_ = lean_ctor_get(v_x_380_, 0);
v_vs_385_ = lean_ctor_get(v_x_380_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v_x_380_);
if (v_isSharedCheck_409_ == 0)
{
v___x_387_ = v_x_380_;
v_isShared_388_ = v_isSharedCheck_409_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_vs_385_);
lean_inc(v_ks_384_);
lean_dec(v_x_380_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_409_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = lean_array_get_size(v_ks_384_);
v___x_390_ = lean_nat_dec_lt(v_x_381_, v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_394_; 
lean_dec(v_x_381_);
v___x_391_ = lean_array_push(v_ks_384_, v_x_382_);
v___x_392_ = lean_array_push(v_vs_385_, v_x_383_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 1, v___x_392_);
lean_ctor_set(v___x_387_, 0, v___x_391_);
v___x_394_ = v___x_387_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_391_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v___x_392_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
else
{
lean_object* v_k_x27_396_; uint8_t v___x_397_; 
v_k_x27_396_ = lean_array_fget_borrowed(v_ks_384_, v_x_381_);
v___x_397_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq(v_x_382_, v_k_x27_396_);
if (v___x_397_ == 0)
{
lean_object* v___x_399_; 
if (v_isShared_388_ == 0)
{
v___x_399_ = v___x_387_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_ks_384_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v_vs_385_);
v___x_399_ = v_reuseFailAlloc_403_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_unsigned_to_nat(1u);
v___x_401_ = lean_nat_add(v_x_381_, v___x_400_);
lean_dec(v_x_381_);
v_x_380_ = v___x_399_;
v_x_381_ = v___x_401_;
goto _start;
}
}
else
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_407_; 
v___x_404_ = lean_array_fset(v_ks_384_, v_x_381_, v_x_382_);
v___x_405_ = lean_array_fset(v_vs_385_, v_x_381_, v_x_383_);
lean_dec(v_x_381_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 1, v___x_405_);
lean_ctor_set(v___x_387_, 0, v___x_404_);
v___x_407_ = v___x_387_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_404_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v___x_405_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10___redArg(lean_object* v_n_410_, lean_object* v_k_411_, lean_object* v_v_412_){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_unsigned_to_nat(0u);
v___x_414_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10_spec__26___redArg(v_n_410_, v___x_413_, v_k_411_, v_v_412_);
return v___x_414_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg(lean_object* v_x_416_, size_t v_x_417_, size_t v_x_418_, lean_object* v_x_419_, lean_object* v_x_420_){
_start:
{
if (lean_obj_tag(v_x_416_) == 0)
{
lean_object* v_es_421_; size_t v___x_422_; size_t v___x_423_; lean_object* v_j_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v_es_421_ = lean_ctor_get(v_x_416_, 0);
v___x_422_ = ((size_t)31ULL);
v___x_423_ = lean_usize_land(v_x_417_, v___x_422_);
v_j_424_ = lean_usize_to_nat(v___x_423_);
v___x_425_ = lean_array_get_size(v_es_421_);
v___x_426_ = lean_nat_dec_lt(v_j_424_, v___x_425_);
if (v___x_426_ == 0)
{
lean_dec(v_j_424_);
lean_dec(v_x_420_);
lean_dec_ref(v_x_419_);
return v_x_416_;
}
else
{
lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_465_; 
lean_inc_ref(v_es_421_);
v_isSharedCheck_465_ = !lean_is_exclusive(v_x_416_);
if (v_isSharedCheck_465_ == 0)
{
lean_object* v_unused_466_; 
v_unused_466_ = lean_ctor_get(v_x_416_, 0);
lean_dec(v_unused_466_);
v___x_428_ = v_x_416_;
v_isShared_429_ = v_isSharedCheck_465_;
goto v_resetjp_427_;
}
else
{
lean_dec(v_x_416_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_465_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v_v_430_; lean_object* v___x_431_; lean_object* v_xs_x27_432_; lean_object* v___y_434_; 
v_v_430_ = lean_array_fget(v_es_421_, v_j_424_);
v___x_431_ = lean_box(0);
v_xs_x27_432_ = lean_array_fset(v_es_421_, v_j_424_, v___x_431_);
switch(lean_obj_tag(v_v_430_))
{
case 0:
{
lean_object* v_key_439_; lean_object* v_val_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_450_; 
v_key_439_ = lean_ctor_get(v_v_430_, 0);
v_val_440_ = lean_ctor_get(v_v_430_, 1);
v_isSharedCheck_450_ = !lean_is_exclusive(v_v_430_);
if (v_isSharedCheck_450_ == 0)
{
v___x_442_ = v_v_430_;
v_isShared_443_ = v_isSharedCheck_450_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_val_440_);
lean_inc(v_key_439_);
lean_dec(v_v_430_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_450_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
uint8_t v___x_444_; 
v___x_444_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq(v_x_419_, v_key_439_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; 
lean_del_object(v___x_442_);
v___x_445_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_439_, v_val_440_, v_x_419_, v_x_420_);
v___x_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
v___y_434_ = v___x_446_;
goto v___jp_433_;
}
else
{
lean_object* v___x_448_; 
lean_dec(v_val_440_);
lean_dec(v_key_439_);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 1, v_x_420_);
lean_ctor_set(v___x_442_, 0, v_x_419_);
v___x_448_ = v___x_442_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_x_419_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_x_420_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
v___y_434_ = v___x_448_;
goto v___jp_433_;
}
}
}
}
case 1:
{
lean_object* v_node_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_463_; 
v_node_451_ = lean_ctor_get(v_v_430_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v_v_430_);
if (v_isSharedCheck_463_ == 0)
{
v___x_453_ = v_v_430_;
v_isShared_454_ = v_isSharedCheck_463_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_node_451_);
lean_dec(v_v_430_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_463_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
size_t v___x_455_; size_t v___x_456_; size_t v___x_457_; size_t v___x_458_; lean_object* v___x_459_; lean_object* v___x_461_; 
v___x_455_ = ((size_t)5ULL);
v___x_456_ = lean_usize_shift_right(v_x_417_, v___x_455_);
v___x_457_ = ((size_t)1ULL);
v___x_458_ = lean_usize_add(v_x_418_, v___x_457_);
v___x_459_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg(v_node_451_, v___x_456_, v___x_458_, v_x_419_, v_x_420_);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 0, v___x_459_);
v___x_461_ = v___x_453_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_459_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
v___y_434_ = v___x_461_;
goto v___jp_433_;
}
}
}
default: 
{
lean_object* v___x_464_; 
v___x_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_464_, 0, v_x_419_);
lean_ctor_set(v___x_464_, 1, v_x_420_);
v___y_434_ = v___x_464_;
goto v___jp_433_;
}
}
v___jp_433_:
{
lean_object* v___x_435_; lean_object* v___x_437_; 
v___x_435_ = lean_array_fset(v_xs_x27_432_, v_j_424_, v___y_434_);
lean_dec(v_j_424_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v___x_435_);
v___x_437_ = v___x_428_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_435_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
}
else
{
lean_object* v_ks_467_; lean_object* v_vs_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_486_; 
v_ks_467_ = lean_ctor_get(v_x_416_, 0);
v_vs_468_ = lean_ctor_get(v_x_416_, 1);
v_isSharedCheck_486_ = !lean_is_exclusive(v_x_416_);
if (v_isSharedCheck_486_ == 0)
{
v___x_470_ = v_x_416_;
v_isShared_471_ = v_isSharedCheck_486_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_vs_468_);
lean_inc(v_ks_467_);
lean_dec(v_x_416_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_486_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_ks_467_);
lean_ctor_set(v_reuseFailAlloc_485_, 1, v_vs_468_);
v___x_473_ = v_reuseFailAlloc_485_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
lean_object* v_newNode_474_; size_t v___x_475_; uint8_t v___x_476_; 
v_newNode_474_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10___redArg(v___x_473_, v_x_419_, v_x_420_);
v___x_475_ = ((size_t)7ULL);
v___x_476_ = lean_usize_dec_le(v___x_475_, v_x_418_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_477_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_474_);
v___x_478_ = lean_unsigned_to_nat(4u);
v___x_479_ = lean_nat_dec_lt(v___x_477_, v___x_478_);
lean_dec(v___x_477_);
if (v___x_479_ == 0)
{
lean_object* v_ks_480_; lean_object* v_vs_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_ks_480_ = lean_ctor_get(v_newNode_474_, 0);
lean_inc_ref(v_ks_480_);
v_vs_481_ = lean_ctor_get(v_newNode_474_, 1);
lean_inc_ref(v_vs_481_);
lean_dec_ref(v_newNode_474_);
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg___closed__0);
v___x_484_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11___redArg(v_x_418_, v_ks_480_, v_vs_481_, v___x_482_, v___x_483_);
lean_dec_ref(v_vs_481_);
lean_dec_ref(v_ks_480_);
return v___x_484_;
}
else
{
return v_newNode_474_;
}
}
else
{
return v_newNode_474_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11___redArg(size_t v_depth_487_, lean_object* v_keys_488_, lean_object* v_vals_489_, lean_object* v_i_490_, lean_object* v_entries_491_){
_start:
{
lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_492_ = lean_array_get_size(v_keys_488_);
v___x_493_ = lean_nat_dec_lt(v_i_490_, v___x_492_);
if (v___x_493_ == 0)
{
lean_dec(v_i_490_);
return v_entries_491_;
}
else
{
lean_object* v_k_494_; lean_object* v_v_495_; uint64_t v___x_496_; size_t v_h_497_; size_t v___x_498_; lean_object* v___x_499_; size_t v___x_500_; size_t v___x_501_; size_t v___x_502_; size_t v_h_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v_k_494_ = lean_array_fget_borrowed(v_keys_488_, v_i_490_);
v_v_495_ = lean_array_fget_borrowed(v_vals_489_, v_i_490_);
v___x_496_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash(v_k_494_);
v_h_497_ = lean_uint64_to_usize(v___x_496_);
v___x_498_ = ((size_t)5ULL);
v___x_499_ = lean_unsigned_to_nat(1u);
v___x_500_ = ((size_t)1ULL);
v___x_501_ = lean_usize_sub(v_depth_487_, v___x_500_);
v___x_502_ = lean_usize_mul(v___x_498_, v___x_501_);
v_h_503_ = lean_usize_shift_right(v_h_497_, v___x_502_);
v___x_504_ = lean_nat_add(v_i_490_, v___x_499_);
lean_dec(v_i_490_);
lean_inc(v_v_495_);
lean_inc(v_k_494_);
v___x_505_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg(v_entries_491_, v_h_503_, v_depth_487_, v_k_494_, v_v_495_);
v_i_490_ = v___x_504_;
v_entries_491_ = v___x_505_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11___redArg___boxed(lean_object* v_depth_507_, lean_object* v_keys_508_, lean_object* v_vals_509_, lean_object* v_i_510_, lean_object* v_entries_511_){
_start:
{
size_t v_depth_boxed_512_; lean_object* v_res_513_; 
v_depth_boxed_512_ = lean_unbox_usize(v_depth_507_);
lean_dec(v_depth_507_);
v_res_513_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11___redArg(v_depth_boxed_512_, v_keys_508_, v_vals_509_, v_i_510_, v_entries_511_);
lean_dec_ref(v_vals_509_);
lean_dec_ref(v_keys_508_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg___boxed(lean_object* v_x_514_, lean_object* v_x_515_, lean_object* v_x_516_, lean_object* v_x_517_, lean_object* v_x_518_){
_start:
{
size_t v_x_21515__boxed_519_; size_t v_x_21516__boxed_520_; lean_object* v_res_521_; 
v_x_21515__boxed_519_ = lean_unbox_usize(v_x_515_);
lean_dec(v_x_515_);
v_x_21516__boxed_520_ = lean_unbox_usize(v_x_516_);
lean_dec(v_x_516_);
v_res_521_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg(v_x_514_, v_x_21515__boxed_519_, v_x_21516__boxed_520_, v_x_517_, v_x_518_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3___redArg(lean_object* v_x_522_, lean_object* v_x_523_, lean_object* v_x_524_){
_start:
{
uint64_t v___x_525_; size_t v___x_526_; size_t v___x_527_; lean_object* v___x_528_; 
v___x_525_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash(v_x_523_);
v___x_526_ = lean_uint64_to_usize(v___x_525_);
v___x_527_ = ((size_t)1ULL);
v___x_528_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg(v_x_522_, v___x_526_, v___x_527_, v_x_523_, v_x_524_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___lam__0(lean_object* v___x_529_, lean_object* v_a_530_, lean_object* v_s_531_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3___redArg(v_s_531_, v___x_529_, v_a_530_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___lam__1(lean_object* v___x_533_, lean_object* v___x_534_, lean_object* v___x_535_, lean_object* v_h_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; uint8_t v___x_544_; uint8_t v___x_545_; uint8_t v___x_546_; lean_object* v___x_547_; 
v___x_542_ = lean_array_push(v___x_533_, v_h_536_);
v___x_543_ = l_Lean_mkAppN(v___x_534_, v___x_535_);
v___x_544_ = 0;
v___x_545_ = 1;
v___x_546_ = 1;
v___x_547_ = l_Lean_Meta_mkForallFVars(v___x_542_, v___x_543_, v___x_544_, v___x_545_, v___x_545_, v___x_546_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
lean_dec_ref(v___x_542_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___lam__1___boxed(lean_object* v___x_548_, lean_object* v___x_549_, lean_object* v___x_550_, lean_object* v_h_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lean_Meta_mkSparseCasesOn___lam__1(v___x_548_, v___x_549_, v___x_550_, v_h_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
lean_dec_ref(v___x_550_);
return v_res_557_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = l_instMonadEIO___redArg();
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0(lean_object* v_msg_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v_toApplicative_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_632_; 
v___x_569_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__0);
v___x_570_ = l_StateRefT_x27_instMonad___redArg(v___x_569_);
v_toApplicative_571_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_632_ == 0)
{
lean_object* v_unused_633_; 
v_unused_633_ = lean_ctor_get(v___x_570_, 1);
lean_dec(v_unused_633_);
v___x_573_ = v___x_570_;
v_isShared_574_ = v_isSharedCheck_632_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_toApplicative_571_);
lean_dec(v___x_570_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_632_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v_toFunctor_575_; lean_object* v_toSeq_576_; lean_object* v_toSeqLeft_577_; lean_object* v_toSeqRight_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_630_; 
v_toFunctor_575_ = lean_ctor_get(v_toApplicative_571_, 0);
v_toSeq_576_ = lean_ctor_get(v_toApplicative_571_, 2);
v_toSeqLeft_577_ = lean_ctor_get(v_toApplicative_571_, 3);
v_toSeqRight_578_ = lean_ctor_get(v_toApplicative_571_, 4);
v_isSharedCheck_630_ = !lean_is_exclusive(v_toApplicative_571_);
if (v_isSharedCheck_630_ == 0)
{
lean_object* v_unused_631_; 
v_unused_631_ = lean_ctor_get(v_toApplicative_571_, 1);
lean_dec(v_unused_631_);
v___x_580_ = v_toApplicative_571_;
v_isShared_581_ = v_isSharedCheck_630_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_toSeqRight_578_);
lean_inc(v_toSeqLeft_577_);
lean_inc(v_toSeq_576_);
lean_inc(v_toFunctor_575_);
lean_dec(v_toApplicative_571_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_630_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___f_582_; lean_object* v___f_583_; lean_object* v___f_584_; lean_object* v___f_585_; lean_object* v___x_586_; lean_object* v___f_587_; lean_object* v___f_588_; lean_object* v___f_589_; lean_object* v___x_591_; 
v___f_582_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__1));
v___f_583_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_575_);
v___f_584_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_584_, 0, v_toFunctor_575_);
v___f_585_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_585_, 0, v_toFunctor_575_);
v___x_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_586_, 0, v___f_584_);
lean_ctor_set(v___x_586_, 1, v___f_585_);
v___f_587_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_587_, 0, v_toSeqRight_578_);
v___f_588_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_588_, 0, v_toSeqLeft_577_);
v___f_589_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_589_, 0, v_toSeq_576_);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 4, v___f_587_);
lean_ctor_set(v___x_580_, 3, v___f_588_);
lean_ctor_set(v___x_580_, 2, v___f_589_);
lean_ctor_set(v___x_580_, 1, v___f_582_);
lean_ctor_set(v___x_580_, 0, v___x_586_);
v___x_591_ = v___x_580_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_586_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v___f_582_);
lean_ctor_set(v_reuseFailAlloc_629_, 2, v___f_589_);
lean_ctor_set(v_reuseFailAlloc_629_, 3, v___f_588_);
lean_ctor_set(v_reuseFailAlloc_629_, 4, v___f_587_);
v___x_591_ = v_reuseFailAlloc_629_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
lean_object* v___x_593_; 
if (v_isShared_574_ == 0)
{
lean_ctor_set(v___x_573_, 1, v___f_583_);
lean_ctor_set(v___x_573_, 0, v___x_591_);
v___x_593_ = v___x_573_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_591_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v___f_583_);
v___x_593_ = v_reuseFailAlloc_628_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_594_; lean_object* v_toApplicative_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_626_; 
v___x_594_ = l_StateRefT_x27_instMonad___redArg(v___x_593_);
v_toApplicative_595_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_626_ == 0)
{
lean_object* v_unused_627_; 
v_unused_627_ = lean_ctor_get(v___x_594_, 1);
lean_dec(v_unused_627_);
v___x_597_ = v___x_594_;
v_isShared_598_ = v_isSharedCheck_626_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_toApplicative_595_);
lean_dec(v___x_594_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_626_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v_toFunctor_599_; lean_object* v_toSeq_600_; lean_object* v_toSeqLeft_601_; lean_object* v_toSeqRight_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_624_; 
v_toFunctor_599_ = lean_ctor_get(v_toApplicative_595_, 0);
v_toSeq_600_ = lean_ctor_get(v_toApplicative_595_, 2);
v_toSeqLeft_601_ = lean_ctor_get(v_toApplicative_595_, 3);
v_toSeqRight_602_ = lean_ctor_get(v_toApplicative_595_, 4);
v_isSharedCheck_624_ = !lean_is_exclusive(v_toApplicative_595_);
if (v_isSharedCheck_624_ == 0)
{
lean_object* v_unused_625_; 
v_unused_625_ = lean_ctor_get(v_toApplicative_595_, 1);
lean_dec(v_unused_625_);
v___x_604_ = v_toApplicative_595_;
v_isShared_605_ = v_isSharedCheck_624_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_toSeqRight_602_);
lean_inc(v_toSeqLeft_601_);
lean_inc(v_toSeq_600_);
lean_inc(v_toFunctor_599_);
lean_dec(v_toApplicative_595_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_624_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___f_606_; lean_object* v___f_607_; lean_object* v___f_608_; lean_object* v___f_609_; lean_object* v___x_610_; lean_object* v___f_611_; lean_object* v___f_612_; lean_object* v___f_613_; lean_object* v___x_615_; 
v___f_606_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__3));
v___f_607_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___closed__4));
lean_inc_ref(v_toFunctor_599_);
v___f_608_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_608_, 0, v_toFunctor_599_);
v___f_609_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_609_, 0, v_toFunctor_599_);
v___x_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_610_, 0, v___f_608_);
lean_ctor_set(v___x_610_, 1, v___f_609_);
v___f_611_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_611_, 0, v_toSeqRight_602_);
v___f_612_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_612_, 0, v_toSeqLeft_601_);
v___f_613_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_613_, 0, v_toSeq_600_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 4, v___f_611_);
lean_ctor_set(v___x_604_, 3, v___f_612_);
lean_ctor_set(v___x_604_, 2, v___f_613_);
lean_ctor_set(v___x_604_, 1, v___f_606_);
lean_ctor_set(v___x_604_, 0, v___x_610_);
v___x_615_ = v___x_604_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_610_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v___f_606_);
lean_ctor_set(v_reuseFailAlloc_623_, 2, v___f_613_);
lean_ctor_set(v_reuseFailAlloc_623_, 3, v___f_612_);
lean_ctor_set(v_reuseFailAlloc_623_, 4, v___f_611_);
v___x_615_ = v_reuseFailAlloc_623_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
lean_object* v___x_617_; 
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 1, v___f_607_);
lean_ctor_set(v___x_597_, 0, v___x_615_);
v___x_617_ = v___x_597_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_615_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v___f_607_);
v___x_617_ = v_reuseFailAlloc_622_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_17716__overap_620_; lean_object* v___x_621_; 
v___x_618_ = lean_box(0);
v___x_619_ = l_instInhabitedOfMonad___redArg(v___x_617_, v___x_618_);
v___x_17716__overap_620_ = lean_panic_fn_borrowed(v___x_619_, v_msg_563_);
lean_dec(v___x_619_);
lean_inc(v___y_567_);
lean_inc_ref(v___y_566_);
lean_inc(v___y_565_);
lean_inc_ref(v___y_564_);
v___x_621_ = lean_apply_5(v___x_17716__overap_620_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, lean_box(0));
return v___x_621_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0___boxed(lean_object* v_msg_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0(v_msg_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13_spec__19(lean_object* v_msgData_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v___x_647_; lean_object* v_env_648_; lean_object* v___x_649_; lean_object* v_toCold_650_; lean_object* v_mctx_651_; lean_object* v_lctx_652_; lean_object* v_options_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_647_ = lean_st_ref_get(v___y_645_);
v_env_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc_ref(v_env_648_);
lean_dec(v___x_647_);
v___x_649_ = lean_st_ref_get(v___y_643_);
v_toCold_650_ = lean_ctor_get(v___y_644_, 0);
v_mctx_651_ = lean_ctor_get(v___x_649_, 0);
lean_inc_ref(v_mctx_651_);
lean_dec(v___x_649_);
v_lctx_652_ = lean_ctor_get(v___y_642_, 2);
v_options_653_ = lean_ctor_get(v_toCold_650_, 2);
lean_inc_ref(v_options_653_);
lean_inc_ref(v_lctx_652_);
v___x_654_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_654_, 0, v_env_648_);
lean_ctor_set(v___x_654_, 1, v_mctx_651_);
lean_ctor_set(v___x_654_, 2, v_lctx_652_);
lean_ctor_set(v___x_654_, 3, v_options_653_);
v___x_655_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set(v___x_655_, 1, v_msgData_641_);
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13_spec__19___boxed(lean_object* v_msgData_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13_spec__19(v_msgData_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(lean_object* v_msg_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_ref_670_; lean_object* v___x_671_; lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_680_; 
v_ref_670_ = lean_ctor_get(v___y_667_, 2);
v___x_671_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13_spec__19(v_msg_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_);
v_a_672_ = lean_ctor_get(v___x_671_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_680_ == 0)
{
v___x_674_ = v___x_671_;
v_isShared_675_ = v_isSharedCheck_680_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v___x_671_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_680_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_676_; lean_object* v___x_678_; 
lean_inc(v_ref_670_);
v___x_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_676_, 0, v_ref_670_);
lean_ctor_set(v___x_676_, 1, v_a_672_);
if (v_isShared_675_ == 0)
{
lean_ctor_set_tag(v___x_674_, 1);
lean_ctor_set(v___x_674_, 0, v___x_676_);
v___x_678_ = v___x_674_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v___x_676_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg___boxed(lean_object* v_msg_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(v_msg_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
return v_res_687_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__0));
v___x_690_ = l_Lean_stringToMessageData(v___x_689_);
return v___x_690_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__3(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__2));
v___x_693_ = l_Lean_stringToMessageData(v___x_692_);
return v___x_693_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__7(void){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_697_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__6));
v___x_698_ = lean_unsigned_to_nat(11u);
v___x_699_ = lean_unsigned_to_nat(122u);
v___x_700_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__5));
v___x_701_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__4));
v___x_702_ = l_mkPanicMessageWithDecl(v___x_701_, v___x_700_, v___x_699_, v___x_698_, v___x_697_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0(lean_object* v_constName_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v___x_717_; lean_object* v_env_718_; uint8_t v___x_719_; lean_object* v___x_720_; 
v___x_717_ = lean_st_ref_get(v___y_707_);
v_env_718_ = lean_ctor_get(v___x_717_, 0);
lean_inc_ref(v_env_718_);
lean_dec(v___x_717_);
v___x_719_ = 0;
lean_inc(v_constName_703_);
v___x_720_ = l_Lean_Environment_findAsync_x3f(v_env_718_, v_constName_703_, v___x_719_);
if (lean_obj_tag(v___x_720_) == 1)
{
lean_object* v_val_721_; uint8_t v_kind_722_; 
v_val_721_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_val_721_);
lean_dec_ref_known(v___x_720_, 1);
v_kind_722_ = lean_ctor_get_uint8(v_val_721_, sizeof(void*)*3);
if (v_kind_722_ == 6)
{
lean_object* v___x_723_; 
v___x_723_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_721_);
if (lean_obj_tag(v___x_723_) == 6)
{
lean_object* v_val_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
lean_dec(v_constName_703_);
v_val_724_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_723_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_val_724_);
lean_dec(v___x_723_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
lean_ctor_set_tag(v___x_726_, 0);
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_val_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec_ref(v___x_723_);
v___x_732_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__7);
v___x_733_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0_spec__0(v___x_732_, v___y_704_, v___y_705_, v___y_706_, v___y_707_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_742_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_742_ == 0)
{
v___x_736_ = v___x_733_;
v_isShared_737_ = v_isSharedCheck_742_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_742_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
if (lean_obj_tag(v_a_734_) == 0)
{
lean_del_object(v___x_736_);
goto v___jp_709_;
}
else
{
lean_object* v_val_738_; lean_object* v___x_740_; 
lean_dec(v_constName_703_);
v_val_738_ = lean_ctor_get(v_a_734_, 0);
lean_inc(v_val_738_);
lean_dec_ref_known(v_a_734_, 1);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v_val_738_);
v___x_740_ = v___x_736_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_val_738_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec(v_constName_703_);
v_a_743_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_733_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_733_);
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
lean_dec(v_val_721_);
goto v___jp_709_;
}
}
else
{
lean_dec(v___x_720_);
goto v___jp_709_;
}
v___jp_709_:
{
lean_object* v___x_710_; uint8_t v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_710_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1);
v___x_711_ = 0;
v___x_712_ = l_Lean_MessageData_ofConstName(v_constName_703_, v___x_711_);
v___x_713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_710_);
lean_ctor_set(v___x_713_, 1, v___x_712_);
v___x_714_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__3);
v___x_715_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_715_, 0, v___x_713_);
lean_ctor_set(v___x_715_, 1, v___x_714_);
v___x_716_ = l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(v___x_715_, v___y_704_, v___y_705_, v___y_706_, v___y_707_);
return v___x_716_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___boxed(lean_object* v_constName_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0(v_constName_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__7(lean_object* v___x_758_, size_t v_sz_759_, size_t v_i_760_, lean_object* v_bs_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
uint8_t v___x_767_; 
v___x_767_ = lean_usize_dec_lt(v_i_760_, v_sz_759_);
if (v___x_767_ == 0)
{
lean_object* v___x_768_; 
v___x_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_768_, 0, v_bs_761_);
return v___x_768_;
}
else
{
lean_object* v___x_769_; lean_object* v_v_770_; lean_object* v___x_771_; lean_object* v_bs_x27_772_; lean_object* v_a_774_; lean_object* v___x_779_; 
v___x_769_ = l_Lean_instInhabitedExpr;
v_v_770_ = lean_array_uget(v_bs_761_, v_i_760_);
v___x_771_ = lean_unsigned_to_nat(0u);
v_bs_x27_772_ = lean_array_uset(v_bs_761_, v_i_760_, v___x_771_);
v___x_779_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0(v_v_770_, v___y_762_, v___y_763_, v___y_764_, v___y_765_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v_cidx_781_; lean_object* v_start_782_; lean_object* v_stop_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v_a_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_779_, 1);
v_cidx_781_ = lean_ctor_get(v_a_780_, 2);
lean_inc(v_cidx_781_);
lean_dec(v_a_780_);
v_start_782_ = lean_ctor_get(v___x_758_, 1);
v_stop_783_ = lean_ctor_get(v___x_758_, 2);
v___x_784_ = lean_nat_sub(v_stop_783_, v_start_782_);
v___x_785_ = lean_nat_dec_lt(v_cidx_781_, v___x_784_);
lean_dec(v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
lean_dec(v_cidx_781_);
v___x_786_ = l_outOfBounds___redArg(v___x_769_);
v_a_774_ = v___x_786_;
goto v___jp_773_;
}
else
{
lean_object* v___x_787_; 
v___x_787_ = l_Subarray_get___redArg(v___x_758_, v_cidx_781_);
lean_dec(v_cidx_781_);
v_a_774_ = v___x_787_;
goto v___jp_773_;
}
}
else
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_795_; 
lean_dec_ref(v_bs_x27_772_);
v_a_788_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_795_ == 0)
{
v___x_790_ = v___x_779_;
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_779_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_788_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
v___jp_773_:
{
size_t v___x_775_; size_t v___x_776_; lean_object* v___x_777_; 
v___x_775_ = ((size_t)1ULL);
v___x_776_ = lean_usize_add(v_i_760_, v___x_775_);
v___x_777_ = lean_array_uset(v_bs_x27_772_, v_i_760_, v_a_774_);
v_i_760_ = v___x_776_;
v_bs_761_ = v___x_777_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__7___boxed(lean_object* v___x_796_, lean_object* v_sz_797_, lean_object* v_i_798_, lean_object* v_bs_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_){
_start:
{
size_t v_sz_boxed_805_; size_t v_i_boxed_806_; lean_object* v_res_807_; 
v_sz_boxed_805_ = lean_unbox_usize(v_sz_797_);
lean_dec(v_sz_797_);
v_i_boxed_806_ = lean_unbox_usize(v_i_798_);
lean_dec(v_i_798_);
v_res_807_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__7(v___x_796_, v_sz_boxed_805_, v_i_boxed_806_, v_bs_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
lean_dec(v___y_803_);
lean_dec_ref(v___y_802_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec_ref(v___x_796_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15_spec__23(lean_object* v_xs_808_, lean_object* v_v_809_, lean_object* v_i_810_){
_start:
{
lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_811_ = lean_array_get_size(v_xs_808_);
v___x_812_ = lean_nat_dec_lt(v_i_810_, v___x_811_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; 
lean_dec(v_i_810_);
v___x_813_ = lean_box(0);
return v___x_813_;
}
else
{
lean_object* v___x_814_; uint8_t v___x_815_; 
v___x_814_ = lean_array_fget_borrowed(v_xs_808_, v_i_810_);
v___x_815_ = lean_name_eq(v___x_814_, v_v_809_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = lean_unsigned_to_nat(1u);
v___x_817_ = lean_nat_add(v_i_810_, v___x_816_);
lean_dec(v_i_810_);
v_i_810_ = v___x_817_;
goto _start;
}
else
{
lean_object* v___x_819_; 
v___x_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_819_, 0, v_i_810_);
return v___x_819_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15_spec__23___boxed(lean_object* v_xs_820_, lean_object* v_v_821_, lean_object* v_i_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15_spec__23(v_xs_820_, v_v_821_, v_i_822_);
lean_dec(v_v_821_);
lean_dec_ref(v_xs_820_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15(lean_object* v_xs_824_, lean_object* v_v_825_){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_unsigned_to_nat(0u);
v___x_827_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15_spec__23(v_xs_824_, v_v_825_, v___x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15___boxed(lean_object* v_xs_828_, lean_object* v_v_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15(v_xs_828_, v_v_829_);
lean_dec(v_v_829_);
lean_dec_ref(v_xs_828_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10(lean_object* v_xs_831_, lean_object* v_v_832_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10_spec__15(v_xs_831_, v_v_832_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v___x_834_; 
v___x_834_ = lean_box(0);
return v___x_834_;
}
else
{
lean_object* v_val_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
v_val_835_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_833_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_val_835_);
lean_dec(v___x_833_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_val_835_);
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
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10___boxed(lean_object* v_xs_843_, lean_object* v_v_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10(v_xs_843_, v_v_844_);
lean_dec(v_v_844_);
lean_dec_ref(v_xs_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12___lam__0(lean_object* v_ctors_846_, lean_object* v_a_847_, lean_object* v___x_848_, lean_object* v_a_849_, uint8_t v___x_850_, uint8_t v___x_851_, lean_object* v_a_852_, lean_object* v_ys_853_, lean_object* v_x_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Array_idxOf_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__10(v_ctors_846_, v_a_847_);
if (lean_obj_tag(v___x_860_) == 1)
{
lean_object* v_val_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; lean_object* v___x_866_; 
lean_dec(v_a_847_);
v_val_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_val_861_);
lean_dec_ref_known(v___x_860_, 1);
lean_inc_ref(v_ys_853_);
v___x_862_ = lean_array_pop(v_ys_853_);
v___x_863_ = lean_array_get_borrowed(v___x_848_, v_a_849_, v_val_861_);
lean_dec(v_val_861_);
lean_inc(v___x_863_);
v___x_864_ = l_Lean_mkAppN(v___x_863_, v___x_862_);
lean_dec_ref(v___x_862_);
v___x_865_ = 1;
v___x_866_ = l_Lean_Meta_mkLambdaFVars(v_ys_853_, v___x_864_, v___x_850_, v___x_851_, v___x_850_, v___x_851_, v___x_865_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
lean_dec_ref(v_ys_853_);
return v___x_866_;
}
else
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
lean_dec(v___x_860_);
v___x_867_ = lean_array_get_size(v_ys_853_);
v___x_868_ = lean_unsigned_to_nat(1u);
v___x_869_ = lean_nat_sub(v___x_867_, v___x_868_);
v___x_870_ = lean_array_get_borrowed(v___x_848_, v_ys_853_, v___x_869_);
lean_dec(v___x_869_);
v___x_871_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0(v_a_847_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v_cidx_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v___x_871_, 1);
v_cidx_873_ = lean_ctor_get(v_a_872_, 2);
lean_inc(v_cidx_873_);
lean_dec(v_a_872_);
v___x_874_ = l_Lean_mkRawNatLit(v_cidx_873_);
v___x_875_ = l_Lean_mkHasNotBitProof(v___x_874_, v_a_852_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_877_; uint8_t v___x_878_; lean_object* v___x_879_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_876_);
lean_dec_ref_known(v___x_875_, 1);
lean_inc(v___x_870_);
v___x_877_ = l_Lean_Expr_app___override(v___x_870_, v_a_876_);
v___x_878_ = 1;
v___x_879_ = l_Lean_Meta_mkLambdaFVars(v_ys_853_, v___x_877_, v___x_850_, v___x_851_, v___x_850_, v___x_851_, v___x_878_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
lean_dec_ref(v_ys_853_);
return v___x_879_;
}
else
{
lean_dec_ref(v_ys_853_);
return v___x_875_;
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec_ref(v_ys_853_);
v_a_880_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_871_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_871_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12___lam__0___boxed(lean_object* v_ctors_888_, lean_object* v_a_889_, lean_object* v___x_890_, lean_object* v_a_891_, lean_object* v___x_892_, lean_object* v___x_893_, lean_object* v_a_894_, lean_object* v_ys_895_, lean_object* v_x_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
uint8_t v___x_22173__boxed_902_; uint8_t v___x_22174__boxed_903_; lean_object* v_res_904_; 
v___x_22173__boxed_902_ = lean_unbox(v___x_892_);
v___x_22174__boxed_903_ = lean_unbox(v___x_893_);
v_res_904_ = l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12___lam__0(v_ctors_888_, v_a_889_, v___x_890_, v_a_891_, v___x_22173__boxed_902_, v___x_22174__boxed_903_, v_a_894_, v_ys_895_, v_x_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
lean_dec(v___y_898_);
lean_dec_ref(v___y_897_);
lean_dec_ref(v_x_896_);
lean_dec_ref(v_a_894_);
lean_dec_ref(v_a_891_);
lean_dec_ref(v___x_890_);
lean_dec_ref(v_ctors_888_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12(lean_object* v_ctors_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_as_908_, lean_object* v_bs_909_, lean_object* v_i_910_, lean_object* v_cs_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_917_ = lean_array_get_size(v_as_908_);
v___x_918_ = lean_nat_dec_lt(v_i_910_, v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; 
lean_dec(v_i_910_);
lean_dec_ref(v_a_907_);
lean_dec_ref(v_a_906_);
lean_dec_ref(v_ctors_905_);
v___x_919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_919_, 0, v_cs_911_);
return v___x_919_;
}
else
{
lean_object* v___x_920_; uint8_t v___x_921_; 
v___x_920_ = lean_array_get_size(v_bs_909_);
v___x_921_ = lean_nat_dec_lt(v_i_910_, v___x_920_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; 
lean_dec(v_i_910_);
lean_dec_ref(v_a_907_);
lean_dec_ref(v_a_906_);
lean_dec_ref(v_ctors_905_);
v___x_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_922_, 0, v_cs_911_);
return v___x_922_;
}
else
{
lean_object* v___x_923_; uint8_t v___x_924_; lean_object* v_a_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___f_928_; lean_object* v_b_929_; lean_object* v___x_930_; 
v___x_923_ = l_Lean_instInhabitedExpr;
v___x_924_ = 0;
v_a_925_ = lean_array_fget_borrowed(v_as_908_, v_i_910_);
v___x_926_ = lean_box(v___x_924_);
v___x_927_ = lean_box(v___x_921_);
lean_inc_ref(v_a_907_);
lean_inc_ref(v_a_906_);
lean_inc(v_a_925_);
lean_inc_ref(v_ctors_905_);
v___f_928_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12___lam__0___boxed), 14, 7);
lean_closure_set(v___f_928_, 0, v_ctors_905_);
lean_closure_set(v___f_928_, 1, v_a_925_);
lean_closure_set(v___f_928_, 2, v___x_923_);
lean_closure_set(v___f_928_, 3, v_a_906_);
lean_closure_set(v___f_928_, 4, v___x_926_);
lean_closure_set(v___f_928_, 5, v___x_927_);
lean_closure_set(v___f_928_, 6, v_a_907_);
v_b_929_ = lean_array_fget_borrowed(v_bs_909_, v_i_910_);
lean_inc(v_b_929_);
v___x_930_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg(v_b_929_, v___f_928_, v___x_924_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v_a_931_ = lean_ctor_get(v___x_930_, 0);
lean_inc(v_a_931_);
lean_dec_ref_known(v___x_930_, 1);
v___x_932_ = lean_unsigned_to_nat(1u);
v___x_933_ = lean_nat_add(v_i_910_, v___x_932_);
lean_dec(v_i_910_);
v___x_934_ = lean_array_push(v_cs_911_, v_a_931_);
v_i_910_ = v___x_933_;
v_cs_911_ = v___x_934_;
goto _start;
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_dec_ref(v_cs_911_);
lean_dec(v_i_910_);
lean_dec_ref(v_a_907_);
lean_dec_ref(v_a_906_);
lean_dec_ref(v_ctors_905_);
v_a_936_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_930_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_930_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12___boxed(lean_object* v_ctors_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_as_947_, lean_object* v_bs_948_, lean_object* v_i_949_, lean_object* v_cs_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12(v_ctors_944_, v_a_945_, v_a_946_, v_as_947_, v_bs_948_, v_i_949_, v_cs_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec_ref(v_bs_948_);
lean_dec_ref(v_as_947_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__8(size_t v_sz_957_, size_t v_i_958_, lean_object* v_bs_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
uint8_t v___x_965_; 
v___x_965_ = lean_usize_dec_lt(v_i_958_, v_sz_957_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; 
v___x_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_966_, 0, v_bs_959_);
return v___x_966_;
}
else
{
lean_object* v_v_967_; lean_object* v___x_968_; lean_object* v_bs_x27_969_; lean_object* v___x_970_; 
v_v_967_ = lean_array_uget(v_bs_959_, v_i_958_);
v___x_968_ = lean_unsigned_to_nat(0u);
v_bs_x27_969_ = lean_array_uset(v_bs_959_, v_i_958_, v___x_968_);
v___x_970_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0(v_v_967_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; lean_object* v_cidx_972_; size_t v___x_973_; size_t v___x_974_; lean_object* v___x_975_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_a_971_);
lean_dec_ref_known(v___x_970_, 1);
v_cidx_972_ = lean_ctor_get(v_a_971_, 2);
lean_inc(v_cidx_972_);
lean_dec(v_a_971_);
v___x_973_ = ((size_t)1ULL);
v___x_974_ = lean_usize_add(v_i_958_, v___x_973_);
v___x_975_ = lean_array_uset(v_bs_x27_969_, v_i_958_, v_cidx_972_);
v_i_958_ = v___x_974_;
v_bs_959_ = v___x_975_;
goto _start;
}
else
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
lean_dec_ref(v_bs_x27_969_);
v_a_977_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_970_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_970_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__8___boxed(lean_object* v_sz_985_, lean_object* v_i_986_, lean_object* v_bs_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
size_t v_sz_boxed_993_; size_t v_i_boxed_994_; lean_object* v_res_995_; 
v_sz_boxed_993_ = lean_unbox_usize(v_sz_985_);
lean_dec(v_sz_985_);
v_i_boxed_994_ = lean_unbox_usize(v_i_986_);
lean_dec(v_i_986_);
v_res_995_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__8(v_sz_boxed_993_, v_i_boxed_994_, v_bs_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg___lam__0(lean_object* v_k_996_, lean_object* v_b_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v___x_1003_; 
lean_inc(v___y_1001_);
lean_inc_ref(v___y_1000_);
lean_inc(v___y_999_);
lean_inc_ref(v___y_998_);
v___x_1003_ = lean_apply_6(v_k_996_, v_b_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, lean_box(0));
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg___lam__0___boxed(lean_object* v_k_1004_, lean_object* v_b_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg___lam__0(v_k_1004_, v_b_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg(lean_object* v_name_1012_, uint8_t v_bi_1013_, lean_object* v_type_1014_, lean_object* v_k_1015_, uint8_t v_kind_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v___f_1022_; lean_object* v___x_1023_; 
v___f_1022_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1022_, 0, v_k_1015_);
v___x_1023_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1012_, v_bi_1013_, v_type_1014_, v___f_1022_, v_kind_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
v_a_1032_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v___x_1023_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1023_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1032_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg___boxed(lean_object* v_name_1040_, lean_object* v_bi_1041_, lean_object* v_type_1042_, lean_object* v_k_1043_, lean_object* v_kind_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
uint8_t v_bi_boxed_1050_; uint8_t v_kind_boxed_1051_; lean_object* v_res_1052_; 
v_bi_boxed_1050_ = lean_unbox(v_bi_1041_);
v_kind_boxed_1051_ = lean_unbox(v_kind_1044_);
v_res_1052_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg(v_name_1040_, v_bi_boxed_1050_, v_type_1042_, v_k_1043_, v_kind_boxed_1051_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9___redArg(lean_object* v_name_1053_, lean_object* v_type_1054_, lean_object* v_k_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
uint8_t v___x_1061_; uint8_t v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = 0;
v___x_1062_ = 0;
v___x_1063_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg(v_name_1053_, v___x_1061_, v_type_1054_, v_k_1055_, v___x_1062_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9___redArg___boxed(lean_object* v_name_1064_, lean_object* v_type_1065_, lean_object* v_k_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9___redArg(v_name_1064_, v_type_1065_, v_k_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
return v_res_1072_;
}
}
static lean_object* _init_l_Lean_Meta_mkSparseCasesOn___lam__2___closed__6(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = ((lean_object*)(l_Lean_Meta_mkSparseCasesOn___lam__2___closed__5));
v___x_1083_ = l_Lean_stringToMessageData(v___x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2(lean_object* v_numParams_1084_, lean_object* v___x_1085_, lean_object* v_numIndices_1086_, lean_object* v_ctors_1087_, lean_object* v___x_1088_, lean_object* v___x_1089_, lean_object* v_a_1090_, lean_object* v_ctors_1091_, lean_object* v___x_1092_, lean_object* v_xs_1093_, lean_object* v_x_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v___y_1101_; lean_object* v___y_1102_; lean_object* v___y_1103_; lean_object* v___y_1104_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; uint8_t v___x_1215_; 
v___x_1208_ = lean_array_get_size(v_xs_1093_);
v___x_1209_ = lean_unsigned_to_nat(1u);
v___x_1210_ = lean_nat_add(v_numParams_1084_, v___x_1209_);
v___x_1211_ = lean_nat_add(v___x_1210_, v_numIndices_1086_);
lean_dec(v___x_1210_);
v___x_1212_ = lean_nat_add(v___x_1211_, v___x_1209_);
lean_dec(v___x_1211_);
v___x_1213_ = l_List_lengthTR___redArg(v_ctors_1091_);
v___x_1214_ = lean_nat_add(v___x_1212_, v___x_1213_);
lean_dec(v___x_1213_);
lean_dec(v___x_1212_);
v___x_1215_ = lean_nat_dec_eq(v___x_1208_, v___x_1214_);
lean_dec(v___x_1214_);
if (v___x_1215_ == 0)
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
lean_dec_ref(v_xs_1093_);
lean_dec(v_ctors_1091_);
lean_dec(v___x_1089_);
lean_dec(v___x_1088_);
lean_dec_ref(v_ctors_1087_);
lean_dec(v_numParams_1084_);
v___x_1216_ = lean_obj_once(&l_Lean_Meta_mkSparseCasesOn___lam__2___closed__6, &l_Lean_Meta_mkSparseCasesOn___lam__2___closed__6_once, _init_l_Lean_Meta_mkSparseCasesOn___lam__2___closed__6);
v___x_1217_ = l_Lean_MessageData_ofConstName(v___x_1092_, v___x_1215_);
v___x_1218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1216_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1);
v___x_1220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1218_);
lean_ctor_set(v___x_1220_, 1, v___x_1219_);
v___x_1221_ = l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(v___x_1220_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
v_a_1222_ = lean_ctor_get(v___x_1221_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1221_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1221_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
else
{
lean_dec(v___x_1092_);
v___y_1101_ = v___y_1095_;
v___y_1102_ = v___y_1096_;
v___y_1103_ = v___y_1097_;
v___y_1104_ = v___y_1098_;
goto v___jp_1100_;
}
v___jp_1100_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___f_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; size_t v_sz_1121_; size_t v___x_1122_; lean_object* v___x_1123_; 
v___x_1105_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1084_);
lean_inc_ref_n(v_xs_1093_, 2);
v___x_1106_ = l_Array_toSubarray___redArg(v_xs_1093_, v___x_1105_, v_numParams_1084_);
v___x_1107_ = lean_array_get(v___x_1085_, v_xs_1093_, v_numParams_1084_);
v___x_1108_ = lean_unsigned_to_nat(1u);
v___x_1109_ = lean_nat_add(v_numParams_1084_, v___x_1108_);
lean_dec(v_numParams_1084_);
v___x_1110_ = lean_nat_add(v___x_1109_, v_numIndices_1086_);
lean_inc(v___x_1110_);
v___x_1111_ = l_Array_toSubarray___redArg(v_xs_1093_, v___x_1109_, v___x_1110_);
v___x_1112_ = lean_array_get(v___x_1085_, v_xs_1093_, v___x_1110_);
v___x_1113_ = l_Subarray_copy___redArg(v___x_1111_);
v___x_1114_ = lean_mk_empty_array_with_capacity(v___x_1108_);
lean_inc(v___x_1112_);
lean_inc_ref_n(v___x_1114_, 2);
v___x_1115_ = lean_array_push(v___x_1114_, v___x_1112_);
lean_inc_ref(v___x_1113_);
v___x_1116_ = l_Array_append___redArg(v___x_1113_, v___x_1115_);
lean_inc_ref(v___x_1116_);
lean_inc(v___x_1107_);
v___f_1117_ = lean_alloc_closure((void*)(l_Lean_Meta_mkSparseCasesOn___lam__1___boxed), 9, 3);
lean_closure_set(v___f_1117_, 0, v___x_1114_);
lean_closure_set(v___f_1117_, 1, v___x_1107_);
lean_closure_set(v___f_1117_, 2, v___x_1116_);
v___x_1118_ = lean_nat_add(v___x_1110_, v___x_1108_);
lean_dec(v___x_1110_);
v___x_1119_ = lean_array_get_size(v_xs_1093_);
v___x_1120_ = l_Array_toSubarray___redArg(v_xs_1093_, v___x_1118_, v___x_1119_);
v_sz_1121_ = lean_array_size(v_ctors_1087_);
v___x_1122_ = ((size_t)0ULL);
lean_inc_ref(v_ctors_1087_);
v___x_1123_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__7(v___x_1120_, v_sz_1121_, v___x_1122_, v_ctors_1087_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec_ref(v___x_1120_);
if (lean_obj_tag(v___x_1123_) == 0)
{
lean_object* v_a_1124_; lean_object* v___x_1125_; 
v_a_1124_ = lean_ctor_get(v___x_1123_, 0);
lean_inc(v_a_1124_);
lean_dec_ref_known(v___x_1123_, 1);
lean_inc_ref(v_ctors_1087_);
v___x_1125_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkSparseCasesOn_spec__8(v_sz_1121_, v___x_1122_, v_ctors_1087_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
if (lean_obj_tag(v___x_1125_) == 0)
{
lean_object* v_a_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v_a_1126_ = lean_ctor_get(v___x_1125_, 0);
lean_inc(v_a_1126_);
lean_dec_ref_known(v___x_1125_, 1);
v___x_1127_ = l_Lean_mkConst(v___x_1088_, v___x_1089_);
v___x_1128_ = l_Subarray_copy___redArg(v___x_1106_);
lean_inc_ref(v___x_1128_);
v___x_1129_ = l_Array_append___redArg(v___x_1128_, v___x_1113_);
v___x_1130_ = l_Array_append___redArg(v___x_1129_, v___x_1115_);
v___x_1131_ = l_Lean_mkAppN(v___x_1127_, v___x_1130_);
lean_dec_ref(v___x_1130_);
v___x_1132_ = l_Lean_mkHasNotBit(v___x_1131_, v_a_1126_);
v___x_1133_ = ((lean_object*)(l_Lean_Meta_mkSparseCasesOn___lam__2___closed__1));
v___x_1134_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9___redArg(v___x_1133_, v___x_1132_, v___f_1117_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; uint8_t v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
lean_inc(v_a_1135_);
lean_dec_ref_known(v___x_1134_, 1);
v___x_1136_ = 0;
v___x_1137_ = l_Lean_ConstantInfo_value_x21(v_a_1090_, v___x_1136_);
v___x_1138_ = l_Lean_mkAppN(v___x_1137_, v___x_1128_);
v___x_1139_ = ((lean_object*)(l_Lean_Meta_mkSparseCasesOn___lam__2___closed__3));
v___x_1140_ = l_Lean_Core_mkFreshUserName(v___x_1139_, v___y_1103_, v___y_1104_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; uint8_t v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; uint8_t v___x_1145_; uint8_t v___x_1146_; lean_object* v___x_1147_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1141_);
lean_dec_ref_known(v___x_1140_, 1);
v___x_1142_ = 0;
lean_inc(v___x_1107_);
v___x_1143_ = l_Lean_mkAppN(v___x_1107_, v___x_1116_);
v___x_1144_ = l_Lean_mkForall(v_a_1141_, v___x_1142_, v_a_1135_, v___x_1143_);
v___x_1145_ = 1;
v___x_1146_ = 1;
v___x_1147_ = l_Lean_Meta_mkLambdaFVars(v___x_1116_, v___x_1144_, v___x_1136_, v___x_1145_, v___x_1136_, v___x_1145_, v___x_1146_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec_ref(v___x_1116_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v___x_1147_, 1);
v___x_1149_ = l_Lean_Expr_app___override(v___x_1138_, v_a_1148_);
v___x_1150_ = l_Lean_mkAppN(v___x_1149_, v___x_1113_);
v___x_1151_ = l_Lean_Expr_app___override(v___x_1150_, v___x_1112_);
v___x_1152_ = l_List_lengthTR___redArg(v_ctors_1091_);
lean_inc_ref(v___x_1151_);
v___x_1153_ = l_Lean_Meta_inferArgumentTypesN(v___x_1152_, v___x_1151_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v___x_1155_ = lean_array_mk(v_ctors_1091_);
v___x_1156_ = ((lean_object*)(l_Lean_Meta_mkSparseCasesOn___lam__2___closed__4));
lean_inc(v_a_1124_);
v___x_1157_ = l_Array_zipWithMAux___at___00Lean_Meta_mkSparseCasesOn_spec__12(v_ctors_1087_, v_a_1124_, v_a_1126_, v___x_1155_, v_a_1154_, v___x_1105_, v___x_1156_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec(v_a_1154_);
lean_dec_ref(v___x_1155_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___x_1157_, 1);
v___x_1159_ = l_Lean_mkAppN(v___x_1151_, v_a_1158_);
lean_dec(v_a_1158_);
v___x_1160_ = l_Lean_Core_betaReduce(v___x_1159_, v___y_1103_, v___y_1104_);
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v_a_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v_a_1161_ = lean_ctor_get(v___x_1160_, 0);
lean_inc(v_a_1161_);
lean_dec_ref_known(v___x_1160_, 1);
v___x_1162_ = lean_array_push(v___x_1114_, v___x_1107_);
v___x_1163_ = l_Array_append___redArg(v___x_1128_, v___x_1162_);
lean_dec_ref(v___x_1162_);
v___x_1164_ = l_Array_append___redArg(v___x_1163_, v___x_1113_);
lean_dec_ref(v___x_1113_);
v___x_1165_ = l_Array_append___redArg(v___x_1164_, v___x_1115_);
lean_dec_ref(v___x_1115_);
v___x_1166_ = l_Array_append___redArg(v___x_1165_, v_a_1124_);
lean_dec(v_a_1124_);
v___x_1167_ = l_Lean_Meta_mkLambdaFVars(v___x_1166_, v_a_1161_, v___x_1136_, v___x_1145_, v___x_1136_, v___x_1145_, v___x_1146_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec_ref(v___x_1166_);
return v___x_1167_;
}
else
{
lean_dec_ref(v___x_1128_);
lean_dec(v_a_1124_);
lean_dec_ref(v___x_1115_);
lean_dec_ref(v___x_1114_);
lean_dec_ref(v___x_1113_);
lean_dec(v___x_1107_);
return v___x_1160_;
}
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1175_; 
lean_dec_ref(v___x_1151_);
lean_dec_ref(v___x_1128_);
lean_dec(v_a_1124_);
lean_dec_ref(v___x_1115_);
lean_dec_ref(v___x_1114_);
lean_dec_ref(v___x_1113_);
lean_dec(v___x_1107_);
v_a_1168_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1170_ = v___x_1157_;
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1157_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1168_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
else
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
lean_dec_ref(v___x_1151_);
lean_dec_ref(v___x_1128_);
lean_dec(v_a_1126_);
lean_dec(v_a_1124_);
lean_dec_ref(v___x_1115_);
lean_dec_ref(v___x_1114_);
lean_dec_ref(v___x_1113_);
lean_dec(v___x_1107_);
lean_dec(v_ctors_1091_);
lean_dec_ref(v_ctors_1087_);
v_a_1176_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1153_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1153_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
else
{
lean_dec_ref(v___x_1138_);
lean_dec_ref(v___x_1128_);
lean_dec(v_a_1126_);
lean_dec(v_a_1124_);
lean_dec_ref(v___x_1115_);
lean_dec_ref(v___x_1114_);
lean_dec_ref(v___x_1113_);
lean_dec(v___x_1112_);
lean_dec(v___x_1107_);
lean_dec(v_ctors_1091_);
lean_dec_ref(v_ctors_1087_);
return v___x_1147_;
}
}
else
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
lean_dec_ref(v___x_1138_);
lean_dec(v_a_1135_);
lean_dec_ref(v___x_1128_);
lean_dec(v_a_1126_);
lean_dec(v_a_1124_);
lean_dec_ref(v___x_1116_);
lean_dec_ref(v___x_1115_);
lean_dec_ref(v___x_1114_);
lean_dec_ref(v___x_1113_);
lean_dec(v___x_1112_);
lean_dec(v___x_1107_);
lean_dec(v_ctors_1091_);
lean_dec_ref(v_ctors_1087_);
v_a_1184_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1140_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1140_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
else
{
lean_dec_ref(v___x_1128_);
lean_dec(v_a_1126_);
lean_dec(v_a_1124_);
lean_dec_ref(v___x_1116_);
lean_dec_ref(v___x_1115_);
lean_dec_ref(v___x_1114_);
lean_dec_ref(v___x_1113_);
lean_dec(v___x_1112_);
lean_dec(v___x_1107_);
lean_dec(v_ctors_1091_);
lean_dec_ref(v_ctors_1087_);
return v___x_1134_;
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec(v_a_1124_);
lean_dec_ref(v___f_1117_);
lean_dec_ref(v___x_1116_);
lean_dec_ref(v___x_1115_);
lean_dec_ref(v___x_1114_);
lean_dec_ref(v___x_1113_);
lean_dec(v___x_1112_);
lean_dec(v___x_1107_);
lean_dec_ref(v___x_1106_);
lean_dec(v_ctors_1091_);
lean_dec(v___x_1089_);
lean_dec(v___x_1088_);
lean_dec_ref(v_ctors_1087_);
v_a_1192_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1125_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1125_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
lean_dec_ref(v___f_1117_);
lean_dec_ref(v___x_1116_);
lean_dec_ref(v___x_1115_);
lean_dec_ref(v___x_1114_);
lean_dec_ref(v___x_1113_);
lean_dec(v___x_1112_);
lean_dec(v___x_1107_);
lean_dec_ref(v___x_1106_);
lean_dec(v_ctors_1091_);
lean_dec(v___x_1089_);
lean_dec(v___x_1088_);
lean_dec_ref(v_ctors_1087_);
v_a_1200_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1123_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1123_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___lam__2___boxed(lean_object* v_numParams_1230_, lean_object* v___x_1231_, lean_object* v_numIndices_1232_, lean_object* v_ctors_1233_, lean_object* v___x_1234_, lean_object* v___x_1235_, lean_object* v_a_1236_, lean_object* v_ctors_1237_, lean_object* v___x_1238_, lean_object* v_xs_1239_, lean_object* v_x_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_Meta_mkSparseCasesOn___lam__2(v_numParams_1230_, v___x_1231_, v_numIndices_1232_, v_ctors_1233_, v___x_1234_, v___x_1235_, v_a_1236_, v_ctors_1237_, v___x_1238_, v_xs_1239_, v_x_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
lean_dec_ref(v_x_1240_);
lean_dec_ref(v_a_1236_);
lean_dec(v_numIndices_1232_);
lean_dec_ref(v___x_1231_);
return v_res_1246_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_mkSparseCasesOn_spec__17(lean_object* v_a_1247_, lean_object* v_x_1248_){
_start:
{
if (lean_obj_tag(v_x_1248_) == 0)
{
uint8_t v___x_1249_; 
v___x_1249_ = 0;
return v___x_1249_;
}
else
{
lean_object* v_head_1250_; lean_object* v_tail_1251_; uint8_t v___x_1252_; 
v_head_1250_ = lean_ctor_get(v_x_1248_, 0);
v_tail_1251_ = lean_ctor_get(v_x_1248_, 1);
v___x_1252_ = lean_name_eq(v_a_1247_, v_head_1250_);
if (v___x_1252_ == 0)
{
v_x_1248_ = v_tail_1251_;
goto _start;
}
else
{
return v___x_1252_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_mkSparseCasesOn_spec__17___boxed(lean_object* v_a_1254_, lean_object* v_x_1255_){
_start:
{
uint8_t v_res_1256_; lean_object* v_r_1257_; 
v_res_1256_ = l_List_elem___at___00Lean_Meta_mkSparseCasesOn_spec__17(v_a_1254_, v_x_1255_);
lean_dec(v_x_1255_);
lean_dec(v_a_1254_);
v_r_1257_ = lean_box(v_res_1256_);
return v_r_1257_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__1(void){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__0));
v___x_1260_ = l_Lean_stringToMessageData(v___x_1259_);
return v___x_1260_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__3(void){
_start:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1262_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__2));
v___x_1263_ = l_Lean_stringToMessageData(v___x_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18(lean_object* v_a_1264_, lean_object* v_indName_1265_, lean_object* v_as_1266_, size_t v_sz_1267_, size_t v_i_1268_, lean_object* v_b_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v_a_1276_; uint8_t v___x_1280_; 
v___x_1280_ = lean_usize_dec_lt(v_i_1268_, v_sz_1267_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; 
lean_dec(v_indName_1265_);
v___x_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1281_, 0, v_b_1269_);
return v___x_1281_;
}
else
{
lean_object* v_ctors_1282_; lean_object* v___x_1283_; lean_object* v_a_1284_; uint8_t v___x_1285_; 
v_ctors_1282_ = lean_ctor_get(v_a_1264_, 4);
v___x_1283_ = lean_box(0);
v_a_1284_ = lean_array_uget_borrowed(v_as_1266_, v_i_1268_);
v___x_1285_ = l_List_elem___at___00Lean_Meta_mkSparseCasesOn_spec__17(v_a_1284_, v_ctors_1282_);
if (v___x_1285_ == 0)
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1286_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__1);
lean_inc(v_a_1284_);
v___x_1287_ = l_Lean_MessageData_ofName(v_a_1284_);
v___x_1288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1286_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___closed__3);
v___x_1290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
lean_inc(v_indName_1265_);
v___x_1291_ = l_Lean_MessageData_ofName(v_indName_1265_);
v___x_1292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1290_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(v___x_1292_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_dec_ref_known(v___x_1293_, 1);
v_a_1276_ = v___x_1283_;
goto v___jp_1275_;
}
else
{
lean_dec(v_indName_1265_);
return v___x_1293_;
}
}
else
{
v_a_1276_ = v___x_1283_;
goto v___jp_1275_;
}
}
v___jp_1275_:
{
size_t v___x_1277_; size_t v___x_1278_; 
v___x_1277_ = ((size_t)1ULL);
v___x_1278_ = lean_usize_add(v_i_1268_, v___x_1277_);
v_i_1268_ = v___x_1278_;
v_b_1269_ = v_a_1276_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18___boxed(lean_object* v_a_1294_, lean_object* v_indName_1295_, lean_object* v_as_1296_, lean_object* v_sz_1297_, lean_object* v_i_1298_, lean_object* v_b_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
size_t v_sz_boxed_1305_; size_t v_i_boxed_1306_; lean_object* v_res_1307_; 
v_sz_boxed_1305_ = lean_unbox_usize(v_sz_1297_);
lean_dec(v_sz_1297_);
v_i_boxed_1306_ = lean_unbox_usize(v_i_1298_);
lean_dec(v_i_1298_);
v_res_1307_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18(v_a_1294_, v_indName_1295_, v_as_1296_, v_sz_boxed_1305_, v_i_boxed_1306_, v_b_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec_ref(v_as_1296_);
lean_dec_ref(v_a_1294_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkSparseCasesOn_spec__6(lean_object* v_a_1308_, lean_object* v_a_1309_){
_start:
{
if (lean_obj_tag(v_a_1308_) == 0)
{
lean_object* v___x_1310_; 
v___x_1310_ = l_List_reverse___redArg(v_a_1309_);
return v___x_1310_;
}
else
{
lean_object* v_head_1311_; lean_object* v_tail_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1321_; 
v_head_1311_ = lean_ctor_get(v_a_1308_, 0);
v_tail_1312_ = lean_ctor_get(v_a_1308_, 1);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_a_1308_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1314_ = v_a_1308_;
v_isShared_1315_ = v_isSharedCheck_1321_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_tail_1312_);
lean_inc(v_head_1311_);
lean_dec(v_a_1308_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1321_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1318_; 
v___x_1316_ = l_Lean_mkLevelParam(v_head_1311_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set(v___x_1314_, 1, v_a_1309_);
lean_ctor_set(v___x_1314_, 0, v___x_1316_);
v___x_1318_ = v___x_1314_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1316_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_a_1309_);
v___x_1318_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
v_a_1308_ = v_tail_1312_;
v_a_1309_ = v___x_1318_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__0(void){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_);
v___x_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
return v___x_1323_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__1(void){
_start:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1324_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__0);
v___x_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
return v___x_1325_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__2(void){
_start:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__0);
v___x_1327_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
lean_ctor_set(v___x_1327_, 2, v___x_1326_);
lean_ctor_set(v___x_1327_, 3, v___x_1326_);
lean_ctor_set(v___x_1327_, 4, v___x_1326_);
lean_ctor_set(v___x_1327_, 5, v___x_1326_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg(lean_object* v_declName_1328_, uint8_t v_s_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v___x_1333_; lean_object* v_env_1334_; lean_object* v_nextMacroScope_1335_; lean_object* v_ngen_1336_; lean_object* v_auxDeclNGen_1337_; lean_object* v_traceState_1338_; lean_object* v_messages_1339_; lean_object* v_infoState_1340_; lean_object* v_snapshotTasks_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1370_; 
v___x_1333_ = lean_st_ref_take(v___y_1331_);
v_env_1334_ = lean_ctor_get(v___x_1333_, 0);
v_nextMacroScope_1335_ = lean_ctor_get(v___x_1333_, 1);
v_ngen_1336_ = lean_ctor_get(v___x_1333_, 2);
v_auxDeclNGen_1337_ = lean_ctor_get(v___x_1333_, 3);
v_traceState_1338_ = lean_ctor_get(v___x_1333_, 4);
v_messages_1339_ = lean_ctor_get(v___x_1333_, 6);
v_infoState_1340_ = lean_ctor_get(v___x_1333_, 7);
v_snapshotTasks_1341_ = lean_ctor_get(v___x_1333_, 8);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1370_ == 0)
{
lean_object* v_unused_1371_; 
v_unused_1371_ = lean_ctor_get(v___x_1333_, 5);
lean_dec(v_unused_1371_);
v___x_1343_ = v___x_1333_;
v_isShared_1344_ = v_isSharedCheck_1370_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_snapshotTasks_1341_);
lean_inc(v_infoState_1340_);
lean_inc(v_messages_1339_);
lean_inc(v_traceState_1338_);
lean_inc(v_auxDeclNGen_1337_);
lean_inc(v_ngen_1336_);
lean_inc(v_nextMacroScope_1335_);
lean_inc(v_env_1334_);
lean_dec(v___x_1333_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1370_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
uint8_t v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1350_; 
v___x_1345_ = 0;
v___x_1346_ = lean_box(0);
v___x_1347_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_1334_, v_declName_1328_, v_s_1329_, v___x_1345_, v___x_1346_);
v___x_1348_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__1);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 5, v___x_1348_);
lean_ctor_set(v___x_1343_, 0, v___x_1347_);
v___x_1350_ = v___x_1343_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1347_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v_nextMacroScope_1335_);
lean_ctor_set(v_reuseFailAlloc_1369_, 2, v_ngen_1336_);
lean_ctor_set(v_reuseFailAlloc_1369_, 3, v_auxDeclNGen_1337_);
lean_ctor_set(v_reuseFailAlloc_1369_, 4, v_traceState_1338_);
lean_ctor_set(v_reuseFailAlloc_1369_, 5, v___x_1348_);
lean_ctor_set(v_reuseFailAlloc_1369_, 6, v_messages_1339_);
lean_ctor_set(v_reuseFailAlloc_1369_, 7, v_infoState_1340_);
lean_ctor_set(v_reuseFailAlloc_1369_, 8, v_snapshotTasks_1341_);
v___x_1350_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v_mctx_1353_; lean_object* v_zetaDeltaFVarIds_1354_; lean_object* v_postponed_1355_; lean_object* v_diag_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1367_; 
v___x_1351_ = lean_st_ref_put(v___y_1331_, v___x_1350_);
v___x_1352_ = lean_st_ref_take(v___y_1330_);
v_mctx_1353_ = lean_ctor_get(v___x_1352_, 0);
v_zetaDeltaFVarIds_1354_ = lean_ctor_get(v___x_1352_, 2);
v_postponed_1355_ = lean_ctor_get(v___x_1352_, 3);
v_diag_1356_ = lean_ctor_get(v___x_1352_, 4);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1367_ == 0)
{
lean_object* v_unused_1368_; 
v_unused_1368_ = lean_ctor_get(v___x_1352_, 1);
lean_dec(v_unused_1368_);
v___x_1358_ = v___x_1352_;
v_isShared_1359_ = v_isSharedCheck_1367_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_diag_1356_);
lean_inc(v_postponed_1355_);
lean_inc(v_zetaDeltaFVarIds_1354_);
lean_inc(v_mctx_1353_);
lean_dec(v___x_1352_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1367_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1363_; 
v___x_1360_ = lean_box(0);
v___x_1361_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__2);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 1, v___x_1361_);
v___x_1363_ = v___x_1358_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_mctx_1353_);
lean_ctor_set(v_reuseFailAlloc_1366_, 1, v___x_1361_);
lean_ctor_set(v_reuseFailAlloc_1366_, 2, v_zetaDeltaFVarIds_1354_);
lean_ctor_set(v_reuseFailAlloc_1366_, 3, v_postponed_1355_);
lean_ctor_set(v_reuseFailAlloc_1366_, 4, v_diag_1356_);
v___x_1363_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_st_ref_put(v___y_1330_, v___x_1363_);
v___x_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1360_);
return v___x_1365_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___boxed(lean_object* v_declName_1372_, lean_object* v_s_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
uint8_t v_s_boxed_1377_; lean_object* v_res_1378_; 
v_s_boxed_1377_ = lean_unbox(v_s_1373_);
v_res_1378_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg(v_declName_1372_, v_s_boxed_1377_, v___y_1374_, v___y_1375_);
lean_dec(v___y_1375_);
lean_dec(v___y_1374_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15(lean_object* v_declName_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
uint8_t v___x_1385_; lean_object* v___x_1386_; 
v___x_1385_ = 0;
v___x_1386_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg(v_declName_1379_, v___x_1385_, v___y_1381_, v___y_1383_);
return v___x_1386_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15___boxed(lean_object* v_declName_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15(v_declName_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
return v_res_1393_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1395_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___closed__0));
v___x_1396_ = l_Lean_stringToMessageData(v___x_1395_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4(lean_object* v_constName_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v___x_1403_; lean_object* v_env_1404_; lean_object* v___x_1405_; 
v___x_1403_ = lean_st_ref_get(v___y_1401_);
v_env_1404_ = lean_ctor_get(v___x_1403_, 0);
lean_inc_ref(v_env_1404_);
lean_dec(v___x_1403_);
lean_inc(v_constName_1397_);
v___x_1405_ = l_Lean_isInductiveCore_x3f(v_env_1404_, v_constName_1397_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_object* v___x_1406_; uint8_t v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1406_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1);
v___x_1407_ = 0;
v___x_1408_ = l_Lean_MessageData_ofConstName(v_constName_1397_, v___x_1407_);
v___x_1409_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1406_);
lean_ctor_set(v___x_1409_, 1, v___x_1408_);
v___x_1410_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___closed__1);
v___x_1411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1409_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
v___x_1412_ = l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(v___x_1411_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1412_;
}
else
{
lean_object* v_val_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
lean_dec(v_constName_1397_);
v_val_1413_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1405_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_val_1413_);
lean_dec(v___x_1405_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
lean_ctor_set_tag(v___x_1415_, 0);
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_val_1413_);
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
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4___boxed(lean_object* v_constName_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4(v_constName_1421_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_);
lean_dec(v___y_1425_);
lean_dec_ref(v___y_1424_);
lean_dec(v___y_1423_);
lean_dec_ref(v___y_1422_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33___redArg(lean_object* v_ref_1428_, lean_object* v_msg_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v_toCold_1435_; lean_object* v_currRecDepth_1436_; lean_object* v_ref_1437_; uint8_t v_diag_1438_; uint8_t v_suppressElabErrors_1439_; lean_object* v_ref_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v_toCold_1435_ = lean_ctor_get(v___y_1432_, 0);
v_currRecDepth_1436_ = lean_ctor_get(v___y_1432_, 1);
v_ref_1437_ = lean_ctor_get(v___y_1432_, 2);
v_diag_1438_ = lean_ctor_get_uint8(v___y_1432_, sizeof(void*)*3);
v_suppressElabErrors_1439_ = lean_ctor_get_uint8(v___y_1432_, sizeof(void*)*3 + 1);
v_ref_1440_ = l_Lean_replaceRef(v_ref_1428_, v_ref_1437_);
lean_inc(v_currRecDepth_1436_);
lean_inc_ref(v_toCold_1435_);
v___x_1441_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1441_, 0, v_toCold_1435_);
lean_ctor_set(v___x_1441_, 1, v_currRecDepth_1436_);
lean_ctor_set(v___x_1441_, 2, v_ref_1440_);
lean_ctor_set_uint8(v___x_1441_, sizeof(void*)*3, v_diag_1438_);
lean_ctor_set_uint8(v___x_1441_, sizeof(void*)*3 + 1, v_suppressElabErrors_1439_);
v___x_1442_ = l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(v_msg_1429_, v___y_1430_, v___y_1431_, v___x_1441_, v___y_1433_);
lean_dec_ref_known(v___x_1441_, 3);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33___redArg___boxed(lean_object* v_ref_1443_, lean_object* v_msg_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33___redArg(v_ref_1443_, v_msg_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_);
lean_dec(v___y_1448_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v_ref_1443_);
return v_res_1450_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__0(void){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_);
v___x_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
return v___x_1452_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__1(void){
_start:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1453_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__0);
v___x_1454_ = lean_unsigned_to_nat(0u);
v___x_1455_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
lean_ctor_set(v___x_1455_, 2, v___x_1454_);
lean_ctor_set(v___x_1455_, 3, v___x_1454_);
lean_ctor_set(v___x_1455_, 4, v___x_1453_);
lean_ctor_set(v___x_1455_, 5, v___x_1453_);
lean_ctor_set(v___x_1455_, 6, v___x_1453_);
lean_ctor_set(v___x_1455_, 7, v___x_1453_);
lean_ctor_set(v___x_1455_, 8, v___x_1453_);
lean_ctor_set(v___x_1455_, 9, v___x_1453_);
lean_ctor_set(v___x_1455_, 10, v___x_1453_);
return v___x_1455_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__2(void){
_start:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1456_ = lean_unsigned_to_nat(32u);
v___x_1457_ = lean_mk_empty_array_with_capacity(v___x_1456_);
v___x_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1457_);
return v___x_1458_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__3(void){
_start:
{
size_t v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1459_ = ((size_t)5ULL);
v___x_1460_ = lean_unsigned_to_nat(0u);
v___x_1461_ = lean_unsigned_to_nat(32u);
v___x_1462_ = lean_mk_empty_array_with_capacity(v___x_1461_);
v___x_1463_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__2);
v___x_1464_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1464_, 0, v___x_1463_);
lean_ctor_set(v___x_1464_, 1, v___x_1462_);
lean_ctor_set(v___x_1464_, 2, v___x_1460_);
lean_ctor_set(v___x_1464_, 3, v___x_1460_);
lean_ctor_set_usize(v___x_1464_, 4, v___x_1459_);
return v___x_1464_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__4(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1465_ = lean_box(1);
v___x_1466_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__3);
v___x_1467_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__0);
v___x_1468_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1467_);
lean_ctor_set(v___x_1468_, 1, v___x_1466_);
lean_ctor_set(v___x_1468_, 2, v___x_1465_);
return v___x_1468_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__6(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1470_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__5));
v___x_1471_ = l_Lean_stringToMessageData(v___x_1470_);
return v___x_1471_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__8(void){
_start:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1473_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__7));
v___x_1474_ = l_Lean_stringToMessageData(v___x_1473_);
return v___x_1474_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__10(void){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1476_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__9));
v___x_1477_ = l_Lean_stringToMessageData(v___x_1476_);
return v___x_1477_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__12(void){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1479_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__11));
v___x_1480_ = l_Lean_stringToMessageData(v___x_1479_);
return v___x_1480_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__14(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1482_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__13));
v___x_1483_ = l_Lean_stringToMessageData(v___x_1482_);
return v___x_1483_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__16(void){
_start:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1485_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__15));
v___x_1486_ = l_Lean_stringToMessageData(v___x_1485_);
return v___x_1486_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__18(void){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1488_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__17));
v___x_1489_ = l_Lean_stringToMessageData(v___x_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg(lean_object* v_msg_1490_, lean_object* v_declHint_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v_env_1496_; uint8_t v___x_1497_; 
v___x_1494_ = lean_box(0);
v___x_1495_ = lean_st_ref_get(v___y_1492_);
v_env_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc_ref(v_env_1496_);
lean_dec(v___x_1495_);
v___x_1497_ = l_Lean_Name_isAnonymous(v_declHint_1491_);
if (v___x_1497_ == 0)
{
uint8_t v_isExporting_1498_; 
v_isExporting_1498_ = lean_ctor_get_uint8(v_env_1496_, sizeof(void*)*8);
if (v_isExporting_1498_ == 0)
{
lean_object* v___x_1499_; 
lean_dec_ref(v_env_1496_);
lean_dec(v_declHint_1491_);
v___x_1499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1499_, 0, v_msg_1490_);
return v___x_1499_;
}
else
{
lean_object* v___x_1500_; uint8_t v___x_1501_; 
lean_inc_ref(v_env_1496_);
v___x_1500_ = l_Lean_Environment_setExporting(v_env_1496_, v___x_1497_);
lean_inc(v_declHint_1491_);
lean_inc_ref(v___x_1500_);
v___x_1501_ = l_Lean_Environment_contains(v___x_1500_, v_declHint_1491_, v_isExporting_1498_);
if (v___x_1501_ == 0)
{
lean_object* v___x_1502_; 
lean_dec_ref(v___x_1500_);
lean_dec_ref(v_env_1496_);
lean_dec(v_declHint_1491_);
v___x_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1502_, 0, v_msg_1490_);
return v___x_1502_;
}
else
{
lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v_c_1508_; lean_object* v___x_1509_; 
v___x_1503_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__1);
v___x_1504_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__4);
v___x_1505_ = l_Lean_Options_empty;
v___x_1506_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1500_);
lean_ctor_set(v___x_1506_, 1, v___x_1503_);
lean_ctor_set(v___x_1506_, 2, v___x_1504_);
lean_ctor_set(v___x_1506_, 3, v___x_1505_);
lean_inc(v_declHint_1491_);
v___x_1507_ = l_Lean_MessageData_ofConstName(v_declHint_1491_, v___x_1497_);
v_c_1508_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1508_, 0, v___x_1506_);
lean_ctor_set(v_c_1508_, 1, v___x_1507_);
v___x_1509_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1496_, v_declHint_1491_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
lean_dec_ref(v_env_1496_);
lean_dec(v_declHint_1491_);
v___x_1510_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__6);
v___x_1511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1510_);
lean_ctor_set(v___x_1511_, 1, v_c_1508_);
v___x_1512_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__8);
v___x_1513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1511_);
lean_ctor_set(v___x_1513_, 1, v___x_1512_);
v___x_1514_ = l_Lean_MessageData_note(v___x_1513_);
v___x_1515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1515_, 0, v_msg_1490_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
v___x_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
return v___x_1516_;
}
else
{
lean_object* v_val_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1551_; 
v_val_1517_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1519_ = v___x_1509_;
v_isShared_1520_ = v_isSharedCheck_1551_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_val_1517_);
lean_dec(v___x_1509_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1551_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v_mod_1523_; uint8_t v___x_1524_; 
v___x_1521_ = l_Lean_Environment_header(v_env_1496_);
lean_dec_ref(v_env_1496_);
v___x_1522_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1521_);
v_mod_1523_ = lean_array_get(v___x_1494_, v___x_1522_, v_val_1517_);
lean_dec(v_val_1517_);
lean_dec_ref(v___x_1522_);
v___x_1524_ = l_Lean_isPrivateName(v_declHint_1491_);
lean_dec(v_declHint_1491_);
if (v___x_1524_ == 0)
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1536_; 
v___x_1525_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__10);
v___x_1526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1525_);
lean_ctor_set(v___x_1526_, 1, v_c_1508_);
v___x_1527_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__12);
v___x_1528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1526_);
lean_ctor_set(v___x_1528_, 1, v___x_1527_);
v___x_1529_ = l_Lean_MessageData_ofName(v_mod_1523_);
v___x_1530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1528_);
lean_ctor_set(v___x_1530_, 1, v___x_1529_);
v___x_1531_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__14);
v___x_1532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1530_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
v___x_1533_ = l_Lean_MessageData_note(v___x_1532_);
v___x_1534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1534_, 0, v_msg_1490_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set_tag(v___x_1519_, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1534_);
v___x_1536_ = v___x_1519_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1534_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
else
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1549_; 
v___x_1538_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__6);
v___x_1539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1538_);
lean_ctor_set(v___x_1539_, 1, v_c_1508_);
v___x_1540_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__16);
v___x_1541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1539_);
lean_ctor_set(v___x_1541_, 1, v___x_1540_);
v___x_1542_ = l_Lean_MessageData_ofName(v_mod_1523_);
v___x_1543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1541_);
lean_ctor_set(v___x_1543_, 1, v___x_1542_);
v___x_1544_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___closed__18);
v___x_1545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1543_);
lean_ctor_set(v___x_1545_, 1, v___x_1544_);
v___x_1546_ = l_Lean_MessageData_note(v___x_1545_);
v___x_1547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1547_, 0, v_msg_1490_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set_tag(v___x_1519_, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1547_);
v___x_1549_ = v___x_1519_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v___x_1547_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1552_; 
lean_dec_ref(v_env_1496_);
lean_dec(v_declHint_1491_);
v___x_1552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1552_, 0, v_msg_1490_);
return v___x_1552_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg___boxed(lean_object* v_msg_1553_, lean_object* v_declHint_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg(v_msg_1553_, v_declHint_1554_, v___y_1555_);
lean_dec(v___y_1555_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32(lean_object* v_msg_1558_, lean_object* v_declHint_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v___x_1565_; lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1575_; 
v___x_1565_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg(v_msg_1558_, v_declHint_1559_, v___y_1563_);
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1568_ = v___x_1565_;
v_isShared_1569_ = v_isSharedCheck_1575_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1565_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1575_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1573_; 
v___x_1570_ = l_Lean_unknownIdentifierMessageTag;
v___x_1571_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
lean_ctor_set(v___x_1571_, 1, v_a_1566_);
if (v_isShared_1569_ == 0)
{
lean_ctor_set(v___x_1568_, 0, v___x_1571_);
v___x_1573_ = v___x_1568_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v___x_1571_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32___boxed(lean_object* v_msg_1576_, lean_object* v_declHint_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32(v_msg_1576_, v_declHint_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30___redArg(lean_object* v_ref_1584_, lean_object* v_msg_1585_, lean_object* v_declHint_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v___x_1592_; lean_object* v_a_1593_; lean_object* v___x_1594_; 
v___x_1592_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32(v_msg_1585_, v_declHint_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_);
v_a_1593_ = lean_ctor_get(v___x_1592_, 0);
lean_inc(v_a_1593_);
lean_dec_ref(v___x_1592_);
v___x_1594_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33___redArg(v_ref_1584_, v_a_1593_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30___redArg___boxed(lean_object* v_ref_1595_, lean_object* v_msg_1596_, lean_object* v_declHint_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30___redArg(v_ref_1595_, v_msg_1596_, v_declHint_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
lean_dec(v_ref_1595_);
return v_res_1603_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___closed__0));
v___x_1606_ = l_Lean_stringToMessageData(v___x_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg(lean_object* v_ref_1607_, lean_object* v_constName_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v___x_1614_; uint8_t v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1614_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___closed__1);
v___x_1615_ = 0;
lean_inc(v_constName_1608_);
v___x_1616_ = l_Lean_MessageData_ofConstName(v_constName_1608_, v___x_1615_);
v___x_1617_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1614_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1);
v___x_1619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1617_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
v___x_1620_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30___redArg(v_ref_1607_, v___x_1619_, v_constName_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg___boxed(lean_object* v_ref_1621_, lean_object* v_constName_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg(v_ref_1621_, v_constName_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec(v_ref_1621_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8___redArg(lean_object* v_constName_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_){
_start:
{
lean_object* v_ref_1635_; lean_object* v___x_1636_; 
v_ref_1635_ = lean_ctor_get(v___y_1632_, 2);
v___x_1636_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg(v_ref_1635_, v_constName_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8___redArg___boxed(lean_object* v_constName_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8___redArg(v_constName_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5(lean_object* v_constName_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
lean_object* v___x_1650_; lean_object* v_env_1651_; uint8_t v___x_1652_; lean_object* v___x_1653_; 
v___x_1650_ = lean_st_ref_get(v___y_1648_);
v_env_1651_ = lean_ctor_get(v___x_1650_, 0);
lean_inc_ref(v_env_1651_);
lean_dec(v___x_1650_);
v___x_1652_ = 0;
lean_inc(v_constName_1644_);
v___x_1653_ = l_Lean_Environment_find_x3f(v_env_1651_, v_constName_1644_, v___x_1652_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8___redArg(v_constName_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
return v___x_1654_;
}
else
{
lean_object* v_val_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1662_; 
lean_dec(v_constName_1644_);
v_val_1655_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1657_ = v___x_1653_;
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_val_1655_);
lean_dec(v___x_1653_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1658_ == 0)
{
lean_ctor_set_tag(v___x_1657_, 0);
v___x_1660_ = v___x_1657_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_val_1655_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5___boxed(lean_object* v_constName_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l_Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5(v_constName_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7___redArg(lean_object* v_keys_1670_, lean_object* v_vals_1671_, lean_object* v_i_1672_, lean_object* v_k_1673_){
_start:
{
lean_object* v___x_1674_; uint8_t v___x_1675_; 
v___x_1674_ = lean_array_get_size(v_keys_1670_);
v___x_1675_ = lean_nat_dec_lt(v_i_1672_, v___x_1674_);
if (v___x_1675_ == 0)
{
lean_object* v___x_1676_; 
lean_dec(v_i_1672_);
v___x_1676_ = lean_box(0);
return v___x_1676_;
}
else
{
lean_object* v_k_x27_1677_; uint8_t v___x_1678_; 
v_k_x27_1677_ = lean_array_fget_borrowed(v_keys_1670_, v_i_1672_);
v___x_1678_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq(v_k_1673_, v_k_x27_1677_);
if (v___x_1678_ == 0)
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = lean_unsigned_to_nat(1u);
v___x_1680_ = lean_nat_add(v_i_1672_, v___x_1679_);
lean_dec(v_i_1672_);
v_i_1672_ = v___x_1680_;
goto _start;
}
else
{
lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1682_ = lean_array_fget_borrowed(v_vals_1671_, v_i_1672_);
lean_dec(v_i_1672_);
lean_inc(v___x_1682_);
v___x_1683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1682_);
return v___x_1683_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7___redArg___boxed(lean_object* v_keys_1684_, lean_object* v_vals_1685_, lean_object* v_i_1686_, lean_object* v_k_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7___redArg(v_keys_1684_, v_vals_1685_, v_i_1686_, v_k_1687_);
lean_dec_ref(v_k_1687_);
lean_dec_ref(v_vals_1685_);
lean_dec_ref(v_keys_1684_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2___redArg(lean_object* v_x_1689_, size_t v_x_1690_, lean_object* v_x_1691_){
_start:
{
if (lean_obj_tag(v_x_1689_) == 0)
{
lean_object* v_es_1692_; lean_object* v___x_1693_; size_t v___x_1694_; size_t v___x_1695_; lean_object* v_j_1696_; lean_object* v___x_1697_; 
v_es_1692_ = lean_ctor_get(v_x_1689_, 0);
v___x_1693_ = lean_box(2);
v___x_1694_ = ((size_t)31ULL);
v___x_1695_ = lean_usize_land(v_x_1690_, v___x_1694_);
v_j_1696_ = lean_usize_to_nat(v___x_1695_);
v___x_1697_ = lean_array_get_borrowed(v___x_1693_, v_es_1692_, v_j_1696_);
lean_dec(v_j_1696_);
switch(lean_obj_tag(v___x_1697_))
{
case 0:
{
lean_object* v_key_1698_; lean_object* v_val_1699_; uint8_t v___x_1700_; 
v_key_1698_ = lean_ctor_get(v___x_1697_, 0);
v_val_1699_ = lean_ctor_get(v___x_1697_, 1);
v___x_1700_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instBEqSparseCasesOnKey_beq(v_x_1691_, v_key_1698_);
if (v___x_1700_ == 0)
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_box(0);
return v___x_1701_;
}
else
{
lean_object* v___x_1702_; 
lean_inc(v_val_1699_);
v___x_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1702_, 0, v_val_1699_);
return v___x_1702_;
}
}
case 1:
{
lean_object* v_node_1703_; size_t v___x_1704_; size_t v___x_1705_; 
v_node_1703_ = lean_ctor_get(v___x_1697_, 0);
v___x_1704_ = ((size_t)5ULL);
v___x_1705_ = lean_usize_shift_right(v_x_1690_, v___x_1704_);
v_x_1689_ = v_node_1703_;
v_x_1690_ = v___x_1705_;
goto _start;
}
default: 
{
lean_object* v___x_1707_; 
v___x_1707_ = lean_box(0);
return v___x_1707_;
}
}
}
else
{
lean_object* v_ks_1708_; lean_object* v_vs_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v_ks_1708_ = lean_ctor_get(v_x_1689_, 0);
v_vs_1709_ = lean_ctor_get(v_x_1689_, 1);
v___x_1710_ = lean_unsigned_to_nat(0u);
v___x_1711_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7___redArg(v_ks_1708_, v_vs_1709_, v___x_1710_, v_x_1691_);
return v___x_1711_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2___redArg___boxed(lean_object* v_x_1712_, lean_object* v_x_1713_, lean_object* v_x_1714_){
_start:
{
size_t v_x_23538__boxed_1715_; lean_object* v_res_1716_; 
v_x_23538__boxed_1715_ = lean_unbox_usize(v_x_1713_);
lean_dec(v_x_1713_);
v_res_1716_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2___redArg(v_x_1712_, v_x_23538__boxed_1715_, v_x_1714_);
lean_dec_ref(v_x_1714_);
lean_dec_ref(v_x_1712_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1___redArg(lean_object* v_x_1717_, lean_object* v_x_1718_){
_start:
{
uint64_t v___x_1719_; size_t v___x_1720_; lean_object* v___x_1721_; 
v___x_1719_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_instHashableSparseCasesOnKey_hash(v_x_1718_);
v___x_1720_ = lean_uint64_to_usize(v___x_1719_);
v___x_1721_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2___redArg(v_x_1717_, v___x_1720_, v_x_1718_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1___redArg___boxed(lean_object* v_x_1722_, lean_object* v_x_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1___redArg(v_x_1722_, v_x_1723_);
lean_dec_ref(v_x_1723_);
lean_dec_ref(v_x_1722_);
return v_res_1724_;
}
}
static lean_object* _init_l_Lean_Meta_mkSparseCasesOn___closed__2(void){
_start:
{
lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1727_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__6));
v___x_1728_ = lean_unsigned_to_nat(42u);
v___x_1729_ = lean_unsigned_to_nat(81u);
v___x_1730_ = ((lean_object*)(l_Lean_Meta_mkSparseCasesOn___closed__1));
v___x_1731_ = ((lean_object*)(l_Lean_Meta_mkSparseCasesOn___closed__0));
v___x_1732_ = l_mkPanicMessageWithDecl(v___x_1731_, v___x_1730_, v___x_1729_, v___x_1728_, v___x_1727_);
return v___x_1732_;
}
}
static lean_object* _init_l_Lean_Meta_mkSparseCasesOn___closed__4(void){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = ((lean_object*)(l_Lean_Meta_mkSparseCasesOn___closed__3));
v___x_1735_ = l_Lean_stringToMessageData(v___x_1734_);
return v___x_1735_;
}
}
static lean_object* _init_l_Lean_Meta_mkSparseCasesOn___closed__5(void){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_1736_;
}
}
static lean_object* _init_l_Lean_Meta_mkSparseCasesOn___closed__9(void){
_start:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; 
v___x_1741_ = ((lean_object*)(l_Lean_Meta_mkSparseCasesOn___closed__8));
v___x_1742_ = l_Lean_stringToMessageData(v___x_1741_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn(lean_object* v_indName_1743_, lean_object* v_ctors_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_){
_start:
{
lean_object* v___x_1750_; lean_object* v___y_1752_; lean_object* v___y_1753_; lean_object* v___y_1754_; lean_object* v___y_1755_; lean_object* v___y_1756_; lean_object* v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; lean_object* v___y_1760_; lean_object* v___y_1761_; lean_object* v___y_1762_; lean_object* v___y_1763_; lean_object* v___y_1764_; lean_object* v___y_1765_; lean_object* v___y_1766_; lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v___y_1948_; lean_object* v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v_env_1997_; uint8_t v___y_1999_; lean_object* v___x_2054_; uint8_t v_isModule_2055_; 
v___x_1750_ = l_Lean_instInhabitedExpr;
v___x_1995_ = lean_obj_once(&l_Lean_Meta_mkSparseCasesOn___closed__5, &l_Lean_Meta_mkSparseCasesOn___closed__5_once, _init_l_Lean_Meta_mkSparseCasesOn___closed__5);
v___x_1996_ = lean_st_ref_get(v_a_1748_);
v_env_1997_ = lean_ctor_get(v___x_1996_, 0);
lean_inc_ref(v_env_1997_);
lean_dec(v___x_1996_);
v___x_2054_ = l_Lean_Environment_header(v_env_1997_);
v_isModule_2055_ = lean_ctor_get_uint8(v___x_2054_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2054_);
if (v_isModule_2055_ == 0)
{
v___y_1999_ = v_isModule_2055_;
goto v___jp_1998_;
}
else
{
uint8_t v_isExporting_2056_; 
v_isExporting_2056_ = lean_ctor_get_uint8(v_env_1997_, sizeof(void*)*8);
if (v_isExporting_2056_ == 0)
{
v___y_1999_ = v_isModule_2055_;
goto v___jp_1998_;
}
else
{
uint8_t v___x_2057_; 
v___x_2057_ = 0;
v___y_1999_ = v___x_2057_;
goto v___jp_1998_;
}
}
v___jp_1751_:
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Lean_ConstantInfo_levelParams(v___y_1758_);
if (lean_obj_tag(v___x_1769_) == 1)
{
lean_object* v_tail_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___f_1773_; lean_object* v___x_1774_; uint8_t v___x_1775_; lean_object* v___x_1776_; 
v_tail_1770_ = lean_ctor_get(v___x_1769_, 1);
lean_inc(v_tail_1770_);
v___x_1771_ = lean_box(0);
v___x_1772_ = l_List_mapTR_loop___at___00Lean_Meta_mkSparseCasesOn_spec__6(v_tail_1770_, v___x_1771_);
lean_inc_ref(v_ctors_1744_);
v___f_1773_ = lean_alloc_closure((void*)(l_Lean_Meta_mkSparseCasesOn___lam__2___boxed), 16, 9);
lean_closure_set(v___f_1773_, 0, v___y_1757_);
lean_closure_set(v___f_1773_, 1, v___x_1750_);
lean_closure_set(v___f_1773_, 2, v___y_1754_);
lean_closure_set(v___f_1773_, 3, v_ctors_1744_);
lean_closure_set(v___f_1773_, 4, v___y_1755_);
lean_closure_set(v___f_1773_, 5, v___x_1772_);
lean_closure_set(v___f_1773_, 6, v___y_1752_);
lean_closure_set(v___f_1773_, 7, v___y_1756_);
lean_closure_set(v___f_1773_, 8, v___y_1753_);
v___x_1774_ = l_Lean_ConstantInfo_type(v___y_1758_);
lean_dec_ref(v___y_1758_);
v___x_1775_ = 0;
v___x_1776_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_mkSparseCasesOn_spec__11___redArg(v___x_1774_, v___f_1773_, v___x_1775_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v_a_1777_; lean_object* v___x_1778_; 
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
lean_inc_n(v_a_1777_, 2);
lean_dec_ref_known(v___x_1776_, 1);
lean_inc(v___y_1768_);
lean_inc_ref(v___y_1767_);
lean_inc(v___y_1766_);
lean_inc_ref(v___y_1765_);
v___x_1778_ = lean_infer_type(v_a_1777_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_);
if (lean_obj_tag(v___x_1778_) == 0)
{
lean_object* v_a_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1928_; 
v_a_1779_ = lean_ctor_get(v___x_1778_, 0);
lean_inc(v_a_1779_);
lean_dec_ref_known(v___x_1778_, 1);
v___x_1780_ = lean_box(1);
lean_inc(v___y_1762_);
v___x_1781_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkSparseCasesOn_spec__14___redArg(v___y_1762_, v___x_1769_, v_a_1779_, v_a_1777_, v___x_1780_, v___y_1768_);
v_a_1782_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1784_ = v___x_1781_;
v_isShared_1785_ = v_isSharedCheck_1928_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1781_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1928_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
lean_ctor_set_tag(v___x_1784_, 1);
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_a_1782_);
v___x_1787_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
lean_object* v___x_1788_; 
v___x_1788_ = l_Lean_addDecl(v___x_1787_, v___x_1775_, v___y_1767_, v___y_1768_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v___x_1789_; lean_object* v_env_1790_; lean_object* v_nextMacroScope_1791_; lean_object* v_ngen_1792_; lean_object* v_auxDeclNGen_1793_; lean_object* v_traceState_1794_; lean_object* v_messages_1795_; lean_object* v_infoState_1796_; lean_object* v_snapshotTasks_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref_known(v___x_1788_, 1);
v___x_1789_ = lean_st_ref_take(v___y_1768_);
v_env_1790_ = lean_ctor_get(v___x_1789_, 0);
v_nextMacroScope_1791_ = lean_ctor_get(v___x_1789_, 1);
v_ngen_1792_ = lean_ctor_get(v___x_1789_, 2);
v_auxDeclNGen_1793_ = lean_ctor_get(v___x_1789_, 3);
v_traceState_1794_ = lean_ctor_get(v___x_1789_, 4);
v_messages_1795_ = lean_ctor_get(v___x_1789_, 6);
v_infoState_1796_ = lean_ctor_get(v___x_1789_, 7);
v_snapshotTasks_1797_ = lean_ctor_get(v___x_1789_, 8);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1917_ == 0)
{
lean_object* v_unused_1918_; 
v_unused_1918_ = lean_ctor_get(v___x_1789_, 5);
lean_dec(v_unused_1918_);
v___x_1799_ = v___x_1789_;
v_isShared_1800_ = v_isSharedCheck_1917_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_snapshotTasks_1797_);
lean_inc(v_infoState_1796_);
lean_inc(v_messages_1795_);
lean_inc(v_traceState_1794_);
lean_inc(v_auxDeclNGen_1793_);
lean_inc(v_ngen_1792_);
lean_inc(v_nextMacroScope_1791_);
lean_inc(v_env_1790_);
lean_dec(v___x_1789_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1917_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1804_; 
lean_inc_ref(v___y_1764_);
v___x_1801_ = l_Lean_EnvExtension_modifyState___redArg(v___y_1764_, v_env_1790_, v___y_1763_, v___y_1761_, v___y_1759_);
v___x_1802_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__1);
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 5, v___x_1802_);
lean_ctor_set(v___x_1799_, 0, v___x_1801_);
v___x_1804_ = v___x_1799_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v___x_1801_);
lean_ctor_set(v_reuseFailAlloc_1916_, 1, v_nextMacroScope_1791_);
lean_ctor_set(v_reuseFailAlloc_1916_, 2, v_ngen_1792_);
lean_ctor_set(v_reuseFailAlloc_1916_, 3, v_auxDeclNGen_1793_);
lean_ctor_set(v_reuseFailAlloc_1916_, 4, v_traceState_1794_);
lean_ctor_set(v_reuseFailAlloc_1916_, 5, v___x_1802_);
lean_ctor_set(v_reuseFailAlloc_1916_, 6, v_messages_1795_);
lean_ctor_set(v_reuseFailAlloc_1916_, 7, v_infoState_1796_);
lean_ctor_set(v_reuseFailAlloc_1916_, 8, v_snapshotTasks_1797_);
v___x_1804_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v_mctx_1807_; lean_object* v_zetaDeltaFVarIds_1808_; lean_object* v_postponed_1809_; lean_object* v_diag_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1914_; 
v___x_1805_ = lean_st_ref_put(v___y_1768_, v___x_1804_);
v___x_1806_ = lean_st_ref_take(v___y_1766_);
v_mctx_1807_ = lean_ctor_get(v___x_1806_, 0);
v_zetaDeltaFVarIds_1808_ = lean_ctor_get(v___x_1806_, 2);
v_postponed_1809_ = lean_ctor_get(v___x_1806_, 3);
v_diag_1810_ = lean_ctor_get(v___x_1806_, 4);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1806_);
if (v_isSharedCheck_1914_ == 0)
{
lean_object* v_unused_1915_; 
v_unused_1915_ = lean_ctor_get(v___x_1806_, 1);
lean_dec(v_unused_1915_);
v___x_1812_ = v___x_1806_;
v_isShared_1813_ = v_isSharedCheck_1914_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_diag_1810_);
lean_inc(v_postponed_1809_);
lean_inc(v_zetaDeltaFVarIds_1808_);
lean_inc(v_mctx_1807_);
lean_dec(v___x_1806_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1914_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1814_; lean_object* v___x_1816_; 
v___x_1814_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg___closed__2);
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 1, v___x_1814_);
v___x_1816_ = v___x_1812_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_mctx_1807_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v___x_1814_);
lean_ctor_set(v_reuseFailAlloc_1913_, 2, v_zetaDeltaFVarIds_1808_);
lean_ctor_set(v_reuseFailAlloc_1913_, 3, v_postponed_1809_);
lean_ctor_set(v_reuseFailAlloc_1913_, 4, v_diag_1810_);
v___x_1816_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v_env_1820_; lean_object* v_nextMacroScope_1821_; lean_object* v_ngen_1822_; lean_object* v_auxDeclNGen_1823_; lean_object* v_traceState_1824_; lean_object* v_messages_1825_; lean_object* v_infoState_1826_; lean_object* v_snapshotTasks_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1911_; 
v___x_1817_ = lean_st_ref_put(v___y_1766_, v___x_1816_);
lean_inc(v___y_1762_);
v___x_1818_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15(v___y_1762_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_);
lean_dec_ref(v___x_1818_);
v___x_1819_ = lean_st_ref_take(v___y_1768_);
v_env_1820_ = lean_ctor_get(v___x_1819_, 0);
v_nextMacroScope_1821_ = lean_ctor_get(v___x_1819_, 1);
v_ngen_1822_ = lean_ctor_get(v___x_1819_, 2);
v_auxDeclNGen_1823_ = lean_ctor_get(v___x_1819_, 3);
v_traceState_1824_ = lean_ctor_get(v___x_1819_, 4);
v_messages_1825_ = lean_ctor_get(v___x_1819_, 6);
v_infoState_1826_ = lean_ctor_get(v___x_1819_, 7);
v_snapshotTasks_1827_ = lean_ctor_get(v___x_1819_, 8);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1911_ == 0)
{
lean_object* v_unused_1912_; 
v_unused_1912_ = lean_ctor_get(v___x_1819_, 5);
lean_dec(v_unused_1912_);
v___x_1829_ = v___x_1819_;
v_isShared_1830_ = v_isSharedCheck_1911_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_snapshotTasks_1827_);
lean_inc(v_infoState_1826_);
lean_inc(v_messages_1825_);
lean_inc(v_traceState_1824_);
lean_inc(v_auxDeclNGen_1823_);
lean_inc(v_ngen_1822_);
lean_inc(v_nextMacroScope_1821_);
lean_inc(v_env_1820_);
lean_dec(v___x_1819_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1911_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1831_; lean_object* v___x_1833_; 
lean_inc(v___y_1762_);
v___x_1831_ = l_Lean_markSparseCasesOn(v_env_1820_, v___y_1762_);
if (v_isShared_1830_ == 0)
{
lean_ctor_set(v___x_1829_, 5, v___x_1802_);
lean_ctor_set(v___x_1829_, 0, v___x_1831_);
v___x_1833_ = v___x_1829_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1831_);
lean_ctor_set(v_reuseFailAlloc_1910_, 1, v_nextMacroScope_1821_);
lean_ctor_set(v_reuseFailAlloc_1910_, 2, v_ngen_1822_);
lean_ctor_set(v_reuseFailAlloc_1910_, 3, v_auxDeclNGen_1823_);
lean_ctor_set(v_reuseFailAlloc_1910_, 4, v_traceState_1824_);
lean_ctor_set(v_reuseFailAlloc_1910_, 5, v___x_1802_);
lean_ctor_set(v_reuseFailAlloc_1910_, 6, v_messages_1825_);
lean_ctor_set(v_reuseFailAlloc_1910_, 7, v_infoState_1826_);
lean_ctor_set(v_reuseFailAlloc_1910_, 8, v_snapshotTasks_1827_);
v___x_1833_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v_mctx_1836_; lean_object* v_zetaDeltaFVarIds_1837_; lean_object* v_postponed_1838_; lean_object* v_diag_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1908_; 
v___x_1834_ = lean_st_ref_put(v___y_1768_, v___x_1833_);
v___x_1835_ = lean_st_ref_take(v___y_1766_);
v_mctx_1836_ = lean_ctor_get(v___x_1835_, 0);
v_zetaDeltaFVarIds_1837_ = lean_ctor_get(v___x_1835_, 2);
v_postponed_1838_ = lean_ctor_get(v___x_1835_, 3);
v_diag_1839_ = lean_ctor_get(v___x_1835_, 4);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1908_ == 0)
{
lean_object* v_unused_1909_; 
v_unused_1909_ = lean_ctor_get(v___x_1835_, 1);
lean_dec(v_unused_1909_);
v___x_1841_ = v___x_1835_;
v_isShared_1842_ = v_isSharedCheck_1908_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_diag_1839_);
lean_inc(v_postponed_1838_);
lean_inc(v_zetaDeltaFVarIds_1837_);
lean_inc(v_mctx_1836_);
lean_dec(v___x_1835_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1908_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1844_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 1, v___x_1814_);
v___x_1844_ = v___x_1841_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_mctx_1836_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v___x_1814_);
lean_ctor_set(v_reuseFailAlloc_1907_, 2, v_zetaDeltaFVarIds_1837_);
lean_ctor_set(v_reuseFailAlloc_1907_, 3, v_postponed_1838_);
lean_ctor_set(v_reuseFailAlloc_1907_, 4, v_diag_1839_);
v___x_1844_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v_env_1847_; lean_object* v_nextMacroScope_1848_; lean_object* v_ngen_1849_; lean_object* v_auxDeclNGen_1850_; lean_object* v_traceState_1851_; lean_object* v_messages_1852_; lean_object* v_infoState_1853_; lean_object* v_snapshotTasks_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1905_; 
v___x_1845_ = lean_st_ref_put(v___y_1766_, v___x_1844_);
v___x_1846_ = lean_st_ref_take(v___y_1768_);
v_env_1847_ = lean_ctor_get(v___x_1846_, 0);
v_nextMacroScope_1848_ = lean_ctor_get(v___x_1846_, 1);
v_ngen_1849_ = lean_ctor_get(v___x_1846_, 2);
v_auxDeclNGen_1850_ = lean_ctor_get(v___x_1846_, 3);
v_traceState_1851_ = lean_ctor_get(v___x_1846_, 4);
v_messages_1852_ = lean_ctor_get(v___x_1846_, 6);
v_infoState_1853_ = lean_ctor_get(v___x_1846_, 7);
v_snapshotTasks_1854_ = lean_ctor_get(v___x_1846_, 8);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1846_);
if (v_isSharedCheck_1905_ == 0)
{
lean_object* v_unused_1906_; 
v_unused_1906_ = lean_ctor_get(v___x_1846_, 5);
lean_dec(v_unused_1906_);
v___x_1856_ = v___x_1846_;
v_isShared_1857_ = v_isSharedCheck_1905_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_snapshotTasks_1854_);
lean_inc(v_infoState_1853_);
lean_inc(v_messages_1852_);
lean_inc(v_traceState_1851_);
lean_inc(v_auxDeclNGen_1850_);
lean_inc(v_ngen_1849_);
lean_inc(v_nextMacroScope_1848_);
lean_inc(v_env_1847_);
lean_dec(v___x_1846_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1905_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v_numParams_1858_; lean_object* v_numIndices_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1871_; 
v_numParams_1858_ = lean_ctor_get(v___y_1760_, 1);
lean_inc(v_numParams_1858_);
v_numIndices_1859_ = lean_ctor_get(v___y_1760_, 2);
lean_inc(v_numIndices_1859_);
lean_dec_ref(v___y_1760_);
v___x_1860_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_sparseCasesOnInfoExt;
v___x_1861_ = lean_unsigned_to_nat(1u);
v___x_1862_ = lean_nat_add(v_numParams_1858_, v___x_1861_);
lean_dec(v_numParams_1858_);
v___x_1863_ = lean_nat_add(v___x_1862_, v_numIndices_1859_);
lean_dec(v_numIndices_1859_);
lean_dec(v___x_1862_);
v___x_1864_ = lean_nat_add(v___x_1863_, v___x_1861_);
v___x_1865_ = lean_array_get_size(v_ctors_1744_);
v___x_1866_ = lean_nat_add(v___x_1864_, v___x_1865_);
lean_dec(v___x_1864_);
v___x_1867_ = lean_nat_add(v___x_1866_, v___x_1861_);
lean_dec(v___x_1866_);
v___x_1868_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1868_, 0, v_indName_1743_);
lean_ctor_set(v___x_1868_, 1, v___x_1863_);
lean_ctor_set(v___x_1868_, 2, v___x_1867_);
lean_ctor_set(v___x_1868_, 3, v_ctors_1744_);
lean_inc(v___y_1762_);
v___x_1869_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1860_, v_env_1847_, v___y_1762_, v___x_1868_);
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 5, v___x_1802_);
lean_ctor_set(v___x_1856_, 0, v___x_1869_);
v___x_1871_ = v___x_1856_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1869_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v_nextMacroScope_1848_);
lean_ctor_set(v_reuseFailAlloc_1904_, 2, v_ngen_1849_);
lean_ctor_set(v_reuseFailAlloc_1904_, 3, v_auxDeclNGen_1850_);
lean_ctor_set(v_reuseFailAlloc_1904_, 4, v_traceState_1851_);
lean_ctor_set(v_reuseFailAlloc_1904_, 5, v___x_1802_);
lean_ctor_set(v_reuseFailAlloc_1904_, 6, v_messages_1852_);
lean_ctor_set(v_reuseFailAlloc_1904_, 7, v_infoState_1853_);
lean_ctor_set(v_reuseFailAlloc_1904_, 8, v_snapshotTasks_1854_);
v___x_1871_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v_mctx_1874_; lean_object* v_zetaDeltaFVarIds_1875_; lean_object* v_postponed_1876_; lean_object* v_diag_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1902_; 
v___x_1872_ = lean_st_ref_put(v___y_1768_, v___x_1871_);
v___x_1873_ = lean_st_ref_take(v___y_1766_);
v_mctx_1874_ = lean_ctor_get(v___x_1873_, 0);
v_zetaDeltaFVarIds_1875_ = lean_ctor_get(v___x_1873_, 2);
v_postponed_1876_ = lean_ctor_get(v___x_1873_, 3);
v_diag_1877_ = lean_ctor_get(v___x_1873_, 4);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1902_ == 0)
{
lean_object* v_unused_1903_; 
v_unused_1903_ = lean_ctor_get(v___x_1873_, 1);
lean_dec(v_unused_1903_);
v___x_1879_ = v___x_1873_;
v_isShared_1880_ = v_isSharedCheck_1902_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_diag_1877_);
lean_inc(v_postponed_1876_);
lean_inc(v_zetaDeltaFVarIds_1875_);
lean_inc(v_mctx_1874_);
lean_dec(v___x_1873_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1902_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 1, v___x_1814_);
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_mctx_1874_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v___x_1814_);
lean_ctor_set(v_reuseFailAlloc_1901_, 2, v_zetaDeltaFVarIds_1875_);
lean_ctor_set(v_reuseFailAlloc_1901_, 3, v_postponed_1876_);
lean_ctor_set(v_reuseFailAlloc_1901_, 4, v_diag_1877_);
v___x_1882_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = lean_st_ref_put(v___y_1766_, v___x_1882_);
lean_inc(v___y_1762_);
v___x_1884_ = l_Lean_enableRealizationsForConst(v___y_1762_, v___y_1767_, v___y_1768_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1891_ == 0)
{
lean_object* v_unused_1892_; 
v_unused_1892_ = lean_ctor_get(v___x_1884_, 0);
lean_dec(v_unused_1892_);
v___x_1886_ = v___x_1884_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_dec(v___x_1884_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
lean_ctor_set(v___x_1886_, 0, v___y_1762_);
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v___y_1762_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
lean_dec(v___y_1762_);
v_a_1893_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1884_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1884_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
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
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
lean_dec_ref(v___y_1763_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v_ctors_1744_);
lean_dec(v_indName_1743_);
v_a_1919_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1788_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1788_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
}
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
lean_dec(v_a_1777_);
lean_dec_ref_known(v___x_1769_, 2);
lean_dec_ref(v___y_1763_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v_ctors_1744_);
lean_dec(v_indName_1743_);
v_a_1929_ = lean_ctor_get(v___x_1778_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1931_ = v___x_1778_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___x_1778_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1929_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
else
{
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
lean_dec_ref_known(v___x_1769_, 2);
lean_dec_ref(v___y_1763_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v_ctors_1744_);
lean_dec(v_indName_1743_);
v_a_1937_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1939_ = v___x_1776_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1776_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
else
{
lean_object* v___x_1945_; lean_object* v___x_1946_; 
lean_dec(v___x_1769_);
lean_dec_ref(v___y_1763_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec(v___y_1757_);
lean_dec(v___y_1756_);
lean_dec(v___y_1755_);
lean_dec(v___y_1754_);
lean_dec(v___y_1753_);
lean_dec_ref(v___y_1752_);
lean_dec_ref(v_ctors_1744_);
lean_dec(v_indName_1743_);
v___x_1945_ = lean_obj_once(&l_Lean_Meta_mkSparseCasesOn___closed__2, &l_Lean_Meta_mkSparseCasesOn___closed__2_once, _init_l_Lean_Meta_mkSparseCasesOn___closed__2);
v___x_1946_ = l_panic___at___00Lean_Meta_mkSparseCasesOn_spec__16(v___x_1945_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_);
return v___x_1946_;
}
}
v___jp_1947_:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; 
lean_inc(v_indName_1743_);
v___x_1958_ = l_Lean_mkCasesOnName(v_indName_1743_);
lean_inc(v___x_1958_);
v___x_1959_ = l_Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5(v___x_1958_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_);
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_toConstantVal_1960_; lean_object* v_a_1961_; lean_object* v_numParams_1962_; lean_object* v_numIndices_1963_; lean_object* v_ctors_1964_; lean_object* v_levelParams_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; uint8_t v___x_1972_; 
v_toConstantVal_1960_ = lean_ctor_get(v___y_1948_, 0);
v_a_1961_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_a_1961_);
lean_dec_ref_known(v___x_1959_, 1);
v_numParams_1962_ = lean_ctor_get(v___y_1948_, 1);
lean_inc(v_numParams_1962_);
v_numIndices_1963_ = lean_ctor_get(v___y_1948_, 2);
lean_inc(v_numIndices_1963_);
v_ctors_1964_ = lean_ctor_get(v___y_1948_, 4);
lean_inc(v_ctors_1964_);
v_levelParams_1965_ = lean_ctor_get(v_toConstantVal_1960_, 1);
lean_inc(v_indName_1743_);
v___x_1966_ = l_Lean_mkCtorIdxName(v_indName_1743_);
v___x_1967_ = l_Lean_ConstantInfo_levelParams(v_a_1961_);
v___x_1968_ = l_List_lengthTR___redArg(v___x_1967_);
lean_dec(v___x_1967_);
v___x_1969_ = l_List_lengthTR___redArg(v_levelParams_1965_);
v___x_1970_ = lean_unsigned_to_nat(1u);
v___x_1971_ = lean_nat_add(v___x_1969_, v___x_1970_);
lean_dec(v___x_1969_);
v___x_1972_ = lean_nat_dec_eq(v___x_1968_, v___x_1971_);
lean_dec(v___x_1971_);
lean_dec(v___x_1968_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1986_; 
lean_dec(v___x_1966_);
lean_dec(v_ctors_1964_);
lean_dec(v_numIndices_1963_);
lean_dec(v_numParams_1962_);
lean_dec(v_a_1961_);
lean_dec_ref(v___y_1952_);
lean_dec(v___y_1950_);
lean_dec(v___y_1949_);
lean_dec_ref(v___y_1948_);
lean_dec_ref(v_ctors_1744_);
lean_dec(v_indName_1743_);
v___x_1973_ = lean_obj_once(&l_Lean_Meta_mkSparseCasesOn___closed__4, &l_Lean_Meta_mkSparseCasesOn___closed__4_once, _init_l_Lean_Meta_mkSparseCasesOn___closed__4);
v___x_1974_ = l_Lean_MessageData_ofConstName(v___x_1958_, v___x_1972_);
v___x_1975_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1973_);
lean_ctor_set(v___x_1975_, 1, v___x_1974_);
v___x_1976_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkSparseCasesOn_spec__0___closed__1);
v___x_1977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1975_);
lean_ctor_set(v___x_1977_, 1, v___x_1976_);
v___x_1978_ = l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(v___x_1977_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_);
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1981_ = v___x_1978_;
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1982_ == 0)
{
v___x_1984_ = v___x_1981_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
}
else
{
lean_inc(v_a_1961_);
v___y_1752_ = v_a_1961_;
v___y_1753_ = v___x_1958_;
v___y_1754_ = v_numIndices_1963_;
v___y_1755_ = v___x_1966_;
v___y_1756_ = v_ctors_1964_;
v___y_1757_ = v_numParams_1962_;
v___y_1758_ = v_a_1961_;
v___y_1759_ = v___y_1949_;
v___y_1760_ = v___y_1948_;
v___y_1761_ = v___y_1951_;
v___y_1762_ = v___y_1950_;
v___y_1763_ = v___y_1952_;
v___y_1764_ = v___y_1953_;
v___y_1765_ = v___y_1954_;
v___y_1766_ = v___y_1955_;
v___y_1767_ = v___y_1956_;
v___y_1768_ = v___y_1957_;
goto v___jp_1751_;
}
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
lean_dec(v___x_1958_);
lean_dec_ref(v___y_1952_);
lean_dec(v___y_1950_);
lean_dec(v___y_1949_);
lean_dec_ref(v___y_1948_);
lean_dec_ref(v_ctors_1744_);
lean_dec(v_indName_1743_);
v_a_1987_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1989_ = v___x_1959_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v___x_1959_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1987_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
v___jp_1998_:
{
lean_object* v___x_2000_; lean_object* v_asyncMode_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2000_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_sparseCasesOnCacheExt;
v_asyncMode_2001_ = lean_ctor_get(v___x_2000_, 2);
lean_inc_ref(v_ctors_1744_);
lean_inc(v_indName_1743_);
v___x_2002_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2002_, 0, v_indName_1743_);
lean_ctor_set(v___x_2002_, 1, v_ctors_1744_);
lean_ctor_set_uint8(v___x_2002_, sizeof(void*)*2, v___y_1999_);
v___x_2003_ = lean_box(0);
v___x_2004_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1995_, v___x_2000_, v_env_1997_, v_asyncMode_2001_, v___x_2003_);
v___x_2005_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1___redArg(v___x_2004_, v___x_2002_);
lean_dec(v___x_2004_);
if (lean_obj_tag(v___x_2005_) == 1)
{
lean_object* v_val_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
lean_dec_ref_known(v___x_2002_, 2);
lean_dec_ref(v_ctors_1744_);
lean_dec(v_indName_1743_);
v_val_2006_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_2005_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_val_2006_);
lean_dec(v___x_2005_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
lean_ctor_set_tag(v___x_2008_, 0);
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_val_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
else
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v_a_2016_; lean_object* v___f_2017_; lean_object* v___x_2018_; 
lean_dec(v___x_2005_);
v___x_2014_ = ((lean_object*)(l_Lean_Meta_mkSparseCasesOn___closed__7));
v___x_2015_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkSparseCasesOn_spec__2___redArg(v___x_2014_, v_a_1748_);
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc_n(v_a_2016_, 2);
lean_dec_ref(v___x_2015_);
v___f_2017_ = lean_alloc_closure((void*)(l_Lean_Meta_mkSparseCasesOn___lam__0), 3, 2);
lean_closure_set(v___f_2017_, 0, v___x_2002_);
lean_closure_set(v___f_2017_, 1, v_a_2016_);
lean_inc(v_indName_1743_);
v___x_2018_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkSparseCasesOn_spec__4(v_indName_1743_, v_a_1745_, v_a_1746_, v_a_1747_, v_a_1748_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; lean_object* v___x_2020_; size_t v_sz_2021_; size_t v___x_2022_; lean_object* v___x_2023_; 
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_a_2019_);
lean_dec_ref_known(v___x_2018_, 1);
v___x_2020_ = lean_box(0);
v_sz_2021_ = lean_array_size(v_ctors_1744_);
v___x_2022_ = ((size_t)0ULL);
lean_inc(v_indName_1743_);
v___x_2023_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSparseCasesOn_spec__18(v_a_2019_, v_indName_1743_, v_ctors_1744_, v_sz_2021_, v___x_2022_, v___x_2020_, v_a_1745_, v_a_1746_, v_a_1747_, v_a_1748_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v_ctors_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; uint8_t v___x_2027_; 
lean_dec_ref_known(v___x_2023_, 1);
v_ctors_2024_ = lean_ctor_get(v_a_2019_, 4);
v___x_2025_ = lean_array_get_size(v_ctors_1744_);
v___x_2026_ = l_List_lengthTR___redArg(v_ctors_2024_);
v___x_2027_ = lean_nat_dec_eq(v___x_2025_, v___x_2026_);
lean_dec(v___x_2026_);
if (v___x_2027_ == 0)
{
v___y_1948_ = v_a_2019_;
v___y_1949_ = v___x_2003_;
v___y_1950_ = v_a_2016_;
v___y_1951_ = v_asyncMode_2001_;
v___y_1952_ = v___f_2017_;
v___y_1953_ = v___x_2000_;
v___y_1954_ = v_a_1745_;
v___y_1955_ = v_a_1746_;
v___y_1956_ = v_a_1747_;
v___y_1957_ = v_a_1748_;
goto v___jp_1947_;
}
else
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2037_; 
lean_dec(v_a_2019_);
lean_dec_ref(v___f_2017_);
lean_dec(v_a_2016_);
lean_dec_ref(v_ctors_1744_);
lean_dec(v_indName_1743_);
v___x_2028_ = lean_obj_once(&l_Lean_Meta_mkSparseCasesOn___closed__9, &l_Lean_Meta_mkSparseCasesOn___closed__9_once, _init_l_Lean_Meta_mkSparseCasesOn___closed__9);
v___x_2029_ = l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(v___x_2028_, v_a_1745_, v_a_1746_, v_a_1747_, v_a_1748_);
v_a_2030_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2032_ = v___x_2029_;
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2029_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
}
else
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2045_; 
lean_dec(v_a_2019_);
lean_dec_ref(v___f_2017_);
lean_dec(v_a_2016_);
lean_dec_ref(v_ctors_1744_);
lean_dec(v_indName_1743_);
v_a_2038_ = lean_ctor_get(v___x_2023_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2023_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2040_ = v___x_2023_;
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2023_);
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
lean_object* v_a_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2053_; 
lean_dec_ref(v___f_2017_);
lean_dec(v_a_2016_);
lean_dec_ref(v_ctors_1744_);
lean_dec(v_indName_1743_);
v_a_2046_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_2048_ = v___x_2018_;
v_isShared_2049_ = v_isSharedCheck_2053_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_a_2046_);
lean_dec(v___x_2018_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2053_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2051_; 
if (v_isShared_2049_ == 0)
{
v___x_2051_ = v___x_2048_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_a_2046_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSparseCasesOn___boxed(lean_object* v_indName_2058_, lean_object* v_ctors_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v___y_2064_){
_start:
{
lean_object* v_res_2065_; 
v_res_2065_ = l_Lean_Meta_mkSparseCasesOn(v_indName_2058_, v_ctors_2059_, v_a_2060_, v_a_2061_, v_a_2062_, v_a_2063_);
lean_dec(v_a_2063_);
lean_dec_ref(v_a_2062_);
lean_dec(v_a_2061_);
lean_dec_ref(v_a_2060_);
return v_res_2065_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1(lean_object* v_00_u03b2_2066_, lean_object* v_x_2067_, lean_object* v_x_2068_){
_start:
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1___redArg(v_x_2067_, v_x_2068_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1___boxed(lean_object* v_00_u03b2_2070_, lean_object* v_x_2071_, lean_object* v_x_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1(v_00_u03b2_2070_, v_x_2071_, v_x_2072_);
lean_dec_ref(v_x_2072_);
lean_dec_ref(v_x_2071_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3(lean_object* v_00_u03b2_2074_, lean_object* v_x_2075_, lean_object* v_x_2076_, lean_object* v_x_2077_){
_start:
{
lean_object* v___x_2078_; 
v___x_2078_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3___redArg(v_x_2075_, v_x_2076_, v_x_2077_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13(lean_object* v_00_u03b1_2079_, lean_object* v_name_2080_, uint8_t v_bi_2081_, lean_object* v_type_2082_, lean_object* v_k_2083_, uint8_t v_kind_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_){
_start:
{
lean_object* v___x_2090_; 
v___x_2090_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___redArg(v_name_2080_, v_bi_2081_, v_type_2082_, v_k_2083_, v_kind_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13___boxed(lean_object* v_00_u03b1_2091_, lean_object* v_name_2092_, lean_object* v_bi_2093_, lean_object* v_type_2094_, lean_object* v_k_2095_, lean_object* v_kind_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
uint8_t v_bi_boxed_2102_; uint8_t v_kind_boxed_2103_; lean_object* v_res_2104_; 
v_bi_boxed_2102_ = lean_unbox(v_bi_2093_);
v_kind_boxed_2103_ = lean_unbox(v_kind_2096_);
v_res_2104_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9_spec__13(v_00_u03b1_2091_, v_name_2092_, v_bi_boxed_2102_, v_type_2094_, v_k_2095_, v_kind_boxed_2103_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9(lean_object* v_00_u03b1_2105_, lean_object* v_name_2106_, lean_object* v_type_2107_, lean_object* v_k_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_){
_start:
{
lean_object* v___x_2114_; 
v___x_2114_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9___redArg(v_name_2106_, v_type_2107_, v_k_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9___boxed(lean_object* v_00_u03b1_2115_, lean_object* v_name_2116_, lean_object* v_type_2117_, lean_object* v_k_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkSparseCasesOn_spec__9(v_00_u03b1_2115_, v_name_2116_, v_type_2117_, v_k_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
lean_dec(v___y_2120_);
lean_dec_ref(v___y_2119_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13(lean_object* v_00_u03b1_2125_, lean_object* v_msg_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v___x_2132_; 
v___x_2132_ = l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___redArg(v_msg_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
return v___x_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13___boxed(lean_object* v_00_u03b1_2133_, lean_object* v_msg_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Lean_throwError___at___00Lean_Meta_mkSparseCasesOn_spec__13(v_00_u03b1_2133_, v_msg_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
lean_dec(v___y_2136_);
lean_dec_ref(v___y_2135_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22(lean_object* v_declName_2141_, uint8_t v_s_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_){
_start:
{
lean_object* v___x_2148_; 
v___x_2148_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___redArg(v_declName_2141_, v_s_2142_, v___y_2144_, v___y_2146_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22___boxed(lean_object* v_declName_2149_, lean_object* v_s_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
uint8_t v_s_boxed_2156_; lean_object* v_res_2157_; 
v_s_boxed_2156_ = lean_unbox(v_s_2150_);
v_res_2157_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkSparseCasesOn_spec__15_spec__22(v_declName_2149_, v_s_boxed_2156_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
lean_dec(v___y_2154_);
lean_dec_ref(v___y_2153_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2(lean_object* v_00_u03b2_2158_, lean_object* v_x_2159_, size_t v_x_2160_, lean_object* v_x_2161_){
_start:
{
lean_object* v___x_2162_; 
v___x_2162_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2___redArg(v_x_2159_, v_x_2160_, v_x_2161_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2163_, lean_object* v_x_2164_, lean_object* v_x_2165_, lean_object* v_x_2166_){
_start:
{
size_t v_x_24289__boxed_2167_; lean_object* v_res_2168_; 
v_x_24289__boxed_2167_ = lean_unbox_usize(v_x_2165_);
lean_dec(v_x_2165_);
v_res_2168_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2(v_00_u03b2_2163_, v_x_2164_, v_x_24289__boxed_2167_, v_x_2166_);
lean_dec_ref(v_x_2166_);
lean_dec_ref(v_x_2164_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5(lean_object* v_00_u03b2_2169_, lean_object* v_x_2170_, size_t v_x_2171_, size_t v_x_2172_, lean_object* v_x_2173_, lean_object* v_x_2174_){
_start:
{
lean_object* v___x_2175_; 
v___x_2175_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___redArg(v_x_2170_, v_x_2171_, v_x_2172_, v_x_2173_, v_x_2174_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5___boxed(lean_object* v_00_u03b2_2176_, lean_object* v_x_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_, lean_object* v_x_2181_){
_start:
{
size_t v_x_24300__boxed_2182_; size_t v_x_24301__boxed_2183_; lean_object* v_res_2184_; 
v_x_24300__boxed_2182_ = lean_unbox_usize(v_x_2178_);
lean_dec(v_x_2178_);
v_x_24301__boxed_2183_ = lean_unbox_usize(v_x_2179_);
lean_dec(v_x_2179_);
v_res_2184_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5(v_00_u03b2_2176_, v_x_2177_, v_x_24300__boxed_2182_, v_x_24301__boxed_2183_, v_x_2180_, v_x_2181_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8(lean_object* v_00_u03b1_2185_, lean_object* v_constName_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v___x_2192_; 
v___x_2192_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8___redArg(v_constName_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8___boxed(lean_object* v_00_u03b1_2193_, lean_object* v_constName_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
lean_object* v_res_2200_; 
v_res_2200_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8(v_00_u03b1_2193_, v_constName_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec(v___y_2196_);
lean_dec_ref(v___y_2195_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7(lean_object* v_00_u03b2_2201_, lean_object* v_keys_2202_, lean_object* v_vals_2203_, lean_object* v_heq_2204_, lean_object* v_i_2205_, lean_object* v_k_2206_){
_start:
{
lean_object* v___x_2207_; 
v___x_2207_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7___redArg(v_keys_2202_, v_vals_2203_, v_i_2205_, v_k_2206_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7___boxed(lean_object* v_00_u03b2_2208_, lean_object* v_keys_2209_, lean_object* v_vals_2210_, lean_object* v_heq_2211_, lean_object* v_i_2212_, lean_object* v_k_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkSparseCasesOn_spec__1_spec__2_spec__7(v_00_u03b2_2208_, v_keys_2209_, v_vals_2210_, v_heq_2211_, v_i_2212_, v_k_2213_);
lean_dec_ref(v_k_2213_);
lean_dec_ref(v_vals_2210_);
lean_dec_ref(v_keys_2209_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10(lean_object* v_00_u03b2_2215_, lean_object* v_n_2216_, lean_object* v_k_2217_, lean_object* v_v_2218_){
_start:
{
lean_object* v___x_2219_; 
v___x_2219_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10___redArg(v_n_2216_, v_k_2217_, v_v_2218_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11(lean_object* v_00_u03b2_2220_, size_t v_depth_2221_, lean_object* v_keys_2222_, lean_object* v_vals_2223_, lean_object* v_heq_2224_, lean_object* v_i_2225_, lean_object* v_entries_2226_){
_start:
{
lean_object* v___x_2227_; 
v___x_2227_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11___redArg(v_depth_2221_, v_keys_2222_, v_vals_2223_, v_i_2225_, v_entries_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11___boxed(lean_object* v_00_u03b2_2228_, lean_object* v_depth_2229_, lean_object* v_keys_2230_, lean_object* v_vals_2231_, lean_object* v_heq_2232_, lean_object* v_i_2233_, lean_object* v_entries_2234_){
_start:
{
size_t v_depth_boxed_2235_; lean_object* v_res_2236_; 
v_depth_boxed_2235_ = lean_unbox_usize(v_depth_2229_);
lean_dec(v_depth_2229_);
v_res_2236_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__11(v_00_u03b2_2228_, v_depth_boxed_2235_, v_keys_2230_, v_vals_2231_, v_heq_2232_, v_i_2233_, v_entries_2234_);
lean_dec_ref(v_vals_2231_);
lean_dec_ref(v_keys_2230_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15(lean_object* v_00_u03b1_2237_, lean_object* v_ref_2238_, lean_object* v_constName_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_){
_start:
{
lean_object* v___x_2245_; 
v___x_2245_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___redArg(v_ref_2238_, v_constName_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15___boxed(lean_object* v_00_u03b1_2246_, lean_object* v_ref_2247_, lean_object* v_constName_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15(v_00_u03b1_2246_, v_ref_2247_, v_constName_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v_ref_2247_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10_spec__26(lean_object* v_00_u03b2_2255_, lean_object* v_x_2256_, lean_object* v_x_2257_, lean_object* v_x_2258_, lean_object* v_x_2259_){
_start:
{
lean_object* v___x_2260_; 
v___x_2260_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkSparseCasesOn_spec__3_spec__5_spec__10_spec__26___redArg(v_x_2256_, v_x_2257_, v_x_2258_, v_x_2259_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30(lean_object* v_00_u03b1_2261_, lean_object* v_ref_2262_, lean_object* v_msg_2263_, lean_object* v_declHint_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
lean_object* v___x_2270_; 
v___x_2270_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30___redArg(v_ref_2262_, v_msg_2263_, v_declHint_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30___boxed(lean_object* v_00_u03b1_2271_, lean_object* v_ref_2272_, lean_object* v_msg_2273_, lean_object* v_declHint_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30(v_00_u03b1_2271_, v_ref_2272_, v_msg_2273_, v_declHint_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v___y_2276_);
lean_dec_ref(v___y_2275_);
lean_dec(v_ref_2272_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34(lean_object* v_msg_2281_, lean_object* v_declHint_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v___x_2288_; 
v___x_2288_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___redArg(v_msg_2281_, v_declHint_2282_, v___y_2286_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34___boxed(lean_object* v_msg_2289_, lean_object* v_declHint_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__32_spec__34(v_msg_2289_, v_declHint_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
lean_dec(v___y_2292_);
lean_dec_ref(v___y_2291_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33(lean_object* v_00_u03b1_2297_, lean_object* v_ref_2298_, lean_object* v_msg_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33___redArg(v_ref_2298_, v_msg_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33___boxed(lean_object* v_00_u03b1_2306_, lean_object* v_ref_2307_, lean_object* v_msg_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_mkSparseCasesOn_spec__5_spec__8_spec__15_spec__30_spec__33(v_00_u03b1_2306_, v_ref_2307_, v_msg_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v_ref_2307_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnInfoCore(lean_object* v_env_2315_, lean_object* v_sparseCasesOnName_2316_){
_start:
{
lean_object* v___x_2317_; lean_object* v_toEnvExtension_2318_; lean_object* v_asyncMode_2319_; lean_object* v___x_2320_; uint8_t v___x_2321_; lean_object* v___x_2322_; 
v___x_2317_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_sparseCasesOnInfoExt;
v_toEnvExtension_2318_ = lean_ctor_get(v___x_2317_, 0);
v_asyncMode_2319_ = lean_ctor_get(v_toEnvExtension_2318_, 2);
v___x_2320_ = ((lean_object*)(l_Lean_Meta_instInhabitedSparseCasesOnInfo_default));
v___x_2321_ = 0;
v___x_2322_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_2320_, v___x_2317_, v_env_2315_, v_sparseCasesOnName_2316_, v_asyncMode_2319_, v___x_2321_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnInfo___redArg(lean_object* v_sparseCasesOnName_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v_env_2328_; lean_object* v___x_2329_; lean_object* v_toEnvExtension_2330_; lean_object* v_asyncMode_2331_; uint8_t v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2326_ = ((lean_object*)(l_Lean_Meta_instInhabitedSparseCasesOnInfo_default));
v___x_2327_ = lean_st_ref_get(v_a_2324_);
v_env_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc_ref(v_env_2328_);
lean_dec(v___x_2327_);
v___x_2329_ = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_sparseCasesOnInfoExt;
v_toEnvExtension_2330_ = lean_ctor_get(v___x_2329_, 0);
v_asyncMode_2331_ = lean_ctor_get(v_toEnvExtension_2330_, 2);
v___x_2332_ = 0;
v___x_2333_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_2326_, v___x_2329_, v_env_2328_, v_sparseCasesOnName_2323_, v_asyncMode_2331_, v___x_2332_);
v___x_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2333_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnInfo___redArg___boxed(lean_object* v_sparseCasesOnName_2335_, lean_object* v_a_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_Lean_Meta_getSparseCasesOnInfo___redArg(v_sparseCasesOnName_2335_, v_a_2336_);
lean_dec(v_a_2336_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnInfo(lean_object* v_sparseCasesOnName_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_){
_start:
{
lean_object* v___x_2343_; 
v___x_2343_ = l_Lean_Meta_getSparseCasesOnInfo___redArg(v_sparseCasesOnName_2339_, v_a_2341_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnInfo___boxed(lean_object* v_sparseCasesOnName_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v___y_2347_){
_start:
{
lean_object* v_res_2348_; 
v_res_2348_ = l_Lean_Meta_getSparseCasesOnInfo(v_sparseCasesOnName_2344_, v_a_2345_, v_a_2346_);
lean_dec(v_a_2346_);
lean_dec_ref(v_a_2345_);
return v_res_2348_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1993625133____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_sparseCasesOnCacheExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_sparseCasesOnCacheExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOn_1625393638____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_sparseCasesOnInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Constructions_SparseCasesOn_0__Lean_Meta_sparseCasesOnInfoExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
}
#ifdef __cplusplus
}
#endif
