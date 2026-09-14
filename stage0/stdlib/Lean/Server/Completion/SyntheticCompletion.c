// Lean compiler output
// Module: Lean.Server.Completion.SyntheticCompletion
// Imports: public import Lean.Server.InfoUtils public import Lean.Server.Completion.CompletionUtils
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
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTrailingSize(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_lineStart(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isToken(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isAtom(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Info_pos_x3f(lean_object*);
lean_object* l_Lean_Elab_Info_tailPos_x3f(lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
uint8_t l_Lean_Elab_Info_isSmaller(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_lctx(lean_object*);
uint8_t lean_local_ctx_is_empty(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Info_occursInOrOnBoundary(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_hasArgs(lean_object*);
lean_object* l_Lean_Elab_Info_stx(lean_object*);
lean_object* l_Lean_Syntax_findStack_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg(lean_object*);
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unexpected context-free info tree node"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Server.InfoUtils.0.Lean.Elab.InfoTree.visitM.go"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Server.InfoUtils"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__2(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1___boxed(lean_object*);
static const lean_string_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__0 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__0_value;
static const lean_ctor_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1_value;
static const lean_string_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value;
static const lean_string_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value;
static const lean_string_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4_value;
static const lean_string_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "completion"};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__5 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__5_value;
static const lean_ctor_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_1),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_2),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(231, 49, 5, 252, 150, 235, 247, 237)}};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value;
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0(lean_object*);
static const lean_string_object l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__0 = (const lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__0_value;
static const lean_ctor_object l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_1),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_2),((lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1 = (const lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value;
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__3 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__3_value;
static lean_once_cell_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeqBracketed"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__3 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(142, 80, 121, 250, 245, 54, 71, 145)}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty___boxed(lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go___closed__0_value;
static const lean_ctor_object l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0 = (const lean_object*)&l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f(lean_object*);
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt_spec__0(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_1),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticFieldCompletion_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_Completion_findSyntheticCompletions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_Completion_findSyntheticCompletions___closed__0 = (const lean_object*)&l_Lean_Server_Completion_findSyntheticCompletions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findSyntheticCompletions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(lean_object* v_gt_1_, lean_object* v_a_2_, lean_object* v_b_3_){
_start:
{
if (lean_obj_tag(v_a_2_) == 0)
{
uint8_t v___x_4_; 
lean_dec(v_b_3_);
lean_dec_ref(v_gt_1_);
v___x_4_ = 0;
return v___x_4_;
}
else
{
if (lean_obj_tag(v_b_3_) == 0)
{
uint8_t v___x_5_; 
lean_dec_ref_known(v_a_2_, 1);
lean_dec_ref(v_gt_1_);
v___x_5_ = 1;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v_val_6_ = lean_ctor_get(v_a_2_, 0);
lean_inc(v_val_6_);
lean_dec_ref_known(v_a_2_, 1);
v_val_7_ = lean_ctor_get(v_b_3_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v_b_3_, 1);
v___x_8_ = lean_apply_2(v_gt_1_, v_val_6_, v_val_7_);
v___x_9_ = lean_unbox(v___x_8_);
return v___x_9_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg___boxed(lean_object* v_gt_10_, lean_object* v_a_11_, lean_object* v_b_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(v_gt_10_, v_a_11_, v_b_12_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter(lean_object* v_00_u03b1_15_, lean_object* v_gt_16_, lean_object* v_a_17_, lean_object* v_b_18_){
_start:
{
uint8_t v___x_19_; 
v___x_19_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(v_gt_16_, v_a_17_, v_b_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___boxed(lean_object* v_00_u03b1_20_, lean_object* v_gt_21_, lean_object* v_a_22_, lean_object* v_b_23_){
_start:
{
uint8_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter(v_00_u03b1_20_, v_gt_21_, v_a_22_, v_b_23_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0___redArg(lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
if (lean_obj_tag(v_a_26_) == 0)
{
lean_object* v___x_28_; 
v___x_28_ = l_List_reverse___redArg(v_a_27_);
return v___x_28_;
}
else
{
lean_object* v_head_29_; lean_object* v_tail_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_42_; 
v_head_29_ = lean_ctor_get(v_a_26_, 0);
v_tail_30_ = lean_ctor_get(v_a_26_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v_a_26_);
if (v_isSharedCheck_42_ == 0)
{
v___x_32_ = v_a_26_;
v_isShared_33_ = v_isSharedCheck_42_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_tail_30_);
lean_inc(v_head_29_);
lean_dec(v_a_26_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_42_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___y_35_; 
if (lean_obj_tag(v_head_29_) == 0)
{
lean_object* v___x_40_; 
v___x_40_ = lean_box(0);
v___y_35_ = v___x_40_;
goto v___jp_34_;
}
else
{
lean_object* v_val_41_; 
v_val_41_ = lean_ctor_get(v_head_29_, 0);
lean_inc(v_val_41_);
lean_dec_ref_known(v_head_29_, 1);
v___y_35_ = v_val_41_;
goto v___jp_34_;
}
v___jp_34_:
{
lean_object* v___x_37_; 
if (v_isShared_33_ == 0)
{
lean_ctor_set(v___x_32_, 1, v_a_27_);
lean_ctor_set(v___x_32_, 0, v___y_35_);
v___x_37_ = v___x_32_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___y_35_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_a_27_);
v___x_37_ = v_reuseFailAlloc_39_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
v_a_26_ = v_tail_30_;
v_a_27_ = v___x_37_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1___redArg(lean_object* v_gt_43_, lean_object* v_x_44_, lean_object* v_x_45_){
_start:
{
if (lean_obj_tag(v_x_45_) == 0)
{
lean_dec_ref(v_gt_43_);
return v_x_44_;
}
else
{
lean_object* v_head_46_; lean_object* v_tail_47_; uint8_t v___x_48_; 
v_head_46_ = lean_ctor_get(v_x_45_, 0);
lean_inc_n(v_head_46_, 2);
v_tail_47_ = lean_ctor_get(v_x_45_, 1);
lean_inc(v_tail_47_);
lean_dec_ref_known(v_x_45_, 2);
lean_inc(v_x_44_);
lean_inc_ref(v_gt_43_);
v___x_48_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(v_gt_43_, v_x_44_, v_head_46_);
if (v___x_48_ == 0)
{
lean_dec(v_x_44_);
v_x_44_ = v_head_46_;
v_x_45_ = v_tail_47_;
goto _start;
}
else
{
lean_dec(v_head_46_);
v_x_45_ = v_tail_47_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose___redArg(lean_object* v_gt_51_, lean_object* v_f_52_, lean_object* v_ctx_53_, lean_object* v_info_54_, lean_object* v_cs_55_, lean_object* v_childValues_56_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v_bestChildValue_60_; lean_object* v___x_61_; 
v___x_57_ = lean_box(0);
v___x_58_ = lean_box(0);
v___x_59_ = l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0___redArg(v_childValues_56_, v___x_58_);
lean_inc_ref(v_gt_51_);
v_bestChildValue_60_ = l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1___redArg(v_gt_51_, v___x_57_, v___x_59_);
v___x_61_ = lean_apply_3(v_f_52_, v_ctx_53_, v_info_54_, v_cs_55_);
if (lean_obj_tag(v___x_61_) == 1)
{
uint8_t v___x_62_; 
lean_inc(v_bestChildValue_60_);
lean_inc_ref(v___x_61_);
v___x_62_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(v_gt_51_, v___x_61_, v_bestChildValue_60_);
if (v___x_62_ == 0)
{
lean_dec_ref_known(v___x_61_, 1);
return v_bestChildValue_60_;
}
else
{
lean_dec(v_bestChildValue_60_);
return v___x_61_;
}
}
else
{
lean_dec(v___x_61_);
lean_dec_ref(v_gt_51_);
return v_bestChildValue_60_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose(lean_object* v_00_u03b1_63_, lean_object* v_gt_64_, lean_object* v_f_65_, lean_object* v_ctx_66_, lean_object* v_info_67_, lean_object* v_cs_68_, lean_object* v_childValues_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose___redArg(v_gt_64_, v_f_65_, v_ctx_66_, v_info_67_, v_cs_68_, v_childValues_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0(lean_object* v_00_u03b1_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0___redArg(v_a_72_, v_a_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1(lean_object* v_00_u03b1_75_, lean_object* v_gt_76_, lean_object* v_x_77_, lean_object* v_x_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1___redArg(v_gt_76_, v_x_77_, v_x_78_);
return v___x_79_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0(lean_object* v_x_80_, lean_object* v_x_81_, lean_object* v_x_82_){
_start:
{
uint8_t v___x_83_; 
v___x_83_ = 1;
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0___boxed(lean_object* v_x_84_, lean_object* v_x_85_, lean_object* v_x_86_){
_start:
{
uint8_t v_res_87_; lean_object* v_r_88_; 
v_res_87_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0(v_x_84_, v_x_85_, v_x_86_);
lean_dec_ref(v_x_86_);
lean_dec_ref(v_x_85_);
lean_dec_ref(v_x_84_);
v_r_88_ = lean_box(v_res_87_);
return v_r_88_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__1(lean_object* v_gt_89_, lean_object* v_f_90_, lean_object* v_x1_91_, lean_object* v_x2_92_, lean_object* v_x3_93_, lean_object* v_x4_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose___redArg(v_gt_89_, v_f_90_, v_x1_91_, v_x2_92_, v_x3_93_, v_x4_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg(lean_object* v_msg_103_){
_start:
{
lean_object* v___f_104_; lean_object* v___f_105_; lean_object* v___f_106_; lean_object* v___f_107_; lean_object* v___f_108_; lean_object* v___f_109_; lean_object* v___f_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___f_104_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__0));
v___f_105_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__1));
v___f_106_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__2));
v___f_107_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__3));
v___f_108_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__4));
v___f_109_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__5));
v___f_110_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__6));
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v___f_104_);
lean_ctor_set(v___x_111_, 1, v___f_105_);
v___x_112_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v___f_106_);
lean_ctor_set(v___x_112_, 2, v___f_107_);
lean_ctor_set(v___x_112_, 3, v___f_108_);
lean_ctor_set(v___x_112_, 4, v___f_109_);
v___x_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v___f_110_);
v___x_114_ = lean_box(0);
v___x_115_ = l_instInhabitedOfMonad___redArg(v___x_113_, v___x_114_);
v___x_116_ = lean_panic_fn_borrowed(v___x_115_, v_msg_103_);
lean_dec(v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_120_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__2));
v___x_121_ = lean_unsigned_to_nat(21u);
v___x_122_ = lean_unsigned_to_nat(65u);
v___x_123_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__1));
v___x_124_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__0));
v___x_125_ = l_mkPanicMessageWithDecl(v___x_124_, v___x_123_, v___x_122_, v___x_121_, v___x_120_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg(lean_object* v_preNode_126_, lean_object* v_postNode_127_, lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
switch(lean_obj_tag(v_x_129_))
{
case 0:
{
lean_object* v_i_130_; lean_object* v_t_131_; lean_object* v___x_132_; 
v_i_130_ = lean_ctor_get(v_x_129_, 0);
lean_inc_ref(v_i_130_);
v_t_131_ = lean_ctor_get(v_x_129_, 1);
lean_inc_ref(v_t_131_);
lean_dec_ref_known(v_x_129_, 2);
v___x_132_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_130_, v_x_128_);
v_x_128_ = v___x_132_;
v_x_129_ = v_t_131_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_128_) == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; 
lean_dec_ref_known(v_x_129_, 2);
lean_dec(v_postNode_127_);
lean_dec_ref(v_preNode_126_);
v___x_134_ = lean_obj_once(&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3, &l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3_once, _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3);
v___x_135_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg(v___x_134_);
return v___x_135_;
}
else
{
lean_object* v_i_136_; lean_object* v_children_137_; lean_object* v_val_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_i_136_ = lean_ctor_get(v_x_129_, 0);
lean_inc_ref_n(v_i_136_, 2);
v_children_137_ = lean_ctor_get(v_x_129_, 1);
lean_inc_ref_n(v_children_137_, 2);
lean_dec_ref_known(v_x_129_, 2);
v_val_138_ = lean_ctor_get(v_x_128_, 0);
lean_inc_n(v_val_138_, 2);
lean_inc_ref(v_preNode_126_);
v___x_139_ = lean_apply_3(v_preNode_126_, v_val_138_, v_i_136_, v_children_137_);
v___x_140_ = lean_unbox(v___x_139_);
if (v___x_140_ == 0)
{
lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_149_; 
lean_dec_ref(v_preNode_126_);
v_isSharedCheck_149_ = !lean_is_exclusive(v_x_128_);
if (v_isSharedCheck_149_ == 0)
{
lean_object* v_unused_150_; 
v_unused_150_ = lean_ctor_get(v_x_128_, 0);
lean_dec(v_unused_150_);
v___x_142_ = v_x_128_;
v_isShared_143_ = v_isSharedCheck_149_;
goto v_resetjp_141_;
}
else
{
lean_dec(v_x_128_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_149_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_144_ = lean_box(0);
v___x_145_ = lean_apply_4(v_postNode_127_, v_val_138_, v_i_136_, v_children_137_, v___x_144_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_145_);
v___x_147_ = v___x_142_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_145_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_151_ = l_Lean_Elab_Info_updateContext_x3f(v_x_128_, v_i_136_);
v___x_152_ = l_Lean_PersistentArray_toList___redArg(v_children_137_);
v___x_153_ = lean_box(0);
lean_inc(v_postNode_127_);
v___x_154_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1___redArg(v_preNode_126_, v_postNode_127_, v___x_151_, v___x_152_, v___x_153_);
v___x_155_ = lean_apply_4(v_postNode_127_, v_val_138_, v_i_136_, v_children_137_, v___x_154_);
v___x_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
}
}
default: 
{
lean_object* v___x_157_; 
lean_dec_ref_known(v_x_129_, 1);
lean_dec(v_x_128_);
lean_dec(v_postNode_127_);
lean_dec_ref(v_preNode_126_);
v___x_157_ = lean_box(0);
return v___x_157_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1___redArg(lean_object* v_preNode_158_, lean_object* v_postNode_159_, lean_object* v___x_160_, lean_object* v_x_161_, lean_object* v_x_162_){
_start:
{
if (lean_obj_tag(v_x_161_) == 0)
{
lean_object* v___x_163_; 
lean_dec(v___x_160_);
lean_dec(v_postNode_159_);
lean_dec_ref(v_preNode_158_);
v___x_163_ = l_List_reverse___redArg(v_x_162_);
return v___x_163_;
}
else
{
lean_object* v_head_164_; lean_object* v_tail_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_174_; 
v_head_164_ = lean_ctor_get(v_x_161_, 0);
v_tail_165_ = lean_ctor_get(v_x_161_, 1);
v_isSharedCheck_174_ = !lean_is_exclusive(v_x_161_);
if (v_isSharedCheck_174_ == 0)
{
v___x_167_ = v_x_161_;
v_isShared_168_ = v_isSharedCheck_174_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_tail_165_);
lean_inc(v_head_164_);
lean_dec(v_x_161_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_174_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_171_; 
lean_inc(v___x_160_);
lean_inc(v_postNode_159_);
lean_inc_ref(v_preNode_158_);
v___x_169_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg(v_preNode_158_, v_postNode_159_, v___x_160_, v_head_164_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v_x_162_);
lean_ctor_set(v___x_167_, 0, v___x_169_);
v___x_171_ = v___x_167_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_169_);
lean_ctor_set(v_reuseFailAlloc_173_, 1, v_x_162_);
v___x_171_ = v_reuseFailAlloc_173_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
v_x_161_ = v_tail_165_;
v_x_162_ = v___x_171_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg(lean_object* v_infoTree_176_, lean_object* v_gt_177_, lean_object* v_f_178_){
_start:
{
lean_object* v___f_179_; lean_object* v___f_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___f_179_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___closed__0));
v___f_180_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__1), 6, 2);
lean_closure_set(v___f_180_, 0, v_gt_177_);
lean_closure_set(v___f_180_, 1, v_f_178_);
v___x_181_ = lean_box(0);
v___x_182_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg(v___f_179_, v___f_180_, v___x_181_, v_infoTree_176_);
if (lean_obj_tag(v___x_182_) == 0)
{
return v___x_181_;
}
else
{
lean_object* v_val_183_; 
v_val_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_val_183_);
lean_dec_ref_known(v___x_182_, 1);
return v_val_183_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f(lean_object* v_00_u03b1_184_, lean_object* v_infoTree_185_, lean_object* v_gt_186_, lean_object* v_f_187_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg(v_infoTree_185_, v_gt_186_, v_f_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0(lean_object* v_00_u03b1_189_, lean_object* v_msg_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg(v_msg_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0(lean_object* v_00_u03b1_192_, lean_object* v_preNode_193_, lean_object* v_postNode_194_, lean_object* v_x_195_, lean_object* v_x_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg(v_preNode_193_, v_postNode_194_, v_x_195_, v_x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1(lean_object* v_00_u03b1_198_, lean_object* v_preNode_199_, lean_object* v_postNode_200_, lean_object* v___x_201_, lean_object* v_x_202_, lean_object* v_x_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1___redArg(v_preNode_199_, v_postNode_200_, v___x_201_, v_x_202_, v_x_203_);
return v___x_204_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter(lean_object* v_a_205_, lean_object* v_b_206_){
_start:
{
lean_object* v_snd_207_; lean_object* v_snd_208_; uint8_t v___y_210_; uint8_t v___y_211_; uint8_t v___y_212_; lean_object* v___x_215_; uint8_t v___x_216_; uint8_t v___y_218_; 
v_snd_207_ = lean_ctor_get(v_a_205_, 1);
v_snd_208_ = lean_ctor_get(v_b_206_, 1);
v___x_215_ = l_Lean_Elab_Info_lctx(v_snd_207_);
v___x_216_ = lean_local_ctx_is_empty(v___x_215_);
if (v___x_216_ == 0)
{
lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_222_ = l_Lean_Elab_Info_lctx(v_snd_208_);
v___x_223_ = lean_local_ctx_is_empty(v___x_222_);
if (v___x_223_ == 0)
{
v___y_218_ = v___x_223_;
goto v___jp_217_;
}
else
{
return v___x_223_;
}
}
else
{
uint8_t v___x_224_; 
v___x_224_ = 0;
v___y_218_ = v___x_224_;
goto v___jp_217_;
}
v___jp_209_:
{
if (v___y_212_ == 0)
{
uint8_t v___x_213_; 
v___x_213_ = l_Lean_Elab_Info_isSmaller(v_snd_207_, v_snd_208_);
if (v___x_213_ == 0)
{
uint8_t v___x_214_; 
v___x_214_ = l_Lean_Elab_Info_isSmaller(v_snd_208_, v_snd_207_);
if (v___x_214_ == 0)
{
return v___x_214_;
}
else
{
return v___x_213_;
}
}
else
{
return v___y_211_;
}
}
else
{
return v___y_210_;
}
}
v___jp_217_:
{
uint8_t v___x_219_; 
v___x_219_ = 1;
if (v___x_216_ == 0)
{
v___y_210_ = v___y_218_;
v___y_211_ = v___x_219_;
v___y_212_ = v___x_216_;
goto v___jp_209_;
}
else
{
lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_220_ = l_Lean_Elab_Info_lctx(v_snd_208_);
v___x_221_ = lean_local_ctx_is_empty(v___x_220_);
if (v___x_221_ == 0)
{
v___y_210_ = v___y_218_;
v___y_211_ = v___x_219_;
v___y_212_ = v___x_216_;
goto v___jp_209_;
}
else
{
v___y_210_ = v___y_218_;
v___y_211_ = v___x_219_;
v___y_212_ = v___y_218_;
goto v___jp_209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter___boxed(lean_object* v_a_225_, lean_object* v_b_226_){
_start:
{
uint8_t v_res_227_; lean_object* v_r_228_; 
v_res_227_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter(v_a_225_, v_b_226_);
lean_dec_ref(v_b_226_);
lean_dec_ref(v_a_225_);
v_r_228_ = lean_box(v_res_227_);
return v_r_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0(lean_object* v_hoverPos_229_, lean_object* v_ctx_230_, lean_object* v_info_231_, lean_object* v_x_232_){
_start:
{
uint8_t v___x_233_; 
v___x_233_ = l_Lean_Elab_Info_occursInOrOnBoundary(v_info_231_, v_hoverPos_229_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; 
lean_dec_ref(v_info_231_);
lean_dec_ref(v_ctx_230_);
v___x_234_ = lean_box(0);
return v___x_234_;
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_235_, 0, v_ctx_230_);
lean_ctor_set(v___x_235_, 1, v_info_231_);
v___x_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0___boxed(lean_object* v_hoverPos_237_, lean_object* v_ctx_238_, lean_object* v_info_239_, lean_object* v_x_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0(v_hoverPos_237_, v_ctx_238_, v_info_239_, v_x_240_);
lean_dec_ref(v_x_240_);
lean_dec(v_hoverPos_237_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f(lean_object* v_hoverPos_243_, lean_object* v_infoTree_244_){
_start:
{
lean_object* v___f_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___f_245_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0___boxed), 4, 1);
lean_closure_set(v___f_245_, 0, v_hoverPos_243_);
v___x_246_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___closed__0));
v___x_247_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg(v_infoTree_244_, v___x_246_, v___f_245_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__2(lean_object* v_msg_248_){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_249_ = lean_unsigned_to_nat(0u);
v___x_250_ = lean_panic_fn_borrowed(v___x_249_, v_msg_248_);
return v___x_250_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0(lean_object* v_hoverPos_251_, lean_object* v_x_252_){
_start:
{
uint8_t v___x_253_; lean_object* v___x_254_; 
v___x_253_ = 0;
v___x_254_ = l_Lean_Syntax_getRange_x3f(v_x_252_, v___x_253_);
if (lean_obj_tag(v___x_254_) == 0)
{
return v___x_253_;
}
else
{
lean_object* v_val_255_; uint8_t v___x_256_; uint8_t v___x_257_; 
v_val_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_val_255_);
lean_dec_ref_known(v___x_254_, 1);
v___x_256_ = 1;
v___x_257_ = l_Lean_Syntax_Range_contains(v_val_255_, v_hoverPos_251_, v___x_256_);
lean_dec(v_val_255_);
return v___x_257_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0___boxed(lean_object* v_hoverPos_258_, lean_object* v_x_259_){
_start:
{
uint8_t v_res_260_; lean_object* v_r_261_; 
v_res_260_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0(v_hoverPos_258_, v_x_259_);
lean_dec(v_x_259_);
lean_dec(v_hoverPos_258_);
v_r_261_ = lean_box(v_res_260_);
return v_r_261_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1(lean_object* v_stx_262_){
_start:
{
uint8_t v___x_263_; 
v___x_263_ = l_Lean_Syntax_hasArgs(v_stx_262_);
if (v___x_263_ == 0)
{
uint8_t v___x_264_; 
v___x_264_ = 1;
return v___x_264_;
}
else
{
uint8_t v___x_265_; 
v___x_265_ = 0;
return v___x_265_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1___boxed(lean_object* v_stx_266_){
_start:
{
uint8_t v_res_267_; lean_object* v_r_268_; 
v_res_267_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1(v_stx_266_);
lean_dec(v_stx_266_);
v_r_268_ = lean_box(v_res_267_);
return v_r_268_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0(lean_object* v_x_281_){
_start:
{
if (lean_obj_tag(v_x_281_) == 0)
{
return v_x_281_;
}
else
{
lean_object* v_head_282_; lean_object* v_tail_283_; uint8_t v___y_285_; lean_object* v_fst_287_; lean_object* v___x_288_; uint8_t v___x_289_; uint8_t v___y_291_; 
v_head_282_ = lean_ctor_get(v_x_281_, 0);
v_tail_283_ = lean_ctor_get(v_x_281_, 1);
v_fst_287_ = lean_ctor_get(v_head_282_, 0);
v___x_288_ = ((lean_object*)(l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1));
lean_inc(v_fst_287_);
v___x_289_ = l_Lean_Syntax_isOfKind(v_fst_287_, v___x_288_);
if (v___x_289_ == 0)
{
lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_293_ = ((lean_object*)(l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6));
lean_inc(v_fst_287_);
v___x_294_ = l_Lean_Syntax_isOfKind(v_fst_287_, v___x_293_);
if (v___x_294_ == 0)
{
v___y_291_ = v___x_294_;
goto v___jp_290_;
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = l_Lean_Syntax_getArg(v_fst_287_, v___x_295_);
v___x_297_ = l_Lean_Syntax_isOfKind(v___x_296_, v___x_288_);
if (v___x_297_ == 0)
{
v___y_291_ = v___x_297_;
goto v___jp_290_;
}
else
{
v___y_285_ = v___x_289_;
goto v___jp_284_;
}
}
}
else
{
return v_x_281_;
}
v___jp_284_:
{
if (v___y_285_ == 0)
{
return v_x_281_;
}
else
{
lean_inc(v_tail_283_);
lean_dec_ref_known(v_x_281_, 2);
v_x_281_ = v_tail_283_;
goto _start;
}
}
v___jp_290_:
{
if (v___y_291_ == 0)
{
lean_inc(v_tail_283_);
lean_dec_ref_known(v_x_281_, 2);
v_x_281_ = v_tail_283_;
goto _start;
}
else
{
v___y_285_ = v___x_289_;
goto v___jp_284_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1(lean_object* v_x_304_){
_start:
{
if (lean_obj_tag(v_x_304_) == 0)
{
uint8_t v___x_305_; 
v___x_305_ = 0;
return v___x_305_;
}
else
{
lean_object* v_head_306_; lean_object* v_tail_307_; uint8_t v___y_309_; lean_object* v_fst_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v_head_306_ = lean_ctor_get(v_x_304_, 0);
lean_inc(v_head_306_);
v_tail_307_ = lean_ctor_get(v_x_304_, 1);
lean_inc(v_tail_307_);
lean_dec_ref_known(v_x_304_, 2);
v_fst_311_ = lean_ctor_get(v_head_306_, 0);
lean_inc_n(v_fst_311_, 2);
lean_dec(v_head_306_);
v___x_312_ = ((lean_object*)(l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1));
v___x_313_ = l_Lean_Syntax_isOfKind(v_fst_311_, v___x_312_);
if (v___x_313_ == 0)
{
lean_dec(v_fst_311_);
v___y_309_ = v___x_313_;
goto v___jp_308_;
}
else
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_314_ = lean_unsigned_to_nat(1u);
v___x_315_ = l_Lean_Syntax_getArg(v_fst_311_, v___x_314_);
lean_dec(v_fst_311_);
v___x_316_ = ((lean_object*)(l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1));
v___x_317_ = l_Lean_Syntax_isOfKind(v___x_315_, v___x_316_);
v___y_309_ = v___x_317_;
goto v___jp_308_;
}
v___jp_308_:
{
if (v___y_309_ == 0)
{
v_x_304_ = v_tail_307_;
goto _start;
}
else
{
lean_dec(v_tail_307_);
return v___y_309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___boxed(lean_object* v_x_318_){
_start:
{
uint8_t v_res_319_; lean_object* v_r_320_; 
v_res_319_ = l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1(v_x_318_);
v_r_320_ = lean_box(v_res_319_);
return v_r_320_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_325_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__3));
v___x_326_ = lean_unsigned_to_nat(14u);
v___x_327_ = lean_unsigned_to_nat(22u);
v___x_328_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__2));
v___x_329_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__1));
v___x_330_ = l_mkPanicMessageWithDecl(v___x_329_, v___x_328_, v___x_327_, v___x_326_, v___x_325_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f(lean_object* v_hoverPos_331_, lean_object* v_infoTree_332_){
_start:
{
lean_object* v___x_333_; 
lean_inc(v_hoverPos_331_);
v___x_333_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f(v_hoverPos_331_, v_infoTree_332_);
if (lean_obj_tag(v___x_333_) == 1)
{
lean_object* v_val_334_; lean_object* v_fst_335_; lean_object* v_snd_336_; lean_object* v___f_337_; lean_object* v___f_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_val_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_val_334_);
lean_dec_ref_known(v___x_333_, 1);
v_fst_335_ = lean_ctor_get(v_val_334_, 0);
lean_inc(v_fst_335_);
v_snd_336_ = lean_ctor_get(v_val_334_, 1);
lean_inc(v_snd_336_);
lean_dec(v_val_334_);
lean_inc(v_hoverPos_331_);
v___f_337_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0___boxed), 2, 1);
lean_closure_set(v___f_337_, 0, v_hoverPos_331_);
v___f_338_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__0));
v___x_339_ = l_Lean_Elab_Info_stx(v_snd_336_);
v___x_340_ = l_Lean_Syntax_findStack_x3f(v___x_339_, v___f_337_, v___f_338_);
if (lean_obj_tag(v___x_340_) == 1)
{
lean_object* v_val_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_397_; 
v_val_341_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_397_ == 0)
{
v___x_343_ = v___x_340_;
v_isShared_344_ = v_isSharedCheck_397_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_val_341_);
lean_dec(v___x_340_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_397_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v_stack_345_; lean_object* v___x_346_; 
v_stack_345_ = l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0(v_val_341_);
v___x_346_ = l_List_head_x3f___redArg(v_stack_345_);
if (lean_obj_tag(v___x_346_) == 1)
{
lean_object* v_val_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_395_; 
v_val_347_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_395_ == 0)
{
v___x_349_ = v___x_346_;
v_isShared_350_ = v_isSharedCheck_395_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_val_347_);
lean_dec(v___x_346_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_395_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v_fst_351_; lean_object* v___y_353_; uint8_t v___y_354_; lean_object* v___y_355_; lean_object* v___y_364_; uint8_t v___y_365_; lean_object* v___y_366_; uint8_t v_isDotIdCompletion_375_; lean_object* v_fst_377_; uint8_t v_snd_378_; 
v_fst_351_ = lean_ctor_get(v_val_347_, 0);
lean_inc(v_fst_351_);
lean_dec(v_val_347_);
v_isDotIdCompletion_375_ = l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1(v_stack_345_);
if (v_isDotIdCompletion_375_ == 0)
{
lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_383_ = ((lean_object*)(l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1));
lean_inc(v_fst_351_);
v___x_384_ = l_Lean_Syntax_isOfKind(v_fst_351_, v___x_383_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; uint8_t v___x_386_; 
v___x_385_ = ((lean_object*)(l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6));
lean_inc(v_fst_351_);
v___x_386_ = l_Lean_Syntax_isOfKind(v_fst_351_, v___x_385_);
if (v___x_386_ == 0)
{
lean_object* v___x_387_; 
lean_dec(v_fst_351_);
lean_del_object(v___x_349_);
lean_del_object(v___x_343_);
lean_dec(v_snd_336_);
lean_dec(v_fst_335_);
lean_dec(v_hoverPos_331_);
v___x_387_ = lean_box(0);
return v___x_387_;
}
else
{
lean_object* v___x_388_; lean_object* v_id_389_; uint8_t v___x_390_; 
v___x_388_ = lean_unsigned_to_nat(0u);
v_id_389_ = l_Lean_Syntax_getArg(v_fst_351_, v___x_388_);
lean_inc(v_id_389_);
v___x_390_ = l_Lean_Syntax_isOfKind(v_id_389_, v___x_383_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; 
lean_dec(v_id_389_);
lean_dec(v_fst_351_);
lean_del_object(v___x_349_);
lean_del_object(v___x_343_);
lean_dec(v_snd_336_);
lean_dec(v_fst_335_);
lean_dec(v_hoverPos_331_);
v___x_391_ = lean_box(0);
return v___x_391_;
}
else
{
lean_object* v___x_392_; 
v___x_392_ = l_Lean_TSyntax_getId(v_id_389_);
lean_dec(v_id_389_);
v_fst_377_ = v___x_392_;
v_snd_378_ = v___x_390_;
goto v___jp_376_;
}
}
}
else
{
lean_object* v___x_393_; 
v___x_393_ = l_Lean_TSyntax_getId(v_fst_351_);
v_fst_377_ = v___x_393_;
v_snd_378_ = v_isDotIdCompletion_375_;
goto v___jp_376_;
}
}
else
{
lean_object* v___x_394_; 
lean_dec(v_fst_351_);
lean_del_object(v___x_349_);
lean_del_object(v___x_343_);
lean_dec(v_snd_336_);
lean_dec(v_fst_335_);
lean_dec(v_hoverPos_331_);
v___x_394_ = lean_box(0);
return v___x_394_;
}
v___jp_352_:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_361_; 
v___x_356_ = l_Lean_Elab_Info_lctx(v_snd_336_);
lean_dec(v_snd_336_);
v___x_357_ = lean_box(0);
v___x_358_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_358_, 0, v_fst_351_);
lean_ctor_set(v___x_358_, 1, v___y_353_);
lean_ctor_set(v___x_358_, 2, v___x_356_);
lean_ctor_set(v___x_358_, 3, v___x_357_);
lean_ctor_set_uint8(v___x_358_, sizeof(void*)*4, v___y_354_);
v___x_359_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_359_, 0, v___y_355_);
lean_ctor_set(v___x_359_, 1, v_fst_335_);
lean_ctor_set(v___x_359_, 2, v___x_358_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_359_);
v___x_361_ = v___x_349_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_359_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
v___jp_363_:
{
lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_367_ = lean_unsigned_to_nat(1u);
v___x_368_ = lean_nat_add(v_hoverPos_331_, v___x_367_);
v___x_369_ = lean_nat_dec_le(v___x_368_, v___y_366_);
lean_dec(v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; 
lean_dec(v___y_366_);
lean_del_object(v___x_343_);
lean_dec(v_hoverPos_331_);
v___x_370_ = lean_box(0);
v___y_353_ = v___y_364_;
v___y_354_ = v___y_365_;
v___y_355_ = v___x_370_;
goto v___jp_352_;
}
else
{
lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_371_ = lean_nat_sub(v___y_366_, v_hoverPos_331_);
lean_dec(v_hoverPos_331_);
lean_dec(v___y_366_);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 0, v___x_371_);
v___x_373_ = v___x_343_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_371_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
v___y_353_ = v___y_364_;
v___y_354_ = v___y_365_;
v___y_355_ = v___x_373_;
goto v___jp_352_;
}
}
}
v___jp_376_:
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_Syntax_getTailPos_x3f(v_fst_351_, v_isDotIdCompletion_375_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_obj_once(&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4, &l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4_once, _init_l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4);
v___x_381_ = l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__2(v___x_380_);
v___y_364_ = v_fst_377_;
v___y_365_ = v_snd_378_;
v___y_366_ = v___x_381_;
goto v___jp_363_;
}
else
{
lean_object* v_val_382_; 
v_val_382_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_val_382_);
lean_dec_ref_known(v___x_379_, 1);
v___y_364_ = v_fst_377_;
v___y_365_ = v_snd_378_;
v___y_366_ = v_val_382_;
goto v___jp_363_;
}
}
}
}
else
{
lean_object* v___x_396_; 
lean_dec(v___x_346_);
lean_dec(v_stack_345_);
lean_del_object(v___x_343_);
lean_dec(v_snd_336_);
lean_dec(v_fst_335_);
lean_dec(v_hoverPos_331_);
v___x_396_ = lean_box(0);
return v___x_396_;
}
}
}
else
{
lean_object* v___x_398_; 
lean_dec(v___x_340_);
lean_dec(v_snd_336_);
lean_dec(v_fst_335_);
lean_dec(v_hoverPos_331_);
v___x_398_ = lean_box(0);
return v___x_398_;
}
}
else
{
lean_object* v___x_399_; 
lean_dec(v___x_333_);
lean_dec(v_hoverPos_331_);
v___x_399_ = lean_box(0);
return v___x_399_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace(lean_object* v_fileMap_400_, lean_object* v_hoverPos_401_){
_start:
{
lean_object* v_source_402_; uint8_t v___x_403_; 
v_source_402_ = lean_ctor_get(v_fileMap_400_, 0);
v___x_403_ = lean_string_utf8_at_end(v_source_402_, v_hoverPos_401_);
if (v___x_403_ == 0)
{
uint32_t v___x_404_; uint32_t v___x_405_; uint8_t v___x_406_; 
v___x_404_ = lean_string_utf8_get(v_source_402_, v_hoverPos_401_);
v___x_405_ = 32;
v___x_406_ = lean_uint32_dec_eq(v___x_404_, v___x_405_);
if (v___x_406_ == 0)
{
uint32_t v___x_407_; uint8_t v___x_408_; 
v___x_407_ = 9;
v___x_408_ = lean_uint32_dec_eq(v___x_404_, v___x_407_);
if (v___x_408_ == 0)
{
uint32_t v___x_409_; uint8_t v___x_410_; 
v___x_409_ = 13;
v___x_410_ = lean_uint32_dec_eq(v___x_404_, v___x_409_);
if (v___x_410_ == 0)
{
uint32_t v___x_411_; uint8_t v___x_412_; 
v___x_411_ = 10;
v___x_412_ = lean_uint32_dec_eq(v___x_404_, v___x_411_);
return v___x_412_;
}
else
{
return v___x_410_;
}
}
else
{
return v___x_408_;
}
}
else
{
return v___x_406_;
}
}
else
{
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace___boxed(lean_object* v_fileMap_413_, lean_object* v_hoverPos_414_){
_start:
{
uint8_t v_res_415_; lean_object* v_r_416_; 
v_res_415_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace(v_fileMap_413_, v_hoverPos_414_);
lean_dec(v_hoverPos_414_);
lean_dec_ref(v_fileMap_413_);
v_r_416_ = lean_box(v_res_415_);
return v_r_416_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(lean_object* v_fileMap_417_, lean_object* v_hoverPos_418_){
_start:
{
lean_object* v_source_419_; uint8_t v___y_433_; uint8_t v___x_434_; 
v_source_419_ = lean_ctor_get(v_fileMap_417_, 0);
v___x_434_ = lean_string_utf8_at_end(v_source_419_, v_hoverPos_418_);
if (v___x_434_ == 0)
{
uint32_t v___x_435_; uint32_t v___x_436_; uint8_t v___x_437_; 
v___x_435_ = lean_string_utf8_get(v_source_419_, v_hoverPos_418_);
v___x_436_ = 32;
v___x_437_ = lean_uint32_dec_eq(v___x_435_, v___x_436_);
if (v___x_437_ == 0)
{
uint32_t v___x_438_; uint8_t v___x_439_; 
v___x_438_ = 9;
v___x_439_ = lean_uint32_dec_eq(v___x_435_, v___x_438_);
if (v___x_439_ == 0)
{
uint32_t v___x_440_; uint8_t v___x_441_; 
v___x_440_ = 13;
v___x_441_ = lean_uint32_dec_eq(v___x_435_, v___x_440_);
if (v___x_441_ == 0)
{
uint32_t v___x_442_; uint8_t v___x_443_; 
v___x_442_ = 10;
v___x_443_ = lean_uint32_dec_eq(v___x_435_, v___x_442_);
v___y_433_ = v___x_443_;
goto v___jp_432_;
}
else
{
goto v___jp_420_;
}
}
else
{
goto v___jp_420_;
}
}
else
{
goto v___jp_420_;
}
}
else
{
v___y_433_ = v___x_434_;
goto v___jp_432_;
}
v___jp_420_:
{
lean_object* v___x_421_; lean_object* v___x_422_; uint32_t v___x_423_; uint32_t v___x_424_; uint8_t v___x_425_; 
v___x_421_ = lean_unsigned_to_nat(1u);
v___x_422_ = lean_nat_sub(v_hoverPos_418_, v___x_421_);
v___x_423_ = lean_string_utf8_get(v_source_419_, v___x_422_);
lean_dec(v___x_422_);
v___x_424_ = 32;
v___x_425_ = lean_uint32_dec_eq(v___x_423_, v___x_424_);
if (v___x_425_ == 0)
{
uint32_t v___x_426_; uint8_t v___x_427_; 
v___x_426_ = 9;
v___x_427_ = lean_uint32_dec_eq(v___x_423_, v___x_426_);
if (v___x_427_ == 0)
{
uint32_t v___x_428_; uint8_t v___x_429_; 
v___x_428_ = 13;
v___x_429_ = lean_uint32_dec_eq(v___x_423_, v___x_428_);
if (v___x_429_ == 0)
{
uint32_t v___x_430_; uint8_t v___x_431_; 
v___x_430_ = 10;
v___x_431_ = lean_uint32_dec_eq(v___x_423_, v___x_430_);
return v___x_431_;
}
else
{
return v___x_429_;
}
}
else
{
return v___x_427_;
}
}
else
{
return v___x_425_;
}
}
v___jp_432_:
{
if (v___y_433_ == 0)
{
return v___y_433_;
}
else
{
goto v___jp_420_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace___boxed(lean_object* v_fileMap_444_, lean_object* v_hoverPos_445_){
_start:
{
uint8_t v_res_446_; lean_object* v_r_447_; 
v_res_446_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(v_fileMap_444_, v_hoverPos_445_);
lean_dec(v_hoverPos_445_);
lean_dec_ref(v_fileMap_444_);
v_r_447_ = lean_box(v_res_446_);
return v_r_447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f(lean_object* v_stx_461_){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
lean_inc(v_stx_461_);
v___x_462_ = l_Lean_Syntax_getKind(v_stx_461_);
v___x_463_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2));
v___x_464_ = lean_name_eq(v___x_462_, v___x_463_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_465_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4));
v___x_466_ = lean_name_eq(v___x_462_, v___x_465_);
lean_dec(v___x_462_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; 
lean_dec(v_stx_461_);
v___x_467_ = lean_box(0);
return v___x_467_;
}
else
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_468_ = lean_unsigned_to_nat(1u);
v___x_469_ = l_Lean_Syntax_getArg(v_stx_461_, v___x_468_);
lean_dec(v_stx_461_);
v___x_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
return v___x_470_;
}
}
else
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
lean_dec(v___x_462_);
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = l_Lean_Syntax_getArg(v_stx_461_, v___x_471_);
lean_dec(v_stx_461_);
v___x_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
return v___x_473_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation(lean_object* v_fileMap_474_, lean_object* v_hoverPos_475_, lean_object* v_hoverFilePos_476_, lean_object* v_stx_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f(v_stx_477_);
if (lean_obj_tag(v___x_478_) == 1)
{
lean_object* v_val_479_; uint8_t v___x_480_; lean_object* v___x_481_; 
v_val_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc(v_val_479_);
lean_dec_ref_known(v___x_478_, 1);
v___x_480_ = 0;
v___x_481_ = l_Lean_Syntax_getPos_x3f(v_val_479_, v___x_480_);
lean_dec(v_val_479_);
if (lean_obj_tag(v___x_481_) == 1)
{
lean_object* v_val_482_; lean_object* v___x_483_; lean_object* v_column_484_; lean_object* v_column_485_; uint8_t v___x_486_; 
v_val_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_val_482_);
lean_dec_ref_known(v___x_481_, 1);
lean_inc_ref(v_fileMap_474_);
v___x_483_ = l_Lean_FileMap_toPosition(v_fileMap_474_, v_val_482_);
lean_dec(v_val_482_);
v_column_484_ = lean_ctor_get(v___x_483_, 1);
lean_inc(v_column_484_);
lean_dec_ref(v___x_483_);
v_column_485_ = lean_ctor_get(v_hoverFilePos_476_, 1);
v___x_486_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(v_fileMap_474_, v_hoverPos_475_);
lean_dec_ref(v_fileMap_474_);
if (v___x_486_ == 0)
{
lean_dec(v_column_484_);
return v___x_486_;
}
else
{
uint8_t v_isCursorInTacticBlock_487_; 
v_isCursorInTacticBlock_487_ = lean_nat_dec_eq(v_column_485_, v_column_484_);
lean_dec(v_column_484_);
return v_isCursorInTacticBlock_487_;
}
}
else
{
lean_dec(v___x_481_);
lean_dec_ref(v_fileMap_474_);
return v___x_480_;
}
}
else
{
uint8_t v___x_488_; 
lean_dec(v___x_478_);
lean_dec_ref(v_fileMap_474_);
v___x_488_ = 0;
return v___x_488_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation___boxed(lean_object* v_fileMap_489_, lean_object* v_hoverPos_490_, lean_object* v_hoverFilePos_491_, lean_object* v_stx_492_){
_start:
{
uint8_t v_res_493_; lean_object* v_r_494_; 
v_res_493_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation(v_fileMap_489_, v_hoverPos_490_, v_hoverFilePos_491_, v_stx_492_);
lean_dec_ref(v_hoverFilePos_491_);
lean_dec(v_hoverPos_490_);
v_r_494_ = lean_box(v_res_493_);
return v_r_494_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0(lean_object* v_hoverPos_496_, lean_object* v_as_497_, size_t v_i_498_, size_t v_stop_499_){
_start:
{
uint8_t v___x_504_; 
v___x_504_ = lean_usize_dec_eq(v_i_498_, v_stop_499_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_array_uget_borrowed(v_as_497_, v_i_498_);
v___x_506_ = l_Lean_Syntax_getTailPos_x3f(v___x_505_, v___x_504_);
if (lean_obj_tag(v___x_506_) == 1)
{
lean_object* v_val_507_; uint8_t v___x_508_; uint8_t v___y_510_; lean_object* v___x_514_; uint8_t v___x_515_; 
v_val_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_val_507_);
lean_dec_ref_known(v___x_506_, 1);
v___x_508_ = 1;
v___x_514_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___closed__0));
lean_inc(v___x_505_);
v___x_515_ = l_Lean_Syntax_isToken(v___x_514_, v___x_505_);
if (v___x_515_ == 0)
{
v___y_510_ = v___x_515_;
goto v___jp_509_;
}
else
{
uint8_t v___x_516_; 
v___x_516_ = lean_nat_dec_le(v_val_507_, v_hoverPos_496_);
v___y_510_ = v___x_516_;
goto v___jp_509_;
}
v___jp_509_:
{
if (v___y_510_ == 0)
{
lean_dec(v_val_507_);
goto v___jp_500_;
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_511_ = l_Lean_Syntax_getTrailingSize(v___x_505_);
v___x_512_ = lean_nat_add(v_val_507_, v___x_511_);
lean_dec(v___x_511_);
lean_dec(v_val_507_);
v___x_513_ = lean_nat_dec_le(v_hoverPos_496_, v___x_512_);
lean_dec(v___x_512_);
if (v___x_513_ == 0)
{
goto v___jp_500_;
}
else
{
return v___x_508_;
}
}
}
}
else
{
lean_dec(v___x_506_);
goto v___jp_500_;
}
}
else
{
uint8_t v___x_517_; 
v___x_517_ = 0;
return v___x_517_;
}
v___jp_500_:
{
size_t v___x_501_; size_t v___x_502_; 
v___x_501_ = ((size_t)1ULL);
v___x_502_ = lean_usize_add(v_i_498_, v___x_501_);
v_i_498_ = v___x_502_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___boxed(lean_object* v_hoverPos_518_, lean_object* v_as_519_, lean_object* v_i_520_, lean_object* v_stop_521_){
_start:
{
size_t v_i_boxed_522_; size_t v_stop_boxed_523_; uint8_t v_res_524_; lean_object* v_r_525_; 
v_i_boxed_522_ = lean_unbox_usize(v_i_520_);
lean_dec(v_i_520_);
v_stop_boxed_523_ = lean_unbox_usize(v_stop_521_);
lean_dec(v_stop_521_);
v_res_524_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0(v_hoverPos_518_, v_as_519_, v_i_boxed_522_, v_stop_boxed_523_);
lean_dec_ref(v_as_519_);
lean_dec(v_hoverPos_518_);
v_r_525_ = lean_box(v_res_524_);
return v_r_525_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon(lean_object* v_fileMap_526_, lean_object* v_hoverPos_527_, lean_object* v_stx_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f(v_stx_528_);
if (lean_obj_tag(v___x_529_) == 1)
{
lean_object* v_val_530_; uint8_t v___x_531_; 
v_val_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_val_530_);
lean_dec_ref_known(v___x_529_, 1);
v___x_531_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace(v_fileMap_526_, v_hoverPos_527_);
if (v___x_531_ == 0)
{
lean_dec(v_val_530_);
return v___x_531_;
}
else
{
lean_object* v_tactics_532_; lean_object* v___x_533_; lean_object* v___x_534_; uint8_t v___x_535_; 
v_tactics_532_ = l_Lean_Syntax_getArgs(v_val_530_);
lean_dec(v_val_530_);
v___x_533_ = lean_unsigned_to_nat(0u);
v___x_534_ = lean_array_get_size(v_tactics_532_);
v___x_535_ = lean_nat_dec_lt(v___x_533_, v___x_534_);
if (v___x_535_ == 0)
{
lean_dec_ref(v_tactics_532_);
return v___x_535_;
}
else
{
if (v___x_535_ == 0)
{
lean_dec_ref(v_tactics_532_);
return v___x_535_;
}
else
{
size_t v___x_536_; size_t v___x_537_; uint8_t v___x_538_; 
v___x_536_ = ((size_t)0ULL);
v___x_537_ = lean_usize_of_nat(v___x_534_);
v___x_538_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0(v_hoverPos_527_, v_tactics_532_, v___x_536_, v___x_537_);
lean_dec_ref(v_tactics_532_);
return v___x_538_;
}
}
}
}
else
{
uint8_t v___x_539_; 
lean_dec(v___x_529_);
v___x_539_ = 0;
return v___x_539_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon___boxed(lean_object* v_fileMap_540_, lean_object* v_hoverPos_541_, lean_object* v_stx_542_){
_start:
{
uint8_t v_res_543_; lean_object* v_r_544_; 
v_res_543_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon(v_fileMap_540_, v_hoverPos_541_, v_stx_542_);
lean_dec(v_hoverPos_541_);
lean_dec_ref(v_fileMap_540_);
v_r_544_ = lean_box(v_res_543_);
return v_r_544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg(lean_object* v_fileMap_545_, lean_object* v_a_546_){
_start:
{
lean_object* v_fst_547_; lean_object* v_snd_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_570_; 
v_fst_547_ = lean_ctor_get(v_a_546_, 0);
v_snd_548_ = lean_ctor_get(v_a_546_, 1);
v_isSharedCheck_570_ = !lean_is_exclusive(v_a_546_);
if (v_isSharedCheck_570_ == 0)
{
v___x_550_ = v_a_546_;
v_isShared_551_ = v_isSharedCheck_570_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_snd_548_);
lean_inc(v_fst_547_);
lean_dec(v_a_546_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_570_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v_source_552_; uint8_t v___x_553_; 
v_source_552_ = lean_ctor_get(v_fileMap_545_, 0);
v___x_553_ = lean_string_utf8_at_end(v_source_552_, v_fst_547_);
if (v___x_553_ == 0)
{
uint32_t v___x_554_; uint32_t v___x_555_; uint8_t v___x_556_; 
v___x_554_ = lean_string_utf8_get(v_source_552_, v_fst_547_);
v___x_555_ = 32;
v___x_556_ = lean_uint32_dec_eq(v___x_554_, v___x_555_);
if (v___x_556_ == 0)
{
lean_object* v___x_558_; 
if (v_isShared_551_ == 0)
{
v___x_558_ = v___x_550_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_fst_547_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_snd_548_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
else
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_564_; 
v___x_560_ = lean_string_utf8_next(v_source_552_, v_fst_547_);
lean_dec(v_fst_547_);
v___x_561_ = lean_unsigned_to_nat(1u);
v___x_562_ = lean_nat_add(v_snd_548_, v___x_561_);
lean_dec(v_snd_548_);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 1, v___x_562_);
lean_ctor_set(v___x_550_, 0, v___x_560_);
v___x_564_ = v___x_550_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_560_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v___x_562_);
v___x_564_ = v_reuseFailAlloc_566_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
v_a_546_ = v___x_564_;
goto _start;
}
}
}
else
{
lean_object* v___x_568_; 
if (v_isShared_551_ == 0)
{
v___x_568_ = v___x_550_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_fst_547_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v_snd_548_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg___boxed(lean_object* v_fileMap_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg(v_fileMap_571_, v_a_572_);
lean_dec_ref(v_fileMap_571_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces(lean_object* v_fileMap_574_, lean_object* v_pos_575_){
_start:
{
lean_object* v_n_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v_snd_579_; 
v_n_576_ = lean_unsigned_to_nat(0u);
v___x_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_577_, 0, v_pos_575_);
lean_ctor_set(v___x_577_, 1, v_n_576_);
v___x_578_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg(v_fileMap_574_, v___x_577_);
v_snd_579_ = lean_ctor_get(v___x_578_, 1);
lean_inc(v_snd_579_);
lean_dec_ref(v___x_578_);
return v_snd_579_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces___boxed(lean_object* v_fileMap_580_, lean_object* v_pos_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces(v_fileMap_580_, v_pos_581_);
lean_dec_ref(v_fileMap_580_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0(lean_object* v_fileMap_583_, lean_object* v_inst_584_, lean_object* v_a_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg(v_fileMap_583_, v_a_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___boxed(lean_object* v_fileMap_587_, lean_object* v_inst_588_, lean_object* v_a_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0(v_fileMap_587_, v_inst_588_, v_a_589_);
lean_dec_ref(v_fileMap_587_);
return v_res_590_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation(lean_object* v_fileMap_591_, lean_object* v_hoverPos_592_, lean_object* v_leadingTokenTailPos_x3f_593_){
_start:
{
if (lean_obj_tag(v_leadingTokenTailPos_x3f_593_) == 1)
{
lean_object* v_val_594_; lean_object* v_hoverFilePos_595_; lean_object* v_line_596_; lean_object* v_column_597_; lean_object* v_tokenTailFilePos_598_; lean_object* v_line_599_; uint8_t v___x_600_; 
v_val_594_ = lean_ctor_get(v_leadingTokenTailPos_x3f_593_, 0);
lean_inc_ref_n(v_fileMap_591_, 2);
v_hoverFilePos_595_ = l_Lean_FileMap_toPosition(v_fileMap_591_, v_hoverPos_592_);
v_line_596_ = lean_ctor_get(v_hoverFilePos_595_, 0);
lean_inc(v_line_596_);
v_column_597_ = lean_ctor_get(v_hoverFilePos_595_, 1);
lean_inc(v_column_597_);
lean_dec_ref(v_hoverFilePos_595_);
v_tokenTailFilePos_598_ = l_Lean_FileMap_toPosition(v_fileMap_591_, v_val_594_);
v_line_599_ = lean_ctor_get(v_tokenTailFilePos_598_, 0);
lean_inc(v_line_599_);
lean_dec_ref(v_tokenTailFilePos_598_);
v___x_600_ = lean_nat_dec_eq(v_line_596_, v_line_599_);
lean_dec(v_line_596_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v_expectedColumn_604_; uint8_t v___x_605_; 
v___x_601_ = l_Lean_FileMap_lineStart(v_fileMap_591_, v_line_599_);
lean_dec(v_line_599_);
v___x_602_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces(v_fileMap_591_, v___x_601_);
lean_dec_ref(v_fileMap_591_);
v___x_603_ = lean_unsigned_to_nat(2u);
v_expectedColumn_604_ = lean_nat_add(v___x_602_, v___x_603_);
lean_dec(v___x_602_);
v___x_605_ = lean_nat_dec_eq(v_column_597_, v_expectedColumn_604_);
lean_dec(v_expectedColumn_604_);
lean_dec(v_column_597_);
return v___x_605_;
}
else
{
uint8_t v___x_606_; 
lean_dec(v_line_599_);
lean_dec(v_column_597_);
lean_dec_ref(v_fileMap_591_);
v___x_606_ = lean_nat_dec_le(v_val_594_, v_hoverPos_592_);
return v___x_606_;
}
}
else
{
uint8_t v___x_607_; 
lean_dec_ref(v_fileMap_591_);
v___x_607_ = 1;
return v___x_607_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation___boxed(lean_object* v_fileMap_608_, lean_object* v_hoverPos_609_, lean_object* v_leadingTokenTailPos_x3f_610_){
_start:
{
uint8_t v_res_611_; lean_object* v_r_612_; 
v_res_611_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation(v_fileMap_608_, v_hoverPos_609_, v_leadingTokenTailPos_x3f_610_);
lean_dec(v_leadingTokenTailPos_x3f_610_);
lean_dec(v_hoverPos_609_);
v_r_612_ = lean_box(v_res_611_);
return v_r_612_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(lean_object* v_a_613_){
_start:
{
switch(lean_obj_tag(v_a_613_))
{
case 0:
{
uint8_t v___x_614_; 
v___x_614_ = 1;
return v___x_614_;
}
case 1:
{
lean_object* v_args_615_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v_args_615_ = lean_ctor_get(v_a_613_, 2);
v___x_616_ = lean_unsigned_to_nat(0u);
v___x_617_ = lean_array_get_size(v_args_615_);
v___x_618_ = lean_nat_dec_lt(v___x_616_, v___x_617_);
if (v___x_618_ == 0)
{
uint8_t v___x_619_; 
v___x_619_ = 1;
return v___x_619_;
}
else
{
if (v___x_618_ == 0)
{
return v___x_618_;
}
else
{
size_t v___x_620_; size_t v___x_621_; uint8_t v___x_622_; 
v___x_620_ = ((size_t)0ULL);
v___x_621_ = lean_usize_of_nat(v___x_617_);
v___x_622_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0(v_args_615_, v___x_620_, v___x_621_);
if (v___x_622_ == 0)
{
return v___x_618_;
}
else
{
uint8_t v___x_623_; 
v___x_623_ = 0;
return v___x_623_;
}
}
}
}
default: 
{
uint8_t v___x_624_; 
v___x_624_ = 0;
return v___x_624_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0(lean_object* v_as_625_, size_t v_i_626_, size_t v_stop_627_){
_start:
{
uint8_t v___x_628_; 
v___x_628_ = lean_usize_dec_eq(v_i_626_, v_stop_627_);
if (v___x_628_ == 0)
{
lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_629_ = lean_array_uget_borrowed(v_as_625_, v_i_626_);
v___x_630_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(v___x_629_);
if (v___x_630_ == 0)
{
uint8_t v___x_631_; 
v___x_631_ = 1;
return v___x_631_;
}
else
{
size_t v___x_632_; size_t v___x_633_; 
v___x_632_ = ((size_t)1ULL);
v___x_633_ = lean_usize_add(v_i_626_, v___x_632_);
v_i_626_ = v___x_633_;
goto _start;
}
}
else
{
uint8_t v___x_635_; 
v___x_635_ = 0;
return v___x_635_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0___boxed(lean_object* v_as_636_, lean_object* v_i_637_, lean_object* v_stop_638_){
_start:
{
size_t v_i_boxed_639_; size_t v_stop_boxed_640_; uint8_t v_res_641_; lean_object* v_r_642_; 
v_i_boxed_639_ = lean_unbox_usize(v_i_637_);
lean_dec(v_i_637_);
v_stop_boxed_640_ = lean_unbox_usize(v_stop_638_);
lean_dec(v_stop_638_);
v_res_641_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0(v_as_636_, v_i_boxed_639_, v_stop_boxed_640_);
lean_dec_ref(v_as_636_);
v_r_642_ = lean_box(v_res_641_);
return v_r_642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty___boxed(lean_object* v_a_643_){
_start:
{
uint8_t v_res_644_; lean_object* v_r_645_; 
v_res_644_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(v_a_643_);
lean_dec(v_a_643_);
v_r_645_ = lean_box(v_res_644_);
return v_r_645_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock(lean_object* v_stx_652_){
_start:
{
uint8_t v___y_654_; uint8_t v___y_662_; lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
lean_inc(v_stx_652_);
v___x_667_ = l_Lean_Syntax_getKind(v_stx_652_);
v___x_668_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1));
v___x_669_ = lean_name_eq(v___x_667_, v___x_668_);
lean_dec(v___x_667_);
if (v___x_669_ == 0)
{
v___y_662_ = v___x_669_;
goto v___jp_661_;
}
else
{
uint8_t v___x_670_; 
v___x_670_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(v_stx_652_);
v___y_662_ = v___x_670_;
goto v___jp_661_;
}
v___jp_653_:
{
if (v___y_654_ == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; uint8_t v___x_657_; 
lean_inc(v_stx_652_);
v___x_655_ = l_Lean_Syntax_getKind(v_stx_652_);
v___x_656_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4));
v___x_657_ = lean_name_eq(v___x_655_, v___x_656_);
lean_dec(v___x_655_);
if (v___x_657_ == 0)
{
lean_dec(v_stx_652_);
return v___x_657_;
}
else
{
lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_658_ = lean_unsigned_to_nat(1u);
v___x_659_ = l_Lean_Syntax_getArg(v_stx_652_, v___x_658_);
lean_dec(v_stx_652_);
v___x_660_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(v___x_659_);
lean_dec(v___x_659_);
return v___x_660_;
}
}
else
{
lean_dec(v_stx_652_);
return v___y_654_;
}
}
v___jp_661_:
{
if (v___y_662_ == 0)
{
lean_object* v___x_663_; lean_object* v___x_664_; uint8_t v___x_665_; 
lean_inc(v_stx_652_);
v___x_663_ = l_Lean_Syntax_getKind(v_stx_652_);
v___x_664_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2));
v___x_665_ = lean_name_eq(v___x_663_, v___x_664_);
lean_dec(v___x_663_);
if (v___x_665_ == 0)
{
v___y_654_ = v___x_665_;
goto v___jp_653_;
}
else
{
uint8_t v___x_666_; 
v___x_666_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(v_stx_652_);
v___y_654_ = v___x_666_;
goto v___jp_653_;
}
}
else
{
lean_dec(v_stx_652_);
return v___y_662_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___boxed(lean_object* v_stx_671_){
_start:
{
uint8_t v_res_672_; lean_object* v_r_673_; 
v_res_672_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock(v_stx_671_);
v_r_673_ = lean_box(v_res_672_);
return v_r_673_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(lean_object* v_fileMap_674_, lean_object* v_hoverPos_675_, lean_object* v_stx_676_, lean_object* v_leadingTokenTailPos_x3f_677_){
_start:
{
uint8_t v___x_678_; 
v___x_678_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(v_fileMap_674_, v_hoverPos_675_);
if (v___x_678_ == 0)
{
lean_dec(v_stx_676_);
lean_dec_ref(v_fileMap_674_);
return v___x_678_;
}
else
{
uint8_t v___x_679_; uint8_t v___x_680_; 
v___x_679_ = 0;
lean_inc(v_stx_676_);
v___x_680_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock(v_stx_676_);
if (v___x_680_ == 0)
{
lean_dec(v_stx_676_);
lean_dec_ref(v_fileMap_674_);
return v___x_679_;
}
else
{
lean_object* v___x_681_; lean_object* v___x_682_; uint8_t v___x_683_; 
lean_inc(v_stx_676_);
v___x_681_ = l_Lean_Syntax_getKind(v_stx_676_);
v___x_682_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4));
v___x_683_ = lean_name_eq(v___x_681_, v___x_682_);
lean_dec(v___x_681_);
if (v___x_683_ == 0)
{
uint8_t v___x_684_; 
lean_dec(v_stx_676_);
v___x_684_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation(v_fileMap_674_, v_hoverPos_675_, v_leadingTokenTailPos_x3f_677_);
return v___x_684_;
}
else
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
lean_dec_ref(v_fileMap_674_);
v___x_685_ = lean_unsigned_to_nat(0u);
v___x_686_ = l_Lean_Syntax_getArg(v_stx_676_, v___x_685_);
v___x_687_ = l_Lean_Syntax_getTailPos_x3f(v___x_686_, v___x_679_);
lean_dec(v___x_686_);
if (lean_obj_tag(v___x_687_) == 1)
{
lean_object* v_val_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v_val_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_val_688_);
lean_dec_ref_known(v___x_687_, 1);
v___x_689_ = lean_unsigned_to_nat(2u);
v___x_690_ = l_Lean_Syntax_getArg(v_stx_676_, v___x_689_);
lean_dec(v_stx_676_);
v___x_691_ = l_Lean_Syntax_getPos_x3f(v___x_690_, v___x_679_);
lean_dec(v___x_690_);
if (lean_obj_tag(v___x_691_) == 1)
{
lean_object* v_val_692_; uint8_t v___x_693_; 
v_val_692_ = lean_ctor_get(v___x_691_, 0);
lean_inc(v_val_692_);
lean_dec_ref_known(v___x_691_, 1);
v___x_693_ = lean_nat_dec_le(v_val_688_, v_hoverPos_675_);
lean_dec(v_val_688_);
if (v___x_693_ == 0)
{
lean_dec(v_val_692_);
return v___x_679_;
}
else
{
uint8_t v___x_694_; 
v___x_694_ = lean_nat_dec_le(v_hoverPos_675_, v_val_692_);
lean_dec(v_val_692_);
return v___x_694_;
}
}
else
{
lean_dec(v___x_691_);
lean_dec(v_val_688_);
return v___x_679_;
}
}
else
{
lean_dec(v___x_687_);
lean_dec(v_stx_676_);
return v___x_679_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock___boxed(lean_object* v_fileMap_695_, lean_object* v_hoverPos_696_, lean_object* v_stx_697_, lean_object* v_leadingTokenTailPos_x3f_698_){
_start:
{
uint8_t v_res_699_; lean_object* v_r_700_; 
v_res_699_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(v_fileMap_695_, v_hoverPos_696_, v_stx_697_, v_leadingTokenTailPos_x3f_698_);
lean_dec(v_leadingTokenTailPos_x3f_698_);
lean_dec(v_hoverPos_696_);
v_r_700_ = lean_box(v_res_699_);
return v_r_700_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go(lean_object* v_fileMap_701_, lean_object* v_hoverPos_702_, lean_object* v_hoverFilePos_703_, lean_object* v_stx_704_, lean_object* v_leadingWs_705_, lean_object* v_leadingTokenTailPos_x3f_706_){
_start:
{
uint8_t v___x_707_; lean_object* v___x_708_; 
v___x_707_ = 0;
v___x_708_ = l_Lean_Syntax_getPos_x3f(v_stx_704_, v___x_707_);
if (lean_obj_tag(v___x_708_) == 1)
{
lean_object* v_val_709_; lean_object* v___x_710_; 
v_val_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_val_709_);
lean_dec_ref_known(v___x_708_, 1);
v___x_710_ = l_Lean_Syntax_getTailPos_x3f(v_stx_704_, v___x_707_);
if (lean_obj_tag(v___x_710_) == 1)
{
lean_object* v_val_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v_val_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_val_711_);
lean_dec_ref_known(v___x_710_, 1);
v___x_712_ = lean_nat_sub(v_val_709_, v_leadingWs_705_);
lean_dec(v_val_709_);
v___x_713_ = lean_nat_dec_le(v___x_712_, v_hoverPos_702_);
lean_dec(v___x_712_);
if (v___x_713_ == 0)
{
lean_dec(v_val_711_);
lean_dec(v_leadingTokenTailPos_x3f_706_);
lean_dec(v_leadingWs_705_);
lean_dec(v_stx_704_);
lean_dec_ref(v_fileMap_701_);
return v___x_713_;
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_714_ = l_Lean_Syntax_getTrailingSize(v_stx_704_);
v___x_715_ = lean_nat_add(v_val_711_, v___x_714_);
lean_dec(v___x_714_);
lean_dec(v_val_711_);
v___x_716_ = lean_nat_dec_le(v_hoverPos_702_, v___x_715_);
if (v___x_716_ == 0)
{
lean_dec(v___x_715_);
lean_dec(v_leadingTokenTailPos_x3f_706_);
lean_dec(v_leadingWs_705_);
lean_dec(v_stx_704_);
lean_dec_ref(v_fileMap_701_);
return v___x_716_;
}
else
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; size_t v_sz_721_; size_t v___x_722_; lean_object* v___x_723_; lean_object* v_fst_724_; 
v___x_717_ = l_Lean_Syntax_getArgs(v_stx_704_);
v___x_718_ = lean_box(0);
v___x_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_719_, 0, v_leadingWs_705_);
lean_ctor_set(v___x_719_, 1, v_leadingTokenTailPos_x3f_706_);
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v_sz_721_ = lean_array_size(v___x_717_);
v___x_722_ = ((size_t)0ULL);
lean_inc_ref(v_fileMap_701_);
v___x_723_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0(v_fileMap_701_, v_hoverPos_702_, v_hoverFilePos_703_, v_hoverPos_702_, v___x_715_, v___x_717_, v_sz_721_, v___x_722_, v___x_720_);
lean_dec_ref(v___x_717_);
lean_dec(v___x_715_);
v_fst_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_fst_724_);
if (lean_obj_tag(v_fst_724_) == 0)
{
lean_object* v_snd_725_; lean_object* v_snd_726_; uint8_t v___x_727_; 
v_snd_725_ = lean_ctor_get(v___x_723_, 1);
lean_inc(v_snd_725_);
lean_dec_ref(v___x_723_);
v_snd_726_ = lean_ctor_get(v_snd_725_, 1);
lean_inc(v_snd_726_);
lean_dec(v_snd_725_);
lean_inc(v_stx_704_);
lean_inc_ref(v_fileMap_701_);
v___x_727_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(v_fileMap_701_, v_hoverPos_702_, v_stx_704_, v_snd_726_);
lean_dec(v_snd_726_);
if (v___x_727_ == 0)
{
uint8_t v___x_728_; 
lean_inc(v_stx_704_);
v___x_728_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon(v_fileMap_701_, v_hoverPos_702_, v_stx_704_);
if (v___x_728_ == 0)
{
uint8_t v___x_729_; 
v___x_729_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation(v_fileMap_701_, v_hoverPos_702_, v_hoverFilePos_703_, v_stx_704_);
return v___x_729_;
}
else
{
lean_dec(v_stx_704_);
lean_dec_ref(v_fileMap_701_);
return v___x_716_;
}
}
else
{
lean_dec(v_stx_704_);
lean_dec_ref(v_fileMap_701_);
return v___x_716_;
}
}
else
{
lean_object* v_val_730_; uint8_t v___x_731_; 
lean_dec_ref(v___x_723_);
lean_dec(v_stx_704_);
lean_dec_ref(v_fileMap_701_);
v_val_730_ = lean_ctor_get(v_fst_724_, 0);
lean_inc(v_val_730_);
lean_dec_ref_known(v_fst_724_, 1);
v___x_731_ = lean_unbox(v_val_730_);
lean_dec(v_val_730_);
return v___x_731_;
}
}
}
}
else
{
uint8_t v___x_732_; 
lean_dec(v___x_710_);
lean_dec(v_val_709_);
lean_dec(v_leadingWs_705_);
v___x_732_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(v_fileMap_701_, v_hoverPos_702_, v_stx_704_, v_leadingTokenTailPos_x3f_706_);
lean_dec(v_leadingTokenTailPos_x3f_706_);
return v___x_732_;
}
}
else
{
uint8_t v___x_733_; 
lean_dec(v___x_708_);
lean_dec(v_leadingWs_705_);
v___x_733_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(v_fileMap_701_, v_hoverPos_702_, v_stx_704_, v_leadingTokenTailPos_x3f_706_);
lean_dec(v_leadingTokenTailPos_x3f_706_);
return v___x_733_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0(lean_object* v_fileMap_734_, lean_object* v_hoverPos_735_, lean_object* v_hoverFilePos_736_, lean_object* v___x_737_, lean_object* v___x_738_, lean_object* v_as_739_, size_t v_sz_740_, size_t v_i_741_, lean_object* v_b_742_){
_start:
{
uint8_t v___x_743_; 
v___x_743_ = lean_usize_dec_lt(v_i_741_, v_sz_740_);
if (v___x_743_ == 0)
{
lean_dec_ref(v_fileMap_734_);
return v_b_742_;
}
else
{
lean_object* v_snd_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_779_; 
v_snd_744_ = lean_ctor_get(v_b_742_, 1);
v_isSharedCheck_779_ = !lean_is_exclusive(v_b_742_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; 
v_unused_780_ = lean_ctor_get(v_b_742_, 0);
lean_dec(v_unused_780_);
v___x_746_ = v_b_742_;
v_isShared_747_ = v_isSharedCheck_779_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_snd_744_);
lean_dec(v_b_742_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_779_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v_fst_748_; lean_object* v_snd_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_778_; 
v_fst_748_ = lean_ctor_get(v_snd_744_, 0);
v_snd_749_ = lean_ctor_get(v_snd_744_, 1);
v_isSharedCheck_778_ = !lean_is_exclusive(v_snd_744_);
if (v_isSharedCheck_778_ == 0)
{
v___x_751_ = v_snd_744_;
v_isShared_752_ = v_isSharedCheck_778_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_snd_749_);
lean_inc(v_fst_748_);
lean_dec(v_snd_744_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_778_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v_a_753_; uint8_t v___x_754_; 
v_a_753_ = lean_array_uget_borrowed(v_as_739_, v_i_741_);
lean_inc(v_snd_749_);
lean_inc(v_fst_748_);
lean_inc(v_a_753_);
lean_inc_ref(v_fileMap_734_);
v___x_754_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go(v_fileMap_734_, v_hoverPos_735_, v_hoverFilePos_736_, v_a_753_, v_fst_748_, v_snd_749_);
if (v___x_754_ == 0)
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___y_758_; lean_object* v___x_768_; 
lean_dec(v_fst_748_);
v___x_755_ = lean_box(0);
v___x_756_ = l_Lean_Syntax_getTrailingSize(v_a_753_);
v___x_768_ = l_Lean_Syntax_getTailPos_x3f(v_a_753_, v___x_754_);
if (lean_obj_tag(v___x_768_) == 0)
{
v___y_758_ = v_snd_749_;
goto v___jp_757_;
}
else
{
lean_dec(v_snd_749_);
v___y_758_ = v___x_768_;
goto v___jp_757_;
}
v___jp_757_:
{
lean_object* v___x_760_; 
if (v_isShared_752_ == 0)
{
lean_ctor_set(v___x_751_, 1, v___y_758_);
lean_ctor_set(v___x_751_, 0, v___x_756_);
v___x_760_ = v___x_751_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v___x_756_);
lean_ctor_set(v_reuseFailAlloc_767_, 1, v___y_758_);
v___x_760_ = v_reuseFailAlloc_767_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_762_; 
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 1, v___x_760_);
lean_ctor_set(v___x_746_, 0, v___x_755_);
v___x_762_ = v___x_746_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_755_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v___x_760_);
v___x_762_ = v_reuseFailAlloc_766_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
size_t v___x_763_; size_t v___x_764_; 
v___x_763_ = ((size_t)1ULL);
v___x_764_ = lean_usize_add(v_i_741_, v___x_763_);
v_i_741_ = v___x_764_;
v_b_742_ = v___x_762_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_773_; 
lean_dec_ref(v_fileMap_734_);
v___x_769_ = lean_nat_dec_le(v___x_737_, v___x_738_);
v___x_770_ = lean_box(v___x_769_);
v___x_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
if (v_isShared_752_ == 0)
{
v___x_773_ = v___x_751_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_fst_748_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_snd_749_);
v___x_773_ = v_reuseFailAlloc_777_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
lean_object* v___x_775_; 
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 1, v___x_773_);
lean_ctor_set(v___x_746_, 0, v___x_771_);
v___x_775_ = v___x_746_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_771_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v___x_773_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0___boxed(lean_object* v_fileMap_781_, lean_object* v_hoverPos_782_, lean_object* v_hoverFilePos_783_, lean_object* v___x_784_, lean_object* v___x_785_, lean_object* v_as_786_, lean_object* v_sz_787_, lean_object* v_i_788_, lean_object* v_b_789_){
_start:
{
size_t v_sz_boxed_790_; size_t v_i_boxed_791_; lean_object* v_res_792_; 
v_sz_boxed_790_ = lean_unbox_usize(v_sz_787_);
lean_dec(v_sz_787_);
v_i_boxed_791_ = lean_unbox_usize(v_i_788_);
lean_dec(v_i_788_);
v_res_792_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0(v_fileMap_781_, v_hoverPos_782_, v_hoverFilePos_783_, v___x_784_, v___x_785_, v_as_786_, v_sz_boxed_790_, v_i_boxed_791_, v_b_789_);
lean_dec_ref(v_as_786_);
lean_dec(v___x_785_);
lean_dec(v___x_784_);
lean_dec_ref(v_hoverFilePos_783_);
lean_dec(v_hoverPos_782_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go___boxed(lean_object* v_fileMap_793_, lean_object* v_hoverPos_794_, lean_object* v_hoverFilePos_795_, lean_object* v_stx_796_, lean_object* v_leadingWs_797_, lean_object* v_leadingTokenTailPos_x3f_798_){
_start:
{
uint8_t v_res_799_; lean_object* v_r_800_; 
v_res_799_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go(v_fileMap_793_, v_hoverPos_794_, v_hoverFilePos_795_, v_stx_796_, v_leadingWs_797_, v_leadingTokenTailPos_x3f_798_);
lean_dec_ref(v_hoverFilePos_795_);
lean_dec(v_hoverPos_794_);
v_r_800_ = lean_box(v_res_799_);
return v_r_800_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion(lean_object* v_fileMap_801_, lean_object* v_hoverPos_802_, lean_object* v_cmdStx_803_){
_start:
{
lean_object* v_hoverFilePos_804_; lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; 
lean_inc_ref(v_fileMap_801_);
v_hoverFilePos_804_ = l_Lean_FileMap_toPosition(v_fileMap_801_, v_hoverPos_802_);
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = lean_box(0);
v___x_807_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go(v_fileMap_801_, v_hoverPos_802_, v_hoverFilePos_804_, v_cmdStx_803_, v___x_805_, v___x_806_);
lean_dec_ref(v_hoverFilePos_804_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion___boxed(lean_object* v_fileMap_808_, lean_object* v_hoverPos_809_, lean_object* v_cmdStx_810_){
_start:
{
uint8_t v_res_811_; lean_object* v_r_812_; 
v_res_811_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion(v_fileMap_808_, v_hoverPos_809_, v_cmdStx_810_);
lean_dec(v_hoverPos_809_);
v_r_812_ = lean_box(v_res_811_);
return v_r_812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1(lean_object* v_as_818_, size_t v_sz_819_, size_t v_i_820_, lean_object* v_b_821_){
_start:
{
uint8_t v___x_822_; 
v___x_822_ = lean_usize_dec_lt(v_i_820_, v_sz_819_);
if (v___x_822_ == 0)
{
lean_inc_ref(v_b_821_);
return v_b_821_;
}
else
{
lean_object* v___x_823_; lean_object* v_a_824_; lean_object* v___x_825_; 
v___x_823_ = lean_box(0);
v_a_824_ = lean_array_uget_borrowed(v_as_818_, v_i_820_);
v___x_825_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0(v_a_824_);
if (lean_obj_tag(v___x_825_) == 1)
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_826_, 0, v___x_825_);
v___x_827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
lean_ctor_set(v___x_827_, 1, v___x_823_);
return v___x_827_;
}
else
{
lean_object* v___x_828_; size_t v___x_829_; size_t v___x_830_; 
lean_dec(v___x_825_);
v___x_828_ = ((lean_object*)(l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0));
v___x_829_ = ((size_t)1ULL);
v___x_830_ = lean_usize_add(v_i_820_, v___x_829_);
v_i_820_ = v___x_830_;
v_b_821_ = v___x_828_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1(lean_object* v_as_832_, size_t v_sz_833_, size_t v_i_834_, lean_object* v_b_835_){
_start:
{
uint8_t v___x_836_; 
v___x_836_ = lean_usize_dec_lt(v_i_834_, v_sz_833_);
if (v___x_836_ == 0)
{
lean_inc_ref(v_b_835_);
return v_b_835_;
}
else
{
lean_object* v___x_837_; lean_object* v_a_838_; lean_object* v___x_839_; 
v___x_837_ = lean_box(0);
v_a_838_ = lean_array_uget_borrowed(v_as_832_, v_i_834_);
lean_inc(v_a_838_);
v___x_839_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go(v_a_838_);
if (lean_obj_tag(v___x_839_) == 1)
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
v___x_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
lean_ctor_set(v___x_841_, 1, v___x_837_);
return v___x_841_;
}
else
{
lean_object* v___x_842_; size_t v___x_843_; size_t v___x_844_; 
lean_dec(v___x_839_);
v___x_842_ = ((lean_object*)(l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0));
v___x_843_ = ((size_t)1ULL);
v___x_844_ = lean_usize_add(v_i_834_, v___x_843_);
v_i_834_ = v___x_844_;
v_b_835_ = v___x_842_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0(lean_object* v_x_846_){
_start:
{
if (lean_obj_tag(v_x_846_) == 0)
{
lean_object* v_cs_847_; lean_object* v___x_848_; lean_object* v___x_849_; size_t v_sz_850_; size_t v___x_851_; lean_object* v___x_852_; lean_object* v_fst_853_; 
v_cs_847_ = lean_ctor_get(v_x_846_, 0);
v___x_848_ = lean_box(0);
v___x_849_ = ((lean_object*)(l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0));
v_sz_850_ = lean_array_size(v_cs_847_);
v___x_851_ = ((size_t)0ULL);
v___x_852_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1(v_cs_847_, v_sz_850_, v___x_851_, v___x_849_);
v_fst_853_ = lean_ctor_get(v___x_852_, 0);
lean_inc(v_fst_853_);
lean_dec_ref(v___x_852_);
if (lean_obj_tag(v_fst_853_) == 0)
{
return v___x_848_;
}
else
{
lean_object* v_val_854_; 
v_val_854_ = lean_ctor_get(v_fst_853_, 0);
lean_inc(v_val_854_);
lean_dec_ref_known(v_fst_853_, 1);
return v_val_854_;
}
}
else
{
lean_object* v_vs_855_; lean_object* v___x_856_; lean_object* v___x_857_; size_t v_sz_858_; size_t v___x_859_; lean_object* v___x_860_; lean_object* v_fst_861_; 
v_vs_855_ = lean_ctor_get(v_x_846_, 0);
v___x_856_ = lean_box(0);
v___x_857_ = ((lean_object*)(l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0));
v_sz_858_ = lean_array_size(v_vs_855_);
v___x_859_ = ((size_t)0ULL);
v___x_860_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1(v_vs_855_, v_sz_858_, v___x_859_, v___x_857_);
v_fst_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_fst_861_);
lean_dec_ref(v___x_860_);
if (lean_obj_tag(v_fst_861_) == 0)
{
return v___x_856_;
}
else
{
lean_object* v_val_862_; 
v_val_862_ = lean_ctor_get(v_fst_861_, 0);
lean_inc(v_val_862_);
lean_dec_ref_known(v_fst_861_, 1);
return v_val_862_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0(lean_object* v_t_863_){
_start:
{
lean_object* v_root_864_; lean_object* v_tail_865_; lean_object* v___x_866_; 
v_root_864_ = lean_ctor_get(v_t_863_, 0);
v_tail_865_ = lean_ctor_get(v_t_863_, 1);
v___x_866_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0(v_root_864_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v___x_867_; size_t v_sz_868_; size_t v___x_869_; lean_object* v___x_870_; lean_object* v_fst_871_; 
v___x_867_ = ((lean_object*)(l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0));
v_sz_868_ = lean_array_size(v_tail_865_);
v___x_869_ = ((size_t)0ULL);
v___x_870_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1(v_tail_865_, v_sz_868_, v___x_869_, v___x_867_);
v_fst_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_fst_871_);
lean_dec_ref(v___x_870_);
if (lean_obj_tag(v_fst_871_) == 0)
{
return v___x_866_;
}
else
{
lean_object* v_val_872_; 
v_val_872_ = lean_ctor_get(v_fst_871_, 0);
lean_inc(v_val_872_);
lean_dec_ref_known(v_fst_871_, 1);
return v_val_872_;
}
}
else
{
return v___x_866_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go(lean_object* v_i_873_){
_start:
{
switch(lean_obj_tag(v_i_873_))
{
case 0:
{
lean_object* v_i_874_; 
v_i_874_ = lean_ctor_get(v_i_873_, 0);
lean_inc_ref(v_i_874_);
if (lean_obj_tag(v_i_874_) == 0)
{
lean_object* v_info_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_885_; 
lean_dec_ref_known(v_i_873_, 2);
v_info_875_ = lean_ctor_get(v_i_874_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v_i_874_);
if (v_isSharedCheck_885_ == 0)
{
v___x_877_ = v_i_874_;
v_isShared_878_ = v_isSharedCheck_885_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_info_875_);
lean_dec(v_i_874_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_885_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_883_; 
v___x_879_ = lean_box(0);
v___x_880_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go___closed__0));
v___x_881_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_881_, 0, v_info_875_);
lean_ctor_set(v___x_881_, 1, v___x_879_);
lean_ctor_set(v___x_881_, 2, v___x_880_);
if (v_isShared_878_ == 0)
{
lean_ctor_set_tag(v___x_877_, 1);
lean_ctor_set(v___x_877_, 0, v___x_881_);
v___x_883_ = v___x_877_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v___x_881_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
else
{
lean_object* v_t_886_; 
lean_dec_ref(v_i_874_);
v_t_886_ = lean_ctor_get(v_i_873_, 1);
lean_inc_ref(v_t_886_);
lean_dec_ref_known(v_i_873_, 2);
v_i_873_ = v_t_886_;
goto _start;
}
}
case 1:
{
lean_object* v_children_888_; lean_object* v___x_889_; 
v_children_888_ = lean_ctor_get(v_i_873_, 1);
lean_inc_ref(v_children_888_);
lean_dec_ref_known(v_i_873_, 2);
v___x_889_ = l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0(v_children_888_);
lean_dec_ref(v_children_888_);
return v___x_889_;
}
default: 
{
lean_object* v___x_890_; 
lean_dec_ref_known(v_i_873_, 1);
v___x_890_ = lean_box(0);
return v___x_890_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___boxed(lean_object* v_t_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0(v_t_891_);
lean_dec_ref(v_t_891_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1___boxed(lean_object* v_as_893_, lean_object* v_sz_894_, lean_object* v_i_895_, lean_object* v_b_896_){
_start:
{
size_t v_sz_boxed_897_; size_t v_i_boxed_898_; lean_object* v_res_899_; 
v_sz_boxed_897_ = lean_unbox_usize(v_sz_894_);
lean_dec(v_sz_894_);
v_i_boxed_898_ = lean_unbox_usize(v_i_895_);
lean_dec(v_i_895_);
v_res_899_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1(v_as_893_, v_sz_boxed_897_, v_i_boxed_898_, v_b_896_);
lean_dec_ref(v_b_896_);
lean_dec_ref(v_as_893_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1___boxed(lean_object* v_as_900_, lean_object* v_sz_901_, lean_object* v_i_902_, lean_object* v_b_903_){
_start:
{
size_t v_sz_boxed_904_; size_t v_i_boxed_905_; lean_object* v_res_906_; 
v_sz_boxed_904_ = lean_unbox_usize(v_sz_901_);
lean_dec(v_sz_901_);
v_i_boxed_905_ = lean_unbox_usize(v_i_902_);
lean_dec(v_i_902_);
v_res_906_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1(v_as_900_, v_sz_boxed_904_, v_i_boxed_905_, v_b_903_);
lean_dec_ref(v_b_903_);
lean_dec_ref(v_as_900_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0___boxed(lean_object* v_x_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0(v_x_907_);
lean_dec_ref(v_x_907_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f(lean_object* v_i_909_){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go(v_i_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f(lean_object* v_fileMap_913_, lean_object* v_hoverPos_914_, lean_object* v_cmdStx_915_, lean_object* v_infoTree_916_){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go(v_infoTree_916_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v___x_918_; 
lean_dec(v_cmdStx_915_);
lean_dec_ref(v_fileMap_913_);
v___x_918_ = lean_box(0);
return v___x_918_;
}
else
{
lean_object* v_val_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_931_; 
v_val_919_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_931_ == 0)
{
v___x_921_ = v___x_917_;
v_isShared_922_ = v_isSharedCheck_931_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_val_919_);
lean_dec(v___x_917_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_931_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
uint8_t v___x_923_; 
v___x_923_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion(v_fileMap_913_, v_hoverPos_914_, v_cmdStx_915_);
if (v___x_923_ == 0)
{
lean_object* v___x_924_; 
lean_del_object(v___x_921_);
lean_dec(v_val_919_);
v___x_924_ = lean_box(0);
return v___x_924_;
}
else
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_929_; 
v___x_925_ = lean_box(0);
v___x_926_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___closed__0));
v___x_927_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_927_, 0, v___x_925_);
lean_ctor_set(v___x_927_, 1, v_val_919_);
lean_ctor_set(v___x_927_, 2, v___x_926_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 0, v___x_927_);
v___x_929_ = v___x_921_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v___x_927_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___boxed(lean_object* v_fileMap_932_, lean_object* v_hoverPos_933_, lean_object* v_cmdStx_934_, lean_object* v_infoTree_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f(v_fileMap_932_, v_hoverPos_933_, v_cmdStx_934_, v_infoTree_935_);
lean_dec(v_hoverPos_933_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt_spec__0(lean_object* v_msg_937_){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_938_ = l_Lean_instInhabitedExpr;
v___x_939_ = lean_panic_fn_borrowed(v___x_938_, v_msg_937_);
return v___x_939_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0(lean_object* v_hoverPos_940_, lean_object* v_i_941_){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = l_Lean_Elab_Info_pos_x3f(v_i_941_);
if (lean_obj_tag(v___x_942_) == 1)
{
lean_object* v_val_943_; lean_object* v___x_944_; 
v_val_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc(v_val_943_);
lean_dec_ref_known(v___x_942_, 1);
v___x_944_ = l_Lean_Elab_Info_tailPos_x3f(v_i_941_);
if (lean_obj_tag(v___x_944_) == 1)
{
if (lean_obj_tag(v_i_941_) == 1)
{
lean_object* v_i_945_; lean_object* v_expectedType_x3f_946_; 
v_i_945_ = lean_ctor_get(v_i_941_, 0);
v_expectedType_x3f_946_ = lean_ctor_get(v_i_945_, 2);
if (lean_obj_tag(v_expectedType_x3f_946_) == 0)
{
uint8_t v___x_947_; 
lean_dec_ref_known(v___x_944_, 1);
lean_dec(v_val_943_);
v___x_947_ = 0;
return v___x_947_;
}
else
{
lean_object* v_val_948_; uint8_t v___x_949_; 
v_val_948_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_val_948_);
lean_dec_ref_known(v___x_944_, 1);
v___x_949_ = lean_nat_dec_le(v_val_943_, v_hoverPos_940_);
lean_dec(v_val_943_);
if (v___x_949_ == 0)
{
lean_dec(v_val_948_);
return v___x_949_;
}
else
{
uint8_t v___x_950_; 
v___x_950_ = lean_nat_dec_le(v_hoverPos_940_, v_val_948_);
lean_dec(v_val_948_);
return v___x_950_;
}
}
}
else
{
uint8_t v___x_951_; 
lean_dec_ref_known(v___x_944_, 1);
lean_dec(v_val_943_);
v___x_951_ = 0;
return v___x_951_;
}
}
else
{
uint8_t v___x_952_; 
lean_dec(v___x_944_);
lean_dec(v_val_943_);
v___x_952_ = 0;
return v___x_952_;
}
}
else
{
uint8_t v___x_953_; 
lean_dec(v___x_942_);
v___x_953_ = 0;
return v___x_953_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0___boxed(lean_object* v_hoverPos_954_, lean_object* v_i_955_){
_start:
{
uint8_t v_res_956_; lean_object* v_r_957_; 
v_res_956_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0(v_hoverPos_954_, v_i_955_);
lean_dec_ref(v_i_955_);
lean_dec(v_hoverPos_954_);
v_r_957_ = lean_box(v_res_956_);
return v_r_957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt(lean_object* v_infoTree_958_, lean_object* v_hoverPos_959_){
_start:
{
lean_object* v___f_960_; lean_object* v___x_961_; 
v___f_960_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0___boxed), 2, 1);
lean_closure_set(v___f_960_, 0, v_hoverPos_959_);
v___x_961_ = l_Lean_Elab_InfoTree_smallestInfo_x3f(v___f_960_, v_infoTree_958_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v___x_962_; 
v___x_962_ = lean_box(0);
return v___x_962_;
}
else
{
lean_object* v_val_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_987_; 
v_val_963_ = lean_ctor_get(v___x_961_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_961_);
if (v_isSharedCheck_987_ == 0)
{
v___x_965_ = v___x_961_;
v_isShared_966_ = v_isSharedCheck_987_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_val_963_);
lean_dec(v___x_961_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_987_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v_fst_967_; lean_object* v_snd_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_986_; 
v_fst_967_ = lean_ctor_get(v_val_963_, 0);
v_snd_968_ = lean_ctor_get(v_val_963_, 1);
v_isSharedCheck_986_ = !lean_is_exclusive(v_val_963_);
if (v_isSharedCheck_986_ == 0)
{
v___x_970_ = v_val_963_;
v_isShared_971_ = v_isSharedCheck_986_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_snd_968_);
lean_inc(v_fst_967_);
lean_dec(v_val_963_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_986_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___y_973_; 
if (lean_obj_tag(v_snd_968_) == 1)
{
lean_object* v_i_980_; lean_object* v_expectedType_x3f_981_; 
v_i_980_ = lean_ctor_get(v_snd_968_, 0);
lean_inc_ref(v_i_980_);
lean_dec_ref_known(v_snd_968_, 1);
v_expectedType_x3f_981_ = lean_ctor_get(v_i_980_, 2);
lean_inc(v_expectedType_x3f_981_);
lean_dec_ref(v_i_980_);
if (lean_obj_tag(v_expectedType_x3f_981_) == 0)
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = lean_obj_once(&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4, &l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4_once, _init_l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4);
v___x_983_ = l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt_spec__0(v___x_982_);
v___y_973_ = v___x_983_;
goto v___jp_972_;
}
else
{
lean_object* v_val_984_; 
v_val_984_ = lean_ctor_get(v_expectedType_x3f_981_, 0);
lean_inc(v_val_984_);
lean_dec_ref_known(v_expectedType_x3f_981_, 1);
v___y_973_ = v_val_984_;
goto v___jp_972_;
}
}
else
{
lean_object* v___x_985_; 
lean_del_object(v___x_970_);
lean_dec(v_snd_968_);
lean_dec(v_fst_967_);
lean_del_object(v___x_965_);
v___x_985_ = lean_box(0);
return v___x_985_;
}
v___jp_972_:
{
lean_object* v___x_975_; 
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 1, v___y_973_);
v___x_975_ = v___x_970_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_fst_967_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v___y_973_);
v___x_975_ = v_reuseFailAlloc_979_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
lean_object* v___x_977_; 
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 0, v___x_975_);
v___x_977_ = v___x_965_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v___x_975_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg(lean_object* v_f_988_, lean_object* v_leadingToken_x3f_989_, lean_object* v_acc_990_, lean_object* v_stx_991_){
_start:
{
lean_object* v___f_992_; lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___f_995_; lean_object* v___f_996_; lean_object* v___f_997_; lean_object* v___f_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v_acc_1002_; 
v___f_992_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__0));
v___f_993_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__1));
v___f_994_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__2));
v___f_995_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__3));
v___f_996_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__4));
v___f_997_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__5));
v___f_998_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__6));
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v___f_992_);
lean_ctor_set(v___x_999_, 1, v___f_993_);
v___x_1000_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
lean_ctor_set(v___x_1000_, 1, v___f_994_);
lean_ctor_set(v___x_1000_, 2, v___f_995_);
lean_ctor_set(v___x_1000_, 3, v___f_996_);
lean_ctor_set(v___x_1000_, 4, v___f_997_);
v___x_1001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___x_1000_);
lean_ctor_set(v___x_1001_, 1, v___f_998_);
lean_inc(v_f_988_);
lean_inc(v_stx_991_);
lean_inc(v_leadingToken_x3f_989_);
v_acc_1002_ = lean_apply_3(v_f_988_, v_acc_990_, v_leadingToken_x3f_989_, v_stx_991_);
switch(lean_obj_tag(v_stx_991_))
{
case 0:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
lean_dec_ref_known(v___x_1001_, 2);
lean_dec(v_leadingToken_x3f_989_);
lean_dec(v_f_988_);
v___x_1003_ = lean_box(0);
v___x_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set(v___x_1004_, 1, v_acc_1002_);
return v___x_1004_;
}
case 1:
{
lean_object* v_args_1005_; lean_object* v___f_1006_; lean_object* v_lastToken_x3f_1007_; lean_object* v___x_1008_; size_t v_sz_1009_; size_t v___x_1010_; lean_object* v___x_1011_; lean_object* v_fst_1012_; lean_object* v_snd_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
v_args_1005_ = lean_ctor_get(v_stx_991_, 2);
lean_inc_ref(v_args_1005_);
lean_dec_ref_known(v_stx_991_, 3);
v___f_1006_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg___lam__0), 5, 2);
lean_closure_set(v___f_1006_, 0, v_f_988_);
lean_closure_set(v___f_1006_, 1, v_leadingToken_x3f_989_);
v_lastToken_x3f_1007_ = lean_box(0);
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v_acc_1002_);
lean_ctor_set(v___x_1008_, 1, v_lastToken_x3f_1007_);
v_sz_1009_ = lean_array_size(v_args_1005_);
v___x_1010_ = ((size_t)0ULL);
v___x_1011_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1001_, v_args_1005_, v___f_1006_, v_sz_1009_, v___x_1010_, v___x_1008_);
v_fst_1012_ = lean_ctor_get(v___x_1011_, 0);
v_snd_1013_ = lean_ctor_get(v___x_1011_, 1);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_1011_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_snd_1013_);
lean_inc(v_fst_1012_);
lean_dec(v___x_1011_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 1, v_fst_1012_);
lean_ctor_set(v___x_1015_, 0, v_snd_1013_);
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_snd_1013_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v_fst_1012_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
default: 
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
lean_dec_ref_known(v___x_1001_, 2);
lean_dec(v_leadingToken_x3f_989_);
lean_dec(v_f_988_);
v___x_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1021_, 0, v_stx_991_);
v___x_1022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
lean_ctor_set(v___x_1022_, 1, v_acc_1002_);
return v___x_1022_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg___lam__0(lean_object* v_f_1023_, lean_object* v_leadingToken_x3f_1024_, lean_object* v_a_1025_, lean_object* v_x_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v_fst_1033_; lean_object* v_snd_1034_; lean_object* v___y_1036_; 
v_fst_1033_ = lean_ctor_get(v___y_1027_, 0);
lean_inc(v_fst_1033_);
v_snd_1034_ = lean_ctor_get(v___y_1027_, 1);
lean_inc(v_snd_1034_);
lean_dec_ref(v___y_1027_);
if (lean_obj_tag(v_snd_1034_) == 0)
{
v___y_1036_ = v_leadingToken_x3f_1024_;
goto v___jp_1035_;
}
else
{
lean_dec(v_leadingToken_x3f_1024_);
lean_inc_ref(v_snd_1034_);
v___y_1036_ = v_snd_1034_;
goto v___jp_1035_;
}
v___jp_1028_:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___y_1029_);
lean_ctor_set(v___x_1031_, 1, v___y_1030_);
v___x_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
v___jp_1035_:
{
lean_object* v___x_1037_; lean_object* v_fst_1038_; 
v___x_1037_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg(v_f_1023_, v___y_1036_, v_fst_1033_, v_a_1025_);
v_fst_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_fst_1038_);
if (lean_obj_tag(v_fst_1038_) == 0)
{
lean_object* v_snd_1039_; 
v_snd_1039_ = lean_ctor_get(v___x_1037_, 1);
lean_inc(v_snd_1039_);
lean_dec_ref(v___x_1037_);
v___y_1029_ = v_snd_1039_;
v___y_1030_ = v_snd_1034_;
goto v___jp_1028_;
}
else
{
lean_object* v_snd_1040_; 
lean_dec(v_snd_1034_);
v_snd_1040_ = lean_ctor_get(v___x_1037_, 1);
lean_inc(v_snd_1040_);
lean_dec_ref(v___x_1037_);
v___y_1029_ = v_snd_1040_;
v___y_1030_ = v_fst_1038_;
goto v___jp_1028_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go(lean_object* v_00_u03b1_1041_, lean_object* v_f_1042_, lean_object* v_inst_1043_, lean_object* v_leadingToken_x3f_1044_, lean_object* v_acc_1045_, lean_object* v_stx_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg(v_f_1042_, v_leadingToken_x3f_1044_, v_acc_1045_, v_stx_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___boxed(lean_object* v_00_u03b1_1048_, lean_object* v_f_1049_, lean_object* v_inst_1050_, lean_object* v_leadingToken_x3f_1051_, lean_object* v_acc_1052_, lean_object* v_stx_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go(v_00_u03b1_1048_, v_f_1049_, v_inst_1050_, v_leadingToken_x3f_1051_, v_acc_1052_, v_stx_1053_);
lean_dec(v_inst_1050_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___redArg(lean_object* v_f_1055_, lean_object* v_init_1056_, lean_object* v_stx_1057_){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v_snd_1060_; 
v___x_1058_ = lean_box(0);
v___x_1059_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg(v_f_1055_, v___x_1058_, v_init_1056_, v_stx_1057_);
v_snd_1060_ = lean_ctor_get(v___x_1059_, 1);
lean_inc(v_snd_1060_);
lean_dec_ref(v___x_1059_);
return v_snd_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken(lean_object* v_00_u03b1_1061_, lean_object* v_inst_1062_, lean_object* v_f_1063_, lean_object* v_init_1064_, lean_object* v_stx_1065_){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___redArg(v_f_1063_, v_init_1064_, v_stx_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___boxed(lean_object* v_00_u03b1_1067_, lean_object* v_inst_1068_, lean_object* v_f_1069_, lean_object* v_init_1070_, lean_object* v_stx_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken(v_00_u03b1_1067_, v_inst_1068_, v_f_1069_, v_init_1070_, v_stx_1071_);
lean_dec(v_inst_1068_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0(lean_object* v_p_1073_, lean_object* v_foundStx_x3f_1074_, lean_object* v_leadingToken_x3f_1075_, lean_object* v_stx_1076_){
_start:
{
if (lean_obj_tag(v_foundStx_x3f_1074_) == 0)
{
lean_object* v___x_1077_; uint8_t v___x_1078_; 
lean_inc(v_stx_1076_);
v___x_1077_ = lean_apply_2(v_p_1073_, v_leadingToken_x3f_1075_, v_stx_1076_);
v___x_1078_ = lean_unbox(v___x_1077_);
if (v___x_1078_ == 0)
{
lean_dec(v_stx_1076_);
return v_foundStx_x3f_1074_;
}
else
{
lean_object* v___x_1079_; 
v___x_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1079_, 0, v_stx_1076_);
return v___x_1079_;
}
}
else
{
lean_dec(v_stx_1076_);
lean_dec(v_leadingToken_x3f_1075_);
lean_dec_ref(v_p_1073_);
lean_inc_ref(v_foundStx_x3f_1074_);
return v_foundStx_x3f_1074_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0___boxed(lean_object* v_p_1080_, lean_object* v_foundStx_x3f_1081_, lean_object* v_leadingToken_x3f_1082_, lean_object* v_stx_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0(v_p_1080_, v_foundStx_x3f_1081_, v_leadingToken_x3f_1082_, v_stx_1083_);
lean_dec(v_foundStx_x3f_1081_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f(lean_object* v_p_1085_, lean_object* v_stx_1086_){
_start:
{
lean_object* v___f_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___f_1087_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1087_, 0, v_p_1085_);
v___x_1088_ = lean_box(0);
v___x_1089_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___redArg(v___f_1087_, v___x_1088_, v_stx_1086_);
return v___x_1089_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0(uint8_t v___y_1090_, lean_object* v_hoverPos_1091_, lean_object* v_as_1092_, size_t v_i_1093_, size_t v_stop_1094_){
_start:
{
uint8_t v___x_1099_; 
v___x_1099_ = lean_usize_dec_eq(v_i_1093_, v_stop_1094_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; lean_object* v_fst_1101_; lean_object* v_snd_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; uint8_t v___y_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; 
v___x_1100_ = lean_array_uget_borrowed(v_as_1092_, v_i_1093_);
v_fst_1101_ = lean_ctor_get(v___x_1100_, 0);
v_snd_1102_ = lean_ctor_get(v___x_1100_, 1);
v___x_1103_ = lean_unsigned_to_nat(0u);
v___x_1104_ = 1;
v___x_1107_ = lean_unsigned_to_nat(2u);
v___x_1108_ = lean_nat_mod(v_snd_1102_, v___x_1107_);
v___x_1109_ = lean_nat_dec_eq(v___x_1108_, v___x_1103_);
lean_dec(v___x_1108_);
if (v___x_1109_ == 0)
{
uint8_t v___x_1110_; 
v___x_1110_ = l_Lean_Syntax_isAtom(v_fst_1101_);
if (v___x_1110_ == 0)
{
v___y_1106_ = v___y_1090_;
goto v___jp_1105_;
}
else
{
if (v___y_1090_ == 0)
{
lean_object* v___x_1111_; 
v___x_1111_ = l_Lean_Syntax_getTailPos_x3f(v_fst_1101_, v___y_1090_);
if (lean_obj_tag(v___x_1111_) == 1)
{
lean_object* v_val_1112_; uint8_t v___x_1113_; 
v_val_1112_ = lean_ctor_get(v___x_1111_, 0);
lean_inc(v_val_1112_);
lean_dec_ref_known(v___x_1111_, 1);
v___x_1113_ = lean_nat_dec_le(v_val_1112_, v_hoverPos_1091_);
if (v___x_1113_ == 0)
{
lean_dec(v_val_1112_);
goto v___jp_1095_;
}
else
{
lean_object* v___x_1114_; lean_object* v___x_1115_; uint8_t v___x_1116_; 
v___x_1114_ = l_Lean_Syntax_getTrailingSize(v_fst_1101_);
v___x_1115_ = lean_nat_add(v_val_1112_, v___x_1114_);
lean_dec(v___x_1114_);
lean_dec(v_val_1112_);
v___x_1116_ = lean_nat_dec_le(v_hoverPos_1091_, v___x_1115_);
lean_dec(v___x_1115_);
v___y_1106_ = v___x_1116_;
goto v___jp_1105_;
}
}
else
{
lean_dec(v___x_1111_);
goto v___jp_1095_;
}
}
else
{
return v___x_1104_;
}
}
}
else
{
v___y_1106_ = v___y_1090_;
goto v___jp_1105_;
}
v___jp_1105_:
{
if (v___y_1106_ == 0)
{
goto v___jp_1095_;
}
else
{
return v___x_1104_;
}
}
}
else
{
uint8_t v___x_1117_; 
v___x_1117_ = 0;
return v___x_1117_;
}
v___jp_1095_:
{
size_t v___x_1096_; size_t v___x_1097_; 
v___x_1096_ = ((size_t)1ULL);
v___x_1097_ = lean_usize_add(v_i_1093_, v___x_1096_);
v_i_1093_ = v___x_1097_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0___boxed(lean_object* v___y_1118_, lean_object* v_hoverPos_1119_, lean_object* v_as_1120_, lean_object* v_i_1121_, lean_object* v_stop_1122_){
_start:
{
uint8_t v___y_1670__boxed_1123_; size_t v_i_boxed_1124_; size_t v_stop_boxed_1125_; uint8_t v_res_1126_; lean_object* v_r_1127_; 
v___y_1670__boxed_1123_ = lean_unbox(v___y_1118_);
v_i_boxed_1124_ = lean_unbox_usize(v_i_1121_);
lean_dec(v_i_1121_);
v_stop_boxed_1125_ = lean_unbox_usize(v_stop_1122_);
lean_dec(v_stop_1122_);
v_res_1126_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0(v___y_1670__boxed_1123_, v_hoverPos_1119_, v_as_1120_, v_i_boxed_1124_, v_stop_boxed_1125_);
lean_dec_ref(v_as_1120_);
lean_dec(v_hoverPos_1119_);
v_r_1127_ = lean_box(v_res_1126_);
return v_r_1127_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0(uint8_t v___x_1134_, uint8_t v_isCursorOnWhitespace_1135_, uint8_t v_isCursorInProperWhitespace_1136_, lean_object* v_fileMap_1137_, lean_object* v_hoverFilePos_1138_, lean_object* v_hoverPos_1139_, lean_object* v_leadingToken_x3f_1140_, lean_object* v_stx_1141_){
_start:
{
uint8_t v___y_1143_; 
if (lean_obj_tag(v_leadingToken_x3f_1140_) == 1)
{
lean_object* v_val_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; uint8_t v___x_1153_; 
v_val_1150_ = lean_ctor_get(v_leadingToken_x3f_1140_, 0);
lean_inc(v_stx_1141_);
v___x_1151_ = l_Lean_Syntax_getKind(v_stx_1141_);
v___x_1152_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1));
v___x_1153_ = lean_name_eq(v___x_1151_, v___x_1152_);
lean_dec(v___x_1151_);
if (v___x_1153_ == 0)
{
lean_dec(v_stx_1141_);
lean_dec_ref(v_fileMap_1137_);
return v___x_1134_;
}
else
{
lean_object* v___x_1154_; 
v___x_1154_ = l_Lean_Syntax_getTailPos_x3f(v_val_1150_, v_isCursorOnWhitespace_1135_);
if (lean_obj_tag(v___x_1154_) == 1)
{
lean_object* v_val_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v_fieldsAndSeps_1158_; uint8_t v___y_1160_; lean_object* v___y_1168_; lean_object* v___x_1174_; 
v_val_1155_ = lean_ctor_get(v___x_1154_, 0);
lean_inc(v_val_1155_);
lean_dec_ref_known(v___x_1154_, 1);
v___x_1156_ = lean_unsigned_to_nat(0u);
v___x_1157_ = l_Lean_Syntax_getArg(v_stx_1141_, v___x_1156_);
v_fieldsAndSeps_1158_ = l_Lean_Syntax_getArgs(v___x_1157_);
lean_dec(v___x_1157_);
v___x_1174_ = l_Lean_Syntax_getTrailingTailPos_x3f(v_stx_1141_, v_isCursorOnWhitespace_1135_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lean_Syntax_getTrailingTailPos_x3f(v_val_1150_, v_isCursorOnWhitespace_1135_);
v___y_1168_ = v___x_1175_;
goto v___jp_1167_;
}
else
{
v___y_1168_ = v___x_1174_;
goto v___jp_1167_;
}
v___jp_1159_:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; uint8_t v___x_1163_; 
v___x_1161_ = l_Array_zipIdx___redArg(v_fieldsAndSeps_1158_, v___x_1156_);
v___x_1162_ = lean_array_get_size(v___x_1161_);
v___x_1163_ = lean_nat_dec_lt(v___x_1156_, v___x_1162_);
if (v___x_1163_ == 0)
{
lean_dec_ref(v___x_1161_);
v___y_1143_ = v___x_1163_;
goto v___jp_1142_;
}
else
{
if (v___x_1163_ == 0)
{
lean_dec_ref(v___x_1161_);
v___y_1143_ = v___x_1163_;
goto v___jp_1142_;
}
else
{
size_t v___x_1164_; size_t v___x_1165_; uint8_t v___x_1166_; 
v___x_1164_ = ((size_t)0ULL);
v___x_1165_ = lean_usize_of_nat(v___x_1162_);
v___x_1166_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0(v___y_1160_, v_hoverPos_1139_, v___x_1161_, v___x_1164_, v___x_1165_);
lean_dec_ref(v___x_1161_);
if (v___x_1166_ == 0)
{
v___y_1143_ = v___x_1166_;
goto v___jp_1142_;
}
else
{
lean_dec(v_stx_1141_);
lean_dec_ref(v_fileMap_1137_);
return v_isCursorOnWhitespace_1135_;
}
}
}
}
v___jp_1167_:
{
if (lean_obj_tag(v___y_1168_) == 1)
{
lean_object* v_val_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; 
v_val_1169_ = lean_ctor_get(v___y_1168_, 0);
lean_inc(v_val_1169_);
lean_dec_ref_known(v___y_1168_, 1);
v___x_1170_ = lean_array_get_size(v_fieldsAndSeps_1158_);
v___x_1171_ = lean_nat_dec_eq(v___x_1170_, v___x_1156_);
if (v___x_1171_ == 0)
{
lean_dec(v_val_1169_);
lean_dec(v_val_1155_);
v___y_1160_ = v___x_1134_;
goto v___jp_1159_;
}
else
{
lean_object* v_outerBounds_1172_; uint8_t v___x_1173_; 
v_outerBounds_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_outerBounds_1172_, 0, v_val_1155_);
lean_ctor_set(v_outerBounds_1172_, 1, v_val_1169_);
v___x_1173_ = l_Lean_Syntax_Range_contains(v_outerBounds_1172_, v_hoverPos_1139_, v_isCursorOnWhitespace_1135_);
lean_dec_ref_known(v_outerBounds_1172_, 2);
if (v___x_1173_ == 0)
{
v___y_1160_ = v___x_1173_;
goto v___jp_1159_;
}
else
{
lean_dec_ref(v_fieldsAndSeps_1158_);
lean_dec(v_stx_1141_);
lean_dec_ref(v_fileMap_1137_);
return v_isCursorOnWhitespace_1135_;
}
}
}
else
{
lean_dec(v___y_1168_);
lean_dec_ref(v_fieldsAndSeps_1158_);
lean_dec(v_val_1155_);
lean_dec(v_stx_1141_);
lean_dec_ref(v_fileMap_1137_);
return v___x_1134_;
}
}
}
else
{
lean_dec(v___x_1154_);
lean_dec(v_stx_1141_);
lean_dec_ref(v_fileMap_1137_);
return v___x_1134_;
}
}
}
else
{
lean_dec(v_stx_1141_);
lean_dec_ref(v_fileMap_1137_);
return v___x_1134_;
}
v___jp_1142_:
{
if (v_isCursorInProperWhitespace_1136_ == 0)
{
lean_dec(v_stx_1141_);
lean_dec_ref(v_fileMap_1137_);
return v___y_1143_;
}
else
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Lean_Syntax_getPos_x3f(v_stx_1141_, v___y_1143_);
lean_dec(v_stx_1141_);
if (lean_obj_tag(v___x_1144_) == 1)
{
lean_object* v_val_1145_; lean_object* v___x_1146_; lean_object* v_column_1147_; lean_object* v_column_1148_; uint8_t v_isCursorInBlock_1149_; 
v_val_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_val_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v___x_1146_ = l_Lean_FileMap_toPosition(v_fileMap_1137_, v_val_1145_);
lean_dec(v_val_1145_);
v_column_1147_ = lean_ctor_get(v___x_1146_, 1);
lean_inc(v_column_1147_);
lean_dec_ref(v___x_1146_);
v_column_1148_ = lean_ctor_get(v_hoverFilePos_1138_, 1);
v_isCursorInBlock_1149_ = lean_nat_dec_eq(v_column_1148_, v_column_1147_);
lean_dec(v_column_1147_);
return v_isCursorInBlock_1149_;
}
else
{
lean_dec(v___x_1144_);
lean_dec_ref(v_fileMap_1137_);
return v___y_1143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___boxed(lean_object* v___x_1176_, lean_object* v_isCursorOnWhitespace_1177_, lean_object* v_isCursorInProperWhitespace_1178_, lean_object* v_fileMap_1179_, lean_object* v_hoverFilePos_1180_, lean_object* v_hoverPos_1181_, lean_object* v_leadingToken_x3f_1182_, lean_object* v_stx_1183_){
_start:
{
uint8_t v___x_1734__boxed_1184_; uint8_t v_isCursorOnWhitespace_boxed_1185_; uint8_t v_isCursorInProperWhitespace_boxed_1186_; uint8_t v_res_1187_; lean_object* v_r_1188_; 
v___x_1734__boxed_1184_ = lean_unbox(v___x_1176_);
v_isCursorOnWhitespace_boxed_1185_ = lean_unbox(v_isCursorOnWhitespace_1177_);
v_isCursorInProperWhitespace_boxed_1186_ = lean_unbox(v_isCursorInProperWhitespace_1178_);
v_res_1187_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0(v___x_1734__boxed_1184_, v_isCursorOnWhitespace_boxed_1185_, v_isCursorInProperWhitespace_boxed_1186_, v_fileMap_1179_, v_hoverFilePos_1180_, v_hoverPos_1181_, v_leadingToken_x3f_1182_, v_stx_1183_);
lean_dec(v_leadingToken_x3f_1182_);
lean_dec(v_hoverPos_1181_);
lean_dec_ref(v_hoverFilePos_1180_);
v_r_1188_ = lean_box(v_res_1187_);
return v_r_1188_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion(lean_object* v_fileMap_1189_, lean_object* v_hoverPos_1190_, lean_object* v_cmdStx_1191_){
_start:
{
uint8_t v_isCursorOnWhitespace_1192_; 
v_isCursorOnWhitespace_1192_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace(v_fileMap_1189_, v_hoverPos_1190_);
if (v_isCursorOnWhitespace_1192_ == 0)
{
lean_dec(v_cmdStx_1191_);
lean_dec(v_hoverPos_1190_);
lean_dec_ref(v_fileMap_1189_);
return v_isCursorOnWhitespace_1192_;
}
else
{
uint8_t v_isCursorInProperWhitespace_1193_; uint8_t v___x_1194_; lean_object* v_hoverFilePos_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___f_1199_; lean_object* v___x_1200_; 
v_isCursorInProperWhitespace_1193_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(v_fileMap_1189_, v_hoverPos_1190_);
v___x_1194_ = 0;
lean_inc_ref(v_fileMap_1189_);
v_hoverFilePos_1195_ = l_Lean_FileMap_toPosition(v_fileMap_1189_, v_hoverPos_1190_);
v___x_1196_ = lean_box(v___x_1194_);
v___x_1197_ = lean_box(v_isCursorOnWhitespace_1192_);
v___x_1198_ = lean_box(v_isCursorInProperWhitespace_1193_);
v___f_1199_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___boxed), 8, 6);
lean_closure_set(v___f_1199_, 0, v___x_1196_);
lean_closure_set(v___f_1199_, 1, v___x_1197_);
lean_closure_set(v___f_1199_, 2, v___x_1198_);
lean_closure_set(v___f_1199_, 3, v_fileMap_1189_);
lean_closure_set(v___f_1199_, 4, v_hoverFilePos_1195_);
lean_closure_set(v___f_1199_, 5, v_hoverPos_1190_);
v___x_1200_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f(v___f_1199_, v_cmdStx_1191_);
if (lean_obj_tag(v___x_1200_) == 0)
{
return v___x_1194_;
}
else
{
lean_dec_ref_known(v___x_1200_, 1);
return v_isCursorOnWhitespace_1192_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___boxed(lean_object* v_fileMap_1201_, lean_object* v_hoverPos_1202_, lean_object* v_cmdStx_1203_){
_start:
{
uint8_t v_res_1204_; lean_object* v_r_1205_; 
v_res_1204_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion(v_fileMap_1201_, v_hoverPos_1202_, v_cmdStx_1203_);
v_r_1205_ = lean_box(v_res_1204_);
return v_r_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticFieldCompletion_x3f(lean_object* v_fileMap_1206_, lean_object* v_hoverPos_1207_, lean_object* v_cmdStx_1208_, lean_object* v_infoTree_1209_){
_start:
{
uint8_t v___x_1210_; 
lean_inc(v_hoverPos_1207_);
v___x_1210_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion(v_fileMap_1206_, v_hoverPos_1207_, v_cmdStx_1208_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; 
lean_dec_ref(v_infoTree_1209_);
lean_dec(v_hoverPos_1207_);
v___x_1211_ = lean_box(0);
return v___x_1211_;
}
else
{
lean_object* v___x_1212_; 
v___x_1212_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt(v_infoTree_1209_, v_hoverPos_1207_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_box(0);
return v___x_1213_;
}
else
{
lean_object* v_val_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1236_; 
v_val_1214_ = lean_ctor_get(v___x_1212_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1212_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1216_ = v___x_1212_;
v_isShared_1217_ = v_isSharedCheck_1236_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_val_1214_);
lean_dec(v___x_1212_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1236_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v_fst_1218_; lean_object* v_snd_1219_; lean_object* v___x_1220_; 
v_fst_1218_ = lean_ctor_get(v_val_1214_, 0);
lean_inc(v_fst_1218_);
v_snd_1219_ = lean_ctor_get(v_val_1214_, 1);
lean_inc(v_snd_1219_);
lean_dec(v_val_1214_);
v___x_1220_ = l_Lean_Expr_getAppFn(v_snd_1219_);
lean_dec(v_snd_1219_);
if (lean_obj_tag(v___x_1220_) == 4)
{
lean_object* v_toCommandContextInfo_1221_; lean_object* v_declName_1222_; lean_object* v_env_1223_; uint8_t v___x_1224_; 
v_toCommandContextInfo_1221_ = lean_ctor_get(v_fst_1218_, 0);
v_declName_1222_ = lean_ctor_get(v___x_1220_, 0);
lean_inc_n(v_declName_1222_, 2);
lean_dec_ref_known(v___x_1220_, 2);
v_env_1223_ = lean_ctor_get(v_toCommandContextInfo_1221_, 0);
lean_inc_ref(v_env_1223_);
v___x_1224_ = l_Lean_isStructure(v_env_1223_, v_declName_1222_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; 
lean_dec(v_declName_1222_);
lean_dec(v_fst_1218_);
lean_del_object(v___x_1216_);
v___x_1225_ = lean_box(0);
return v___x_1225_;
}
else
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1226_ = lean_box(0);
v___x_1227_ = lean_box(0);
v___x_1228_ = lean_box(0);
v___x_1229_ = l_Lean_LocalContext_empty;
v___x_1230_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1227_);
lean_ctor_set(v___x_1230_, 1, v___x_1228_);
lean_ctor_set(v___x_1230_, 2, v___x_1229_);
lean_ctor_set(v___x_1230_, 3, v_declName_1222_);
v___x_1231_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1226_);
lean_ctor_set(v___x_1231_, 1, v_fst_1218_);
lean_ctor_set(v___x_1231_, 2, v___x_1230_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v___x_1231_);
v___x_1233_ = v___x_1216_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1231_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
else
{
lean_object* v___x_1235_; 
lean_dec_ref(v___x_1220_);
lean_dec(v_fst_1218_);
lean_del_object(v___x_1216_);
v___x_1235_ = lean_box(0);
return v___x_1235_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findSyntheticCompletions(lean_object* v_fileMap_1239_, lean_object* v_hoverPos_1240_, lean_object* v_cmdStx_1241_, lean_object* v_infoTree_1242_){
_start:
{
lean_object* v___y_1244_; lean_object* v___x_1250_; 
lean_inc_ref(v_infoTree_1242_);
lean_inc(v_cmdStx_1241_);
lean_inc_ref(v_fileMap_1239_);
v___x_1250_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f(v_fileMap_1239_, v_hoverPos_1240_, v_cmdStx_1241_, v_infoTree_1242_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v___x_1251_; 
lean_inc_ref(v_infoTree_1242_);
lean_inc(v_hoverPos_1240_);
v___x_1251_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticFieldCompletion_x3f(v_fileMap_1239_, v_hoverPos_1240_, v_cmdStx_1241_, v_infoTree_1242_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v___x_1252_; 
v___x_1252_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f(v_hoverPos_1240_, v_infoTree_1242_);
v___y_1244_ = v___x_1252_;
goto v___jp_1243_;
}
else
{
lean_dec_ref(v_infoTree_1242_);
lean_dec(v_hoverPos_1240_);
v___y_1244_ = v___x_1251_;
goto v___jp_1243_;
}
}
else
{
lean_dec_ref(v_infoTree_1242_);
lean_dec(v_cmdStx_1241_);
lean_dec(v_hoverPos_1240_);
lean_dec_ref(v_fileMap_1239_);
v___y_1244_ = v___x_1250_;
goto v___jp_1243_;
}
v___jp_1243_:
{
if (lean_obj_tag(v___y_1244_) == 0)
{
lean_object* v___x_1245_; 
v___x_1245_ = ((lean_object*)(l_Lean_Server_Completion_findSyntheticCompletions___closed__0));
return v___x_1245_;
}
else
{
lean_object* v_val_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v_val_1246_ = lean_ctor_get(v___y_1244_, 0);
lean_inc(v_val_1246_);
lean_dec_ref_known(v___y_1244_, 1);
v___x_1247_ = lean_unsigned_to_nat(1u);
v___x_1248_ = lean_mk_empty_array_with_capacity(v___x_1247_);
v___x_1249_ = lean_array_push(v___x_1248_, v_val_1246_);
return v___x_1249_;
}
}
}
}
lean_object* runtime_initialize_Lean_Server_InfoUtils(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_CompletionUtils(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_InfoUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_InfoUtils(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_CompletionUtils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_InfoUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_CompletionUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
}
#ifdef __cplusplus
}
#endif
