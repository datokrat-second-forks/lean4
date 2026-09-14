// Lean compiler output
// Module: Lean.Compiler.LCNF.PullFunDecls
// Imports: public import Lean.Compiler.LCNF.DependsOn public import Lean.Compiler.LCNF.PassManager
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
uint8_t l_Lean_FVarIdHashSet_contains(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFVarIdHashSet_default;
lean_object* l_Lean_Compiler_LCNF_instInhabitedFunDecl_default__1___redArg();
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_FunDecl_collectUsed(uint8_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCode___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attach(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_addToPull(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_pull(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_addToPull___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_pull___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_pullFunDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_PullFunDecls_pull___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullFunDecls___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_pullFunDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "pullFunDecls"};
static const lean_object* l_Lean_Compiler_LCNF_pullFunDecls___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_pullFunDecls___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_pullFunDecls___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_pullFunDecls___closed__0_value),LEAN_SCALAR_PTR_LITERAL(42, 214, 187, 111, 27, 230, 209, 214)}};
static const lean_object* l_Lean_Compiler_LCNF_pullFunDecls___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_pullFunDecls___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_pullFunDecls___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_pullFunDecls___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_pullFunDecls___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_pullFunDecls___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_pullFunDecls___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_pullFunDecls___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_pullFunDecls;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_pullFunDecls___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 137, 34, 178, 57, 97, 174, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PullFunDecls"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(34, 22, 167, 240, 97, 96, 111, 65)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(131, 100, 103, 236, 110, 190, 9, 116)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 145, 55, 223, 32, 104, 111, 137)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(236, 31, 216, 154, 82, 114, 229, 5)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(173, 162, 66, 169, 209, 13, 217, 144)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(4, 162, 43, 226, 174, 157, 211, 6)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(141, 150, 70, 168, 50, 70, 196, 119)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 126, 218, 119, 38, 57, 70, 9)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 121, 99, 184, 127, 70, 201, 225)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 165, 234, 171, 104, 161, 33, 84)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(136, 29, 219, 35, 181, 138, 226, 178)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1553090079) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(166, 206, 19, 9, 70, 7, 4, 159)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 149, 47, 183, 177, 167, 88, 77)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(89, 202, 79, 174, 233, 112, 55, 156)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(132, 9, 140, 163, 170, 173, 0, 118)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_Compiler_LCNF_instInhabitedFunDecl_default__1___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; uint8_t v___x_4_; lean_object* v___x_5_; 
v___x_2_ = l_Lean_instInhabitedFVarIdHashSet_default;
v___x_3_ = lean_obj_once(&l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0, &l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0_once, _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0);
v___x_4_ = 0;
v___x_5_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_5_, 0, v___x_3_);
lean_ctor_set(v___x_5_, 1, v___x_2_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*2, v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1, &l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1_once, _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default;
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg(lean_object* v_fvarId_8_, lean_object* v_as_9_, lean_object* v_keep_10_, lean_object* v_dep_11_){
_start:
{
if (lean_obj_tag(v_as_9_) == 0)
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v_keep_10_);
lean_ctor_set(v___x_13_, 1, v_dep_11_);
v___x_14_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
return v___x_14_;
}
else
{
lean_object* v_head_15_; lean_object* v_tail_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_30_; 
v_head_15_ = lean_ctor_get(v_as_9_, 0);
v_tail_16_ = lean_ctor_get(v_as_9_, 1);
v_isSharedCheck_30_ = !lean_is_exclusive(v_as_9_);
if (v_isSharedCheck_30_ == 0)
{
v___x_18_ = v_as_9_;
v_isShared_19_ = v_isSharedCheck_30_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_tail_16_);
lean_inc(v_head_15_);
lean_dec(v_as_9_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_30_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v_used_20_; uint8_t v___x_21_; 
v_used_20_ = lean_ctor_get(v_head_15_, 1);
v___x_21_ = l_Lean_FVarIdHashSet_contains(v_used_20_, v_fvarId_8_);
if (v___x_21_ == 0)
{
lean_object* v___x_23_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 1, v_keep_10_);
v___x_23_ = v___x_18_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v_head_15_);
lean_ctor_set(v_reuseFailAlloc_25_, 1, v_keep_10_);
v___x_23_ = v_reuseFailAlloc_25_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
v_as_9_ = v_tail_16_;
v_keep_10_ = v___x_23_;
goto _start;
}
}
else
{
lean_object* v___x_27_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 1, v_dep_11_);
v___x_27_ = v___x_18_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_head_15_);
lean_ctor_set(v_reuseFailAlloc_29_, 1, v_dep_11_);
v___x_27_ = v_reuseFailAlloc_29_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
v_as_9_ = v_tail_16_;
v_dep_11_ = v___x_27_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg___boxed(lean_object* v_fvarId_31_, lean_object* v_as_32_, lean_object* v_keep_33_, lean_object* v_dep_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg(v_fvarId_31_, v_as_32_, v_keep_33_, v_dep_34_);
lean_dec(v_fvarId_31_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go(lean_object* v_fvarId_37_, lean_object* v_as_38_, lean_object* v_keep_39_, lean_object* v_dep_40_, lean_object* v_a_41_, lean_object* v_a_42_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg(v_fvarId_37_, v_as_38_, v_keep_39_, v_dep_40_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___boxed(lean_object* v_fvarId_45_, lean_object* v_as_46_, lean_object* v_keep_47_, lean_object* v_dep_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v___y_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go(v_fvarId_45_, v_as_46_, v_keep_47_, v_dep_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_fvarId_45_);
return v_res_52_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0(lean_object* v_fvarId_53_, lean_object* v_x_54_){
_start:
{
if (lean_obj_tag(v_x_54_) == 0)
{
uint8_t v___x_55_; 
v___x_55_ = 0;
return v___x_55_;
}
else
{
lean_object* v_head_56_; lean_object* v_tail_57_; lean_object* v_used_58_; uint8_t v___x_59_; 
v_head_56_ = lean_ctor_get(v_x_54_, 0);
v_tail_57_ = lean_ctor_get(v_x_54_, 1);
v_used_58_ = lean_ctor_get(v_head_56_, 1);
v___x_59_ = l_Lean_FVarIdHashSet_contains(v_used_58_, v_fvarId_53_);
if (v___x_59_ == 0)
{
v_x_54_ = v_tail_57_;
goto _start;
}
else
{
return v___x_59_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0___boxed(lean_object* v_fvarId_61_, lean_object* v_x_62_){
_start:
{
uint8_t v_res_63_; lean_object* v_r_64_; 
v_res_63_ = l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0(v_fvarId_61_, v_x_62_);
lean_dec(v_x_62_);
lean_dec(v_fvarId_61_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(lean_object* v_fvarId_65_, lean_object* v_a_66_){
_start:
{
lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_68_ = lean_st_ref_get(v_a_66_);
v___x_69_ = l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0(v_fvarId_65_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; lean_object* v___x_71_; 
lean_dec(v___x_68_);
v___x_70_ = lean_box(0);
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
else
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_84_; 
v___x_72_ = lean_box(0);
v___x_73_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg(v_fvarId_65_, v___x_68_, v___x_72_, v___x_72_);
v_a_74_ = lean_ctor_get(v___x_73_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_84_ == 0)
{
v___x_76_ = v___x_73_;
v_isShared_77_ = v_isSharedCheck_84_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_73_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_84_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v_fst_78_; lean_object* v_snd_79_; lean_object* v___x_80_; lean_object* v___x_82_; 
v_fst_78_ = lean_ctor_get(v_a_74_, 0);
lean_inc(v_fst_78_);
v_snd_79_ = lean_ctor_get(v_a_74_, 1);
lean_inc(v_snd_79_);
lean_dec(v_a_74_);
v___x_80_ = lean_st_ref_swap(v_a_66_, v_fst_78_);
lean_dec(v___x_80_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 0, v_snd_79_);
v___x_82_ = v___x_76_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_snd_79_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg___boxed(lean_object* v_fvarId_85_, lean_object* v_a_86_, lean_object* v___y_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(v_fvarId_85_, v_a_86_);
lean_dec(v_a_86_);
lean_dec(v_fvarId_85_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps(lean_object* v_fvarId_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(v_fvarId_89_, v_a_90_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___boxed(lean_object* v_fvarId_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v___y_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps(v_fvarId_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec(v_fvarId_97_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(lean_object* v_todo_105_, lean_object* v_acc_106_, lean_object* v_a_107_){
_start:
{
if (lean_obj_tag(v_todo_105_) == 0)
{
lean_object* v___x_109_; 
v___x_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_109_, 0, v_acc_106_);
return v___x_109_;
}
else
{
lean_object* v_head_110_; lean_object* v_decl_111_; lean_object* v_tail_112_; lean_object* v_fvarId_113_; lean_object* v___x_114_; 
v_head_110_ = lean_ctor_get(v_todo_105_, 0);
lean_inc(v_head_110_);
v_decl_111_ = lean_ctor_get(v_head_110_, 0);
v_tail_112_ = lean_ctor_get(v_todo_105_, 1);
lean_inc(v_tail_112_);
lean_dec_ref_known(v_todo_105_, 2);
v_fvarId_113_ = lean_ctor_get(v_decl_111_, 0);
v___x_114_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(v_fvarId_113_, v_a_107_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v_a_115_ = lean_ctor_get(v___x_114_, 0);
lean_inc(v_a_115_);
lean_dec_ref_known(v___x_114_, 1);
v___x_116_ = l_List_appendTR___redArg(v_a_115_, v_tail_112_);
v___x_117_ = lean_array_push(v_acc_106_, v_head_110_);
v_todo_105_ = v___x_116_;
v_acc_106_ = v___x_117_;
goto _start;
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
lean_dec(v_tail_112_);
lean_dec(v_head_110_);
lean_dec_ref(v_acc_106_);
v_a_119_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_114_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_114_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg___boxed(lean_object* v_todo_127_, lean_object* v_acc_128_, lean_object* v_a_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(v_todo_127_, v_acc_128_, v_a_129_);
lean_dec(v_a_129_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint(lean_object* v_todo_132_, lean_object* v_acc_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(v_todo_132_, v_acc_133_, v_a_134_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___boxed(lean_object* v_todo_141_, lean_object* v_acc_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v___y_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint(v_todo_141_, v_acc_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_);
lean_dec(v_a_147_);
lean_dec_ref(v_a_146_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(lean_object* v_fvarId_152_, lean_object* v_a_153_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(v_fvarId_152_, v_a_153_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_a_156_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_a_156_);
lean_dec_ref_known(v___x_155_, 1);
v___x_157_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0));
v___x_158_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(v_a_156_, v___x_157_, v_a_153_);
return v___x_158_;
}
else
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_166_; 
v_a_159_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_166_ == 0)
{
v___x_161_ = v___x_155_;
v_isShared_162_ = v_isSharedCheck_166_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_155_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_166_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_164_; 
if (v_isShared_162_ == 0)
{
v___x_164_ = v___x_161_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_a_159_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___boxed(lean_object* v_fvarId_167_, lean_object* v_a_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(v_fvarId_167_, v_a_168_);
lean_dec(v_a_168_);
lean_dec(v_fvarId_167_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps(lean_object* v_fvarId_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(v_fvarId_171_, v_a_172_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___boxed(lean_object* v_fvarId_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v___y_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps(v_fvarId_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
lean_dec(v_a_180_);
lean_dec(v_fvarId_179_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg(lean_object* v_as_187_, size_t v_sz_188_, size_t v_i_189_, lean_object* v_b_190_, lean_object* v___y_191_){
_start:
{
uint8_t v___x_193_; 
v___x_193_ = lean_usize_dec_lt(v_i_189_, v_sz_188_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; 
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v_b_190_);
return v___x_194_;
}
else
{
lean_object* v_a_195_; lean_object* v_fvarId_196_; lean_object* v___x_197_; 
v_a_195_ = lean_array_uget_borrowed(v_as_187_, v_i_189_);
v_fvarId_196_ = lean_ctor_get(v_a_195_, 0);
v___x_197_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(v_fvarId_196_, v___y_191_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v_a_198_; lean_object* v___x_199_; size_t v___x_200_; size_t v___x_201_; 
v_a_198_ = lean_ctor_get(v___x_197_, 0);
lean_inc(v_a_198_);
lean_dec_ref_known(v___x_197_, 1);
v___x_199_ = l_Array_append___redArg(v_b_190_, v_a_198_);
lean_dec(v_a_198_);
v___x_200_ = ((size_t)1ULL);
v___x_201_ = lean_usize_add(v_i_189_, v___x_200_);
v_i_189_ = v___x_201_;
v_b_190_ = v___x_199_;
goto _start;
}
else
{
lean_dec_ref(v_b_190_);
return v___x_197_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg___boxed(lean_object* v_as_203_, lean_object* v_sz_204_, lean_object* v_i_205_, lean_object* v_b_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
size_t v_sz_boxed_209_; size_t v_i_boxed_210_; lean_object* v_res_211_; 
v_sz_boxed_209_ = lean_unbox_usize(v_sz_204_);
lean_dec(v_sz_204_);
v_i_boxed_210_ = lean_unbox_usize(v_i_205_);
lean_dec(v_i_205_);
v_res_211_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg(v_as_203_, v_sz_boxed_209_, v_i_boxed_210_, v_b_206_, v___y_207_);
lean_dec(v___y_207_);
lean_dec_ref(v_as_203_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg(lean_object* v_params_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_){
_start:
{
lean_object* v_acc_219_; size_t v_sz_220_; size_t v___x_221_; lean_object* v___x_222_; 
v_acc_219_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0));
v_sz_220_ = lean_array_size(v_params_212_);
v___x_221_ = ((size_t)0ULL);
v___x_222_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg(v_params_212_, v_sz_220_, v___x_221_, v_acc_219_, v_a_213_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg___boxed(lean_object* v_params_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v___y_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg(v_params_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_);
lean_dec(v_a_228_);
lean_dec_ref(v_a_227_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec(v_a_224_);
lean_dec_ref(v_params_223_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps(uint8_t v_pu_231_, lean_object* v_params_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg(v_params_232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___boxed(lean_object* v_pu_240_, lean_object* v_params_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v___y_247_){
_start:
{
uint8_t v_pu_boxed_248_; lean_object* v_res_249_; 
v_pu_boxed_248_ = lean_unbox(v_pu_240_);
v_res_249_ = l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps(v_pu_boxed_248_, v_params_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_);
lean_dec(v_a_246_);
lean_dec_ref(v_a_245_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec_ref(v_params_241_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0(lean_object* v_as_250_, size_t v_sz_251_, size_t v_i_252_, lean_object* v_b_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg(v_as_250_, v_sz_251_, v_i_252_, v_b_253_, v___y_254_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___boxed(lean_object* v_as_261_, lean_object* v_sz_262_, lean_object* v_i_263_, lean_object* v_b_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
size_t v_sz_boxed_271_; size_t v_i_boxed_272_; lean_object* v_res_273_; 
v_sz_boxed_271_ = lean_unbox_usize(v_sz_262_);
lean_dec(v_sz_262_);
v_i_boxed_272_ = lean_unbox_usize(v_i_263_);
lean_dec(v_i_263_);
v_res_273_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0(v_as_261_, v_sz_boxed_271_, v_i_boxed_272_, v_b_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
lean_dec_ref(v_as_261_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach(lean_object* v_p_274_, lean_object* v_k_275_){
_start:
{
uint8_t v_isFun_276_; 
v_isFun_276_ = lean_ctor_get_uint8(v_p_274_, sizeof(void*)*2);
if (v_isFun_276_ == 0)
{
lean_object* v_decl_277_; lean_object* v___x_278_; 
v_decl_277_ = lean_ctor_get(v_p_274_, 0);
lean_inc_ref(v_decl_277_);
v___x_278_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_278_, 0, v_decl_277_);
lean_ctor_set(v___x_278_, 1, v_k_275_);
return v___x_278_;
}
else
{
lean_object* v_decl_279_; lean_object* v___x_280_; 
v_decl_279_ = lean_ctor_get(v_p_274_, 0);
lean_inc_ref(v_decl_279_);
v___x_280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_280_, 0, v_decl_279_);
lean_ctor_set(v___x_280_, 1, v_k_275_);
return v___x_280_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach___boxed(lean_object* v_p_281_, lean_object* v_k_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach(v_p_281_, v_k_282_);
lean_dec_ref(v_p_281_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited(lean_object* v_i_284_, lean_object* v___y_285_){
_start:
{
lean_object* v_snd_286_; uint8_t v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v_snd_286_ = lean_ctor_get(v___y_285_, 1);
v___x_287_ = 0;
v___x_288_ = lean_box(v___x_287_);
v___x_289_ = lean_array_get(v___x_288_, v_snd_286_, v_i_284_);
lean_dec(v___x_288_);
v___x_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___y_285_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited___boxed(lean_object* v_i_291_, lean_object* v___y_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited(v_i_291_, v___y_292_);
lean_dec(v_i_291_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg(lean_object* v_upperBound_294_, lean_object* v___x_295_, lean_object* v_ps_296_, lean_object* v_a_297_, lean_object* v_b_298_, lean_object* v___y_299_){
_start:
{
lean_object* v_a_301_; lean_object* v_snd_302_; uint8_t v___x_306_; 
v___x_306_ = lean_nat_dec_lt(v_a_297_, v_upperBound_294_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; 
lean_dec(v_a_297_);
v___x_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_307_, 0, v_b_298_);
lean_ctor_set(v___x_307_, 1, v___y_299_);
return v___x_307_;
}
else
{
lean_object* v___x_308_; lean_object* v_fst_309_; lean_object* v_snd_310_; lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_308_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited(v_a_297_, v___y_299_);
v_fst_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_fst_309_);
v_snd_310_ = lean_ctor_get(v___x_308_, 1);
lean_inc(v_snd_310_);
lean_dec_ref(v___x_308_);
v___x_311_ = lean_box(0);
v___x_312_ = lean_unbox(v_fst_309_);
lean_dec(v_fst_309_);
if (v___x_312_ == 0)
{
lean_object* v_decl_313_; lean_object* v_fvarId_314_; lean_object* v___x_315_; lean_object* v_used_316_; uint8_t v___x_317_; 
v_decl_313_ = lean_ctor_get(v___x_295_, 0);
v_fvarId_314_ = lean_ctor_get(v_decl_313_, 0);
v___x_315_ = lean_array_fget_borrowed(v_ps_296_, v_a_297_);
v_used_316_ = lean_ctor_get(v___x_315_, 1);
v___x_317_ = l_Lean_FVarIdHashSet_contains(v_used_316_, v_fvarId_314_);
if (v___x_317_ == 0)
{
v_a_301_ = v___x_311_;
v_snd_302_ = v_snd_310_;
goto v___jp_300_;
}
else
{
lean_object* v___x_318_; lean_object* v_snd_319_; 
v___x_318_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit(v_ps_296_, v_a_297_, v_snd_310_);
v_snd_319_ = lean_ctor_get(v___x_318_, 1);
lean_inc(v_snd_319_);
lean_dec_ref(v___x_318_);
v_a_301_ = v___x_311_;
v_snd_302_ = v_snd_319_;
goto v___jp_300_;
}
}
else
{
v_a_301_ = v___x_311_;
v_snd_302_ = v_snd_310_;
goto v___jp_300_;
}
}
v___jp_300_:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_unsigned_to_nat(1u);
v___x_304_ = lean_nat_add(v_a_297_, v___x_303_);
lean_dec(v_a_297_);
v_a_297_ = v___x_304_;
v_b_298_ = v_a_301_;
v___y_299_ = v_snd_302_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit(lean_object* v_ps_320_, lean_object* v_i_321_, lean_object* v___y_322_){
_start:
{
lean_object* v___x_323_; lean_object* v_fst_324_; uint8_t v___x_325_; 
v___x_323_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited(v_i_321_, v___y_322_);
v_fst_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc(v_fst_324_);
v___x_325_ = lean_unbox(v_fst_324_);
lean_dec(v_fst_324_);
if (v___x_325_ == 0)
{
lean_object* v_snd_326_; lean_object* v_fst_327_; lean_object* v_snd_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_363_; 
v_snd_326_ = lean_ctor_get(v___x_323_, 1);
lean_inc(v_snd_326_);
lean_dec_ref(v___x_323_);
v_fst_327_ = lean_ctor_get(v_snd_326_, 0);
v_snd_328_ = lean_ctor_get(v_snd_326_, 1);
v_isSharedCheck_363_ = !lean_is_exclusive(v_snd_326_);
if (v_isSharedCheck_363_ == 0)
{
v___x_330_ = v_snd_326_;
v_isShared_331_ = v_isSharedCheck_363_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_snd_328_);
lean_inc(v_fst_327_);
lean_dec(v_snd_326_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_363_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_332_ = l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default;
v___x_333_ = lean_array_get_size(v_ps_320_);
v___x_334_ = lean_unsigned_to_nat(0u);
v___x_335_ = 1;
v___x_336_ = lean_box(v___x_335_);
v___x_337_ = lean_array_set(v_snd_328_, v_i_321_, v___x_336_);
v___x_338_ = lean_array_get_borrowed(v___x_332_, v_ps_320_, v_i_321_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 1, v___x_337_);
v___x_340_ = v___x_330_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_fst_327_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v___x_337_);
v___x_340_ = v_reuseFailAlloc_362_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v_snd_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_360_; 
v___x_341_ = lean_box(0);
v___x_342_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg(v___x_333_, v___x_338_, v_ps_320_, v___x_334_, v___x_341_, v___x_340_);
v_snd_343_ = lean_ctor_get(v___x_342_, 1);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_342_);
if (v_isSharedCheck_360_ == 0)
{
lean_object* v_unused_361_; 
v_unused_361_ = lean_ctor_get(v___x_342_, 0);
lean_dec(v_unused_361_);
v___x_345_ = v___x_342_;
v_isShared_346_ = v_isSharedCheck_360_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_snd_343_);
lean_dec(v___x_342_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_360_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v_fst_347_; lean_object* v_snd_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_359_; 
v_fst_347_ = lean_ctor_get(v_snd_343_, 0);
v_snd_348_ = lean_ctor_get(v_snd_343_, 1);
v_isSharedCheck_359_ = !lean_is_exclusive(v_snd_343_);
if (v_isSharedCheck_359_ == 0)
{
v___x_350_ = v_snd_343_;
v_isShared_351_ = v_isSharedCheck_359_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_snd_348_);
lean_inc(v_fst_347_);
lean_dec(v_snd_343_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_359_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_352_; lean_object* v___x_354_; 
v___x_352_ = l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach(v___x_338_, v_fst_347_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 0, v___x_352_);
v___x_354_ = v___x_350_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_352_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_snd_348_);
v___x_354_ = v_reuseFailAlloc_358_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
lean_object* v___x_356_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 1, v___x_354_);
lean_ctor_set(v___x_345_, 0, v___x_341_);
v___x_356_ = v___x_345_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_341_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v___x_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
}
}
}
}
else
{
lean_object* v_snd_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_372_; 
v_snd_364_ = lean_ctor_get(v___x_323_, 1);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_372_ == 0)
{
lean_object* v_unused_373_; 
v_unused_373_ = lean_ctor_get(v___x_323_, 0);
lean_dec(v_unused_373_);
v___x_366_ = v___x_323_;
v_isShared_367_ = v_isSharedCheck_372_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_snd_364_);
lean_dec(v___x_323_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_372_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_368_ = lean_box(0);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 0, v___x_368_);
v___x_370_ = v___x_366_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_368_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_snd_364_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit___boxed(lean_object* v_ps_374_, lean_object* v_i_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit(v_ps_374_, v_i_375_, v___y_376_);
lean_dec(v_i_375_);
lean_dec_ref(v_ps_374_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg___boxed(lean_object* v_upperBound_378_, lean_object* v___x_379_, lean_object* v_ps_380_, lean_object* v_a_381_, lean_object* v_b_382_, lean_object* v___y_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg(v_upperBound_378_, v___x_379_, v_ps_380_, v_a_381_, v_b_382_, v___y_383_);
lean_dec_ref(v_ps_380_);
lean_dec_ref(v___x_379_);
lean_dec(v_upperBound_378_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0(lean_object* v_upperBound_385_, lean_object* v___x_386_, lean_object* v_ps_387_, lean_object* v_inst_388_, lean_object* v_R_389_, lean_object* v_a_390_, lean_object* v_b_391_, lean_object* v_c_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg(v_upperBound_385_, v___x_386_, v_ps_387_, v_a_390_, v_b_391_, v___y_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___boxed(lean_object* v_upperBound_395_, lean_object* v___x_396_, lean_object* v_ps_397_, lean_object* v_inst_398_, lean_object* v_R_399_, lean_object* v_a_400_, lean_object* v_b_401_, lean_object* v_c_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0(v_upperBound_395_, v___x_396_, v_ps_397_, v_inst_398_, v_R_399_, v_a_400_, v_b_401_, v_c_402_, v___y_403_);
lean_dec_ref(v_ps_397_);
lean_dec_ref(v___x_396_);
lean_dec(v_upperBound_395_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg(lean_object* v_upperBound_405_, lean_object* v_ps_406_, lean_object* v_a_407_, lean_object* v_b_408_, lean_object* v___y_409_){
_start:
{
uint8_t v___x_410_; 
v___x_410_ = lean_nat_dec_lt(v_a_407_, v_upperBound_405_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; 
lean_dec(v_a_407_);
v___x_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_411_, 0, v_b_408_);
lean_ctor_set(v___x_411_, 1, v___y_409_);
return v___x_411_;
}
else
{
lean_object* v___x_412_; lean_object* v_snd_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_412_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit(v_ps_406_, v_a_407_, v___y_409_);
v_snd_413_ = lean_ctor_get(v___x_412_, 1);
lean_inc(v_snd_413_);
lean_dec_ref(v___x_412_);
v___x_414_ = lean_box(0);
v___x_415_ = lean_unsigned_to_nat(1u);
v___x_416_ = lean_nat_add(v_a_407_, v___x_415_);
lean_dec(v_a_407_);
v_a_407_ = v___x_416_;
v_b_408_ = v___x_414_;
v___y_409_ = v_snd_413_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg___boxed(lean_object* v_upperBound_418_, lean_object* v_ps_419_, lean_object* v_a_420_, lean_object* v_b_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg(v_upperBound_418_, v_ps_419_, v_a_420_, v_b_421_, v___y_422_);
lean_dec_ref(v_ps_419_);
lean_dec(v_upperBound_418_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go(lean_object* v_ps_424_, lean_object* v___y_425_){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v_snd_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
v___x_426_ = lean_array_get_size(v_ps_424_);
v___x_427_ = lean_unsigned_to_nat(0u);
v___x_428_ = lean_box(0);
v___x_429_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg(v___x_426_, v_ps_424_, v___x_427_, v___x_428_, v___y_425_);
v_snd_430_ = lean_ctor_get(v___x_429_, 1);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_437_ == 0)
{
lean_object* v_unused_438_; 
v_unused_438_ = lean_ctor_get(v___x_429_, 0);
lean_dec(v_unused_438_);
v___x_432_ = v___x_429_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_snd_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v___x_428_);
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_428_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v_snd_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go___boxed(lean_object* v_ps_439_, lean_object* v___y_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go(v_ps_439_, v___y_440_);
lean_dec_ref(v_ps_439_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0(lean_object* v_upperBound_442_, lean_object* v_ps_443_, lean_object* v_inst_444_, lean_object* v_R_445_, lean_object* v_a_446_, lean_object* v_b_447_, lean_object* v_c_448_, lean_object* v___y_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg(v_upperBound_442_, v_ps_443_, v_a_446_, v_b_447_, v___y_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___boxed(lean_object* v_upperBound_451_, lean_object* v_ps_452_, lean_object* v_inst_453_, lean_object* v_R_454_, lean_object* v_a_455_, lean_object* v_b_456_, lean_object* v_c_457_, lean_object* v___y_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0(v_upperBound_451_, v_ps_452_, v_inst_453_, v_R_454_, v_a_455_, v_b_456_, v_c_457_, v___y_458_);
lean_dec_ref(v_ps_452_);
lean_dec(v_upperBound_451_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0(size_t v_sz_460_, size_t v_i_461_, lean_object* v_bs_462_){
_start:
{
uint8_t v___x_463_; 
v___x_463_ = lean_usize_dec_lt(v_i_461_, v_sz_460_);
if (v___x_463_ == 0)
{
return v_bs_462_;
}
else
{
lean_object* v___x_464_; lean_object* v_bs_x27_465_; uint8_t v___x_466_; size_t v___x_467_; size_t v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_464_ = lean_unsigned_to_nat(0u);
v_bs_x27_465_ = lean_array_uset(v_bs_462_, v_i_461_, v___x_464_);
v___x_466_ = 0;
v___x_467_ = ((size_t)1ULL);
v___x_468_ = lean_usize_add(v_i_461_, v___x_467_);
v___x_469_ = lean_box(v___x_466_);
v___x_470_ = lean_array_uset(v_bs_x27_465_, v_i_461_, v___x_469_);
v_i_461_ = v___x_468_;
v_bs_462_ = v___x_470_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0___boxed(lean_object* v_sz_472_, lean_object* v_i_473_, lean_object* v_bs_474_){
_start:
{
size_t v_sz_boxed_475_; size_t v_i_boxed_476_; lean_object* v_res_477_; 
v_sz_boxed_475_ = lean_unbox_usize(v_sz_472_);
lean_dec(v_sz_472_);
v_i_boxed_476_ = lean_unbox_usize(v_i_473_);
lean_dec(v_i_473_);
v_res_477_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0(v_sz_boxed_475_, v_i_boxed_476_, v_bs_474_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attach(lean_object* v_ps_478_, lean_object* v_k_479_){
_start:
{
size_t v_sz_480_; size_t v___x_481_; lean_object* v_visited_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v_snd_485_; lean_object* v_fst_486_; 
v_sz_480_ = lean_array_size(v_ps_478_);
v___x_481_ = ((size_t)0ULL);
lean_inc_ref(v_ps_478_);
v_visited_482_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0(v_sz_480_, v___x_481_, v_ps_478_);
v___x_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_483_, 0, v_k_479_);
lean_ctor_set(v___x_483_, 1, v_visited_482_);
v___x_484_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go(v_ps_478_, v___x_483_);
lean_dec_ref(v_ps_478_);
v_snd_485_ = lean_ctor_get(v___x_484_, 1);
lean_inc(v_snd_485_);
lean_dec_ref(v___x_484_);
v_fst_486_ = lean_ctor_get(v_snd_485_, 0);
lean_inc(v_fst_486_);
lean_dec(v_snd_485_);
return v_fst_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg(lean_object* v_fvarId_487_, lean_object* v_k_488_, lean_object* v_a_489_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(v_fvarId_487_, v_a_489_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_500_; 
v_a_492_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_500_ == 0)
{
v___x_494_ = v___x_491_;
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_491_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_496_; lean_object* v___x_498_; 
v___x_496_ = l_Lean_Compiler_LCNF_PullFunDecls_attach(v_a_492_, v_k_488_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_496_);
v___x_498_ = v___x_494_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
lean_dec_ref(v_k_488_);
v_a_501_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_491_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_491_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg___boxed(lean_object* v_fvarId_509_, lean_object* v_k_510_, lean_object* v_a_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg(v_fvarId_509_, v_k_510_, v_a_511_);
lean_dec(v_a_511_);
lean_dec(v_fvarId_509_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps(lean_object* v_fvarId_514_, lean_object* v_k_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg(v_fvarId_514_, v_k_515_, v_a_516_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___boxed(lean_object* v_fvarId_523_, lean_object* v_k_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v___y_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps(v_fvarId_523_, v_k_524_, v_a_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
lean_dec(v_a_529_);
lean_dec_ref(v_a_528_);
lean_dec(v_a_527_);
lean_dec_ref(v_a_526_);
lean_dec(v_a_525_);
lean_dec(v_fvarId_523_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps(lean_object* v_params_532_, lean_object* v_k_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg(v_params_532_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_549_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_549_ == 0)
{
v___x_543_ = v___x_540_;
v_isShared_544_ = v_isSharedCheck_549_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_540_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_549_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_545_ = l_Lean_Compiler_LCNF_PullFunDecls_attach(v_a_541_, v_k_533_);
if (v_isShared_544_ == 0)
{
lean_ctor_set(v___x_543_, 0, v___x_545_);
v___x_547_ = v___x_543_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_545_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref(v_k_533_);
v_a_550_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_540_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_540_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps___boxed(lean_object* v_params_558_, lean_object* v_k_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps(v_params_558_, v_k_559_, v_a_560_, v_a_561_, v_a_562_, v_a_563_, v_a_564_);
lean_dec(v_a_564_);
lean_dec_ref(v_a_563_);
lean_dec(v_a_562_);
lean_dec_ref(v_a_561_);
lean_dec(v_a_560_);
lean_dec_ref(v_params_558_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__1(lean_object* v_a_567_, lean_object* v_a_568_){
_start:
{
if (lean_obj_tag(v_a_567_) == 0)
{
lean_object* v___x_569_; 
v___x_569_ = l_List_reverse___redArg(v_a_568_);
return v___x_569_;
}
else
{
lean_object* v_head_570_; uint8_t v_isFun_571_; 
v_head_570_ = lean_ctor_get(v_a_567_, 0);
v_isFun_571_ = lean_ctor_get_uint8(v_head_570_, sizeof(void*)*2);
if (v_isFun_571_ == 0)
{
lean_object* v_tail_572_; 
v_tail_572_ = lean_ctor_get(v_a_567_, 1);
lean_inc(v_tail_572_);
lean_dec_ref_known(v_a_567_, 2);
v_a_567_ = v_tail_572_;
goto _start;
}
else
{
lean_object* v_tail_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_582_; 
lean_inc(v_head_570_);
v_tail_574_ = lean_ctor_get(v_a_567_, 1);
v_isSharedCheck_582_ = !lean_is_exclusive(v_a_567_);
if (v_isSharedCheck_582_ == 0)
{
lean_object* v_unused_583_; 
v_unused_583_ = lean_ctor_get(v_a_567_, 0);
lean_dec(v_unused_583_);
v___x_576_ = v_a_567_;
v_isShared_577_ = v_isSharedCheck_582_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_tail_574_);
lean_dec(v_a_567_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_582_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 1, v_a_568_);
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_head_570_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v_a_568_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
v_a_567_ = v_tail_574_;
v_a_568_ = v___x_579_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__0(lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
if (lean_obj_tag(v_a_584_) == 0)
{
lean_object* v___x_586_; 
v___x_586_ = l_List_reverse___redArg(v_a_585_);
return v___x_586_;
}
else
{
lean_object* v_head_587_; uint8_t v_isFun_588_; 
v_head_587_ = lean_ctor_get(v_a_584_, 0);
v_isFun_588_ = lean_ctor_get_uint8(v_head_587_, sizeof(void*)*2);
if (v_isFun_588_ == 0)
{
lean_object* v_tail_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_597_; 
lean_inc(v_head_587_);
v_tail_589_ = lean_ctor_get(v_a_584_, 1);
v_isSharedCheck_597_ = !lean_is_exclusive(v_a_584_);
if (v_isSharedCheck_597_ == 0)
{
lean_object* v_unused_598_; 
v_unused_598_ = lean_ctor_get(v_a_584_, 0);
lean_dec(v_unused_598_);
v___x_591_ = v_a_584_;
v_isShared_592_ = v_isSharedCheck_597_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_tail_589_);
lean_dec(v_a_584_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_597_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 1, v_a_585_);
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_head_587_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v_a_585_);
v___x_594_ = v_reuseFailAlloc_596_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
v_a_584_ = v_tail_589_;
v_a_585_ = v___x_594_;
goto _start;
}
}
}
else
{
lean_object* v_tail_599_; 
v_tail_599_ = lean_ctor_get(v_a_584_, 1);
lean_inc(v_tail_599_);
lean_dec_ref_known(v_a_584_, 2);
v_a_584_ = v_tail_599_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg(lean_object* v_k_601_, lean_object* v_a_602_){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_604_ = lean_st_ref_get(v_a_602_);
v___x_605_ = lean_box(0);
v___x_606_ = l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__0(v___x_604_, v___x_605_);
v___x_607_ = lean_st_ref_take(v_a_602_);
v___x_608_ = l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__1(v___x_607_, v___x_605_);
v___x_609_ = lean_st_ref_put(v_a_602_, v___x_608_);
v___x_610_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0));
v___x_611_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(v___x_606_, v___x_610_, v_a_602_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_620_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_620_ == 0)
{
v___x_614_ = v___x_611_;
v_isShared_615_ = v_isSharedCheck_620_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_611_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_620_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_616_; lean_object* v___x_618_; 
v___x_616_ = l_Lean_Compiler_LCNF_PullFunDecls_attach(v_a_612_, v_k_601_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v___x_616_);
v___x_618_ = v___x_614_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v___x_616_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
lean_dec_ref(v_k_601_);
v_a_621_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_611_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_611_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg___boxed(lean_object* v_k_629_, lean_object* v_a_630_, lean_object* v___y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg(v_k_629_, v_a_630_);
lean_dec(v_a_630_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps(lean_object* v_k_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg(v_k_633_, v_a_634_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___boxed(lean_object* v_k_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v___y_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l_Lean_Compiler_LCNF_PullFunDecls_attachJps(v_k_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_);
lean_dec(v_a_646_);
lean_dec_ref(v_a_645_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
lean_dec(v_a_642_);
return v_res_648_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__0(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_649_ = lean_box(0);
v___x_650_ = lean_unsigned_to_nat(16u);
v___x_651_ = lean_mk_array(v___x_650_, v___x_649_);
return v___x_651_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__1(void){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_652_ = lean_obj_once(&l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__0, &l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__0_once, _init_l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__0);
v___x_653_ = lean_unsigned_to_nat(0u);
v___x_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
lean_ctor_set(v___x_654_, 1, v___x_652_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_addToPull(uint8_t v_isFun_655_, lean_object* v_decl_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v_params_667_; lean_object* v_type_668_; lean_object* v_value_669_; uint8_t v___x_670_; lean_object* v_value_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___x_700_; 
v___x_663_ = lean_st_ref_get(v_a_657_);
v___x_664_ = lean_st_ref_take(v_a_657_);
lean_dec(v___x_664_);
v___x_665_ = lean_box(0);
v___x_666_ = lean_st_ref_put(v_a_657_, v___x_665_);
v_params_667_ = lean_ctor_get(v_decl_656_, 2);
lean_inc_ref(v_params_667_);
v_type_668_ = lean_ctor_get(v_decl_656_, 3);
lean_inc_ref(v_type_668_);
v_value_669_ = lean_ctor_get(v_decl_656_, 4);
v___x_670_ = 0;
lean_inc_ref(v_value_669_);
v___x_700_ = l_Lean_Compiler_LCNF_PullFunDecls_pull(v_value_669_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v___x_702_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref_known(v___x_700_, 1);
v___x_702_ = l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps(v_params_667_, v_a_701_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_);
if (lean_obj_tag(v___x_702_) == 0)
{
if (v_isFun_655_ == 0)
{
lean_object* v_a_703_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_a_703_);
lean_dec_ref_known(v___x_702_, 1);
v_value_672_ = v_a_703_;
v___y_673_ = v_a_657_;
v___y_674_ = v_a_659_;
goto v___jp_671_;
}
else
{
lean_object* v_a_704_; lean_object* v___x_705_; 
v_a_704_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_a_704_);
lean_dec_ref_known(v___x_702_, 1);
v___x_705_ = l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg(v_a_704_, v_a_657_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_a_706_);
lean_dec_ref_known(v___x_705_, 1);
v_value_672_ = v_a_706_;
v___y_673_ = v_a_657_;
v___y_674_ = v_a_659_;
goto v___jp_671_;
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
lean_dec_ref(v_type_668_);
lean_dec_ref(v_params_667_);
lean_dec(v___x_663_);
lean_dec_ref(v_decl_656_);
v_a_707_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_714_ == 0)
{
v___x_709_ = v___x_705_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_705_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_707_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
else
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_722_; 
lean_dec_ref(v_type_668_);
lean_dec_ref(v_params_667_);
lean_dec(v___x_663_);
lean_dec_ref(v_decl_656_);
v_a_715_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_722_ == 0)
{
v___x_717_ = v___x_702_;
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_702_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_718_ == 0)
{
v___x_720_ = v___x_717_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_a_715_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_dec_ref(v_type_668_);
lean_dec_ref(v_params_667_);
lean_dec(v___x_663_);
lean_dec_ref(v_decl_656_);
v_a_723_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_700_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_700_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
v___jp_671_:
{
lean_object* v___x_675_; 
v___x_675_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_670_, v_decl_656_, v_type_668_, v_params_667_, v_value_672_, v___y_674_);
if (lean_obj_tag(v___x_675_) == 0)
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_691_; 
v_a_676_ = lean_ctor_get(v___x_675_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_691_ == 0)
{
v___x_678_ = v___x_675_;
v_isShared_679_ = v_isSharedCheck_691_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_675_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_691_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_689_; 
v___x_680_ = lean_st_ref_take(v___y_673_);
v___x_681_ = lean_box(0);
v___x_682_ = lean_obj_once(&l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__1, &l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__1_once, _init_l_Lean_Compiler_LCNF_PullFunDecls_addToPull___closed__1);
lean_inc(v_a_676_);
v___x_683_ = l_Lean_Compiler_LCNF_FunDecl_collectUsed(v___x_670_, v_a_676_, v___x_682_);
v___x_684_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_684_, 0, v_a_676_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
lean_ctor_set_uint8(v___x_684_, sizeof(void*)*2, v_isFun_655_);
v___x_685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
lean_ctor_set(v___x_685_, 1, v___x_680_);
v___x_686_ = l_List_appendTR___redArg(v___x_685_, v___x_663_);
v___x_687_ = lean_st_ref_put(v___y_673_, v___x_686_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_681_);
v___x_689_ = v___x_678_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v___x_681_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
lean_dec(v___x_663_);
v_a_692_ = lean_ctor_get(v___x_675_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_675_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_675_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_pull(lean_object* v_code_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_){
_start:
{
switch(lean_obj_tag(v_code_731_))
{
case 0:
{
lean_object* v_decl_738_; lean_object* v_k_739_; lean_object* v___x_740_; 
v_decl_738_ = lean_ctor_get(v_code_731_, 0);
v_k_739_ = lean_ctor_get(v_code_731_, 1);
lean_inc_ref(v_k_739_);
v___x_740_ = l_Lean_Compiler_LCNF_PullFunDecls_pull(v_k_739_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v_fvarId_742_; lean_object* v___x_743_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_740_, 1);
v_fvarId_742_ = lean_ctor_get(v_decl_738_, 0);
v___x_743_ = l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg(v_fvarId_742_, v_a_741_, v_a_732_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_780_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_780_ == 0)
{
v___x_746_ = v___x_743_;
v_isShared_747_ = v_isSharedCheck_780_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_743_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_780_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
size_t v___x_748_; size_t v___x_749_; uint8_t v___x_750_; 
v___x_748_ = lean_ptr_addr(v_k_739_);
v___x_749_ = lean_ptr_addr(v_a_744_);
v___x_750_ = lean_usize_dec_eq(v___x_748_, v___x_749_);
if (v___x_750_ == 0)
{
lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_760_; 
lean_inc_ref(v_decl_738_);
v_isSharedCheck_760_ = !lean_is_exclusive(v_code_731_);
if (v_isSharedCheck_760_ == 0)
{
lean_object* v_unused_761_; lean_object* v_unused_762_; 
v_unused_761_ = lean_ctor_get(v_code_731_, 1);
lean_dec(v_unused_761_);
v_unused_762_ = lean_ctor_get(v_code_731_, 0);
lean_dec(v_unused_762_);
v___x_752_ = v_code_731_;
v_isShared_753_ = v_isSharedCheck_760_;
goto v_resetjp_751_;
}
else
{
lean_dec(v_code_731_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_760_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 1, v_a_744_);
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_decl_738_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v_a_744_);
v___x_755_ = v_reuseFailAlloc_759_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_757_; 
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v___x_755_);
v___x_757_ = v___x_746_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_755_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
else
{
size_t v___x_763_; uint8_t v___x_764_; 
v___x_763_ = lean_ptr_addr(v_decl_738_);
v___x_764_ = lean_usize_dec_eq(v___x_763_, v___x_763_);
if (v___x_764_ == 0)
{
lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_774_; 
lean_inc_ref(v_decl_738_);
v_isSharedCheck_774_ = !lean_is_exclusive(v_code_731_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; lean_object* v_unused_776_; 
v_unused_775_ = lean_ctor_get(v_code_731_, 1);
lean_dec(v_unused_775_);
v_unused_776_ = lean_ctor_get(v_code_731_, 0);
lean_dec(v_unused_776_);
v___x_766_ = v_code_731_;
v_isShared_767_ = v_isSharedCheck_774_;
goto v_resetjp_765_;
}
else
{
lean_dec(v_code_731_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_774_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 1, v_a_744_);
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_decl_738_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_a_744_);
v___x_769_ = v_reuseFailAlloc_773_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_771_; 
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v___x_769_);
v___x_771_ = v___x_746_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
else
{
lean_object* v___x_778_; 
lean_dec(v_a_744_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v_code_731_);
v___x_778_ = v___x_746_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_code_731_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_731_, 2);
return v___x_743_;
}
}
else
{
lean_dec_ref_known(v_code_731_, 2);
return v___x_740_;
}
}
case 1:
{
lean_object* v_decl_781_; lean_object* v_k_782_; uint8_t v___x_783_; lean_object* v___x_784_; 
v_decl_781_ = lean_ctor_get(v_code_731_, 0);
lean_inc_ref(v_decl_781_);
v_k_782_ = lean_ctor_get(v_code_731_, 1);
lean_inc_ref(v_k_782_);
lean_dec_ref_known(v_code_731_, 2);
v___x_783_ = 1;
v___x_784_ = l_Lean_Compiler_LCNF_PullFunDecls_addToPull(v___x_783_, v_decl_781_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_dec_ref_known(v___x_784_, 1);
v_code_731_ = v_k_782_;
goto _start;
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_dec_ref(v_k_782_);
v_a_786_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_784_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_784_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
case 2:
{
lean_object* v_decl_794_; lean_object* v_k_795_; uint8_t v___x_796_; lean_object* v___x_797_; 
v_decl_794_ = lean_ctor_get(v_code_731_, 0);
lean_inc_ref(v_decl_794_);
v_k_795_ = lean_ctor_get(v_code_731_, 1);
lean_inc_ref(v_k_795_);
lean_dec_ref_known(v_code_731_, 2);
v___x_796_ = 0;
v___x_797_ = l_Lean_Compiler_LCNF_PullFunDecls_addToPull(v___x_796_, v_decl_794_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_dec_ref_known(v___x_797_, 1);
v_code_731_ = v_k_795_;
goto _start;
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec_ref(v_k_795_);
v_a_799_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_797_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_797_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
case 4:
{
lean_object* v_cases_807_; lean_object* v_typeName_808_; lean_object* v_resultType_809_; lean_object* v_discr_810_; lean_object* v_alts_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_850_; 
v_cases_807_ = lean_ctor_get(v_code_731_, 0);
lean_inc_ref(v_cases_807_);
v_typeName_808_ = lean_ctor_get(v_cases_807_, 0);
v_resultType_809_ = lean_ctor_get(v_cases_807_, 1);
v_discr_810_ = lean_ctor_get(v_cases_807_, 2);
v_alts_811_ = lean_ctor_get(v_cases_807_, 3);
v_isSharedCheck_850_ = !lean_is_exclusive(v_cases_807_);
if (v_isSharedCheck_850_ == 0)
{
v___x_813_ = v_cases_807_;
v_isShared_814_ = v_isSharedCheck_850_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_alts_811_);
lean_inc(v_discr_810_);
lean_inc(v_resultType_809_);
lean_inc(v_typeName_808_);
lean_dec(v_cases_807_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_850_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_811_);
v___x_816_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1(v___x_815_, v_alts_811_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_841_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_841_ == 0)
{
v___x_819_ = v___x_816_;
v_isShared_820_ = v_isSharedCheck_841_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_dec(v___x_816_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_841_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
size_t v___x_821_; size_t v___x_822_; uint8_t v___x_823_; 
v___x_821_ = lean_ptr_addr(v_alts_811_);
lean_dec_ref(v_alts_811_);
v___x_822_ = lean_ptr_addr(v_a_817_);
v___x_823_ = lean_usize_dec_eq(v___x_821_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_836_; 
v_isSharedCheck_836_ = !lean_is_exclusive(v_code_731_);
if (v_isSharedCheck_836_ == 0)
{
lean_object* v_unused_837_; 
v_unused_837_ = lean_ctor_get(v_code_731_, 0);
lean_dec(v_unused_837_);
v___x_825_ = v_code_731_;
v_isShared_826_ = v_isSharedCheck_836_;
goto v_resetjp_824_;
}
else
{
lean_dec(v_code_731_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_836_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 3, v_a_817_);
v___x_828_ = v___x_813_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_typeName_808_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v_resultType_809_);
lean_ctor_set(v_reuseFailAlloc_835_, 2, v_discr_810_);
lean_ctor_set(v_reuseFailAlloc_835_, 3, v_a_817_);
v___x_828_ = v_reuseFailAlloc_835_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
lean_object* v___x_830_; 
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 0, v___x_828_);
v___x_830_ = v___x_825_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_828_);
v___x_830_ = v_reuseFailAlloc_834_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_object* v___x_832_; 
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_830_);
v___x_832_ = v___x_819_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
}
else
{
lean_object* v___x_839_; 
lean_dec(v_a_817_);
lean_del_object(v___x_813_);
lean_dec(v_discr_810_);
lean_dec_ref(v_resultType_809_);
lean_dec(v_typeName_808_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v_code_731_);
v___x_839_ = v___x_819_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_code_731_);
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
lean_del_object(v___x_813_);
lean_dec_ref(v_alts_811_);
lean_dec(v_discr_810_);
lean_dec_ref(v_resultType_809_);
lean_dec(v_typeName_808_);
lean_dec_ref_known(v_code_731_, 1);
v_a_842_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_816_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_816_);
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
}
default: 
{
lean_object* v___x_851_; 
v___x_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_851_, 0, v_code_731_);
return v___x_851_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1(lean_object* v_i_852_, lean_object* v_as_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_860_ = lean_array_get_size(v_as_853_);
v___x_861_ = lean_nat_dec_lt(v_i_852_, v___x_860_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; 
lean_dec(v_i_852_);
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v_as_853_);
return v___x_862_;
}
else
{
lean_object* v_a_863_; lean_object* v_a_865_; 
v_a_863_ = lean_array_fget_borrowed(v_as_853_, v_i_852_);
if (lean_obj_tag(v_a_863_) == 0)
{
lean_object* v_params_876_; lean_object* v_code_877_; lean_object* v___x_878_; 
v_params_876_ = lean_ctor_get(v_a_863_, 1);
v_code_877_ = lean_ctor_get(v_a_863_, 2);
lean_inc_ref(v_code_877_);
v___x_878_ = l_Lean_Compiler_LCNF_PullFunDecls_pull(v_code_877_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_880_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_878_, 1);
v___x_880_ = l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps(v_params_876_, v_a_879_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; lean_object* v___x_882_; 
v_a_881_ = lean_ctor_get(v___x_880_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v___x_880_, 1);
lean_inc_ref(v_a_863_);
v___x_882_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_863_, v_a_881_);
v_a_865_ = v___x_882_;
goto v___jp_864_;
}
else
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
lean_dec_ref(v_as_853_);
lean_dec(v_i_852_);
v_a_883_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_890_ == 0)
{
v___x_885_ = v___x_880_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_880_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_883_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
lean_dec_ref(v_as_853_);
lean_dec(v_i_852_);
v_a_891_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_878_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_878_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
else
{
lean_object* v_code_899_; lean_object* v___x_900_; 
v_code_899_ = lean_ctor_get(v_a_863_, 0);
lean_inc_ref(v_code_899_);
v___x_900_ = l_Lean_Compiler_LCNF_PullFunDecls_pull(v_code_899_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_902_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_900_, 1);
lean_inc_ref(v_a_863_);
v___x_902_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_863_, v_a_901_);
v_a_865_ = v___x_902_;
goto v___jp_864_;
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec_ref(v_as_853_);
lean_dec(v_i_852_);
v_a_903_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_900_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_900_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
v___jp_864_:
{
size_t v___x_866_; size_t v___x_867_; uint8_t v___x_868_; 
v___x_866_ = lean_ptr_addr(v_a_863_);
v___x_867_ = lean_ptr_addr(v_a_865_);
v___x_868_ = lean_usize_dec_eq(v___x_866_, v___x_867_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_869_ = lean_unsigned_to_nat(1u);
v___x_870_ = lean_nat_add(v_i_852_, v___x_869_);
v___x_871_ = lean_array_fset(v_as_853_, v_i_852_, v_a_865_);
lean_dec(v_i_852_);
v_i_852_ = v___x_870_;
v_as_853_ = v___x_871_;
goto _start;
}
else
{
lean_object* v___x_873_; lean_object* v___x_874_; 
lean_dec_ref(v_a_865_);
v___x_873_ = lean_unsigned_to_nat(1u);
v___x_874_ = lean_nat_add(v_i_852_, v___x_873_);
lean_dec(v_i_852_);
v_i_852_ = v___x_874_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1___boxed(lean_object* v_i_911_, lean_object* v_as_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1(v_i_911_, v_as_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_addToPull___boxed(lean_object* v_isFun_920_, lean_object* v_decl_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v___y_927_){
_start:
{
uint8_t v_isFun_boxed_928_; lean_object* v_res_929_; 
v_isFun_boxed_928_ = lean_unbox(v_isFun_920_);
v_res_929_ = l_Lean_Compiler_LCNF_PullFunDecls_addToPull(v_isFun_boxed_928_, v_decl_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_);
lean_dec(v_a_926_);
lean_dec_ref(v_a_925_);
lean_dec(v_a_924_);
lean_dec_ref(v_a_923_);
lean_dec(v_a_922_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_pull___boxed(lean_object* v_code_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_Compiler_LCNF_PullFunDecls_pull(v_code_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
lean_dec(v_a_933_);
lean_dec_ref(v_a_932_);
lean_dec(v_a_931_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg(lean_object* v_f_938_, lean_object* v_v_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
if (lean_obj_tag(v_v_939_) == 0)
{
lean_object* v_code_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_970_; 
v_code_946_ = lean_ctor_get(v_v_939_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v_v_939_);
if (v_isSharedCheck_970_ == 0)
{
v___x_948_ = v_v_939_;
v_isShared_949_ = v_isSharedCheck_970_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_code_946_);
lean_dec(v_v_939_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_970_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_950_; 
lean_inc(v___y_944_);
lean_inc_ref(v___y_943_);
lean_inc(v___y_942_);
lean_inc_ref(v___y_941_);
lean_inc(v___y_940_);
v___x_950_ = lean_apply_7(v_f_938_, v_code_946_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, lean_box(0));
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_961_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_961_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_961_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_961_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 0, v_a_951_);
v___x_956_ = v___x_948_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_960_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_958_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_956_);
v___x_958_ = v___x_953_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_956_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_del_object(v___x_948_);
v_a_962_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_950_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_950_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
}
else
{
lean_object* v___x_971_; 
lean_dec_ref(v_f_938_);
v___x_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_971_, 0, v_v_939_);
return v___x_971_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg___boxed(lean_object* v_f_972_, lean_object* v_v_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg(v_f_972_, v_v_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0(uint8_t v_pu_981_, lean_object* v_f_982_, lean_object* v_v_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg(v_f_982_, v_v_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___boxed(lean_object* v_pu_991_, lean_object* v_f_992_, lean_object* v_v_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
uint8_t v_pu_boxed_1000_; lean_object* v_res_1001_; 
v_pu_boxed_1000_ = lean_unbox(v_pu_991_);
v_res_1001_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0(v_pu_boxed_1000_, v_f_992_, v_v_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec(v___y_994_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls(lean_object* v_decl_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_){
_start:
{
lean_object* v_toSignature_1009_; lean_object* v_value_1010_; uint8_t v_recursive_1011_; lean_object* v_inlineAttr_x3f_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1043_; 
v_toSignature_1009_ = lean_ctor_get(v_decl_1003_, 0);
v_value_1010_ = lean_ctor_get(v_decl_1003_, 1);
v_recursive_1011_ = lean_ctor_get_uint8(v_decl_1003_, sizeof(void*)*3);
v_inlineAttr_x3f_1012_ = lean_ctor_get(v_decl_1003_, 2);
v_isSharedCheck_1043_ = !lean_is_exclusive(v_decl_1003_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1014_ = v_decl_1003_;
v_isShared_1015_ = v_isSharedCheck_1043_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_inlineAttr_x3f_1012_);
lean_inc(v_value_1010_);
lean_inc(v_toSignature_1009_);
lean_dec(v_decl_1003_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1043_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1016_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_pullFunDecls___closed__0));
v___x_1017_ = lean_box(0);
v___x_1018_ = lean_st_mk_ref(v___x_1017_);
v___x_1019_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg(v___x_1016_, v_value_1010_, v___x_1018_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1034_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1034_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1034_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1029_; 
v___x_1024_ = lean_st_ref_get(v___x_1018_);
lean_dec(v___x_1018_);
v___x_1025_ = lean_array_mk(v___x_1024_);
v___x_1026_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_PullFunDecls_attach), 2, 1);
lean_closure_set(v___x_1026_, 0, v___x_1025_);
v___x_1027_ = l_Lean_Compiler_LCNF_DeclValue_mapCode___redArg(v___x_1026_, v_a_1020_);
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 1, v___x_1027_);
v___x_1029_ = v___x_1014_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_toSignature_1009_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v___x_1027_);
lean_ctor_set(v_reuseFailAlloc_1033_, 2, v_inlineAttr_x3f_1012_);
lean_ctor_set_uint8(v_reuseFailAlloc_1033_, sizeof(void*)*3, v_recursive_1011_);
v___x_1029_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
lean_object* v___x_1031_; 
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___x_1029_);
v___x_1031_ = v___x_1022_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1029_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v___x_1018_);
lean_del_object(v___x_1014_);
lean_dec(v_inlineAttr_x3f_1012_);
lean_dec_ref(v_toSignature_1009_);
v_a_1035_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1019_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1019_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls___boxed(lean_object* v_decl_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v___y_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Lean_Compiler_LCNF_Decl_pullFunDecls(v_decl_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_);
lean_dec(v_a_1048_);
lean_dec_ref(v_a_1047_);
lean_dec(v_a_1046_);
lean_dec_ref(v_a_1045_);
return v_res_1050_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_pullFunDecls___closed__3(void){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; uint8_t v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1055_ = lean_unsigned_to_nat(0u);
v___x_1056_ = ((lean_object*)(l_Lean_Compiler_LCNF_pullFunDecls___closed__2));
v___x_1057_ = 0;
v___x_1058_ = ((lean_object*)(l_Lean_Compiler_LCNF_pullFunDecls___closed__1));
v___x_1059_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_1058_, v___x_1057_, v___x_1056_, v___x_1055_);
return v___x_1059_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_pullFunDecls(void){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_obj_once(&l_Lean_Compiler_LCNF_pullFunDecls___closed__3, &l_Lean_Compiler_LCNF_pullFunDecls___closed__3_once, _init_l_Lean_Compiler_LCNF_pullFunDecls___closed__3);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1131_; uint8_t v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1131_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_));
v___x_1132_ = 1;
v___x_1133_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_));
v___x_1134_ = l_Lean_registerTraceClass(v___x_1131_, v___x_1132_, v___x_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2____boxed(lean_object* v___y_1135_){
_start:
{
lean_object* v_res_1136_; 
v_res_1136_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_();
return v_res_1136_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_PullFunDecls(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default = _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default);
l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull = _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull();
lean_mark_persistent(l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull);
l_Lean_Compiler_LCNF_pullFunDecls = _init_l_Lean_Compiler_LCNF_pullFunDecls();
lean_mark_persistent(l_Lean_Compiler_LCNF_pullFunDecls);
res = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_PullFunDecls(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_PullFunDecls(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PullFunDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_PullFunDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_PullFunDecls(builtin);
}
#ifdef __cplusplus
}
#endif
