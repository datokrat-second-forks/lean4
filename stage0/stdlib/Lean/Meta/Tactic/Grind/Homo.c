// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Homo
// Imports: public import Lean.Meta.Sym.Simp.Theorems import Lean.Meta.Sym.Simp.Attr import Lean.Meta.AppBuilder
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_addSymSimpDecl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "homoExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 68, 174, 250, 89, 27, 196, 113)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_homoExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoTheorems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoTheorems___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoTheorems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoTheorems___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_insert, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "homoSourceTypesExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(104, 10, 151, 10, 152, 93, 193, 247)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_homoSourceTypesExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoSourceTypes___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoSourceTypes___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoSourceTypes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoSourceTypes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "invalid `[grind hom]` theorem, parameter `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` of `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "` is not determined by the left-hand side of the rule"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "invalid `[grind hom]` theorem, `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "` is conditional: hypothesis"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__9;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 229, .m_capacity = 229, .m_length = 226, .m_data = "\nis not determined by the left-hand side and would have to be discharged when the rule is applied. Homomorphism rules must be unconditional; use E-matching attributes such as `[grind =]` or `[grind →]` for conditional theorems"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__11;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateHomoTheorem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateHomoTheorem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateHomoTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateHomoTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "invalid `[grind hom]` theorem, the source type of the `=`-injection rule `"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "` is not headed by a constant"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 98, .m_capacity = 98, .m_length = 97, .m_data = "\nhomomorphism rules translate concrete types; generic injections cannot be tracked by the E-graph"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoAttr___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoAttr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_instInhabitedHomoPredTheorem_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instInhabitedHomoPredTheorem_default___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instInhabitedHomoPredTheorem_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instInhabitedHomoPredTheorem_default = (const lean_object*)&l_Lean_Meta_Grind_instInhabitedHomoPredTheorem_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instInhabitedHomoPredTheorem = (const lean_object*)&l_Lean_Meta_Grind_instInhabitedHomoPredTheorem_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_instBEqHomoPredTheorem_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqHomoPredTheorem_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instBEqHomoPredTheorem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instBEqHomoPredTheorem_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instBEqHomoPredTheorem___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instBEqHomoPredTheorem___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instBEqHomoPredTheorem = (const lean_object*)&l_Lean_Meta_Grind_instBEqHomoPredTheorem___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "homoPredExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 129, 210, 121, 39, 93, 224, 42)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_homoPredExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoPredTheorems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoPredTheorems___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoPredTheorems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoPredTheorems___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_Grind_addHomoPredAttr_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Grind_addHomoPredAttr_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_Grind_addHomoPredAttr_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_addHomoPredAttr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_addHomoPredAttr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_addHomoPredAttr___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__0___closed__0;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_addHomoPredAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.Tactic.Grind.Homo"};
static const lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Grind.addHomoPredAttr"};
static const lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "invalid `[grind hom_pred]` theorem, the conclusion of `"};
static const lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__5;
static const lean_string_object l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "` does not contain an application whose trailing arguments are the theorem's explicit parameters"};
static const lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__7;
static const lean_string_object l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "invalid `[grind hom_pred]` theorem, `"};
static const lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__9;
static const lean_string_object l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 152, .m_capacity = 152, .m_length = 151, .m_data = "` must have at least one explicit parameter; the trigger is inferred from an application whose trailing arguments are the theorem's explicit parameters"};
static const lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__11;
static const lean_array_object l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_addHomoPredAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a proposition"};
static const lean_object* l_Lean_Meta_Grind_addHomoPredAttr___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_addHomoPredAttr___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_addHomoPredAttr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_addHomoPredAttr___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoPredAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoPredAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Grind_mkHomoPredInstances___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_mkHomoPredInstances___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkHomoPredInstances___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkHomoPredInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkHomoPredInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2_));
v___x_12_ = l_Lean_Meta_Sym_Simp_mkSymSimpExt(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2____boxed(lean_object* v___y_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2_();
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoTheorems___redArg(lean_object* v_a_15_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = l_Lean_Meta_Grind_homoExt;
v___x_18_ = l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(v___x_17_, v_a_15_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoTheorems___redArg___boxed(lean_object* v_a_19_, lean_object* v___y_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Meta_Grind_getHomoTheorems___redArg(v_a_19_);
lean_dec(v_a_19_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoTheorems(lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Meta_Grind_getHomoTheorems___redArg(v_a_23_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoTheorems___boxed(lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_Meta_Grind_getHomoTheorems(v_a_26_, v_a_27_);
lean_dec(v_a_27_);
lean_dec_ref(v_a_26_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_(lean_object* v_x_30_, lean_object* v_a_31_){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_32_, 0, v_a_31_);
lean_inc_ref_n(v___x_32_, 2);
v___x_33_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___x_32_);
lean_ctor_set(v___x_33_, 2, v___x_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2____boxed(lean_object* v_x_34_, lean_object* v_a_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_(v_x_34_, v_a_35_);
lean_dec_ref(v_x_34_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_(lean_object* v___y_37_){
_start:
{
lean_inc(v___y_37_);
return v___y_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2____boxed(lean_object* v___y_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_(v___y_38_);
lean_dec(v___y_38_);
return v_res_39_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___x_51_; lean_object* v___f_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___f_49_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_));
v___f_50_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_));
v___x_51_ = l_Lean_NameSet_empty;
v___f_52_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_));
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_));
v___x_54_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v___f_52_);
lean_ctor_set(v___x_54_, 2, v___x_51_);
lean_ctor_set(v___x_54_, 3, v___f_50_);
lean_ctor_set(v___x_54_, 4, v___f_49_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_);
v___x_57_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2____boxed(lean_object* v___y_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_();
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoSourceTypes___redArg(lean_object* v_a_60_){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v_env_64_; lean_object* v___x_65_; lean_object* v_ext_66_; lean_object* v_toEnvExtension_67_; lean_object* v_asyncMode_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_62_ = lean_box(1);
v___x_63_ = lean_st_ref_get(v_a_60_);
v_env_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc_ref(v_env_64_);
lean_dec(v___x_63_);
v___x_65_ = l_Lean_Meta_Grind_homoSourceTypesExt;
v_ext_66_ = lean_ctor_get(v___x_65_, 1);
v_toEnvExtension_67_ = lean_ctor_get(v_ext_66_, 0);
v_asyncMode_68_ = lean_ctor_get(v_toEnvExtension_67_, 2);
v___x_69_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_62_, v___x_65_, v_env_64_, v_asyncMode_68_);
v___x_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoSourceTypes___redArg___boxed(lean_object* v_a_71_, lean_object* v___y_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_Meta_Grind_getHomoSourceTypes___redArg(v_a_71_);
lean_dec(v_a_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoSourceTypes(lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Lean_Meta_Grind_getHomoSourceTypes___redArg(v_a_75_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoSourceTypes___boxed(lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_Meta_Grind_getHomoSourceTypes(v_a_78_, v_a_79_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg___lam__0(lean_object* v_k_82_, lean_object* v_b_83_, lean_object* v_c_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v___x_90_; 
lean_inc(v___y_88_);
lean_inc_ref(v___y_87_);
lean_inc(v___y_86_);
lean_inc_ref(v___y_85_);
v___x_90_ = lean_apply_7(v_k_82_, v_b_83_, v_c_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, lean_box(0));
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg___lam__0___boxed(lean_object* v_k_91_, lean_object* v_b_92_, lean_object* v_c_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg___lam__0(v_k_91_, v_b_92_, v_c_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg(lean_object* v_type_100_, lean_object* v_k_101_, uint8_t v_cleanupAnnotations_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v___f_108_; uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___f_108_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_108_, 0, v_k_101_);
v___x_109_ = 0;
v___x_110_ = lean_box(0);
v___x_111_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_109_, v___x_110_, v_type_100_, v___f_108_, v_cleanupAnnotations_102_, v___x_109_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
if (lean_obj_tag(v___x_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
v_a_112_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___x_111_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_111_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
v_a_120_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_111_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_111_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg___boxed(lean_object* v_type_128_, lean_object* v_k_129_, lean_object* v_cleanupAnnotations_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_136_; lean_object* v_res_137_; 
v_cleanupAnnotations_boxed_136_ = lean_unbox(v_cleanupAnnotations_130_);
v_res_137_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg(v_type_128_, v_k_129_, v_cleanupAnnotations_boxed_136_, v___y_131_, v___y_132_, v___y_133_, v___y_134_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7(lean_object* v_00_u03b1_138_, lean_object* v_type_139_, lean_object* v_k_140_, uint8_t v_cleanupAnnotations_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg(v_type_139_, v_k_140_, v_cleanupAnnotations_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___boxed(lean_object* v_00_u03b1_148_, lean_object* v_type_149_, lean_object* v_k_150_, lean_object* v_cleanupAnnotations_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_157_; lean_object* v_res_158_; 
v_cleanupAnnotations_boxed_157_ = lean_unbox(v_cleanupAnnotations_151_);
v_res_158_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7(v_00_u03b1_148_, v_type_149_, v_k_150_, v_cleanupAnnotations_boxed_157_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec(v___y_153_);
lean_dec_ref(v___y_152_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4_spec__4(lean_object* v_msgData_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_){
_start:
{
lean_object* v___x_165_; lean_object* v_env_166_; lean_object* v___x_167_; lean_object* v_toCold_168_; lean_object* v_mctx_169_; lean_object* v_lctx_170_; lean_object* v_options_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_165_ = lean_st_ref_get(v___y_163_);
v_env_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc_ref(v_env_166_);
lean_dec(v___x_165_);
v___x_167_ = lean_st_ref_get(v___y_161_);
v_toCold_168_ = lean_ctor_get(v___y_162_, 0);
v_mctx_169_ = lean_ctor_get(v___x_167_, 0);
lean_inc_ref(v_mctx_169_);
lean_dec(v___x_167_);
v_lctx_170_ = lean_ctor_get(v___y_160_, 2);
v_options_171_ = lean_ctor_get(v_toCold_168_, 2);
lean_inc_ref(v_options_171_);
lean_inc_ref(v_lctx_170_);
v___x_172_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_172_, 0, v_env_166_);
lean_ctor_set(v___x_172_, 1, v_mctx_169_);
lean_ctor_set(v___x_172_, 2, v_lctx_170_);
lean_ctor_set(v___x_172_, 3, v_options_171_);
v___x_173_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
lean_ctor_set(v___x_173_, 1, v_msgData_159_);
v___x_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4_spec__4___boxed(lean_object* v_msgData_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4_spec__4(v_msgData_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(lean_object* v_msg_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_ref_188_; lean_object* v___x_189_; lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_198_; 
v_ref_188_ = lean_ctor_get(v___y_185_, 2);
v___x_189_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4_spec__4(v_msg_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
v_a_190_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_198_ == 0)
{
v___x_192_ = v___x_189_;
v_isShared_193_ = v_isSharedCheck_198_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_189_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_198_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_194_; lean_object* v___x_196_; 
lean_inc(v_ref_188_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v_ref_188_);
lean_ctor_set(v___x_194_, 1, v_a_190_);
if (v_isShared_193_ == 0)
{
lean_ctor_set_tag(v___x_192_, 1);
lean_ctor_set(v___x_192_, 0, v___x_194_);
v___x_196_ = v___x_192_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg___boxed(lean_object* v_msg_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(v_msg_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
return v_res_205_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__1(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__0));
v___x_208_ = l_Lean_stringToMessageData(v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__3(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__2));
v___x_211_ = l_Lean_stringToMessageData(v___x_210_);
return v___x_211_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__5(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__4));
v___x_214_ = l_Lean_stringToMessageData(v___x_213_);
return v___x_214_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__7(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__6));
v___x_217_ = l_Lean_stringToMessageData(v___x_216_);
return v___x_217_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__9(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__8));
v___x_220_ = l_Lean_stringToMessageData(v___x_219_);
return v___x_220_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__11(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__10));
v___x_223_ = l_Lean_stringToMessageData(v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5(lean_object* v___x_224_, lean_object* v_declName_225_, lean_object* v_as_226_, size_t v_sz_227_, size_t v_i_228_, lean_object* v_b_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_a_236_; uint8_t v___x_240_; 
v___x_240_ = lean_usize_dec_lt(v_i_228_, v_sz_227_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; 
lean_dec(v_declName_225_);
v___x_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_241_, 0, v_b_229_);
return v___x_241_;
}
else
{
lean_object* v___x_242_; lean_object* v_a_243_; lean_object* v___x_244_; 
v___x_242_ = lean_box(0);
v_a_243_ = lean_array_uget_borrowed(v_as_226_, v_i_228_);
v___x_244_ = l_Lean_Meta_getFVarLocalDecl___redArg(v_a_243_, v___y_230_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; uint8_t v___x_246_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref_known(v___x_244_, 1);
v___x_246_ = l_Lean_LocalDecl_binderInfo(v_a_245_);
lean_dec(v_a_245_);
if (v___x_246_ == 3)
{
v_a_236_ = v___x_242_;
goto v___jp_235_;
}
else
{
lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_247_ = l_Lean_Expr_fvarId_x21(v_a_243_);
v___x_248_ = l_Lean_FVarIdSet_contains(v___x_224_, v___x_247_);
lean_dec(v___x_247_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; 
lean_inc(v___y_233_);
lean_inc_ref(v___y_232_);
lean_inc(v___y_231_);
lean_inc_ref(v___y_230_);
lean_inc(v_a_243_);
v___x_249_ = lean_infer_type(v_a_243_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_251_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc_n(v_a_250_, 2);
lean_dec_ref_known(v___x_249_, 1);
v___x_251_ = l_Lean_Meta_isProp(v_a_250_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_a_252_; uint8_t v___x_253_; 
v_a_252_ = lean_ctor_get(v___x_251_, 0);
lean_inc(v_a_252_);
lean_dec_ref_known(v___x_251_, 1);
v___x_253_ = lean_unbox(v_a_252_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v_a_250_);
v___x_254_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__1);
lean_inc(v_a_243_);
v___x_255_ = l_Lean_MessageData_ofExpr(v_a_243_);
v___x_256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__3);
v___x_258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_256_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_unbox(v_a_252_);
lean_dec(v_a_252_);
lean_inc(v_declName_225_);
v___x_260_ = l_Lean_MessageData_ofConstName(v_declName_225_, v___x_259_);
v___x_261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_258_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__5);
v___x_263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_261_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
v___x_264_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(v___x_263_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_dec_ref_known(v___x_264_, 1);
v_a_236_ = v___x_242_;
goto v___jp_235_;
}
else
{
lean_dec(v_declName_225_);
return v___x_264_;
}
}
else
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
lean_dec(v_a_252_);
v___x_265_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__7);
lean_inc(v_declName_225_);
v___x_266_ = l_Lean_MessageData_ofConstName(v_declName_225_, v___x_248_);
v___x_267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_265_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
v___x_268_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__9);
v___x_269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_267_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = l_Lean_indentExpr(v_a_250_);
v___x_271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___closed__11);
v___x_273_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_271_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
v___x_274_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(v___x_273_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_dec_ref_known(v___x_274_, 1);
v_a_236_ = v___x_242_;
goto v___jp_235_;
}
else
{
lean_dec(v_declName_225_);
return v___x_274_;
}
}
}
else
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
lean_dec(v_a_250_);
lean_dec(v_declName_225_);
v_a_275_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_251_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_251_);
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
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_290_; 
lean_dec(v_declName_225_);
v_a_283_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_290_ == 0)
{
v___x_285_ = v___x_249_;
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_249_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_288_; 
if (v_isShared_286_ == 0)
{
v___x_288_ = v___x_285_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_a_283_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
else
{
v_a_236_ = v___x_242_;
goto v___jp_235_;
}
}
}
else
{
lean_object* v_a_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_298_; 
lean_dec(v_declName_225_);
v_a_291_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_298_ == 0)
{
v___x_293_ = v___x_244_;
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_a_291_);
lean_dec(v___x_244_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_296_; 
if (v_isShared_294_ == 0)
{
v___x_296_ = v___x_293_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_a_291_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
}
v___jp_235_:
{
size_t v___x_237_; size_t v___x_238_; 
v___x_237_ = ((size_t)1ULL);
v___x_238_ = lean_usize_add(v_i_228_, v___x_237_);
v_i_228_ = v___x_238_;
v_b_229_ = v_a_236_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5___boxed(lean_object* v___x_299_, lean_object* v_declName_300_, lean_object* v_as_301_, lean_object* v_sz_302_, lean_object* v_i_303_, lean_object* v_b_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_){
_start:
{
size_t v_sz_boxed_310_; size_t v_i_boxed_311_; lean_object* v_res_312_; 
v_sz_boxed_310_ = lean_unbox_usize(v_sz_302_);
lean_dec(v_sz_302_);
v_i_boxed_311_ = lean_unbox_usize(v_i_303_);
lean_dec(v_i_303_);
v_res_312_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5(v___x_299_, v_declName_300_, v_as_301_, v_sz_boxed_310_, v_i_boxed_311_, v_b_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
lean_dec(v___y_306_);
lean_dec_ref(v___y_305_);
lean_dec_ref(v_as_301_);
lean_dec(v___x_299_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__0(lean_object* v___x_313_, lean_object* v_as_314_, size_t v_sz_315_, size_t v_i_316_, lean_object* v_b_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
uint8_t v___x_323_; 
v___x_323_ = lean_usize_dec_lt(v_i_316_, v_sz_315_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; 
lean_dec(v___x_313_);
v___x_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_324_, 0, v_b_317_);
return v___x_324_;
}
else
{
lean_object* v_fst_325_; lean_object* v_snd_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_361_; 
v_fst_325_ = lean_ctor_get(v_b_317_, 0);
v_snd_326_ = lean_ctor_get(v_b_317_, 1);
v_isSharedCheck_361_ = !lean_is_exclusive(v_b_317_);
if (v_isSharedCheck_361_ == 0)
{
v___x_328_ = v_b_317_;
v_isShared_329_ = v_isSharedCheck_361_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_snd_326_);
lean_inc(v_fst_325_);
lean_dec(v_b_317_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_361_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v_a_330_; lean_object* v___x_331_; 
v_a_330_ = lean_array_uget_borrowed(v_as_314_, v_i_316_);
lean_inc(v___y_321_);
lean_inc_ref(v___y_320_);
lean_inc(v___y_319_);
lean_inc_ref(v___y_318_);
lean_inc(v_a_330_);
v___x_331_ = lean_infer_type(v_a_330_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_352_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_352_ == 0)
{
v___x_334_ = v___x_331_;
v_isShared_335_ = v_isSharedCheck_352_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_331_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_352_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_343_ = l_Lean_Expr_fvarId_x21(v_a_330_);
v___x_344_ = l_Lean_FVarIdSet_contains(v_fst_325_, v___x_343_);
lean_dec(v___x_343_);
if (v___x_344_ == 0)
{
lean_del_object(v___x_334_);
lean_dec(v_a_332_);
goto v___jp_336_;
}
else
{
uint8_t v___x_345_; 
v___x_345_ = l_Lean_Expr_containsFVar(v_a_332_, v___x_313_);
lean_dec(v_a_332_);
if (v___x_345_ == 0)
{
lean_del_object(v___x_334_);
goto v___jp_336_;
}
else
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_350_; 
lean_del_object(v___x_328_);
lean_dec(v_snd_326_);
v___x_346_ = l_Lean_FVarIdSet_insert(v_fst_325_, v___x_313_);
v___x_347_ = lean_box(v___x_323_);
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_346_);
lean_ctor_set(v___x_348_, 1, v___x_347_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_348_);
v___x_350_ = v___x_334_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v___x_348_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
v___jp_336_:
{
lean_object* v___x_338_; 
if (v_isShared_329_ == 0)
{
v___x_338_ = v___x_328_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_fst_325_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_snd_326_);
v___x_338_ = v_reuseFailAlloc_342_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
size_t v___x_339_; size_t v___x_340_; 
v___x_339_ = ((size_t)1ULL);
v___x_340_ = lean_usize_add(v_i_316_, v___x_339_);
v_i_316_ = v___x_340_;
v_b_317_ = v___x_338_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
lean_del_object(v___x_328_);
lean_dec(v_snd_326_);
lean_dec(v_fst_325_);
lean_dec(v___x_313_);
v_a_353_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_331_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_331_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__0___boxed(lean_object* v___x_362_, lean_object* v_as_363_, lean_object* v_sz_364_, lean_object* v_i_365_, lean_object* v_b_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
size_t v_sz_boxed_372_; size_t v_i_boxed_373_; lean_object* v_res_374_; 
v_sz_boxed_372_ = lean_unbox_usize(v_sz_364_);
lean_dec(v_sz_364_);
v_i_boxed_373_ = lean_unbox_usize(v_i_365_);
lean_dec(v_i_365_);
v_res_374_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__0(v___x_362_, v_as_363_, v_sz_boxed_372_, v_i_boxed_373_, v_b_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec_ref(v_as_363_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__1(lean_object* v_xs_375_, lean_object* v_as_376_, size_t v_sz_377_, size_t v_i_378_, lean_object* v_b_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v_a_386_; uint8_t v___x_390_; 
v___x_390_ = lean_usize_dec_lt(v_i_378_, v_sz_377_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; 
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v_b_379_);
return v___x_391_;
}
else
{
lean_object* v_fst_392_; lean_object* v_snd_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_419_; 
v_fst_392_ = lean_ctor_get(v_b_379_, 0);
v_snd_393_ = lean_ctor_get(v_b_379_, 1);
v_isSharedCheck_419_ = !lean_is_exclusive(v_b_379_);
if (v_isSharedCheck_419_ == 0)
{
v___x_395_ = v_b_379_;
v_isShared_396_ = v_isSharedCheck_419_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_snd_393_);
lean_inc(v_fst_392_);
lean_dec(v_b_379_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_419_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v_a_397_; lean_object* v___x_398_; uint8_t v___x_399_; 
v_a_397_ = lean_array_uget_borrowed(v_as_376_, v_i_378_);
v___x_398_ = l_Lean_Expr_fvarId_x21(v_a_397_);
v___x_399_ = l_Lean_FVarIdSet_contains(v_fst_392_, v___x_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_401_; 
if (v_isShared_396_ == 0)
{
v___x_401_ = v___x_395_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_fst_392_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_snd_393_);
v___x_401_ = v_reuseFailAlloc_415_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
size_t v_sz_402_; size_t v___x_403_; lean_object* v___x_404_; 
v_sz_402_ = lean_array_size(v_xs_375_);
v___x_403_ = ((size_t)0ULL);
v___x_404_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__0(v___x_398_, v_xs_375_, v_sz_402_, v___x_403_, v___x_401_, v___y_380_, v___y_381_, v___y_382_, v___y_383_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v_fst_406_; lean_object* v_snd_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
lean_inc(v_a_405_);
lean_dec_ref_known(v___x_404_, 1);
v_fst_406_ = lean_ctor_get(v_a_405_, 0);
v_snd_407_ = lean_ctor_get(v_a_405_, 1);
v_isSharedCheck_414_ = !lean_is_exclusive(v_a_405_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v_a_405_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_snd_407_);
lean_inc(v_fst_406_);
lean_dec(v_a_405_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_fst_406_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_snd_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
v_a_386_ = v___x_412_;
goto v___jp_385_;
}
}
}
else
{
return v___x_404_;
}
}
}
else
{
lean_object* v___x_417_; 
lean_dec(v___x_398_);
if (v_isShared_396_ == 0)
{
v___x_417_ = v___x_395_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_fst_392_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v_snd_393_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
v_a_386_ = v___x_417_;
goto v___jp_385_;
}
}
}
}
v___jp_385_:
{
size_t v___x_387_; size_t v___x_388_; 
v___x_387_ = ((size_t)1ULL);
v___x_388_ = lean_usize_add(v_i_378_, v___x_387_);
v_i_378_ = v___x_388_;
v_b_379_ = v_a_386_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__1___boxed(lean_object* v_xs_420_, lean_object* v_as_421_, lean_object* v_sz_422_, lean_object* v_i_423_, lean_object* v_b_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
size_t v_sz_boxed_430_; size_t v_i_boxed_431_; lean_object* v_res_432_; 
v_sz_boxed_430_ = lean_unbox_usize(v_sz_422_);
lean_dec(v_sz_422_);
v_i_boxed_431_ = lean_unbox_usize(v_i_423_);
lean_dec(v_i_423_);
v_res_432_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__1(v_xs_420_, v_as_421_, v_sz_boxed_430_, v_i_boxed_431_, v_b_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec_ref(v_as_421_);
lean_dec_ref(v_xs_420_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3___redArg(lean_object* v_xs_433_, lean_object* v_a_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v_snd_440_; uint8_t v___x_441_; 
v_snd_440_ = lean_ctor_get(v_a_434_, 1);
v___x_441_ = lean_unbox(v_snd_440_);
if (v___x_441_ == 0)
{
lean_object* v_fst_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_450_; 
lean_inc(v_snd_440_);
v_fst_442_ = lean_ctor_get(v_a_434_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v_a_434_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v_a_434_, 1);
lean_dec(v_unused_451_);
v___x_444_ = v_a_434_;
v_isShared_445_ = v_isSharedCheck_450_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_fst_442_);
lean_dec(v_a_434_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_450_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_fst_442_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_snd_440_);
v___x_447_ = v_reuseFailAlloc_449_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_448_; 
v___x_448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
return v___x_448_;
}
}
}
else
{
lean_object* v_fst_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_475_; 
v_fst_452_ = lean_ctor_get(v_a_434_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v_a_434_);
if (v_isSharedCheck_475_ == 0)
{
lean_object* v_unused_476_; 
v_unused_476_ = lean_ctor_get(v_a_434_, 1);
lean_dec(v_unused_476_);
v___x_454_ = v_a_434_;
v_isShared_455_ = v_isSharedCheck_475_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_fst_452_);
lean_dec(v_a_434_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_475_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
uint8_t v___x_456_; lean_object* v___x_457_; lean_object* v___x_459_; 
v___x_456_ = 0;
v___x_457_ = lean_box(v___x_456_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v___x_457_);
v___x_459_ = v___x_454_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_fst_452_);
lean_ctor_set(v_reuseFailAlloc_474_, 1, v___x_457_);
v___x_459_ = v_reuseFailAlloc_474_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
size_t v_sz_460_; size_t v___x_461_; lean_object* v___x_462_; 
v_sz_460_ = lean_array_size(v_xs_433_);
v___x_461_ = ((size_t)0ULL);
v___x_462_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__1(v_xs_433_, v_xs_433_, v_sz_460_, v___x_461_, v___x_459_, v___y_435_, v___y_436_, v___y_437_, v___y_438_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v_fst_464_; lean_object* v_snd_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_473_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
lean_inc(v_a_463_);
lean_dec_ref_known(v___x_462_, 1);
v_fst_464_ = lean_ctor_get(v_a_463_, 0);
v_snd_465_ = lean_ctor_get(v_a_463_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v_a_463_);
if (v_isSharedCheck_473_ == 0)
{
v___x_467_ = v_a_463_;
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_snd_465_);
lean_inc(v_fst_464_);
lean_dec(v_a_463_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_fst_464_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_snd_465_);
v___x_470_ = v_reuseFailAlloc_472_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
v_a_434_ = v___x_470_;
goto _start;
}
}
}
else
{
return v___x_462_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3___redArg___boxed(lean_object* v_xs_477_, lean_object* v_a_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3___redArg(v_xs_477_, v_a_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec_ref(v_xs_477_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2___redArg(lean_object* v___y_485_, lean_object* v_as_486_, size_t v_sz_487_, size_t v_i_488_, lean_object* v_b_489_){
_start:
{
lean_object* v_a_492_; uint8_t v___x_496_; 
v___x_496_ = lean_usize_dec_lt(v_i_488_, v_sz_487_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; 
v___x_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_497_, 0, v_b_489_);
return v___x_497_;
}
else
{
lean_object* v_a_498_; lean_object* v___x_499_; uint8_t v___x_500_; 
v_a_498_ = lean_array_uget_borrowed(v_as_486_, v_i_488_);
v___x_499_ = l_Lean_Expr_fvarId_x21(v_a_498_);
v___x_500_ = l_Lean_Expr_containsFVar(v___y_485_, v___x_499_);
if (v___x_500_ == 0)
{
lean_dec(v___x_499_);
v_a_492_ = v_b_489_;
goto v___jp_491_;
}
else
{
lean_object* v___x_501_; 
v___x_501_ = l_Lean_FVarIdSet_insert(v_b_489_, v___x_499_);
v_a_492_ = v___x_501_;
goto v___jp_491_;
}
}
v___jp_491_:
{
size_t v___x_493_; size_t v___x_494_; 
v___x_493_ = ((size_t)1ULL);
v___x_494_ = lean_usize_add(v_i_488_, v___x_493_);
v_i_488_ = v___x_494_;
v_b_489_ = v_a_492_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2___redArg___boxed(lean_object* v___y_502_, lean_object* v_as_503_, lean_object* v_sz_504_, lean_object* v_i_505_, lean_object* v_b_506_, lean_object* v___y_507_){
_start:
{
size_t v_sz_boxed_508_; size_t v_i_boxed_509_; lean_object* v_res_510_; 
v_sz_boxed_508_ = lean_unbox_usize(v_sz_504_);
lean_dec(v_sz_504_);
v_i_boxed_509_ = lean_unbox_usize(v_i_505_);
lean_dec(v_i_505_);
v_res_510_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2___redArg(v___y_502_, v_as_503_, v_sz_boxed_508_, v_i_boxed_509_, v_b_506_);
lean_dec_ref(v_as_503_);
lean_dec_ref(v___y_502_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateHomoTheorem___lam__0(lean_object* v_declName_520_, lean_object* v_xs_521_, lean_object* v_concl_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v___x_528_; uint8_t v___x_529_; uint8_t v___x_530_; lean_object* v___y_532_; 
lean_inc_ref(v_concl_522_);
v___x_528_ = l_Lean_Expr_cleanupAnnotations(v_concl_522_);
v___x_529_ = l_Lean_Expr_isApp(v___x_528_);
v___x_530_ = 1;
if (v___x_529_ == 0)
{
lean_dec_ref(v___x_528_);
v___y_532_ = v_concl_522_;
goto v___jp_531_;
}
else
{
lean_object* v_arg_569_; lean_object* v___x_570_; lean_object* v___x_571_; uint8_t v___x_572_; 
v_arg_569_ = lean_ctor_get(v___x_528_, 1);
lean_inc_ref(v_arg_569_);
v___x_570_ = l_Lean_Expr_appFnCleanup___redArg(v___x_528_);
v___x_571_ = ((lean_object*)(l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__1));
v___x_572_ = l_Lean_Expr_isConstOf(v___x_570_, v___x_571_);
if (v___x_572_ == 0)
{
uint8_t v___x_573_; 
lean_dec_ref(v_arg_569_);
v___x_573_ = l_Lean_Expr_isApp(v___x_570_);
if (v___x_573_ == 0)
{
lean_dec_ref(v___x_570_);
v___y_532_ = v_concl_522_;
goto v___jp_531_;
}
else
{
lean_object* v_arg_574_; lean_object* v___x_575_; lean_object* v___x_576_; uint8_t v___x_577_; 
v_arg_574_ = lean_ctor_get(v___x_570_, 1);
lean_inc_ref(v_arg_574_);
v___x_575_ = l_Lean_Expr_appFnCleanup___redArg(v___x_570_);
v___x_576_ = ((lean_object*)(l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__3));
v___x_577_ = l_Lean_Expr_isConstOf(v___x_575_, v___x_576_);
if (v___x_577_ == 0)
{
uint8_t v___x_578_; 
v___x_578_ = l_Lean_Expr_isApp(v___x_575_);
if (v___x_578_ == 0)
{
lean_dec_ref(v___x_575_);
lean_dec_ref(v_arg_574_);
v___y_532_ = v_concl_522_;
goto v___jp_531_;
}
else
{
lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_579_ = l_Lean_Expr_appFnCleanup___redArg(v___x_575_);
v___x_580_ = ((lean_object*)(l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__5));
v___x_581_ = l_Lean_Expr_isConstOf(v___x_579_, v___x_580_);
lean_dec_ref(v___x_579_);
if (v___x_581_ == 0)
{
lean_dec_ref(v_arg_574_);
v___y_532_ = v_concl_522_;
goto v___jp_531_;
}
else
{
lean_dec_ref(v_concl_522_);
v___y_532_ = v_arg_574_;
goto v___jp_531_;
}
}
}
else
{
lean_dec_ref(v___x_575_);
lean_dec_ref(v_concl_522_);
v___y_532_ = v_arg_574_;
goto v___jp_531_;
}
}
}
else
{
lean_dec_ref(v___x_570_);
lean_dec_ref(v_concl_522_);
v___y_532_ = v_arg_569_;
goto v___jp_531_;
}
}
v___jp_531_:
{
lean_object* v___x_533_; size_t v_sz_534_; size_t v___x_535_; lean_object* v___x_536_; 
v___x_533_ = lean_box(1);
v_sz_534_ = lean_array_size(v_xs_521_);
v___x_535_ = ((size_t)0ULL);
v___x_536_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2___redArg(v___y_532_, v_xs_521_, v_sz_534_, v___x_535_, v___x_533_);
lean_dec_ref(v___y_532_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v_a_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_a_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_a_537_);
lean_dec_ref_known(v___x_536_, 1);
v___x_538_ = lean_box(v___x_530_);
v___x_539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_539_, 0, v_a_537_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3___redArg(v_xs_521_, v___x_539_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v_fst_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_541_);
lean_dec_ref_known(v___x_540_, 1);
v_fst_542_ = lean_ctor_get(v_a_541_, 0);
lean_inc(v_fst_542_);
lean_dec(v_a_541_);
v___x_543_ = lean_box(0);
v___x_544_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__5(v_fst_542_, v_declName_520_, v_xs_521_, v_sz_534_, v___x_535_, v___x_543_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
lean_dec(v_fst_542_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_551_; 
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_551_ == 0)
{
lean_object* v_unused_552_; 
v_unused_552_ = lean_ctor_get(v___x_544_, 0);
lean_dec(v_unused_552_);
v___x_546_ = v___x_544_;
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
else
{
lean_dec(v___x_544_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___x_543_);
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_543_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
else
{
return v___x_544_;
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
lean_dec(v_declName_520_);
v_a_553_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_540_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_540_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
else
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
lean_dec(v_declName_520_);
v_a_561_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_536_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_536_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateHomoTheorem___lam__0___boxed(lean_object* v_declName_582_, lean_object* v_xs_583_, lean_object* v_concl_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_Meta_Grind_validateHomoTheorem___lam__0(v_declName_582_, v_xs_583_, v_concl_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec_ref(v_xs_583_);
return v_res_590_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_591_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__0);
v___x_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
return v___x_593_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_594_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__1);
v___x_595_ = lean_unsigned_to_nat(0u);
v___x_596_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
lean_ctor_set(v___x_596_, 2, v___x_595_);
lean_ctor_set(v___x_596_, 3, v___x_595_);
lean_ctor_set(v___x_596_, 4, v___x_594_);
lean_ctor_set(v___x_596_, 5, v___x_594_);
lean_ctor_set(v___x_596_, 6, v___x_594_);
lean_ctor_set(v___x_596_, 7, v___x_594_);
lean_ctor_set(v___x_596_, 8, v___x_594_);
lean_ctor_set(v___x_596_, 9, v___x_594_);
lean_ctor_set(v___x_596_, 10, v___x_594_);
return v___x_596_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__3(void){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_597_ = lean_unsigned_to_nat(32u);
v___x_598_ = lean_mk_empty_array_with_capacity(v___x_597_);
v___x_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_599_, 0, v___x_598_);
return v___x_599_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__4(void){
_start:
{
size_t v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_600_ = ((size_t)5ULL);
v___x_601_ = lean_unsigned_to_nat(0u);
v___x_602_ = lean_unsigned_to_nat(32u);
v___x_603_ = lean_mk_empty_array_with_capacity(v___x_602_);
v___x_604_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__3);
v___x_605_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_605_, 0, v___x_604_);
lean_ctor_set(v___x_605_, 1, v___x_603_);
lean_ctor_set(v___x_605_, 2, v___x_601_);
lean_ctor_set(v___x_605_, 3, v___x_601_);
lean_ctor_set_usize(v___x_605_, 4, v___x_600_);
return v___x_605_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__5(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_606_ = lean_box(1);
v___x_607_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__4);
v___x_608_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__1);
v___x_609_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
lean_ctor_set(v___x_609_, 1, v___x_607_);
lean_ctor_set(v___x_609_, 2, v___x_606_);
return v___x_609_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__7(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__6));
v___x_612_ = l_Lean_stringToMessageData(v___x_611_);
return v___x_612_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__9(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__8));
v___x_615_ = l_Lean_stringToMessageData(v___x_614_);
return v___x_615_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__11(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__10));
v___x_618_ = l_Lean_stringToMessageData(v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__13(void){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__12));
v___x_621_ = l_Lean_stringToMessageData(v___x_620_);
return v___x_621_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__15(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__14));
v___x_624_ = l_Lean_stringToMessageData(v___x_623_);
return v___x_624_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__17(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__16));
v___x_627_ = l_Lean_stringToMessageData(v___x_626_);
return v___x_627_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__19(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__18));
v___x_630_ = l_Lean_stringToMessageData(v___x_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg(lean_object* v_msg_631_, lean_object* v_declHint_632_, lean_object* v___y_633_){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v_env_637_; uint8_t v___x_638_; 
v___x_635_ = lean_box(0);
v___x_636_ = lean_st_ref_get(v___y_633_);
v_env_637_ = lean_ctor_get(v___x_636_, 0);
lean_inc_ref(v_env_637_);
lean_dec(v___x_636_);
v___x_638_ = l_Lean_Name_isAnonymous(v_declHint_632_);
if (v___x_638_ == 0)
{
uint8_t v_isExporting_639_; 
v_isExporting_639_ = lean_ctor_get_uint8(v_env_637_, sizeof(void*)*8);
if (v_isExporting_639_ == 0)
{
lean_object* v___x_640_; 
lean_dec_ref(v_env_637_);
lean_dec(v_declHint_632_);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v_msg_631_);
return v___x_640_;
}
else
{
lean_object* v___x_641_; uint8_t v___x_642_; 
lean_inc_ref(v_env_637_);
v___x_641_ = l_Lean_Environment_setExporting(v_env_637_, v___x_638_);
lean_inc(v_declHint_632_);
lean_inc_ref(v___x_641_);
v___x_642_ = l_Lean_Environment_contains(v___x_641_, v_declHint_632_, v_isExporting_639_);
if (v___x_642_ == 0)
{
lean_object* v___x_643_; 
lean_dec_ref(v___x_641_);
lean_dec_ref(v_env_637_);
lean_dec(v_declHint_632_);
v___x_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_643_, 0, v_msg_631_);
return v___x_643_;
}
else
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v_c_649_; lean_object* v___x_650_; 
v___x_644_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__2);
v___x_645_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__5);
v___x_646_ = l_Lean_Options_empty;
v___x_647_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_647_, 0, v___x_641_);
lean_ctor_set(v___x_647_, 1, v___x_644_);
lean_ctor_set(v___x_647_, 2, v___x_645_);
lean_ctor_set(v___x_647_, 3, v___x_646_);
lean_inc(v_declHint_632_);
v___x_648_ = l_Lean_MessageData_ofConstName(v_declHint_632_, v___x_638_);
v_c_649_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_649_, 0, v___x_647_);
lean_ctor_set(v_c_649_, 1, v___x_648_);
v___x_650_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_637_, v_declHint_632_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
lean_dec_ref(v_env_637_);
lean_dec(v_declHint_632_);
v___x_651_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__7);
v___x_652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
lean_ctor_set(v___x_652_, 1, v_c_649_);
v___x_653_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__9);
v___x_654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_652_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = l_Lean_MessageData_note(v___x_654_);
v___x_656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_656_, 0, v_msg_631_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v___x_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
return v___x_657_;
}
else
{
lean_object* v_val_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_692_; 
v_val_658_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_692_ == 0)
{
v___x_660_ = v___x_650_;
v_isShared_661_ = v_isSharedCheck_692_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_val_658_);
lean_dec(v___x_650_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_692_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v_mod_664_; uint8_t v___x_665_; 
v___x_662_ = l_Lean_Environment_header(v_env_637_);
lean_dec_ref(v_env_637_);
v___x_663_ = l_Lean_EnvironmentHeader_moduleNames(v___x_662_);
v_mod_664_ = lean_array_get(v___x_635_, v___x_663_, v_val_658_);
lean_dec(v_val_658_);
lean_dec_ref(v___x_663_);
v___x_665_ = l_Lean_isPrivateName(v_declHint_632_);
lean_dec(v_declHint_632_);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_666_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__11);
v___x_667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
lean_ctor_set(v___x_667_, 1, v_c_649_);
v___x_668_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__13);
v___x_669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
v___x_670_ = l_Lean_MessageData_ofName(v_mod_664_);
v___x_671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_669_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
v___x_672_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__15);
v___x_673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = l_Lean_MessageData_note(v___x_673_);
v___x_675_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_675_, 0, v_msg_631_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
if (v_isShared_661_ == 0)
{
lean_ctor_set_tag(v___x_660_, 0);
lean_ctor_set(v___x_660_, 0, v___x_675_);
v___x_677_ = v___x_660_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_675_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
else
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_679_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__7);
v___x_680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
lean_ctor_set(v___x_680_, 1, v_c_649_);
v___x_681_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__17);
v___x_682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_680_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = l_Lean_MessageData_ofName(v_mod_664_);
v___x_684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_682_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v___x_685_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__19);
v___x_686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_684_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
v___x_687_ = l_Lean_MessageData_note(v___x_686_);
v___x_688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_688_, 0, v_msg_631_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
if (v_isShared_661_ == 0)
{
lean_ctor_set_tag(v___x_660_, 0);
lean_ctor_set(v___x_660_, 0, v___x_688_);
v___x_690_ = v___x_660_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
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
else
{
lean_object* v___x_693_; 
lean_dec_ref(v_env_637_);
lean_dec(v_declHint_632_);
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v_msg_631_);
return v___x_693_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___boxed(lean_object* v_msg_694_, lean_object* v_declHint_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg(v_msg_694_, v_declHint_695_, v___y_696_);
lean_dec(v___y_696_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11(lean_object* v_msg_699_, lean_object* v_declHint_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_){
_start:
{
lean_object* v___x_706_; lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_716_; 
v___x_706_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg(v_msg_699_, v_declHint_700_, v___y_704_);
v_a_707_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_716_ == 0)
{
v___x_709_ = v___x_706_;
v_isShared_710_ = v_isSharedCheck_716_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_706_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_716_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_711_ = l_Lean_unknownIdentifierMessageTag;
v___x_712_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
lean_ctor_set(v___x_712_, 1, v_a_707_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v___x_712_);
v___x_714_ = v___x_709_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_712_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11___boxed(lean_object* v_msg_717_, lean_object* v_declHint_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11(v_msg_717_, v_declHint_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12___redArg(lean_object* v_ref_725_, lean_object* v_msg_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_toCold_732_; lean_object* v_currRecDepth_733_; lean_object* v_ref_734_; uint8_t v_diag_735_; uint8_t v_suppressElabErrors_736_; lean_object* v_ref_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v_toCold_732_ = lean_ctor_get(v___y_729_, 0);
v_currRecDepth_733_ = lean_ctor_get(v___y_729_, 1);
v_ref_734_ = lean_ctor_get(v___y_729_, 2);
v_diag_735_ = lean_ctor_get_uint8(v___y_729_, sizeof(void*)*3);
v_suppressElabErrors_736_ = lean_ctor_get_uint8(v___y_729_, sizeof(void*)*3 + 1);
v_ref_737_ = l_Lean_replaceRef(v_ref_725_, v_ref_734_);
lean_inc(v_currRecDepth_733_);
lean_inc_ref(v_toCold_732_);
v___x_738_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_738_, 0, v_toCold_732_);
lean_ctor_set(v___x_738_, 1, v_currRecDepth_733_);
lean_ctor_set(v___x_738_, 2, v_ref_737_);
lean_ctor_set_uint8(v___x_738_, sizeof(void*)*3, v_diag_735_);
lean_ctor_set_uint8(v___x_738_, sizeof(void*)*3 + 1, v_suppressElabErrors_736_);
v___x_739_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(v_msg_726_, v___y_727_, v___y_728_, v___x_738_, v___y_730_);
lean_dec_ref_known(v___x_738_, 3);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12___redArg___boxed(lean_object* v_ref_740_, lean_object* v_msg_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12___redArg(v_ref_740_, v_msg_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_);
lean_dec(v___y_745_);
lean_dec_ref(v___y_744_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec(v_ref_740_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10___redArg(lean_object* v_ref_748_, lean_object* v_msg_749_, lean_object* v_declHint_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v___x_756_; lean_object* v_a_757_; lean_object* v___x_758_; 
v___x_756_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11(v_msg_749_, v_declHint_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
v_a_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_757_);
lean_dec_ref(v___x_756_);
v___x_758_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12___redArg(v_ref_748_, v_a_757_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10___redArg___boxed(lean_object* v_ref_759_, lean_object* v_msg_760_, lean_object* v_declHint_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10___redArg(v_ref_759_, v_msg_760_, v_declHint_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v_ref_759_);
return v_res_767_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__0));
v___x_770_ = l_Lean_stringToMessageData(v___x_769_);
return v___x_770_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__2));
v___x_773_ = l_Lean_stringToMessageData(v___x_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg(lean_object* v_ref_774_, lean_object* v_constName_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v___x_781_; uint8_t v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_781_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__1);
v___x_782_ = 0;
lean_inc(v_constName_775_);
v___x_783_ = l_Lean_MessageData_ofConstName(v_constName_775_, v___x_782_);
v___x_784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_781_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___closed__3);
v___x_786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_784_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10___redArg(v_ref_774_, v___x_786_, v_constName_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg___boxed(lean_object* v_ref_788_, lean_object* v_constName_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg(v_ref_788_, v_constName_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v_ref_788_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7___redArg(lean_object* v_constName_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_ref_802_; lean_object* v___x_803_; 
v_ref_802_ = lean_ctor_get(v___y_799_, 2);
v___x_803_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg(v_ref_802_, v_constName_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7___redArg___boxed(lean_object* v_constName_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7___redArg(v_constName_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6(lean_object* v_constName_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v___x_817_; lean_object* v_env_818_; uint8_t v___x_819_; lean_object* v___x_820_; 
v___x_817_ = lean_st_ref_get(v___y_815_);
v_env_818_ = lean_ctor_get(v___x_817_, 0);
lean_inc_ref(v_env_818_);
lean_dec(v___x_817_);
v___x_819_ = 0;
lean_inc(v_constName_811_);
v___x_820_ = l_Lean_Environment_find_x3f(v_env_818_, v_constName_811_, v___x_819_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v___x_821_; 
v___x_821_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7___redArg(v_constName_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
return v___x_821_;
}
else
{
lean_object* v_val_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_dec(v_constName_811_);
v_val_822_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_820_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_val_822_);
lean_dec(v___x_820_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
lean_ctor_set_tag(v___x_824_, 0);
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_val_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6___boxed(lean_object* v_constName_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6(v_constName_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateHomoTheorem(lean_object* v_declName_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_){
_start:
{
lean_object* v___f_843_; lean_object* v___x_844_; 
lean_inc(v_declName_837_);
v___f_843_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_validateHomoTheorem___lam__0___boxed), 8, 1);
lean_closure_set(v___f_843_, 0, v_declName_837_);
v___x_844_ = l_Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6(v_declName_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_846_; uint8_t v___x_847_; lean_object* v___x_848_; 
v_a_845_ = lean_ctor_get(v___x_844_, 0);
lean_inc(v_a_845_);
lean_dec_ref_known(v___x_844_, 1);
v___x_846_ = l_Lean_ConstantInfo_type(v_a_845_);
lean_dec(v_a_845_);
v___x_847_ = 0;
v___x_848_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg(v___x_846_, v___f_843_, v___x_847_, v_a_838_, v_a_839_, v_a_840_, v_a_841_);
return v___x_848_;
}
else
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_856_; 
lean_dec_ref(v___f_843_);
v_a_849_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_856_ == 0)
{
v___x_851_ = v___x_844_;
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_844_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_854_; 
if (v_isShared_852_ == 0)
{
v___x_854_ = v___x_851_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_849_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateHomoTheorem___boxed(lean_object* v_declName_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v___y_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Lean_Meta_Grind_validateHomoTheorem(v_declName_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
lean_dec(v_a_861_);
lean_dec_ref(v_a_860_);
lean_dec(v_a_859_);
lean_dec_ref(v_a_858_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2(lean_object* v___y_864_, lean_object* v_as_865_, size_t v_sz_866_, size_t v_i_867_, lean_object* v_b_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2___redArg(v___y_864_, v_as_865_, v_sz_866_, v_i_867_, v_b_868_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2___boxed(lean_object* v___y_875_, lean_object* v_as_876_, lean_object* v_sz_877_, lean_object* v_i_878_, lean_object* v_b_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
size_t v_sz_boxed_885_; size_t v_i_boxed_886_; lean_object* v_res_887_; 
v_sz_boxed_885_ = lean_unbox_usize(v_sz_877_);
lean_dec(v_sz_877_);
v_i_boxed_886_ = lean_unbox_usize(v_i_878_);
lean_dec(v_i_878_);
v_res_887_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_validateHomoTheorem_spec__2(v___y_875_, v_as_876_, v_sz_boxed_885_, v_i_boxed_886_, v_b_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec_ref(v_as_876_);
lean_dec_ref(v___y_875_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3(lean_object* v_xs_888_, lean_object* v_inst_889_, lean_object* v_a_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3___redArg(v_xs_888_, v_a_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3___boxed(lean_object* v_xs_897_, lean_object* v_inst_898_, lean_object* v_a_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_validateHomoTheorem_spec__3(v_xs_897_, v_inst_898_, v_a_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
lean_dec(v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec_ref(v_xs_897_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4(lean_object* v_00_u03b1_906_, lean_object* v_msg_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v___x_913_; 
v___x_913_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(v_msg_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___boxed(lean_object* v_00_u03b1_914_, lean_object* v_msg_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4(v_00_u03b1_914_, v_msg_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7(lean_object* v_00_u03b1_922_, lean_object* v_constName_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7___redArg(v_constName_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7___boxed(lean_object* v_00_u03b1_930_, lean_object* v_constName_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7(v_00_u03b1_930_, v_constName_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9(lean_object* v_00_u03b1_938_, lean_object* v_ref_939_, lean_object* v_constName_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
lean_object* v___x_946_; 
v___x_946_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___redArg(v_ref_939_, v_constName_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9___boxed(lean_object* v_00_u03b1_947_, lean_object* v_ref_948_, lean_object* v_constName_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9(v_00_u03b1_947_, v_ref_948_, v_constName_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v_ref_948_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10(lean_object* v_00_u03b1_956_, lean_object* v_ref_957_, lean_object* v_msg_958_, lean_object* v_declHint_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v___x_965_; 
v___x_965_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10___redArg(v_ref_957_, v_msg_958_, v_declHint_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10___boxed(lean_object* v_00_u03b1_966_, lean_object* v_ref_967_, lean_object* v_msg_968_, lean_object* v_declHint_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10(v_00_u03b1_966_, v_ref_967_, v_msg_968_, v_declHint_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
lean_dec(v_ref_967_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12(lean_object* v_msg_976_, lean_object* v_declHint_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg(v_msg_976_, v_declHint_977_, v___y_981_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___boxed(lean_object* v_msg_984_, lean_object* v_declHint_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12(v_msg_984_, v_declHint_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12(lean_object* v_00_u03b1_992_, lean_object* v_ref_993_, lean_object* v_msg_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12___redArg(v_ref_993_, v_msg_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12___boxed(lean_object* v_00_u03b1_1001_, lean_object* v_ref_1002_, lean_object* v_msg_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__12(v_00_u03b1_1001_, v_ref_1002_, v_msg_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v_ref_1002_);
return v_res_1009_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__0));
v___x_1012_ = l_Lean_stringToMessageData(v___x_1011_);
return v___x_1012_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__2));
v___x_1015_ = l_Lean_stringToMessageData(v___x_1014_);
return v___x_1015_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__4));
v___x_1018_ = l_Lean_stringToMessageData(v___x_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0(lean_object* v_declName_1019_, lean_object* v_x_1020_, lean_object* v_concl_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v___y_1031_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
lean_inc_ref(v_concl_1021_);
v___x_1057_ = l_Lean_Expr_cleanupAnnotations(v_concl_1021_);
v___x_1058_ = l_Lean_Expr_isApp(v___x_1057_);
if (v___x_1058_ == 0)
{
lean_dec_ref(v___x_1057_);
v___y_1031_ = v_concl_1021_;
goto v___jp_1030_;
}
else
{
lean_object* v___x_1059_; uint8_t v___x_1060_; 
v___x_1059_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1057_);
v___x_1060_ = l_Lean_Expr_isApp(v___x_1059_);
if (v___x_1060_ == 0)
{
lean_dec_ref(v___x_1059_);
v___y_1031_ = v_concl_1021_;
goto v___jp_1030_;
}
else
{
lean_object* v_arg_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; uint8_t v___x_1064_; 
v_arg_1061_ = lean_ctor_get(v___x_1059_, 1);
lean_inc_ref(v_arg_1061_);
v___x_1062_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1059_);
v___x_1063_ = ((lean_object*)(l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__3));
v___x_1064_ = l_Lean_Expr_isConstOf(v___x_1062_, v___x_1063_);
if (v___x_1064_ == 0)
{
uint8_t v___x_1065_; 
v___x_1065_ = l_Lean_Expr_isApp(v___x_1062_);
if (v___x_1065_ == 0)
{
lean_dec_ref(v___x_1062_);
lean_dec_ref(v_arg_1061_);
v___y_1031_ = v_concl_1021_;
goto v___jp_1030_;
}
else
{
lean_object* v___x_1066_; lean_object* v___x_1067_; uint8_t v___x_1068_; 
v___x_1066_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1062_);
v___x_1067_ = ((lean_object*)(l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__5));
v___x_1068_ = l_Lean_Expr_isConstOf(v___x_1066_, v___x_1067_);
lean_dec_ref(v___x_1066_);
if (v___x_1068_ == 0)
{
lean_dec_ref(v_arg_1061_);
v___y_1031_ = v_concl_1021_;
goto v___jp_1030_;
}
else
{
lean_dec_ref(v_concl_1021_);
v___y_1031_ = v_arg_1061_;
goto v___jp_1030_;
}
}
}
else
{
lean_dec_ref(v___x_1062_);
lean_dec_ref(v_concl_1021_);
v___y_1031_ = v_arg_1061_;
goto v___jp_1030_;
}
}
}
v___jp_1027_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1028_ = lean_box(0);
v___x_1029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
return v___x_1029_;
}
v___jp_1030_:
{
lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1032_ = l_Lean_Expr_cleanupAnnotations(v___y_1031_);
v___x_1033_ = l_Lean_Expr_isApp(v___x_1032_);
if (v___x_1033_ == 0)
{
lean_dec_ref(v___x_1032_);
lean_dec(v_declName_1019_);
goto v___jp_1027_;
}
else
{
lean_object* v___x_1034_; uint8_t v___x_1035_; 
v___x_1034_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1032_);
v___x_1035_ = l_Lean_Expr_isApp(v___x_1034_);
if (v___x_1035_ == 0)
{
lean_dec_ref(v___x_1034_);
lean_dec(v_declName_1019_);
goto v___jp_1027_;
}
else
{
lean_object* v___x_1036_; uint8_t v___x_1037_; 
v___x_1036_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1034_);
v___x_1037_ = l_Lean_Expr_isApp(v___x_1036_);
if (v___x_1037_ == 0)
{
lean_dec_ref(v___x_1036_);
lean_dec(v_declName_1019_);
goto v___jp_1027_;
}
else
{
lean_object* v_arg_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; uint8_t v___x_1041_; 
v_arg_1038_ = lean_ctor_get(v___x_1036_, 1);
lean_inc_ref(v_arg_1038_);
v___x_1039_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1036_);
v___x_1040_ = ((lean_object*)(l_Lean_Meta_Grind_validateHomoTheorem___lam__0___closed__5));
v___x_1041_ = l_Lean_Expr_isConstOf(v___x_1039_, v___x_1040_);
lean_dec_ref(v___x_1039_);
if (v___x_1041_ == 0)
{
lean_dec_ref(v_arg_1038_);
lean_dec(v_declName_1019_);
goto v___jp_1027_;
}
else
{
lean_object* v___x_1042_; 
v___x_1042_ = l_Lean_Expr_getAppFn(v_arg_1038_);
if (lean_obj_tag(v___x_1042_) == 4)
{
lean_object* v_declName_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
lean_dec_ref(v_arg_1038_);
lean_dec(v_declName_1019_);
v_declName_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_declName_1043_);
lean_dec_ref_known(v___x_1042_, 2);
v___x_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1044_, 0, v_declName_1043_);
v___x_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
return v___x_1045_;
}
else
{
lean_object* v___x_1046_; uint8_t v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
lean_dec_ref(v___x_1042_);
v___x_1046_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__1);
v___x_1047_ = 0;
v___x_1048_ = l_Lean_MessageData_ofConstName(v_declName_1019_, v___x_1047_);
v___x_1049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1046_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__3);
v___x_1051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1049_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = l_Lean_indentExpr(v_arg_1038_);
v___x_1053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1051_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
v___x_1054_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___closed__5);
v___x_1055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1053_);
lean_ctor_set(v___x_1055_, 1, v___x_1054_);
v___x_1056_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(v___x_1055_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
return v___x_1056_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___boxed(lean_object* v_declName_1069_, lean_object* v_x_1070_, lean_object* v_concl_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0(v_declName_1069_, v_x_1070_, v_concl_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec_ref(v_x_1070_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f(lean_object* v_declName_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v___f_1084_; lean_object* v___x_1085_; 
lean_inc(v_declName_1078_);
v___f_1084_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1084_, 0, v_declName_1078_);
v___x_1085_ = l_Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6(v_declName_1078_, v_a_1079_, v_a_1080_, v_a_1081_, v_a_1082_);
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; lean_object* v___x_1087_; uint8_t v___x_1088_; lean_object* v___x_1089_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v___x_1085_, 1);
v___x_1087_ = l_Lean_ConstantInfo_type(v_a_1086_);
lean_dec(v_a_1086_);
v___x_1088_ = 0;
v___x_1089_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg(v___x_1087_, v___f_1084_, v___x_1088_, v_a_1079_, v_a_1080_, v_a_1081_, v_a_1082_);
return v___x_1089_;
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
lean_dec_ref(v___f_1084_);
v_a_1090_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1085_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1085_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f___boxed(lean_object* v_declName_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f(v_declName_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_);
lean_dec(v_a_1102_);
lean_dec_ref(v_a_1101_);
lean_dec(v_a_1100_);
lean_dec_ref(v_a_1099_);
return v_res_1104_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6_spec__7_spec__9_spec__10_spec__11_spec__12___redArg___closed__0);
v___x_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
return v___x_1106_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__0);
v___x_1108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1107_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
return v___x_1108_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__0);
v___x_1110_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
lean_ctor_set(v___x_1110_, 2, v___x_1109_);
lean_ctor_set(v___x_1110_, 3, v___x_1109_);
lean_ctor_set(v___x_1110_, 4, v___x_1109_);
lean_ctor_set(v___x_1110_, 5, v___x_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg(lean_object* v_ext_1111_, lean_object* v_b_1112_, uint8_t v_kind_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v_toCold_1118_; lean_object* v_currNamespace_1119_; lean_object* v___x_1120_; lean_object* v_env_1121_; lean_object* v_nextMacroScope_1122_; lean_object* v_ngen_1123_; lean_object* v_auxDeclNGen_1124_; lean_object* v_traceState_1125_; lean_object* v_messages_1126_; lean_object* v_infoState_1127_; lean_object* v_snapshotTasks_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1155_; 
v_toCold_1118_ = lean_ctor_get(v___y_1115_, 0);
v_currNamespace_1119_ = lean_ctor_get(v_toCold_1118_, 4);
v___x_1120_ = lean_st_ref_take(v___y_1116_);
v_env_1121_ = lean_ctor_get(v___x_1120_, 0);
v_nextMacroScope_1122_ = lean_ctor_get(v___x_1120_, 1);
v_ngen_1123_ = lean_ctor_get(v___x_1120_, 2);
v_auxDeclNGen_1124_ = lean_ctor_get(v___x_1120_, 3);
v_traceState_1125_ = lean_ctor_get(v___x_1120_, 4);
v_messages_1126_ = lean_ctor_get(v___x_1120_, 6);
v_infoState_1127_ = lean_ctor_get(v___x_1120_, 7);
v_snapshotTasks_1128_ = lean_ctor_get(v___x_1120_, 8);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1155_ == 0)
{
lean_object* v_unused_1156_; 
v_unused_1156_ = lean_ctor_get(v___x_1120_, 5);
lean_dec(v_unused_1156_);
v___x_1130_ = v___x_1120_;
v_isShared_1131_ = v_isSharedCheck_1155_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_snapshotTasks_1128_);
lean_inc(v_infoState_1127_);
lean_inc(v_messages_1126_);
lean_inc(v_traceState_1125_);
lean_inc(v_auxDeclNGen_1124_);
lean_inc(v_ngen_1123_);
lean_inc(v_nextMacroScope_1122_);
lean_inc(v_env_1121_);
lean_dec(v___x_1120_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1155_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1135_; 
lean_inc(v_currNamespace_1119_);
v___x_1132_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1121_, v_ext_1111_, v_b_1112_, v_kind_1113_, v_currNamespace_1119_);
v___x_1133_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__1);
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 5, v___x_1133_);
lean_ctor_set(v___x_1130_, 0, v___x_1132_);
v___x_1135_ = v___x_1130_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1132_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_nextMacroScope_1122_);
lean_ctor_set(v_reuseFailAlloc_1154_, 2, v_ngen_1123_);
lean_ctor_set(v_reuseFailAlloc_1154_, 3, v_auxDeclNGen_1124_);
lean_ctor_set(v_reuseFailAlloc_1154_, 4, v_traceState_1125_);
lean_ctor_set(v_reuseFailAlloc_1154_, 5, v___x_1133_);
lean_ctor_set(v_reuseFailAlloc_1154_, 6, v_messages_1126_);
lean_ctor_set(v_reuseFailAlloc_1154_, 7, v_infoState_1127_);
lean_ctor_set(v_reuseFailAlloc_1154_, 8, v_snapshotTasks_1128_);
v___x_1135_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v_mctx_1138_; lean_object* v_zetaDeltaFVarIds_1139_; lean_object* v_postponed_1140_; lean_object* v_diag_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1152_; 
v___x_1136_ = lean_st_ref_put(v___y_1116_, v___x_1135_);
v___x_1137_ = lean_st_ref_take(v___y_1114_);
v_mctx_1138_ = lean_ctor_get(v___x_1137_, 0);
v_zetaDeltaFVarIds_1139_ = lean_ctor_get(v___x_1137_, 2);
v_postponed_1140_ = lean_ctor_get(v___x_1137_, 3);
v_diag_1141_ = lean_ctor_get(v___x_1137_, 4);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1152_ == 0)
{
lean_object* v_unused_1153_; 
v_unused_1153_ = lean_ctor_get(v___x_1137_, 1);
lean_dec(v_unused_1153_);
v___x_1143_ = v___x_1137_;
v_isShared_1144_ = v_isSharedCheck_1152_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_diag_1141_);
lean_inc(v_postponed_1140_);
lean_inc(v_zetaDeltaFVarIds_1139_);
lean_inc(v_mctx_1138_);
lean_dec(v___x_1137_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1152_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1148_; 
v___x_1145_ = lean_box(0);
v___x_1146_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___closed__2);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 1, v___x_1146_);
v___x_1148_ = v___x_1143_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_mctx_1138_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v___x_1146_);
lean_ctor_set(v_reuseFailAlloc_1151_, 2, v_zetaDeltaFVarIds_1139_);
lean_ctor_set(v_reuseFailAlloc_1151_, 3, v_postponed_1140_);
lean_ctor_set(v_reuseFailAlloc_1151_, 4, v_diag_1141_);
v___x_1148_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = lean_st_ref_put(v___y_1114_, v___x_1148_);
v___x_1150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1145_);
return v___x_1150_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg___boxed(lean_object* v_ext_1157_, lean_object* v_b_1158_, lean_object* v_kind_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
uint8_t v_kind_boxed_1164_; lean_object* v_res_1165_; 
v_kind_boxed_1164_ = lean_unbox(v_kind_1159_);
v_res_1165_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg(v_ext_1157_, v_b_1158_, v_kind_boxed_1164_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0(lean_object* v_00_u03b1_1166_, lean_object* v_00_u03b2_1167_, lean_object* v_00_u03c3_1168_, lean_object* v_ext_1169_, lean_object* v_b_1170_, uint8_t v_kind_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg(v_ext_1169_, v_b_1170_, v_kind_1171_, v___y_1173_, v___y_1174_, v___y_1175_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___boxed(lean_object* v_00_u03b1_1178_, lean_object* v_00_u03b2_1179_, lean_object* v_00_u03c3_1180_, lean_object* v_ext_1181_, lean_object* v_b_1182_, lean_object* v_kind_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
uint8_t v_kind_boxed_1189_; lean_object* v_res_1190_; 
v_kind_boxed_1189_ = lean_unbox(v_kind_1183_);
v_res_1190_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0(v_00_u03b1_1178_, v_00_u03b2_1179_, v_00_u03c3_1180_, v_ext_1181_, v_b_1182_, v_kind_boxed_1189_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoAttr___lam__0(uint8_t v_attrKind_1191_, lean_object* v_declName_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v___x_1198_; 
lean_inc(v_declName_1192_);
v___x_1198_ = l_Lean_Meta_Grind_validateHomoTheorem(v_declName_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v___x_1199_; 
lean_dec_ref_known(v___x_1198_, 1);
v___x_1199_ = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_checkEqInjection_x3f(v_declName_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1211_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1202_ = v___x_1199_;
v_isShared_1203_ = v_isSharedCheck_1211_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1199_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1211_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
if (lean_obj_tag(v_a_1200_) == 1)
{
lean_object* v_val_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
lean_del_object(v___x_1202_);
v_val_1204_ = lean_ctor_get(v_a_1200_, 0);
lean_inc(v_val_1204_);
lean_dec_ref_known(v_a_1200_, 1);
v___x_1205_ = l_Lean_Meta_Grind_homoSourceTypesExt;
v___x_1206_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg(v___x_1205_, v_val_1204_, v_attrKind_1191_, v___y_1194_, v___y_1195_, v___y_1196_);
return v___x_1206_;
}
else
{
lean_object* v___x_1207_; lean_object* v___x_1209_; 
lean_dec(v_a_1200_);
v___x_1207_ = lean_box(0);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1207_);
v___x_1209_ = v___x_1202_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
}
else
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
v_a_1212_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1199_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1199_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
else
{
lean_dec(v_declName_1192_);
return v___x_1198_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoAttr___lam__0___boxed(lean_object* v_attrKind_1220_, lean_object* v_declName_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
uint8_t v_attrKind_boxed_1227_; lean_object* v_res_1228_; 
v_attrKind_boxed_1227_ = lean_unbox(v_attrKind_1220_);
v_res_1228_ = l_Lean_Meta_Grind_addHomoAttr___lam__0(v_attrKind_boxed_1227_, v_declName_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1222_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoAttr(lean_object* v_declName_1229_, uint8_t v_attrKind_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v___x_1236_; lean_object* v___f_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1236_ = lean_box(v_attrKind_1230_);
v___f_1237_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_addHomoAttr___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1237_, 0, v___x_1236_);
v___x_1238_ = l_Lean_Meta_Grind_homoExt;
v___x_1239_ = l_Lean_Meta_Sym_Simp_addSymSimpDecl(v___x_1238_, v_declName_1229_, v_attrKind_1230_, v___f_1237_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoAttr___boxed(lean_object* v_declName_1240_, lean_object* v_attrKind_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v___y_1246_){
_start:
{
uint8_t v_attrKind_boxed_1247_; lean_object* v_res_1248_; 
v_attrKind_boxed_1247_ = lean_unbox(v_attrKind_1241_);
v_res_1248_ = l_Lean_Meta_Grind_addHomoAttr(v_declName_1240_, v_attrKind_boxed_1247_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_);
lean_dec(v_a_1245_);
lean_dec_ref(v_a_1244_);
lean_dec(v_a_1243_);
lean_dec_ref(v_a_1242_);
return v_res_1248_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_instBEqHomoPredTheorem_beq(lean_object* v_x_1254_, lean_object* v_x_1255_){
_start:
{
lean_object* v_declName_1256_; lean_object* v_arity_1257_; lean_object* v_declName_1258_; lean_object* v_arity_1259_; uint8_t v___x_1260_; 
v_declName_1256_ = lean_ctor_get(v_x_1254_, 0);
v_arity_1257_ = lean_ctor_get(v_x_1254_, 1);
v_declName_1258_ = lean_ctor_get(v_x_1255_, 0);
v_arity_1259_ = lean_ctor_get(v_x_1255_, 1);
v___x_1260_ = lean_name_eq(v_declName_1256_, v_declName_1258_);
if (v___x_1260_ == 0)
{
return v___x_1260_;
}
else
{
uint8_t v___x_1261_; 
v___x_1261_ = lean_nat_dec_eq(v_arity_1257_, v_arity_1259_);
return v___x_1261_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqHomoPredTheorem_beq___boxed(lean_object* v_x_1262_, lean_object* v_x_1263_){
_start:
{
uint8_t v_res_1264_; lean_object* v_r_1265_; 
v_res_1264_ = l_Lean_Meta_Grind_instBEqHomoPredTheorem_beq(v_x_1262_, v_x_1263_);
lean_dec_ref(v_x_1263_);
lean_dec_ref(v_x_1262_);
v_r_1265_ = lean_box(v_res_1264_);
return v_r_1265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_(lean_object* v_s_1268_, lean_object* v_x_1269_){
_start:
{
lean_object* v_fst_1270_; lean_object* v_snd_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1284_; 
v_fst_1270_ = lean_ctor_get(v_x_1269_, 0);
v_snd_1271_ = lean_ctor_get(v_x_1269_, 1);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_x_1269_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1273_ = v_x_1269_;
v_isShared_1274_ = v_isSharedCheck_1284_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_snd_1271_);
lean_inc(v_fst_1270_);
lean_dec(v_x_1269_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1284_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___y_1276_; lean_object* v___x_1281_; 
v___x_1281_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_s_1268_, v_fst_1270_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v___x_1282_; 
v___x_1282_ = lean_box(0);
v___y_1276_ = v___x_1282_;
goto v___jp_1275_;
}
else
{
lean_object* v_val_1283_; 
v_val_1283_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_val_1283_);
lean_dec_ref_known(v___x_1281_, 1);
v___y_1276_ = v_val_1283_;
goto v___jp_1275_;
}
v___jp_1275_:
{
lean_object* v___x_1278_; 
if (v_isShared_1274_ == 0)
{
lean_ctor_set_tag(v___x_1273_, 1);
lean_ctor_set(v___x_1273_, 1, v___y_1276_);
lean_ctor_set(v___x_1273_, 0, v_snd_1271_);
v___x_1278_ = v___x_1273_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v_snd_1271_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v___y_1276_);
v___x_1278_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1279_; 
v___x_1279_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_1270_, v___x_1278_, v_s_1268_);
return v___x_1279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_(lean_object* v_x_1285_, lean_object* v_a_1286_){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1287_, 0, v_a_1286_);
lean_inc_ref_n(v___x_1287_, 2);
v___x_1288_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
lean_ctor_set(v___x_1288_, 2, v___x_1287_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2____boxed(lean_object* v_x_1289_, lean_object* v_a_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_(v_x_1289_, v_a_1290_);
lean_dec_ref(v_x_1289_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_));
v___x_1308_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2____boxed(lean_object* v___y_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_();
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoPredTheorems___redArg(lean_object* v_a_1311_){
_start:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v_env_1315_; lean_object* v___x_1316_; lean_object* v_ext_1317_; lean_object* v_toEnvExtension_1318_; lean_object* v_asyncMode_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1313_ = lean_box(1);
v___x_1314_ = lean_st_ref_get(v_a_1311_);
v_env_1315_ = lean_ctor_get(v___x_1314_, 0);
lean_inc_ref(v_env_1315_);
lean_dec(v___x_1314_);
v___x_1316_ = l_Lean_Meta_Grind_homoPredExt;
v_ext_1317_ = lean_ctor_get(v___x_1316_, 1);
v_toEnvExtension_1318_ = lean_ctor_get(v_ext_1317_, 0);
v_asyncMode_1319_ = lean_ctor_get(v_toEnvExtension_1318_, 2);
v___x_1320_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1313_, v___x_1316_, v_env_1315_, v_asyncMode_1319_);
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoPredTheorems___redArg___boxed(lean_object* v_a_1322_, lean_object* v___y_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_Lean_Meta_Grind_getHomoPredTheorems___redArg(v_a_1322_);
lean_dec(v_a_1322_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoPredTheorems(lean_object* v_a_1325_, lean_object* v_a_1326_){
_start:
{
lean_object* v___x_1328_; 
v___x_1328_ = l_Lean_Meta_Grind_getHomoPredTheorems___redArg(v_a_1326_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getHomoPredTheorems___boxed(lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_Meta_Grind_getHomoPredTheorems(v_a_1329_, v_a_1330_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_addHomoPredAttr_spec__1(lean_object* v_msg_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v___f_1340_; lean_object* v___x_2346__overap_1341_; lean_object* v___x_1342_; 
v___f_1340_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_addHomoPredAttr_spec__1___closed__0));
v___x_2346__overap_1341_ = lean_panic_fn_borrowed(v___f_1340_, v_msg_1334_);
lean_inc(v___y_1338_);
lean_inc_ref(v___y_1337_);
lean_inc(v___y_1336_);
lean_inc_ref(v___y_1335_);
v___x_1342_ = lean_apply_5(v___x_2346__overap_1341_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, lean_box(0));
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_addHomoPredAttr_spec__1___boxed(lean_object* v_msg_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_panic___at___00Lean_Meta_Grind_addHomoPredAttr_spec__1(v_msg_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
return v_res_1349_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0___redArg(lean_object* v_xs_1350_, lean_object* v_ys_1351_, lean_object* v_x_1352_){
_start:
{
lean_object* v_zero_1353_; uint8_t v_isZero_1354_; 
v_zero_1353_ = lean_unsigned_to_nat(0u);
v_isZero_1354_ = lean_nat_dec_eq(v_x_1352_, v_zero_1353_);
if (v_isZero_1354_ == 1)
{
lean_dec(v_x_1352_);
return v_isZero_1354_;
}
else
{
lean_object* v_one_1355_; lean_object* v_n_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; uint8_t v___x_1359_; 
v_one_1355_ = lean_unsigned_to_nat(1u);
v_n_1356_ = lean_nat_sub(v_x_1352_, v_one_1355_);
lean_dec(v_x_1352_);
v___x_1357_ = lean_array_fget_borrowed(v_xs_1350_, v_n_1356_);
v___x_1358_ = lean_array_fget_borrowed(v_ys_1351_, v_n_1356_);
v___x_1359_ = lean_expr_eqv(v___x_1357_, v___x_1358_);
if (v___x_1359_ == 0)
{
lean_dec(v_n_1356_);
return v___x_1359_;
}
else
{
v_x_1352_ = v_n_1356_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0___redArg___boxed(lean_object* v_xs_1361_, lean_object* v_ys_1362_, lean_object* v_x_1363_){
_start:
{
uint8_t v_res_1364_; lean_object* v_r_1365_; 
v_res_1364_ = l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0___redArg(v_xs_1361_, v_ys_1362_, v_x_1363_);
lean_dec_ref(v_ys_1362_);
lean_dec_ref(v_xs_1361_);
v_r_1365_ = lean_box(v_res_1364_);
return v_r_1365_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1366_; lean_object* v_dummy_1367_; 
v___x_1366_ = lean_box(0);
v_dummy_1367_ = l_Lean_Expr_sort___override(v___x_1366_);
return v_dummy_1367_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_addHomoPredAttr___lam__0(lean_object* v_a_1368_, lean_object* v_e_1369_){
_start:
{
uint8_t v___y_1371_; uint8_t v___x_1387_; 
v___x_1387_ = l_Lean_Expr_isApp(v_e_1369_);
if (v___x_1387_ == 0)
{
v___y_1371_ = v___x_1387_;
goto v___jp_1370_;
}
else
{
lean_object* v___x_1388_; uint8_t v___x_1389_; 
v___x_1388_ = l_Lean_Expr_getAppFn(v_e_1369_);
v___x_1389_ = l_Lean_Expr_isConst(v___x_1388_);
lean_dec_ref(v___x_1388_);
v___y_1371_ = v___x_1389_;
goto v___jp_1370_;
}
v___jp_1370_:
{
if (v___y_1371_ == 0)
{
lean_dec_ref(v_e_1369_);
return v___y_1371_;
}
else
{
lean_object* v_dummy_1372_; lean_object* v_nargs_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
v_dummy_1372_ = lean_obj_once(&l_Lean_Meta_Grind_addHomoPredAttr___lam__0___closed__0, &l_Lean_Meta_Grind_addHomoPredAttr___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__0___closed__0);
v_nargs_1373_ = l_Lean_Expr_getAppNumArgs(v_e_1369_);
lean_inc(v_nargs_1373_);
v___x_1374_ = lean_mk_array(v_nargs_1373_, v_dummy_1372_);
v___x_1375_ = lean_unsigned_to_nat(1u);
v___x_1376_ = lean_nat_sub(v_nargs_1373_, v___x_1375_);
lean_dec(v_nargs_1373_);
v___x_1377_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1369_, v___x_1374_, v___x_1376_);
v___x_1378_ = lean_array_get_size(v___x_1377_);
v___x_1379_ = lean_array_get_size(v_a_1368_);
v___x_1380_ = lean_nat_dec_lt(v___x_1378_, v___x_1379_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; uint8_t v___x_1384_; 
v___x_1381_ = lean_nat_sub(v___x_1378_, v___x_1379_);
v___x_1382_ = l_Array_extract___redArg(v___x_1377_, v___x_1381_, v___x_1378_);
lean_dec_ref(v___x_1377_);
v___x_1383_ = lean_array_get_size(v___x_1382_);
v___x_1384_ = lean_nat_dec_eq(v___x_1383_, v___x_1379_);
if (v___x_1384_ == 0)
{
lean_dec_ref(v___x_1382_);
return v___x_1384_;
}
else
{
uint8_t v___x_1385_; 
v___x_1385_ = l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0___redArg(v___x_1382_, v_a_1368_, v___x_1383_);
lean_dec_ref(v___x_1382_);
return v___x_1385_;
}
}
else
{
uint8_t v___x_1386_; 
lean_dec_ref(v___x_1377_);
v___x_1386_ = 0;
return v___x_1386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__0___boxed(lean_object* v_a_1390_, lean_object* v_e_1391_){
_start:
{
uint8_t v_res_1392_; lean_object* v_r_1393_; 
v_res_1392_ = l_Lean_Meta_Grind_addHomoPredAttr___lam__0(v_a_1390_, v_e_1391_);
lean_dec_ref(v_a_1390_);
v_r_1393_ = lean_box(v_res_1392_);
return v_r_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2___redArg(lean_object* v_as_1394_, size_t v_i_1395_, size_t v_stop_1396_, lean_object* v_b_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v_a_1403_; uint8_t v___x_1407_; 
v___x_1407_ = lean_usize_dec_eq(v_i_1395_, v_stop_1396_);
if (v___x_1407_ == 0)
{
lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1408_ = lean_array_uget_borrowed(v_as_1394_, v_i_1395_);
v___x_1409_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_1408_, v___y_1398_, v___y_1399_, v___y_1400_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_a_1410_; uint8_t v___x_1411_; uint8_t v___x_1412_; 
v_a_1410_ = lean_ctor_get(v___x_1409_, 0);
lean_inc(v_a_1410_);
lean_dec_ref_known(v___x_1409_, 1);
v___x_1411_ = l_Lean_LocalDecl_binderInfo(v_a_1410_);
lean_dec(v_a_1410_);
v___x_1412_ = l_Lean_BinderInfo_isExplicit(v___x_1411_);
if (v___x_1412_ == 0)
{
v_a_1403_ = v_b_1397_;
goto v___jp_1402_;
}
else
{
lean_object* v___x_1413_; 
lean_inc(v___x_1408_);
v___x_1413_ = lean_array_push(v_b_1397_, v___x_1408_);
v_a_1403_ = v___x_1413_;
goto v___jp_1402_;
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec_ref(v_b_1397_);
v_a_1414_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1409_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1409_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
else
{
lean_object* v___x_1422_; 
v___x_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1422_, 0, v_b_1397_);
return v___x_1422_;
}
v___jp_1402_:
{
size_t v___x_1404_; size_t v___x_1405_; 
v___x_1404_ = ((size_t)1ULL);
v___x_1405_ = lean_usize_add(v_i_1395_, v___x_1404_);
v_i_1395_ = v___x_1405_;
v_b_1397_ = v_a_1403_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2___redArg___boxed(lean_object* v_as_1423_, lean_object* v_i_1424_, lean_object* v_stop_1425_, lean_object* v_b_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_){
_start:
{
size_t v_i_boxed_1431_; size_t v_stop_boxed_1432_; lean_object* v_res_1433_; 
v_i_boxed_1431_ = lean_unbox_usize(v_i_1424_);
lean_dec(v_i_1424_);
v_stop_boxed_1432_ = lean_unbox_usize(v_stop_1425_);
lean_dec(v_stop_1425_);
v_res_1433_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2___redArg(v_as_1423_, v_i_boxed_1431_, v_stop_boxed_1432_, v_b_1426_, v___y_1427_, v___y_1428_, v___y_1429_);
lean_dec(v___y_1429_);
lean_dec_ref(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec_ref(v_as_1423_);
return v_res_1433_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1437_ = ((lean_object*)(l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__2));
v___x_1438_ = lean_unsigned_to_nat(41u);
v___x_1439_ = lean_unsigned_to_nat(163u);
v___x_1440_ = ((lean_object*)(l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__1));
v___x_1441_ = ((lean_object*)(l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__0));
v___x_1442_ = l_mkPanicMessageWithDecl(v___x_1441_, v___x_1440_, v___x_1439_, v___x_1438_, v___x_1437_);
return v___x_1442_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1444_ = ((lean_object*)(l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__4));
v___x_1445_ = l_Lean_stringToMessageData(v___x_1444_);
return v___x_1445_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__7(void){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1447_ = ((lean_object*)(l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__6));
v___x_1448_ = l_Lean_stringToMessageData(v___x_1447_);
return v___x_1448_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__9(void){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1450_ = ((lean_object*)(l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__8));
v___x_1451_ = l_Lean_stringToMessageData(v___x_1450_);
return v___x_1451_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__11(void){
_start:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1453_ = ((lean_object*)(l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__10));
v___x_1454_ = l_Lean_stringToMessageData(v___x_1453_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1(lean_object* v_declName_1457_, uint8_t v_attrKind_1458_, lean_object* v_xs_1459_, lean_object* v_type_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v___y_1467_; lean_object* v___y_1468_; lean_object* v_a_1488_; lean_object* v___y_1501_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v___x_1511_ = lean_unsigned_to_nat(0u);
v___x_1512_ = lean_array_get_size(v_xs_1459_);
v___x_1513_ = ((lean_object*)(l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__12));
v___x_1514_ = lean_nat_dec_lt(v___x_1511_, v___x_1512_);
if (v___x_1514_ == 0)
{
v_a_1488_ = v___x_1513_;
goto v___jp_1487_;
}
else
{
uint8_t v___x_1515_; 
v___x_1515_ = lean_nat_dec_le(v___x_1512_, v___x_1512_);
if (v___x_1515_ == 0)
{
if (v___x_1514_ == 0)
{
v_a_1488_ = v___x_1513_;
goto v___jp_1487_;
}
else
{
size_t v___x_1516_; size_t v___x_1517_; lean_object* v___x_1518_; 
v___x_1516_ = ((size_t)0ULL);
v___x_1517_ = lean_usize_of_nat(v___x_1512_);
v___x_1518_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2___redArg(v_xs_1459_, v___x_1516_, v___x_1517_, v___x_1513_, v___y_1461_, v___y_1463_, v___y_1464_);
v___y_1501_ = v___x_1518_;
goto v___jp_1500_;
}
}
else
{
size_t v___x_1519_; size_t v___x_1520_; lean_object* v___x_1521_; 
v___x_1519_ = ((size_t)0ULL);
v___x_1520_ = lean_usize_of_nat(v___x_1512_);
v___x_1521_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2___redArg(v_xs_1459_, v___x_1519_, v___x_1520_, v___x_1513_, v___y_1461_, v___y_1463_, v___y_1464_);
v___y_1501_ = v___x_1521_;
goto v___jp_1500_;
}
}
v___jp_1466_:
{
lean_object* v___x_1469_; 
v___x_1469_ = lean_find_expr(v___y_1467_, v_type_1460_);
lean_dec_ref(v___y_1467_);
if (lean_obj_tag(v___x_1469_) == 1)
{
lean_object* v_val_1470_; lean_object* v___x_1471_; 
v_val_1470_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_val_1470_);
lean_dec_ref_known(v___x_1469_, 1);
v___x_1471_ = l_Lean_Expr_getAppFn(v_val_1470_);
lean_dec(v_val_1470_);
if (lean_obj_tag(v___x_1471_) == 4)
{
lean_object* v_declName_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v_declName_1472_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_declName_1472_);
lean_dec_ref_known(v___x_1471_, 2);
v___x_1473_ = l_Lean_Meta_Grind_homoPredExt;
v___x_1474_ = lean_array_get_size(v___y_1468_);
lean_dec_ref(v___y_1468_);
v___x_1475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1475_, 0, v_declName_1457_);
lean_ctor_set(v___x_1475_, 1, v___x_1474_);
v___x_1476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1476_, 0, v_declName_1472_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
v___x_1477_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addHomoAttr_spec__0___redArg(v___x_1473_, v___x_1476_, v_attrKind_1458_, v___y_1462_, v___y_1463_, v___y_1464_);
return v___x_1477_;
}
else
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
lean_dec_ref(v___x_1471_);
lean_dec_ref(v___y_1468_);
lean_dec(v_declName_1457_);
v___x_1478_ = lean_obj_once(&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__3, &l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__3_once, _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__3);
v___x_1479_ = l_panic___at___00Lean_Meta_Grind_addHomoPredAttr_spec__1(v___x_1478_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
return v___x_1479_;
}
}
else
{
lean_object* v___x_1480_; uint8_t v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
lean_dec(v___x_1469_);
lean_dec_ref(v___y_1468_);
v___x_1480_ = lean_obj_once(&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__5, &l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__5_once, _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__5);
v___x_1481_ = 0;
v___x_1482_ = l_Lean_MessageData_ofConstName(v_declName_1457_, v___x_1481_);
v___x_1483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1480_);
lean_ctor_set(v___x_1483_, 1, v___x_1482_);
v___x_1484_ = lean_obj_once(&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__7, &l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__7_once, _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__7);
v___x_1485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1483_);
lean_ctor_set(v___x_1485_, 1, v___x_1484_);
v___x_1486_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(v___x_1485_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
return v___x_1486_;
}
}
v___jp_1487_:
{
lean_object* v___f_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; uint8_t v___x_1492_; 
lean_inc_ref(v_a_1488_);
v___f_1489_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_addHomoPredAttr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1489_, 0, v_a_1488_);
v___x_1490_ = lean_array_get_size(v_a_1488_);
v___x_1491_ = lean_unsigned_to_nat(0u);
v___x_1492_ = lean_nat_dec_eq(v___x_1490_, v___x_1491_);
if (v___x_1492_ == 0)
{
v___y_1467_ = v___f_1489_;
v___y_1468_ = v_a_1488_;
goto v___jp_1466_;
}
else
{
lean_object* v___x_1493_; uint8_t v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
lean_dec_ref(v___f_1489_);
lean_dec_ref(v_a_1488_);
v___x_1493_ = lean_obj_once(&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__9, &l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__9_once, _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__9);
v___x_1494_ = 0;
v___x_1495_ = l_Lean_MessageData_ofConstName(v_declName_1457_, v___x_1494_);
v___x_1496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1493_);
lean_ctor_set(v___x_1496_, 1, v___x_1495_);
v___x_1497_ = lean_obj_once(&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__11, &l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__11_once, _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__11);
v___x_1498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1496_);
lean_ctor_set(v___x_1498_, 1, v___x_1497_);
v___x_1499_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(v___x_1498_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
return v___x_1499_;
}
}
v___jp_1500_:
{
if (lean_obj_tag(v___y_1501_) == 0)
{
lean_object* v_a_1502_; 
v_a_1502_ = lean_ctor_get(v___y_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___y_1501_, 1);
v_a_1488_ = v_a_1502_;
goto v___jp_1487_;
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
lean_dec(v_declName_1457_);
v_a_1503_ = lean_ctor_get(v___y_1501_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___y_1501_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___y_1501_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___y_1501_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoPredAttr___lam__1___boxed(lean_object* v_declName_1522_, lean_object* v_attrKind_1523_, lean_object* v_xs_1524_, lean_object* v_type_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
uint8_t v_attrKind_boxed_1531_; lean_object* v_res_1532_; 
v_attrKind_boxed_1531_ = lean_unbox(v_attrKind_1523_);
v_res_1532_ = l_Lean_Meta_Grind_addHomoPredAttr___lam__1(v_declName_1522_, v_attrKind_boxed_1531_, v_xs_1524_, v_type_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec_ref(v_type_1525_);
lean_dec_ref(v_xs_1524_);
return v_res_1532_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_addHomoPredAttr___closed__1(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1534_ = ((lean_object*)(l_Lean_Meta_Grind_addHomoPredAttr___closed__0));
v___x_1535_ = l_Lean_stringToMessageData(v___x_1534_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoPredAttr(lean_object* v_declName_1536_, uint8_t v_attrKind_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_){
_start:
{
lean_object* v___x_1543_; lean_object* v___f_1544_; lean_object* v___x_1545_; 
v___x_1543_ = lean_box(v_attrKind_1537_);
lean_inc_n(v_declName_1536_, 2);
v___f_1544_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_addHomoPredAttr___lam__1___boxed), 9, 2);
lean_closure_set(v___f_1544_, 0, v_declName_1536_);
lean_closure_set(v___f_1544_, 1, v___x_1543_);
v___x_1545_ = l_Lean_getConstInfo___at___00Lean_Meta_Grind_validateHomoTheorem_spec__6(v_declName_1536_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v_a_1546_; lean_object* v___x_1547_; lean_object* v___y_1549_; lean_object* v___y_1550_; lean_object* v___y_1551_; lean_object* v___y_1552_; lean_object* v___x_1555_; 
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
lean_inc(v_a_1546_);
lean_dec_ref_known(v___x_1545_, 1);
v___x_1547_ = l_Lean_ConstantInfo_type(v_a_1546_);
lean_dec(v_a_1546_);
lean_inc_ref(v___x_1547_);
v___x_1555_ = l_Lean_Meta_isProp(v___x_1547_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; uint8_t v___x_1557_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1556_);
lean_dec_ref_known(v___x_1555_, 1);
v___x_1557_ = lean_unbox(v_a_1556_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; uint8_t v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
lean_dec_ref(v___x_1547_);
lean_dec_ref(v___f_1544_);
v___x_1558_ = lean_obj_once(&l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__9, &l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__9_once, _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__1___closed__9);
v___x_1559_ = lean_unbox(v_a_1556_);
lean_dec(v_a_1556_);
v___x_1560_ = l_Lean_MessageData_ofConstName(v_declName_1536_, v___x_1559_);
v___x_1561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1558_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
v___x_1562_ = lean_obj_once(&l_Lean_Meta_Grind_addHomoPredAttr___closed__1, &l_Lean_Meta_Grind_addHomoPredAttr___closed__1_once, _init_l_Lean_Meta_Grind_addHomoPredAttr___closed__1);
v___x_1563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1561_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
v___x_1564_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateHomoTheorem_spec__4___redArg(v___x_1563_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_);
return v___x_1564_;
}
else
{
lean_dec(v_a_1556_);
lean_dec(v_declName_1536_);
v___y_1549_ = v_a_1538_;
v___y_1550_ = v_a_1539_;
v___y_1551_ = v_a_1540_;
v___y_1552_ = v_a_1541_;
goto v___jp_1548_;
}
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec_ref(v___x_1547_);
lean_dec_ref(v___f_1544_);
lean_dec(v_declName_1536_);
v_a_1565_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1555_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1555_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
v___jp_1548_:
{
uint8_t v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = 0;
v___x_1554_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Grind_validateHomoTheorem_spec__7___redArg(v___x_1547_, v___f_1544_, v___x_1553_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
return v___x_1554_;
}
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
lean_dec_ref(v___f_1544_);
lean_dec(v_declName_1536_);
v_a_1573_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1545_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1545_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHomoPredAttr___boxed(lean_object* v_declName_1581_, lean_object* v_attrKind_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v___y_1587_){
_start:
{
uint8_t v_attrKind_boxed_1588_; lean_object* v_res_1589_; 
v_attrKind_boxed_1588_ = lean_unbox(v_attrKind_1582_);
v_res_1589_ = l_Lean_Meta_Grind_addHomoPredAttr(v_declName_1581_, v_attrKind_boxed_1588_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_);
lean_dec(v_a_1586_);
lean_dec_ref(v_a_1585_);
lean_dec(v_a_1584_);
lean_dec_ref(v_a_1583_);
return v_res_1589_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0(lean_object* v_xs_1590_, lean_object* v_ys_1591_, lean_object* v_hsz_1592_, lean_object* v_x_1593_, lean_object* v_x_1594_){
_start:
{
uint8_t v___x_1595_; 
v___x_1595_ = l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0___redArg(v_xs_1590_, v_ys_1591_, v_x_1593_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0___boxed(lean_object* v_xs_1596_, lean_object* v_ys_1597_, lean_object* v_hsz_1598_, lean_object* v_x_1599_, lean_object* v_x_1600_){
_start:
{
uint8_t v_res_1601_; lean_object* v_r_1602_; 
v_res_1601_ = l_Array_isEqvAux___at___00Lean_Meta_Grind_addHomoPredAttr_spec__0(v_xs_1596_, v_ys_1597_, v_hsz_1598_, v_x_1599_, v_x_1600_);
lean_dec_ref(v_ys_1597_);
lean_dec_ref(v_xs_1596_);
v_r_1602_ = lean_box(v_res_1601_);
return v_r_1602_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2(lean_object* v_as_1603_, size_t v_i_1604_, size_t v_stop_1605_, lean_object* v_b_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
lean_object* v___x_1612_; 
v___x_1612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2___redArg(v_as_1603_, v_i_1604_, v_stop_1605_, v_b_1606_, v___y_1607_, v___y_1609_, v___y_1610_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2___boxed(lean_object* v_as_1613_, lean_object* v_i_1614_, lean_object* v_stop_1615_, lean_object* v_b_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
size_t v_i_boxed_1622_; size_t v_stop_boxed_1623_; lean_object* v_res_1624_; 
v_i_boxed_1622_ = lean_unbox_usize(v_i_1614_);
lean_dec(v_i_1614_);
v_stop_boxed_1623_ = lean_unbox_usize(v_stop_1615_);
lean_dec(v_stop_1615_);
v_res_1624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_addHomoPredAttr_spec__2(v_as_1613_, v_i_boxed_1622_, v_stop_boxed_1623_, v_b_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec_ref(v_as_1613_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0___redArg(lean_object* v___x_1625_, lean_object* v_as_x27_1626_, lean_object* v_b_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
if (lean_obj_tag(v_as_x27_1626_) == 0)
{
lean_object* v___x_1633_; 
v___x_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1633_, 0, v_b_1627_);
return v___x_1633_;
}
else
{
lean_object* v_head_1634_; lean_object* v_tail_1635_; lean_object* v___y_1637_; uint8_t v___y_1638_; lean_object* v_a_1642_; lean_object* v_declName_1645_; lean_object* v_arity_1646_; lean_object* v___x_1647_; uint8_t v___x_1648_; 
v_head_1634_ = lean_ctor_get(v_as_x27_1626_, 0);
v_tail_1635_ = lean_ctor_get(v_as_x27_1626_, 1);
v_declName_1645_ = lean_ctor_get(v_head_1634_, 0);
v_arity_1646_ = lean_ctor_get(v_head_1634_, 1);
v___x_1647_ = lean_array_get_size(v___x_1625_);
v___x_1648_ = lean_nat_dec_le(v_arity_1646_, v___x_1647_);
if (v___x_1648_ == 0)
{
v_as_x27_1626_ = v_tail_1635_;
goto _start;
}
else
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1650_ = lean_nat_sub(v___x_1647_, v_arity_1646_);
v___x_1651_ = l_Array_extract___redArg(v___x_1625_, v___x_1650_, v___x_1647_);
lean_inc(v_declName_1645_);
v___x_1652_ = l_Lean_Meta_mkAppM(v_declName_1645_, v___x_1651_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1654_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc_n(v_a_1653_, 2);
lean_dec_ref_known(v___x_1652_, 1);
lean_inc(v___y_1631_);
lean_inc_ref(v___y_1630_);
lean_inc(v___y_1629_);
lean_inc_ref(v___y_1628_);
v___x_1654_ = lean_infer_type(v_a_1653_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v_a_1653_);
lean_ctor_set(v___x_1656_, 1, v_a_1655_);
v___x_1657_ = lean_array_push(v_b_1627_, v___x_1656_);
v_as_x27_1626_ = v_tail_1635_;
v_b_1627_ = v___x_1657_;
goto _start;
}
else
{
lean_object* v_a_1659_; 
lean_dec(v_a_1653_);
v_a_1659_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v___x_1654_, 1);
v_a_1642_ = v_a_1659_;
goto v___jp_1641_;
}
}
else
{
lean_object* v_a_1660_; 
v_a_1660_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1660_);
lean_dec_ref_known(v___x_1652_, 1);
v_a_1642_ = v_a_1660_;
goto v___jp_1641_;
}
}
v___jp_1636_:
{
if (v___y_1638_ == 0)
{
lean_dec_ref(v___y_1637_);
v_as_x27_1626_ = v_tail_1635_;
goto _start;
}
else
{
lean_object* v___x_1640_; 
lean_dec_ref(v_b_1627_);
v___x_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1640_, 0, v___y_1637_);
return v___x_1640_;
}
}
v___jp_1641_:
{
uint8_t v___x_1643_; 
v___x_1643_ = l_Lean_Exception_isInterrupt(v_a_1642_);
if (v___x_1643_ == 0)
{
uint8_t v___x_1644_; 
lean_inc_ref(v_a_1642_);
v___x_1644_ = l_Lean_Exception_isRuntime(v_a_1642_);
v___y_1637_ = v_a_1642_;
v___y_1638_ = v___x_1644_;
goto v___jp_1636_;
}
else
{
v___y_1637_ = v_a_1642_;
v___y_1638_ = v___x_1643_;
goto v___jp_1636_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0___redArg___boxed(lean_object* v___x_1661_, lean_object* v_as_x27_1662_, lean_object* v_b_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0___redArg(v___x_1661_, v_as_x27_1662_, v_b_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec(v_as_x27_1662_);
lean_dec_ref(v___x_1661_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkHomoPredInstances(lean_object* v_e_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l_Lean_Expr_getAppFn(v_e_1672_);
if (lean_obj_tag(v___x_1678_) == 4)
{
lean_object* v_declName_1679_; lean_object* v___x_1680_; lean_object* v_a_1681_; lean_object* v___x_1683_; uint8_t v_isShared_1684_; uint8_t v_isSharedCheck_1699_; 
v_declName_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_declName_1679_);
lean_dec_ref_known(v___x_1678_, 2);
v___x_1680_ = l_Lean_Meta_Grind_getHomoPredTheorems___redArg(v_a_1676_);
v_a_1681_ = lean_ctor_get(v___x_1680_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1680_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1683_ = v___x_1680_;
v_isShared_1684_ = v_isSharedCheck_1699_;
goto v_resetjp_1682_;
}
else
{
lean_inc(v_a_1681_);
lean_dec(v___x_1680_);
v___x_1683_ = lean_box(0);
v_isShared_1684_ = v_isSharedCheck_1699_;
goto v_resetjp_1682_;
}
v_resetjp_1682_:
{
lean_object* v___x_1685_; 
v___x_1685_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_1681_, v_declName_1679_);
lean_dec(v_declName_1679_);
lean_dec(v_a_1681_);
if (lean_obj_tag(v___x_1685_) == 1)
{
lean_object* v_val_1686_; lean_object* v_dummy_1687_; lean_object* v_nargs_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
lean_del_object(v___x_1683_);
v_val_1686_ = lean_ctor_get(v___x_1685_, 0);
lean_inc(v_val_1686_);
lean_dec_ref_known(v___x_1685_, 1);
v_dummy_1687_ = lean_obj_once(&l_Lean_Meta_Grind_addHomoPredAttr___lam__0___closed__0, &l_Lean_Meta_Grind_addHomoPredAttr___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_addHomoPredAttr___lam__0___closed__0);
v_nargs_1688_ = l_Lean_Expr_getAppNumArgs(v_e_1672_);
lean_inc(v_nargs_1688_);
v___x_1689_ = lean_mk_array(v_nargs_1688_, v_dummy_1687_);
v___x_1690_ = lean_unsigned_to_nat(1u);
v___x_1691_ = lean_nat_sub(v_nargs_1688_, v___x_1690_);
lean_dec(v_nargs_1688_);
v___x_1692_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1672_, v___x_1689_, v___x_1691_);
v___x_1693_ = ((lean_object*)(l_Lean_Meta_Grind_mkHomoPredInstances___closed__0));
v___x_1694_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0___redArg(v___x_1692_, v_val_1686_, v___x_1693_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_);
lean_dec(v_val_1686_);
lean_dec_ref(v___x_1692_);
return v___x_1694_;
}
else
{
lean_object* v___x_1695_; lean_object* v___x_1697_; 
lean_dec(v___x_1685_);
lean_dec_ref(v_e_1672_);
v___x_1695_ = ((lean_object*)(l_Lean_Meta_Grind_mkHomoPredInstances___closed__0));
if (v_isShared_1684_ == 0)
{
lean_ctor_set(v___x_1683_, 0, v___x_1695_);
v___x_1697_ = v___x_1683_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
else
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
lean_dec_ref(v___x_1678_);
lean_dec_ref(v_e_1672_);
v___x_1700_ = ((lean_object*)(l_Lean_Meta_Grind_mkHomoPredInstances___closed__0));
v___x_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
return v___x_1701_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkHomoPredInstances___boxed(lean_object* v_e_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l_Lean_Meta_Grind_mkHomoPredInstances(v_e_1702_, v_a_1703_, v_a_1704_, v_a_1705_, v_a_1706_);
lean_dec(v_a_1706_);
lean_dec_ref(v_a_1705_);
lean_dec(v_a_1704_);
lean_dec_ref(v_a_1703_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0(lean_object* v___x_1709_, lean_object* v_as_1710_, lean_object* v_as_x27_1711_, lean_object* v_b_1712_, lean_object* v_a_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0___redArg(v___x_1709_, v_as_x27_1711_, v_b_1712_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0___boxed(lean_object* v___x_1720_, lean_object* v_as_1721_, lean_object* v_as_x27_1722_, lean_object* v_b_1723_, lean_object* v_a_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mkHomoPredInstances_spec__0(v___x_1720_, v_as_1721_, v_as_x27_1722_, v_b_1723_, v_a_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v_as_x27_1722_);
lean_dec(v_as_1721_);
lean_dec_ref(v___x_1720_);
return v_res_1730_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2438845489____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_homoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_homoExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_1405043254____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_homoSourceTypesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_homoSourceTypesExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Homo_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Homo_2929944344____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_homoPredExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_homoPredExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
}
#ifdef __cplusplus
}
#endif
