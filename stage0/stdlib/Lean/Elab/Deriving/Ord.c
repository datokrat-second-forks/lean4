// Lean compiler output
// Module: Lean.Elab.Deriving.Ord
// Imports: public import Lean.Data.Options import Lean.Elab.Deriving.Basic import Lean.Elab.Deriving.Util import Lean.Meta.Constructions.CtorIdx import Lean.Meta.Constructions.CasesOnSameCtor import Lean.Meta.SameCtorUtils import Init.Data.Array.OfFn
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
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
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
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* l_Lean_InductiveVal_numTypeFormers(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal_default;
lean_object* l_Lean_Elab_Deriving_mkHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_occursOrInType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCtorIdxName(lean_object*);
lean_object* l_Lean_mkCasesOnSameCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mkArray3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isInductiveCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerDerivingHandler(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__0_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "deriving"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__0_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__0_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ord"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__2_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "linear_construction_threshold"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__2_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__2_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__0_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(38, 127, 229, 132, 157, 42, 70, 134)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(58, 105, 173, 43, 143, 234, 178, 2)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__2_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(119, 157, 91, 192, 251, 142, 191, 166)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__4_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 350, .m_capacity = 350, .m_length = 349, .m_data = "If the inductive data type has this many or more constructors, use a different implementation for implementing `Ord` that avoids the quadratic code size produced by the default implementation.\n\nThe alternative construction compiles to less efficient code in some cases, so by default it is only used for inductive types with 10 or more constructors."};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__4_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__4_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__5_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__4_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__5_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__5_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__6_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__6_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__6_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__7_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__6_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__7_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__7_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__9_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__7_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__9_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__9_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__11_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__9_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__11_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__11_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deriving"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__13_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__11_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(202, 58, 65, 192, 197, 114, 188, 72)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__13_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__13_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Ord"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__15_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__13_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(234, 29, 188, 163, 17, 185, 131, 241)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__15_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__15_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__16_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__15_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(235, 228, 53, 108, 241, 27, 196, 104)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__16_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__16_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__17_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__16_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__0_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(182, 7, 46, 207, 203, 113, 203, 236)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__17_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__17_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__18_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__17_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(106, 109, 90, 201, 238, 184, 42, 89)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__18_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__18_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__19_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__18_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__2_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(231, 74, 63, 253, 21, 218, 53, 222)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__19_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__19_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__deriving_ord_linear__construction__threshold;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(47, 34, 14, 190, 177, 218, 16, 31)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Ordering.then"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__5;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Ordering"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__6_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__7_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(226, 44, 125, 228, 251, 150, 72, 72)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__8_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(97, 170, 41, 107, 24, 174, 163, 92)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__8_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__9_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__8_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__10_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__11 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__11_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__9_value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__11_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__12_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__13_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__15 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__15_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__17 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__17_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__17_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__19 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__19_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__20 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__20_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__20_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__21 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__21_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__22 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__22_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__24_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__24_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(230, 230, 99, 85, 138, 169, 166, 218)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__24_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(134, 215, 124, 37, 166, 123, 51, 213)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__24 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__24_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__24_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__25 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__25_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__26 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__26_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__27_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__26_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__27 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__27_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__27_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__28 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__28_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__29_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__29_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__29 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__29_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__29_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__30 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__30_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__31 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__31_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__28_value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__31_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__32 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__32_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__25_value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__32_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__33 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__33_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "compare"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__34 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__34_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__34_value),LEAN_SCALAR_PTR_LITERAL(109, 41, 149, 169, 79, 76, 232, 231)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__36 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__36_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(47, 34, 14, 190, 177, 218, 16, 31)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__37_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__34_value),LEAN_SCALAR_PTR_LITERAL(241, 180, 168, 39, 68, 69, 153, 110)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__37 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__37_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__38 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__38_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__39 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__39_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__40 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__40_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(47, 22, 244, 233, 226, 169, 241, 142)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "inaccessible"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__5_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__5_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__5_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(243, 90, 7, 119, 108, 205, 19, 233)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__5_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".("};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__6_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__7_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Ordering.eq"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__4_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__6_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(226, 44, 125, 228, 251, 150, 72, 72)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 150, 86, 2, 28, 163, 164, 77)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__8_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__9 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__9_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__10 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__10_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__8_value),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__10_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__11 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__11_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__12 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__12_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__12_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__14 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__14_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__15 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__15_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__16;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__17 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__17_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Ordering.lt"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__18 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__18_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__19;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__20 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__20_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(226, 44, 125, 228, 251, 150, 72, 72)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__21_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__20_value),LEAN_SCALAR_PTR_LITERAL(151, 65, 236, 10, 147, 23, 177, 156)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__21 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__21_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__22 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__22_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__21_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__23 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__23_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__24 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__24_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__22_value),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__24_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__25 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__25_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Ordering.gt"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__26 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__26_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__27;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__28 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__28_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(226, 44, 125, 228, 251, 150, 72, 72)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__29_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__28_value),LEAN_SCALAR_PTR_LITERAL(117, 227, 205, 91, 93, 250, 7, 4)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__29 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__29_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__30 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__30_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__29_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__31 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__31_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__31_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__32 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__32_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__30_value),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__32_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__33 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__33_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__7 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__8 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__9 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__9_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__10 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__10_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__11 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__11_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__0_value;
static const lean_closure_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__1_value;
static const lean_array_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__3_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__5_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__5_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Elab.Deriving.Ord"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Elab.Deriving.Ord.0.Lean.Elab.Deriving.Ord.mkMatchNew"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: header.targetNames.size == 2\n\n  "};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__3;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "match_on_same_ctor"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__4_value),LEAN_SCALAR_PTR_LITERAL(78, 38, 237, 47, 106, 10, 11, 248)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__7_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__7_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__6_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__9;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__8_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__13 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__14 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__28_value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__14_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__15 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__25_value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__15_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__16 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__17 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__18 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__17_value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__18_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__19 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__20 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__31_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__21 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__21_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__20_value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__21_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__22 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__22_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__23 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__23_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__24 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__24_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__23_value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__24_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__25 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Nat.compare_eq_eq.mp"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__26 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__26_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__27;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__28 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__28_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "compare_eq_eq"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__29 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__29_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__30 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__30_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__28_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__31_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__29_value),LEAN_SCALAR_PTR_LITERAL(242, 151, 26, 225, 153, 203, 91, 119)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__31_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__30_value),LEAN_SCALAR_PTR_LITERAL(94, 11, 29, 173, 18, 99, 159, 69)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__31 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__31_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__28_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__32_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__29_value),LEAN_SCALAR_PTR_LITERAL(242, 151, 26, 225, 153, 203, 91, 119)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__32 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__32_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__33 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__33_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__32_value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__33_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__34 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__34_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__35 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__35_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__36 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__36_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__37;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__36_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 253, 71, 61, 132, 173, 240)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__38 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__38_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__39 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__39_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__40 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__40_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__1_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__5_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__8_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__10_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__12_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(226, 44, 125, 228, 251, 150, 72, 72)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__15 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__16 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__15_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__17 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__18 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__16_value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__18_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__19 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__20 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__20_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__22 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__23 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__24 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__24_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__23_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__24_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__26 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__27_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__27_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__27_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__26_value),LEAN_SCALAR_PTR_LITERAL(103, 175, 198, 167, 172, 79, 14, 207)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__27 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__27_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mutual"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 205, 8, 5, 164, 77, 17, 1)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "set_option"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__2_value),LEAN_SCALAR_PTR_LITERAL(216, 223, 149, 245, 150, 86, 134, 198)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "match.ignoreUnusedAlts"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__5;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ignoreUnusedAlts"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 5, 219, 45, 43, 52, 169, 192)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__6_value),LEAN_SCALAR_PTR_LITERAL(49, 254, 67, 85, 227, 127, 91, 187)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1_value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__8_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__0(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(3, 185, 255, 214, 49, 16, 173, 251)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__3;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__5;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__7_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__6_value),LEAN_SCALAR_PTR_LITERAL(79, 30, 18, 84, 71, 173, 185, 159)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__10_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__10_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__9_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__12_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__12_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__11_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__13 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__14 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__15_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__15_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__13_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__15_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__14_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__15 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__15_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "method_specs"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__16 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__16_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__17;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__16_value),LEAN_SCALAR_PTR_LITERAL(101, 159, 225, 215, 58, 146, 25, 204)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__18 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__19 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__19_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__3;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__6;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(72, 55, 55, 9, 143, 73, 230, 150)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__8_value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__9_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "x.ctorIdx"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__12;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ctorIdx"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__13 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(2, 247, 218, 116, 51, 159, 161, 152)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__14 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "y.ctorIdx"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__15 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__15_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__16;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(72, 55, 55, 9, 143, 73, 230, 150)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(85, 37, 232, 186, 208, 254, 208, 112)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__17 = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumCmd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__1(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__0_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__0_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__0_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__16_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(214, 245, 77, 140, 236, 123, 248, 43)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__2_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 87, 41, 84, 80, 186, 228, 139)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__2_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__2_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__2_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(214, 146, 61, 148, 52, 127, 164, 158)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__4_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(54, 226, 227, 81, 35, 13, 185, 126)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__4_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__4_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__5_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__5_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__5_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__6_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__4_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__5_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(155, 135, 205, 158, 42, 30, 240, 37)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__6_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__6_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__7_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__7_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__7_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__6_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__7_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(254, 41, 211, 152, 255, 207, 100, 126)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__9_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__8_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(199, 200, 248, 195, 255, 104, 182, 0)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__9_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__9_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__9_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(73, 190, 197, 108, 143, 88, 227, 65)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__11_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__10_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(47, 199, 3, 241, 107, 15, 45, 213)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__11_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__11_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__11_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 15, 148, 183, 57, 172, 17, 87)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__13_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__12_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1187715530) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(253, 121, 178, 8, 160, 220, 233, 66)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__13_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__13_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__15_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__13_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__14_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(190, 65, 24, 154, 152, 230, 188, 253)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__15_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__15_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__16_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__16_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__16_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__17_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__15_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__16_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(50, 66, 188, 46, 171, 180, 95, 99)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__17_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__17_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__18_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__17_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(11, 83, 81, 67, 51, 241, 247, 37)}};
static const lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__18_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__18_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
lean_inc(v_defValue_5_);
v___x_8_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_8_, 0, v_defValue_5_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_9_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_9_, 0, v_name_1_);
lean_ctor_set(v___x_9_, 1, v_ref_3_);
lean_ctor_set(v___x_9_, 2, v___x_8_);
lean_ctor_set(v___x_9_, 3, v_descr_6_);
lean_ctor_set(v___x_9_, 4, v_deprecation_x3f_7_);
v___x_10_ = lean_register_option(v_name_1_, v___x_9_);
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_18_; 
v_isSharedCheck_18_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_18_ == 0)
{
lean_object* v_unused_19_; 
v_unused_19_ = lean_ctor_get(v___x_10_, 0);
lean_dec(v_unused_19_);
v___x_12_ = v___x_10_;
v_isShared_13_ = v_isSharedCheck_18_;
goto v_resetjp_11_;
}
else
{
lean_dec(v___x_10_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_18_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
lean_object* v___x_14_; lean_object* v___x_16_; 
lean_inc(v_defValue_5_);
v___x_14_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_14_, 0, v_name_1_);
lean_ctor_set(v___x_14_, 1, v_defValue_5_);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_14_);
v___x_16_ = v___x_12_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v___x_14_);
v___x_16_ = v_reuseFailAlloc_17_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
return v___x_16_;
}
}
}
else
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_27_; 
lean_dec(v_name_1_);
v_a_20_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_27_ == 0)
{
v___x_22_ = v___x_10_;
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_10_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_20_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_28_, lean_object* v_decl_29_, lean_object* v_ref_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__spec__0(v_name_28_, v_decl_29_, v_ref_30_);
lean_dec_ref(v_decl_29_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_78_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__3_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_));
v___x_79_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__5_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_));
v___x_80_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__19_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_));
v___x_81_ = l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4__spec__0(v___x_78_, v___x_79_, v___x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4____boxed(lean_object* v___y_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l___private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_();
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader(lean_object* v_indVal_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader___closed__0));
v___x_95_ = lean_unsigned_to_nat(2u);
v___x_96_ = l_Lean_Elab_Deriving_mkHeader(v___x_94_, v___x_95_, v_indVal_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader___boxed(lean_object* v_indVal_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader(v_indVal_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg___lam__0(lean_object* v_k_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v_b_109_, lean_object* v_c_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v___x_116_; 
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
lean_inc(v___y_112_);
lean_inc_ref(v___y_111_);
lean_inc(v___y_108_);
lean_inc_ref(v___y_107_);
v___x_116_ = lean_apply_9(v_k_106_, v_b_109_, v_c_110_, v___y_107_, v___y_108_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, lean_box(0));
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg___lam__0___boxed(lean_object* v_k_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v_b_120_, lean_object* v_c_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg___lam__0(v_k_117_, v___y_118_, v___y_119_, v_b_120_, v_c_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_119_);
lean_dec_ref(v___y_118_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg(lean_object* v_type_128_, lean_object* v_k_129_, uint8_t v_cleanupAnnotations_130_, uint8_t v_whnfType_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v___f_139_; lean_object* v___x_140_; 
lean_inc(v___y_133_);
lean_inc_ref(v___y_132_);
v___f_139_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_139_, 0, v_k_129_);
lean_closure_set(v___f_139_, 1, v___y_132_);
lean_closure_set(v___f_139_, 2, v___y_133_);
v___x_140_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_128_, v___f_139_, v_cleanupAnnotations_130_, v_whnfType_131_, v___y_134_, v___y_135_, v___y_136_, v___y_137_);
if (lean_obj_tag(v___x_140_) == 0)
{
return v___x_140_;
}
else
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_148_; 
v_a_141_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_148_ == 0)
{
v___x_143_ = v___x_140_;
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_140_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_146_; 
if (v_isShared_144_ == 0)
{
v___x_146_ = v___x_143_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_a_141_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg___boxed(lean_object* v_type_149_, lean_object* v_k_150_, lean_object* v_cleanupAnnotations_151_, lean_object* v_whnfType_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_160_; uint8_t v_whnfType_boxed_161_; lean_object* v_res_162_; 
v_cleanupAnnotations_boxed_160_ = lean_unbox(v_cleanupAnnotations_151_);
v_whnfType_boxed_161_ = lean_unbox(v_whnfType_152_);
v_res_162_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg(v_type_149_, v_k_150_, v_cleanupAnnotations_boxed_160_, v_whnfType_boxed_161_, v___y_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5(lean_object* v_00_u03b1_163_, lean_object* v_type_164_, lean_object* v_k_165_, uint8_t v_cleanupAnnotations_166_, uint8_t v_whnfType_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg(v_type_164_, v_k_165_, v_cleanupAnnotations_166_, v_whnfType_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___boxed(lean_object* v_00_u03b1_176_, lean_object* v_type_177_, lean_object* v_k_178_, lean_object* v_cleanupAnnotations_179_, lean_object* v_whnfType_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_188_; uint8_t v_whnfType_boxed_189_; lean_object* v_res_190_; 
v_cleanupAnnotations_boxed_188_ = lean_unbox(v_cleanupAnnotations_179_);
v_whnfType_boxed_189_ = lean_unbox(v_whnfType_180_);
v_res_190_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5(v_00_u03b1_176_, v_type_177_, v_k_178_, v_cleanupAnnotations_boxed_188_, v_whnfType_boxed_189_, v___y_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__1(size_t v_sz_191_, size_t v_i_192_, lean_object* v_bs_193_){
_start:
{
uint8_t v___x_194_; 
v___x_194_ = lean_usize_dec_lt(v_i_192_, v_sz_191_);
if (v___x_194_ == 0)
{
return v_bs_193_;
}
else
{
lean_object* v_v_195_; lean_object* v___x_196_; lean_object* v_bs_x27_197_; size_t v___x_198_; size_t v___x_199_; lean_object* v___x_200_; 
v_v_195_ = lean_array_uget(v_bs_193_, v_i_192_);
v___x_196_ = lean_unsigned_to_nat(0u);
v_bs_x27_197_ = lean_array_uset(v_bs_193_, v_i_192_, v___x_196_);
v___x_198_ = ((size_t)1ULL);
v___x_199_ = lean_usize_add(v_i_192_, v___x_198_);
v___x_200_ = lean_array_uset(v_bs_x27_197_, v_i_192_, v_v_195_);
v_i_192_ = v___x_199_;
v_bs_193_ = v___x_200_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__1___boxed(lean_object* v_sz_202_, lean_object* v_i_203_, lean_object* v_bs_204_){
_start:
{
size_t v_sz_boxed_205_; size_t v_i_boxed_206_; lean_object* v_res_207_; 
v_sz_boxed_205_ = lean_unbox_usize(v_sz_202_);
lean_dec(v_sz_202_);
v_i_boxed_206_ = lean_unbox_usize(v_i_203_);
lean_dec(v_i_203_);
v_res_207_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__1(v_sz_boxed_205_, v_i_boxed_206_, v_bs_204_);
return v_res_207_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__4));
v___x_218_ = l_String_toRawSubstring_x27(v___x_217_);
return v___x_218_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__22));
v___x_256_ = l_String_toRawSubstring_x27(v___x_255_);
return v___x_256_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__34));
v___x_287_ = l_String_toRawSubstring_x27(v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0(uint8_t v___x_300_, lean_object* v___x_301_, lean_object* v___x_302_, lean_object* v_snd_303_, lean_object* v_rhs_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_){
_start:
{
lean_object* v_toCold_312_; lean_object* v_ref_313_; lean_object* v_quotContext_314_; lean_object* v_currMacroScope_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v_toCold_312_ = lean_ctor_get(v___y_309_, 0);
v_ref_313_ = lean_ctor_get(v___y_309_, 2);
v_quotContext_314_ = lean_ctor_get(v_toCold_312_, 8);
v_currMacroScope_315_ = lean_ctor_get(v_toCold_312_, 9);
v___x_316_ = l_Lean_SourceInfo_fromRef(v_ref_313_, v___x_300_);
v___x_317_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3));
v___x_318_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__5);
v___x_319_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__8));
lean_inc_n(v_currMacroScope_315_, 3);
lean_inc_n(v_quotContext_314_, 3);
v___x_320_ = l_Lean_addMacroScope(v_quotContext_314_, v___x_319_, v_currMacroScope_315_);
v___x_321_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__12));
lean_inc_n(v___x_316_, 11);
v___x_322_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_322_, 0, v___x_316_);
lean_ctor_set(v___x_322_, 1, v___x_318_);
lean_ctor_set(v___x_322_, 2, v___x_320_);
lean_ctor_set(v___x_322_, 3, v___x_321_);
v___x_323_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_324_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16));
v___x_325_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18));
v___x_326_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__19));
v___x_327_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_316_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
v___x_328_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__21));
v___x_329_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23);
v___x_330_ = lean_box(0);
v___x_331_ = l_Lean_addMacroScope(v_quotContext_314_, v___x_330_, v_currMacroScope_315_);
v___x_332_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__33));
v___x_333_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_333_, 0, v___x_316_);
lean_ctor_set(v___x_333_, 1, v___x_329_);
lean_ctor_set(v___x_333_, 2, v___x_331_);
lean_ctor_set(v___x_333_, 3, v___x_332_);
v___x_334_ = l_Lean_Syntax_node1(v___x_316_, v___x_328_, v___x_333_);
v___x_335_ = l_Lean_Syntax_node2(v___x_316_, v___x_325_, v___x_327_, v___x_334_);
v___x_336_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35);
v___x_337_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__36));
v___x_338_ = l_Lean_addMacroScope(v_quotContext_314_, v___x_337_, v_currMacroScope_315_);
v___x_339_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__39));
v___x_340_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_340_, 0, v___x_316_);
lean_ctor_set(v___x_340_, 1, v___x_336_);
lean_ctor_set(v___x_340_, 2, v___x_338_);
lean_ctor_set(v___x_340_, 3, v___x_339_);
v___x_341_ = l_Lean_Syntax_node2(v___x_316_, v___x_323_, v___x_301_, v___x_302_);
v___x_342_ = l_Lean_Syntax_node2(v___x_316_, v___x_317_, v___x_340_, v___x_341_);
v___x_343_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__40));
v___x_344_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_316_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_345_ = l_Lean_Syntax_node3(v___x_316_, v___x_324_, v___x_335_, v___x_342_, v___x_344_);
v___x_346_ = l_Lean_Syntax_node2(v___x_316_, v___x_323_, v___x_345_, v_rhs_304_);
v___x_347_ = l_Lean_Syntax_node2(v___x_316_, v___x_317_, v___x_322_, v___x_346_);
lean_inc(v___y_310_);
lean_inc_ref(v___y_309_);
lean_inc(v___y_308_);
lean_inc_ref(v___y_307_);
lean_inc(v___y_306_);
lean_inc_ref(v___y_305_);
v___x_348_ = lean_apply_8(v_snd_303_, v___x_347_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_, lean_box(0));
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___boxed(lean_object* v___x_349_, lean_object* v___x_350_, lean_object* v___x_351_, lean_object* v_snd_352_, lean_object* v_rhs_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
uint8_t v___x_50312__boxed_361_; lean_object* v_res_362_; 
v___x_50312__boxed_361_ = lean_unbox(v___x_349_);
v_res_362_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0(v___x_50312__boxed_361_, v___x_350_, v___x_351_, v_snd_352_, v_rhs_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg(lean_object* v_upperBound_383_, lean_object* v___x_384_, lean_object* v_xs_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_b_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_a_395_; uint8_t v___x_399_; 
v___x_399_ = lean_nat_dec_lt(v_a_387_, v_upperBound_383_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; 
lean_dec(v_a_387_);
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v_b_388_);
return v___x_400_;
}
else
{
lean_object* v_snd_401_; lean_object* v_fst_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_506_; 
v_snd_401_ = lean_ctor_get(v_b_388_, 1);
v_fst_402_ = lean_ctor_get(v_b_388_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v_b_388_);
if (v_isSharedCheck_506_ == 0)
{
v___x_404_ = v_b_388_;
v_isShared_405_ = v_isSharedCheck_506_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_snd_401_);
lean_inc(v_fst_402_);
lean_dec(v_b_388_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_506_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v_fst_406_; lean_object* v_snd_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_505_; 
v_fst_406_ = lean_ctor_get(v_snd_401_, 0);
v_snd_407_ = lean_ctor_get(v_snd_401_, 1);
v_isSharedCheck_505_ = !lean_is_exclusive(v_snd_401_);
if (v_isSharedCheck_505_ == 0)
{
v___x_409_ = v_snd_401_;
v_isShared_410_ = v_isSharedCheck_505_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_snd_407_);
lean_inc(v_fst_406_);
lean_dec(v_snd_401_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_505_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_411_ = l_Lean_instInhabitedExpr;
v___x_412_ = lean_nat_add(v___x_384_, v_a_387_);
v___x_413_ = lean_array_get_borrowed(v___x_411_, v_xs_385_, v___x_412_);
lean_dec(v___x_412_);
lean_inc(v___x_413_);
v___x_414_ = l_Lean_Meta_isProof(v___x_413_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; uint8_t v___x_416_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_a_415_);
lean_dec_ref_known(v___x_414_, 1);
v___x_416_ = lean_unbox(v_a_415_);
if (v___x_416_ == 0)
{
lean_object* v_lctx_417_; uint8_t v___x_418_; 
v_lctx_417_ = lean_ctor_get(v___y_389_, 2);
lean_inc(v___x_413_);
lean_inc_ref(v_lctx_417_);
v___x_418_ = l_Lean_Meta_occursOrInType(v_lctx_417_, v___x_413_, v_a_386_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; lean_object* v___x_420_; 
lean_dec(v_a_415_);
v___x_419_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__1));
v___x_420_ = l_Lean_Core_mkFreshUserName(v___x_419_, v___y_391_, v___y_392_);
if (lean_obj_tag(v___x_420_) == 0)
{
lean_object* v_a_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v_a_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc(v_a_421_);
lean_dec_ref_known(v___x_420_, 1);
v___x_422_ = l_Lean_mkIdent(v_a_421_);
v___x_423_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__3));
v___x_424_ = l_Lean_Core_mkFreshUserName(v___x_423_, v___y_391_, v___y_392_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___f_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_432_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_424_, 1);
v___x_426_ = l_Lean_mkIdent(v_a_425_);
v___x_427_ = lean_box(v___x_418_);
lean_inc(v___x_426_);
lean_inc(v___x_422_);
v___f_428_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_428_, 0, v___x_427_);
lean_closure_set(v___f_428_, 1, v___x_422_);
lean_closure_set(v___f_428_, 2, v___x_426_);
lean_closure_set(v___f_428_, 3, v_snd_407_);
v___x_429_ = lean_array_push(v_fst_402_, v___x_422_);
v___x_430_ = lean_array_push(v_fst_406_, v___x_426_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 1, v___f_428_);
lean_ctor_set(v___x_409_, 0, v___x_430_);
v___x_432_ = v___x_409_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_430_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v___f_428_);
v___x_432_ = v_reuseFailAlloc_436_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
lean_object* v___x_434_; 
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 1, v___x_432_);
lean_ctor_set(v___x_404_, 0, v___x_429_);
v___x_434_ = v___x_404_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v___x_429_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v___x_432_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
v_a_395_ = v___x_434_;
goto v___jp_394_;
}
}
}
else
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_444_; 
lean_dec(v___x_422_);
lean_del_object(v___x_409_);
lean_dec(v_snd_407_);
lean_dec(v_fst_406_);
lean_del_object(v___x_404_);
lean_dec(v_fst_402_);
lean_dec(v_a_387_);
v_a_437_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_444_ == 0)
{
v___x_439_ = v___x_424_;
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_424_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_442_; 
if (v_isShared_440_ == 0)
{
v___x_442_ = v___x_439_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_a_437_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
}
else
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
lean_del_object(v___x_409_);
lean_dec(v_snd_407_);
lean_dec(v_fst_406_);
lean_del_object(v___x_404_);
lean_dec(v_fst_402_);
lean_dec(v_a_387_);
v_a_445_ = lean_ctor_get(v___x_420_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_420_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_420_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
else
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__1));
v___x_454_ = l_Lean_Core_mkFreshUserName(v___x_453_, v___y_391_, v___y_392_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v_ref_456_; lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_469_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref_known(v___x_454_, 1);
v_ref_456_ = lean_ctor_get(v___y_391_, 2);
v___x_457_ = l_Lean_mkIdent(v_a_455_);
lean_inc(v___x_457_);
v___x_458_ = lean_array_push(v_fst_402_, v___x_457_);
v___x_459_ = lean_unbox(v_a_415_);
lean_dec(v_a_415_);
v___x_460_ = l_Lean_SourceInfo_fromRef(v_ref_456_, v___x_459_);
v___x_461_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__5));
v___x_462_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__6));
lean_inc_n(v___x_460_, 2);
v___x_463_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_460_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__40));
v___x_465_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_460_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
v___x_466_ = l_Lean_Syntax_node3(v___x_460_, v___x_461_, v___x_463_, v___x_457_, v___x_465_);
v___x_467_ = lean_array_push(v_fst_406_, v___x_466_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_467_);
v___x_469_ = v___x_409_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v___x_467_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v_snd_407_);
v___x_469_ = v_reuseFailAlloc_473_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_471_; 
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 1, v___x_469_);
lean_ctor_set(v___x_404_, 0, v___x_458_);
v___x_471_ = v___x_404_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
v_a_395_ = v___x_471_;
goto v___jp_394_;
}
}
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
lean_dec(v_a_415_);
lean_del_object(v___x_409_);
lean_dec(v_snd_407_);
lean_dec(v_fst_406_);
lean_del_object(v___x_404_);
lean_dec(v_fst_402_);
lean_dec(v_a_387_);
v_a_474_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_454_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_454_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
else
{
lean_object* v_ref_482_; uint8_t v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_492_; 
lean_dec(v_a_415_);
v_ref_482_ = lean_ctor_get(v___y_391_, 2);
v___x_483_ = 0;
v___x_484_ = l_Lean_SourceInfo_fromRef(v_ref_482_, v___x_483_);
v___x_485_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8));
v___x_486_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__9));
lean_inc(v___x_484_);
v___x_487_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_484_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = l_Lean_Syntax_node1(v___x_484_, v___x_485_, v___x_487_);
lean_inc(v___x_488_);
v___x_489_ = lean_array_push(v_fst_402_, v___x_488_);
v___x_490_ = lean_array_push(v_fst_406_, v___x_488_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_490_);
v___x_492_ = v___x_409_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_490_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_snd_407_);
v___x_492_ = v_reuseFailAlloc_496_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
lean_object* v___x_494_; 
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 1, v___x_492_);
lean_ctor_set(v___x_404_, 0, v___x_489_);
v___x_494_ = v___x_404_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v___x_492_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
v_a_395_ = v___x_494_;
goto v___jp_394_;
}
}
}
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_del_object(v___x_409_);
lean_dec(v_snd_407_);
lean_dec(v_fst_406_);
lean_del_object(v___x_404_);
lean_dec(v_fst_402_);
lean_dec(v_a_387_);
v_a_497_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_414_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_414_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_497_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
}
}
v___jp_394_:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_unsigned_to_nat(1u);
v___x_397_ = lean_nat_add(v_a_387_, v___x_396_);
lean_dec(v_a_387_);
v_a_387_ = v___x_397_;
v_b_388_ = v_a_395_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___boxed(lean_object* v_upperBound_507_, lean_object* v___x_508_, lean_object* v_xs_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_b_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg(v_upperBound_507_, v___x_508_, v_xs_509_, v_a_510_, v_a_511_, v_b_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v_xs_509_);
lean_dec(v___x_508_);
lean_dec(v_upperBound_507_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4___redArg(lean_object* v_upperBound_519_, lean_object* v_a_520_, lean_object* v_b_521_, lean_object* v___y_522_){
_start:
{
uint8_t v___x_524_; 
v___x_524_ = lean_nat_dec_lt(v_a_520_, v_upperBound_519_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; 
lean_dec(v_a_520_);
v___x_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_525_, 0, v_b_521_);
return v___x_525_;
}
else
{
lean_object* v_ref_526_; uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v_ref_526_ = lean_ctor_get(v___y_522_, 2);
v___x_527_ = 0;
v___x_528_ = l_Lean_SourceInfo_fromRef(v_ref_526_, v___x_527_);
v___x_529_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8));
v___x_530_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__9));
lean_inc(v___x_528_);
v___x_531_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_528_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = l_Lean_Syntax_node1(v___x_528_, v___x_529_, v___x_531_);
v___x_533_ = lean_array_push(v_b_521_, v___x_532_);
v___x_534_ = lean_unsigned_to_nat(1u);
v___x_535_ = lean_nat_add(v_a_520_, v___x_534_);
lean_dec(v_a_520_);
v_a_520_ = v___x_535_;
v_b_521_ = v___x_533_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4___redArg___boxed(lean_object* v_upperBound_537_, lean_object* v_a_538_, lean_object* v_b_539_, lean_object* v___y_540_, lean_object* v___y_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4___redArg(v_upperBound_537_, v_a_538_, v_b_539_, v___y_540_);
lean_dec_ref(v___y_540_);
lean_dec(v_upperBound_537_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3___redArg(lean_object* v_upperBound_543_, lean_object* v_a_544_, lean_object* v_b_545_, lean_object* v___y_546_){
_start:
{
uint8_t v___x_548_; 
v___x_548_ = lean_nat_dec_lt(v_a_544_, v_upperBound_543_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; 
lean_dec(v_a_544_);
v___x_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_549_, 0, v_b_545_);
return v___x_549_;
}
else
{
lean_object* v_fst_550_; lean_object* v_snd_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_570_; 
v_fst_550_ = lean_ctor_get(v_b_545_, 0);
v_snd_551_ = lean_ctor_get(v_b_545_, 1);
v_isSharedCheck_570_ = !lean_is_exclusive(v_b_545_);
if (v_isSharedCheck_570_ == 0)
{
v___x_553_ = v_b_545_;
v_isShared_554_ = v_isSharedCheck_570_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_snd_551_);
lean_inc(v_fst_550_);
lean_dec(v_b_545_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_570_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v_ref_555_; uint8_t v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_565_; 
v_ref_555_ = lean_ctor_get(v___y_546_, 2);
v___x_556_ = 0;
v___x_557_ = l_Lean_SourceInfo_fromRef(v_ref_555_, v___x_556_);
v___x_558_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8));
v___x_559_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__9));
lean_inc(v___x_557_);
v___x_560_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_560_, 0, v___x_557_);
lean_ctor_set(v___x_560_, 1, v___x_559_);
v___x_561_ = l_Lean_Syntax_node1(v___x_557_, v___x_558_, v___x_560_);
lean_inc(v___x_561_);
v___x_562_ = lean_array_push(v_fst_550_, v___x_561_);
v___x_563_ = lean_array_push(v_snd_551_, v___x_561_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 1, v___x_563_);
lean_ctor_set(v___x_553_, 0, v___x_562_);
v___x_565_ = v___x_553_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v___x_563_);
v___x_565_ = v_reuseFailAlloc_569_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = lean_unsigned_to_nat(1u);
v___x_567_ = lean_nat_add(v_a_544_, v___x_566_);
lean_dec(v_a_544_);
v_a_544_ = v___x_567_;
v_b_545_ = v___x_565_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3___redArg___boxed(lean_object* v_upperBound_571_, lean_object* v_a_572_, lean_object* v_b_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3___redArg(v_upperBound_571_, v_a_572_, v_b_573_, v___y_574_);
lean_dec_ref(v___y_574_);
lean_dec(v_upperBound_571_);
return v_res_576_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = l_Array_mkArray0___redArg();
return v___x_584_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__4));
v___x_587_ = l_String_toRawSubstring_x27(v___x_586_);
return v___x_587_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__16(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__15));
v___x_612_ = l_Lean_mkAtom(v___x_611_);
return v___x_612_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__19(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__18));
v___x_616_ = l_String_toRawSubstring_x27(v___x_615_);
return v___x_616_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__27(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__26));
v___x_634_ = l_String_toRawSubstring_x27(v___x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2(lean_object* v_indVal_650_, lean_object* v___x_651_, lean_object* v_alts_652_, lean_object* v___f_653_, lean_object* v_numFields_654_, lean_object* v_head_655_, lean_object* v___f_656_, lean_object* v_xs_657_, lean_object* v_type_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = l_Lean_Core_betaReduce(v_type_658_, v___y_663_, v___y_664_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v_numParams_668_; lean_object* v_numIndices_669_; lean_object* v___x_670_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc(v_a_667_);
lean_dec_ref_known(v___x_666_, 1);
v_numParams_668_ = lean_ctor_get(v_indVal_650_, 1);
v_numIndices_669_ = lean_ctor_get(v_indVal_650_, 2);
lean_inc_ref(v_alts_652_);
lean_inc(v___x_651_);
v___x_670_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4___redArg(v_numIndices_669_, v___x_651_, v_alts_652_, v___y_663_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_a_671_);
lean_dec_ref_known(v___x_670_, 1);
lean_inc_ref(v_alts_652_);
v___x_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_672_, 0, v_alts_652_);
lean_ctor_set(v___x_672_, 1, v_alts_652_);
lean_inc(v___x_651_);
v___x_673_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3___redArg(v_numParams_668_, v___x_651_, v___x_672_, v___y_663_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; lean_object* v_fst_675_; lean_object* v_snd_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_887_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_a_674_);
lean_dec_ref_known(v___x_673_, 1);
v_fst_675_ = lean_ctor_get(v_a_674_, 0);
v_snd_676_ = lean_ctor_get(v_a_674_, 1);
v_isSharedCheck_887_ = !lean_is_exclusive(v_a_674_);
if (v_isSharedCheck_887_ == 0)
{
v___x_678_ = v_a_674_;
v_isShared_679_ = v_isSharedCheck_887_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_snd_676_);
lean_inc(v_fst_675_);
lean_dec(v_a_674_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_887_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 1, v___f_653_);
lean_ctor_set(v___x_678_, 0, v_snd_676_);
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_snd_676_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v___f_653_);
v___x_681_ = v_reuseFailAlloc_886_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v_fst_675_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg(v_numFields_654_, v_numParams_668_, v_xs_657_, v_a_667_, v___x_651_, v___x_682_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
lean_dec(v_a_667_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v_a_684_; lean_object* v_snd_685_; lean_object* v_fst_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_877_; 
v_a_684_ = lean_ctor_get(v___x_683_, 0);
lean_inc(v_a_684_);
lean_dec_ref_known(v___x_683_, 1);
v_snd_685_ = lean_ctor_get(v_a_684_, 1);
v_fst_686_ = lean_ctor_get(v_a_684_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v_a_684_);
if (v_isSharedCheck_877_ == 0)
{
v___x_688_ = v_a_684_;
v_isShared_689_ = v_isSharedCheck_877_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_snd_685_);
lean_inc(v_fst_686_);
lean_dec(v_a_684_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_877_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v_fst_690_; lean_object* v_snd_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_876_; 
v_fst_690_ = lean_ctor_get(v_snd_685_, 0);
v_snd_691_ = lean_ctor_get(v_snd_685_, 1);
v_isSharedCheck_876_ = !lean_is_exclusive(v_snd_685_);
if (v_isSharedCheck_876_ == 0)
{
v___x_693_ = v_snd_685_;
v_isShared_694_ = v_isSharedCheck_876_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_snd_691_);
lean_inc(v_fst_690_);
lean_dec(v_snd_685_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_876_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v_toCold_695_; lean_object* v_ref_696_; uint8_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_703_; 
v_toCold_695_ = lean_ctor_get(v___y_663_, 0);
v_ref_696_ = lean_ctor_get(v___y_663_, 2);
v___x_697_ = 0;
v___x_698_ = l_Lean_SourceInfo_fromRef(v_ref_696_, v___x_697_);
v___x_699_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3));
v___x_700_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1));
v___x_701_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__2));
lean_inc(v___x_698_);
if (v_isShared_694_ == 0)
{
lean_ctor_set_tag(v___x_693_, 2);
lean_ctor_set(v___x_693_, 1, v___x_701_);
lean_ctor_set(v___x_693_, 0, v___x_698_);
v___x_703_ = v___x_693_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_698_);
lean_ctor_set(v_reuseFailAlloc_875_, 1, v___x_701_);
v___x_703_ = v_reuseFailAlloc_875_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_704_ = l_Lean_mkIdent(v_head_655_);
lean_inc(v___x_704_);
lean_inc_n(v___x_698_, 2);
v___x_705_ = l_Lean_Syntax_node2(v___x_698_, v___x_700_, v___x_703_, v___x_704_);
v___x_706_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_707_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3);
v___x_708_ = l_Array_append___redArg(v___x_707_, v_fst_686_);
lean_dec(v_fst_686_);
v___x_709_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_709_, 0, v___x_698_);
lean_ctor_set(v___x_709_, 1, v___x_706_);
lean_ctor_set(v___x_709_, 2, v___x_708_);
v___x_710_ = l_Lean_Syntax_node2(v___x_698_, v___x_699_, v___x_705_, v___x_709_);
lean_inc_ref(v___f_656_);
lean_inc(v___y_664_);
lean_inc_ref(v___y_663_);
lean_inc(v___y_662_);
lean_inc_ref(v___y_661_);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
v___x_711_ = lean_apply_7(v___f_656_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, lean_box(0));
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; lean_object* v___x_714_; 
v_a_712_ = lean_ctor_get(v___x_711_, 0);
lean_inc_n(v_a_712_, 2);
lean_dec_ref_known(v___x_711_, 1);
if (v_isShared_689_ == 0)
{
lean_ctor_set_tag(v___x_688_, 2);
lean_ctor_set(v___x_688_, 1, v___x_701_);
lean_ctor_set(v___x_688_, 0, v_a_712_);
v___x_714_ = v___x_688_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_712_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v___x_701_);
v___x_714_ = v_reuseFailAlloc_866_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
lean_inc_n(v_a_712_, 2);
v___x_715_ = l_Lean_Syntax_node2(v_a_712_, v___x_700_, v___x_714_, v___x_704_);
v___x_716_ = l_Array_append___redArg(v___x_707_, v_fst_690_);
lean_dec(v_fst_690_);
v___x_717_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_717_, 0, v_a_712_);
lean_ctor_set(v___x_717_, 1, v___x_706_);
lean_ctor_set(v___x_717_, 2, v___x_716_);
v___x_718_ = l_Lean_Syntax_node2(v_a_712_, v___x_699_, v___x_715_, v___x_717_);
v___x_719_ = lean_unsigned_to_nat(2u);
v___x_720_ = lean_mk_empty_array_with_capacity(v___x_719_);
lean_inc(v___x_710_);
lean_inc_ref(v___x_720_);
v___x_721_ = lean_array_push(v___x_720_, v___x_710_);
lean_inc_ref(v___x_721_);
v___x_722_ = lean_array_push(v___x_721_, v___x_718_);
lean_inc(v_a_671_);
v___x_723_ = l_Array_append___redArg(v_a_671_, v___x_722_);
lean_dec_ref(v___x_722_);
lean_inc_ref(v___f_656_);
lean_inc(v___y_664_);
lean_inc_ref(v___y_663_);
lean_inc(v___y_662_);
lean_inc_ref(v___y_661_);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
v___x_724_ = lean_apply_7(v___f_656_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, lean_box(0));
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc_n(v_a_725_, 2);
lean_dec_ref_known(v___x_724_, 1);
v___x_726_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8));
v___x_727_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__9));
v___x_728_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_728_, 0, v_a_725_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
v___x_729_ = l_Lean_Syntax_node1(v_a_725_, v___x_726_, v___x_728_);
v___x_730_ = lean_array_push(v___x_721_, v___x_729_);
lean_inc(v_a_671_);
v___x_731_ = l_Array_append___redArg(v_a_671_, v___x_730_);
lean_dec_ref(v___x_730_);
lean_inc_ref(v___f_656_);
lean_inc(v___y_664_);
lean_inc_ref(v___y_663_);
lean_inc(v___y_662_);
lean_inc_ref(v___y_661_);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
v___x_732_ = lean_apply_7(v___f_656_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, lean_box(0));
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc_n(v_a_733_, 2);
lean_dec_ref_known(v___x_732_, 1);
v___x_734_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_734_, 0, v_a_733_);
lean_ctor_set(v___x_734_, 1, v___x_727_);
v___x_735_ = l_Lean_Syntax_node1(v_a_733_, v___x_726_, v___x_734_);
v___x_736_ = lean_array_push(v___x_720_, v___x_735_);
v___x_737_ = lean_array_push(v___x_736_, v___x_710_);
v___x_738_ = l_Array_append___redArg(v_a_671_, v___x_737_);
lean_dec_ref(v___x_737_);
lean_inc_ref(v___f_656_);
lean_inc(v___y_664_);
lean_inc_ref(v___y_663_);
lean_inc(v___y_662_);
lean_inc_ref(v___y_661_);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
v___x_739_ = lean_apply_7(v___f_656_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, lean_box(0));
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v_quotContext_741_; lean_object* v_currMacroScope_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_a_740_);
lean_dec_ref_known(v___x_739_, 1);
v_quotContext_741_ = lean_ctor_get(v_toCold_695_, 8);
v_currMacroScope_742_ = lean_ctor_get(v_toCold_695_, 9);
v___x_743_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5);
v___x_744_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7));
lean_inc(v_currMacroScope_742_);
lean_inc(v_quotContext_741_);
v___x_745_ = l_Lean_addMacroScope(v_quotContext_741_, v___x_744_, v_currMacroScope_742_);
v___x_746_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__11));
v___x_747_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_747_, 0, v_a_740_);
lean_ctor_set(v___x_747_, 1, v___x_743_);
lean_ctor_set(v___x_747_, 2, v___x_745_);
lean_ctor_set(v___x_747_, 3, v___x_746_);
lean_inc(v___y_664_);
lean_inc_ref(v___y_663_);
lean_inc(v___y_662_);
lean_inc_ref(v___y_661_);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
v___x_748_ = lean_apply_8(v_snd_691_, v___x_747_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, lean_box(0));
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
lean_inc_ref(v___f_656_);
lean_inc(v___y_664_);
lean_inc_ref(v___y_663_);
lean_inc(v___y_662_);
lean_inc_ref(v___y_661_);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
v___x_750_ = lean_apply_7(v___f_656_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, lean_box(0));
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; size_t v_sz_755_; size_t v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc_n(v_a_751_, 5);
lean_dec_ref_known(v___x_750_, 1);
v___x_752_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13));
v___x_753_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__14));
v___x_754_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_754_, 0, v_a_751_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
v_sz_755_ = lean_array_size(v___x_723_);
v___x_756_ = ((size_t)0ULL);
v___x_757_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__1(v_sz_755_, v___x_756_, v___x_723_);
v___x_758_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__16, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__16_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__16);
v___x_759_ = l_Lean_mkSepArray(v___x_757_, v___x_758_);
lean_dec_ref(v___x_757_);
v___x_760_ = l_Array_append___redArg(v___x_707_, v___x_759_);
lean_dec_ref(v___x_759_);
v___x_761_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_761_, 0, v_a_751_);
lean_ctor_set(v___x_761_, 1, v___x_706_);
lean_ctor_set(v___x_761_, 2, v___x_760_);
v___x_762_ = l_Lean_Syntax_node1(v_a_751_, v___x_706_, v___x_761_);
v___x_763_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__17));
v___x_764_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_764_, 0, v_a_751_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = l_Lean_Syntax_node4(v_a_751_, v___x_752_, v___x_754_, v___x_762_, v___x_764_, v_a_749_);
lean_inc_ref(v___f_656_);
lean_inc(v___y_664_);
lean_inc_ref(v___y_663_);
lean_inc(v___y_662_);
lean_inc_ref(v___y_661_);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
v___x_766_ = lean_apply_7(v___f_656_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, lean_box(0));
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; size_t v_sz_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc_n(v_a_767_, 6);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_768_, 0, v_a_767_);
lean_ctor_set(v___x_768_, 1, v___x_753_);
v_sz_769_ = lean_array_size(v___x_731_);
v___x_770_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__1(v_sz_769_, v___x_756_, v___x_731_);
v___x_771_ = l_Lean_mkSepArray(v___x_770_, v___x_758_);
lean_dec_ref(v___x_770_);
v___x_772_ = l_Array_append___redArg(v___x_707_, v___x_771_);
lean_dec_ref(v___x_771_);
v___x_773_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_773_, 0, v_a_767_);
lean_ctor_set(v___x_773_, 1, v___x_706_);
lean_ctor_set(v___x_773_, 2, v___x_772_);
v___x_774_ = l_Lean_Syntax_node1(v_a_767_, v___x_706_, v___x_773_);
v___x_775_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_775_, 0, v_a_767_);
lean_ctor_set(v___x_775_, 1, v___x_763_);
v___x_776_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__19, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__19_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__19);
v___x_777_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__21));
lean_inc(v_currMacroScope_742_);
lean_inc(v_quotContext_741_);
v___x_778_ = l_Lean_addMacroScope(v_quotContext_741_, v___x_777_, v_currMacroScope_742_);
v___x_779_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__25));
v___x_780_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_780_, 0, v_a_767_);
lean_ctor_set(v___x_780_, 1, v___x_776_);
lean_ctor_set(v___x_780_, 2, v___x_778_);
lean_ctor_set(v___x_780_, 3, v___x_779_);
v___x_781_ = l_Lean_Syntax_node4(v_a_767_, v___x_752_, v___x_768_, v___x_774_, v___x_775_, v___x_780_);
lean_inc(v___y_664_);
lean_inc_ref(v___y_663_);
lean_inc(v___y_662_);
lean_inc_ref(v___y_661_);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
v___x_782_ = lean_apply_7(v___f_656_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, lean_box(0));
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_809_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_809_ == 0)
{
v___x_785_ = v___x_782_;
v_isShared_786_ = v_isSharedCheck_809_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_782_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_809_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_787_; size_t v_sz_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
lean_inc_n(v_a_783_, 5);
v___x_787_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_787_, 0, v_a_783_);
lean_ctor_set(v___x_787_, 1, v___x_753_);
v_sz_788_ = lean_array_size(v___x_738_);
v___x_789_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__1(v_sz_788_, v___x_756_, v___x_738_);
v___x_790_ = l_Lean_mkSepArray(v___x_789_, v___x_758_);
lean_dec_ref(v___x_789_);
v___x_791_ = l_Array_append___redArg(v___x_707_, v___x_790_);
lean_dec_ref(v___x_790_);
v___x_792_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_792_, 0, v_a_783_);
lean_ctor_set(v___x_792_, 1, v___x_706_);
lean_ctor_set(v___x_792_, 2, v___x_791_);
v___x_793_ = l_Lean_Syntax_node1(v_a_783_, v___x_706_, v___x_792_);
v___x_794_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_794_, 0, v_a_783_);
lean_ctor_set(v___x_794_, 1, v___x_763_);
v___x_795_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__27, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__27_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__27);
v___x_796_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__29));
lean_inc(v_currMacroScope_742_);
lean_inc(v_quotContext_741_);
v___x_797_ = l_Lean_addMacroScope(v_quotContext_741_, v___x_796_, v_currMacroScope_742_);
v___x_798_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__33));
v___x_799_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_799_, 0, v_a_783_);
lean_ctor_set(v___x_799_, 1, v___x_795_);
lean_ctor_set(v___x_799_, 2, v___x_797_);
lean_ctor_set(v___x_799_, 3, v___x_798_);
v___x_800_ = l_Lean_Syntax_node4(v_a_783_, v___x_752_, v___x_787_, v___x_793_, v___x_794_, v___x_799_);
v___x_801_ = lean_unsigned_to_nat(3u);
v___x_802_ = lean_mk_empty_array_with_capacity(v___x_801_);
v___x_803_ = lean_array_push(v___x_802_, v___x_765_);
v___x_804_ = lean_array_push(v___x_803_, v___x_781_);
v___x_805_ = lean_array_push(v___x_804_, v___x_800_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v___x_805_);
v___x_807_ = v___x_785_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_805_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
lean_dec(v___x_781_);
lean_dec(v___x_765_);
lean_dec_ref(v___x_738_);
v_a_810_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_782_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_782_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_825_; 
lean_dec(v___x_765_);
lean_dec_ref(v___x_738_);
lean_dec_ref(v___x_731_);
lean_dec_ref(v___f_656_);
v_a_818_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_825_ == 0)
{
v___x_820_ = v___x_766_;
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_766_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_823_; 
if (v_isShared_821_ == 0)
{
v___x_823_ = v___x_820_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_818_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
else
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
lean_dec(v_a_749_);
lean_dec_ref(v___x_738_);
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_723_);
lean_dec_ref(v___f_656_);
v_a_826_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_750_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_750_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
else
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
lean_dec_ref(v___x_738_);
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_723_);
lean_dec_ref(v___f_656_);
v_a_834_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_748_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_748_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
else
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
lean_dec_ref(v___x_738_);
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_723_);
lean_dec(v_snd_691_);
lean_dec_ref(v___f_656_);
v_a_842_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_739_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_739_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_723_);
lean_dec_ref(v___x_720_);
lean_dec(v___x_710_);
lean_dec(v_snd_691_);
lean_dec(v_a_671_);
lean_dec_ref(v___f_656_);
v_a_850_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_732_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_732_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
lean_dec_ref(v___x_723_);
lean_dec_ref(v___x_721_);
lean_dec_ref(v___x_720_);
lean_dec(v___x_710_);
lean_dec(v_snd_691_);
lean_dec(v_a_671_);
lean_dec_ref(v___f_656_);
v_a_858_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_724_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_724_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec(v___x_710_);
lean_dec(v___x_704_);
lean_dec(v_snd_691_);
lean_dec(v_fst_690_);
lean_del_object(v___x_688_);
lean_dec(v_a_671_);
lean_dec_ref(v___f_656_);
v_a_867_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_711_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_711_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
lean_dec(v_a_671_);
lean_dec_ref(v___f_656_);
lean_dec(v_head_655_);
v_a_878_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_683_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_683_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
}
}
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
lean_dec(v_a_671_);
lean_dec(v_a_667_);
lean_dec_ref(v___f_656_);
lean_dec(v_head_655_);
lean_dec_ref(v___f_653_);
lean_dec(v___x_651_);
v_a_888_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_673_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_673_);
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
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_dec(v_a_667_);
lean_dec_ref(v___f_656_);
lean_dec(v_head_655_);
lean_dec_ref(v___f_653_);
lean_dec_ref(v_alts_652_);
lean_dec(v___x_651_);
return v___x_670_;
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
lean_dec_ref(v___f_656_);
lean_dec(v_head_655_);
lean_dec_ref(v___f_653_);
lean_dec_ref(v_alts_652_);
lean_dec(v___x_651_);
v_a_896_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_666_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_666_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___boxed(lean_object* v_indVal_904_, lean_object* v___x_905_, lean_object* v_alts_906_, lean_object* v___f_907_, lean_object* v_numFields_908_, lean_object* v_head_909_, lean_object* v___f_910_, lean_object* v_xs_911_, lean_object* v_type_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2(v_indVal_904_, v___x_905_, v_alts_906_, v___f_907_, v_numFields_908_, v_head_909_, v___f_910_, v_xs_911_, v_type_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
lean_dec(v___y_914_);
lean_dec_ref(v___y_913_);
lean_dec_ref(v_xs_911_);
lean_dec(v_numFields_908_);
lean_dec_ref(v_indVal_904_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__1(lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_ref_928_; uint8_t v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_ref_928_ = lean_ctor_get(v___y_925_, 2);
v___x_929_ = 0;
v___x_930_ = l_Lean_SourceInfo_fromRef(v_ref_928_, v___x_929_);
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__1___boxed(lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__1(v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__0(lean_object* v_rhs_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v___x_948_; 
v___x_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_948_, 0, v_rhs_940_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__0___boxed(lean_object* v_rhs_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__0(v_rhs_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1(lean_object* v_msg_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___f_978_; lean_object* v___f_979_; lean_object* v___f_980_; lean_object* v___f_981_; lean_object* v___f_982_; lean_object* v___f_983_; lean_object* v___f_984_; lean_object* v___f_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v_toApplicative_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1081_; 
v___f_978_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__0));
v___f_979_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__1));
v___f_980_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__2));
v___f_981_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__3));
v___f_982_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__4));
v___f_983_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_983_, 0, v___f_982_);
lean_closure_set(v___f_983_, 1, v___f_981_);
v___f_984_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_984_, 0, v___f_981_);
v___f_985_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__5));
v___x_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_986_, 0, v___f_978_);
lean_ctor_set(v___x_986_, 1, v___f_979_);
v___x_987_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v___f_980_);
lean_ctor_set(v___x_987_, 2, v___f_983_);
lean_ctor_set(v___x_987_, 3, v___f_984_);
lean_ctor_set(v___x_987_, 4, v___f_985_);
v___x_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
lean_ctor_set(v___x_988_, 1, v___f_981_);
v___x_989_ = l_StateRefT_x27_instMonad___redArg(v___x_988_);
v_toApplicative_990_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1081_ == 0)
{
lean_object* v_unused_1082_; 
v_unused_1082_ = lean_ctor_get(v___x_989_, 1);
lean_dec(v_unused_1082_);
v___x_992_ = v___x_989_;
v_isShared_993_ = v_isSharedCheck_1081_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_toApplicative_990_);
lean_dec(v___x_989_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1081_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v_toFunctor_994_; lean_object* v_toSeq_995_; lean_object* v_toSeqLeft_996_; lean_object* v_toSeqRight_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1079_; 
v_toFunctor_994_ = lean_ctor_get(v_toApplicative_990_, 0);
v_toSeq_995_ = lean_ctor_get(v_toApplicative_990_, 2);
v_toSeqLeft_996_ = lean_ctor_get(v_toApplicative_990_, 3);
v_toSeqRight_997_ = lean_ctor_get(v_toApplicative_990_, 4);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_toApplicative_990_);
if (v_isSharedCheck_1079_ == 0)
{
lean_object* v_unused_1080_; 
v_unused_1080_ = lean_ctor_get(v_toApplicative_990_, 1);
lean_dec(v_unused_1080_);
v___x_999_ = v_toApplicative_990_;
v_isShared_1000_ = v_isSharedCheck_1079_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_toSeqRight_997_);
lean_inc(v_toSeqLeft_996_);
lean_inc(v_toSeq_995_);
lean_inc(v_toFunctor_994_);
lean_dec(v_toApplicative_990_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1079_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___f_1001_; lean_object* v___f_1002_; lean_object* v___f_1003_; lean_object* v___f_1004_; lean_object* v___x_1005_; lean_object* v___f_1006_; lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___x_1010_; 
v___f_1001_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__6));
v___f_1002_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__7));
lean_inc_ref(v_toFunctor_994_);
v___f_1003_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1003_, 0, v_toFunctor_994_);
v___f_1004_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1004_, 0, v_toFunctor_994_);
v___x_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___f_1003_);
lean_ctor_set(v___x_1005_, 1, v___f_1004_);
v___f_1006_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1006_, 0, v_toSeqRight_997_);
v___f_1007_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1007_, 0, v_toSeqLeft_996_);
v___f_1008_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1008_, 0, v_toSeq_995_);
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 4, v___f_1006_);
lean_ctor_set(v___x_999_, 3, v___f_1007_);
lean_ctor_set(v___x_999_, 2, v___f_1008_);
lean_ctor_set(v___x_999_, 1, v___f_1001_);
lean_ctor_set(v___x_999_, 0, v___x_1005_);
v___x_1010_ = v___x_999_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1005_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___f_1001_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v___f_1008_);
lean_ctor_set(v_reuseFailAlloc_1078_, 3, v___f_1007_);
lean_ctor_set(v_reuseFailAlloc_1078_, 4, v___f_1006_);
v___x_1010_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
lean_object* v___x_1012_; 
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 1, v___f_1002_);
lean_ctor_set(v___x_992_, 0, v___x_1010_);
v___x_1012_ = v___x_992_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v___f_1002_);
v___x_1012_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
lean_object* v___x_1013_; lean_object* v_toApplicative_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1075_; 
v___x_1013_ = l_StateRefT_x27_instMonad___redArg(v___x_1012_);
v_toApplicative_1014_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1075_ == 0)
{
lean_object* v_unused_1076_; 
v_unused_1076_ = lean_ctor_get(v___x_1013_, 1);
lean_dec(v_unused_1076_);
v___x_1016_ = v___x_1013_;
v_isShared_1017_ = v_isSharedCheck_1075_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_toApplicative_1014_);
lean_dec(v___x_1013_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1075_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v_toFunctor_1018_; lean_object* v_toSeq_1019_; lean_object* v_toSeqLeft_1020_; lean_object* v_toSeqRight_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1073_; 
v_toFunctor_1018_ = lean_ctor_get(v_toApplicative_1014_, 0);
v_toSeq_1019_ = lean_ctor_get(v_toApplicative_1014_, 2);
v_toSeqLeft_1020_ = lean_ctor_get(v_toApplicative_1014_, 3);
v_toSeqRight_1021_ = lean_ctor_get(v_toApplicative_1014_, 4);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_toApplicative_1014_);
if (v_isSharedCheck_1073_ == 0)
{
lean_object* v_unused_1074_; 
v_unused_1074_ = lean_ctor_get(v_toApplicative_1014_, 1);
lean_dec(v_unused_1074_);
v___x_1023_ = v_toApplicative_1014_;
v_isShared_1024_ = v_isSharedCheck_1073_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_toSeqRight_1021_);
lean_inc(v_toSeqLeft_1020_);
lean_inc(v_toSeq_1019_);
lean_inc(v_toFunctor_1018_);
lean_dec(v_toApplicative_1014_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1073_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___f_1025_; lean_object* v___f_1026_; lean_object* v___f_1027_; lean_object* v___f_1028_; lean_object* v___x_1029_; lean_object* v___f_1030_; lean_object* v___f_1031_; lean_object* v___f_1032_; lean_object* v___x_1034_; 
v___f_1025_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__8));
v___f_1026_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__9));
lean_inc_ref(v_toFunctor_1018_);
v___f_1027_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1027_, 0, v_toFunctor_1018_);
v___f_1028_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1028_, 0, v_toFunctor_1018_);
v___x_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___f_1027_);
lean_ctor_set(v___x_1029_, 1, v___f_1028_);
v___f_1030_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1030_, 0, v_toSeqRight_1021_);
v___f_1031_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1031_, 0, v_toSeqLeft_1020_);
v___f_1032_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1032_, 0, v_toSeq_1019_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 4, v___f_1030_);
lean_ctor_set(v___x_1023_, 3, v___f_1031_);
lean_ctor_set(v___x_1023_, 2, v___f_1032_);
lean_ctor_set(v___x_1023_, 1, v___f_1025_);
lean_ctor_set(v___x_1023_, 0, v___x_1029_);
v___x_1034_ = v___x_1023_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1029_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___f_1025_);
lean_ctor_set(v_reuseFailAlloc_1072_, 2, v___f_1032_);
lean_ctor_set(v_reuseFailAlloc_1072_, 3, v___f_1031_);
lean_ctor_set(v_reuseFailAlloc_1072_, 4, v___f_1030_);
v___x_1034_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1036_; 
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 1, v___f_1026_);
lean_ctor_set(v___x_1016_, 0, v___x_1034_);
v___x_1036_ = v___x_1016_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1034_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v___f_1026_);
v___x_1036_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
lean_object* v___x_1037_; lean_object* v_toApplicative_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1069_; 
v___x_1037_ = l_StateRefT_x27_instMonad___redArg(v___x_1036_);
v_toApplicative_1038_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1069_ == 0)
{
lean_object* v_unused_1070_; 
v_unused_1070_ = lean_ctor_get(v___x_1037_, 1);
lean_dec(v_unused_1070_);
v___x_1040_ = v___x_1037_;
v_isShared_1041_ = v_isSharedCheck_1069_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_toApplicative_1038_);
lean_dec(v___x_1037_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1069_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v_toFunctor_1042_; lean_object* v_toSeq_1043_; lean_object* v_toSeqLeft_1044_; lean_object* v_toSeqRight_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1067_; 
v_toFunctor_1042_ = lean_ctor_get(v_toApplicative_1038_, 0);
v_toSeq_1043_ = lean_ctor_get(v_toApplicative_1038_, 2);
v_toSeqLeft_1044_ = lean_ctor_get(v_toApplicative_1038_, 3);
v_toSeqRight_1045_ = lean_ctor_get(v_toApplicative_1038_, 4);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_toApplicative_1038_);
if (v_isSharedCheck_1067_ == 0)
{
lean_object* v_unused_1068_; 
v_unused_1068_ = lean_ctor_get(v_toApplicative_1038_, 1);
lean_dec(v_unused_1068_);
v___x_1047_ = v_toApplicative_1038_;
v_isShared_1048_ = v_isSharedCheck_1067_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_toSeqRight_1045_);
lean_inc(v_toSeqLeft_1044_);
lean_inc(v_toSeq_1043_);
lean_inc(v_toFunctor_1042_);
lean_dec(v_toApplicative_1038_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1067_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___f_1049_; lean_object* v___f_1050_; lean_object* v___f_1051_; lean_object* v___f_1052_; lean_object* v___x_1053_; lean_object* v___f_1054_; lean_object* v___f_1055_; lean_object* v___f_1056_; lean_object* v___x_1058_; 
v___f_1049_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__10));
v___f_1050_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___closed__11));
lean_inc_ref(v_toFunctor_1042_);
v___f_1051_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1051_, 0, v_toFunctor_1042_);
v___f_1052_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1052_, 0, v_toFunctor_1042_);
v___x_1053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___f_1051_);
lean_ctor_set(v___x_1053_, 1, v___f_1052_);
v___f_1054_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1054_, 0, v_toSeqRight_1045_);
v___f_1055_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1055_, 0, v_toSeqLeft_1044_);
v___f_1056_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1056_, 0, v_toSeq_1043_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 4, v___f_1054_);
lean_ctor_set(v___x_1047_, 3, v___f_1055_);
lean_ctor_set(v___x_1047_, 2, v___f_1056_);
lean_ctor_set(v___x_1047_, 1, v___f_1049_);
lean_ctor_set(v___x_1047_, 0, v___x_1053_);
v___x_1058_ = v___x_1047_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v___f_1049_);
lean_ctor_set(v_reuseFailAlloc_1066_, 2, v___f_1056_);
lean_ctor_set(v_reuseFailAlloc_1066_, 3, v___f_1055_);
lean_ctor_set(v_reuseFailAlloc_1066_, 4, v___f_1054_);
v___x_1058_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
lean_object* v___x_1060_; 
if (v_isShared_1041_ == 0)
{
lean_ctor_set(v___x_1040_, 1, v___f_1050_);
lean_ctor_set(v___x_1040_, 0, v___x_1058_);
v___x_1060_ = v___x_1040_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1065_, 1, v___f_1050_);
v___x_1060_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_47541__overap_1063_; lean_object* v___x_1064_; 
v___x_1061_ = lean_box(0);
v___x_1062_ = l_instInhabitedOfMonad___redArg(v___x_1060_, v___x_1061_);
v___x_47541__overap_1063_ = lean_panic_fn_borrowed(v___x_1062_, v_msg_970_);
lean_dec(v___x_1062_);
lean_inc(v___y_976_);
lean_inc_ref(v___y_975_);
lean_inc(v___y_974_);
lean_inc_ref(v___y_973_);
lean_inc(v___y_972_);
lean_inc_ref(v___y_971_);
v___x_1064_ = lean_apply_7(v___x_47541__overap_1063_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_, lean_box(0));
return v___x_1064_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1___boxed(lean_object* v_msg_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1(v_msg_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__2(lean_object* v_msgData_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
lean_object* v___x_1098_; lean_object* v_env_1099_; lean_object* v___x_1100_; lean_object* v_toCold_1101_; lean_object* v_mctx_1102_; lean_object* v_lctx_1103_; lean_object* v_options_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1098_ = lean_st_ref_get(v___y_1096_);
v_env_1099_ = lean_ctor_get(v___x_1098_, 0);
lean_inc_ref(v_env_1099_);
lean_dec(v___x_1098_);
v___x_1100_ = lean_st_ref_get(v___y_1094_);
v_toCold_1101_ = lean_ctor_get(v___y_1095_, 0);
v_mctx_1102_ = lean_ctor_get(v___x_1100_, 0);
lean_inc_ref(v_mctx_1102_);
lean_dec(v___x_1100_);
v_lctx_1103_ = lean_ctor_get(v___y_1093_, 2);
v_options_1104_ = lean_ctor_get(v_toCold_1101_, 2);
lean_inc_ref(v_options_1104_);
lean_inc_ref(v_lctx_1103_);
v___x_1105_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1105_, 0, v_env_1099_);
lean_ctor_set(v___x_1105_, 1, v_mctx_1102_);
lean_ctor_set(v___x_1105_, 2, v_lctx_1103_);
lean_ctor_set(v___x_1105_, 3, v_options_1104_);
v___x_1106_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
lean_ctor_set(v___x_1106_, 1, v_msgData_1092_);
v___x_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__2(v_msgData_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_);
lean_dec(v___y_1112_);
lean_dec_ref(v___y_1111_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
return v_res_1114_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0(void){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = lean_box(1);
v___x_1116_ = l_Lean_MessageData_ofFormat(v___x_1115_);
return v___x_1116_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__3(void){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__2));
v___x_1121_ = l_Lean_MessageData_ofFormat(v___x_1120_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12(lean_object* v_x_1122_, lean_object* v_x_1123_){
_start:
{
if (lean_obj_tag(v_x_1123_) == 0)
{
return v_x_1122_;
}
else
{
lean_object* v_head_1124_; lean_object* v_tail_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1147_; 
v_head_1124_ = lean_ctor_get(v_x_1123_, 0);
v_tail_1125_ = lean_ctor_get(v_x_1123_, 1);
v_isSharedCheck_1147_ = !lean_is_exclusive(v_x_1123_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1127_ = v_x_1123_;
v_isShared_1128_ = v_isSharedCheck_1147_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_tail_1125_);
lean_inc(v_head_1124_);
lean_dec(v_x_1123_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1147_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v_before_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1145_; 
v_before_1129_ = lean_ctor_get(v_head_1124_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v_head_1124_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v_head_1124_, 1);
lean_dec(v_unused_1146_);
v___x_1131_ = v_head_1124_;
v_isShared_1132_ = v_isSharedCheck_1145_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_before_1129_);
lean_dec(v_head_1124_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1145_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1133_; lean_object* v___x_1135_; 
v___x_1133_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0);
if (v_isShared_1132_ == 0)
{
lean_ctor_set_tag(v___x_1131_, 7);
lean_ctor_set(v___x_1131_, 1, v___x_1133_);
lean_ctor_set(v___x_1131_, 0, v_x_1122_);
v___x_1135_ = v___x_1131_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_x_1122_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v___x_1133_);
v___x_1135_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1136_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__3);
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 7);
lean_ctor_set(v___x_1127_, 1, v___x_1136_);
lean_ctor_set(v___x_1127_, 0, v___x_1135_);
v___x_1138_ = v___x_1127_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1135_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1139_ = l_Lean_MessageData_ofSyntax(v_before_1129_);
v___x_1140_ = l_Lean_indentD(v___x_1139_);
v___x_1141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1138_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v_x_1122_ = v___x_1141_;
v_x_1123_ = v_tail_1125_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11(lean_object* v_opts_1148_, lean_object* v_opt_1149_){
_start:
{
lean_object* v_name_1150_; lean_object* v_defValue_1151_; lean_object* v_map_1152_; lean_object* v___x_1153_; 
v_name_1150_ = lean_ctor_get(v_opt_1149_, 0);
v_defValue_1151_ = lean_ctor_get(v_opt_1149_, 1);
v_map_1152_ = lean_ctor_get(v_opts_1148_, 0);
v___x_1153_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1152_, v_name_1150_);
if (lean_obj_tag(v___x_1153_) == 0)
{
uint8_t v___x_1154_; 
v___x_1154_ = lean_unbox(v_defValue_1151_);
return v___x_1154_;
}
else
{
lean_object* v_val_1155_; 
v_val_1155_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_val_1155_);
lean_dec_ref_known(v___x_1153_, 1);
if (lean_obj_tag(v_val_1155_) == 1)
{
uint8_t v_v_1156_; 
v_v_1156_ = lean_ctor_get_uint8(v_val_1155_, 0);
lean_dec_ref_known(v_val_1155_, 0);
return v_v_1156_;
}
else
{
uint8_t v___x_1157_; 
lean_dec(v_val_1155_);
v___x_1157_ = lean_unbox(v_defValue_1151_);
return v___x_1157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___boxed(lean_object* v_opts_1158_, lean_object* v_opt_1159_){
_start:
{
uint8_t v_res_1160_; lean_object* v_r_1161_; 
v_res_1160_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11(v_opts_1158_, v_opt_1159_);
lean_dec_ref(v_opt_1159_);
lean_dec_ref(v_opts_1158_);
v_r_1161_ = lean_box(v_res_1160_);
return v_r_1161_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1));
v___x_1166_ = l_Lean_MessageData_ofFormat(v___x_1165_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg(lean_object* v_msgData_1167_, lean_object* v_macroStack_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v_toCold_1171_; lean_object* v_options_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; 
v_toCold_1171_ = lean_ctor_get(v___y_1169_, 0);
v_options_1172_ = lean_ctor_get(v_toCold_1171_, 2);
v___x_1173_ = l_Lean_Elab_pp_macroStack;
v___x_1174_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11(v_options_1172_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; 
lean_dec(v_macroStack_1168_);
v___x_1175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1175_, 0, v_msgData_1167_);
return v___x_1175_;
}
else
{
if (lean_obj_tag(v_macroStack_1168_) == 0)
{
lean_object* v___x_1176_; 
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v_msgData_1167_);
return v___x_1176_;
}
else
{
lean_object* v_head_1177_; lean_object* v_after_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1193_; 
v_head_1177_ = lean_ctor_get(v_macroStack_1168_, 0);
lean_inc(v_head_1177_);
v_after_1178_ = lean_ctor_get(v_head_1177_, 1);
v_isSharedCheck_1193_ = !lean_is_exclusive(v_head_1177_);
if (v_isSharedCheck_1193_ == 0)
{
lean_object* v_unused_1194_; 
v_unused_1194_ = lean_ctor_get(v_head_1177_, 0);
lean_dec(v_unused_1194_);
v___x_1180_ = v_head_1177_;
v_isShared_1181_ = v_isSharedCheck_1193_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_after_1178_);
lean_dec(v_head_1177_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1193_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1182_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0);
if (v_isShared_1181_ == 0)
{
lean_ctor_set_tag(v___x_1180_, 7);
lean_ctor_set(v___x_1180_, 1, v___x_1182_);
lean_ctor_set(v___x_1180_, 0, v_msgData_1167_);
v___x_1184_ = v___x_1180_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_msgData_1167_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v_msgData_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1185_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2);
v___x_1186_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1184_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
v___x_1187_ = l_Lean_MessageData_ofSyntax(v_after_1178_);
v___x_1188_ = l_Lean_indentD(v___x_1187_);
v_msgData_1189_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1189_, 0, v___x_1186_);
lean_ctor_set(v_msgData_1189_, 1, v___x_1188_);
v___x_1190_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12(v_msgData_1189_, v_macroStack_1168_);
v___x_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
return v___x_1191_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_msgData_1195_, lean_object* v_macroStack_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg(v_msgData_1195_, v_macroStack_1196_, v___y_1197_);
lean_dec_ref(v___y_1197_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0___redArg(lean_object* v_msg_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_ref_1208_; lean_object* v_macroStack_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v_a_1212_; lean_object* v___x_1213_; lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1222_; 
v_ref_1208_ = lean_ctor_get(v___y_1205_, 2);
v_macroStack_1209_ = lean_ctor_get(v___y_1201_, 1);
v___x_1210_ = l_Lean_Elab_getBetterRef(v_ref_1208_, v_macroStack_1209_);
v___x_1211_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__2(v_msg_1200_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1212_);
lean_dec_ref(v___x_1211_);
lean_inc(v_macroStack_1209_);
v___x_1213_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg(v_a_1212_, v_macroStack_1209_, v___y_1205_);
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1216_ = v___x_1213_;
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1213_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1218_; lean_object* v___x_1220_; 
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1210_);
lean_ctor_set(v___x_1218_, 1, v_a_1214_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set_tag(v___x_1216_, 1);
lean_ctor_set(v___x_1216_, 0, v___x_1218_);
v___x_1220_ = v___x_1216_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0___redArg___boxed(lean_object* v_msg_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0___redArg(v_msg_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
return v_res_1231_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__0));
v___x_1234_ = l_Lean_stringToMessageData(v___x_1233_);
return v___x_1234_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__2));
v___x_1237_ = l_Lean_stringToMessageData(v___x_1236_);
return v___x_1237_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1241_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__6));
v___x_1242_ = lean_unsigned_to_nat(11u);
v___x_1243_ = lean_unsigned_to_nat(122u);
v___x_1244_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__5));
v___x_1245_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__4));
v___x_1246_ = l_mkPanicMessageWithDecl(v___x_1245_, v___x_1244_, v___x_1243_, v___x_1242_, v___x_1241_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0(lean_object* v_constName_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v___x_1263_; lean_object* v_env_1264_; uint8_t v___x_1265_; lean_object* v___x_1266_; 
v___x_1263_ = lean_st_ref_get(v___y_1253_);
v_env_1264_ = lean_ctor_get(v___x_1263_, 0);
lean_inc_ref(v_env_1264_);
lean_dec(v___x_1263_);
v___x_1265_ = 0;
lean_inc(v_constName_1247_);
v___x_1266_ = l_Lean_Environment_findAsync_x3f(v_env_1264_, v_constName_1247_, v___x_1265_);
if (lean_obj_tag(v___x_1266_) == 1)
{
lean_object* v_val_1267_; uint8_t v_kind_1268_; 
v_val_1267_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_val_1267_);
lean_dec_ref_known(v___x_1266_, 1);
v_kind_1268_ = lean_ctor_get_uint8(v_val_1267_, sizeof(void*)*3);
if (v_kind_1268_ == 6)
{
lean_object* v___x_1269_; 
v___x_1269_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1267_);
if (lean_obj_tag(v___x_1269_) == 6)
{
lean_object* v_val_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
lean_dec(v_constName_1247_);
v_val_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_val_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
lean_ctor_set_tag(v___x_1272_, 0);
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_val_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
else
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
lean_dec_ref(v___x_1269_);
v___x_1278_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__7);
v___x_1279_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__1(v___x_1278_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1288_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1282_ = v___x_1279_;
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1279_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
if (lean_obj_tag(v_a_1280_) == 0)
{
lean_del_object(v___x_1282_);
goto v___jp_1255_;
}
else
{
lean_object* v_val_1284_; lean_object* v___x_1286_; 
lean_dec(v_constName_1247_);
v_val_1284_ = lean_ctor_get(v_a_1280_, 0);
lean_inc(v_val_1284_);
lean_dec_ref_known(v_a_1280_, 1);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 0, v_val_1284_);
v___x_1286_ = v___x_1282_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_val_1284_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
lean_dec(v_constName_1247_);
v_a_1289_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1279_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1279_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
}
else
{
lean_dec(v_val_1267_);
goto v___jp_1255_;
}
}
else
{
lean_dec(v___x_1266_);
goto v___jp_1255_;
}
v___jp_1255_:
{
lean_object* v___x_1256_; uint8_t v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1256_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__1);
v___x_1257_ = 0;
v___x_1258_ = l_Lean_MessageData_ofConstName(v_constName_1247_, v___x_1257_);
v___x_1259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1256_);
lean_ctor_set(v___x_1259_, 1, v___x_1258_);
v___x_1260_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__3);
v___x_1261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1259_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
v___x_1262_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0___redArg(v___x_1261_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
return v___x_1262_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___boxed(lean_object* v_constName_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0(v_constName_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__6(size_t v_sz_1306_, size_t v_i_1307_, lean_object* v_bs_1308_){
_start:
{
uint8_t v___x_1309_; 
v___x_1309_ = lean_usize_dec_lt(v_i_1307_, v_sz_1306_);
if (v___x_1309_ == 0)
{
return v_bs_1308_;
}
else
{
lean_object* v_v_1310_; lean_object* v___x_1311_; lean_object* v_bs_x27_1312_; size_t v___x_1313_; size_t v___x_1314_; lean_object* v___x_1315_; 
v_v_1310_ = lean_array_uget(v_bs_1308_, v_i_1307_);
v___x_1311_ = lean_unsigned_to_nat(0u);
v_bs_x27_1312_ = lean_array_uset(v_bs_1308_, v_i_1307_, v___x_1311_);
v___x_1313_ = ((size_t)1ULL);
v___x_1314_ = lean_usize_add(v_i_1307_, v___x_1313_);
v___x_1315_ = lean_array_uset(v_bs_x27_1312_, v_i_1307_, v_v_1310_);
v_i_1307_ = v___x_1314_;
v_bs_1308_ = v___x_1315_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__6___boxed(lean_object* v_sz_1317_, lean_object* v_i_1318_, lean_object* v_bs_1319_){
_start:
{
size_t v_sz_boxed_1320_; size_t v_i_boxed_1321_; lean_object* v_res_1322_; 
v_sz_boxed_1320_ = lean_unbox_usize(v_sz_1317_);
lean_dec(v_sz_1317_);
v_i_boxed_1321_ = lean_unbox_usize(v_i_1318_);
lean_dec(v_i_1318_);
v_res_1322_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__6(v_sz_boxed_1320_, v_i_boxed_1321_, v_bs_1319_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg(lean_object* v_indVal_1327_, lean_object* v_as_x27_1328_, lean_object* v_b_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_){
_start:
{
if (lean_obj_tag(v_as_x27_1328_) == 0)
{
lean_object* v___x_1337_; 
lean_dec_ref(v_indVal_1327_);
v___x_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1337_, 0, v_b_1329_);
return v___x_1337_;
}
else
{
lean_object* v_head_1338_; lean_object* v_tail_1339_; lean_object* v___f_1340_; lean_object* v___f_1341_; lean_object* v___x_1342_; lean_object* v_alts_1343_; lean_object* v___x_1344_; 
v_head_1338_ = lean_ctor_get(v_as_x27_1328_, 0);
v_tail_1339_ = lean_ctor_get(v_as_x27_1328_, 1);
v___f_1340_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__0));
v___f_1341_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__1));
v___x_1342_ = lean_unsigned_to_nat(0u);
v_alts_1343_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__2));
lean_inc(v_head_1338_);
v___x_1344_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0(v_head_1338_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v_toConstantVal_1346_; lean_object* v_numFields_1347_; lean_object* v_type_1348_; lean_object* v___f_1349_; uint8_t v___x_1350_; lean_object* v___x_1351_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1344_, 1);
v_toConstantVal_1346_ = lean_ctor_get(v_a_1345_, 0);
lean_inc_ref(v_toConstantVal_1346_);
v_numFields_1347_ = lean_ctor_get(v_a_1345_, 4);
lean_inc(v_numFields_1347_);
lean_dec(v_a_1345_);
v_type_1348_ = lean_ctor_get(v_toConstantVal_1346_, 2);
lean_inc_ref(v_type_1348_);
lean_dec_ref(v_toConstantVal_1346_);
lean_inc(v_head_1338_);
lean_inc_ref(v_indVal_1327_);
v___f_1349_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___boxed), 16, 7);
lean_closure_set(v___f_1349_, 0, v_indVal_1327_);
lean_closure_set(v___f_1349_, 1, v___x_1342_);
lean_closure_set(v___f_1349_, 2, v_alts_1343_);
lean_closure_set(v___f_1349_, 3, v___f_1340_);
lean_closure_set(v___f_1349_, 4, v_numFields_1347_);
lean_closure_set(v___f_1349_, 5, v_head_1338_);
lean_closure_set(v___f_1349_, 6, v___f_1341_);
v___x_1350_ = 0;
v___x_1351_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg(v_type_1348_, v___f_1349_, v___x_1350_, v___x_1350_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v_a_1352_; size_t v_sz_1353_; size_t v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
lean_inc(v_a_1352_);
lean_dec_ref_known(v___x_1351_, 1);
v_sz_1353_ = lean_array_size(v_a_1352_);
v___x_1354_ = ((size_t)0ULL);
v___x_1355_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__6(v_sz_1353_, v___x_1354_, v_a_1352_);
v___x_1356_ = l_Array_append___redArg(v_b_1329_, v___x_1355_);
lean_dec_ref(v___x_1355_);
v_as_x27_1328_ = v_tail_1339_;
v_b_1329_ = v___x_1356_;
goto _start;
}
else
{
lean_dec_ref(v_b_1329_);
lean_dec_ref(v_indVal_1327_);
return v___x_1351_;
}
}
else
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
lean_dec_ref(v_b_1329_);
lean_dec_ref(v_indVal_1327_);
v_a_1358_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___x_1344_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___x_1344_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_a_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___boxed(lean_object* v_indVal_1366_, lean_object* v_as_x27_1367_, lean_object* v_b_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg(v_indVal_1366_, v_as_x27_1367_, v_b_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v_as_x27_1367_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts(lean_object* v_indVal_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v_ctors_1385_; lean_object* v_alts_1386_; lean_object* v___x_1387_; 
v_ctors_1385_ = lean_ctor_get(v_indVal_1377_, 4);
lean_inc(v_ctors_1385_);
v_alts_1386_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__2));
v___x_1387_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg(v_indVal_1377_, v_ctors_1385_, v_alts_1386_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
lean_dec(v_ctors_1385_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v_a_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1397_; 
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1390_ = v___x_1387_;
v_isShared_1391_ = v_isSharedCheck_1397_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_a_1388_);
lean_dec(v___x_1387_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1397_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1395_; 
v___x_1392_ = lean_array_pop(v_a_1388_);
v___x_1393_ = lean_array_pop(v___x_1392_);
if (v_isShared_1391_ == 0)
{
lean_ctor_set(v___x_1390_, 0, v___x_1393_);
v___x_1395_ = v___x_1390_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1393_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
else
{
return v___x_1387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts___boxed(lean_object* v_indVal_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts(v_indVal_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2(lean_object* v_upperBound_1407_, lean_object* v___x_1408_, lean_object* v_xs_1409_, lean_object* v_a_1410_, lean_object* v_inst_1411_, lean_object* v_R_1412_, lean_object* v_a_1413_, lean_object* v_b_1414_, lean_object* v_c_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v___x_1423_; 
v___x_1423_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg(v_upperBound_1407_, v___x_1408_, v_xs_1409_, v_a_1410_, v_a_1413_, v_b_1414_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___boxed(lean_object* v_upperBound_1424_, lean_object* v___x_1425_, lean_object* v_xs_1426_, lean_object* v_a_1427_, lean_object* v_inst_1428_, lean_object* v_R_1429_, lean_object* v_a_1430_, lean_object* v_b_1431_, lean_object* v_c_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2(v_upperBound_1424_, v___x_1425_, v_xs_1426_, v_a_1427_, v_inst_1428_, v_R_1429_, v_a_1430_, v_b_1431_, v_c_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_);
lean_dec(v___y_1438_);
lean_dec_ref(v___y_1437_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec_ref(v_a_1427_);
lean_dec_ref(v_xs_1426_);
lean_dec(v___x_1425_);
lean_dec(v_upperBound_1424_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3(lean_object* v_upperBound_1441_, lean_object* v_inst_1442_, lean_object* v_R_1443_, lean_object* v_a_1444_, lean_object* v_b_1445_, lean_object* v_c_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v___x_1454_; 
v___x_1454_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3___redArg(v_upperBound_1441_, v_a_1444_, v_b_1445_, v___y_1451_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3___boxed(lean_object* v_upperBound_1455_, lean_object* v_inst_1456_, lean_object* v_R_1457_, lean_object* v_a_1458_, lean_object* v_b_1459_, lean_object* v_c_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__3(v_upperBound_1455_, v_inst_1456_, v_R_1457_, v_a_1458_, v_b_1459_, v_c_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v_upperBound_1455_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4(lean_object* v_upperBound_1469_, lean_object* v_inst_1470_, lean_object* v_R_1471_, lean_object* v_a_1472_, lean_object* v_b_1473_, lean_object* v_c_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4___redArg(v_upperBound_1469_, v_a_1472_, v_b_1473_, v___y_1479_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4___boxed(lean_object* v_upperBound_1483_, lean_object* v_inst_1484_, lean_object* v_R_1485_, lean_object* v_a_1486_, lean_object* v_b_1487_, lean_object* v_c_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__4(v_upperBound_1483_, v_inst_1484_, v_R_1485_, v_a_1486_, v_b_1487_, v_c_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v_upperBound_1483_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7(lean_object* v_indVal_1497_, lean_object* v_as_1498_, lean_object* v_as_x27_1499_, lean_object* v_b_1500_, lean_object* v_a_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg(v_indVal_1497_, v_as_x27_1499_, v_b_1500_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___boxed(lean_object* v_indVal_1510_, lean_object* v_as_1511_, lean_object* v_as_x27_1512_, lean_object* v_b_1513_, lean_object* v_a_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7(v_indVal_1510_, v_as_1511_, v_as_x27_1512_, v_b_1513_, v_a_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
lean_dec(v_as_x27_1512_);
lean_dec(v_as_1511_);
return v_res_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0(lean_object* v_00_u03b1_1523_, lean_object* v_msg_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v___x_1532_; 
v___x_1532_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0___redArg(v_msg_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1533_, lean_object* v_msg_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0(v_00_u03b1_1533_, v_msg_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3(lean_object* v_msgData_1543_, lean_object* v_macroStack_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg(v_msgData_1543_, v_macroStack_1544_, v___y_1549_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___boxed(lean_object* v_msgData_1553_, lean_object* v_macroStack_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
lean_object* v_res_1562_; 
v_res_1562_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3(v_msgData_1553_, v_macroStack_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld(lean_object* v_header_1576_, lean_object* v_indVal_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v___x_1585_; 
lean_inc_ref(v_indVal_1577_);
v___x_1585_ = l_Lean_Elab_Deriving_mkDiscrs(v_header_1576_, v_indVal_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1587_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1585_, 1);
v___x_1587_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts(v_indVal_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1618_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1590_ = v___x_1587_;
v_isShared_1591_ = v_isSharedCheck_1618_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_dec(v___x_1587_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1618_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v_ref_1592_; uint8_t v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; size_t v_sz_1601_; size_t v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1616_; 
v_ref_1592_ = lean_ctor_get(v___y_1582_, 2);
v___x_1593_ = 0;
v___x_1594_ = l_Lean_SourceInfo_fromRef(v_ref_1592_, v___x_1593_);
v___x_1595_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__0));
v___x_1596_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1));
lean_inc_n(v___x_1594_, 6);
v___x_1597_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1594_);
lean_ctor_set(v___x_1597_, 1, v___x_1595_);
v___x_1598_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_1599_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3);
v___x_1600_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1594_);
lean_ctor_set(v___x_1600_, 1, v___x_1598_);
lean_ctor_set(v___x_1600_, 2, v___x_1599_);
v_sz_1601_ = lean_array_size(v_a_1586_);
v___x_1602_ = ((size_t)0ULL);
v___x_1603_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__1(v_sz_1601_, v___x_1602_, v_a_1586_);
v___x_1604_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__16, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__16_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__16);
v___x_1605_ = l_Lean_mkSepArray(v___x_1603_, v___x_1604_);
lean_dec_ref(v___x_1603_);
v___x_1606_ = l_Array_append___redArg(v___x_1599_, v___x_1605_);
lean_dec_ref(v___x_1605_);
v___x_1607_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1607_, 0, v___x_1594_);
lean_ctor_set(v___x_1607_, 1, v___x_1598_);
lean_ctor_set(v___x_1607_, 2, v___x_1606_);
v___x_1608_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__2));
v___x_1609_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1594_);
lean_ctor_set(v___x_1609_, 1, v___x_1608_);
v___x_1610_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4));
v___x_1611_ = l_Array_append___redArg(v___x_1599_, v_a_1588_);
lean_dec(v_a_1588_);
v___x_1612_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1594_);
lean_ctor_set(v___x_1612_, 1, v___x_1598_);
lean_ctor_set(v___x_1612_, 2, v___x_1611_);
v___x_1613_ = l_Lean_Syntax_node1(v___x_1594_, v___x_1610_, v___x_1612_);
lean_inc_ref(v___x_1600_);
v___x_1614_ = l_Lean_Syntax_node6(v___x_1594_, v___x_1596_, v___x_1597_, v___x_1600_, v___x_1600_, v___x_1607_, v___x_1609_, v___x_1613_);
if (v_isShared_1591_ == 0)
{
lean_ctor_set(v___x_1590_, 0, v___x_1614_);
v___x_1616_ = v___x_1590_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1614_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
else
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1626_; 
lean_dec(v_a_1586_);
v_a_1619_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1621_ = v___x_1587_;
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1587_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1624_; 
if (v_isShared_1622_ == 0)
{
v___x_1624_ = v___x_1621_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1619_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_dec_ref(v_indVal_1577_);
v_a_1627_ = lean_ctor_get(v___x_1585_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1585_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1585_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___boxed(lean_object* v_header_1635_, lean_object* v_indVal_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld(v_header_1635_, v_indVal_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
return v_res_1644_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1(lean_object* v_msg_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_24772__overap_1655_; lean_object* v___x_1656_; 
v___x_1654_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1___closed__0, &l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1___closed__0);
v___x_24772__overap_1655_ = lean_panic_fn_borrowed(v___x_1654_, v_msg_1646_);
lean_inc(v___y_1652_);
lean_inc_ref(v___y_1651_);
lean_inc(v___y_1650_);
lean_inc_ref(v___y_1649_);
lean_inc(v___y_1648_);
lean_inc_ref(v___y_1647_);
v___x_1656_ = lean_apply_7(v___x_24772__overap_1655_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, lean_box(0));
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1___boxed(lean_object* v_msg_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1(v_msg_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___lam__0(uint8_t v_a_1666_, lean_object* v___x_1667_, lean_object* v___x_1668_, lean_object* v_snd_1669_, lean_object* v_rhs_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v_toCold_1678_; lean_object* v_ref_1679_; lean_object* v_quotContext_1680_; lean_object* v_currMacroScope_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v_toCold_1678_ = lean_ctor_get(v___y_1675_, 0);
v_ref_1679_ = lean_ctor_get(v___y_1675_, 2);
v_quotContext_1680_ = lean_ctor_get(v_toCold_1678_, 8);
v_currMacroScope_1681_ = lean_ctor_get(v_toCold_1678_, 9);
v___x_1682_ = l_Lean_SourceInfo_fromRef(v_ref_1679_, v_a_1666_);
v___x_1683_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3));
v___x_1684_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__5);
v___x_1685_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__8));
lean_inc_n(v_currMacroScope_1681_, 3);
lean_inc_n(v_quotContext_1680_, 3);
v___x_1686_ = l_Lean_addMacroScope(v_quotContext_1680_, v___x_1685_, v_currMacroScope_1681_);
v___x_1687_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__12));
lean_inc_n(v___x_1682_, 11);
v___x_1688_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1682_);
lean_ctor_set(v___x_1688_, 1, v___x_1684_);
lean_ctor_set(v___x_1688_, 2, v___x_1686_);
lean_ctor_set(v___x_1688_, 3, v___x_1687_);
v___x_1689_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_1690_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16));
v___x_1691_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18));
v___x_1692_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__19));
v___x_1693_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1682_);
lean_ctor_set(v___x_1693_, 1, v___x_1692_);
v___x_1694_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__21));
v___x_1695_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23);
v___x_1696_ = lean_box(0);
v___x_1697_ = l_Lean_addMacroScope(v_quotContext_1680_, v___x_1696_, v_currMacroScope_1681_);
v___x_1698_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__33));
v___x_1699_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1682_);
lean_ctor_set(v___x_1699_, 1, v___x_1695_);
lean_ctor_set(v___x_1699_, 2, v___x_1697_);
lean_ctor_set(v___x_1699_, 3, v___x_1698_);
v___x_1700_ = l_Lean_Syntax_node1(v___x_1682_, v___x_1694_, v___x_1699_);
v___x_1701_ = l_Lean_Syntax_node2(v___x_1682_, v___x_1691_, v___x_1693_, v___x_1700_);
v___x_1702_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35);
v___x_1703_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__36));
v___x_1704_ = l_Lean_addMacroScope(v_quotContext_1680_, v___x_1703_, v_currMacroScope_1681_);
v___x_1705_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__39));
v___x_1706_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1706_, 0, v___x_1682_);
lean_ctor_set(v___x_1706_, 1, v___x_1702_);
lean_ctor_set(v___x_1706_, 2, v___x_1704_);
lean_ctor_set(v___x_1706_, 3, v___x_1705_);
v___x_1707_ = l_Lean_Syntax_node2(v___x_1682_, v___x_1689_, v___x_1667_, v___x_1668_);
v___x_1708_ = l_Lean_Syntax_node2(v___x_1682_, v___x_1683_, v___x_1706_, v___x_1707_);
v___x_1709_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__40));
v___x_1710_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1682_);
lean_ctor_set(v___x_1710_, 1, v___x_1709_);
v___x_1711_ = l_Lean_Syntax_node3(v___x_1682_, v___x_1690_, v___x_1701_, v___x_1708_, v___x_1710_);
v___x_1712_ = l_Lean_Syntax_node2(v___x_1682_, v___x_1689_, v___x_1711_, v_rhs_1670_);
v___x_1713_ = l_Lean_Syntax_node2(v___x_1682_, v___x_1683_, v___x_1688_, v___x_1712_);
lean_inc(v___y_1676_);
lean_inc_ref(v___y_1675_);
lean_inc(v___y_1674_);
lean_inc_ref(v___y_1673_);
lean_inc(v___y_1672_);
lean_inc_ref(v___y_1671_);
v___x_1714_ = lean_apply_8(v_snd_1669_, v___x_1713_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, lean_box(0));
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___lam__0___boxed(lean_object* v_a_1715_, lean_object* v___x_1716_, lean_object* v___x_1717_, lean_object* v_snd_1718_, lean_object* v_rhs_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_){
_start:
{
uint8_t v_a_26413__boxed_1727_; lean_object* v_res_1728_; 
v_a_26413__boxed_1727_ = lean_unbox(v_a_1715_);
v_res_1728_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___lam__0(v_a_26413__boxed_1727_, v___x_1716_, v___x_1717_, v_snd_1718_, v_rhs_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec(v___y_1723_);
lean_dec_ref(v___y_1722_);
lean_dec(v___y_1721_);
lean_dec_ref(v___y_1720_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg(lean_object* v_upperBound_1730_, lean_object* v_indVal_1731_, lean_object* v_xs_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_b_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_a_1742_; uint8_t v___x_1746_; 
v___x_1746_ = lean_nat_dec_lt(v_a_1734_, v_upperBound_1730_);
if (v___x_1746_ == 0)
{
lean_object* v___x_1747_; 
lean_dec(v_a_1734_);
v___x_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1747_, 0, v_b_1735_);
return v___x_1747_;
}
else
{
lean_object* v_snd_1748_; lean_object* v_fst_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1850_; 
v_snd_1748_ = lean_ctor_get(v_b_1735_, 1);
v_fst_1749_ = lean_ctor_get(v_b_1735_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_b_1735_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1751_ = v_b_1735_;
v_isShared_1752_ = v_isSharedCheck_1850_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_snd_1748_);
lean_inc(v_fst_1749_);
lean_dec(v_b_1735_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1850_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v_fst_1753_; lean_object* v_snd_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1849_; 
v_fst_1753_ = lean_ctor_get(v_snd_1748_, 0);
v_snd_1754_ = lean_ctor_get(v_snd_1748_, 1);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_snd_1748_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1756_ = v_snd_1748_;
v_isShared_1757_ = v_isSharedCheck_1849_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_snd_1754_);
lean_inc(v_fst_1753_);
lean_dec(v_snd_1748_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1849_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v_numParams_1758_; lean_object* v_lctx_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; uint8_t v___x_1763_; 
v_numParams_1758_ = lean_ctor_get(v_indVal_1731_, 1);
v_lctx_1759_ = lean_ctor_get(v___y_1736_, 2);
v___x_1760_ = l_Lean_instInhabitedExpr;
v___x_1761_ = lean_nat_add(v_numParams_1758_, v_a_1734_);
v___x_1762_ = lean_array_get_borrowed(v___x_1760_, v_xs_1732_, v___x_1761_);
lean_dec(v___x_1761_);
lean_inc(v___x_1762_);
lean_inc_ref(v_lctx_1759_);
v___x_1763_ = l_Lean_Meta_occursOrInType(v_lctx_1759_, v___x_1762_, v_a_1733_);
if (v___x_1763_ == 0)
{
lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1764_ = l_Lean_Expr_fvarId_x21(v___x_1762_);
v___x_1765_ = l_Lean_FVarId_getUserName___redArg(v___x_1764_, v___y_1736_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1765_) == 0)
{
lean_object* v_a_1766_; lean_object* v___x_1767_; 
v_a_1766_ = lean_ctor_get(v___x_1765_, 0);
lean_inc_n(v_a_1766_, 2);
lean_dec_ref_known(v___x_1765_, 1);
v___x_1767_ = l_Lean_Core_mkFreshUserName(v_a_1766_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v___x_1767_, 1);
v___x_1769_ = l_Lean_mkIdent(v_a_1768_);
v___x_1770_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___closed__0));
v___x_1771_ = lean_name_append_after(v_a_1766_, v___x_1770_);
v___x_1772_ = l_Lean_Core_mkFreshUserName(v___x_1771_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1773_);
lean_dec_ref_known(v___x_1772_, 1);
v___x_1774_ = l_Lean_mkIdent(v_a_1773_);
lean_inc(v___x_1769_);
v___x_1775_ = lean_array_push(v_fst_1749_, v___x_1769_);
lean_inc(v___x_1774_);
v___x_1776_ = lean_array_push(v_fst_1753_, v___x_1774_);
lean_inc(v___y_1739_);
lean_inc_ref(v___y_1738_);
lean_inc(v___y_1737_);
lean_inc_ref(v___y_1736_);
lean_inc(v___x_1762_);
v___x_1777_ = lean_infer_type(v___x_1762_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v_a_1778_; lean_object* v___x_1779_; 
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
lean_inc(v_a_1778_);
lean_dec_ref_known(v___x_1777_, 1);
v___x_1779_ = l_Lean_Meta_isProp(v_a_1778_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v_a_1780_; uint8_t v___x_1781_; 
v_a_1780_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_a_1780_);
lean_dec_ref_known(v___x_1779_, 1);
v___x_1781_ = lean_unbox(v_a_1780_);
if (v___x_1781_ == 0)
{
lean_object* v___f_1782_; lean_object* v___x_1784_; 
v___f_1782_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_1782_, 0, v_a_1780_);
lean_closure_set(v___f_1782_, 1, v___x_1769_);
lean_closure_set(v___f_1782_, 2, v___x_1774_);
lean_closure_set(v___f_1782_, 3, v_snd_1754_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 1, v___f_1782_);
lean_ctor_set(v___x_1756_, 0, v___x_1776_);
v___x_1784_ = v___x_1756_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v___x_1776_);
lean_ctor_set(v_reuseFailAlloc_1788_, 1, v___f_1782_);
v___x_1784_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
lean_object* v___x_1786_; 
if (v_isShared_1752_ == 0)
{
lean_ctor_set(v___x_1751_, 1, v___x_1784_);
lean_ctor_set(v___x_1751_, 0, v___x_1775_);
v___x_1786_ = v___x_1751_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v___x_1775_);
lean_ctor_set(v_reuseFailAlloc_1787_, 1, v___x_1784_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
v_a_1742_ = v___x_1786_;
goto v___jp_1741_;
}
}
}
else
{
lean_object* v___x_1790_; 
lean_dec(v_a_1780_);
lean_dec(v___x_1774_);
lean_dec(v___x_1769_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 0, v___x_1776_);
v___x_1790_ = v___x_1756_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1776_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v_snd_1754_);
v___x_1790_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
lean_object* v___x_1792_; 
if (v_isShared_1752_ == 0)
{
lean_ctor_set(v___x_1751_, 1, v___x_1790_);
lean_ctor_set(v___x_1751_, 0, v___x_1775_);
v___x_1792_ = v___x_1751_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v___x_1775_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v___x_1790_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
v_a_1742_ = v___x_1792_;
goto v___jp_1741_;
}
}
}
}
else
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
lean_dec_ref(v___x_1776_);
lean_dec_ref(v___x_1775_);
lean_dec(v___x_1774_);
lean_dec(v___x_1769_);
lean_del_object(v___x_1756_);
lean_dec(v_snd_1754_);
lean_del_object(v___x_1751_);
lean_dec(v_a_1734_);
v_a_1795_ = lean_ctor_get(v___x_1779_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1779_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1797_ = v___x_1779_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1779_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
else
{
lean_object* v_a_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1810_; 
lean_dec_ref(v___x_1776_);
lean_dec_ref(v___x_1775_);
lean_dec(v___x_1774_);
lean_dec(v___x_1769_);
lean_del_object(v___x_1756_);
lean_dec(v_snd_1754_);
lean_del_object(v___x_1751_);
lean_dec(v_a_1734_);
v_a_1803_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1805_ = v___x_1777_;
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_a_1803_);
lean_dec(v___x_1777_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1808_; 
if (v_isShared_1806_ == 0)
{
v___x_1808_ = v___x_1805_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_a_1803_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
}
}
else
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1818_; 
lean_dec(v___x_1769_);
lean_del_object(v___x_1756_);
lean_dec(v_snd_1754_);
lean_dec(v_fst_1753_);
lean_del_object(v___x_1751_);
lean_dec(v_fst_1749_);
lean_dec(v_a_1734_);
v_a_1811_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1813_ = v___x_1772_;
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1772_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1816_; 
if (v_isShared_1814_ == 0)
{
v___x_1816_ = v___x_1813_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_a_1811_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
}
else
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1826_; 
lean_dec(v_a_1766_);
lean_del_object(v___x_1756_);
lean_dec(v_snd_1754_);
lean_dec(v_fst_1753_);
lean_del_object(v___x_1751_);
lean_dec(v_fst_1749_);
lean_dec(v_a_1734_);
v_a_1819_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1821_ = v___x_1767_;
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1767_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1824_; 
if (v_isShared_1822_ == 0)
{
v___x_1824_ = v___x_1821_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_a_1819_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
}
else
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
lean_del_object(v___x_1756_);
lean_dec(v_snd_1754_);
lean_dec(v_fst_1753_);
lean_del_object(v___x_1751_);
lean_dec(v_fst_1749_);
lean_dec(v_a_1734_);
v_a_1827_ = lean_ctor_get(v___x_1765_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1765_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1829_ = v___x_1765_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1765_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v_a_1827_);
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
else
{
lean_object* v_ref_1835_; uint8_t v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1844_; 
v_ref_1835_ = lean_ctor_get(v___y_1738_, 2);
v___x_1836_ = 0;
v___x_1837_ = l_Lean_SourceInfo_fromRef(v_ref_1835_, v___x_1836_);
v___x_1838_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__8));
v___x_1839_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___closed__9));
lean_inc(v___x_1837_);
v___x_1840_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1837_);
lean_ctor_set(v___x_1840_, 1, v___x_1839_);
v___x_1841_ = l_Lean_Syntax_node1(v___x_1837_, v___x_1838_, v___x_1840_);
v___x_1842_ = lean_array_push(v_fst_1749_, v___x_1841_);
if (v_isShared_1757_ == 0)
{
v___x_1844_ = v___x_1756_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_fst_1753_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v_snd_1754_);
v___x_1844_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
lean_object* v___x_1846_; 
if (v_isShared_1752_ == 0)
{
lean_ctor_set(v___x_1751_, 1, v___x_1844_);
lean_ctor_set(v___x_1751_, 0, v___x_1842_);
v___x_1846_ = v___x_1751_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v___x_1842_);
lean_ctor_set(v_reuseFailAlloc_1847_, 1, v___x_1844_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
v_a_1742_ = v___x_1846_;
goto v___jp_1741_;
}
}
}
}
}
}
v___jp_1741_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = lean_unsigned_to_nat(1u);
v___x_1744_ = lean_nat_add(v_a_1734_, v___x_1743_);
lean_dec(v_a_1734_);
v_a_1734_ = v___x_1744_;
v_b_1735_ = v_a_1742_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg___boxed(lean_object* v_upperBound_1851_, lean_object* v_indVal_1852_, lean_object* v_xs_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_b_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg(v_upperBound_1851_, v_indVal_1852_, v_xs_1853_, v_a_1854_, v_a_1855_, v_b_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec_ref(v_a_1854_);
lean_dec_ref(v_xs_1853_);
lean_dec_ref(v_indVal_1852_);
lean_dec(v_upperBound_1851_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2(lean_object* v___f_1881_, lean_object* v_numFields_1882_, lean_object* v_indVal_1883_, lean_object* v___f_1884_, lean_object* v_xs_1885_, lean_object* v_type_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lean_Core_betaReduce(v_type_1886_, v___y_1891_, v___y_1892_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_a_1895_);
lean_dec_ref_known(v___x_1894_, 1);
v___x_1896_ = lean_unsigned_to_nat(0u);
v___x_1897_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__2));
v___x_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
lean_ctor_set(v___x_1898_, 1, v___f_1881_);
v___x_1899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1897_);
lean_ctor_set(v___x_1899_, 1, v___x_1898_);
v___x_1900_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg(v_numFields_1882_, v_indVal_1883_, v_xs_1885_, v_a_1895_, v___x_1896_, v___x_1899_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
lean_dec(v_a_1895_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; lean_object* v_snd_1902_; lean_object* v_toCold_1903_; lean_object* v_fst_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_2004_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1900_, 1);
v_snd_1902_ = lean_ctor_get(v_a_1901_, 1);
lean_inc(v_snd_1902_);
v_toCold_1903_ = lean_ctor_get(v___y_1891_, 0);
v_fst_1904_ = lean_ctor_get(v_a_1901_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v_a_1901_);
if (v_isSharedCheck_2004_ == 0)
{
lean_object* v_unused_2005_; 
v_unused_2005_ = lean_ctor_get(v_a_1901_, 1);
lean_dec(v_unused_2005_);
v___x_1906_ = v_a_1901_;
v_isShared_1907_ = v_isSharedCheck_2004_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_fst_1904_);
lean_dec(v_a_1901_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_2004_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v_fst_1908_; lean_object* v_snd_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_2003_; 
v_fst_1908_ = lean_ctor_get(v_snd_1902_, 0);
v_snd_1909_ = lean_ctor_get(v_snd_1902_, 1);
v_isSharedCheck_2003_ = !lean_is_exclusive(v_snd_1902_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1911_ = v_snd_1902_;
v_isShared_1912_ = v_isSharedCheck_2003_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_snd_1909_);
lean_inc(v_fst_1908_);
lean_dec(v_snd_1902_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_2003_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v_ref_1913_; lean_object* v_quotContext_1914_; lean_object* v_currMacroScope_1915_; uint8_t v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
v_ref_1913_ = lean_ctor_get(v___y_1891_, 2);
v_quotContext_1914_ = lean_ctor_get(v_toCold_1903_, 8);
v_currMacroScope_1915_ = lean_ctor_get(v_toCold_1903_, 9);
v___x_1916_ = 0;
v___x_1917_ = l_Lean_SourceInfo_fromRef(v_ref_1913_, v___x_1916_);
v___x_1918_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5);
v___x_1919_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7));
lean_inc(v_currMacroScope_1915_);
lean_inc(v_quotContext_1914_);
v___x_1920_ = l_Lean_addMacroScope(v_quotContext_1914_, v___x_1919_, v_currMacroScope_1915_);
v___x_1921_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__11));
v___x_1922_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1917_);
lean_ctor_set(v___x_1922_, 1, v___x_1918_);
lean_ctor_set(v___x_1922_, 2, v___x_1920_);
lean_ctor_set(v___x_1922_, 3, v___x_1921_);
lean_inc(v___y_1892_);
lean_inc_ref(v___y_1891_);
lean_inc(v___y_1890_);
lean_inc_ref(v___y_1889_);
lean_inc(v___y_1888_);
lean_inc_ref(v___y_1887_);
v___x_1923_ = lean_apply_8(v_snd_1909_, v___x_1922_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, lean_box(0));
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; lean_object* v_ctorArgs1_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1929_; lean_object* v___y_1930_; lean_object* v___y_1931_; lean_object* v___y_1932_; lean_object* v___x_1972_; uint8_t v___x_1973_; 
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
lean_inc(v_a_1924_);
lean_dec_ref_known(v___x_1923_, 1);
v___x_1972_ = lean_array_get_size(v_fst_1904_);
v___x_1973_ = lean_nat_dec_eq(v___x_1972_, v___x_1896_);
if (v___x_1973_ == 0)
{
v_ctorArgs1_1926_ = v_fst_1904_;
v___y_1927_ = v___y_1887_;
v___y_1928_ = v___y_1888_;
v___y_1929_ = v___y_1889_;
v___y_1930_ = v___y_1890_;
v___y_1931_ = v___y_1891_;
v___y_1932_ = v___y_1892_;
goto v___jp_1925_;
}
else
{
lean_object* v___x_1974_; 
lean_inc_ref(v___f_1884_);
lean_inc(v___y_1892_);
lean_inc_ref(v___y_1891_);
lean_inc(v___y_1890_);
lean_inc_ref(v___y_1889_);
lean_inc(v___y_1888_);
lean_inc_ref(v___y_1887_);
v___x_1974_ = lean_apply_7(v___f_1884_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, lean_box(0));
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v_a_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
lean_inc_n(v_a_1975_, 7);
lean_dec_ref_known(v___x_1974_, 1);
v___x_1976_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__5));
v___x_1977_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18));
v___x_1978_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__19));
v___x_1979_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1979_, 0, v_a_1975_);
lean_ctor_set(v___x_1979_, 1, v___x_1978_);
v___x_1980_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__21));
v___x_1981_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23);
v___x_1982_ = lean_box(0);
lean_inc(v_currMacroScope_1915_);
lean_inc(v_quotContext_1914_);
v___x_1983_ = l_Lean_addMacroScope(v_quotContext_1914_, v___x_1982_, v_currMacroScope_1915_);
v___x_1984_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__33));
v___x_1985_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1985_, 0, v_a_1975_);
lean_ctor_set(v___x_1985_, 1, v___x_1981_);
lean_ctor_set(v___x_1985_, 2, v___x_1983_);
lean_ctor_set(v___x_1985_, 3, v___x_1984_);
v___x_1986_ = l_Lean_Syntax_node1(v_a_1975_, v___x_1980_, v___x_1985_);
v___x_1987_ = l_Lean_Syntax_node2(v_a_1975_, v___x_1977_, v___x_1979_, v___x_1986_);
v___x_1988_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_1989_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3);
v___x_1990_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1990_, 0, v_a_1975_);
lean_ctor_set(v___x_1990_, 1, v___x_1988_);
lean_ctor_set(v___x_1990_, 2, v___x_1989_);
v___x_1991_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__40));
v___x_1992_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1992_, 0, v_a_1975_);
lean_ctor_set(v___x_1992_, 1, v___x_1991_);
v___x_1993_ = l_Lean_Syntax_node3(v_a_1975_, v___x_1976_, v___x_1987_, v___x_1990_, v___x_1992_);
v___x_1994_ = lean_array_push(v_fst_1904_, v___x_1993_);
v_ctorArgs1_1926_ = v___x_1994_;
v___y_1927_ = v___y_1887_;
v___y_1928_ = v___y_1888_;
v___y_1929_ = v___y_1889_;
v___y_1930_ = v___y_1890_;
v___y_1931_ = v___y_1891_;
v___y_1932_ = v___y_1892_;
goto v___jp_1925_;
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
lean_dec(v_a_1924_);
lean_del_object(v___x_1911_);
lean_dec(v_fst_1908_);
lean_del_object(v___x_1906_);
lean_dec(v_fst_1904_);
lean_dec_ref(v___f_1884_);
v_a_1995_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1974_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1974_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
v___jp_1925_:
{
lean_object* v___x_1933_; 
lean_inc(v___y_1932_);
lean_inc_ref(v___y_1931_);
lean_inc(v___y_1930_);
lean_inc_ref(v___y_1929_);
lean_inc(v___y_1928_);
lean_inc_ref(v___y_1927_);
v___x_1933_ = lean_apply_7(v___f_1884_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, lean_box(0));
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1963_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1936_ = v___x_1933_;
v_isShared_1937_ = v_isSharedCheck_1963_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1933_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1963_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1941_; 
v___x_1938_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__1));
v___x_1939_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__2));
lean_inc(v_a_1934_);
if (v_isShared_1912_ == 0)
{
lean_ctor_set_tag(v___x_1911_, 2);
lean_ctor_set(v___x_1911_, 1, v___x_1939_);
lean_ctor_set(v___x_1911_, 0, v_a_1934_);
v___x_1941_ = v___x_1911_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_a_1934_);
lean_ctor_set(v_reuseFailAlloc_1962_, 1, v___x_1939_);
v___x_1941_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1942_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__0));
v___x_1943_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__1));
lean_inc(v_a_1934_);
if (v_isShared_1907_ == 0)
{
lean_ctor_set_tag(v___x_1906_, 2);
lean_ctor_set(v___x_1906_, 1, v___x_1942_);
lean_ctor_set(v___x_1906_, 0, v_a_1934_);
v___x_1945_ = v___x_1906_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_a_1934_);
lean_ctor_set(v_reuseFailAlloc_1961_, 1, v___x_1942_);
v___x_1945_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1959_; 
v___x_1946_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___closed__3));
v___x_1947_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_1948_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3);
v___x_1949_ = l_Array_append___redArg(v___x_1948_, v_ctorArgs1_1926_);
lean_dec_ref(v_ctorArgs1_1926_);
v___x_1950_ = l_Array_append___redArg(v___x_1949_, v_fst_1908_);
lean_dec(v_fst_1908_);
lean_inc_n(v_a_1934_, 5);
v___x_1951_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1951_, 0, v_a_1934_);
lean_ctor_set(v___x_1951_, 1, v___x_1947_);
lean_ctor_set(v___x_1951_, 2, v___x_1950_);
v___x_1952_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1952_, 0, v_a_1934_);
lean_ctor_set(v___x_1952_, 1, v___x_1947_);
lean_ctor_set(v___x_1952_, 2, v___x_1948_);
v___x_1953_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__17));
v___x_1954_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1954_, 0, v_a_1934_);
lean_ctor_set(v___x_1954_, 1, v___x_1953_);
v___x_1955_ = l_Lean_Syntax_node4(v_a_1934_, v___x_1946_, v___x_1951_, v___x_1952_, v___x_1954_, v_a_1924_);
v___x_1956_ = l_Lean_Syntax_node2(v_a_1934_, v___x_1943_, v___x_1945_, v___x_1955_);
v___x_1957_ = l_Lean_Syntax_node2(v_a_1934_, v___x_1938_, v___x_1941_, v___x_1956_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 0, v___x_1957_);
v___x_1959_ = v___x_1936_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v___x_1957_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
}
else
{
lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1971_; 
lean_dec_ref(v_ctorArgs1_1926_);
lean_dec(v_a_1924_);
lean_del_object(v___x_1911_);
lean_dec(v_fst_1908_);
lean_del_object(v___x_1906_);
v_a_1964_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1966_ = v___x_1933_;
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_dec(v___x_1933_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1967_ == 0)
{
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_a_1964_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
}
}
else
{
lean_del_object(v___x_1911_);
lean_dec(v_fst_1908_);
lean_del_object(v___x_1906_);
lean_dec(v_fst_1904_);
lean_dec_ref(v___f_1884_);
return v___x_1923_;
}
}
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
lean_dec_ref(v___f_1884_);
v_a_2006_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1900_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_1900_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
lean_dec_ref(v___f_1884_);
lean_dec_ref(v___f_1881_);
v_a_2014_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v___x_1894_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_1894_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___boxed(lean_object* v___f_2022_, lean_object* v_numFields_2023_, lean_object* v_indVal_2024_, lean_object* v___f_2025_, lean_object* v_xs_2026_, lean_object* v_type_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2(v___f_2022_, v_numFields_2023_, v_indVal_2024_, v___f_2025_, v_xs_2026_, v_type_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
lean_dec(v___y_2031_);
lean_dec_ref(v___y_2030_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec_ref(v_xs_2026_);
lean_dec_ref(v_indVal_2024_);
lean_dec(v_numFields_2023_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__0(lean_object* v___x_2036_, lean_object* v_ctors_2037_, lean_object* v___f_2038_, lean_object* v_indVal_2039_, lean_object* v___f_2040_, lean_object* v_x_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2049_ = l_List_get_x21Internal___redArg(v___x_2036_, v_ctors_2037_, v_x_2041_);
v___x_2050_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0(v___x_2049_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v_toConstantVal_2052_; lean_object* v_numFields_2053_; lean_object* v_type_2054_; lean_object* v___f_2055_; uint8_t v___x_2056_; lean_object* v___x_2057_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2051_);
lean_dec_ref_known(v___x_2050_, 1);
v_toConstantVal_2052_ = lean_ctor_get(v_a_2051_, 0);
lean_inc_ref(v_toConstantVal_2052_);
v_numFields_2053_ = lean_ctor_get(v_a_2051_, 4);
lean_inc(v_numFields_2053_);
lean_dec(v_a_2051_);
v_type_2054_ = lean_ctor_get(v_toConstantVal_2052_, 2);
lean_inc_ref(v_type_2054_);
lean_dec_ref(v_toConstantVal_2052_);
v___f_2055_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__2___boxed), 13, 4);
lean_closure_set(v___f_2055_, 0, v___f_2038_);
lean_closure_set(v___f_2055_, 1, v_numFields_2053_);
lean_closure_set(v___f_2055_, 2, v_indVal_2039_);
lean_closure_set(v___f_2055_, 3, v___f_2040_);
v___x_2056_ = 0;
v___x_2057_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__5___redArg(v_type_2054_, v___f_2055_, v___x_2056_, v___x_2056_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
return v___x_2057_;
}
else
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
lean_dec_ref(v___f_2040_);
lean_dec_ref(v_indVal_2039_);
lean_dec_ref(v___f_2038_);
v_a_2058_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2050_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2050_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__0___boxed(lean_object* v___x_2066_, lean_object* v_ctors_2067_, lean_object* v___f_2068_, lean_object* v_indVal_2069_, lean_object* v___f_2070_, lean_object* v_x_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
lean_object* v_res_2079_; 
v_res_2079_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__0(v___x_2066_, v_ctors_2067_, v___f_2068_, v_indVal_2069_, v___f_2070_, v_x_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
lean_dec(v___y_2077_);
lean_dec_ref(v___y_2076_);
lean_dec(v___y_2075_);
lean_dec_ref(v___y_2074_);
lean_dec(v___y_2073_);
lean_dec_ref(v___y_2072_);
lean_dec(v_ctors_2067_);
lean_dec(v___x_2066_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2___redArg(lean_object* v_f_2080_, lean_object* v_n_2081_, lean_object* v_x_2082_, lean_object* v_i_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
uint8_t v___x_2091_; 
v___x_2091_ = lean_nat_dec_lt(v_i_2083_, v_n_2081_);
if (v___x_2091_ == 0)
{
lean_object* v___x_2092_; 
lean_dec(v_i_2083_);
lean_dec_ref(v_f_2080_);
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v_x_2082_);
return v___x_2092_;
}
else
{
lean_object* v___x_2093_; 
lean_inc_ref(v_f_2080_);
lean_inc(v___y_2089_);
lean_inc_ref(v___y_2088_);
lean_inc(v___y_2087_);
lean_inc_ref(v___y_2086_);
lean_inc(v___y_2085_);
lean_inc_ref(v___y_2084_);
lean_inc(v_i_2083_);
v___x_2093_ = lean_apply_8(v_f_2080_, v_i_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, lean_box(0));
if (lean_obj_tag(v___x_2093_) == 0)
{
lean_object* v_a_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v_a_2094_ = lean_ctor_get(v___x_2093_, 0);
lean_inc(v_a_2094_);
lean_dec_ref_known(v___x_2093_, 1);
v___x_2095_ = lean_array_push(v_x_2082_, v_a_2094_);
v___x_2096_ = lean_unsigned_to_nat(1u);
v___x_2097_ = lean_nat_add(v_i_2083_, v___x_2096_);
lean_dec(v_i_2083_);
v_x_2082_ = v___x_2095_;
v_i_2083_ = v___x_2097_;
goto _start;
}
else
{
lean_object* v_a_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2106_; 
lean_dec(v_i_2083_);
lean_dec_ref(v_x_2082_);
lean_dec_ref(v_f_2080_);
v_a_2099_ = lean_ctor_get(v___x_2093_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2101_ = v___x_2093_;
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_a_2099_);
lean_dec(v___x_2093_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v___x_2104_; 
if (v_isShared_2102_ == 0)
{
v___x_2104_ = v___x_2101_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_a_2099_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2___redArg___boxed(lean_object* v_f_2107_, lean_object* v_n_2108_, lean_object* v_x_2109_, lean_object* v_i_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2___redArg(v_f_2107_, v_n_2108_, v_x_2109_, v_i_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
lean_dec(v___y_2116_);
lean_dec_ref(v___y_2115_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
lean_dec(v_n_2108_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2___redArg(lean_object* v_n_2119_, lean_object* v_f_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2128_ = lean_mk_empty_array_with_capacity(v_n_2119_);
v___x_2129_ = lean_unsigned_to_nat(0u);
v___x_2130_ = l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2___redArg(v_f_2120_, v_n_2119_, v___x_2128_, v___x_2129_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2___redArg___boxed(lean_object* v_n_2131_, lean_object* v_f_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2___redArg(v_n_2131_, v_f_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
lean_dec(v___y_2136_);
lean_dec_ref(v___y_2135_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
lean_dec(v_n_2131_);
return v_res_2140_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__3(void){
_start:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2144_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__2));
v___x_2145_ = lean_unsigned_to_nat(2u);
v___x_2146_ = lean_unsigned_to_nat(87u);
v___x_2147_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__1));
v___x_2148_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__0));
v___x_2149_ = l_mkPanicMessageWithDecl(v___x_2148_, v___x_2147_, v___x_2146_, v___x_2145_, v___x_2144_);
return v___x_2149_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__9(void){
_start:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2160_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__8));
v___x_2161_ = l_String_toRawSubstring_x27(v___x_2160_);
return v___x_2161_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__27(void){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2208_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__26));
v___x_2209_ = l_String_toRawSubstring_x27(v___x_2208_);
return v___x_2209_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__37(void){
_start:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2230_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__36));
v___x_2231_ = l_String_toRawSubstring_x27(v___x_2230_);
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew(lean_object* v_header_2240_, lean_object* v_indVal_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_){
_start:
{
lean_object* v_targetNames_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2445_; 
v_targetNames_2249_ = lean_ctor_get(v_header_2240_, 2);
v_isSharedCheck_2445_ = !lean_is_exclusive(v_header_2240_);
if (v_isSharedCheck_2445_ == 0)
{
lean_object* v_unused_2446_; lean_object* v_unused_2447_; lean_object* v_unused_2448_; 
v_unused_2446_ = lean_ctor_get(v_header_2240_, 3);
lean_dec(v_unused_2446_);
v_unused_2447_ = lean_ctor_get(v_header_2240_, 1);
lean_dec(v_unused_2447_);
v_unused_2448_ = lean_ctor_get(v_header_2240_, 0);
lean_dec(v_unused_2448_);
v___x_2251_ = v_header_2240_;
v_isShared_2252_ = v_isSharedCheck_2445_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_targetNames_2249_);
lean_dec(v_header_2240_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2445_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2253_; lean_object* v___x_2254_; uint8_t v___x_2255_; 
v___x_2253_ = lean_array_get_size(v_targetNames_2249_);
v___x_2254_ = lean_unsigned_to_nat(2u);
v___x_2255_ = lean_nat_dec_eq(v___x_2253_, v___x_2254_);
if (v___x_2255_ == 0)
{
lean_object* v___x_2256_; lean_object* v___x_2257_; 
lean_del_object(v___x_2251_);
lean_dec_ref(v_targetNames_2249_);
lean_dec_ref(v_indVal_2241_);
v___x_2256_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__3, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__3_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__3);
v___x_2257_ = l_panic___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__1(v___x_2256_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
return v___x_2257_;
}
else
{
lean_object* v_toConstantVal_2258_; lean_object* v_ctors_2259_; lean_object* v_name_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2442_; 
v_toConstantVal_2258_ = lean_ctor_get(v_indVal_2241_, 0);
lean_inc_ref(v_toConstantVal_2258_);
v_ctors_2259_ = lean_ctor_get(v_indVal_2241_, 4);
v_name_2260_ = lean_ctor_get(v_toConstantVal_2258_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v_toConstantVal_2258_);
if (v_isSharedCheck_2442_ == 0)
{
lean_object* v_unused_2443_; lean_object* v_unused_2444_; 
v_unused_2443_ = lean_ctor_get(v_toConstantVal_2258_, 2);
lean_dec(v_unused_2443_);
v_unused_2444_ = lean_ctor_get(v_toConstantVal_2258_, 1);
lean_dec(v_unused_2444_);
v___x_2262_ = v_toConstantVal_2258_;
v_isShared_2263_ = v_isSharedCheck_2442_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_name_2260_);
lean_dec(v_toConstantVal_2258_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2442_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___f_2264_; lean_object* v___f_2265_; lean_object* v___x_2266_; lean_object* v___f_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v_x1_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v_x2_2273_; lean_object* v_ctorIdxName_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___f_2264_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__1));
v___f_2265_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__0));
v___x_2266_ = lean_box(0);
lean_inc_ref(v_indVal_2241_);
lean_inc(v_ctors_2259_);
v___f_2267_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___lam__0___boxed), 13, 5);
lean_closure_set(v___f_2267_, 0, v___x_2266_);
lean_closure_set(v___f_2267_, 1, v_ctors_2259_);
lean_closure_set(v___f_2267_, 2, v___f_2265_);
lean_closure_set(v___f_2267_, 3, v_indVal_2241_);
lean_closure_set(v___f_2267_, 4, v___f_2264_);
v___x_2268_ = lean_unsigned_to_nat(0u);
v___x_2269_ = lean_array_get_borrowed(v___x_2266_, v_targetNames_2249_, v___x_2268_);
lean_inc(v___x_2269_);
v_x1_2270_ = l_Lean_mkIdent(v___x_2269_);
v___x_2271_ = lean_unsigned_to_nat(1u);
v___x_2272_ = lean_array_get(v___x_2266_, v_targetNames_2249_, v___x_2271_);
lean_dec_ref(v_targetNames_2249_);
v_x2_2273_ = l_Lean_mkIdent(v___x_2272_);
lean_inc_n(v_name_2260_, 2);
v_ctorIdxName_2274_ = l_Lean_mkCtorIdxName(v_name_2260_);
v___x_2275_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__5));
v___x_2276_ = l_Lean_Name_append(v_name_2260_, v___x_2275_);
v___x_2277_ = l_Lean_Core_mkFreshUserName(v___x_2276_, v___y_2246_, v___y_2247_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; lean_object* v___x_2279_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc_n(v_a_2278_, 2);
lean_dec_ref_known(v___x_2277_, 1);
v___x_2279_ = l_Lean_mkCasesOnSameCtor(v_a_2278_, v_name_2260_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v___x_2280_; lean_object* v___x_2281_; 
lean_dec_ref_known(v___x_2279_, 1);
v___x_2280_ = l_Lean_InductiveVal_numCtors(v_indVal_2241_);
lean_dec_ref(v_indVal_2241_);
v___x_2281_ = l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2___redArg(v___x_2280_, v___f_2267_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
if (lean_obj_tag(v___x_2281_) == 0)
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2417_; 
v_a_2282_ = lean_ctor_get(v___x_2281_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2281_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2284_ = v___x_2281_;
v_isShared_2285_ = v_isSharedCheck_2417_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2281_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2417_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
uint8_t v___x_2286_; 
v___x_2286_ = lean_nat_dec_eq(v___x_2280_, v___x_2271_);
lean_dec(v___x_2280_);
if (v___x_2286_ == 0)
{
lean_object* v_toCold_2287_; lean_object* v_ref_2288_; lean_object* v_quotContext_2289_; lean_object* v_currMacroScope_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2298_; 
v_toCold_2287_ = lean_ctor_get(v___y_2246_, 0);
v_ref_2288_ = lean_ctor_get(v___y_2246_, 2);
v_quotContext_2289_ = lean_ctor_get(v_toCold_2287_, 8);
v_currMacroScope_2290_ = lean_ctor_get(v_toCold_2287_, 9);
v___x_2291_ = l_Lean_SourceInfo_fromRef(v_ref_2288_, v___x_2286_);
v___x_2292_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__0));
v___x_2293_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__1));
lean_inc_n(v___x_2291_, 2);
v___x_2294_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2291_);
lean_ctor_set(v___x_2294_, 1, v___x_2292_);
v___x_2295_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_2296_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3);
if (v_isShared_2263_ == 0)
{
lean_ctor_set_tag(v___x_2262_, 1);
lean_ctor_set(v___x_2262_, 2, v___x_2296_);
lean_ctor_set(v___x_2262_, 1, v___x_2295_);
lean_ctor_set(v___x_2262_, 0, v___x_2291_);
v___x_2298_ = v___x_2262_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v___x_2291_);
lean_ctor_set(v_reuseFailAlloc_2391_, 1, v___x_2295_);
lean_ctor_set(v_reuseFailAlloc_2391_, 2, v___x_2296_);
v___x_2298_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2305_; 
v___x_2299_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__7));
v___x_2300_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__9, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__9_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__9);
v___x_2301_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__10));
lean_inc(v_currMacroScope_2290_);
lean_inc(v_quotContext_2289_);
v___x_2302_ = l_Lean_addMacroScope(v_quotContext_2289_, v___x_2301_, v_currMacroScope_2290_);
v___x_2303_ = lean_box(0);
lean_inc(v___x_2291_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set_tag(v___x_2251_, 3);
lean_ctor_set(v___x_2251_, 3, v___x_2303_);
lean_ctor_set(v___x_2251_, 2, v___x_2302_);
lean_ctor_set(v___x_2251_, 1, v___x_2300_);
lean_ctor_set(v___x_2251_, 0, v___x_2291_);
v___x_2305_ = v___x_2251_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2291_);
lean_ctor_set(v_reuseFailAlloc_2390_, 1, v___x_2300_);
lean_ctor_set(v_reuseFailAlloc_2390_, 2, v___x_2302_);
lean_ctor_set(v_reuseFailAlloc_2390_, 3, v___x_2303_);
v___x_2305_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2388_; 
v___x_2306_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__11));
lean_inc_n(v___x_2291_, 41);
v___x_2307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2291_);
lean_ctor_set(v___x_2307_, 1, v___x_2306_);
lean_inc_ref(v___x_2305_);
v___x_2308_ = l_Lean_Syntax_node2(v___x_2291_, v___x_2295_, v___x_2305_, v___x_2307_);
v___x_2309_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3));
v___x_2310_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35);
v___x_2311_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__36));
lean_inc_n(v_currMacroScope_2290_, 6);
lean_inc_n(v_quotContext_2289_, 6);
v___x_2312_ = l_Lean_addMacroScope(v_quotContext_2289_, v___x_2311_, v_currMacroScope_2290_);
v___x_2313_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__13));
v___x_2314_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2291_);
lean_ctor_set(v___x_2314_, 1, v___x_2310_);
lean_ctor_set(v___x_2314_, 2, v___x_2312_);
lean_ctor_set(v___x_2314_, 3, v___x_2313_);
v___x_2315_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__16));
v___x_2316_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__18));
v___x_2317_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__19));
v___x_2318_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2291_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
v___x_2319_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__21));
v___x_2320_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__23);
v___x_2321_ = l_Lean_addMacroScope(v_quotContext_2289_, v___x_2266_, v_currMacroScope_2290_);
v___x_2322_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__16));
v___x_2323_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2291_);
lean_ctor_set(v___x_2323_, 1, v___x_2320_);
lean_ctor_set(v___x_2323_, 2, v___x_2321_);
lean_ctor_set(v___x_2323_, 3, v___x_2322_);
v___x_2324_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2319_, v___x_2323_);
v___x_2325_ = l_Lean_Syntax_node2(v___x_2291_, v___x_2316_, v___x_2318_, v___x_2324_);
v___x_2326_ = l_Lean_mkCIdent(v_ctorIdxName_2274_);
lean_inc(v_x1_2270_);
v___x_2327_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2295_, v_x1_2270_);
lean_inc(v___x_2326_);
v___x_2328_ = l_Lean_Syntax_node2(v___x_2291_, v___x_2309_, v___x_2326_, v___x_2327_);
v___x_2329_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__40));
v___x_2330_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2330_, 0, v___x_2291_);
lean_ctor_set(v___x_2330_, 1, v___x_2329_);
lean_inc_ref_n(v___x_2330_, 2);
lean_inc_n(v___x_2325_, 2);
v___x_2331_ = l_Lean_Syntax_node3(v___x_2291_, v___x_2315_, v___x_2325_, v___x_2328_, v___x_2330_);
lean_inc(v_x2_2273_);
v___x_2332_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2295_, v_x2_2273_);
v___x_2333_ = l_Lean_Syntax_node2(v___x_2291_, v___x_2309_, v___x_2326_, v___x_2332_);
v___x_2334_ = l_Lean_Syntax_node3(v___x_2291_, v___x_2315_, v___x_2325_, v___x_2333_, v___x_2330_);
v___x_2335_ = l_Lean_Syntax_node2(v___x_2291_, v___x_2295_, v___x_2331_, v___x_2334_);
v___x_2336_ = l_Lean_Syntax_node2(v___x_2291_, v___x_2309_, v___x_2314_, v___x_2335_);
v___x_2337_ = l_Lean_Syntax_node2(v___x_2291_, v___x_2299_, v___x_2308_, v___x_2336_);
v___x_2338_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2295_, v___x_2337_);
v___x_2339_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__2));
v___x_2340_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2291_);
lean_ctor_set(v___x_2340_, 1, v___x_2339_);
v___x_2341_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld___closed__4));
v___x_2342_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__13));
v___x_2343_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__14));
v___x_2344_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2291_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
v___x_2345_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__19, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__19_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__19);
v___x_2346_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__21));
v___x_2347_ = l_Lean_addMacroScope(v_quotContext_2289_, v___x_2346_, v_currMacroScope_2290_);
v___x_2348_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__19));
v___x_2349_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2291_);
lean_ctor_set(v___x_2349_, 1, v___x_2345_);
lean_ctor_set(v___x_2349_, 2, v___x_2347_);
lean_ctor_set(v___x_2349_, 3, v___x_2348_);
lean_inc_ref(v___x_2349_);
v___x_2350_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2295_, v___x_2349_);
v___x_2351_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2295_, v___x_2350_);
v___x_2352_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__17));
v___x_2353_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2291_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
lean_inc_ref_n(v___x_2353_, 2);
lean_inc_ref_n(v___x_2344_, 2);
v___x_2354_ = l_Lean_Syntax_node4(v___x_2291_, v___x_2342_, v___x_2344_, v___x_2351_, v___x_2353_, v___x_2349_);
v___x_2355_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__27, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__27_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__27);
v___x_2356_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__29));
v___x_2357_ = l_Lean_addMacroScope(v_quotContext_2289_, v___x_2356_, v_currMacroScope_2290_);
v___x_2358_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__22));
v___x_2359_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2291_);
lean_ctor_set(v___x_2359_, 1, v___x_2355_);
lean_ctor_set(v___x_2359_, 2, v___x_2357_);
lean_ctor_set(v___x_2359_, 3, v___x_2358_);
lean_inc_ref(v___x_2359_);
v___x_2360_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2295_, v___x_2359_);
v___x_2361_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2295_, v___x_2360_);
v___x_2362_ = l_Lean_Syntax_node4(v___x_2291_, v___x_2342_, v___x_2344_, v___x_2361_, v___x_2353_, v___x_2359_);
v___x_2363_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__5);
v___x_2364_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__7));
v___x_2365_ = l_Lean_addMacroScope(v_quotContext_2289_, v___x_2364_, v_currMacroScope_2290_);
v___x_2366_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__25));
v___x_2367_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2291_);
lean_ctor_set(v___x_2367_, 1, v___x_2363_);
lean_ctor_set(v___x_2367_, 2, v___x_2365_);
lean_ctor_set(v___x_2367_, 3, v___x_2366_);
v___x_2368_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2295_, v___x_2367_);
v___x_2369_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2295_, v___x_2368_);
v___x_2370_ = l_Lean_mkCIdent(v_a_2278_);
v___x_2371_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__27, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__27_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__27);
v___x_2372_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__31));
v___x_2373_ = l_Lean_addMacroScope(v_quotContext_2289_, v___x_2372_, v_currMacroScope_2290_);
v___x_2374_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__35));
v___x_2375_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2291_);
lean_ctor_set(v___x_2375_, 1, v___x_2371_);
lean_ctor_set(v___x_2375_, 2, v___x_2373_);
lean_ctor_set(v___x_2375_, 3, v___x_2374_);
v___x_2376_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2295_, v___x_2305_);
v___x_2377_ = l_Lean_Syntax_node2(v___x_2291_, v___x_2309_, v___x_2375_, v___x_2376_);
v___x_2378_ = l_Lean_Syntax_node3(v___x_2291_, v___x_2315_, v___x_2325_, v___x_2377_, v___x_2330_);
v___x_2379_ = l_Array_mkArray3___redArg(v_x1_2270_, v_x2_2273_, v___x_2378_);
v___x_2380_ = l_Array_append___redArg(v___x_2379_, v_a_2282_);
lean_dec(v_a_2282_);
v___x_2381_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2291_);
lean_ctor_set(v___x_2381_, 1, v___x_2295_);
lean_ctor_set(v___x_2381_, 2, v___x_2380_);
v___x_2382_ = l_Lean_Syntax_node2(v___x_2291_, v___x_2309_, v___x_2370_, v___x_2381_);
v___x_2383_ = l_Lean_Syntax_node4(v___x_2291_, v___x_2342_, v___x_2344_, v___x_2369_, v___x_2353_, v___x_2382_);
v___x_2384_ = l_Lean_Syntax_node3(v___x_2291_, v___x_2295_, v___x_2354_, v___x_2362_, v___x_2383_);
v___x_2385_ = l_Lean_Syntax_node1(v___x_2291_, v___x_2341_, v___x_2384_);
lean_inc_ref(v___x_2298_);
v___x_2386_ = l_Lean_Syntax_node6(v___x_2291_, v___x_2293_, v___x_2294_, v___x_2298_, v___x_2298_, v___x_2338_, v___x_2340_, v___x_2385_);
if (v_isShared_2285_ == 0)
{
lean_ctor_set(v___x_2284_, 0, v___x_2386_);
v___x_2388_ = v___x_2284_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v___x_2386_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
else
{
lean_object* v_toCold_2392_; lean_object* v_ref_2393_; lean_object* v_quotContext_2394_; lean_object* v_currMacroScope_2395_; uint8_t v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2406_; 
lean_dec(v_ctorIdxName_2274_);
v_toCold_2392_ = lean_ctor_get(v___y_2246_, 0);
v_ref_2393_ = lean_ctor_get(v___y_2246_, 2);
v_quotContext_2394_ = lean_ctor_get(v_toCold_2392_, 8);
v_currMacroScope_2395_ = lean_ctor_get(v_toCold_2392_, 9);
v___x_2396_ = 0;
v___x_2397_ = l_Lean_SourceInfo_fromRef(v_ref_2393_, v___x_2396_);
v___x_2398_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3));
v___x_2399_ = l_Lean_mkCIdent(v_a_2278_);
v___x_2400_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_2401_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__37, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__37_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__37);
v___x_2402_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__38));
lean_inc(v_currMacroScope_2395_);
lean_inc(v_quotContext_2394_);
v___x_2403_ = l_Lean_addMacroScope(v_quotContext_2394_, v___x_2402_, v_currMacroScope_2395_);
v___x_2404_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__40));
lean_inc(v___x_2397_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set_tag(v___x_2251_, 3);
lean_ctor_set(v___x_2251_, 3, v___x_2404_);
lean_ctor_set(v___x_2251_, 2, v___x_2403_);
lean_ctor_set(v___x_2251_, 1, v___x_2401_);
lean_ctor_set(v___x_2251_, 0, v___x_2397_);
v___x_2406_ = v___x_2251_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v___x_2397_);
lean_ctor_set(v_reuseFailAlloc_2416_, 1, v___x_2401_);
lean_ctor_set(v_reuseFailAlloc_2416_, 2, v___x_2403_);
lean_ctor_set(v_reuseFailAlloc_2416_, 3, v___x_2404_);
v___x_2406_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2410_; 
v___x_2407_ = l_Array_mkArray3___redArg(v_x1_2270_, v_x2_2273_, v___x_2406_);
v___x_2408_ = l_Array_append___redArg(v___x_2407_, v_a_2282_);
lean_dec(v_a_2282_);
lean_inc(v___x_2397_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set_tag(v___x_2262_, 1);
lean_ctor_set(v___x_2262_, 2, v___x_2408_);
lean_ctor_set(v___x_2262_, 1, v___x_2400_);
lean_ctor_set(v___x_2262_, 0, v___x_2397_);
v___x_2410_ = v___x_2262_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2397_);
lean_ctor_set(v_reuseFailAlloc_2415_, 1, v___x_2400_);
lean_ctor_set(v_reuseFailAlloc_2415_, 2, v___x_2408_);
v___x_2410_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
lean_object* v___x_2411_; lean_object* v___x_2413_; 
v___x_2411_ = l_Lean_Syntax_node2(v___x_2397_, v___x_2398_, v___x_2399_, v___x_2410_);
if (v_isShared_2285_ == 0)
{
lean_ctor_set(v___x_2284_, 0, v___x_2411_);
v___x_2413_ = v___x_2284_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v___x_2411_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
}
}
}
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2425_; 
lean_dec(v___x_2280_);
lean_dec(v_a_2278_);
lean_dec(v_ctorIdxName_2274_);
lean_dec(v_x2_2273_);
lean_dec(v_x1_2270_);
lean_del_object(v___x_2262_);
lean_del_object(v___x_2251_);
v_a_2418_ = lean_ctor_get(v___x_2281_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2281_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2420_ = v___x_2281_;
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2281_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2418_);
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
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
lean_dec(v_a_2278_);
lean_dec(v_ctorIdxName_2274_);
lean_dec(v_x2_2273_);
lean_dec(v_x1_2270_);
lean_dec_ref(v___f_2267_);
lean_del_object(v___x_2262_);
lean_del_object(v___x_2251_);
lean_dec_ref(v_indVal_2241_);
v_a_2426_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2279_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2279_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
lean_dec(v_ctorIdxName_2274_);
lean_dec(v_x2_2273_);
lean_dec(v_x1_2270_);
lean_dec_ref(v___f_2267_);
lean_del_object(v___x_2262_);
lean_dec(v_name_2260_);
lean_del_object(v___x_2251_);
lean_dec_ref(v_indVal_2241_);
v_a_2434_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2436_ = v___x_2277_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2277_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2434_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___boxed(lean_object* v_header_2449_, lean_object* v_indVal_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_){
_start:
{
lean_object* v_res_2458_; 
v_res_2458_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew(v_header_2449_, v_indVal_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_);
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
lean_dec(v___y_2454_);
lean_dec_ref(v___y_2453_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0(lean_object* v_upperBound_2459_, lean_object* v_indVal_2460_, lean_object* v_xs_2461_, lean_object* v_a_2462_, lean_object* v_inst_2463_, lean_object* v_R_2464_, lean_object* v_a_2465_, lean_object* v_b_2466_, lean_object* v_c_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_){
_start:
{
lean_object* v___x_2475_; 
v___x_2475_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___redArg(v_upperBound_2459_, v_indVal_2460_, v_xs_2461_, v_a_2462_, v_a_2465_, v_b_2466_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0___boxed(lean_object* v_upperBound_2476_, lean_object* v_indVal_2477_, lean_object* v_xs_2478_, lean_object* v_a_2479_, lean_object* v_inst_2480_, lean_object* v_R_2481_, lean_object* v_a_2482_, lean_object* v_b_2483_, lean_object* v_c_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__0(v_upperBound_2476_, v_indVal_2477_, v_xs_2478_, v_a_2479_, v_inst_2480_, v_R_2481_, v_a_2482_, v_b_2483_, v_c_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_);
lean_dec(v___y_2490_);
lean_dec_ref(v___y_2489_);
lean_dec(v___y_2488_);
lean_dec_ref(v___y_2487_);
lean_dec(v___y_2486_);
lean_dec_ref(v___y_2485_);
lean_dec_ref(v_a_2479_);
lean_dec_ref(v_xs_2478_);
lean_dec_ref(v_indVal_2477_);
lean_dec(v_upperBound_2476_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2(lean_object* v_00_u03b1_2493_, lean_object* v_n_2494_, lean_object* v_f_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2___redArg(v_n_2494_, v_f_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2___boxed(lean_object* v_00_u03b1_2504_, lean_object* v_n_2505_, lean_object* v_f_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v_res_2514_; 
v_res_2514_ = l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2(v_00_u03b1_2504_, v_n_2505_, v_f_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
lean_dec(v___y_2510_);
lean_dec_ref(v___y_2509_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
lean_dec(v_n_2505_);
return v_res_2514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2(lean_object* v_00_u03b1_2515_, lean_object* v_f_2516_, lean_object* v_n_2517_, lean_object* v_x_2518_, lean_object* v_i_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
lean_object* v___x_2527_; 
v___x_2527_ = l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2___redArg(v_f_2516_, v_n_2517_, v_x_2518_, v_i_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2___boxed(lean_object* v_00_u03b1_2528_, lean_object* v_f_2529_, lean_object* v_n_2530_, lean_object* v_x_2531_, lean_object* v_i_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
lean_object* v_res_2540_; 
v_res_2540_ = l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew_spec__2_spec__2(v_00_u03b1_2528_, v_f_2529_, v_n_2530_, v_x_2531_, v_i_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_);
lean_dec(v___y_2538_);
lean_dec_ref(v___y_2537_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v_n_2530_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch_spec__0(lean_object* v_opts_2541_, lean_object* v_opt_2542_){
_start:
{
lean_object* v_name_2543_; lean_object* v_defValue_2544_; lean_object* v_map_2545_; lean_object* v___x_2546_; 
v_name_2543_ = lean_ctor_get(v_opt_2542_, 0);
v_defValue_2544_ = lean_ctor_get(v_opt_2542_, 1);
v_map_2545_ = lean_ctor_get(v_opts_2541_, 0);
v___x_2546_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2545_, v_name_2543_);
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_inc(v_defValue_2544_);
return v_defValue_2544_;
}
else
{
lean_object* v_val_2547_; 
v_val_2547_ = lean_ctor_get(v___x_2546_, 0);
lean_inc(v_val_2547_);
lean_dec_ref_known(v___x_2546_, 1);
if (lean_obj_tag(v_val_2547_) == 3)
{
lean_object* v_v_2548_; 
v_v_2548_ = lean_ctor_get(v_val_2547_, 0);
lean_inc(v_v_2548_);
lean_dec_ref_known(v_val_2547_, 1);
return v_v_2548_;
}
else
{
lean_dec(v_val_2547_);
lean_inc(v_defValue_2544_);
return v_defValue_2544_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch_spec__0___boxed(lean_object* v_opts_2549_, lean_object* v_opt_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch_spec__0(v_opts_2549_, v_opt_2550_);
lean_dec_ref(v_opt_2550_);
lean_dec_ref(v_opts_2549_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch(lean_object* v_header_2552_, lean_object* v_indVal_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_){
_start:
{
lean_object* v_toCold_2561_; lean_object* v_options_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; uint8_t v___x_2566_; 
v_toCold_2561_ = lean_ctor_get(v___y_2558_, 0);
v_options_2562_ = lean_ctor_get(v_toCold_2561_, 2);
v___x_2563_ = l___private_Lean_Elab_Deriving_Ord_0__deriving_ord_linear__construction__threshold;
v___x_2564_ = l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch_spec__0(v_options_2562_, v___x_2563_);
v___x_2565_ = l_Lean_InductiveVal_numCtors(v_indVal_2553_);
v___x_2566_ = lean_nat_dec_le(v___x_2564_, v___x_2565_);
lean_dec(v___x_2565_);
lean_dec(v___x_2564_);
if (v___x_2566_ == 0)
{
lean_object* v___x_2567_; 
v___x_2567_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld(v_header_2552_, v_indVal_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
return v___x_2567_;
}
else
{
lean_object* v___x_2568_; 
v___x_2568_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew(v_header_2552_, v_indVal_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
return v___x_2568_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch___boxed(lean_object* v_header_2569_, lean_object* v_indVal_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_){
_start:
{
lean_object* v_res_2578_; 
v_res_2578_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch(v_header_2569_, v_indVal_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_);
lean_dec(v___y_2576_);
lean_dec_ref(v___y_2575_);
lean_dec(v___y_2574_);
lean_dec_ref(v___y_2573_);
lean_dec(v___y_2572_);
lean_dec_ref(v___y_2571_);
return v_res_2578_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14(void){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2617_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__6));
v___x_2618_ = l_String_toRawSubstring_x27(v___x_2617_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction(lean_object* v_ctx_2652_, lean_object* v_i_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_){
_start:
{
lean_object* v_typeInfos_2661_; lean_object* v_auxFunNames_2662_; uint8_t v_usePartial_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v_auxFunName_2666_; lean_object* v_indVal_2667_; lean_object* v___x_2668_; 
v_typeInfos_2661_ = lean_ctor_get(v_ctx_2652_, 1);
v_auxFunNames_2662_ = lean_ctor_get(v_ctx_2652_, 2);
v_usePartial_2663_ = lean_ctor_get_uint8(v_ctx_2652_, sizeof(void*)*3);
v___x_2664_ = lean_box(0);
v___x_2665_ = l_Lean_instInhabitedInductiveVal_default;
v_auxFunName_2666_ = lean_array_get_borrowed(v___x_2664_, v_auxFunNames_2662_, v_i_2653_);
v_indVal_2667_ = lean_array_get_borrowed(v___x_2665_, v_typeInfos_2661_, v_i_2653_);
lean_inc(v_indVal_2667_);
v___x_2668_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader(v_indVal_2667_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2803_; 
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2671_ = v___x_2668_;
v_isShared_2672_ = v_isSharedCheck_2803_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2668_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2803_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v_body_2674_; lean_object* v___y_2675_; lean_object* v___x_2786_; 
lean_inc(v_indVal_2667_);
lean_inc(v_a_2669_);
v___x_2786_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatch(v_a_2669_, v_indVal_2667_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
if (lean_obj_tag(v___x_2786_) == 0)
{
if (v_usePartial_2663_ == 0)
{
lean_object* v_a_2787_; 
v_a_2787_ = lean_ctor_get(v___x_2786_, 0);
lean_inc(v_a_2787_);
lean_dec_ref_known(v___x_2786_, 1);
v_body_2674_ = v_a_2787_;
v___y_2675_ = v___y_2658_;
goto v___jp_2673_;
}
else
{
lean_object* v_a_2788_; lean_object* v_argNames_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v_a_2788_ = lean_ctor_get(v___x_2786_, 0);
lean_inc(v_a_2788_);
lean_dec_ref_known(v___x_2786_, 1);
v_argNames_2789_ = lean_ctor_get(v_a_2669_, 1);
v___x_2790_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader___closed__0));
lean_inc_ref(v_argNames_2789_);
v___x_2791_ = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(v_ctx_2652_, v___x_2790_, v_argNames_2789_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2793_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2792_);
lean_dec_ref_known(v___x_2791_, 1);
v___x_2793_ = l_Lean_Elab_Deriving_mkLet(v_a_2792_, v_a_2788_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
lean_dec(v_a_2792_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; 
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_a_2794_);
lean_dec_ref_known(v___x_2793_, 1);
v_body_2674_ = v_a_2794_;
v___y_2675_ = v___y_2658_;
goto v___jp_2673_;
}
else
{
lean_del_object(v___x_2671_);
lean_dec(v_a_2669_);
return v___x_2793_;
}
}
else
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
lean_dec(v_a_2788_);
lean_del_object(v___x_2671_);
lean_dec(v_a_2669_);
v_a_2795_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2791_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2791_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
}
}
else
{
lean_del_object(v___x_2671_);
lean_dec(v_a_2669_);
return v___x_2786_;
}
v___jp_2673_:
{
if (v_usePartial_2663_ == 0)
{
lean_object* v_toCold_2676_; lean_object* v_binders_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2724_; 
v_toCold_2676_ = lean_ctor_get(v___y_2675_, 0);
v_binders_2677_ = lean_ctor_get(v_a_2669_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v_a_2669_);
if (v_isSharedCheck_2724_ == 0)
{
lean_object* v_unused_2725_; lean_object* v_unused_2726_; lean_object* v_unused_2727_; 
v_unused_2725_ = lean_ctor_get(v_a_2669_, 3);
lean_dec(v_unused_2725_);
v_unused_2726_ = lean_ctor_get(v_a_2669_, 2);
lean_dec(v_unused_2726_);
v_unused_2727_ = lean_ctor_get(v_a_2669_, 1);
lean_dec(v_unused_2727_);
v___x_2679_ = v_a_2669_;
v_isShared_2680_ = v_isSharedCheck_2724_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_binders_2677_);
lean_dec(v_a_2669_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2724_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v_ref_2681_; lean_object* v_quotContext_2682_; lean_object* v_currMacroScope_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2708_; 
v_ref_2681_ = lean_ctor_get(v___y_2675_, 2);
v_quotContext_2682_ = lean_ctor_get(v_toCold_2676_, 8);
v_currMacroScope_2683_ = lean_ctor_get(v_toCold_2676_, 9);
v___x_2684_ = l_Lean_SourceInfo_fromRef(v_ref_2681_, v_usePartial_2663_);
v___x_2685_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2));
v___x_2686_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4));
v___x_2687_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_2688_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3);
lean_inc_n(v___x_2684_, 7);
v___x_2689_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2684_);
lean_ctor_set(v___x_2689_, 1, v___x_2687_);
lean_ctor_set(v___x_2689_, 2, v___x_2688_);
lean_inc_ref_n(v___x_2689_, 8);
v___x_2690_ = l_Lean_Syntax_node7(v___x_2684_, v___x_2686_, v___x_2689_, v___x_2689_, v___x_2689_, v___x_2689_, v___x_2689_, v___x_2689_, v___x_2689_);
v___x_2691_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6));
v___x_2692_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__7));
v___x_2693_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2684_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
v___x_2694_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9));
lean_inc(v_auxFunName_2666_);
v___x_2695_ = l_Lean_mkIdent(v_auxFunName_2666_);
v___x_2696_ = l_Lean_Syntax_node2(v___x_2684_, v___x_2694_, v___x_2695_, v___x_2689_);
v___x_2697_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11));
v___x_2698_ = l_Array_append___redArg(v___x_2688_, v_binders_2677_);
lean_dec_ref(v_binders_2677_);
v___x_2699_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2684_);
lean_ctor_set(v___x_2699_, 1, v___x_2687_);
lean_ctor_set(v___x_2699_, 2, v___x_2698_);
v___x_2700_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13));
v___x_2701_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__11));
v___x_2702_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2702_, 0, v___x_2684_);
lean_ctor_set(v___x_2702_, 1, v___x_2701_);
v___x_2703_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14);
v___x_2704_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__15));
lean_inc(v_currMacroScope_2683_);
lean_inc(v_quotContext_2682_);
v___x_2705_ = l_Lean_addMacroScope(v_quotContext_2682_, v___x_2704_, v_currMacroScope_2683_);
v___x_2706_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__19));
if (v_isShared_2680_ == 0)
{
lean_ctor_set_tag(v___x_2679_, 3);
lean_ctor_set(v___x_2679_, 3, v___x_2706_);
lean_ctor_set(v___x_2679_, 2, v___x_2705_);
lean_ctor_set(v___x_2679_, 1, v___x_2703_);
lean_ctor_set(v___x_2679_, 0, v___x_2684_);
v___x_2708_ = v___x_2679_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v___x_2684_);
lean_ctor_set(v_reuseFailAlloc_2723_, 1, v___x_2703_);
lean_ctor_set(v_reuseFailAlloc_2723_, 2, v___x_2705_);
lean_ctor_set(v_reuseFailAlloc_2723_, 3, v___x_2706_);
v___x_2708_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2721_; 
lean_inc_n(v___x_2684_, 7);
v___x_2709_ = l_Lean_Syntax_node2(v___x_2684_, v___x_2700_, v___x_2702_, v___x_2708_);
v___x_2710_ = l_Lean_Syntax_node1(v___x_2684_, v___x_2687_, v___x_2709_);
v___x_2711_ = l_Lean_Syntax_node2(v___x_2684_, v___x_2697_, v___x_2699_, v___x_2710_);
v___x_2712_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21));
v___x_2713_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__22));
v___x_2714_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2714_, 0, v___x_2684_);
lean_ctor_set(v___x_2714_, 1, v___x_2713_);
v___x_2715_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25));
lean_inc_ref_n(v___x_2689_, 3);
v___x_2716_ = l_Lean_Syntax_node2(v___x_2684_, v___x_2715_, v___x_2689_, v___x_2689_);
v___x_2717_ = l_Lean_Syntax_node4(v___x_2684_, v___x_2712_, v___x_2714_, v_body_2674_, v___x_2716_, v___x_2689_);
v___x_2718_ = l_Lean_Syntax_node5(v___x_2684_, v___x_2691_, v___x_2693_, v___x_2696_, v___x_2711_, v___x_2717_, v___x_2689_);
v___x_2719_ = l_Lean_Syntax_node2(v___x_2684_, v___x_2685_, v___x_2690_, v___x_2718_);
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 0, v___x_2719_);
v___x_2721_ = v___x_2671_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v___x_2719_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
else
{
lean_object* v_toCold_2728_; lean_object* v_binders_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2782_; 
v_toCold_2728_ = lean_ctor_get(v___y_2675_, 0);
v_binders_2729_ = lean_ctor_get(v_a_2669_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v_a_2669_);
if (v_isSharedCheck_2782_ == 0)
{
lean_object* v_unused_2783_; lean_object* v_unused_2784_; lean_object* v_unused_2785_; 
v_unused_2783_ = lean_ctor_get(v_a_2669_, 3);
lean_dec(v_unused_2783_);
v_unused_2784_ = lean_ctor_get(v_a_2669_, 2);
lean_dec(v_unused_2784_);
v_unused_2785_ = lean_ctor_get(v_a_2669_, 1);
lean_dec(v_unused_2785_);
v___x_2731_ = v_a_2669_;
v_isShared_2732_ = v_isSharedCheck_2782_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_binders_2729_);
lean_dec(v_a_2669_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2782_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v_ref_2733_; lean_object* v_quotContext_2734_; lean_object* v_currMacroScope_2735_; uint8_t v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2766_; 
v_ref_2733_ = lean_ctor_get(v___y_2675_, 2);
v_quotContext_2734_ = lean_ctor_get(v_toCold_2728_, 8);
v_currMacroScope_2735_ = lean_ctor_get(v_toCold_2728_, 9);
v___x_2736_ = 0;
v___x_2737_ = l_Lean_SourceInfo_fromRef(v_ref_2733_, v___x_2736_);
v___x_2738_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2));
v___x_2739_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4));
v___x_2740_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_2741_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3);
lean_inc_n(v___x_2737_, 10);
v___x_2742_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2737_);
lean_ctor_set(v___x_2742_, 1, v___x_2740_);
lean_ctor_set(v___x_2742_, 2, v___x_2741_);
v___x_2743_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__26));
v___x_2744_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__27));
v___x_2745_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2737_);
lean_ctor_set(v___x_2745_, 1, v___x_2743_);
v___x_2746_ = l_Lean_Syntax_node1(v___x_2737_, v___x_2744_, v___x_2745_);
v___x_2747_ = l_Lean_Syntax_node1(v___x_2737_, v___x_2740_, v___x_2746_);
lean_inc_ref_n(v___x_2742_, 7);
v___x_2748_ = l_Lean_Syntax_node7(v___x_2737_, v___x_2739_, v___x_2742_, v___x_2742_, v___x_2742_, v___x_2742_, v___x_2742_, v___x_2742_, v___x_2747_);
v___x_2749_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6));
v___x_2750_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__7));
v___x_2751_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2737_);
lean_ctor_set(v___x_2751_, 1, v___x_2750_);
v___x_2752_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9));
lean_inc(v_auxFunName_2666_);
v___x_2753_ = l_Lean_mkIdent(v_auxFunName_2666_);
v___x_2754_ = l_Lean_Syntax_node2(v___x_2737_, v___x_2752_, v___x_2753_, v___x_2742_);
v___x_2755_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11));
v___x_2756_ = l_Array_append___redArg(v___x_2741_, v_binders_2729_);
lean_dec_ref(v_binders_2729_);
v___x_2757_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2737_);
lean_ctor_set(v___x_2757_, 1, v___x_2740_);
lean_ctor_set(v___x_2757_, 2, v___x_2756_);
v___x_2758_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13));
v___x_2759_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__11));
v___x_2760_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2737_);
lean_ctor_set(v___x_2760_, 1, v___x_2759_);
v___x_2761_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14);
v___x_2762_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__15));
lean_inc(v_currMacroScope_2735_);
lean_inc(v_quotContext_2734_);
v___x_2763_ = l_Lean_addMacroScope(v_quotContext_2734_, v___x_2762_, v_currMacroScope_2735_);
v___x_2764_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__19));
if (v_isShared_2732_ == 0)
{
lean_ctor_set_tag(v___x_2731_, 3);
lean_ctor_set(v___x_2731_, 3, v___x_2764_);
lean_ctor_set(v___x_2731_, 2, v___x_2763_);
lean_ctor_set(v___x_2731_, 1, v___x_2761_);
lean_ctor_set(v___x_2731_, 0, v___x_2737_);
v___x_2766_ = v___x_2731_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v___x_2737_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v___x_2761_);
lean_ctor_set(v_reuseFailAlloc_2781_, 2, v___x_2763_);
lean_ctor_set(v_reuseFailAlloc_2781_, 3, v___x_2764_);
v___x_2766_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2779_; 
lean_inc_n(v___x_2737_, 7);
v___x_2767_ = l_Lean_Syntax_node2(v___x_2737_, v___x_2758_, v___x_2760_, v___x_2766_);
v___x_2768_ = l_Lean_Syntax_node1(v___x_2737_, v___x_2740_, v___x_2767_);
v___x_2769_ = l_Lean_Syntax_node2(v___x_2737_, v___x_2755_, v___x_2757_, v___x_2768_);
v___x_2770_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21));
v___x_2771_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__22));
v___x_2772_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2737_);
lean_ctor_set(v___x_2772_, 1, v___x_2771_);
v___x_2773_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25));
lean_inc_ref_n(v___x_2742_, 3);
v___x_2774_ = l_Lean_Syntax_node2(v___x_2737_, v___x_2773_, v___x_2742_, v___x_2742_);
v___x_2775_ = l_Lean_Syntax_node4(v___x_2737_, v___x_2770_, v___x_2772_, v_body_2674_, v___x_2774_, v___x_2742_);
v___x_2776_ = l_Lean_Syntax_node5(v___x_2737_, v___x_2749_, v___x_2751_, v___x_2754_, v___x_2769_, v___x_2775_, v___x_2742_);
v___x_2777_ = l_Lean_Syntax_node2(v___x_2737_, v___x_2738_, v___x_2748_, v___x_2776_);
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 0, v___x_2777_);
v___x_2779_ = v___x_2671_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v___x_2777_);
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
}
}
else
{
lean_object* v_a_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2811_; 
v_a_2804_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2806_ = v___x_2668_;
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_a_2804_);
lean_dec(v___x_2668_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_a_2804_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___boxed(lean_object* v_ctx_2812_, lean_object* v_i_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v_res_2821_; 
v_res_2821_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction(v_ctx_2812_, v_i_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
lean_dec(v___y_2817_);
lean_dec_ref(v___y_2816_);
lean_dec(v___y_2815_);
lean_dec_ref(v___y_2814_);
lean_dec(v_i_2813_);
lean_dec_ref(v_ctx_2812_);
return v_res_2821_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0___redArg(lean_object* v_upperBound_2822_, lean_object* v_ctx_2823_, lean_object* v_a_2824_, lean_object* v_b_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
uint8_t v___x_2833_; 
v___x_2833_ = lean_nat_dec_lt(v_a_2824_, v_upperBound_2822_);
if (v___x_2833_ == 0)
{
lean_object* v___x_2834_; 
lean_dec(v_a_2824_);
v___x_2834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2834_, 0, v_b_2825_);
return v___x_2834_;
}
else
{
lean_object* v___x_2835_; 
v___x_2835_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction(v_ctx_2823_, v_a_2824_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_);
if (lean_obj_tag(v___x_2835_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; 
v_a_2836_ = lean_ctor_get(v___x_2835_, 0);
lean_inc(v_a_2836_);
lean_dec_ref_known(v___x_2835_, 1);
v___x_2837_ = lean_array_push(v_b_2825_, v_a_2836_);
v___x_2838_ = lean_unsigned_to_nat(1u);
v___x_2839_ = lean_nat_add(v_a_2824_, v___x_2838_);
lean_dec(v_a_2824_);
v_a_2824_ = v___x_2839_;
v_b_2825_ = v___x_2837_;
goto _start;
}
else
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
lean_dec_ref(v_b_2825_);
lean_dec(v_a_2824_);
v_a_2841_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2835_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2835_);
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0___redArg___boxed(lean_object* v_upperBound_2849_, lean_object* v_ctx_2850_, lean_object* v_a_2851_, lean_object* v_b_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_){
_start:
{
lean_object* v_res_2860_; 
v_res_2860_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0___redArg(v_upperBound_2849_, v_ctx_2850_, v_a_2851_, v_b_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec_ref(v_ctx_2850_);
lean_dec(v_upperBound_2849_);
return v_res_2860_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__5(void){
_start:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2874_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__4));
v___x_2875_ = l_String_toRawSubstring_x27(v___x_2874_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock(lean_object* v_ctx_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v_typeInfos_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v_auxDefs_2902_; lean_object* v___x_2903_; 
v_typeInfos_2899_ = lean_ctor_get(v_ctx_2891_, 1);
v___x_2900_ = lean_array_get_size(v_typeInfos_2899_);
v___x_2901_ = lean_unsigned_to_nat(0u);
v_auxDefs_2902_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___closed__2));
v___x_2903_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0___redArg(v___x_2900_, v_ctx_2891_, v___x_2901_, v_auxDefs_2902_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_object* v_toCold_2904_; lean_object* v_a_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2940_; 
v_toCold_2904_ = lean_ctor_get(v___y_2896_, 0);
v_a_2905_ = lean_ctor_get(v___x_2903_, 0);
v_isSharedCheck_2940_ = !lean_is_exclusive(v___x_2903_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2907_ = v___x_2903_;
v_isShared_2908_ = v_isSharedCheck_2940_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_a_2905_);
lean_dec(v___x_2903_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2940_;
goto v_resetjp_2906_;
}
v_resetjp_2906_:
{
lean_object* v_ref_2909_; lean_object* v_quotContext_2910_; lean_object* v_currMacroScope_2911_; uint8_t v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2938_; 
v_ref_2909_ = lean_ctor_get(v___y_2896_, 2);
v_quotContext_2910_ = lean_ctor_get(v_toCold_2904_, 8);
v_currMacroScope_2911_ = lean_ctor_get(v_toCold_2904_, 9);
v___x_2912_ = 0;
v___x_2913_ = l_Lean_SourceInfo_fromRef(v_ref_2909_, v___x_2912_);
v___x_2914_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__0));
v___x_2915_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__1));
lean_inc_n(v___x_2913_, 8);
v___x_2916_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2913_);
lean_ctor_set(v___x_2916_, 1, v___x_2914_);
v___x_2917_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_2918_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__2));
v___x_2919_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__3));
v___x_2920_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2920_, 0, v___x_2913_);
lean_ctor_set(v___x_2920_, 1, v___x_2918_);
v___x_2921_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__5, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__5_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__5);
v___x_2922_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__7));
lean_inc(v_currMacroScope_2911_);
lean_inc(v_quotContext_2910_);
v___x_2923_ = l_Lean_addMacroScope(v_quotContext_2910_, v___x_2922_, v_currMacroScope_2911_);
v___x_2924_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__10));
v___x_2925_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2913_);
lean_ctor_set(v___x_2925_, 1, v___x_2921_);
lean_ctor_set(v___x_2925_, 2, v___x_2923_);
lean_ctor_set(v___x_2925_, 3, v___x_2924_);
v___x_2926_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3);
v___x_2927_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2913_);
lean_ctor_set(v___x_2927_, 1, v___x_2917_);
lean_ctor_set(v___x_2927_, 2, v___x_2926_);
v___x_2928_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__11));
v___x_2929_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2913_);
lean_ctor_set(v___x_2929_, 1, v___x_2928_);
v___x_2930_ = l_Lean_Syntax_node4(v___x_2913_, v___x_2919_, v___x_2920_, v___x_2925_, v___x_2927_, v___x_2929_);
v___x_2931_ = l_Array_mkArray1___redArg(v___x_2930_);
v___x_2932_ = l_Array_append___redArg(v___x_2931_, v_a_2905_);
lean_dec(v_a_2905_);
v___x_2933_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2913_);
lean_ctor_set(v___x_2933_, 1, v___x_2917_);
lean_ctor_set(v___x_2933_, 2, v___x_2932_);
v___x_2934_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___closed__12));
v___x_2935_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2935_, 0, v___x_2913_);
lean_ctor_set(v___x_2935_, 1, v___x_2934_);
v___x_2936_ = l_Lean_Syntax_node3(v___x_2913_, v___x_2915_, v___x_2916_, v___x_2933_, v___x_2935_);
if (v_isShared_2908_ == 0)
{
lean_ctor_set(v___x_2907_, 0, v___x_2936_);
v___x_2938_ = v___x_2907_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v___x_2936_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
v_a_2941_ = lean_ctor_get(v___x_2903_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2903_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2903_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2903_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock___boxed(lean_object* v_ctx_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock(v_ctx_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
lean_dec(v___y_2951_);
lean_dec_ref(v___y_2950_);
lean_dec_ref(v_ctx_2949_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0(lean_object* v_upperBound_2958_, lean_object* v_ctx_2959_, lean_object* v_inst_2960_, lean_object* v_R_2961_, lean_object* v_a_2962_, lean_object* v_b_2963_, lean_object* v_c_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0___redArg(v_upperBound_2958_, v_ctx_2959_, v_a_2962_, v_b_2963_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0___boxed(lean_object* v_upperBound_2973_, lean_object* v_ctx_2974_, lean_object* v_inst_2975_, lean_object* v_R_2976_, lean_object* v_a_2977_, lean_object* v_b_2978_, lean_object* v_c_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_){
_start:
{
lean_object* v_res_2987_; 
v_res_2987_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock_spec__0(v_upperBound_2973_, v_ctx_2974_, v_inst_2975_, v_R_2976_, v_a_2977_, v_b_2978_, v_c_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
lean_dec(v___y_2985_);
lean_dec_ref(v___y_2984_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
lean_dec(v___y_2981_);
lean_dec_ref(v___y_2980_);
lean_dec_ref(v_ctx_2974_);
lean_dec(v_upperBound_2973_);
return v_res_2987_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2988_; double v___x_2989_; 
v___x_2988_ = lean_unsigned_to_nat(0u);
v___x_2989_ = lean_float_of_nat(v___x_2988_);
return v___x_2989_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg(lean_object* v_cls_2992_, lean_object* v_msg_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v_ref_2999_; lean_object* v___x_3000_; lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3045_; 
v_ref_2999_ = lean_ctor_get(v___y_2996_, 2);
v___x_3000_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__2(v_msg_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3003_ = v___x_3000_;
v_isShared_3004_ = v_isSharedCheck_3045_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_3000_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3045_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3005_; lean_object* v_traceState_3006_; lean_object* v_env_3007_; lean_object* v_nextMacroScope_3008_; lean_object* v_ngen_3009_; lean_object* v_auxDeclNGen_3010_; lean_object* v_cache_3011_; lean_object* v_messages_3012_; lean_object* v_infoState_3013_; lean_object* v_snapshotTasks_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3044_; 
v___x_3005_ = lean_st_ref_take(v___y_2997_);
v_traceState_3006_ = lean_ctor_get(v___x_3005_, 4);
v_env_3007_ = lean_ctor_get(v___x_3005_, 0);
v_nextMacroScope_3008_ = lean_ctor_get(v___x_3005_, 1);
v_ngen_3009_ = lean_ctor_get(v___x_3005_, 2);
v_auxDeclNGen_3010_ = lean_ctor_get(v___x_3005_, 3);
v_cache_3011_ = lean_ctor_get(v___x_3005_, 5);
v_messages_3012_ = lean_ctor_get(v___x_3005_, 6);
v_infoState_3013_ = lean_ctor_get(v___x_3005_, 7);
v_snapshotTasks_3014_ = lean_ctor_get(v___x_3005_, 8);
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3016_ = v___x_3005_;
v_isShared_3017_ = v_isSharedCheck_3044_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_snapshotTasks_3014_);
lean_inc(v_infoState_3013_);
lean_inc(v_messages_3012_);
lean_inc(v_cache_3011_);
lean_inc(v_traceState_3006_);
lean_inc(v_auxDeclNGen_3010_);
lean_inc(v_ngen_3009_);
lean_inc(v_nextMacroScope_3008_);
lean_inc(v_env_3007_);
lean_dec(v___x_3005_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3044_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
uint64_t v_tid_3018_; lean_object* v_traces_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3043_; 
v_tid_3018_ = lean_ctor_get_uint64(v_traceState_3006_, sizeof(void*)*1);
v_traces_3019_ = lean_ctor_get(v_traceState_3006_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v_traceState_3006_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3021_ = v_traceState_3006_;
v_isShared_3022_ = v_isSharedCheck_3043_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_traces_3019_);
lean_dec(v_traceState_3006_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3043_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; double v___x_3025_; uint8_t v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3034_; 
v___x_3023_ = lean_box(0);
v___x_3024_ = lean_box(0);
v___x_3025_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___closed__0);
v___x_3026_ = 0;
v___x_3027_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__22));
v___x_3028_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3028_, 0, v_cls_2992_);
lean_ctor_set(v___x_3028_, 1, v___x_3024_);
lean_ctor_set(v___x_3028_, 2, v___x_3027_);
lean_ctor_set_float(v___x_3028_, sizeof(void*)*3, v___x_3025_);
lean_ctor_set_float(v___x_3028_, sizeof(void*)*3 + 8, v___x_3025_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*3 + 16, v___x_3026_);
v___x_3029_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___closed__1));
v___x_3030_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3028_);
lean_ctor_set(v___x_3030_, 1, v_a_3001_);
lean_ctor_set(v___x_3030_, 2, v___x_3029_);
lean_inc(v_ref_2999_);
v___x_3031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3031_, 0, v_ref_2999_);
lean_ctor_set(v___x_3031_, 1, v___x_3030_);
v___x_3032_ = l_Lean_PersistentArray_push___redArg(v_traces_3019_, v___x_3031_);
if (v_isShared_3022_ == 0)
{
lean_ctor_set(v___x_3021_, 0, v___x_3032_);
v___x_3034_ = v___x_3021_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v___x_3032_);
lean_ctor_set_uint64(v_reuseFailAlloc_3042_, sizeof(void*)*1, v_tid_3018_);
v___x_3034_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
lean_object* v___x_3036_; 
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 4, v___x_3034_);
v___x_3036_ = v___x_3016_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_env_3007_);
lean_ctor_set(v_reuseFailAlloc_3041_, 1, v_nextMacroScope_3008_);
lean_ctor_set(v_reuseFailAlloc_3041_, 2, v_ngen_3009_);
lean_ctor_set(v_reuseFailAlloc_3041_, 3, v_auxDeclNGen_3010_);
lean_ctor_set(v_reuseFailAlloc_3041_, 4, v___x_3034_);
lean_ctor_set(v_reuseFailAlloc_3041_, 5, v_cache_3011_);
lean_ctor_set(v_reuseFailAlloc_3041_, 6, v_messages_3012_);
lean_ctor_set(v_reuseFailAlloc_3041_, 7, v_infoState_3013_);
lean_ctor_set(v_reuseFailAlloc_3041_, 8, v_snapshotTasks_3014_);
v___x_3036_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
lean_object* v___x_3037_; lean_object* v___x_3039_; 
v___x_3037_ = lean_st_ref_put(v___y_2997_, v___x_3036_);
if (v_isShared_3004_ == 0)
{
lean_ctor_set(v___x_3003_, 0, v___x_3023_);
v___x_3039_ = v___x_3003_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v___x_3023_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
return v___x_3039_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg___boxed(lean_object* v_cls_3046_, lean_object* v_msg_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_){
_start:
{
lean_object* v_res_3053_; 
v_res_3053_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg(v_cls_3046_, v_msg_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_);
lean_dec(v___y_3051_);
lean_dec_ref(v___y_3050_);
lean_dec(v___y_3049_);
lean_dec_ref(v___y_3048_);
return v_res_3053_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__0(lean_object* v_a_3054_, lean_object* v_a_3055_){
_start:
{
if (lean_obj_tag(v_a_3054_) == 0)
{
lean_object* v___x_3056_; 
v___x_3056_ = l_List_reverse___redArg(v_a_3055_);
return v___x_3056_;
}
else
{
lean_object* v_head_3057_; lean_object* v_tail_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3067_; 
v_head_3057_ = lean_ctor_get(v_a_3054_, 0);
v_tail_3058_ = lean_ctor_get(v_a_3054_, 1);
v_isSharedCheck_3067_ = !lean_is_exclusive(v_a_3054_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3060_ = v_a_3054_;
v_isShared_3061_ = v_isSharedCheck_3067_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_tail_3058_);
lean_inc(v_head_3057_);
lean_dec(v_a_3054_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3067_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3062_; lean_object* v___x_3064_; 
v___x_3062_ = l_Lean_MessageData_ofSyntax(v_head_3057_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 1, v_a_3055_);
lean_ctor_set(v___x_3060_, 0, v___x_3062_);
v___x_3064_ = v___x_3060_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v___x_3062_);
lean_ctor_set(v_reuseFailAlloc_3066_, 1, v_a_3055_);
v___x_3064_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
v_a_3054_ = v_tail_3058_;
v_a_3055_ = v___x_3064_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__3(void){
_start:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3075_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0));
v___x_3076_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__2));
v___x_3077_ = l_Lean_Name_append(v___x_3076_, v___x_3075_);
return v___x_3077_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__5(void){
_start:
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
v___x_3079_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__4));
v___x_3080_ = l_Lean_stringToMessageData(v___x_3079_);
return v___x_3080_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__17(void){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3108_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__16));
v___x_3109_ = l_String_toRawSubstring_x27(v___x_3108_);
return v___x_3109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds(lean_object* v_declName_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_){
_start:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v_cmds_3124_; lean_object* v___y_3125_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v_options_3128_; lean_object* v_inheritedTraceOptions_3129_; lean_object* v___y_3130_; uint8_t v___x_3160_; lean_object* v___x_3161_; 
v___x_3121_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader___closed__0));
v___x_3122_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_));
v___x_3160_ = 0;
lean_inc(v_declName_3113_);
v___x_3161_ = l_Lean_Elab_Deriving_mkContext(v___x_3121_, v___x_3122_, v_declName_3113_, v___x_3160_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v_a_3162_; lean_object* v___x_3163_; 
v_a_3162_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3162_);
lean_dec_ref_known(v___x_3161_, 1);
v___x_3163_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMutualBlock(v_a_3162_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; uint8_t v___x_3168_; lean_object* v___x_3169_; 
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc(v_a_3164_);
lean_dec_ref_known(v___x_3163_, 1);
v___x_3165_ = lean_unsigned_to_nat(1u);
v___x_3166_ = lean_mk_empty_array_with_capacity(v___x_3165_);
lean_inc_ref(v___x_3166_);
v___x_3167_ = lean_array_push(v___x_3166_, v_declName_3113_);
v___x_3168_ = 1;
lean_inc(v_a_3162_);
v___x_3169_ = l_Lean_Elab_Deriving_mkInstanceCmds(v_a_3162_, v___x_3121_, v___x_3167_, v___x_3168_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_);
lean_dec_ref(v___x_3167_);
if (lean_obj_tag(v___x_3169_) == 0)
{
lean_object* v_a_3170_; lean_object* v_instName_3171_; uint8_t v_usePartial_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v_a_3170_ = lean_ctor_get(v___x_3169_, 0);
lean_inc(v_a_3170_);
lean_dec_ref_known(v___x_3169_, 1);
v_instName_3171_ = lean_ctor_get(v_a_3162_, 0);
lean_inc(v_instName_3171_);
v_usePartial_3172_ = lean_ctor_get_uint8(v_a_3162_, sizeof(void*)*3);
lean_dec(v_a_3162_);
v___x_3173_ = lean_array_push(v___x_3166_, v_a_3164_);
v___x_3174_ = l_Array_append___redArg(v___x_3173_, v_a_3170_);
lean_dec(v_a_3170_);
if (v_usePartial_3172_ == 0)
{
lean_object* v_toCold_3175_; lean_object* v_ref_3176_; lean_object* v_options_3177_; lean_object* v_quotContext_3178_; lean_object* v_currMacroScope_3179_; lean_object* v_inheritedTraceOptions_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v_toCold_3175_ = lean_ctor_get(v___y_3118_, 0);
v_ref_3176_ = lean_ctor_get(v___y_3118_, 2);
v_options_3177_ = lean_ctor_get(v_toCold_3175_, 2);
v_quotContext_3178_ = lean_ctor_get(v_toCold_3175_, 8);
v_currMacroScope_3179_ = lean_ctor_get(v_toCold_3175_, 9);
v_inheritedTraceOptions_3180_ = lean_ctor_get(v_toCold_3175_, 11);
v___x_3181_ = l_Lean_SourceInfo_fromRef(v_ref_3176_, v_usePartial_3172_);
v___x_3182_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__6));
v___x_3183_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__7));
lean_inc_n(v___x_3181_, 10);
v___x_3184_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3181_);
lean_ctor_set(v___x_3184_, 1, v___x_3182_);
v___x_3185_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__8));
v___x_3186_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3181_);
lean_ctor_set(v___x_3186_, 1, v___x_3185_);
v___x_3187_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_3188_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__10));
v___x_3189_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__12));
v___x_3190_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3);
v___x_3191_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3181_);
lean_ctor_set(v___x_3191_, 1, v___x_3187_);
lean_ctor_set(v___x_3191_, 2, v___x_3190_);
lean_inc_ref(v___x_3191_);
v___x_3192_ = l_Lean_Syntax_node1(v___x_3181_, v___x_3189_, v___x_3191_);
v___x_3193_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__15));
v___x_3194_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__17, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__17_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__17);
v___x_3195_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__18));
lean_inc(v_currMacroScope_3179_);
lean_inc(v_quotContext_3178_);
v___x_3196_ = l_Lean_addMacroScope(v_quotContext_3178_, v___x_3195_, v_currMacroScope_3179_);
v___x_3197_ = lean_box(0);
v___x_3198_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3181_);
lean_ctor_set(v___x_3198_, 1, v___x_3194_);
lean_ctor_set(v___x_3198_, 2, v___x_3196_);
lean_ctor_set(v___x_3198_, 3, v___x_3197_);
v___x_3199_ = l_Lean_Syntax_node2(v___x_3181_, v___x_3193_, v___x_3198_, v___x_3191_);
v___x_3200_ = l_Lean_Syntax_node2(v___x_3181_, v___x_3188_, v___x_3192_, v___x_3199_);
v___x_3201_ = l_Lean_Syntax_node1(v___x_3181_, v___x_3187_, v___x_3200_);
v___x_3202_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__19));
v___x_3203_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3181_);
lean_ctor_set(v___x_3203_, 1, v___x_3202_);
v___x_3204_ = l_Lean_mkIdent(v_instName_3171_);
v___x_3205_ = l_Lean_Syntax_node1(v___x_3181_, v___x_3187_, v___x_3204_);
v___x_3206_ = l_Lean_Syntax_node5(v___x_3181_, v___x_3183_, v___x_3184_, v___x_3186_, v___x_3201_, v___x_3203_, v___x_3205_);
v___x_3207_ = lean_array_push(v___x_3174_, v___x_3206_);
lean_inc_ref(v_inheritedTraceOptions_3180_);
lean_inc_ref(v_options_3177_);
v_cmds_3124_ = v___x_3207_;
v___y_3125_ = v___y_3116_;
v___y_3126_ = v___y_3117_;
v___y_3127_ = v___y_3118_;
v_options_3128_ = v_options_3177_;
v_inheritedTraceOptions_3129_ = v_inheritedTraceOptions_3180_;
v___y_3130_ = v___y_3119_;
goto v___jp_3123_;
}
else
{
lean_object* v_toCold_3208_; lean_object* v_options_3209_; lean_object* v_inheritedTraceOptions_3210_; 
lean_dec(v_instName_3171_);
v_toCold_3208_ = lean_ctor_get(v___y_3118_, 0);
v_options_3209_ = lean_ctor_get(v_toCold_3208_, 2);
v_inheritedTraceOptions_3210_ = lean_ctor_get(v_toCold_3208_, 11);
lean_inc_ref(v_inheritedTraceOptions_3210_);
lean_inc_ref(v_options_3209_);
v_cmds_3124_ = v___x_3174_;
v___y_3125_ = v___y_3116_;
v___y_3126_ = v___y_3117_;
v___y_3127_ = v___y_3118_;
v_options_3128_ = v_options_3209_;
v_inheritedTraceOptions_3129_ = v_inheritedTraceOptions_3210_;
v___y_3130_ = v___y_3119_;
goto v___jp_3123_;
}
}
else
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
lean_dec_ref(v___x_3166_);
lean_dec(v_a_3164_);
lean_dec(v_a_3162_);
v_a_3211_ = lean_ctor_get(v___x_3169_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3169_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v___x_3169_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3169_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
}
}
}
}
else
{
lean_object* v_a_3219_; lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3226_; 
lean_dec(v_a_3162_);
lean_dec(v_declName_3113_);
v_a_3219_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3221_ = v___x_3163_;
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
else
{
lean_inc(v_a_3219_);
lean_dec(v___x_3163_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v___x_3224_; 
if (v_isShared_3222_ == 0)
{
v___x_3224_ = v___x_3221_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v_a_3219_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_dec(v_declName_3113_);
v_a_3227_ = lean_ctor_get(v___x_3161_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3161_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3161_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3161_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
v___jp_3123_:
{
uint8_t v_hasTrace_3131_; 
v_hasTrace_3131_ = lean_ctor_get_uint8(v_options_3128_, sizeof(void*)*1);
if (v_hasTrace_3131_ == 0)
{
lean_object* v___x_3132_; 
lean_dec_ref(v_inheritedTraceOptions_3129_);
lean_dec_ref(v_options_3128_);
v___x_3132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3132_, 0, v_cmds_3124_);
return v___x_3132_;
}
else
{
lean_object* v___x_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; 
v___x_3133_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0));
v___x_3134_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__3, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__3_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__3);
v___x_3135_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3129_, v_options_3128_, v___x_3134_);
lean_dec_ref(v_options_3128_);
lean_dec_ref(v_inheritedTraceOptions_3129_);
if (v___x_3135_ == 0)
{
lean_object* v___x_3136_; 
v___x_3136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3136_, 0, v_cmds_3124_);
return v___x_3136_;
}
else
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v___x_3137_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__5, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__5_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__5);
lean_inc_ref(v_cmds_3124_);
v___x_3138_ = lean_array_to_list(v_cmds_3124_);
v___x_3139_ = lean_box(0);
v___x_3140_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__0(v___x_3138_, v___x_3139_);
v___x_3141_ = l_Lean_MessageData_ofList(v___x_3140_);
v___x_3142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3137_);
lean_ctor_set(v___x_3142_, 1, v___x_3141_);
v___x_3143_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg(v___x_3133_, v___x_3142_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3130_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3150_; 
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3150_ == 0)
{
lean_object* v_unused_3151_; 
v_unused_3151_ = lean_ctor_get(v___x_3143_, 0);
lean_dec(v_unused_3151_);
v___x_3145_ = v___x_3143_;
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
else
{
lean_dec(v___x_3143_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3148_; 
if (v_isShared_3146_ == 0)
{
lean_ctor_set(v___x_3145_, 0, v_cmds_3124_);
v___x_3148_ = v___x_3145_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_cmds_3124_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_dec_ref(v_cmds_3124_);
v_a_3152_ = lean_ctor_get(v___x_3143_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3143_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3143_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___boxed(lean_object* v_declName_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_){
_start:
{
lean_object* v_res_3243_; 
v_res_3243_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds(v_declName_3235_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3238_);
lean_dec(v___y_3237_);
lean_dec_ref(v___y_3236_);
return v_res_3243_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1(lean_object* v_cls_3244_, lean_object* v_msg_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_){
_start:
{
lean_object* v___x_3253_; 
v___x_3253_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg(v_cls_3244_, v_msg_3245_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_);
return v___x_3253_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___boxed(lean_object* v_cls_3254_, lean_object* v_msg_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_){
_start:
{
lean_object* v_res_3263_; 
v_res_3263_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1(v_cls_3254_, v_msg_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
lean_dec(v___y_3261_);
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3259_);
lean_dec_ref(v___y_3258_);
lean_dec(v___y_3257_);
lean_dec_ref(v___y_3256_);
return v_res_3263_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__3(void){
_start:
{
lean_object* v___x_3271_; lean_object* v___x_3272_; 
v___x_3271_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__2));
v___x_3272_ = l_String_toRawSubstring_x27(v___x_3271_);
return v___x_3272_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__6(void){
_start:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; 
v___x_3276_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__5));
v___x_3277_ = l_String_toRawSubstring_x27(v___x_3276_);
return v___x_3277_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__12(void){
_start:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; 
v___x_3290_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__11));
v___x_3291_ = l_String_toRawSubstring_x27(v___x_3290_);
return v___x_3291_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__16(void){
_start:
{
lean_object* v___x_3297_; lean_object* v___x_3298_; 
v___x_3297_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__15));
v___x_3298_ = l_String_toRawSubstring_x27(v___x_3297_);
return v___x_3298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg(lean_object* v_ctx_3302_, lean_object* v_name_3303_, lean_object* v___y_3304_){
_start:
{
lean_object* v_toCold_3306_; lean_object* v_auxFunNames_3307_; lean_object* v_ref_3308_; lean_object* v_quotContext_3309_; lean_object* v_currMacroScope_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v_auxFunName_3313_; uint8_t v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
v_toCold_3306_ = lean_ctor_get(v___y_3304_, 0);
v_auxFunNames_3307_ = lean_ctor_get(v_ctx_3302_, 2);
v_ref_3308_ = lean_ctor_get(v___y_3304_, 2);
v_quotContext_3309_ = lean_ctor_get(v_toCold_3306_, 8);
v_currMacroScope_3310_ = lean_ctor_get(v_toCold_3306_, 9);
v___x_3311_ = lean_box(0);
v___x_3312_ = lean_unsigned_to_nat(0u);
v_auxFunName_3313_ = lean_array_get_borrowed(v___x_3311_, v_auxFunNames_3307_, v___x_3312_);
v___x_3314_ = 0;
v___x_3315_ = l_Lean_SourceInfo_fromRef(v_ref_3308_, v___x_3314_);
v___x_3316_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__2));
v___x_3317_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__4));
v___x_3318_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__14));
v___x_3319_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__7___redArg___lam__2___closed__3);
lean_inc_n(v___x_3315_, 26);
v___x_3320_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3315_);
lean_ctor_set(v___x_3320_, 1, v___x_3318_);
lean_ctor_set(v___x_3320_, 2, v___x_3319_);
lean_inc_ref_n(v___x_3320_, 12);
v___x_3321_ = l_Lean_Syntax_node7(v___x_3315_, v___x_3317_, v___x_3320_, v___x_3320_, v___x_3320_, v___x_3320_, v___x_3320_, v___x_3320_, v___x_3320_);
v___x_3322_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__6));
v___x_3323_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__7));
v___x_3324_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3315_);
lean_ctor_set(v___x_3324_, 1, v___x_3323_);
v___x_3325_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__9));
lean_inc(v_auxFunName_3313_);
v___x_3326_ = l_Lean_mkIdent(v_auxFunName_3313_);
v___x_3327_ = l_Lean_Syntax_node2(v___x_3315_, v___x_3325_, v___x_3326_, v___x_3320_);
v___x_3328_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__11));
v___x_3329_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__1));
v___x_3330_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__19));
v___x_3331_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3331_, 0, v___x_3315_);
lean_ctor_set(v___x_3331_, 1, v___x_3330_);
v___x_3332_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__3, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__3_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__3);
v___x_3333_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__4));
lean_inc_n(v_currMacroScope_3310_, 6);
lean_inc_n(v_quotContext_3309_, 6);
v___x_3334_ = l_Lean_addMacroScope(v_quotContext_3309_, v___x_3333_, v_currMacroScope_3310_);
v___x_3335_ = lean_box(0);
v___x_3336_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3315_);
lean_ctor_set(v___x_3336_, 1, v___x_3332_);
lean_ctor_set(v___x_3336_, 2, v___x_3334_);
lean_ctor_set(v___x_3336_, 3, v___x_3335_);
v___x_3337_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__6, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__6_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__6);
v___x_3338_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__7));
v___x_3339_ = l_Lean_addMacroScope(v_quotContext_3309_, v___x_3338_, v_currMacroScope_3310_);
v___x_3340_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3315_);
lean_ctor_set(v___x_3340_, 1, v___x_3337_);
lean_ctor_set(v___x_3340_, 2, v___x_3339_);
lean_ctor_set(v___x_3340_, 3, v___x_3335_);
v___x_3341_ = l_Lean_Syntax_node2(v___x_3315_, v___x_3318_, v___x_3336_, v___x_3340_);
v___x_3342_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__11));
v___x_3343_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3315_);
lean_ctor_set(v___x_3343_, 1, v___x_3342_);
v___x_3344_ = l_Lean_mkCIdent(v_name_3303_);
lean_inc_ref(v___x_3343_);
v___x_3345_ = l_Lean_Syntax_node2(v___x_3315_, v___x_3318_, v___x_3343_, v___x_3344_);
v___x_3346_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__40));
v___x_3347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3315_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
v___x_3348_ = l_Lean_Syntax_node5(v___x_3315_, v___x_3329_, v___x_3331_, v___x_3341_, v___x_3345_, v___x_3320_, v___x_3347_);
v___x_3349_ = l_Lean_Syntax_node1(v___x_3315_, v___x_3318_, v___x_3348_);
v___x_3350_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__13));
v___x_3351_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__14);
v___x_3352_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__15));
v___x_3353_ = l_Lean_addMacroScope(v_quotContext_3309_, v___x_3352_, v_currMacroScope_3310_);
v___x_3354_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__10));
v___x_3355_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3315_);
lean_ctor_set(v___x_3355_, 1, v___x_3351_);
lean_ctor_set(v___x_3355_, 2, v___x_3353_);
lean_ctor_set(v___x_3355_, 3, v___x_3354_);
v___x_3356_ = l_Lean_Syntax_node2(v___x_3315_, v___x_3350_, v___x_3343_, v___x_3355_);
v___x_3357_ = l_Lean_Syntax_node1(v___x_3315_, v___x_3318_, v___x_3356_);
v___x_3358_ = l_Lean_Syntax_node2(v___x_3315_, v___x_3328_, v___x_3349_, v___x_3357_);
v___x_3359_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__21));
v___x_3360_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__22));
v___x_3361_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3315_);
lean_ctor_set(v___x_3361_, 1, v___x_3360_);
v___x_3362_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__3));
v___x_3363_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__35);
v___x_3364_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__2___redArg___lam__0___closed__36));
v___x_3365_ = l_Lean_addMacroScope(v_quotContext_3309_, v___x_3364_, v_currMacroScope_3310_);
v___x_3366_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchNew___closed__13));
v___x_3367_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3367_, 0, v___x_3315_);
lean_ctor_set(v___x_3367_, 1, v___x_3363_);
lean_ctor_set(v___x_3367_, 2, v___x_3365_);
lean_ctor_set(v___x_3367_, 3, v___x_3366_);
v___x_3368_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__12, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__12_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__12);
v___x_3369_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__14));
v___x_3370_ = l_Lean_addMacroScope(v_quotContext_3309_, v___x_3369_, v_currMacroScope_3310_);
v___x_3371_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3315_);
lean_ctor_set(v___x_3371_, 1, v___x_3368_);
lean_ctor_set(v___x_3371_, 2, v___x_3370_);
lean_ctor_set(v___x_3371_, 3, v___x_3335_);
v___x_3372_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__16, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__16_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__16);
v___x_3373_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___closed__17));
v___x_3374_ = l_Lean_addMacroScope(v_quotContext_3309_, v___x_3373_, v_currMacroScope_3310_);
v___x_3375_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3315_);
lean_ctor_set(v___x_3375_, 1, v___x_3372_);
lean_ctor_set(v___x_3375_, 2, v___x_3374_);
lean_ctor_set(v___x_3375_, 3, v___x_3335_);
v___x_3376_ = l_Lean_Syntax_node2(v___x_3315_, v___x_3318_, v___x_3371_, v___x_3375_);
v___x_3377_ = l_Lean_Syntax_node2(v___x_3315_, v___x_3362_, v___x_3367_, v___x_3376_);
v___x_3378_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkAuxFunction___closed__25));
v___x_3379_ = l_Lean_Syntax_node2(v___x_3315_, v___x_3378_, v___x_3320_, v___x_3320_);
v___x_3380_ = l_Lean_Syntax_node4(v___x_3315_, v___x_3359_, v___x_3361_, v___x_3377_, v___x_3379_, v___x_3320_);
v___x_3381_ = l_Lean_Syntax_node5(v___x_3315_, v___x_3322_, v___x_3324_, v___x_3327_, v___x_3358_, v___x_3380_, v___x_3320_);
v___x_3382_ = l_Lean_Syntax_node2(v___x_3315_, v___x_3316_, v___x_3321_, v___x_3381_);
v___x_3383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3382_);
return v___x_3383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg___boxed(lean_object* v_ctx_3384_, lean_object* v_name_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg(v_ctx_3384_, v_name_3385_, v___y_3386_);
lean_dec_ref(v___y_3386_);
lean_dec_ref(v_ctx_3384_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun(lean_object* v_ctx_3389_, lean_object* v_name_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_){
_start:
{
lean_object* v___x_3398_; 
v___x_3398_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg(v_ctx_3389_, v_name_3390_, v___y_3395_);
return v___x_3398_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___boxed(lean_object* v_ctx_3399_, lean_object* v_name_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
lean_object* v_res_3408_; 
v_res_3408_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun(v_ctx_3399_, v_name_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
lean_dec(v___y_3404_);
lean_dec_ref(v___y_3403_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
lean_dec_ref(v_ctx_3399_);
return v_res_3408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumCmd(lean_object* v_name_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_){
_start:
{
lean_object* v___x_3417_; lean_object* v___x_3418_; uint8_t v___x_3419_; lean_object* v___x_3420_; 
v___x_3417_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader___closed__0));
v___x_3418_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__initFn___closed__1_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_));
v___x_3419_ = 1;
lean_inc(v_name_3409_);
v___x_3420_ = l_Lean_Elab_Deriving_mkContext(v___x_3417_, v___x_3418_, v_name_3409_, v___x_3419_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
if (lean_obj_tag(v___x_3420_) == 0)
{
lean_object* v_a_3421_; lean_object* v___x_3422_; lean_object* v_a_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v_a_3421_ = lean_ctor_get(v___x_3420_, 0);
lean_inc(v_a_3421_);
lean_dec_ref_known(v___x_3420_, 1);
lean_inc(v_name_3409_);
v___x_3422_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumFun___redArg(v_a_3421_, v_name_3409_, v___y_3414_);
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc(v_a_3423_);
lean_dec_ref(v___x_3422_);
v___x_3424_ = lean_unsigned_to_nat(1u);
v___x_3425_ = lean_mk_empty_array_with_capacity(v___x_3424_);
lean_inc_ref(v___x_3425_);
v___x_3426_ = lean_array_push(v___x_3425_, v_name_3409_);
v___x_3427_ = l_Lean_Elab_Deriving_mkInstanceCmds(v_a_3421_, v___x_3417_, v___x_3426_, v___x_3419_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
lean_dec_ref(v___x_3426_);
if (lean_obj_tag(v___x_3427_) == 0)
{
lean_object* v_toCold_3428_; lean_object* v_options_3429_; lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3470_; 
v_toCold_3428_ = lean_ctor_get(v___y_3414_, 0);
v_options_3429_ = lean_ctor_get(v_toCold_3428_, 2);
v_a_3430_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3432_ = v___x_3427_;
v_isShared_3433_ = v_isSharedCheck_3470_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3427_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3470_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v_inheritedTraceOptions_3434_; uint8_t v_hasTrace_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; 
v_inheritedTraceOptions_3434_ = lean_ctor_get(v_toCold_3428_, 11);
v_hasTrace_3435_ = lean_ctor_get_uint8(v_options_3429_, sizeof(void*)*1);
v___x_3436_ = lean_array_push(v___x_3425_, v_a_3423_);
v___x_3437_ = l_Array_append___redArg(v___x_3436_, v_a_3430_);
lean_dec(v_a_3430_);
if (v_hasTrace_3435_ == 0)
{
lean_object* v___x_3439_; 
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 0, v___x_3437_);
v___x_3439_ = v___x_3432_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v___x_3437_);
v___x_3439_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
return v___x_3439_;
}
}
else
{
lean_object* v___x_3441_; lean_object* v___x_3442_; uint8_t v___x_3443_; 
v___x_3441_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0));
v___x_3442_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__3, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__3_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__3);
v___x_3443_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3434_, v_options_3429_, v___x_3442_);
if (v___x_3443_ == 0)
{
lean_object* v___x_3445_; 
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 0, v___x_3437_);
v___x_3445_ = v___x_3432_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v___x_3437_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
else
{
lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
lean_del_object(v___x_3432_);
v___x_3447_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__5, &l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__5_once, _init_l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__5);
lean_inc_ref(v___x_3437_);
v___x_3448_ = lean_array_to_list(v___x_3437_);
v___x_3449_ = lean_box(0);
v___x_3450_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__0(v___x_3448_, v___x_3449_);
v___x_3451_ = l_Lean_MessageData_ofList(v___x_3450_);
v___x_3452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3447_);
lean_ctor_set(v___x_3452_, 1, v___x_3451_);
v___x_3453_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds_spec__1___redArg(v___x_3441_, v___x_3452_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3460_; 
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3460_ == 0)
{
lean_object* v_unused_3461_; 
v_unused_3461_ = lean_ctor_get(v___x_3453_, 0);
lean_dec(v_unused_3461_);
v___x_3455_ = v___x_3453_;
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
else
{
lean_dec(v___x_3453_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3458_; 
if (v_isShared_3456_ == 0)
{
lean_ctor_set(v___x_3455_, 0, v___x_3437_);
v___x_3458_ = v___x_3455_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v___x_3437_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
}
else
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3469_; 
lean_dec_ref(v___x_3437_);
v_a_3462_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3464_ = v___x_3453_;
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3453_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3467_; 
if (v_isShared_3465_ == 0)
{
v___x_3467_ = v___x_3464_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_a_3462_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3478_; 
lean_dec_ref(v___x_3425_);
lean_dec(v_a_3423_);
v_a_3471_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3473_ = v___x_3427_;
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_a_3471_);
lean_dec(v___x_3427_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3476_; 
if (v_isShared_3474_ == 0)
{
v___x_3476_ = v___x_3473_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v_a_3471_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
return v___x_3476_;
}
}
}
}
else
{
lean_object* v_a_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3486_; 
lean_dec(v_name_3409_);
v_a_3479_ = lean_ctor_get(v___x_3420_, 0);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3481_ = v___x_3420_;
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_a_3479_);
lean_dec(v___x_3420_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3484_; 
if (v_isShared_3482_ == 0)
{
v___x_3484_ = v___x_3481_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_a_3479_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
return v___x_3484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumCmd___boxed(lean_object* v_name_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_){
_start:
{
lean_object* v_res_3495_; 
v_res_3495_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumCmd(v_name_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_, v___y_3493_);
lean_dec(v___y_3493_);
lean_dec_ref(v___y_3492_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
lean_dec(v___y_3489_);
lean_dec_ref(v___y_3488_);
return v_res_3495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__0(uint8_t v_a_3496_, lean_object* v_declName_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_){
_start:
{
if (v_a_3496_ == 0)
{
lean_object* v___x_3505_; 
v___x_3505_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds(v_declName_3497_, v___y_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_);
return v___x_3505_;
}
else
{
lean_object* v___x_3506_; 
v___x_3506_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdEnumCmd(v_declName_3497_, v___y_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_);
return v___x_3506_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__0___boxed(lean_object* v_a_3507_, lean_object* v_declName_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_){
_start:
{
uint8_t v_a_3824__boxed_3516_; lean_object* v_res_3517_; 
v_a_3824__boxed_3516_ = lean_unbox(v_a_3507_);
v_res_3517_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__0(v_a_3824__boxed_3516_, v_declName_3508_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec(v___y_3512_);
lean_dec_ref(v___y_3511_);
lean_dec(v___y_3510_);
lean_dec_ref(v___y_3509_);
return v_res_3517_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_3518_; 
v___x_3518_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3518_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3519_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__0);
v___x_3520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
return v___x_3520_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3521_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__1);
v___x_3522_ = lean_unsigned_to_nat(0u);
v___x_3523_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3522_);
lean_ctor_set(v___x_3523_, 1, v___x_3522_);
lean_ctor_set(v___x_3523_, 2, v___x_3522_);
lean_ctor_set(v___x_3523_, 3, v___x_3522_);
lean_ctor_set(v___x_3523_, 4, v___x_3521_);
lean_ctor_set(v___x_3523_, 5, v___x_3521_);
lean_ctor_set(v___x_3523_, 6, v___x_3521_);
lean_ctor_set(v___x_3523_, 7, v___x_3521_);
lean_ctor_set(v___x_3523_, 8, v___x_3521_);
lean_ctor_set(v___x_3523_, 9, v___x_3521_);
lean_ctor_set(v___x_3523_, 10, v___x_3521_);
return v___x_3523_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3524_ = lean_unsigned_to_nat(32u);
v___x_3525_ = lean_mk_empty_array_with_capacity(v___x_3524_);
v___x_3526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3525_);
return v___x_3526_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__4(void){
_start:
{
size_t v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; 
v___x_3527_ = ((size_t)5ULL);
v___x_3528_ = lean_unsigned_to_nat(0u);
v___x_3529_ = lean_unsigned_to_nat(32u);
v___x_3530_ = lean_mk_empty_array_with_capacity(v___x_3529_);
v___x_3531_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__3);
v___x_3532_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3532_, 0, v___x_3531_);
lean_ctor_set(v___x_3532_, 1, v___x_3530_);
lean_ctor_set(v___x_3532_, 2, v___x_3528_);
lean_ctor_set(v___x_3532_, 3, v___x_3528_);
lean_ctor_set_usize(v___x_3532_, 4, v___x_3527_);
return v___x_3532_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__5(void){
_start:
{
lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3533_ = lean_box(1);
v___x_3534_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__4);
v___x_3535_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__1);
v___x_3536_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3535_);
lean_ctor_set(v___x_3536_, 1, v___x_3534_);
lean_ctor_set(v___x_3536_, 2, v___x_3533_);
return v___x_3536_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(lean_object* v_msgData_3537_, lean_object* v___y_3538_){
_start:
{
lean_object* v___x_3540_; lean_object* v_env_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v_scopes_3544_; lean_object* v___x_3545_; lean_object* v_opts_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3540_ = lean_st_ref_get(v___y_3538_);
v_env_3541_ = lean_ctor_get(v___x_3540_, 0);
lean_inc_ref(v_env_3541_);
lean_dec(v___x_3540_);
v___x_3542_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3543_ = lean_st_ref_get(v___y_3538_);
v_scopes_3544_ = lean_ctor_get(v___x_3543_, 2);
lean_inc(v_scopes_3544_);
lean_dec(v___x_3543_);
v___x_3545_ = l_List_head_x21___redArg(v___x_3542_, v_scopes_3544_);
lean_dec(v_scopes_3544_);
v_opts_3546_ = lean_ctor_get(v___x_3545_, 1);
lean_inc_ref(v_opts_3546_);
lean_dec(v___x_3545_);
v___x_3547_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__2);
v___x_3548_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__5);
v___x_3549_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3549_, 0, v_env_3541_);
lean_ctor_set(v___x_3549_, 1, v___x_3547_);
lean_ctor_set(v___x_3549_, 2, v___x_3548_);
lean_ctor_set(v___x_3549_, 3, v_opts_3546_);
v___x_3550_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3549_);
lean_ctor_set(v___x_3550_, 1, v_msgData_3537_);
v___x_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3550_);
return v___x_3551_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___boxed(lean_object* v_msgData_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_){
_start:
{
lean_object* v_res_3555_; 
v_res_3555_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(v_msgData_3552_, v___y_3553_);
lean_dec(v___y_3553_);
return v_res_3555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11___redArg(lean_object* v_msgData_3556_, lean_object* v_macroStack_3557_, lean_object* v___y_3558_){
_start:
{
lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v_scopes_3562_; lean_object* v___x_3563_; lean_object* v_opts_3564_; lean_object* v___x_3565_; uint8_t v___x_3566_; 
v___x_3560_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3561_ = lean_st_ref_get(v___y_3558_);
v_scopes_3562_ = lean_ctor_get(v___x_3561_, 2);
lean_inc(v_scopes_3562_);
lean_dec(v___x_3561_);
v___x_3563_ = l_List_head_x21___redArg(v___x_3560_, v_scopes_3562_);
lean_dec(v_scopes_3562_);
v_opts_3564_ = lean_ctor_get(v___x_3563_, 1);
lean_inc_ref(v_opts_3564_);
lean_dec(v___x_3563_);
v___x_3565_ = l_Lean_Elab_pp_macroStack;
v___x_3566_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11(v_opts_3564_, v___x_3565_);
lean_dec_ref(v_opts_3564_);
if (v___x_3566_ == 0)
{
lean_object* v___x_3567_; 
lean_dec(v_macroStack_3557_);
v___x_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3567_, 0, v_msgData_3556_);
return v___x_3567_;
}
else
{
if (lean_obj_tag(v_macroStack_3557_) == 0)
{
lean_object* v___x_3568_; 
v___x_3568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3568_, 0, v_msgData_3556_);
return v___x_3568_;
}
else
{
lean_object* v_head_3569_; lean_object* v_after_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3585_; 
v_head_3569_ = lean_ctor_get(v_macroStack_3557_, 0);
lean_inc(v_head_3569_);
v_after_3570_ = lean_ctor_get(v_head_3569_, 1);
v_isSharedCheck_3585_ = !lean_is_exclusive(v_head_3569_);
if (v_isSharedCheck_3585_ == 0)
{
lean_object* v_unused_3586_; 
v_unused_3586_ = lean_ctor_get(v_head_3569_, 0);
lean_dec(v_unused_3586_);
v___x_3572_ = v_head_3569_;
v_isShared_3573_ = v_isSharedCheck_3585_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_after_3570_);
lean_dec(v_head_3569_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3585_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3574_; lean_object* v___x_3576_; 
v___x_3574_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12___closed__0);
if (v_isShared_3573_ == 0)
{
lean_ctor_set_tag(v___x_3572_, 7);
lean_ctor_set(v___x_3572_, 1, v___x_3574_);
lean_ctor_set(v___x_3572_, 0, v_msgData_3556_);
v___x_3576_ = v___x_3572_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_msgData_3556_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v___x_3574_);
v___x_3576_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v_msgData_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3577_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2);
v___x_3578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3576_);
lean_ctor_set(v___x_3578_, 1, v___x_3577_);
v___x_3579_ = l_Lean_MessageData_ofSyntax(v_after_3570_);
v___x_3580_ = l_Lean_indentD(v___x_3579_);
v_msgData_3581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_3581_, 0, v___x_3578_);
lean_ctor_set(v_msgData_3581_, 1, v___x_3580_);
v___x_3582_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__12(v_msgData_3581_, v_macroStack_3557_);
v___x_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3582_);
return v___x_3583_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11___redArg___boxed(lean_object* v_msgData_3587_, lean_object* v_macroStack_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_){
_start:
{
lean_object* v_res_3591_; 
v_res_3591_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11___redArg(v_msgData_3587_, v_macroStack_3588_, v___y_3589_);
lean_dec(v___y_3589_);
return v_res_3591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9___redArg(lean_object* v_msg_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
lean_object* v___x_3596_; 
v___x_3596_ = l_Lean_Elab_Command_getRef___redArg(v___y_3593_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v_a_3597_; lean_object* v_macroStack_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v_a_3601_; lean_object* v___x_3602_; lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3611_; 
v_a_3597_ = lean_ctor_get(v___x_3596_, 0);
lean_inc(v_a_3597_);
lean_dec_ref_known(v___x_3596_, 1);
v_macroStack_3598_ = lean_ctor_get(v___y_3593_, 4);
v___x_3599_ = l_Lean_Elab_getBetterRef(v_a_3597_, v_macroStack_3598_);
lean_dec(v_a_3597_);
v___x_3600_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(v_msg_3592_, v___y_3594_);
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3601_);
lean_dec_ref(v___x_3600_);
lean_inc(v_macroStack_3598_);
v___x_3602_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11___redArg(v_a_3601_, v_macroStack_3598_, v___y_3594_);
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3605_ = v___x_3602_;
v_isShared_3606_ = v_isSharedCheck_3611_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3602_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3611_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3607_; lean_object* v___x_3609_; 
v___x_3607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3599_);
lean_ctor_set(v___x_3607_, 1, v_a_3603_);
if (v_isShared_3606_ == 0)
{
lean_ctor_set_tag(v___x_3605_, 1);
lean_ctor_set(v___x_3605_, 0, v___x_3607_);
v___x_3609_ = v___x_3605_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3607_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
else
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3619_; 
lean_dec_ref(v_msg_3592_);
v_a_3612_ = lean_ctor_get(v___x_3596_, 0);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3596_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3614_ = v___x_3596_;
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3596_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3617_; 
if (v_isShared_3615_ == 0)
{
v___x_3617_ = v___x_3614_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v_a_3612_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9___redArg___boxed(lean_object* v_msg_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_){
_start:
{
lean_object* v_res_3624_; 
v_res_3624_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9___redArg(v_msg_3620_, v___y_3621_, v___y_3622_);
lean_dec(v___y_3622_);
lean_dec_ref(v___y_3621_);
return v_res_3624_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg(lean_object* v_ref_3625_, lean_object* v_msg_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_){
_start:
{
lean_object* v___x_3630_; 
v___x_3630_ = l_Lean_Elab_Command_getRef___redArg(v___y_3627_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v_a_3631_; lean_object* v_fileName_3632_; lean_object* v_fileMap_3633_; lean_object* v_currRecDepth_3634_; lean_object* v_cmdPos_3635_; lean_object* v_macroStack_3636_; lean_object* v_quotContext_x3f_3637_; lean_object* v_currMacroScope_3638_; lean_object* v_snap_x3f_3639_; lean_object* v_cancelTk_x3f_3640_; uint8_t v_suppressElabErrors_3641_; lean_object* v_ref_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; 
v_a_3631_ = lean_ctor_get(v___x_3630_, 0);
lean_inc(v_a_3631_);
lean_dec_ref_known(v___x_3630_, 1);
v_fileName_3632_ = lean_ctor_get(v___y_3627_, 0);
v_fileMap_3633_ = lean_ctor_get(v___y_3627_, 1);
v_currRecDepth_3634_ = lean_ctor_get(v___y_3627_, 2);
v_cmdPos_3635_ = lean_ctor_get(v___y_3627_, 3);
v_macroStack_3636_ = lean_ctor_get(v___y_3627_, 4);
v_quotContext_x3f_3637_ = lean_ctor_get(v___y_3627_, 5);
v_currMacroScope_3638_ = lean_ctor_get(v___y_3627_, 6);
v_snap_x3f_3639_ = lean_ctor_get(v___y_3627_, 8);
v_cancelTk_x3f_3640_ = lean_ctor_get(v___y_3627_, 9);
v_suppressElabErrors_3641_ = lean_ctor_get_uint8(v___y_3627_, sizeof(void*)*10);
v_ref_3642_ = l_Lean_replaceRef(v_ref_3625_, v_a_3631_);
lean_dec(v_a_3631_);
lean_inc(v_cancelTk_x3f_3640_);
lean_inc(v_snap_x3f_3639_);
lean_inc(v_currMacroScope_3638_);
lean_inc(v_quotContext_x3f_3637_);
lean_inc(v_macroStack_3636_);
lean_inc(v_cmdPos_3635_);
lean_inc(v_currRecDepth_3634_);
lean_inc_ref(v_fileMap_3633_);
lean_inc_ref(v_fileName_3632_);
v___x_3643_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_3643_, 0, v_fileName_3632_);
lean_ctor_set(v___x_3643_, 1, v_fileMap_3633_);
lean_ctor_set(v___x_3643_, 2, v_currRecDepth_3634_);
lean_ctor_set(v___x_3643_, 3, v_cmdPos_3635_);
lean_ctor_set(v___x_3643_, 4, v_macroStack_3636_);
lean_ctor_set(v___x_3643_, 5, v_quotContext_x3f_3637_);
lean_ctor_set(v___x_3643_, 6, v_currMacroScope_3638_);
lean_ctor_set(v___x_3643_, 7, v_ref_3642_);
lean_ctor_set(v___x_3643_, 8, v_snap_x3f_3639_);
lean_ctor_set(v___x_3643_, 9, v_cancelTk_x3f_3640_);
lean_ctor_set_uint8(v___x_3643_, sizeof(void*)*10, v_suppressElabErrors_3641_);
v___x_3644_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9___redArg(v_msg_3626_, v___x_3643_, v___y_3628_);
lean_dec_ref_known(v___x_3643_, 10);
return v___x_3644_;
}
else
{
lean_object* v_a_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
lean_dec_ref(v_msg_3626_);
v_a_3645_ = lean_ctor_get(v___x_3630_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3630_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3647_ = v___x_3630_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_a_3645_);
lean_dec(v___x_3630_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_a_3645_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_ref_3653_, lean_object* v_msg_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_){
_start:
{
lean_object* v_res_3658_; 
v_res_3658_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg(v_ref_3653_, v_msg_3654_, v___y_3655_, v___y_3656_);
lean_dec(v___y_3656_);
lean_dec_ref(v___y_3655_);
lean_dec(v_ref_3653_);
return v_res_3658_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3660_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__0));
v___x_3661_ = l_Lean_stringToMessageData(v___x_3660_);
return v___x_3661_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_3663_; lean_object* v___x_3664_; 
v___x_3663_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__2));
v___x_3664_ = l_Lean_stringToMessageData(v___x_3663_);
return v___x_3664_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3666_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__4));
v___x_3667_ = l_Lean_stringToMessageData(v___x_3666_);
return v___x_3667_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__7(void){
_start:
{
lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3669_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__6));
v___x_3670_ = l_Lean_stringToMessageData(v___x_3669_);
return v___x_3670_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__9(void){
_start:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; 
v___x_3672_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__8));
v___x_3673_ = l_Lean_stringToMessageData(v___x_3672_);
return v___x_3673_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__11(void){
_start:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3675_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__10));
v___x_3676_ = l_Lean_stringToMessageData(v___x_3675_);
return v___x_3676_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__13(void){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; 
v___x_3678_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__12));
v___x_3679_ = l_Lean_stringToMessageData(v___x_3678_);
return v___x_3679_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg(lean_object* v_msg_3680_, lean_object* v_declHint_3681_, lean_object* v___y_3682_){
_start:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v_env_3686_; uint8_t v___x_3687_; 
v___x_3684_ = lean_box(0);
v___x_3685_ = lean_st_ref_get(v___y_3682_);
v_env_3686_ = lean_ctor_get(v___x_3685_, 0);
lean_inc_ref(v_env_3686_);
lean_dec(v___x_3685_);
v___x_3687_ = l_Lean_Name_isAnonymous(v_declHint_3681_);
if (v___x_3687_ == 0)
{
uint8_t v_isExporting_3688_; 
v_isExporting_3688_ = lean_ctor_get_uint8(v_env_3686_, sizeof(void*)*8);
if (v_isExporting_3688_ == 0)
{
lean_object* v___x_3689_; 
lean_dec_ref(v_env_3686_);
lean_dec(v_declHint_3681_);
v___x_3689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3689_, 0, v_msg_3680_);
return v___x_3689_;
}
else
{
lean_object* v___x_3690_; uint8_t v___x_3691_; 
lean_inc_ref(v_env_3686_);
v___x_3690_ = l_Lean_Environment_setExporting(v_env_3686_, v___x_3687_);
lean_inc(v_declHint_3681_);
lean_inc_ref(v___x_3690_);
v___x_3691_ = l_Lean_Environment_contains(v___x_3690_, v_declHint_3681_, v_isExporting_3688_);
if (v___x_3691_ == 0)
{
lean_object* v___x_3692_; 
lean_dec_ref(v___x_3690_);
lean_dec_ref(v_env_3686_);
lean_dec(v_declHint_3681_);
v___x_3692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3692_, 0, v_msg_3680_);
return v___x_3692_;
}
else
{
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v_c_3698_; lean_object* v___x_3699_; 
v___x_3693_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__2);
v___x_3694_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg___closed__5);
v___x_3695_ = l_Lean_Options_empty;
v___x_3696_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3696_, 0, v___x_3690_);
lean_ctor_set(v___x_3696_, 1, v___x_3693_);
lean_ctor_set(v___x_3696_, 2, v___x_3694_);
lean_ctor_set(v___x_3696_, 3, v___x_3695_);
lean_inc(v_declHint_3681_);
v___x_3697_ = l_Lean_MessageData_ofConstName(v_declHint_3681_, v___x_3687_);
v_c_3698_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3698_, 0, v___x_3696_);
lean_ctor_set(v_c_3698_, 1, v___x_3697_);
v___x_3699_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3686_, v_declHint_3681_);
if (lean_obj_tag(v___x_3699_) == 0)
{
lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
lean_dec_ref(v_env_3686_);
lean_dec(v_declHint_3681_);
v___x_3700_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__1);
v___x_3701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3701_, 0, v___x_3700_);
lean_ctor_set(v___x_3701_, 1, v_c_3698_);
v___x_3702_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__3);
v___x_3703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3703_, 0, v___x_3701_);
lean_ctor_set(v___x_3703_, 1, v___x_3702_);
v___x_3704_ = l_Lean_MessageData_note(v___x_3703_);
v___x_3705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3705_, 0, v_msg_3680_);
lean_ctor_set(v___x_3705_, 1, v___x_3704_);
v___x_3706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
return v___x_3706_;
}
else
{
lean_object* v_val_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3741_; 
v_val_3707_ = lean_ctor_get(v___x_3699_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3699_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3709_ = v___x_3699_;
v_isShared_3710_ = v_isSharedCheck_3741_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_val_3707_);
lean_dec(v___x_3699_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3741_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v_mod_3713_; uint8_t v___x_3714_; 
v___x_3711_ = l_Lean_Environment_header(v_env_3686_);
lean_dec_ref(v_env_3686_);
v___x_3712_ = l_Lean_EnvironmentHeader_moduleNames(v___x_3711_);
v_mod_3713_ = lean_array_get(v___x_3684_, v___x_3712_, v_val_3707_);
lean_dec(v_val_3707_);
lean_dec_ref(v___x_3712_);
v___x_3714_ = l_Lean_isPrivateName(v_declHint_3681_);
lean_dec(v_declHint_3681_);
if (v___x_3714_ == 0)
{
lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3726_; 
v___x_3715_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__5);
v___x_3716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3715_);
lean_ctor_set(v___x_3716_, 1, v_c_3698_);
v___x_3717_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__7);
v___x_3718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3716_);
lean_ctor_set(v___x_3718_, 1, v___x_3717_);
v___x_3719_ = l_Lean_MessageData_ofName(v_mod_3713_);
v___x_3720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3720_, 0, v___x_3718_);
lean_ctor_set(v___x_3720_, 1, v___x_3719_);
v___x_3721_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__9);
v___x_3722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3720_);
lean_ctor_set(v___x_3722_, 1, v___x_3721_);
v___x_3723_ = l_Lean_MessageData_note(v___x_3722_);
v___x_3724_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3724_, 0, v_msg_3680_);
lean_ctor_set(v___x_3724_, 1, v___x_3723_);
if (v_isShared_3710_ == 0)
{
lean_ctor_set_tag(v___x_3709_, 0);
lean_ctor_set(v___x_3709_, 0, v___x_3724_);
v___x_3726_ = v___x_3709_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v___x_3724_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
else
{
lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3739_; 
v___x_3728_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__1);
v___x_3729_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3729_, 0, v___x_3728_);
lean_ctor_set(v___x_3729_, 1, v_c_3698_);
v___x_3730_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__11);
v___x_3731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3729_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
v___x_3732_ = l_Lean_MessageData_ofName(v_mod_3713_);
v___x_3733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3731_);
lean_ctor_set(v___x_3733_, 1, v___x_3732_);
v___x_3734_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___closed__13);
v___x_3735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3733_);
lean_ctor_set(v___x_3735_, 1, v___x_3734_);
v___x_3736_ = l_Lean_MessageData_note(v___x_3735_);
v___x_3737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3737_, 0, v_msg_3680_);
lean_ctor_set(v___x_3737_, 1, v___x_3736_);
if (v_isShared_3710_ == 0)
{
lean_ctor_set_tag(v___x_3709_, 0);
lean_ctor_set(v___x_3709_, 0, v___x_3737_);
v___x_3739_ = v___x_3709_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v___x_3737_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3742_; 
lean_dec_ref(v_env_3686_);
lean_dec(v_declHint_3681_);
v___x_3742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3742_, 0, v_msg_3680_);
return v___x_3742_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_msg_3743_, lean_object* v_declHint_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_){
_start:
{
lean_object* v_res_3747_; 
v_res_3747_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg(v_msg_3743_, v_declHint_3744_, v___y_3745_);
lean_dec(v___y_3745_);
return v_res_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6(lean_object* v_msg_3748_, lean_object* v_declHint_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_){
_start:
{
lean_object* v___x_3753_; lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3763_; 
v___x_3753_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg(v_msg_3748_, v_declHint_3749_, v___y_3751_);
v_a_3754_ = lean_ctor_get(v___x_3753_, 0);
v_isSharedCheck_3763_ = !lean_is_exclusive(v___x_3753_);
if (v_isSharedCheck_3763_ == 0)
{
v___x_3756_ = v___x_3753_;
v_isShared_3757_ = v_isSharedCheck_3763_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3753_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3763_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3761_; 
v___x_3758_ = l_Lean_unknownIdentifierMessageTag;
v___x_3759_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3758_);
lean_ctor_set(v___x_3759_, 1, v_a_3754_);
if (v_isShared_3757_ == 0)
{
lean_ctor_set(v___x_3756_, 0, v___x_3759_);
v___x_3761_ = v___x_3756_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3762_; 
v_reuseFailAlloc_3762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3762_, 0, v___x_3759_);
v___x_3761_ = v_reuseFailAlloc_3762_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
return v___x_3761_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___boxed(lean_object* v_msg_3764_, lean_object* v_declHint_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_){
_start:
{
lean_object* v_res_3769_; 
v_res_3769_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6(v_msg_3764_, v_declHint_3765_, v___y_3766_, v___y_3767_);
lean_dec(v___y_3767_);
lean_dec_ref(v___y_3766_);
return v_res_3769_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_ref_3770_, lean_object* v_msg_3771_, lean_object* v_declHint_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_){
_start:
{
lean_object* v___x_3776_; lean_object* v_a_3777_; lean_object* v___x_3778_; 
v___x_3776_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6(v_msg_3771_, v_declHint_3772_, v___y_3773_, v___y_3774_);
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
lean_inc(v_a_3777_);
lean_dec_ref(v___x_3776_);
v___x_3778_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg(v_ref_3770_, v_a_3777_, v___y_3773_, v___y_3774_);
return v___x_3778_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_ref_3779_, lean_object* v_msg_3780_, lean_object* v_declHint_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_){
_start:
{
lean_object* v_res_3785_; 
v_res_3785_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_3779_, v_msg_3780_, v_declHint_3781_, v___y_3782_, v___y_3783_);
lean_dec(v___y_3783_);
lean_dec_ref(v___y_3782_);
lean_dec(v_ref_3779_);
return v_res_3785_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_3787_; lean_object* v___x_3788_; 
v___x_3787_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___closed__0));
v___x_3788_ = l_Lean_stringToMessageData(v___x_3787_);
return v___x_3788_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_ref_3789_, lean_object* v_constName_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_){
_start:
{
lean_object* v___x_3794_; uint8_t v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; 
v___x_3794_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___closed__1);
v___x_3795_ = 0;
lean_inc(v_constName_3790_);
v___x_3796_ = l_Lean_MessageData_ofConstName(v_constName_3790_, v___x_3795_);
v___x_3797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3794_);
lean_ctor_set(v___x_3797_, 1, v___x_3796_);
v___x_3798_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkMatchOld_mkAlts_spec__0___closed__1);
v___x_3799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3797_);
lean_ctor_set(v___x_3799_, 1, v___x_3798_);
v___x_3800_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_3789_, v___x_3799_, v_constName_3790_, v___y_3791_, v___y_3792_);
return v___x_3800_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_ref_3801_, lean_object* v_constName_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_){
_start:
{
lean_object* v_res_3806_; 
v_res_3806_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg(v_ref_3801_, v_constName_3802_, v___y_3803_, v___y_3804_);
lean_dec(v___y_3804_);
lean_dec_ref(v___y_3803_);
lean_dec(v_ref_3801_);
return v_res_3806_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_){
_start:
{
lean_object* v___x_3811_; 
v___x_3811_ = l_Lean_Elab_Command_getRef___redArg(v___y_3808_);
if (lean_obj_tag(v___x_3811_) == 0)
{
lean_object* v_a_3812_; lean_object* v___x_3813_; 
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
lean_inc(v_a_3812_);
lean_dec_ref_known(v___x_3811_, 1);
v___x_3813_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg(v_a_3812_, v_constName_3807_, v___y_3808_, v___y_3809_);
lean_dec(v_a_3812_);
return v___x_3813_;
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3821_; 
lean_dec(v_constName_3807_);
v_a_3814_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3816_ = v___x_3811_;
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3811_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3819_; 
if (v_isShared_3817_ == 0)
{
v___x_3819_ = v___x_3816_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_a_3814_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_){
_start:
{
lean_object* v_res_3826_; 
v_res_3826_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1___redArg(v_constName_3822_, v___y_3823_, v___y_3824_);
lean_dec(v___y_3824_);
lean_dec_ref(v___y_3823_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0(lean_object* v_constName_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_){
_start:
{
lean_object* v___x_3831_; lean_object* v_env_3832_; uint8_t v___x_3833_; lean_object* v___x_3834_; 
v___x_3831_ = lean_st_ref_get(v___y_3829_);
v_env_3832_ = lean_ctor_get(v___x_3831_, 0);
lean_inc_ref(v_env_3832_);
lean_dec(v___x_3831_);
v___x_3833_ = 0;
lean_inc(v_constName_3827_);
v___x_3834_ = l_Lean_Environment_find_x3f(v_env_3832_, v_constName_3827_, v___x_3833_);
if (lean_obj_tag(v___x_3834_) == 0)
{
lean_object* v___x_3835_; 
v___x_3835_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1___redArg(v_constName_3827_, v___y_3828_, v___y_3829_);
return v___x_3835_;
}
else
{
lean_object* v_val_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3843_; 
lean_dec(v_constName_3827_);
v_val_3836_ = lean_ctor_get(v___x_3834_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3834_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3838_ = v___x_3834_;
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_val_3836_);
lean_dec(v___x_3834_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3841_; 
if (v_isShared_3839_ == 0)
{
lean_ctor_set_tag(v___x_3838_, 0);
v___x_3841_ = v___x_3838_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_val_3836_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0___boxed(lean_object* v_constName_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_){
_start:
{
lean_object* v_res_3848_; 
v_res_3848_ = l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0(v_constName_3844_, v___y_3845_, v___y_3846_);
lean_dec(v___y_3846_);
lean_dec_ref(v___y_3845_);
return v_res_3848_;
}
}
LEAN_EXPORT lean_object* l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__1(uint8_t v___x_3849_, lean_object* v_x_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
if (lean_obj_tag(v_x_3850_) == 0)
{
uint8_t v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3854_ = 1;
v___x_3855_ = lean_box(v___x_3854_);
v___x_3856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3856_, 0, v___x_3855_);
return v___x_3856_;
}
else
{
lean_object* v_head_3857_; lean_object* v_tail_3858_; lean_object* v___y_3860_; uint8_t v_a_3861_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
v_head_3857_ = lean_ctor_get(v_x_3850_, 0);
lean_inc(v_head_3857_);
v_tail_3858_ = lean_ctor_get(v_x_3850_, 1);
lean_inc(v_tail_3858_);
lean_dec_ref_known(v_x_3850_, 2);
v___x_3863_ = lean_unsigned_to_nat(0u);
v___x_3864_ = l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0(v_head_3857_, v___y_3851_, v___y_3852_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3880_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3867_ = v___x_3864_;
v_isShared_3868_ = v_isSharedCheck_3880_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_a_3865_);
lean_dec(v___x_3864_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3880_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
if (lean_obj_tag(v_a_3865_) == 6)
{
lean_object* v_val_3869_; lean_object* v_numFields_3870_; uint8_t v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3874_; 
v_val_3869_ = lean_ctor_get(v_a_3865_, 0);
lean_inc_ref(v_val_3869_);
lean_dec_ref_known(v_a_3865_, 1);
v_numFields_3870_ = lean_ctor_get(v_val_3869_, 4);
lean_inc(v_numFields_3870_);
lean_dec_ref(v_val_3869_);
v___x_3871_ = lean_nat_dec_eq(v_numFields_3870_, v___x_3863_);
lean_dec(v_numFields_3870_);
v___x_3872_ = lean_box(v___x_3871_);
if (v_isShared_3868_ == 0)
{
lean_ctor_set(v___x_3867_, 0, v___x_3872_);
v___x_3874_ = v___x_3867_;
goto v_reusejp_3873_;
}
else
{
lean_object* v_reuseFailAlloc_3875_; 
v_reuseFailAlloc_3875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3875_, 0, v___x_3872_);
v___x_3874_ = v_reuseFailAlloc_3875_;
goto v_reusejp_3873_;
}
v_reusejp_3873_:
{
v___y_3860_ = v___x_3874_;
v_a_3861_ = v___x_3871_;
goto v___jp_3859_;
}
}
else
{
lean_object* v___x_3876_; lean_object* v___x_3878_; 
lean_dec(v_a_3865_);
v___x_3876_ = lean_box(v___x_3849_);
if (v_isShared_3868_ == 0)
{
lean_ctor_set(v___x_3867_, 0, v___x_3876_);
v___x_3878_ = v___x_3867_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v___x_3876_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
v___y_3860_ = v___x_3878_;
v_a_3861_ = v___x_3849_;
goto v___jp_3859_;
}
}
}
}
else
{
lean_object* v_a_3881_; lean_object* v___x_3883_; uint8_t v_isShared_3884_; uint8_t v_isSharedCheck_3888_; 
lean_dec(v_tail_3858_);
v_a_3881_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3888_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3888_ == 0)
{
v___x_3883_ = v___x_3864_;
v_isShared_3884_ = v_isSharedCheck_3888_;
goto v_resetjp_3882_;
}
else
{
lean_inc(v_a_3881_);
lean_dec(v___x_3864_);
v___x_3883_ = lean_box(0);
v_isShared_3884_ = v_isSharedCheck_3888_;
goto v_resetjp_3882_;
}
v_resetjp_3882_:
{
lean_object* v___x_3886_; 
if (v_isShared_3884_ == 0)
{
v___x_3886_ = v___x_3883_;
goto v_reusejp_3885_;
}
else
{
lean_object* v_reuseFailAlloc_3887_; 
v_reuseFailAlloc_3887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3887_, 0, v_a_3881_);
v___x_3886_ = v_reuseFailAlloc_3887_;
goto v_reusejp_3885_;
}
v_reusejp_3885_:
{
return v___x_3886_;
}
}
}
v___jp_3859_:
{
if (v_a_3861_ == 0)
{
lean_dec(v_tail_3858_);
return v___y_3860_;
}
else
{
lean_dec_ref(v___y_3860_);
v_x_3850_ = v_tail_3858_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__1___boxed(lean_object* v___x_3889_, lean_object* v_x_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_){
_start:
{
uint8_t v___x_4463__boxed_3894_; lean_object* v_res_3895_; 
v___x_4463__boxed_3894_ = lean_unbox(v___x_3889_);
v_res_3895_ = l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__1(v___x_4463__boxed_3894_, v_x_3890_, v___y_3891_, v___y_3892_);
lean_dec(v___y_3892_);
lean_dec_ref(v___y_3891_);
return v_res_3895_;
}
}
LEAN_EXPORT lean_object* l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0(lean_object* v_declName_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_){
_start:
{
lean_object* v___x_3900_; 
v___x_3900_ = l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0(v_declName_3896_, v___y_3897_, v___y_3898_);
if (lean_obj_tag(v___x_3900_) == 0)
{
lean_object* v_a_3901_; lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3956_; 
v_a_3901_ = lean_ctor_get(v___x_3900_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3903_ = v___x_3900_;
v_isShared_3904_ = v_isSharedCheck_3956_;
goto v_resetjp_3902_;
}
else
{
lean_inc(v_a_3901_);
lean_dec(v___x_3900_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3956_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
if (lean_obj_tag(v_a_3901_) == 5)
{
lean_object* v_val_3905_; lean_object* v_toConstantVal_3906_; lean_object* v_numParams_3907_; lean_object* v_numIndices_3908_; lean_object* v_ctors_3909_; uint8_t v_isRec_3910_; uint8_t v_isUnsafe_3911_; lean_object* v_type_3912_; uint8_t v___x_3913_; 
v_val_3905_ = lean_ctor_get(v_a_3901_, 0);
lean_inc_ref(v_val_3905_);
lean_dec_ref_known(v_a_3901_, 1);
v_toConstantVal_3906_ = lean_ctor_get(v_val_3905_, 0);
v_numParams_3907_ = lean_ctor_get(v_val_3905_, 1);
lean_inc(v_numParams_3907_);
v_numIndices_3908_ = lean_ctor_get(v_val_3905_, 2);
lean_inc(v_numIndices_3908_);
v_ctors_3909_ = lean_ctor_get(v_val_3905_, 4);
lean_inc(v_ctors_3909_);
v_isRec_3910_ = lean_ctor_get_uint8(v_val_3905_, sizeof(void*)*6);
v_isUnsafe_3911_ = lean_ctor_get_uint8(v_val_3905_, sizeof(void*)*6 + 1);
v_type_3912_ = lean_ctor_get(v_toConstantVal_3906_, 2);
v___x_3913_ = l_Lean_Expr_isProp(v_type_3912_);
if (v___x_3913_ == 0)
{
lean_object* v___x_3914_; lean_object* v___x_3915_; uint8_t v___x_3916_; 
v___x_3914_ = l_Lean_InductiveVal_numTypeFormers(v_val_3905_);
lean_dec_ref(v_val_3905_);
v___x_3915_ = lean_unsigned_to_nat(1u);
v___x_3916_ = lean_nat_dec_eq(v___x_3914_, v___x_3915_);
lean_dec(v___x_3914_);
if (v___x_3916_ == 0)
{
lean_object* v___x_3917_; lean_object* v___x_3919_; 
lean_dec(v_ctors_3909_);
lean_dec(v_numIndices_3908_);
lean_dec(v_numParams_3907_);
v___x_3917_ = lean_box(v___x_3916_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3917_);
v___x_3919_ = v___x_3903_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v___x_3917_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
else
{
lean_object* v___x_3921_; uint8_t v___x_3922_; 
v___x_3921_ = lean_unsigned_to_nat(0u);
v___x_3922_ = lean_nat_dec_eq(v_numIndices_3908_, v___x_3921_);
lean_dec(v_numIndices_3908_);
if (v___x_3922_ == 0)
{
lean_object* v___x_3923_; lean_object* v___x_3925_; 
lean_dec(v_ctors_3909_);
lean_dec(v_numParams_3907_);
v___x_3923_ = lean_box(v___x_3922_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3923_);
v___x_3925_ = v___x_3903_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v___x_3923_);
v___x_3925_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
return v___x_3925_;
}
}
else
{
uint8_t v___x_3927_; 
v___x_3927_ = lean_nat_dec_eq(v_numParams_3907_, v___x_3921_);
lean_dec(v_numParams_3907_);
if (v___x_3927_ == 0)
{
lean_object* v___x_3928_; lean_object* v___x_3930_; 
lean_dec(v_ctors_3909_);
v___x_3928_ = lean_box(v___x_3927_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3928_);
v___x_3930_ = v___x_3903_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v___x_3928_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
}
}
else
{
uint8_t v___x_3932_; 
v___x_3932_ = l_List_isEmpty___redArg(v_ctors_3909_);
if (v___x_3932_ == 0)
{
if (v_isRec_3910_ == 0)
{
if (v_isUnsafe_3911_ == 0)
{
lean_object* v___x_3933_; 
lean_del_object(v___x_3903_);
v___x_3933_ = l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__1(v_isUnsafe_3911_, v_ctors_3909_, v___y_3897_, v___y_3898_);
return v___x_3933_;
}
else
{
lean_object* v___x_3934_; lean_object* v___x_3936_; 
lean_dec(v_ctors_3909_);
v___x_3934_ = lean_box(v_isRec_3910_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3934_);
v___x_3936_ = v___x_3903_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v___x_3934_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
}
}
}
else
{
lean_object* v___x_3938_; lean_object* v___x_3940_; 
lean_dec(v_ctors_3909_);
v___x_3938_ = lean_box(v___x_3932_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3938_);
v___x_3940_ = v___x_3903_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v___x_3938_);
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
lean_object* v___x_3942_; lean_object* v___x_3944_; 
lean_dec(v_ctors_3909_);
v___x_3942_ = lean_box(v___x_3913_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3942_);
v___x_3944_ = v___x_3903_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v___x_3942_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
return v___x_3944_;
}
}
}
}
}
}
else
{
uint8_t v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3949_; 
lean_dec(v_ctors_3909_);
lean_dec(v_numIndices_3908_);
lean_dec(v_numParams_3907_);
lean_dec_ref(v_val_3905_);
v___x_3946_ = 0;
v___x_3947_ = lean_box(v___x_3946_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3947_);
v___x_3949_ = v___x_3903_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v___x_3947_);
v___x_3949_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
return v___x_3949_;
}
}
}
else
{
uint8_t v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3954_; 
lean_dec(v_a_3901_);
v___x_3951_ = 0;
v___x_3952_ = lean_box(v___x_3951_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3952_);
v___x_3954_ = v___x_3903_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v___x_3952_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
return v___x_3954_;
}
}
}
}
else
{
lean_object* v_a_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3964_; 
v_a_3957_ = lean_ctor_get(v___x_3900_, 0);
v_isSharedCheck_3964_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3964_ == 0)
{
v___x_3959_ = v___x_3900_;
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_a_3957_);
lean_dec(v___x_3900_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3962_; 
if (v_isShared_3960_ == 0)
{
v___x_3962_ = v___x_3959_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v_a_3957_);
v___x_3962_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
return v___x_3962_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0___boxed(lean_object* v_declName_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_){
_start:
{
lean_object* v_res_3969_; 
v_res_3969_ = l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0(v_declName_3965_, v___y_3966_, v___y_3967_);
lean_dec(v___y_3967_);
lean_dec_ref(v___y_3966_);
return v_res_3969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__1(lean_object* v_as_3970_, size_t v_i_3971_, size_t v_stop_3972_, lean_object* v_b_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_){
_start:
{
uint8_t v___x_3977_; 
v___x_3977_ = lean_usize_dec_eq(v_i_3971_, v_stop_3972_);
if (v___x_3977_ == 0)
{
lean_object* v___x_3978_; lean_object* v___x_3979_; 
v___x_3978_ = lean_array_uget_borrowed(v_as_3970_, v_i_3971_);
lean_inc(v___x_3978_);
v___x_3979_ = l_Lean_Elab_Command_elabCommand(v___x_3978_, v___y_3974_, v___y_3975_);
if (lean_obj_tag(v___x_3979_) == 0)
{
lean_object* v_a_3980_; size_t v___x_3981_; size_t v___x_3982_; 
v_a_3980_ = lean_ctor_get(v___x_3979_, 0);
lean_inc(v_a_3980_);
lean_dec_ref_known(v___x_3979_, 1);
v___x_3981_ = ((size_t)1ULL);
v___x_3982_ = lean_usize_add(v_i_3971_, v___x_3981_);
v_i_3971_ = v___x_3982_;
v_b_3973_ = v_a_3980_;
goto _start;
}
else
{
return v___x_3979_;
}
}
else
{
lean_object* v___x_3984_; 
v___x_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3984_, 0, v_b_3973_);
return v___x_3984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__1___boxed(lean_object* v_as_3985_, lean_object* v_i_3986_, lean_object* v_stop_3987_, lean_object* v_b_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_){
_start:
{
size_t v_i_boxed_3992_; size_t v_stop_boxed_3993_; lean_object* v_res_3994_; 
v_i_boxed_3992_ = lean_unbox_usize(v_i_3986_);
lean_dec(v_i_3986_);
v_stop_boxed_3993_ = lean_unbox_usize(v_stop_3987_);
lean_dec(v_stop_3987_);
v_res_3994_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__1(v_as_3985_, v_i_boxed_3992_, v_stop_boxed_3993_, v_b_3988_, v___y_3989_, v___y_3990_);
lean_dec(v___y_3990_);
lean_dec_ref(v___y_3989_);
lean_dec_ref(v_as_3985_);
return v_res_3994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__1(lean_object* v_declName_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v___x_3999_; 
lean_inc(v_declName_3995_);
v___x_3999_ = l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0(v_declName_3995_, v___y_3996_, v___y_3997_);
if (lean_obj_tag(v___x_3999_) == 0)
{
lean_object* v_a_4000_; lean_object* v___y_4001_; lean_object* v___x_4002_; 
v_a_4000_ = lean_ctor_get(v___x_3999_, 0);
lean_inc(v_a_4000_);
lean_dec_ref_known(v___x_3999_, 1);
v___y_4001_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__0___boxed), 9, 2);
lean_closure_set(v___y_4001_, 0, v_a_4000_);
lean_closure_set(v___y_4001_, 1, v_declName_3995_);
v___x_4002_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___y_4001_, v___y_3996_, v___y_3997_);
if (lean_obj_tag(v___x_4002_) == 0)
{
lean_object* v_a_4003_; lean_object* v___x_4005_; uint8_t v_isShared_4006_; uint8_t v_isSharedCheck_4024_; 
v_a_4003_ = lean_ctor_get(v___x_4002_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_4002_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4005_ = v___x_4002_;
v_isShared_4006_ = v_isSharedCheck_4024_;
goto v_resetjp_4004_;
}
else
{
lean_inc(v_a_4003_);
lean_dec(v___x_4002_);
v___x_4005_ = lean_box(0);
v_isShared_4006_ = v_isSharedCheck_4024_;
goto v_resetjp_4004_;
}
v_resetjp_4004_:
{
lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; uint8_t v___x_4010_; 
v___x_4007_ = lean_unsigned_to_nat(0u);
v___x_4008_ = lean_array_get_size(v_a_4003_);
v___x_4009_ = lean_box(0);
v___x_4010_ = lean_nat_dec_lt(v___x_4007_, v___x_4008_);
if (v___x_4010_ == 0)
{
lean_object* v___x_4012_; 
lean_dec(v_a_4003_);
if (v_isShared_4006_ == 0)
{
lean_ctor_set(v___x_4005_, 0, v___x_4009_);
v___x_4012_ = v___x_4005_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v___x_4009_);
v___x_4012_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
return v___x_4012_;
}
}
else
{
uint8_t v___x_4014_; 
v___x_4014_ = lean_nat_dec_le(v___x_4008_, v___x_4008_);
if (v___x_4014_ == 0)
{
if (v___x_4010_ == 0)
{
lean_object* v___x_4016_; 
lean_dec(v_a_4003_);
if (v_isShared_4006_ == 0)
{
lean_ctor_set(v___x_4005_, 0, v___x_4009_);
v___x_4016_ = v___x_4005_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v___x_4009_);
v___x_4016_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
return v___x_4016_;
}
}
else
{
size_t v___x_4018_; size_t v___x_4019_; lean_object* v___x_4020_; 
lean_del_object(v___x_4005_);
v___x_4018_ = ((size_t)0ULL);
v___x_4019_ = lean_usize_of_nat(v___x_4008_);
v___x_4020_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__1(v_a_4003_, v___x_4018_, v___x_4019_, v___x_4009_, v___y_3996_, v___y_3997_);
lean_dec(v_a_4003_);
return v___x_4020_;
}
}
else
{
size_t v___x_4021_; size_t v___x_4022_; lean_object* v___x_4023_; 
lean_del_object(v___x_4005_);
v___x_4021_ = ((size_t)0ULL);
v___x_4022_ = lean_usize_of_nat(v___x_4008_);
v___x_4023_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__1(v_a_4003_, v___x_4021_, v___x_4022_, v___x_4009_, v___y_3996_, v___y_3997_);
lean_dec(v_a_4003_);
return v___x_4023_;
}
}
}
}
else
{
lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4032_; 
v_a_4025_ = lean_ctor_get(v___x_4002_, 0);
v_isSharedCheck_4032_ = !lean_is_exclusive(v___x_4002_);
if (v_isSharedCheck_4032_ == 0)
{
v___x_4027_ = v___x_4002_;
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_dec(v___x_4002_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v___x_4030_; 
if (v_isShared_4028_ == 0)
{
v___x_4030_ = v___x_4027_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v_a_4025_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
}
}
else
{
lean_object* v_a_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4040_; 
lean_dec(v_declName_3995_);
v_a_4033_ = lean_ctor_get(v___x_3999_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4035_ = v___x_3999_;
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_a_4033_);
lean_dec(v___x_3999_);
v___x_4035_ = lean_box(0);
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
v_resetjp_4034_:
{
lean_object* v___x_4038_; 
if (v_isShared_4036_ == 0)
{
v___x_4038_ = v___x_4035_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v_a_4033_);
v___x_4038_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
return v___x_4038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__1___boxed(lean_object* v_declName_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_){
_start:
{
lean_object* v_res_4045_; 
v_res_4045_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__1(v_declName_4041_, v___y_4042_, v___y_4043_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
return v_res_4045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance(lean_object* v_declName_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
lean_object* v___f_4050_; lean_object* v___x_4051_; 
lean_inc(v_declName_4046_);
v___f_4050_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___lam__1___boxed), 4, 1);
lean_closure_set(v___f_4050_, 0, v_declName_4046_);
v___x_4051_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(v_declName_4046_, v___f_4050_, v___y_4047_, v___y_4048_);
return v___x_4051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance___boxed(lean_object* v_declName_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_){
_start:
{
lean_object* v_res_4056_; 
v_res_4056_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance(v_declName_4052_, v___y_4053_, v___y_4054_);
lean_dec(v___y_4054_);
lean_dec_ref(v___y_4053_);
return v_res_4056_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4057_, lean_object* v_constName_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_){
_start:
{
lean_object* v___x_4062_; 
v___x_4062_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1___redArg(v_constName_4058_, v___y_4059_, v___y_4060_);
return v___x_4062_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4063_, lean_object* v_constName_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_){
_start:
{
lean_object* v_res_4068_; 
v_res_4068_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1(v_00_u03b1_4063_, v_constName_4064_, v___y_4065_, v___y_4066_);
lean_dec(v___y_4066_);
lean_dec_ref(v___y_4065_);
return v_res_4068_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_4069_, lean_object* v_ref_4070_, lean_object* v_constName_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_){
_start:
{
lean_object* v___x_4075_; 
v___x_4075_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___redArg(v_ref_4070_, v_constName_4071_, v___y_4072_, v___y_4073_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_4076_, lean_object* v_ref_4077_, lean_object* v_constName_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_){
_start:
{
lean_object* v_res_4082_; 
v_res_4082_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3(v_00_u03b1_4076_, v_ref_4077_, v_constName_4078_, v___y_4079_, v___y_4080_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec(v_ref_4077_);
return v_res_4082_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b1_4083_, lean_object* v_ref_4084_, lean_object* v_msg_4085_, lean_object* v_declHint_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_){
_start:
{
lean_object* v___x_4090_; 
v___x_4090_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_4084_, v_msg_4085_, v_declHint_4086_, v___y_4087_, v___y_4088_);
return v___x_4090_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b1_4091_, lean_object* v_ref_4092_, lean_object* v_msg_4093_, lean_object* v_declHint_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_){
_start:
{
lean_object* v_res_4098_; 
v_res_4098_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5(v_00_u03b1_4091_, v_ref_4092_, v_msg_4093_, v_declHint_4094_, v___y_4095_, v___y_4096_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
lean_dec(v_ref_4092_);
return v_res_4098_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7(lean_object* v_msg_4099_, lean_object* v_declHint_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_){
_start:
{
lean_object* v___x_4104_; 
v___x_4104_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___redArg(v_msg_4099_, v_declHint_4100_, v___y_4102_);
return v___x_4104_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7___boxed(lean_object* v_msg_4105_, lean_object* v_declHint_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v_res_4110_; 
v_res_4110_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6_spec__7(v_msg_4105_, v_declHint_4106_, v___y_4107_, v___y_4108_);
lean_dec(v___y_4108_);
lean_dec_ref(v___y_4107_);
return v_res_4110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7(lean_object* v_00_u03b1_4111_, lean_object* v_ref_4112_, lean_object* v_msg_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_){
_start:
{
lean_object* v___x_4117_; 
v___x_4117_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg(v_ref_4112_, v_msg_4113_, v___y_4114_, v___y_4115_);
return v___x_4117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03b1_4118_, lean_object* v_ref_4119_, lean_object* v_msg_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_){
_start:
{
lean_object* v_res_4124_; 
v_res_4124_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7(v_00_u03b1_4118_, v_ref_4119_, v_msg_4120_, v___y_4121_, v___y_4122_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
lean_dec(v_ref_4119_);
return v_res_4124_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10(lean_object* v_msgData_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_){
_start:
{
lean_object* v___x_4129_; 
v___x_4129_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(v_msgData_4125_, v___y_4127_);
return v___x_4129_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10___boxed(lean_object* v_msgData_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_){
_start:
{
lean_object* v_res_4134_; 
v_res_4134_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__10(v_msgData_4130_, v___y_4131_, v___y_4132_);
lean_dec(v___y_4132_);
lean_dec_ref(v___y_4131_);
return v_res_4134_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9(lean_object* v_00_u03b1_4135_, lean_object* v_msg_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_){
_start:
{
lean_object* v___x_4140_; 
v___x_4140_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9___redArg(v_msg_4136_, v___y_4137_, v___y_4138_);
return v___x_4140_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9___boxed(lean_object* v_00_u03b1_4141_, lean_object* v_msg_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9(v_00_u03b1_4141_, v_msg_4142_, v___y_4143_, v___y_4144_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11(lean_object* v_msgData_4147_, lean_object* v_macroStack_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_){
_start:
{
lean_object* v___x_4152_; 
v___x_4152_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11___redArg(v_msgData_4147_, v_macroStack_4148_, v___y_4150_);
return v___x_4152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11___boxed(lean_object* v_msgData_4153_, lean_object* v_macroStack_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_){
_start:
{
lean_object* v_res_4158_; 
v_res_4158_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7_spec__9_spec__11(v_msgData_4153_, v_macroStack_4154_, v___y_4155_, v___y_4156_);
lean_dec(v___y_4156_);
lean_dec_ref(v___y_4155_);
return v_res_4158_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1___redArg(lean_object* v_declName_4159_, lean_object* v___y_4160_){
_start:
{
lean_object* v___x_4162_; lean_object* v_env_4163_; uint8_t v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v___x_4162_ = lean_st_ref_get(v___y_4160_);
v_env_4163_ = lean_ctor_get(v___x_4162_, 0);
lean_inc_ref(v_env_4163_);
lean_dec(v___x_4162_);
v___x_4164_ = l_Lean_isInductiveCore(v_env_4163_, v_declName_4159_);
v___x_4165_ = lean_box(v___x_4164_);
v___x_4166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4166_, 0, v___x_4165_);
return v___x_4166_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1___redArg___boxed(lean_object* v_declName_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_){
_start:
{
lean_object* v_res_4170_; 
v_res_4170_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1___redArg(v_declName_4167_, v___y_4168_);
lean_dec(v___y_4168_);
return v_res_4170_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1(lean_object* v_declName_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_){
_start:
{
lean_object* v___x_4175_; 
v___x_4175_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1___redArg(v_declName_4171_, v___y_4173_);
return v___x_4175_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1___boxed(lean_object* v_declName_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_){
_start:
{
lean_object* v_res_4180_; 
v_res_4180_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1(v_declName_4176_, v___y_4177_, v___y_4178_);
lean_dec(v___y_4178_);
lean_dec_ref(v___y_4177_);
return v_res_4180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___lam__0(uint8_t v_____do__lift_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_){
_start:
{
if (v_____do__lift_4181_ == 0)
{
uint8_t v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; 
v___x_4185_ = 1;
v___x_4186_ = lean_box(v___x_4185_);
v___x_4187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4187_, 0, v___x_4186_);
return v___x_4187_;
}
else
{
uint8_t v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; 
v___x_4188_ = 0;
v___x_4189_ = lean_box(v___x_4188_);
v___x_4190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4190_, 0, v___x_4189_);
return v___x_4190_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___lam__0___boxed(lean_object* v_____do__lift_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_){
_start:
{
uint8_t v_____do__lift_2190__boxed_4195_; lean_object* v_res_4196_; 
v_____do__lift_2190__boxed_4195_ = lean_unbox(v_____do__lift_4191_);
v_res_4196_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___lam__0(v_____do__lift_2190__boxed_4195_, v___y_4192_, v___y_4193_);
lean_dec(v___y_4193_);
lean_dec_ref(v___y_4192_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__2(lean_object* v_as_4197_, size_t v_i_4198_, size_t v_stop_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_){
_start:
{
uint8_t v___x_4207_; 
v___x_4207_ = lean_usize_dec_eq(v_i_4198_, v_stop_4199_);
if (v___x_4207_ == 0)
{
uint8_t v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4208_ = 1;
v___x_4209_ = lean_array_uget_borrowed(v_as_4197_, v_i_4198_);
lean_inc(v___x_4209_);
v___x_4210_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__1___redArg(v___x_4209_, v___y_4201_);
if (lean_obj_tag(v___x_4210_) == 0)
{
lean_object* v_a_4211_; lean_object* v___x_4213_; uint8_t v_isShared_4214_; uint8_t v_isSharedCheck_4220_; 
v_a_4211_ = lean_ctor_get(v___x_4210_, 0);
v_isSharedCheck_4220_ = !lean_is_exclusive(v___x_4210_);
if (v_isSharedCheck_4220_ == 0)
{
v___x_4213_ = v___x_4210_;
v_isShared_4214_ = v_isSharedCheck_4220_;
goto v_resetjp_4212_;
}
else
{
lean_inc(v_a_4211_);
lean_dec(v___x_4210_);
v___x_4213_ = lean_box(0);
v_isShared_4214_ = v_isSharedCheck_4220_;
goto v_resetjp_4212_;
}
v_resetjp_4212_:
{
uint8_t v___x_4215_; 
v___x_4215_ = lean_unbox(v_a_4211_);
lean_dec(v_a_4211_);
if (v___x_4215_ == 0)
{
lean_object* v___x_4216_; lean_object* v___x_4218_; 
v___x_4216_ = lean_box(v___x_4208_);
if (v_isShared_4214_ == 0)
{
lean_ctor_set(v___x_4213_, 0, v___x_4216_);
v___x_4218_ = v___x_4213_;
goto v_reusejp_4217_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v___x_4216_);
v___x_4218_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4217_;
}
v_reusejp_4217_:
{
return v___x_4218_;
}
}
else
{
lean_del_object(v___x_4213_);
goto v___jp_4203_;
}
}
}
else
{
if (lean_obj_tag(v___x_4210_) == 0)
{
lean_object* v_a_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4230_; 
v_a_4221_ = lean_ctor_get(v___x_4210_, 0);
v_isSharedCheck_4230_ = !lean_is_exclusive(v___x_4210_);
if (v_isSharedCheck_4230_ == 0)
{
v___x_4223_ = v___x_4210_;
v_isShared_4224_ = v_isSharedCheck_4230_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_a_4221_);
lean_dec(v___x_4210_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4230_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
uint8_t v___x_4225_; 
v___x_4225_ = lean_unbox(v_a_4221_);
lean_dec(v_a_4221_);
if (v___x_4225_ == 0)
{
lean_del_object(v___x_4223_);
goto v___jp_4203_;
}
else
{
lean_object* v___x_4226_; lean_object* v___x_4228_; 
v___x_4226_ = lean_box(v___x_4208_);
if (v_isShared_4224_ == 0)
{
lean_ctor_set_tag(v___x_4223_, 0);
lean_ctor_set(v___x_4223_, 0, v___x_4226_);
v___x_4228_ = v___x_4223_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v___x_4226_);
v___x_4228_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
return v___x_4228_;
}
}
}
}
else
{
return v___x_4210_;
}
}
}
else
{
uint8_t v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; 
v___x_4231_ = 0;
v___x_4232_ = lean_box(v___x_4231_);
v___x_4233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4233_, 0, v___x_4232_);
return v___x_4233_;
}
v___jp_4203_:
{
size_t v___x_4204_; size_t v___x_4205_; 
v___x_4204_ = ((size_t)1ULL);
v___x_4205_ = lean_usize_add(v_i_4198_, v___x_4204_);
v_i_4198_ = v___x_4205_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__2___boxed(lean_object* v_as_4234_, lean_object* v_i_4235_, lean_object* v_stop_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_){
_start:
{
size_t v_i_boxed_4240_; size_t v_stop_boxed_4241_; lean_object* v_res_4242_; 
v_i_boxed_4240_ = lean_unbox_usize(v_i_4235_);
lean_dec(v_i_4235_);
v_stop_boxed_4241_ = lean_unbox_usize(v_stop_4236_);
lean_dec(v_stop_4236_);
v_res_4242_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__2(v_as_4234_, v_i_boxed_4240_, v_stop_boxed_4241_, v___y_4237_, v___y_4238_);
lean_dec(v___y_4238_);
lean_dec_ref(v___y_4237_);
lean_dec_ref(v_as_4234_);
return v_res_4242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__0(lean_object* v_as_4243_, size_t v_sz_4244_, size_t v_i_4245_, lean_object* v_b_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_){
_start:
{
uint8_t v___x_4250_; 
v___x_4250_ = lean_usize_dec_lt(v_i_4245_, v_sz_4244_);
if (v___x_4250_ == 0)
{
lean_object* v___x_4251_; 
v___x_4251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4251_, 0, v_b_4246_);
return v___x_4251_;
}
else
{
lean_object* v___x_4252_; lean_object* v_a_4253_; lean_object* v___x_4254_; 
v___x_4252_ = lean_box(0);
v_a_4253_ = lean_array_uget_borrowed(v_as_4243_, v_i_4245_);
lean_inc(v_a_4253_);
v___x_4254_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstance(v_a_4253_, v___y_4247_, v___y_4248_);
if (lean_obj_tag(v___x_4254_) == 0)
{
size_t v___x_4255_; size_t v___x_4256_; 
lean_dec_ref_known(v___x_4254_, 1);
v___x_4255_ = ((size_t)1ULL);
v___x_4256_ = lean_usize_add(v_i_4245_, v___x_4255_);
v_i_4245_ = v___x_4256_;
v_b_4246_ = v___x_4252_;
goto _start;
}
else
{
return v___x_4254_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__0___boxed(lean_object* v_as_4258_, lean_object* v_sz_4259_, lean_object* v_i_4260_, lean_object* v_b_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_){
_start:
{
size_t v_sz_boxed_4265_; size_t v_i_boxed_4266_; lean_object* v_res_4267_; 
v_sz_boxed_4265_ = lean_unbox_usize(v_sz_4259_);
lean_dec(v_sz_4259_);
v_i_boxed_4266_ = lean_unbox_usize(v_i_4260_);
lean_dec(v_i_4260_);
v_res_4267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__0(v_as_4258_, v_sz_boxed_4265_, v_i_boxed_4266_, v_b_4261_, v___y_4262_, v___y_4263_);
lean_dec(v___y_4263_);
lean_dec_ref(v___y_4262_);
lean_dec_ref(v_as_4258_);
return v_res_4267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler(lean_object* v_declNames_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_){
_start:
{
lean_object* v___y_4296_; lean_object* v___x_4299_; lean_object* v___x_4300_; uint8_t v___x_4301_; 
v___x_4299_ = lean_unsigned_to_nat(0u);
v___x_4300_ = lean_array_get_size(v_declNames_4268_);
v___x_4301_ = lean_nat_dec_lt(v___x_4299_, v___x_4300_);
if (v___x_4301_ == 0)
{
lean_object* v___x_4302_; 
v___x_4302_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___lam__0(v___x_4301_, v___y_4269_, v___y_4270_);
v___y_4296_ = v___x_4302_;
goto v___jp_4295_;
}
else
{
if (v___x_4301_ == 0)
{
goto v___jp_4272_;
}
else
{
size_t v___x_4303_; size_t v___x_4304_; lean_object* v___x_4305_; 
v___x_4303_ = ((size_t)0ULL);
v___x_4304_ = lean_usize_of_nat(v___x_4300_);
v___x_4305_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__2(v_declNames_4268_, v___x_4303_, v___x_4304_, v___y_4269_, v___y_4270_);
if (lean_obj_tag(v___x_4305_) == 0)
{
lean_object* v_a_4306_; uint8_t v___x_4307_; lean_object* v___x_4308_; 
v_a_4306_ = lean_ctor_get(v___x_4305_, 0);
lean_inc(v_a_4306_);
lean_dec_ref_known(v___x_4305_, 1);
v___x_4307_ = lean_unbox(v_a_4306_);
lean_dec(v_a_4306_);
v___x_4308_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___lam__0(v___x_4307_, v___y_4269_, v___y_4270_);
v___y_4296_ = v___x_4308_;
goto v___jp_4295_;
}
else
{
v___y_4296_ = v___x_4305_;
goto v___jp_4295_;
}
}
}
v___jp_4272_:
{
uint8_t v___x_4273_; lean_object* v___x_4274_; size_t v_sz_4275_; size_t v___x_4276_; lean_object* v___x_4277_; 
v___x_4273_ = 1;
v___x_4274_ = lean_box(0);
v_sz_4275_ = lean_array_size(v_declNames_4268_);
v___x_4276_ = ((size_t)0ULL);
v___x_4277_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler_spec__0(v_declNames_4268_, v_sz_4275_, v___x_4276_, v___x_4274_, v___y_4269_, v___y_4270_);
if (lean_obj_tag(v___x_4277_) == 0)
{
lean_object* v___x_4279_; uint8_t v_isShared_4280_; uint8_t v_isSharedCheck_4285_; 
v_isSharedCheck_4285_ = !lean_is_exclusive(v___x_4277_);
if (v_isSharedCheck_4285_ == 0)
{
lean_object* v_unused_4286_; 
v_unused_4286_ = lean_ctor_get(v___x_4277_, 0);
lean_dec(v_unused_4286_);
v___x_4279_ = v___x_4277_;
v_isShared_4280_ = v_isSharedCheck_4285_;
goto v_resetjp_4278_;
}
else
{
lean_dec(v___x_4277_);
v___x_4279_ = lean_box(0);
v_isShared_4280_ = v_isSharedCheck_4285_;
goto v_resetjp_4278_;
}
v_resetjp_4278_:
{
lean_object* v___x_4281_; lean_object* v___x_4283_; 
v___x_4281_ = lean_box(v___x_4273_);
if (v_isShared_4280_ == 0)
{
lean_ctor_set(v___x_4279_, 0, v___x_4281_);
v___x_4283_ = v___x_4279_;
goto v_reusejp_4282_;
}
else
{
lean_object* v_reuseFailAlloc_4284_; 
v_reuseFailAlloc_4284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4284_, 0, v___x_4281_);
v___x_4283_ = v_reuseFailAlloc_4284_;
goto v_reusejp_4282_;
}
v_reusejp_4282_:
{
return v___x_4283_;
}
}
}
else
{
lean_object* v_a_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4294_; 
v_a_4287_ = lean_ctor_get(v___x_4277_, 0);
v_isSharedCheck_4294_ = !lean_is_exclusive(v___x_4277_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4289_ = v___x_4277_;
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_a_4287_);
lean_dec(v___x_4277_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4292_; 
if (v_isShared_4290_ == 0)
{
v___x_4292_ = v___x_4289_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v_a_4287_);
v___x_4292_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
return v___x_4292_;
}
}
}
}
v___jp_4295_:
{
if (lean_obj_tag(v___y_4296_) == 0)
{
lean_object* v_a_4297_; uint8_t v___x_4298_; 
v_a_4297_ = lean_ctor_get(v___y_4296_, 0);
v___x_4298_ = lean_unbox(v_a_4297_);
if (v___x_4298_ == 0)
{
return v___y_4296_;
}
else
{
lean_dec_ref_known(v___y_4296_, 1);
goto v___jp_4272_;
}
}
else
{
return v___y_4296_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___boxed(lean_object* v_declNames_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_){
_start:
{
lean_object* v_res_4313_; 
v_res_4313_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceHandler(v_declNames_4309_, v___y_4310_, v___y_4311_);
lean_dec(v___y_4311_);
lean_dec_ref(v___y_4310_);
lean_dec_ref(v_declNames_4309_);
return v_res_4313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4362_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdHeader___closed__0));
v___x_4363_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__0_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_));
v___x_4364_ = l_Lean_Elab_registerDerivingHandler(v___x_4362_, v___x_4363_);
if (lean_obj_tag(v___x_4364_) == 0)
{
lean_object* v___x_4365_; uint8_t v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; 
lean_dec_ref_known(v___x_4364_, 1);
v___x_4365_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___closed__0));
v___x_4366_ = 0;
v___x_4367_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn___closed__18_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_));
v___x_4368_ = l_Lean_registerTraceClass(v___x_4365_, v___x_4366_, v___x_4367_);
return v___x_4368_;
}
else
{
return v___x_4364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2____boxed(lean_object* v___y_4369_){
_start:
{
lean_object* v_res_4370_; 
v_res_4370_ = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_();
return v_res_4370_;
}
}
lean_object* runtime_initialize_Lean_Data_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_OfFn(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Deriving_Ord(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_OfFn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Deriving_Ord_0__initFn_00___x40_Lean_Elab_Deriving_Ord_957574035____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Deriving_Ord_0__deriving_ord_linear__construction__threshold = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Deriving_Ord_0__deriving_ord_linear__construction__threshold);
lean_dec_ref(res);
res = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_initFn_00___x40_Lean_Elab_Deriving_Ord_1187715530____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Deriving_Ord(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Options(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin);
lean_object* initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
lean_object* initialize_Init_Data_Array_OfFn(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Deriving_Ord(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_OfFn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Ord(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Deriving_Ord(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Deriving_Ord(builtin);
}
#ifdef __cplusplus
}
#endif
