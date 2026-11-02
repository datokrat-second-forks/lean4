// Lean compiler output
// Module: Lean.Language.Lean.Util
// Imports: public import Lean.Language.Lean.Types import Lean.Elab.InfoTree.Util
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
lean_object* l_Lean_Elab_Info_range_x3f(lean_object*);
uint8_t l_Lean_Syntax_Range_overlaps(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Language_SnapshotTree_transform___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_String_instDecidableLtRaw(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
lean_object* l_Lean_Language_Snapshot_transform(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_Range_includes(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_obj_tag_nat(lean_object*);
extern lean_object* l_Lean_MessageLog_empty;
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeContainsHoverPos(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeContainsHoverPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeOverlapsRequestedRange(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeOverlapsRequestedRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeIncludesRequestedRange(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeIncludesRequestedRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1 = (const lean_object*)&l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdParsedSnap___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdParsedSnap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Language_Lean_findCmdDataAtPos_spec__0(lean_object*);
static const lean_string_object l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Language.Lean.Util"};
static const lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__0_value;
static const lean_string_object l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Language.Lean.findCmdDataAtPos"};
static const lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__1 = (const lean_object*)&l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__1_value;
static const lean_string_object l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "assertion violation: s.infoTree\?.isSome\n        "};
static const lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__2 = (const lean_object*)&l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTree_transform___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__4___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1(lean_object*);
static lean_once_cell_t l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__2(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos___lam__0(lean_object*);
static const lean_closure_object l_Lean_Language_Lean_findInfoTreeAtPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_findInfoTreeAtPos___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_Lean_findInfoTreeAtPos___closed__0 = (const lean_object*)&l_Lean_Language_Lean_findInfoTreeAtPos___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeContainsHoverPos(lean_object* v_text_1_, lean_object* v_r_2_, lean_object* v_hoverPos_3_, uint8_t v_includeStop_4_){
_start:
{
if (v_includeStop_4_ == 0)
{
lean_object* v_stop_5_; lean_object* v_source_6_; lean_object* v___x_7_; uint8_t v_decide_8_; uint8_t v___x_9_; 
v_stop_5_ = lean_ctor_get(v_r_2_, 1);
v_source_6_ = lean_ctor_get(v_text_1_, 0);
v___x_7_ = lean_string_utf8_byte_size(v_source_6_);
v_decide_8_ = lean_nat_dec_eq(v_stop_5_, v___x_7_);
v___x_9_ = l_Lean_Syntax_Range_contains(v_r_2_, v_hoverPos_3_, v_decide_8_);
return v___x_9_;
}
else
{
uint8_t v___x_10_; 
v___x_10_ = l_Lean_Syntax_Range_contains(v_r_2_, v_hoverPos_3_, v_includeStop_4_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeContainsHoverPos___boxed(lean_object* v_text_11_, lean_object* v_r_12_, lean_object* v_hoverPos_13_, lean_object* v_includeStop_14_){
_start:
{
uint8_t v_includeStop_boxed_15_; uint8_t v_res_16_; lean_object* v_r_17_; 
v_includeStop_boxed_15_ = lean_unbox(v_includeStop_14_);
v_res_16_ = l_Lean_FileMap_rangeContainsHoverPos(v_text_11_, v_r_12_, v_hoverPos_13_, v_includeStop_boxed_15_);
lean_dec(v_hoverPos_13_);
lean_dec_ref(v_r_12_);
lean_dec_ref(v_text_11_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeOverlapsRequestedRange(lean_object* v_text_18_, lean_object* v_documentRange_19_, lean_object* v_requestedRange_20_, uint8_t v_includeDocumentRangeStop_21_, uint8_t v_includeRequestedRangeStop_22_){
_start:
{
if (v_includeDocumentRangeStop_21_ == 0)
{
lean_object* v_stop_23_; lean_object* v_source_24_; lean_object* v___x_25_; uint8_t v_decide_26_; uint8_t v___x_27_; 
v_stop_23_ = lean_ctor_get(v_documentRange_19_, 1);
v_source_24_ = lean_ctor_get(v_text_18_, 0);
v___x_25_ = lean_string_utf8_byte_size(v_source_24_);
v_decide_26_ = lean_nat_dec_eq(v_stop_23_, v___x_25_);
v___x_27_ = l_Lean_Syntax_Range_overlaps(v_documentRange_19_, v_requestedRange_20_, v_decide_26_, v_includeRequestedRangeStop_22_);
return v___x_27_;
}
else
{
uint8_t v___x_28_; 
v___x_28_ = l_Lean_Syntax_Range_overlaps(v_documentRange_19_, v_requestedRange_20_, v_includeDocumentRangeStop_21_, v_includeRequestedRangeStop_22_);
return v___x_28_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeOverlapsRequestedRange___boxed(lean_object* v_text_29_, lean_object* v_documentRange_30_, lean_object* v_requestedRange_31_, lean_object* v_includeDocumentRangeStop_32_, lean_object* v_includeRequestedRangeStop_33_){
_start:
{
uint8_t v_includeDocumentRangeStop_boxed_34_; uint8_t v_includeRequestedRangeStop_boxed_35_; uint8_t v_res_36_; lean_object* v_r_37_; 
v_includeDocumentRangeStop_boxed_34_ = lean_unbox(v_includeDocumentRangeStop_32_);
v_includeRequestedRangeStop_boxed_35_ = lean_unbox(v_includeRequestedRangeStop_33_);
v_res_36_ = l_Lean_FileMap_rangeOverlapsRequestedRange(v_text_29_, v_documentRange_30_, v_requestedRange_31_, v_includeDocumentRangeStop_boxed_34_, v_includeRequestedRangeStop_boxed_35_);
lean_dec_ref(v_requestedRange_31_);
lean_dec_ref(v_documentRange_30_);
lean_dec_ref(v_text_29_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeIncludesRequestedRange(lean_object* v_text_38_, lean_object* v_documentRange_39_, lean_object* v_requestedRange_40_, uint8_t v_includeDocumentRangeStop_41_, uint8_t v_includeRequestedRangeStop_42_){
_start:
{
if (v_includeDocumentRangeStop_41_ == 0)
{
lean_object* v_stop_43_; lean_object* v_source_44_; lean_object* v___x_45_; uint8_t v_decide_46_; uint8_t v___x_47_; 
v_stop_43_ = lean_ctor_get(v_documentRange_39_, 1);
v_source_44_ = lean_ctor_get(v_text_38_, 0);
v___x_45_ = lean_string_utf8_byte_size(v_source_44_);
v_decide_46_ = lean_nat_dec_eq(v_stop_43_, v___x_45_);
v___x_47_ = l_Lean_Syntax_Range_includes(v_documentRange_39_, v_requestedRange_40_, v_decide_46_, v_includeRequestedRangeStop_42_);
return v___x_47_;
}
else
{
uint8_t v___x_48_; 
v___x_48_ = l_Lean_Syntax_Range_includes(v_documentRange_39_, v_requestedRange_40_, v_includeDocumentRangeStop_41_, v_includeRequestedRangeStop_42_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeIncludesRequestedRange___boxed(lean_object* v_text_49_, lean_object* v_documentRange_50_, lean_object* v_requestedRange_51_, lean_object* v_includeDocumentRangeStop_52_, lean_object* v_includeRequestedRangeStop_53_){
_start:
{
uint8_t v_includeDocumentRangeStop_boxed_54_; uint8_t v_includeRequestedRangeStop_boxed_55_; uint8_t v_res_56_; lean_object* v_r_57_; 
v_includeDocumentRangeStop_boxed_54_ = lean_unbox(v_includeDocumentRangeStop_52_);
v_includeRequestedRangeStop_boxed_55_ = lean_unbox(v_includeRequestedRangeStop_53_);
v_res_56_ = l_Lean_FileMap_rangeIncludesRequestedRange(v_text_49_, v_documentRange_50_, v_requestedRange_51_, v_includeDocumentRangeStop_boxed_54_, v_includeRequestedRangeStop_boxed_55_);
lean_dec_ref(v_requestedRange_51_);
lean_dec_ref(v_documentRange_50_);
lean_dec_ref(v_text_49_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___impl(lean_object* v_x_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_obj_tag_nat(v_x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___impl___boxed(lean_object* v_x_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___impl(v_x_60_);
lean_dec(v_x_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(lean_object* v_t_62_, lean_object* v_k_63_){
_start:
{
if (lean_obj_tag(v_t_62_) == 0)
{
return v_k_63_;
}
else
{
uint8_t v_foldChildren_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v_foldChildren_64_ = lean_ctor_get_uint8(v_t_62_, 0);
v___x_65_ = lean_box(v_foldChildren_64_);
v___x_66_ = lean_apply_1(v_k_63_, v___x_65_);
return v___x_66_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg___boxed(lean_object* v_t_67_, lean_object* v_k_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_67_, v_k_68_);
lean_dec(v_t_67_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim(lean_object* v_motive_70_, lean_object* v_ctorIdx_71_, lean_object* v_t_72_, lean_object* v_h_73_, lean_object* v_k_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_72_, v_k_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___boxed(lean_object* v_motive_76_, lean_object* v_ctorIdx_77_, lean_object* v_t_78_, lean_object* v_h_79_, lean_object* v_k_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim(v_motive_76_, v_ctorIdx_77_, v_t_78_, v_h_79_, v_k_80_);
lean_dec(v_t_78_);
lean_dec(v_ctorIdx_77_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg(lean_object* v_t_82_, lean_object* v_done_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_82_, v_done_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg___boxed(lean_object* v_t_85_, lean_object* v_done_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg(v_t_85_, v_done_86_);
lean_dec(v_t_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim(lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_done_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_89_, v_done_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___boxed(lean_object* v_motive_93_, lean_object* v_t_94_, lean_object* v_h_95_, lean_object* v_done_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim(v_motive_93_, v_t_94_, v_h_95_, v_done_96_);
lean_dec(v_t_94_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg(lean_object* v_t_98_, lean_object* v_proceed_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_98_, v_proceed_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg___boxed(lean_object* v_t_101_, lean_object* v_proceed_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg(v_t_101_, v_proceed_102_);
lean_dec(v_t_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim(lean_object* v_motive_104_, lean_object* v_t_105_, lean_object* v_h_106_, lean_object* v_proceed_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_105_, v_proceed_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___boxed(lean_object* v_motive_109_, lean_object* v_t_110_, lean_object* v_h_111_, lean_object* v_proceed_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim(v_motive_109_, v_t_110_, v_h_111_, v_proceed_112_);
lean_dec(v_t_110_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__0(lean_object* v_f_114_, lean_object* v_tail_115_, lean_object* v_x_116_){
_start:
{
lean_object* v_snd_117_; uint8_t v___x_118_; 
v_snd_117_ = lean_ctor_get(v_x_116_, 1);
v___x_118_ = lean_unbox(v_snd_117_);
if (v___x_118_ == 0)
{
lean_object* v_fst_119_; lean_object* v___x_120_; 
v_fst_119_ = lean_ctor_get(v_x_116_, 0);
lean_inc(v_fst_119_);
lean_dec_ref(v_x_116_);
v___x_120_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_114_, v_fst_119_, v_tail_115_);
return v___x_120_;
}
else
{
lean_object* v___x_121_; 
lean_dec(v_tail_115_);
lean_dec_ref(v_f_114_);
v___x_121_ = lean_task_pure(v_x_116_);
return v___x_121_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__2(lean_object* v_f_122_, lean_object* v_tail_123_, lean_object* v_head_124_, lean_object* v___f_125_, lean_object* v_x_126_){
_start:
{
lean_object* v_snd_127_; 
v_snd_127_ = lean_ctor_get(v_x_126_, 1);
if (lean_obj_tag(v_snd_127_) == 1)
{
uint8_t v_foldChildren_128_; 
v_foldChildren_128_ = lean_ctor_get_uint8(v_snd_127_, 0);
if (v_foldChildren_128_ == 0)
{
lean_object* v_fst_129_; lean_object* v___x_130_; 
lean_dec_ref(v___f_125_);
lean_dec_ref(v_head_124_);
v_fst_129_ = lean_ctor_get(v_x_126_, 0);
lean_inc(v_fst_129_);
lean_dec_ref(v_x_126_);
v___x_130_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_122_, v_fst_129_, v_tail_123_);
return v___x_130_;
}
else
{
lean_object* v_fst_131_; lean_object* v_task_132_; lean_object* v___f_133_; lean_object* v___x_134_; lean_object* v_subtreeTask_135_; lean_object* v___x_136_; 
lean_dec(v_tail_123_);
v_fst_131_ = lean_ctor_get(v_x_126_, 0);
lean_inc(v_fst_131_);
lean_dec_ref(v_x_126_);
v_task_132_ = lean_ctor_get(v_head_124_, 3);
lean_inc_ref(v_task_132_);
lean_dec_ref(v_head_124_);
v___f_133_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__1), 3, 2);
lean_closure_set(v___f_133_, 0, v_f_122_);
lean_closure_set(v___f_133_, 1, v_fst_131_);
v___x_134_ = lean_unsigned_to_nat(0u);
v_subtreeTask_135_ = lean_task_bind(v_task_132_, v___f_133_, v___x_134_, v_foldChildren_128_);
v___x_136_ = lean_task_bind(v_subtreeTask_135_, v___f_125_, v___x_134_, v_foldChildren_128_);
return v___x_136_;
}
}
else
{
lean_object* v_fst_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_147_; 
lean_dec_ref(v___f_125_);
lean_dec_ref(v_head_124_);
lean_dec(v_tail_123_);
lean_dec_ref(v_f_122_);
v_fst_137_ = lean_ctor_get(v_x_126_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v_x_126_);
if (v_isSharedCheck_147_ == 0)
{
lean_object* v_unused_148_; 
v_unused_148_ = lean_ctor_get(v_x_126_, 1);
lean_dec(v_unused_148_);
v___x_139_ = v_x_126_;
v_isShared_140_ = v_isSharedCheck_147_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_fst_137_);
lean_dec(v_x_126_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_147_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_141_ = 1;
v___x_142_ = lean_box(v___x_141_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 1, v___x_142_);
v___x_144_ = v___x_139_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_fst_137_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v___x_142_);
v___x_144_ = v_reuseFailAlloc_146_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_145_; 
v___x_145_ = lean_task_pure(v___x_144_);
return v___x_145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(lean_object* v_f_149_, lean_object* v_acc_150_, lean_object* v_a_151_){
_start:
{
if (lean_obj_tag(v_a_151_) == 0)
{
uint8_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
lean_dec_ref(v_f_149_);
v___x_152_ = 0;
v___x_153_ = lean_box(v___x_152_);
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v_acc_150_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
v___x_155_ = lean_task_pure(v___x_154_);
return v___x_155_;
}
else
{
lean_object* v_head_156_; lean_object* v_tail_157_; lean_object* v___f_158_; lean_object* v___f_159_; lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; lean_object* v___x_163_; 
v_head_156_ = lean_ctor_get(v_a_151_, 0);
lean_inc_n(v_head_156_, 2);
v_tail_157_ = lean_ctor_get(v_a_151_, 1);
lean_inc_n(v_tail_157_, 2);
lean_dec_ref_known(v_a_151_, 2);
lean_inc_ref_n(v_f_149_, 2);
v___f_158_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__0), 3, 2);
lean_closure_set(v___f_158_, 0, v_f_149_);
lean_closure_set(v___f_158_, 1, v_tail_157_);
v___f_159_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__2), 5, 4);
lean_closure_set(v___f_159_, 0, v_f_149_);
lean_closure_set(v___f_159_, 1, v_tail_157_);
lean_closure_set(v___f_159_, 2, v_head_156_);
lean_closure_set(v___f_159_, 3, v___f_158_);
v___x_160_ = lean_apply_2(v_f_149_, v_head_156_, v_acc_150_);
v___x_161_ = lean_unsigned_to_nat(0u);
v___x_162_ = 1;
v___x_163_ = lean_task_bind(v___x_160_, v___f_159_, v___x_161_, v___x_162_);
return v___x_163_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(lean_object* v_f_164_, lean_object* v_acc_165_, lean_object* v_tree_166_){
_start:
{
lean_object* v_children_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v_children_167_ = lean_ctor_get(v_tree_166_, 1);
lean_inc_ref(v_children_167_);
lean_dec_ref(v_tree_166_);
v___x_168_ = lean_array_to_list(v_children_167_);
v___x_169_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_164_, v_acc_165_, v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__1(lean_object* v_f_170_, lean_object* v_fst_171_, lean_object* v_tree_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(v_f_170_, v_fst_171_, v_tree_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree(lean_object* v_00_u03b1_174_, lean_object* v_f_175_, lean_object* v_acc_176_, lean_object* v_tree_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(v_f_175_, v_acc_176_, v_tree_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren(lean_object* v_00_u03b1_179_, lean_object* v_f_180_, lean_object* v_acc_181_, lean_object* v_a_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_180_, v_acc_181_, v_a_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0(lean_object* v_x_184_){
_start:
{
lean_object* v_fst_185_; 
v_fst_185_ = lean_ctor_get(v_x_184_, 0);
lean_inc(v_fst_185_);
return v_fst_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0___boxed(lean_object* v_x_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0(v_x_186_);
lean_dec_ref(v_x_186_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg(lean_object* v_tree_189_, lean_object* v_init_190_, lean_object* v_f_191_){
_start:
{
lean_object* v___f_192_; lean_object* v_t_193_; lean_object* v___x_194_; uint8_t v___x_195_; lean_object* v___x_196_; 
v___f_192_ = ((lean_object*)(l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0));
v_t_193_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(v_f_191_, v_init_190_, v_tree_189_);
v___x_194_ = lean_unsigned_to_nat(0u);
v___x_195_ = 1;
v___x_196_ = lean_task_map(v___f_192_, v_t_193_, v___x_194_, v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps(lean_object* v_00_u03b1_197_, lean_object* v_tree_198_, lean_object* v_init_199_, lean_object* v_f_200_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_198_, v_init_199_, v_f_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0(uint8_t v___x_202_, lean_object* v___x_203_, lean_object* v_tree_204_){
_start:
{
lean_object* v_element_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_218_; 
v_element_205_ = lean_ctor_get(v_tree_204_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v_tree_204_);
if (v_isSharedCheck_218_ == 0)
{
lean_object* v_unused_219_; 
v_unused_219_ = lean_ctor_get(v_tree_204_, 1);
lean_dec(v_unused_219_);
v___x_207_ = v_tree_204_;
v_isShared_208_ = v_isSharedCheck_218_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_element_205_);
lean_dec(v_tree_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_218_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v_infoTree_x3f_209_; 
v_infoTree_x3f_209_ = lean_ctor_get(v_element_205_, 2);
lean_inc(v_infoTree_x3f_209_);
lean_dec_ref(v_element_205_);
if (lean_obj_tag(v_infoTree_x3f_209_) == 1)
{
lean_object* v___x_210_; lean_object* v___x_212_; 
lean_dec(v___x_203_);
v___x_210_ = lean_box(0);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 1, v___x_210_);
lean_ctor_set(v___x_207_, 0, v_infoTree_x3f_209_);
v___x_212_ = v___x_207_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_infoTree_x3f_209_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
else
{
lean_object* v___x_214_; lean_object* v___x_216_; 
lean_dec(v_infoTree_x3f_209_);
v___x_214_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_214_, 0, v___x_202_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 1, v___x_214_);
lean_ctor_set(v___x_207_, 0, v___x_203_);
v___x_216_ = v___x_207_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v___x_214_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0___boxed(lean_object* v___x_220_, lean_object* v___x_221_, lean_object* v_tree_222_){
_start:
{
uint8_t v___x_408__boxed_223_; lean_object* v_res_224_; 
v___x_408__boxed_223_ = lean_unbox(v___x_220_);
v_res_224_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0(v___x_408__boxed_223_, v___x_221_, v_tree_222_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1(lean_object* v_text_229_, lean_object* v_hoverPos_230_, uint8_t v_includeStop_231_, lean_object* v___x_232_, lean_object* v_snap_233_, lean_object* v_x_234_){
_start:
{
lean_object* v_stx_x3f_235_; 
v_stx_x3f_235_ = lean_ctor_get(v_snap_233_, 0);
lean_inc(v_stx_x3f_235_);
if (lean_obj_tag(v_stx_x3f_235_) == 1)
{
lean_object* v_task_236_; lean_object* v_val_237_; uint8_t v___x_238_; lean_object* v___x_239_; 
v_task_236_ = lean_ctor_get(v_snap_233_, 3);
lean_inc_ref(v_task_236_);
lean_dec_ref(v_snap_233_);
v_val_237_ = lean_ctor_get(v_stx_x3f_235_, 0);
lean_inc(v_val_237_);
lean_dec_ref_known(v_stx_x3f_235_, 1);
v___x_238_ = 1;
v___x_239_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_val_237_, v___x_238_);
lean_dec(v_val_237_);
if (lean_obj_tag(v___x_239_) == 1)
{
lean_object* v_val_240_; uint8_t v___x_241_; 
v_val_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_val_240_);
lean_dec_ref_known(v___x_239_, 1);
v___x_241_ = l_Lean_FileMap_rangeContainsHoverPos(v_text_229_, v_val_240_, v_hoverPos_230_, v_includeStop_231_);
lean_dec(v_val_240_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec_ref(v_task_236_);
v___x_242_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_242_, 0, v___x_241_);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_232_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_task_pure(v___x_243_);
return v___x_244_;
}
else
{
lean_object* v___x_245_; lean_object* v___f_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_245_ = lean_box(v___x_241_);
v___f_246_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0___boxed), 3, 2);
lean_closure_set(v___f_246_, 0, v___x_245_);
lean_closure_set(v___f_246_, 1, v___x_232_);
v___x_247_ = lean_unsigned_to_nat(0u);
v___x_248_ = lean_task_map(v___f_246_, v_task_236_, v___x_247_, v___x_241_);
return v___x_248_;
}
}
else
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec(v___x_239_);
lean_dec_ref(v_task_236_);
v___x_249_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0));
v___x_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_232_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_task_pure(v___x_250_);
return v___x_251_;
}
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
lean_dec(v_stx_x3f_235_);
lean_dec_ref(v_snap_233_);
v___x_252_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1));
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_232_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = lean_task_pure(v___x_253_);
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___boxed(lean_object* v_text_255_, lean_object* v_hoverPos_256_, lean_object* v_includeStop_257_, lean_object* v___x_258_, lean_object* v_snap_259_, lean_object* v_x_260_){
_start:
{
uint8_t v_includeStop_boxed_261_; lean_object* v_res_262_; 
v_includeStop_boxed_261_ = lean_unbox(v_includeStop_257_);
v_res_262_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1(v_text_255_, v_hoverPos_256_, v_includeStop_boxed_261_, v___x_258_, v_snap_259_, v_x_260_);
lean_dec(v_x_260_);
lean_dec(v_hoverPos_256_);
lean_dec_ref(v_text_255_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos(lean_object* v_text_263_, lean_object* v_tree_264_, lean_object* v_hoverPos_265_, uint8_t v_includeStop_266_){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___f_269_; lean_object* v___x_270_; 
v___x_267_ = lean_box(0);
v___x_268_ = lean_box(v_includeStop_266_);
v___f_269_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___boxed), 6, 4);
lean_closure_set(v___f_269_, 0, v_text_263_);
lean_closure_set(v___f_269_, 1, v_hoverPos_265_);
lean_closure_set(v___f_269_, 2, v___x_268_);
lean_closure_set(v___f_269_, 3, v___x_267_);
v___x_270_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_264_, v___x_267_, v___f_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___boxed(lean_object* v_text_271_, lean_object* v_tree_272_, lean_object* v_hoverPos_273_, lean_object* v_includeStop_274_){
_start:
{
uint8_t v_includeStop_boxed_275_; lean_object* v_res_276_; 
v_includeStop_boxed_275_ = lean_unbox(v_includeStop_274_);
v_res_276_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos(v_text_271_, v_tree_272_, v_hoverPos_273_, v_includeStop_boxed_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0(lean_object* v_requestedRange_277_, uint8_t v___x_278_, lean_object* v_f_279_, lean_object* v_ctx_280_, lean_object* v_i_281_, lean_object* v_acc_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_Elab_Info_range_x3f(v_i_281_);
if (lean_obj_tag(v___x_283_) == 1)
{
lean_object* v_val_284_; uint8_t v___x_285_; 
v_val_284_ = lean_ctor_get(v___x_283_, 0);
lean_inc(v_val_284_);
lean_dec_ref_known(v___x_283_, 1);
v___x_285_ = l_Lean_Syntax_Range_overlaps(v_val_284_, v_requestedRange_277_, v___x_278_, v___x_278_);
lean_dec(v_val_284_);
if (v___x_285_ == 0)
{
lean_dec_ref(v_i_281_);
lean_dec_ref(v_ctx_280_);
lean_dec(v_f_279_);
return v_acc_282_;
}
else
{
lean_object* v___x_286_; 
v___x_286_ = lean_apply_3(v_f_279_, v_ctx_280_, v_i_281_, v_acc_282_);
return v___x_286_;
}
}
else
{
lean_dec(v___x_283_);
lean_dec_ref(v_i_281_);
lean_dec_ref(v_ctx_280_);
lean_dec(v_f_279_);
return v_acc_282_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0___boxed(lean_object* v_requestedRange_287_, lean_object* v___x_288_, lean_object* v_f_289_, lean_object* v_ctx_290_, lean_object* v_i_291_, lean_object* v_acc_292_){
_start:
{
uint8_t v___x_559__boxed_293_; lean_object* v_res_294_; 
v___x_559__boxed_293_ = lean_unbox(v___x_288_);
v_res_294_ = l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0(v_requestedRange_287_, v___x_559__boxed_293_, v_f_289_, v_ctx_290_, v_i_291_, v_acc_292_);
lean_dec_ref(v_requestedRange_287_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1(lean_object* v___f_295_, lean_object* v_acc_296_, uint8_t v___x_297_, lean_object* v_tree_298_){
_start:
{
lean_object* v_element_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_314_; 
v_element_299_ = lean_ctor_get(v_tree_298_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v_tree_298_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; 
v_unused_315_ = lean_ctor_get(v_tree_298_, 1);
lean_dec(v_unused_315_);
v___x_301_ = v_tree_298_;
v_isShared_302_ = v_isSharedCheck_314_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_element_299_);
lean_dec(v_tree_298_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_314_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v_infoTree_x3f_303_; 
v_infoTree_x3f_303_ = lean_ctor_get(v_element_299_, 2);
lean_inc(v_infoTree_x3f_303_);
lean_dec_ref(v_element_299_);
if (lean_obj_tag(v_infoTree_x3f_303_) == 1)
{
lean_object* v_val_304_; lean_object* v_acc_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
v_val_304_ = lean_ctor_get(v_infoTree_x3f_303_, 0);
lean_inc(v_val_304_);
lean_dec_ref_known(v_infoTree_x3f_303_, 1);
v_acc_305_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___f_295_, v_acc_296_, v_val_304_);
v___x_306_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_306_, 0, v___x_297_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 1, v___x_306_);
lean_ctor_set(v___x_301_, 0, v_acc_305_);
v___x_308_ = v___x_301_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_acc_305_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v___x_306_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
else
{
lean_object* v___x_310_; lean_object* v___x_312_; 
lean_dec(v_infoTree_x3f_303_);
lean_dec(v___f_295_);
v___x_310_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_310_, 0, v___x_297_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 1, v___x_310_);
lean_ctor_set(v___x_301_, 0, v_acc_296_);
v___x_312_ = v___x_301_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_acc_296_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v___x_310_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1___boxed(lean_object* v___f_316_, lean_object* v_acc_317_, lean_object* v___x_318_, lean_object* v_tree_319_){
_start:
{
uint8_t v___x_571__boxed_320_; lean_object* v_res_321_; 
v___x_571__boxed_320_ = lean_unbox(v___x_318_);
v_res_321_ = l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1(v___f_316_, v_acc_317_, v___x_571__boxed_320_, v_tree_319_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__2(lean_object* v_requestedRange_322_, lean_object* v_f_323_, lean_object* v_snap_324_, lean_object* v_acc_325_){
_start:
{
lean_object* v_stx_x3f_326_; 
v_stx_x3f_326_ = lean_ctor_get(v_snap_324_, 0);
lean_inc(v_stx_x3f_326_);
if (lean_obj_tag(v_stx_x3f_326_) == 1)
{
lean_object* v_task_327_; lean_object* v_val_328_; uint8_t v___x_329_; lean_object* v___x_330_; 
v_task_327_ = lean_ctor_get(v_snap_324_, 3);
lean_inc_ref(v_task_327_);
lean_dec_ref(v_snap_324_);
v_val_328_ = lean_ctor_get(v_stx_x3f_326_, 0);
lean_inc(v_val_328_);
lean_dec_ref_known(v_stx_x3f_326_, 1);
v___x_329_ = 1;
v___x_330_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_val_328_, v___x_329_);
lean_dec(v_val_328_);
if (lean_obj_tag(v___x_330_) == 1)
{
lean_object* v_val_331_; uint8_t v___x_332_; 
v_val_331_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_val_331_);
lean_dec_ref_known(v___x_330_, 1);
v___x_332_ = l_Lean_Syntax_Range_overlaps(v_val_331_, v_requestedRange_322_, v___x_329_, v___x_329_);
lean_dec(v_val_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
lean_dec_ref(v_task_327_);
lean_dec(v_f_323_);
lean_dec_ref(v_requestedRange_322_);
v___x_333_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_333_, 0, v___x_332_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v_acc_325_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = lean_task_pure(v___x_334_);
return v___x_335_;
}
else
{
lean_object* v___x_336_; lean_object* v___f_337_; lean_object* v___x_338_; lean_object* v___f_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_336_ = lean_box(v___x_329_);
v___f_337_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_337_, 0, v_requestedRange_322_);
lean_closure_set(v___f_337_, 1, v___x_336_);
lean_closure_set(v___f_337_, 2, v_f_323_);
v___x_338_ = lean_box(v___x_329_);
v___f_339_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_339_, 0, v___f_337_);
lean_closure_set(v___f_339_, 1, v_acc_325_);
lean_closure_set(v___f_339_, 2, v___x_338_);
v___x_340_ = lean_unsigned_to_nat(0u);
v___x_341_ = lean_task_map(v___f_339_, v_task_327_, v___x_340_, v___x_329_);
return v___x_341_;
}
}
else
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
lean_dec(v___x_330_);
lean_dec_ref(v_task_327_);
lean_dec(v_f_323_);
lean_dec_ref(v_requestedRange_322_);
v___x_342_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0));
v___x_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_343_, 0, v_acc_325_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = lean_task_pure(v___x_343_);
return v___x_344_;
}
}
else
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
lean_dec(v_stx_x3f_326_);
lean_dec_ref(v_snap_324_);
lean_dec(v_f_323_);
lean_dec_ref(v_requestedRange_322_);
v___x_345_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1));
v___x_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_346_, 0, v_acc_325_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
v___x_347_ = lean_task_pure(v___x_346_);
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg(lean_object* v_tree_348_, lean_object* v_requestedRange_349_, lean_object* v_init_350_, lean_object* v_f_351_){
_start:
{
lean_object* v___f_352_; lean_object* v___x_353_; 
v___f_352_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__2), 4, 2);
lean_closure_set(v___f_352_, 0, v_requestedRange_349_);
lean_closure_set(v___f_352_, 1, v_f_351_);
v___x_353_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_348_, v_init_350_, v___f_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange(lean_object* v_00_u03b1_354_, lean_object* v_tree_355_, lean_object* v_requestedRange_356_, lean_object* v_init_357_, lean_object* v_f_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_Language_SnapshotTree_foldInfosInRange___redArg(v_tree_355_, v_requestedRange_356_, v_init_357_, v_f_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0(lean_object* v_log_360_, uint8_t v___x_361_, lean_object* v_tree_362_){
_start:
{
lean_object* v_element_363_; lean_object* v_diagnostics_364_; lean_object* v_msgLog_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_374_; 
v_element_363_ = lean_ctor_get(v_tree_362_, 0);
lean_inc_ref(v_element_363_);
lean_dec_ref(v_tree_362_);
v_diagnostics_364_ = lean_ctor_get(v_element_363_, 1);
lean_inc_ref(v_diagnostics_364_);
lean_dec_ref(v_element_363_);
v_msgLog_365_ = lean_ctor_get(v_diagnostics_364_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v_diagnostics_364_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v_diagnostics_364_, 1);
lean_dec(v_unused_375_);
v___x_367_ = v_diagnostics_364_;
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_msgLog_365_);
lean_dec(v_diagnostics_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_369_ = l_Lean_MessageLog_append(v_log_360_, v_msgLog_365_);
v___x_370_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_370_, 0, v___x_361_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 1, v___x_370_);
lean_ctor_set(v___x_367_, 0, v___x_369_);
v___x_372_ = v___x_367_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_369_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0___boxed(lean_object* v_log_376_, lean_object* v___x_377_, lean_object* v_tree_378_){
_start:
{
uint8_t v___x_385__boxed_379_; lean_object* v_res_380_; 
v___x_385__boxed_379_ = lean_unbox(v___x_377_);
v_res_380_ = l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0(v_log_376_, v___x_385__boxed_379_, v_tree_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1(lean_object* v_requestedRange_381_, lean_object* v_snap_382_, lean_object* v_log_383_){
_start:
{
lean_object* v_stx_x3f_384_; 
v_stx_x3f_384_ = lean_ctor_get(v_snap_382_, 0);
lean_inc(v_stx_x3f_384_);
if (lean_obj_tag(v_stx_x3f_384_) == 1)
{
lean_object* v_task_385_; lean_object* v_val_386_; uint8_t v___x_387_; lean_object* v___x_388_; 
v_task_385_ = lean_ctor_get(v_snap_382_, 3);
lean_inc_ref(v_task_385_);
lean_dec_ref(v_snap_382_);
v_val_386_ = lean_ctor_get(v_stx_x3f_384_, 0);
lean_inc(v_val_386_);
lean_dec_ref_known(v_stx_x3f_384_, 1);
v___x_387_ = 1;
v___x_388_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_val_386_, v___x_387_);
lean_dec(v_val_386_);
if (lean_obj_tag(v___x_388_) == 1)
{
lean_object* v_val_389_; uint8_t v___x_390_; 
v_val_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_val_389_);
lean_dec_ref_known(v___x_388_, 1);
v___x_390_ = l_Lean_Syntax_Range_overlaps(v_val_389_, v_requestedRange_381_, v___x_387_, v___x_387_);
lean_dec(v_val_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
lean_dec_ref(v_task_385_);
v___x_391_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_391_, 0, v___x_390_);
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v_log_383_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = lean_task_pure(v___x_392_);
return v___x_393_;
}
else
{
lean_object* v___x_394_; lean_object* v___f_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_394_ = lean_box(v___x_387_);
v___f_395_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0___boxed), 3, 2);
lean_closure_set(v___f_395_, 0, v_log_383_);
lean_closure_set(v___f_395_, 1, v___x_394_);
v___x_396_ = lean_unsigned_to_nat(0u);
v___x_397_ = lean_task_map(v___f_395_, v_task_385_, v___x_396_, v___x_387_);
return v___x_397_;
}
}
else
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
lean_dec(v___x_388_);
lean_dec_ref(v_task_385_);
v___x_398_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0));
v___x_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_399_, 0, v_log_383_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = lean_task_pure(v___x_399_);
return v___x_400_;
}
}
else
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec(v_stx_x3f_384_);
lean_dec_ref(v_snap_382_);
v___x_401_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0));
v___x_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_402_, 0, v_log_383_);
lean_ctor_set(v___x_402_, 1, v___x_401_);
v___x_403_ = lean_task_pure(v___x_402_);
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1___boxed(lean_object* v_requestedRange_404_, lean_object* v_snap_405_, lean_object* v_log_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1(v_requestedRange_404_, v_snap_405_, v_log_406_);
lean_dec_ref(v_requestedRange_404_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange(lean_object* v_tree_408_, lean_object* v_requestedRange_409_){
_start:
{
lean_object* v___f_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___f_410_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1___boxed), 3, 1);
lean_closure_set(v___f_410_, 0, v_requestedRange_409_);
v___x_411_ = l_Lean_MessageLog_empty;
v___x_412_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_408_, v___x_411_, v___f_410_);
return v___x_412_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos(lean_object* v_hoverPos_413_, lean_object* v_cmdParsed_414_){
_start:
{
lean_object* v_stx_415_; uint8_t v___x_416_; lean_object* v___x_417_; 
v_stx_415_ = lean_ctor_get(v_cmdParsed_414_, 1);
v___x_416_ = 1;
v___x_417_ = l_Lean_Syntax_getPos_x3f(v_stx_415_, v___x_416_);
if (lean_obj_tag(v___x_417_) == 1)
{
lean_object* v_val_418_; uint8_t v___x_419_; 
v_val_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_val_418_);
lean_dec_ref_known(v___x_417_, 1);
v___x_419_ = l_String_instDecidableLtRaw(v_hoverPos_413_, v_val_418_);
lean_dec(v_val_418_);
return v___x_419_;
}
else
{
uint8_t v___x_420_; 
lean_dec(v___x_417_);
v___x_420_ = 0;
return v___x_420_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos___boxed(lean_object* v_hoverPos_421_, lean_object* v_cmdParsed_422_){
_start:
{
uint8_t v_res_423_; lean_object* v_r_424_; 
v_res_423_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos(v_hoverPos_421_, v_cmdParsed_422_);
lean_dec_ref(v_cmdParsed_422_);
lean_dec(v_hoverPos_421_);
v_r_424_ = lean_box(v_res_423_);
return v_r_424_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos(lean_object* v_text_425_, lean_object* v_hoverPos_426_, lean_object* v_cmdParsed_427_){
_start:
{
lean_object* v_stx_428_; uint8_t v___x_429_; lean_object* v___x_430_; 
v_stx_428_ = lean_ctor_get(v_cmdParsed_427_, 1);
v___x_429_ = 1;
v___x_430_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_428_, v___x_429_);
if (lean_obj_tag(v___x_430_) == 1)
{
lean_object* v_val_431_; uint8_t v___x_432_; uint8_t v___x_433_; 
v_val_431_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_val_431_);
lean_dec_ref_known(v___x_430_, 1);
v___x_432_ = 0;
v___x_433_ = l_Lean_FileMap_rangeContainsHoverPos(v_text_425_, v_val_431_, v_hoverPos_426_, v___x_432_);
lean_dec(v_val_431_);
return v___x_433_;
}
else
{
uint8_t v___x_434_; 
lean_dec(v___x_430_);
v___x_434_ = 0;
return v___x_434_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos___boxed(lean_object* v_text_435_, lean_object* v_hoverPos_436_, lean_object* v_cmdParsed_437_){
_start:
{
uint8_t v_res_438_; lean_object* v_r_439_; 
v_res_438_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos(v_text_435_, v_hoverPos_436_, v_cmdParsed_437_);
lean_dec_ref(v_cmdParsed_437_);
lean_dec(v_hoverPos_436_);
lean_dec_ref(v_text_435_);
v_r_439_ = lean_box(v_res_438_);
return v_r_439_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0(void){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_440_ = lean_box(0);
v___x_441_ = lean_task_pure(v___x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go(lean_object* v_text_442_, lean_object* v_hoverPos_443_, lean_object* v_cmdParsed_444_){
_start:
{
uint8_t v___x_445_; 
v___x_445_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos(v_text_442_, v_hoverPos_443_, v_cmdParsed_444_);
if (v___x_445_ == 0)
{
uint8_t v___x_446_; 
v___x_446_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos(v_hoverPos_443_, v_cmdParsed_444_);
if (v___x_446_ == 0)
{
lean_object* v_nextCmdSnap_x3f_447_; 
v_nextCmdSnap_x3f_447_ = lean_ctor_get(v_cmdParsed_444_, 4);
lean_inc(v_nextCmdSnap_x3f_447_);
lean_dec_ref(v_cmdParsed_444_);
if (lean_obj_tag(v_nextCmdSnap_x3f_447_) == 0)
{
lean_object* v___x_448_; 
lean_dec(v_hoverPos_443_);
lean_dec_ref(v_text_442_);
v___x_448_ = lean_obj_once(&l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0, &l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0);
return v___x_448_;
}
else
{
lean_object* v_val_449_; lean_object* v_task_450_; uint8_t v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v_val_449_ = lean_ctor_get(v_nextCmdSnap_x3f_447_, 0);
lean_inc(v_val_449_);
lean_dec_ref_known(v_nextCmdSnap_x3f_447_, 1);
v_task_450_ = lean_ctor_get(v_val_449_, 3);
lean_inc_ref(v_task_450_);
lean_dec(v_val_449_);
v___x_451_ = 1;
v___x_452_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go), 3, 2);
lean_closure_set(v___x_452_, 0, v_text_442_);
lean_closure_set(v___x_452_, 1, v_hoverPos_443_);
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = lean_task_bind(v_task_450_, v___x_452_, v___x_453_, v___x_451_);
return v___x_454_;
}
}
else
{
lean_object* v___x_455_; 
lean_dec_ref(v_cmdParsed_444_);
lean_dec(v_hoverPos_443_);
lean_dec_ref(v_text_442_);
v___x_455_ = lean_obj_once(&l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0, &l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0);
return v___x_455_;
}
}
else
{
lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec(v_hoverPos_443_);
lean_dec_ref(v_text_442_);
v___x_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_456_, 0, v_cmdParsed_444_);
v___x_457_ = lean_task_pure(v___x_456_);
return v___x_457_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdParsedSnap___lam__0(lean_object* v_text_458_, lean_object* v_hoverPos_459_, lean_object* v_headerProcessed_460_){
_start:
{
lean_object* v_result_x3f_461_; 
v_result_x3f_461_ = lean_ctor_get(v_headerProcessed_460_, 2);
lean_inc(v_result_x3f_461_);
lean_dec_ref(v_headerProcessed_460_);
if (lean_obj_tag(v_result_x3f_461_) == 1)
{
lean_object* v_val_462_; lean_object* v_firstCmdSnap_463_; lean_object* v_task_464_; lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v___x_467_; lean_object* v___x_468_; 
v_val_462_ = lean_ctor_get(v_result_x3f_461_, 0);
lean_inc(v_val_462_);
lean_dec_ref_known(v_result_x3f_461_, 1);
v_firstCmdSnap_463_ = lean_ctor_get(v_val_462_, 1);
lean_inc_ref(v_firstCmdSnap_463_);
lean_dec(v_val_462_);
v_task_464_ = lean_ctor_get(v_firstCmdSnap_463_, 3);
lean_inc_ref(v_task_464_);
lean_dec_ref(v_firstCmdSnap_463_);
v___x_465_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go), 3, 2);
lean_closure_set(v___x_465_, 0, v_text_458_);
lean_closure_set(v___x_465_, 1, v_hoverPos_459_);
v___x_466_ = lean_unsigned_to_nat(0u);
v___x_467_ = 1;
v___x_468_ = lean_task_bind(v_task_464_, v___x_465_, v___x_466_, v___x_467_);
return v___x_468_;
}
else
{
lean_object* v___x_469_; 
lean_dec(v_result_x3f_461_);
lean_dec(v_hoverPos_459_);
lean_dec_ref(v_text_458_);
v___x_469_ = lean_obj_once(&l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0, &l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0);
return v___x_469_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdParsedSnap(lean_object* v_initSnap_470_, lean_object* v_text_471_, lean_object* v_hoverPos_472_){
_start:
{
lean_object* v_result_x3f_473_; 
v_result_x3f_473_ = lean_ctor_get(v_initSnap_470_, 4);
lean_inc(v_result_x3f_473_);
lean_dec_ref(v_initSnap_470_);
if (lean_obj_tag(v_result_x3f_473_) == 1)
{
lean_object* v_val_474_; lean_object* v_processedSnap_475_; lean_object* v_task_476_; lean_object* v___f_477_; lean_object* v___x_478_; uint8_t v___x_479_; lean_object* v___x_480_; 
v_val_474_ = lean_ctor_get(v_result_x3f_473_, 0);
lean_inc(v_val_474_);
lean_dec_ref_known(v_result_x3f_473_, 1);
v_processedSnap_475_ = lean_ctor_get(v_val_474_, 1);
lean_inc_ref(v_processedSnap_475_);
lean_dec(v_val_474_);
v_task_476_ = lean_ctor_get(v_processedSnap_475_, 3);
lean_inc_ref(v_task_476_);
lean_dec_ref(v_processedSnap_475_);
v___f_477_ = lean_alloc_closure((void*)(l_Lean_Language_Lean_findCmdParsedSnap___lam__0), 3, 2);
lean_closure_set(v___f_477_, 0, v_text_471_);
lean_closure_set(v___f_477_, 1, v_hoverPos_472_);
v___x_478_ = lean_unsigned_to_nat(0u);
v___x_479_ = 1;
v___x_480_ = lean_task_bind(v_task_476_, v___f_477_, v___x_478_, v___x_479_);
return v___x_480_;
}
else
{
lean_object* v___x_481_; 
lean_dec(v_result_x3f_473_);
lean_dec(v_hoverPos_472_);
lean_dec_ref(v_text_471_);
v___x_481_ = lean_obj_once(&l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0, &l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0);
return v___x_481_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Language_Lean_findCmdDataAtPos_spec__0(lean_object* v_msg_482_){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = lean_box(0);
v___x_484_ = lean_panic_fn_borrowed(v___x_483_, v_msg_482_);
return v___x_484_;
}
}
static lean_object* _init_l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_488_ = ((lean_object*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__2));
v___x_489_ = lean_unsigned_to_nat(8u);
v___x_490_ = lean_unsigned_to_nat(199u);
v___x_491_ = ((lean_object*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__1));
v___x_492_ = ((lean_object*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__0));
v___x_493_ = l_mkPanicMessageWithDecl(v___x_492_, v___x_491_, v___x_490_, v___x_489_, v___x_488_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0(lean_object* v_stx_494_, lean_object* v_s_495_){
_start:
{
lean_object* v_infoTree_x3f_496_; 
v_infoTree_x3f_496_ = lean_ctor_get(v_s_495_, 2);
lean_inc(v_infoTree_x3f_496_);
lean_dec_ref(v_s_495_);
if (lean_obj_tag(v_infoTree_x3f_496_) == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; 
lean_dec(v_stx_494_);
v___x_497_ = lean_obj_once(&l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3, &l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3_once, _init_l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3);
v___x_498_ = l_panic___at___00Lean_Language_Lean_findCmdDataAtPos_spec__0(v___x_497_);
return v___x_498_;
}
else
{
lean_object* v_val_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_507_; 
v_val_499_ = lean_ctor_get(v_infoTree_x3f_496_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v_infoTree_x3f_496_);
if (v_isSharedCheck_507_ == 0)
{
v___x_501_ = v_infoTree_x3f_496_;
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_val_499_);
lean_dec(v_infoTree_x3f_496_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v_stx_494_);
lean_ctor_set(v___x_503_, 1, v_val_499_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_503_);
v___x_505_ = v___x_501_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__1(lean_object* v_elabSnap_508_, lean_object* v___f_509_, lean_object* v_stx_510_, lean_object* v_x_511_){
_start:
{
if (lean_obj_tag(v_x_511_) == 0)
{
lean_object* v_infoTreeSnap_512_; lean_object* v_task_513_; lean_object* v___x_514_; uint8_t v___x_515_; lean_object* v___x_516_; 
lean_dec(v_stx_510_);
v_infoTreeSnap_512_ = lean_ctor_get(v_elabSnap_508_, 3);
lean_inc_ref(v_infoTreeSnap_512_);
lean_dec_ref(v_elabSnap_508_);
v_task_513_ = lean_ctor_get(v_infoTreeSnap_512_, 3);
lean_inc_ref(v_task_513_);
lean_dec_ref(v_infoTreeSnap_512_);
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = 1;
v___x_516_ = lean_task_map(v___f_509_, v_task_513_, v___x_514_, v___x_515_);
return v___x_516_;
}
else
{
lean_object* v_val_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref(v___f_509_);
lean_dec_ref(v_elabSnap_508_);
v_val_517_ = lean_ctor_get(v_x_511_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v_x_511_);
if (v_isSharedCheck_526_ == 0)
{
v___x_519_ = v_x_511_;
v_isShared_520_ = v_isSharedCheck_526_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_val_517_);
lean_dec(v_x_511_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_526_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_521_, 0, v_stx_510_);
lean_ctor_set(v___x_521_, 1, v_val_517_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_521_);
v___x_523_ = v___x_519_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_525_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
lean_object* v___x_524_; 
v___x_524_ = lean_task_pure(v___x_523_);
return v___x_524_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0(lean_object* v_s_529_, lean_object* v___y_530_){
_start:
{
lean_object* v_toSnapshot_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v_toSnapshot_531_ = lean_ctor_get(v_s_529_, 0);
lean_inc_ref(v_toSnapshot_531_);
lean_dec_ref(v_s_529_);
v___x_532_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_531_, v___y_530_);
v___x_533_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0___closed__0));
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_532_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0___boxed(lean_object* v_s_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0(v_s_535_, v___y_536_);
lean_dec_ref(v___y_536_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2(lean_object* v_t_539_, lean_object* v_a_540_){
_start:
{
lean_object* v___f_541_; lean_object* v___x_542_; 
v___f_541_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___closed__0));
v___x_542_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_539_, v___f_541_, v_a_540_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___boxed(lean_object* v_t_543_, lean_object* v_a_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2(v_t_543_, v_a_544_);
lean_dec_ref(v_a_544_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__4(lean_object* v_t_547_, lean_object* v_a_548_){
_start:
{
lean_object* v___f_549_; lean_object* v___x_550_; 
v___f_549_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__4___closed__0));
v___x_550_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_547_, v___f_549_, v_a_548_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__4___boxed(lean_object* v_t_551_, lean_object* v_a_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__4(v_t_551_, v_a_552_);
lean_dec_ref(v_a_552_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___lam__0(lean_object* v_s_554_, lean_object* v___y_555_){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_556_ = l_Lean_Language_Snapshot_transform(v_s_554_, v___y_555_);
v___x_557_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2___lam__0___closed__0));
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_556_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___lam__0___boxed(lean_object* v_s_559_, lean_object* v___y_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___lam__0(v_s_559_, v___y_560_);
lean_dec_ref(v___y_560_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3(lean_object* v_t_563_, lean_object* v_a_564_){
_start:
{
lean_object* v___f_565_; lean_object* v___x_566_; 
v___f_565_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___closed__0));
v___x_566_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_563_, v___f_565_, v_a_564_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3___boxed(lean_object* v_t_567_, lean_object* v_a_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3(v_t_567_, v_a_568_);
lean_dec_ref(v_a_568_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___lam__0(lean_object* v_s_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_toSnapshotTreeM_572_; lean_object* v___x_573_; 
v_toSnapshotTreeM_572_ = lean_ctor_get(v_s_570_, 1);
lean_inc_ref(v_toSnapshotTreeM_572_);
lean_dec_ref(v_s_570_);
lean_inc_ref(v___y_571_);
v___x_573_ = lean_apply_1(v_toSnapshotTreeM_572_, v___y_571_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___lam__0___boxed(lean_object* v_s_574_, lean_object* v___y_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___lam__0(v_s_574_, v___y_575_);
lean_dec_ref(v___y_575_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1(lean_object* v_t_578_, lean_object* v_a_579_){
_start:
{
lean_object* v___f_580_; lean_object* v___x_581_; 
v___f_580_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___closed__0));
v___x_581_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_578_, v___f_580_, v_a_579_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1___boxed(lean_object* v_t_582_, lean_object* v_a_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1(v_t_582_, v_a_583_);
lean_dec_ref(v_a_583_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1(lean_object* v_a_585_){
_start:
{
lean_object* v_toSnapshot_586_; lean_object* v_elabSnap_587_; lean_object* v_resultSnap_588_; lean_object* v_infoTreeSnap_589_; lean_object* v_reportSnap_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_toSnapshot_586_ = lean_ctor_get(v_a_585_, 0);
lean_inc_ref(v_toSnapshot_586_);
v_elabSnap_587_ = lean_ctor_get(v_a_585_, 1);
lean_inc_ref(v_elabSnap_587_);
v_resultSnap_588_ = lean_ctor_get(v_a_585_, 2);
lean_inc_ref(v_resultSnap_588_);
v_infoTreeSnap_589_ = lean_ctor_get(v_a_585_, 3);
lean_inc_ref(v_infoTreeSnap_589_);
v_reportSnap_590_ = lean_ctor_get(v_a_585_, 4);
lean_inc_ref(v_reportSnap_590_);
lean_dec_ref(v_a_585_);
v___x_591_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_592_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_586_, v___x_591_);
v___x_593_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__1(v_elabSnap_587_, v___x_591_);
v___x_594_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__2(v_resultSnap_588_, v___x_591_);
v___x_595_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__3(v_infoTreeSnap_589_, v___x_591_);
v___x_596_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1_spec__4(v_reportSnap_590_, v___x_591_);
v___x_597_ = lean_unsigned_to_nat(4u);
v___x_598_ = lean_mk_empty_array_with_capacity(v___x_597_);
v___x_599_ = lean_array_push(v___x_598_, v___x_593_);
v___x_600_ = lean_array_push(v___x_599_, v___x_594_);
v___x_601_ = lean_array_push(v___x_600_, v___x_595_);
v___x_602_ = lean_array_push(v___x_601_, v___x_596_);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_592_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
return v___x_603_;
}
}
static lean_object* _init_l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = lean_box(0);
v___x_605_ = lean_task_pure(v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__2(lean_object* v_text_606_, lean_object* v_hoverPos_607_, uint8_t v_includeStop_608_, lean_object* v_x_609_){
_start:
{
if (lean_obj_tag(v_x_609_) == 0)
{
lean_object* v___x_610_; 
lean_dec(v_hoverPos_607_);
lean_dec_ref(v_text_606_);
v___x_610_ = lean_obj_once(&l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0, &l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0_once, _init_l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0);
return v___x_610_;
}
else
{
lean_object* v_val_611_; lean_object* v_stx_612_; lean_object* v_elabSnap_613_; lean_object* v___f_614_; lean_object* v___f_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; uint8_t v___x_619_; lean_object* v___x_620_; 
v_val_611_ = lean_ctor_get(v_x_609_, 0);
lean_inc(v_val_611_);
lean_dec_ref_known(v_x_609_, 1);
v_stx_612_ = lean_ctor_get(v_val_611_, 1);
lean_inc_n(v_stx_612_, 2);
v_elabSnap_613_ = lean_ctor_get(v_val_611_, 3);
lean_inc_ref_n(v_elabSnap_613_, 2);
lean_dec(v_val_611_);
v___f_614_ = lean_alloc_closure((void*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__0), 2, 1);
lean_closure_set(v___f_614_, 0, v_stx_612_);
v___f_615_ = lean_alloc_closure((void*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__1), 4, 3);
lean_closure_set(v___f_615_, 0, v_elabSnap_613_);
lean_closure_set(v___f_615_, 1, v___f_614_);
lean_closure_set(v___f_615_, 2, v_stx_612_);
v___x_616_ = l_Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1(v_elabSnap_613_);
v___x_617_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos(v_text_606_, v___x_616_, v_hoverPos_607_, v_includeStop_608_);
v___x_618_ = lean_unsigned_to_nat(0u);
v___x_619_ = 1;
v___x_620_ = lean_task_bind(v___x_617_, v___f_615_, v___x_618_, v___x_619_);
return v___x_620_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__2___boxed(lean_object* v_text_621_, lean_object* v_hoverPos_622_, lean_object* v_includeStop_623_, lean_object* v_x_624_){
_start:
{
uint8_t v_includeStop_boxed_625_; lean_object* v_res_626_; 
v_includeStop_boxed_625_ = lean_unbox(v_includeStop_623_);
v_res_626_ = l_Lean_Language_Lean_findCmdDataAtPos___lam__2(v_text_621_, v_hoverPos_622_, v_includeStop_boxed_625_, v_x_624_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos(lean_object* v_initSnap_627_, lean_object* v_text_628_, lean_object* v_hoverPos_629_, uint8_t v_includeStop_630_){
_start:
{
lean_object* v___x_631_; lean_object* v___f_632_; lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; lean_object* v___x_636_; 
v___x_631_ = lean_box(v_includeStop_630_);
lean_inc(v_hoverPos_629_);
lean_inc_ref(v_text_628_);
v___f_632_ = lean_alloc_closure((void*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__2___boxed), 4, 3);
lean_closure_set(v___f_632_, 0, v_text_628_);
lean_closure_set(v___f_632_, 1, v_hoverPos_629_);
lean_closure_set(v___f_632_, 2, v___x_631_);
v___x_633_ = l_Lean_Language_Lean_findCmdParsedSnap(v_initSnap_627_, v_text_628_, v_hoverPos_629_);
v___x_634_ = lean_unsigned_to_nat(0u);
v___x_635_ = 1;
v___x_636_ = lean_task_bind(v___x_633_, v___f_632_, v___x_634_, v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___boxed(lean_object* v_initSnap_637_, lean_object* v_text_638_, lean_object* v_hoverPos_639_, lean_object* v_includeStop_640_){
_start:
{
uint8_t v_includeStop_boxed_641_; lean_object* v_res_642_; 
v_includeStop_boxed_641_ = lean_unbox(v_includeStop_640_);
v_res_642_ = l_Lean_Language_Lean_findCmdDataAtPos(v_initSnap_637_, v_text_638_, v_hoverPos_639_, v_includeStop_boxed_641_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos___lam__0(lean_object* v_x_643_){
_start:
{
if (lean_obj_tag(v_x_643_) == 0)
{
lean_object* v___x_644_; 
v___x_644_ = lean_box(0);
return v___x_644_;
}
else
{
lean_object* v_val_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_653_; 
v_val_645_ = lean_ctor_get(v_x_643_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v_x_643_);
if (v_isSharedCheck_653_ == 0)
{
v___x_647_ = v_x_643_;
v_isShared_648_ = v_isSharedCheck_653_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_val_645_);
lean_dec(v_x_643_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_653_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_snd_649_; lean_object* v___x_651_; 
v_snd_649_ = lean_ctor_get(v_val_645_, 1);
lean_inc(v_snd_649_);
lean_dec(v_val_645_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v_snd_649_);
v___x_651_ = v___x_647_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_snd_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos(lean_object* v_initSnap_655_, lean_object* v_text_656_, lean_object* v_hoverPos_657_, uint8_t v_includeStop_658_){
_start:
{
lean_object* v___f_659_; lean_object* v___x_660_; lean_object* v___x_661_; uint8_t v___x_662_; lean_object* v___x_663_; 
v___f_659_ = ((lean_object*)(l_Lean_Language_Lean_findInfoTreeAtPos___closed__0));
v___x_660_ = l_Lean_Language_Lean_findCmdDataAtPos(v_initSnap_655_, v_text_656_, v_hoverPos_657_, v_includeStop_658_);
v___x_661_ = lean_unsigned_to_nat(0u);
v___x_662_ = 1;
v___x_663_ = lean_task_map(v___f_659_, v___x_660_, v___x_661_, v___x_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos___boxed(lean_object* v_initSnap_664_, lean_object* v_text_665_, lean_object* v_hoverPos_666_, lean_object* v_includeStop_667_){
_start:
{
uint8_t v_includeStop_boxed_668_; lean_object* v_res_669_; 
v_includeStop_boxed_668_ = lean_unbox(v_includeStop_667_);
v_res_669_ = l_Lean_Language_Lean_findInfoTreeAtPos(v_initSnap_664_, v_text_665_, v_hoverPos_666_, v_includeStop_boxed_668_);
return v_res_669_;
}
}
lean_object* runtime_initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Language_Lean_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Language_Lean_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Language_Lean_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Language_Lean_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Language_Lean_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Language_Lean_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Language_Lean_Util(builtin);
}
#ifdef __cplusplus
}
#endif
