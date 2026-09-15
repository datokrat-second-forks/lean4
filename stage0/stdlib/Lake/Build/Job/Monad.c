// Lean compiler output
// Module: Lake.Build.Job.Monad
// Imports: public import Lake.Build.Fetch
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
extern lean_object* l_Lake_instDataKindUnit;
lean_object* l_Lake_JobState_merge(lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer(lean_object*);
lean_object* lean_get_set_stdout(lean_object*);
lean_object* lean_get_set_stderr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_mix(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lake_cancelMessage;
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lake_pushLogEntry(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EquipT_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lake_JobAction_merge(uint8_t, uint8_t);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonadStateOfOfPure___redArg(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_wait(lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadStateOfOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadStateOfOfMonadLift___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EquipT_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_toFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_toFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_toFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_toFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadStateOfJobStateJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__0 = (const lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__0_value;
static lean_once_cell_t l_Lake_instMonadStateOfJobStateJobM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__1;
static const lean_closure_object l_Lake_instMonadStateOfJobStateJobM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EquipT_lift___boxed, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__2 = (const lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__2_value;
static const lean_closure_object l_Lake_instMonadStateOfJobStateJobM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__3 = (const lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__3_value;
static const lean_closure_object l_Lake_instMonadStateOfJobStateJobM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__4 = (const lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfJobStateJobM;
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadStateOfLogJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadStateOfLogJobM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadStateOfLogJobM___closed__0 = (const lean_object*)&l_Lake_instMonadStateOfLogJobM___closed__0_value;
static const lean_closure_object l_Lake_instMonadStateOfLogJobM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadStateOfLogJobM___lam__1___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadStateOfLogJobM___closed__1 = (const lean_object*)&l_Lake_instMonadStateOfLogJobM___closed__1_value;
static const lean_closure_object l_Lake_instMonadStateOfLogJobM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadStateOfLogJobM___lam__2___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadStateOfLogJobM___closed__2 = (const lean_object*)&l_Lake_instMonadStateOfLogJobM___closed__2_value;
static const lean_ctor_object l_Lake_instMonadStateOfLogJobM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadStateOfLogJobM___closed__0_value),((lean_object*)&l_Lake_instMonadStateOfLogJobM___closed__1_value),((lean_object*)&l_Lake_instMonadStateOfLogJobM___closed__2_value)}};
static const lean_object* l_Lake_instMonadStateOfLogJobM___closed__3 = (const lean_object*)&l_Lake_instMonadStateOfLogJobM___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadStateOfLogJobM = (const lean_object*)&l_Lake_instMonadStateOfLogJobM___closed__3_value;
static const lean_closure_object l_Lake_instMonadLogJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_pushLogEntry, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instMonadStateOfLogJobM___closed__3_value)} };
static const lean_object* l_Lake_instMonadLogJobM___closed__0 = (const lean_object*)&l_Lake_instMonadLogJobM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadLogJobM = (const lean_object*)&l_Lake_instMonadLogJobM___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMonadErrorJobM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorJobM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadErrorJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadErrorJobM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadErrorJobM___closed__0 = (const lean_object*)&l_Lake_instMonadErrorJobM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadErrorJobM = (const lean_object*)&l_Lake_instMonadErrorJobM___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instAlternativeJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instAlternativeJobM___closed__0 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__0_value;
static const lean_closure_object l_Lake_instAlternativeJobM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instAlternativeJobM___closed__1 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__1_value;
static const lean_closure_object l_Lake_instAlternativeJobM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instAlternativeJobM___closed__2 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__2_value;
static const lean_ctor_object l_Lake_instAlternativeJobM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instAlternativeJobM___closed__0_value),((lean_object*)&l_Lake_instAlternativeJobM___closed__1_value)}};
static const lean_object* l_Lake_instAlternativeJobM___closed__3 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__3_value;
static const lean_closure_object l_Lake_instAlternativeJobM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instMonad___redArg___lam__1, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__0_value),((lean_object*)&l_Lake_instAlternativeJobM___closed__2_value)} };
static const lean_object* l_Lake_instAlternativeJobM___closed__4 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__4_value;
static const lean_closure_object l_Lake_instAlternativeJobM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instMonad___redArg___lam__3, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__0_value),((lean_object*)&l_Lake_instAlternativeJobM___closed__2_value)} };
static const lean_object* l_Lake_instAlternativeJobM___closed__5 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__5_value;
static const lean_closure_object l_Lake_instAlternativeJobM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instMonad___redArg___lam__5, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__0_value),((lean_object*)&l_Lake_instAlternativeJobM___closed__4_value)} };
static const lean_object* l_Lake_instAlternativeJobM___closed__6 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__6_value;
static const lean_closure_object l_Lake_instAlternativeJobM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instMonad___redArg___lam__9, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lake_instAlternativeJobM___closed__3_value),((lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__0_value),((lean_object*)&l_Lake_instAlternativeJobM___closed__2_value)} };
static const lean_object* l_Lake_instAlternativeJobM___closed__7 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__7_value;
static lean_once_cell_t l_Lake_instAlternativeJobM___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instAlternativeJobM___closed__8;
static const lean_closure_object l_Lake_instAlternativeJobM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instPure___redArg___lam__0, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__0_value)} };
static const lean_object* l_Lake_instAlternativeJobM___closed__9 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__9_value;
static lean_once_cell_t l_Lake_instAlternativeJobM___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instAlternativeJobM___closed__10;
static lean_once_cell_t l_Lake_instAlternativeJobM___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instAlternativeJobM___closed__11;
static lean_once_cell_t l_Lake_instAlternativeJobM___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instAlternativeJobM___closed__12;
static lean_once_cell_t l_Lake_instAlternativeJobM___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instAlternativeJobM___closed__13;
static lean_once_cell_t l_Lake_instAlternativeJobM___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instAlternativeJobM___closed__14;
static lean_once_cell_t l_Lake_instAlternativeJobM___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instAlternativeJobM___closed__15;
static lean_once_cell_t l_Lake_instAlternativeJobM___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instAlternativeJobM___closed__16;
static const lean_closure_object l_Lake_instAlternativeJobM___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instAlternativeJobM___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instAlternativeJobM___closed__17 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__17_value;
static const lean_closure_object l_Lake_instAlternativeJobM___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instAlternativeJobM___lam__1___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instAlternativeJobM___closed__18 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__18_value;
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM;
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLogIOJobM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLogIOJobM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadLiftLogIOJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadLiftLogIOJobM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadLiftLogIOJobM___closed__0 = (const lean_object*)&l_Lake_instMonadLiftLogIOJobM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadLiftLogIOJobM = (const lean_object*)&l_Lake_instMonadLiftLogIOJobM___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_updateAction___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_updateAction___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_updateAction(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_updateAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTrace___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTrace___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setTrace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setTrace___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_newTrace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_newTrace___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_newTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_newTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_modifyTrace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_modifyTrace___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_modifyTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_modifyTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setTraceCaption___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setTraceCaption___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setTraceCaption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setTraceCaption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_takeTrace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<nil>"};
static const lean_object* l_Lake_takeTrace___redArg___closed__0 = (const lean_object*)&l_Lake_takeTrace___redArg___closed__0_value;
static lean_once_cell_t l_Lake_takeTrace___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_takeTrace___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lake_takeTrace___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeTrace___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_swapTrace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_swapTrace___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_swapTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_swapTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addTrace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addTrace___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addSubTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addSubTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addSubTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addSubTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadLiftSpawnMJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_JobM_runSpawnM___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadLiftSpawnMJobM___closed__0 = (const lean_object*)&l_Lake_instMonadLiftSpawnMJobM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadLiftSpawnMJobM = (const lean_object*)&l_Lake_instMonadLiftSpawnMJobM___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadLiftJobMFetchM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_FetchM_runJobM___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadLiftJobMFetchM___closed__0 = (const lean_object*)&l_Lake_instMonadLiftJobMFetchM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadLiftJobMFetchM = (const lean_object*)&l_Lake_instMonadLiftJobMFetchM___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadLiftFetchMJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_JobM_runFetchM___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadLiftFetchMJobM___closed__0 = (const lean_object*)&l_Lake_instMonadLiftFetchMJobM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadLiftFetchMJobM = (const lean_object*)&l_Lake_instMonadLiftFetchMJobM___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Job_bindTask___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindTask___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindTask(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_panic___at___00Lake_Job_sync_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_panic___at___00Lake_Job_sync_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lake_Job_sync_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lake_Job_sync_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Job_sync___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Job_sync___redArg___closed__0;
static const lean_array_object l_Lake_Job_sync___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Job_sync___redArg___closed__1 = (const lean_object*)&l_Lake_Job_sync___redArg___closed__1_value;
static lean_once_cell_t l_Lake_Job_sync___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Job_sync___redArg___closed__2;
static const lean_string_object l_Lake_Job_sync___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "stdout/stderr:\n"};
static const lean_object* l_Lake_Job_sync___redArg___closed__3 = (const lean_object*)&l_Lake_Job_sync___redArg___closed__3_value;
static const lean_string_object l_Lake_Job_sync___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lake_Job_sync___redArg___closed__4 = (const lean_object*)&l_Lake_Job_sync___redArg___closed__4_value;
static const lean_string_object l_Lake_Job_sync___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lake_Job_sync___redArg___closed__5 = (const lean_object*)&l_Lake_Job_sync___redArg___closed__5_value;
static const lean_string_object l_Lake_Job_sync___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lake_Job_sync___redArg___closed__6 = (const lean_object*)&l_Lake_Job_sync___redArg___closed__6_value;
static lean_once_cell_t l_Lake_Job_sync___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Job_sync___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_sync(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_sync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_async(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_async___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_wait___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_wait___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_wait(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_wait___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_await___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_await___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_await(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_await___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mapM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_bindM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_zipWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_add(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mix(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_mixList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mixList___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mixList(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_mixList_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mixArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mixArray___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mixArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_mixArray___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_collectList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectList___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectList(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_collectList_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectArray___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectArray___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1___redArg();
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Job_collectVector(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn___redArg(lean_object* v_f_1_, lean_object* v_a_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
v___x_9_ = lean_apply_7(v_f_1_, v_a_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn___redArg___boxed(lean_object* v_f_10_, lean_object* v_a_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lake_JobM_ofFn___redArg(v_f_10_, v_a_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec(v___y_13_);
lean_dec(v___y_12_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn(lean_object* v_00_u03b1_19_, lean_object* v_f_20_, lean_object* v_a_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___x_28_; 
lean_inc_ref(v___y_25_);
lean_inc(v___y_24_);
lean_inc(v___y_23_);
lean_inc(v___y_22_);
v___x_28_ = lean_apply_7(v_f_20_, v_a_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, lean_box(0));
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn___boxed(lean_object* v_00_u03b1_29_, lean_object* v_f_30_, lean_object* v_a_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_JobM_ofFn(v_00_u03b1_29_, v_f_30_, v_a_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_);
lean_dec_ref(v___y_35_);
lean_dec(v___y_34_);
lean_dec(v___y_33_);
lean_dec(v___y_32_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_toFn___redArg(lean_object* v_self_39_, lean_object* v_fetch_40_, lean_object* v_pkg_x3f_41_, lean_object* v_stack_42_, lean_object* v_store_43_, lean_object* v_ctx_44_, lean_object* v_s_45_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_apply_7(v_self_39_, v_fetch_40_, v_pkg_x3f_41_, v_stack_42_, v_store_43_, v_ctx_44_, v_s_45_, lean_box(0));
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_toFn___redArg___boxed(lean_object* v_self_48_, lean_object* v_fetch_49_, lean_object* v_pkg_x3f_50_, lean_object* v_stack_51_, lean_object* v_store_52_, lean_object* v_ctx_53_, lean_object* v_s_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lake_JobM_toFn___redArg(v_self_48_, v_fetch_49_, v_pkg_x3f_50_, v_stack_51_, v_store_52_, v_ctx_53_, v_s_54_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_toFn(lean_object* v_00_u03b1_57_, lean_object* v_self_58_, lean_object* v_fetch_59_, lean_object* v_pkg_x3f_60_, lean_object* v_stack_61_, lean_object* v_store_62_, lean_object* v_ctx_63_, lean_object* v_s_64_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_apply_7(v_self_58_, v_fetch_59_, v_pkg_x3f_60_, v_stack_61_, v_store_62_, v_ctx_63_, v_s_64_, lean_box(0));
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_toFn___boxed(lean_object* v_00_u03b1_67_, lean_object* v_self_68_, lean_object* v_fetch_69_, lean_object* v_pkg_x3f_70_, lean_object* v_stack_71_, lean_object* v_store_72_, lean_object* v_ctx_73_, lean_object* v_s_74_, lean_object* v___y_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lake_JobM_toFn(v_00_u03b1_67_, v_self_68_, v_fetch_69_, v_pkg_x3f_70_, v_stack_71_, v_store_72_, v_ctx_73_, v_s_74_);
return v_res_76_;
}
}
static lean_object* _init_l_Lake_instMonadStateOfJobStateJobM___closed__1(void){
_start:
{
lean_object* v___f_78_; lean_object* v___x_79_; 
v___f_78_ = ((lean_object*)(l_Lake_instMonadStateOfJobStateJobM___closed__0));
v___x_79_ = l_Lake_EStateT_instMonadStateOfOfPure___redArg(v___f_78_);
return v___x_79_;
}
}
static lean_object* _init_l_Lake_instMonadStateOfJobStateJobM(void){
_start:
{
lean_object* v___x_83_; lean_object* v_get_84_; lean_object* v_set_85_; lean_object* v_modifyGet_86_; lean_object* v___x_87_; lean_object* v___f_88_; lean_object* v___x_89_; lean_object* v___f_90_; lean_object* v___f_91_; lean_object* v___x_92_; lean_object* v___f_93_; lean_object* v___f_94_; lean_object* v___x_95_; lean_object* v___f_96_; lean_object* v___f_97_; lean_object* v___x_98_; lean_object* v___f_99_; lean_object* v___f_100_; lean_object* v___x_101_; lean_object* v___f_102_; lean_object* v___f_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_83_ = lean_obj_once(&l_Lake_instMonadStateOfJobStateJobM___closed__1, &l_Lake_instMonadStateOfJobStateJobM___closed__1_once, _init_l_Lake_instMonadStateOfJobStateJobM___closed__1);
v_get_84_ = lean_ctor_get(v___x_83_, 0);
v_set_85_ = lean_ctor_get(v___x_83_, 1);
v_modifyGet_86_ = lean_ctor_get(v___x_83_, 2);
v___x_87_ = ((lean_object*)(l_Lake_instMonadStateOfJobStateJobM___closed__2));
v___f_88_ = ((lean_object*)(l_Lake_instMonadStateOfJobStateJobM___closed__3));
v___x_89_ = ((lean_object*)(l_Lake_instMonadStateOfJobStateJobM___closed__4));
lean_inc(v_set_85_);
v___f_90_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_90_, 0, v_set_85_);
lean_closure_set(v___f_90_, 1, v___f_88_);
lean_inc(v_modifyGet_86_);
v___f_91_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_91_, 0, v_modifyGet_86_);
lean_closure_set(v___f_91_, 1, v___f_88_);
lean_inc(v_get_84_);
v___x_92_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_92_, 0, lean_box(0));
lean_closure_set(v___x_92_, 1, v_get_84_);
v___f_93_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_93_, 0, v___f_90_);
lean_closure_set(v___f_93_, 1, v___x_89_);
v___f_94_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_94_, 0, v___f_91_);
lean_closure_set(v___f_94_, 1, v___x_89_);
v___x_95_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_95_, 0, lean_box(0));
lean_closure_set(v___x_95_, 1, lean_box(0));
lean_closure_set(v___x_95_, 2, lean_box(0));
lean_closure_set(v___x_95_, 3, lean_box(0));
lean_closure_set(v___x_95_, 4, v___x_92_);
v___f_96_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_96_, 0, v___f_93_);
lean_closure_set(v___f_96_, 1, v___f_88_);
v___f_97_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_97_, 0, v___f_94_);
lean_closure_set(v___f_97_, 1, v___f_88_);
v___x_98_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_98_, 0, lean_box(0));
lean_closure_set(v___x_98_, 1, v___x_95_);
v___f_99_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_99_, 0, v___f_96_);
lean_closure_set(v___f_99_, 1, v___f_88_);
v___f_100_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_100_, 0, v___f_97_);
lean_closure_set(v___f_100_, 1, v___f_88_);
v___x_101_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_101_, 0, lean_box(0));
lean_closure_set(v___x_101_, 1, v___x_98_);
v___f_102_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_102_, 0, v___f_99_);
lean_closure_set(v___f_102_, 1, v___x_87_);
v___f_103_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_103_, 0, v___f_100_);
lean_closure_set(v___f_103_, 1, v___x_87_);
v___x_104_ = lean_alloc_closure((void*)(l_Lake_EquipT_lift___boxed), 5, 4);
lean_closure_set(v___x_104_, 0, lean_box(0));
lean_closure_set(v___x_104_, 1, lean_box(0));
lean_closure_set(v___x_104_, 2, lean_box(0));
lean_closure_set(v___x_104_, 3, v___x_101_);
v___x_105_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___f_102_);
lean_ctor_set(v___x_105_, 2, v___f_103_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__0(lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v_log_113_; lean_object* v___x_114_; 
v_log_113_ = lean_ctor_get(v___y_111_, 0);
lean_inc_ref(v_log_113_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v_log_113_);
lean_ctor_set(v___x_114_, 1, v___y_111_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__0___boxed(lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lake_instMonadStateOfLogJobM___lam__0(v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec(v___y_117_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__1(lean_object* v_log_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
uint8_t v_action_131_; uint8_t v_wantsRebuild_132_; lean_object* v_trace_133_; lean_object* v_buildTime_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_143_; 
v_action_131_ = lean_ctor_get_uint8(v___y_129_, sizeof(void*)*3);
v_wantsRebuild_132_ = lean_ctor_get_uint8(v___y_129_, sizeof(void*)*3 + 1);
v_trace_133_ = lean_ctor_get(v___y_129_, 1);
v_buildTime_134_ = lean_ctor_get(v___y_129_, 2);
v_isSharedCheck_143_ = !lean_is_exclusive(v___y_129_);
if (v_isSharedCheck_143_ == 0)
{
lean_object* v_unused_144_; 
v_unused_144_ = lean_ctor_get(v___y_129_, 0);
lean_dec(v_unused_144_);
v___x_136_ = v___y_129_;
v_isShared_137_ = v_isSharedCheck_143_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_buildTime_134_);
lean_inc(v_trace_133_);
lean_dec(v___y_129_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_143_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_138_ = lean_box(0);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 0, v_log_123_);
v___x_140_ = v___x_136_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_log_123_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v_trace_133_);
lean_ctor_set(v_reuseFailAlloc_142_, 2, v_buildTime_134_);
lean_ctor_set_uint8(v_reuseFailAlloc_142_, sizeof(void*)*3, v_action_131_);
lean_ctor_set_uint8(v_reuseFailAlloc_142_, sizeof(void*)*3 + 1, v_wantsRebuild_132_);
v___x_140_ = v_reuseFailAlloc_142_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
lean_object* v___x_141_; 
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_138_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
return v___x_141_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__1___boxed(lean_object* v_log_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lake_instMonadStateOfLogJobM___lam__1(v_log_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
lean_dec_ref(v___y_150_);
lean_dec(v___y_149_);
lean_dec(v___y_148_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__2(lean_object* v_00_u03b1_154_, lean_object* v_f_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v_log_163_; uint8_t v_action_164_; uint8_t v_wantsRebuild_165_; lean_object* v_trace_166_; lean_object* v_buildTime_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_184_; 
v_log_163_ = lean_ctor_get(v___y_161_, 0);
v_action_164_ = lean_ctor_get_uint8(v___y_161_, sizeof(void*)*3);
v_wantsRebuild_165_ = lean_ctor_get_uint8(v___y_161_, sizeof(void*)*3 + 1);
v_trace_166_ = lean_ctor_get(v___y_161_, 1);
v_buildTime_167_ = lean_ctor_get(v___y_161_, 2);
v_isSharedCheck_184_ = !lean_is_exclusive(v___y_161_);
if (v_isSharedCheck_184_ == 0)
{
v___x_169_ = v___y_161_;
v_isShared_170_ = v_isSharedCheck_184_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_buildTime_167_);
lean_inc(v_trace_166_);
lean_inc(v_log_163_);
lean_dec(v___y_161_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_184_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v_fst_172_; lean_object* v_snd_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_183_; 
v___x_171_ = lean_apply_1(v_f_155_, v_log_163_);
v_fst_172_ = lean_ctor_get(v___x_171_, 0);
v_snd_173_ = lean_ctor_get(v___x_171_, 1);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_183_ == 0)
{
v___x_175_ = v___x_171_;
v_isShared_176_ = v_isSharedCheck_183_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_snd_173_);
lean_inc(v_fst_172_);
lean_dec(v___x_171_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_183_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v_snd_173_);
v___x_178_ = v___x_169_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_snd_173_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v_trace_166_);
lean_ctor_set(v_reuseFailAlloc_182_, 2, v_buildTime_167_);
lean_ctor_set_uint8(v_reuseFailAlloc_182_, sizeof(void*)*3, v_action_164_);
lean_ctor_set_uint8(v_reuseFailAlloc_182_, sizeof(void*)*3 + 1, v_wantsRebuild_165_);
v___x_178_ = v_reuseFailAlloc_182_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
lean_object* v___x_180_; 
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 1, v___x_178_);
v___x_180_ = v___x_175_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_fst_172_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__2___boxed(lean_object* v_00_u03b1_185_, lean_object* v_f_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lake_instMonadStateOfLogJobM___lam__2(v_00_u03b1_185_, v_f_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
lean_dec_ref(v___y_191_);
lean_dec(v___y_190_);
lean_dec(v___y_189_);
lean_dec(v___y_188_);
lean_dec_ref(v___y_187_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorJobM___lam__0(lean_object* v_00_u03b1_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_log_215_; uint8_t v_action_216_; uint8_t v_wantsRebuild_217_; lean_object* v_trace_218_; lean_object* v_buildTime_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_231_; 
v_log_215_ = lean_ctor_get(v___y_213_, 0);
v_action_216_ = lean_ctor_get_uint8(v___y_213_, sizeof(void*)*3);
v_wantsRebuild_217_ = lean_ctor_get_uint8(v___y_213_, sizeof(void*)*3 + 1);
v_trace_218_ = lean_ctor_get(v___y_213_, 1);
v_buildTime_219_ = lean_ctor_get(v___y_213_, 2);
v_isSharedCheck_231_ = !lean_is_exclusive(v___y_213_);
if (v_isSharedCheck_231_ == 0)
{
v___x_221_ = v___y_213_;
v_isShared_222_ = v_isSharedCheck_231_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_buildTime_219_);
lean_inc(v_trace_218_);
lean_inc(v_log_215_);
lean_dec(v___y_213_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_231_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
uint8_t v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_228_; 
v___x_223_ = 3;
v___x_224_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_224_, 0, v___y_207_);
lean_ctor_set_uint8(v___x_224_, sizeof(void*)*1, v___x_223_);
v___x_225_ = lean_array_get_size(v_log_215_);
v___x_226_ = lean_array_push(v_log_215_, v___x_224_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v___x_226_);
v___x_228_ = v___x_221_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_trace_218_);
lean_ctor_set(v_reuseFailAlloc_230_, 2, v_buildTime_219_);
lean_ctor_set_uint8(v_reuseFailAlloc_230_, sizeof(void*)*3, v_action_216_);
lean_ctor_set_uint8(v_reuseFailAlloc_230_, sizeof(void*)*3 + 1, v_wantsRebuild_217_);
v___x_228_ = v_reuseFailAlloc_230_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_229_; 
v___x_229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_225_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
return v___x_229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorJobM___lam__0___boxed(lean_object* v_00_u03b1_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lake_instMonadErrorJobM___lam__0(v_00_u03b1_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
lean_dec_ref(v___y_238_);
lean_dec(v___y_237_);
lean_dec(v___y_236_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__0(lean_object* v_00_u03b1_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v_log_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_log_252_ = lean_ctor_get(v___y_250_, 0);
v___x_253_ = lean_array_get_size(v_log_252_);
v___x_254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___y_250_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__0___boxed(lean_object* v_00_u03b1_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lake_instAlternativeJobM___lam__0(v_00_u03b1_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec(v___y_259_);
lean_dec(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__1(lean_object* v_00_u03b1_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
lean_object* v___x_274_; 
lean_inc_ref(v___y_271_);
lean_inc(v___y_270_);
lean_inc(v___y_269_);
lean_inc(v___y_268_);
lean_inc_ref(v___y_267_);
v___x_274_ = lean_apply_7(v___y_265_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, lean_box(0));
if (lean_obj_tag(v___x_274_) == 0)
{
lean_dec_ref(v___y_267_);
lean_dec_ref(v___y_266_);
return v___x_274_;
}
else
{
lean_object* v_a_275_; lean_object* v_a_276_; lean_object* v_log_277_; uint8_t v_action_278_; uint8_t v_wantsRebuild_279_; lean_object* v_trace_280_; lean_object* v_buildTime_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_291_; 
v_a_275_ = lean_ctor_get(v___x_274_, 1);
lean_inc(v_a_275_);
v_a_276_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_276_);
lean_dec_ref_known(v___x_274_, 2);
v_log_277_ = lean_ctor_get(v_a_275_, 0);
v_action_278_ = lean_ctor_get_uint8(v_a_275_, sizeof(void*)*3);
v_wantsRebuild_279_ = lean_ctor_get_uint8(v_a_275_, sizeof(void*)*3 + 1);
v_trace_280_ = lean_ctor_get(v_a_275_, 1);
v_buildTime_281_ = lean_ctor_get(v_a_275_, 2);
v_isSharedCheck_291_ = !lean_is_exclusive(v_a_275_);
if (v_isSharedCheck_291_ == 0)
{
v___x_283_ = v_a_275_;
v_isShared_284_ = v_isSharedCheck_291_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_buildTime_281_);
lean_inc(v_trace_280_);
lean_inc(v_log_277_);
lean_dec(v_a_275_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_291_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_285_; lean_object* v___x_287_; 
v___x_285_ = l_Array_shrink___redArg(v_log_277_, v_a_276_);
lean_dec(v_a_276_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_285_);
v___x_287_ = v___x_283_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v_trace_280_);
lean_ctor_set(v_reuseFailAlloc_290_, 2, v_buildTime_281_);
lean_ctor_set_uint8(v_reuseFailAlloc_290_, sizeof(void*)*3, v_action_278_);
lean_ctor_set_uint8(v_reuseFailAlloc_290_, sizeof(void*)*3 + 1, v_wantsRebuild_279_);
v___x_287_ = v_reuseFailAlloc_290_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_box(0);
lean_inc_ref(v___y_271_);
lean_inc(v___y_270_);
lean_inc(v___y_269_);
lean_inc(v___y_268_);
v___x_289_ = lean_apply_8(v___y_266_, v___x_288_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___x_287_, lean_box(0));
return v___x_289_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__1___boxed(lean_object* v_00_u03b1_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lake_instAlternativeJobM___lam__1(v_00_u03b1_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec(v___y_298_);
lean_dec(v___y_297_);
lean_dec(v___y_296_);
return v_res_302_;
}
}
static lean_object* _init_l_Lake_instAlternativeJobM___closed__8(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = ((lean_object*)(l_Lake_instAlternativeJobM___closed__3));
v___x_323_ = l_Lake_EStateT_instFunctor___redArg(v___x_322_);
return v___x_323_;
}
}
static lean_object* _init_l_Lake_instAlternativeJobM___closed__10(void){
_start:
{
lean_object* v___f_326_; lean_object* v___f_327_; lean_object* v___f_328_; lean_object* v___f_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___f_326_ = ((lean_object*)(l_Lake_instAlternativeJobM___closed__5));
v___f_327_ = ((lean_object*)(l_Lake_instAlternativeJobM___closed__6));
v___f_328_ = ((lean_object*)(l_Lake_instAlternativeJobM___closed__7));
v___f_329_ = ((lean_object*)(l_Lake_instAlternativeJobM___closed__9));
v___x_330_ = lean_obj_once(&l_Lake_instAlternativeJobM___closed__8, &l_Lake_instAlternativeJobM___closed__8_once, _init_l_Lake_instAlternativeJobM___closed__8);
v___x_331_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
lean_ctor_set(v___x_331_, 1, v___f_329_);
lean_ctor_set(v___x_331_, 2, v___f_328_);
lean_ctor_set(v___x_331_, 3, v___f_327_);
lean_ctor_set(v___x_331_, 4, v___f_326_);
return v___x_331_;
}
}
static lean_object* _init_l_Lake_instAlternativeJobM___closed__11(void){
_start:
{
lean_object* v___f_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___f_332_ = ((lean_object*)(l_Lake_instAlternativeJobM___closed__4));
v___x_333_ = lean_obj_once(&l_Lake_instAlternativeJobM___closed__10, &l_Lake_instAlternativeJobM___closed__10_once, _init_l_Lake_instAlternativeJobM___closed__10);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___f_332_);
return v___x_334_;
}
}
static lean_object* _init_l_Lake_instAlternativeJobM___closed__12(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_obj_once(&l_Lake_instAlternativeJobM___closed__11, &l_Lake_instAlternativeJobM___closed__11_once, _init_l_Lake_instAlternativeJobM___closed__11);
v___x_336_ = l_ReaderT_instMonad___redArg(v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l_Lake_instAlternativeJobM___closed__13(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_obj_once(&l_Lake_instAlternativeJobM___closed__12, &l_Lake_instAlternativeJobM___closed__12_once, _init_l_Lake_instAlternativeJobM___closed__12);
v___x_338_ = l_StateRefT_x27_instMonad___redArg(v___x_337_);
return v___x_338_;
}
}
static lean_object* _init_l_Lake_instAlternativeJobM___closed__14(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_obj_once(&l_Lake_instAlternativeJobM___closed__13, &l_Lake_instAlternativeJobM___closed__13_once, _init_l_Lake_instAlternativeJobM___closed__13);
v___x_340_ = l_ReaderT_instMonad___redArg(v___x_339_);
return v___x_340_;
}
}
static lean_object* _init_l_Lake_instAlternativeJobM___closed__15(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_obj_once(&l_Lake_instAlternativeJobM___closed__14, &l_Lake_instAlternativeJobM___closed__14_once, _init_l_Lake_instAlternativeJobM___closed__14);
v___x_342_ = l_ReaderT_instMonad___redArg(v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_l_Lake_instAlternativeJobM___closed__16(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_obj_once(&l_Lake_instAlternativeJobM___closed__15, &l_Lake_instAlternativeJobM___closed__15_once, _init_l_Lake_instAlternativeJobM___closed__15);
v___x_344_ = l_Lake_EquipT_instMonad___redArg(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l_Lake_instAlternativeJobM(void){
_start:
{
lean_object* v___x_347_; lean_object* v_toApplicative_348_; lean_object* v___f_349_; lean_object* v___f_350_; lean_object* v___x_351_; 
v___x_347_ = lean_obj_once(&l_Lake_instAlternativeJobM___closed__16, &l_Lake_instAlternativeJobM___closed__16_once, _init_l_Lake_instAlternativeJobM___closed__16);
v_toApplicative_348_ = lean_ctor_get(v___x_347_, 0);
v___f_349_ = ((lean_object*)(l_Lake_instAlternativeJobM___closed__17));
v___f_350_ = ((lean_object*)(l_Lake_instAlternativeJobM___closed__18));
lean_inc_ref(v_toApplicative_348_);
v___x_351_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_351_, 0, v_toApplicative_348_);
lean_ctor_set(v___x_351_, 1, v___f_349_);
lean_ctor_set(v___x_351_, 2, v___f_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLogIOJobM___lam__0(lean_object* v_00_u03b1_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v_log_361_; uint8_t v_action_362_; uint8_t v_wantsRebuild_363_; lean_object* v_trace_364_; lean_object* v_buildTime_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_394_; 
v_log_361_ = lean_ctor_get(v___y_359_, 0);
v_action_362_ = lean_ctor_get_uint8(v___y_359_, sizeof(void*)*3);
v_wantsRebuild_363_ = lean_ctor_get_uint8(v___y_359_, sizeof(void*)*3 + 1);
v_trace_364_ = lean_ctor_get(v___y_359_, 1);
v_buildTime_365_ = lean_ctor_get(v___y_359_, 2);
v_isSharedCheck_394_ = !lean_is_exclusive(v___y_359_);
if (v_isSharedCheck_394_ == 0)
{
v___x_367_ = v___y_359_;
v_isShared_368_ = v_isSharedCheck_394_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_buildTime_365_);
lean_inc(v_trace_364_);
lean_inc(v_log_361_);
lean_dec(v___y_359_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_394_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; 
v___x_369_ = lean_apply_2(v___y_353_, v_log_361_, lean_box(0));
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_381_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_a_371_ = lean_ctor_get(v___x_369_, 1);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_381_ == 0)
{
v___x_373_ = v___x_369_;
v_isShared_374_ = v_isSharedCheck_381_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_381_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v_a_371_);
v___x_376_ = v___x_367_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_371_);
lean_ctor_set(v_reuseFailAlloc_380_, 1, v_trace_364_);
lean_ctor_set(v_reuseFailAlloc_380_, 2, v_buildTime_365_);
lean_ctor_set_uint8(v_reuseFailAlloc_380_, sizeof(void*)*3, v_action_362_);
lean_ctor_set_uint8(v_reuseFailAlloc_380_, sizeof(void*)*3 + 1, v_wantsRebuild_363_);
v___x_376_ = v_reuseFailAlloc_380_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_378_; 
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v___x_376_);
v___x_378_ = v___x_373_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_370_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
else
{
lean_object* v_a_382_; lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_393_; 
v_a_382_ = lean_ctor_get(v___x_369_, 0);
v_a_383_ = lean_ctor_get(v___x_369_, 1);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_393_ == 0)
{
v___x_385_ = v___x_369_;
v_isShared_386_ = v_isSharedCheck_393_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_inc(v_a_382_);
lean_dec(v___x_369_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_393_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_388_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v_a_383_);
v___x_388_ = v___x_367_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_383_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v_trace_364_);
lean_ctor_set(v_reuseFailAlloc_392_, 2, v_buildTime_365_);
lean_ctor_set_uint8(v_reuseFailAlloc_392_, sizeof(void*)*3, v_action_362_);
lean_ctor_set_uint8(v_reuseFailAlloc_392_, sizeof(void*)*3 + 1, v_wantsRebuild_363_);
v___x_388_ = v_reuseFailAlloc_392_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
lean_object* v___x_390_; 
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 1, v___x_388_);
v___x_390_ = v___x_385_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_382_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v___x_388_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLogIOJobM___lam__0___boxed(lean_object* v_00_u03b1_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lake_instMonadLiftLogIOJobM___lam__0(v_00_u03b1_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec(v___y_399_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lake_updateAction___redArg(uint8_t v_action_407_, lean_object* v___y_408_){
_start:
{
lean_object* v_log_410_; uint8_t v_action_411_; uint8_t v_wantsRebuild_412_; lean_object* v_trace_413_; lean_object* v_buildTime_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_424_; 
v_log_410_ = lean_ctor_get(v___y_408_, 0);
v_action_411_ = lean_ctor_get_uint8(v___y_408_, sizeof(void*)*3);
v_wantsRebuild_412_ = lean_ctor_get_uint8(v___y_408_, sizeof(void*)*3 + 1);
v_trace_413_ = lean_ctor_get(v___y_408_, 1);
v_buildTime_414_ = lean_ctor_get(v___y_408_, 2);
v_isSharedCheck_424_ = !lean_is_exclusive(v___y_408_);
if (v_isSharedCheck_424_ == 0)
{
v___x_416_ = v___y_408_;
v_isShared_417_ = v_isSharedCheck_424_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_buildTime_414_);
lean_inc(v_trace_413_);
lean_inc(v_log_410_);
lean_dec(v___y_408_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_424_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_418_; uint8_t v___x_419_; lean_object* v___x_421_; 
v___x_418_ = lean_box(0);
v___x_419_ = l_Lake_JobAction_merge(v_action_411_, v_action_407_);
if (v_isShared_417_ == 0)
{
v___x_421_ = v___x_416_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_log_410_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_trace_413_);
lean_ctor_set(v_reuseFailAlloc_423_, 2, v_buildTime_414_);
lean_ctor_set_uint8(v_reuseFailAlloc_423_, sizeof(void*)*3 + 1, v_wantsRebuild_412_);
v___x_421_ = v_reuseFailAlloc_423_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
lean_object* v___x_422_; 
lean_ctor_set_uint8(v___x_421_, sizeof(void*)*3, v___x_419_);
v___x_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_422_, 0, v___x_418_);
lean_ctor_set(v___x_422_, 1, v___x_421_);
return v___x_422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_updateAction___redArg___boxed(lean_object* v_action_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
uint8_t v_action_boxed_428_; lean_object* v_res_429_; 
v_action_boxed_428_ = lean_unbox(v_action_425_);
v_res_429_ = l_Lake_updateAction___redArg(v_action_boxed_428_, v___y_426_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lake_updateAction(uint8_t v_action_430_, lean_object* v_a_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_log_438_; uint8_t v_action_439_; uint8_t v_wantsRebuild_440_; lean_object* v_trace_441_; lean_object* v_buildTime_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_452_; 
v_log_438_ = lean_ctor_get(v___y_436_, 0);
v_action_439_ = lean_ctor_get_uint8(v___y_436_, sizeof(void*)*3);
v_wantsRebuild_440_ = lean_ctor_get_uint8(v___y_436_, sizeof(void*)*3 + 1);
v_trace_441_ = lean_ctor_get(v___y_436_, 1);
v_buildTime_442_ = lean_ctor_get(v___y_436_, 2);
v_isSharedCheck_452_ = !lean_is_exclusive(v___y_436_);
if (v_isSharedCheck_452_ == 0)
{
v___x_444_ = v___y_436_;
v_isShared_445_ = v_isSharedCheck_452_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_buildTime_442_);
lean_inc(v_trace_441_);
lean_inc(v_log_438_);
lean_dec(v___y_436_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_452_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; uint8_t v___x_447_; lean_object* v___x_449_; 
v___x_446_ = lean_box(0);
v___x_447_ = l_Lake_JobAction_merge(v_action_439_, v_action_430_);
if (v_isShared_445_ == 0)
{
v___x_449_ = v___x_444_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_log_438_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_trace_441_);
lean_ctor_set(v_reuseFailAlloc_451_, 2, v_buildTime_442_);
lean_ctor_set_uint8(v_reuseFailAlloc_451_, sizeof(void*)*3 + 1, v_wantsRebuild_440_);
v___x_449_ = v_reuseFailAlloc_451_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; 
lean_ctor_set_uint8(v___x_449_, sizeof(void*)*3, v___x_447_);
v___x_450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_446_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
return v___x_450_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_updateAction___boxed(lean_object* v_action_453_, lean_object* v_a_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
uint8_t v_action_boxed_461_; lean_object* v_res_462_; 
v_action_boxed_461_ = lean_unbox(v_action_453_);
v_res_462_ = l_Lake_updateAction(v_action_boxed_461_, v_a_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec(v___y_457_);
lean_dec(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v_a_454_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrace___redArg(lean_object* v___y_463_){
_start:
{
lean_object* v_trace_465_; lean_object* v___x_466_; 
v_trace_465_ = lean_ctor_get(v___y_463_, 1);
lean_inc_ref(v_trace_465_);
v___x_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_466_, 0, v_trace_465_);
lean_ctor_set(v___x_466_, 1, v___y_463_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrace___redArg___boxed(lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lake_getTrace___redArg(v___y_467_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrace(lean_object* v_a_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_){
_start:
{
lean_object* v_trace_477_; lean_object* v___x_478_; 
v_trace_477_ = lean_ctor_get(v___y_475_, 1);
lean_inc_ref(v_trace_477_);
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v_trace_477_);
lean_ctor_set(v___x_478_, 1, v___y_475_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrace___boxed(lean_object* v_a_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lake_getTrace(v_a_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v_a_479_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lake_setTrace___redArg(lean_object* v_trace_487_, lean_object* v___y_488_){
_start:
{
lean_object* v_log_490_; uint8_t v_action_491_; uint8_t v_wantsRebuild_492_; lean_object* v_buildTime_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_502_; 
v_log_490_ = lean_ctor_get(v___y_488_, 0);
v_action_491_ = lean_ctor_get_uint8(v___y_488_, sizeof(void*)*3);
v_wantsRebuild_492_ = lean_ctor_get_uint8(v___y_488_, sizeof(void*)*3 + 1);
v_buildTime_493_ = lean_ctor_get(v___y_488_, 2);
v_isSharedCheck_502_ = !lean_is_exclusive(v___y_488_);
if (v_isSharedCheck_502_ == 0)
{
lean_object* v_unused_503_; 
v_unused_503_ = lean_ctor_get(v___y_488_, 1);
lean_dec(v_unused_503_);
v___x_495_ = v___y_488_;
v_isShared_496_ = v_isSharedCheck_502_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_buildTime_493_);
lean_inc(v_log_490_);
lean_dec(v___y_488_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_502_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; lean_object* v___x_499_; 
v___x_497_ = lean_box(0);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 1, v_trace_487_);
v___x_499_ = v___x_495_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_log_490_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v_trace_487_);
lean_ctor_set(v_reuseFailAlloc_501_, 2, v_buildTime_493_);
lean_ctor_set_uint8(v_reuseFailAlloc_501_, sizeof(void*)*3, v_action_491_);
lean_ctor_set_uint8(v_reuseFailAlloc_501_, sizeof(void*)*3 + 1, v_wantsRebuild_492_);
v___x_499_ = v_reuseFailAlloc_501_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
lean_object* v___x_500_; 
v___x_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_497_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
return v___x_500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_setTrace___redArg___boxed(lean_object* v_trace_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lake_setTrace___redArg(v_trace_504_, v___y_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lake_setTrace(lean_object* v_trace_508_, lean_object* v_a_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_log_516_; uint8_t v_action_517_; uint8_t v_wantsRebuild_518_; lean_object* v_buildTime_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_528_; 
v_log_516_ = lean_ctor_get(v___y_514_, 0);
v_action_517_ = lean_ctor_get_uint8(v___y_514_, sizeof(void*)*3);
v_wantsRebuild_518_ = lean_ctor_get_uint8(v___y_514_, sizeof(void*)*3 + 1);
v_buildTime_519_ = lean_ctor_get(v___y_514_, 2);
v_isSharedCheck_528_ = !lean_is_exclusive(v___y_514_);
if (v_isSharedCheck_528_ == 0)
{
lean_object* v_unused_529_; 
v_unused_529_ = lean_ctor_get(v___y_514_, 1);
lean_dec(v_unused_529_);
v___x_521_ = v___y_514_;
v_isShared_522_ = v_isSharedCheck_528_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_buildTime_519_);
lean_inc(v_log_516_);
lean_dec(v___y_514_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_528_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; lean_object* v___x_525_; 
v___x_523_ = lean_box(0);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 1, v_trace_508_);
v___x_525_ = v___x_521_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_log_516_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v_trace_508_);
lean_ctor_set(v_reuseFailAlloc_527_, 2, v_buildTime_519_);
lean_ctor_set_uint8(v_reuseFailAlloc_527_, sizeof(void*)*3, v_action_517_);
lean_ctor_set_uint8(v_reuseFailAlloc_527_, sizeof(void*)*3 + 1, v_wantsRebuild_518_);
v___x_525_ = v_reuseFailAlloc_527_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
lean_object* v___x_526_; 
v___x_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_523_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
return v___x_526_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_setTrace___boxed(lean_object* v_trace_530_, lean_object* v_a_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lake_setTrace(v_trace_530_, v_a_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec(v___y_533_);
lean_dec(v___y_532_);
lean_dec_ref(v_a_531_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lake_newTrace___redArg(lean_object* v_caption_539_, lean_object* v___y_540_){
_start:
{
lean_object* v_log_542_; uint8_t v_action_543_; uint8_t v_wantsRebuild_544_; lean_object* v_buildTime_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_555_; 
v_log_542_ = lean_ctor_get(v___y_540_, 0);
v_action_543_ = lean_ctor_get_uint8(v___y_540_, sizeof(void*)*3);
v_wantsRebuild_544_ = lean_ctor_get_uint8(v___y_540_, sizeof(void*)*3 + 1);
v_buildTime_545_ = lean_ctor_get(v___y_540_, 2);
v_isSharedCheck_555_ = !lean_is_exclusive(v___y_540_);
if (v_isSharedCheck_555_ == 0)
{
lean_object* v_unused_556_; 
v_unused_556_ = lean_ctor_get(v___y_540_, 1);
lean_dec(v_unused_556_);
v___x_547_ = v___y_540_;
v_isShared_548_ = v_isSharedCheck_555_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_buildTime_545_);
lean_inc(v_log_542_);
lean_dec(v___y_540_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_555_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_552_; 
v___x_549_ = l_Lake_BuildTrace_nil(v_caption_539_);
v___x_550_ = lean_box(0);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 1, v___x_549_);
v___x_552_ = v___x_547_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_log_542_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_buildTime_545_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, sizeof(void*)*3, v_action_543_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, sizeof(void*)*3 + 1, v_wantsRebuild_544_);
v___x_552_ = v_reuseFailAlloc_554_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
lean_object* v___x_553_; 
v___x_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_550_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
return v___x_553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_newTrace___redArg___boxed(lean_object* v_caption_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lake_newTrace___redArg(v_caption_557_, v___y_558_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lake_newTrace(lean_object* v_caption_561_, lean_object* v_a_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v_log_569_; uint8_t v_action_570_; uint8_t v_wantsRebuild_571_; lean_object* v_buildTime_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_582_; 
v_log_569_ = lean_ctor_get(v___y_567_, 0);
v_action_570_ = lean_ctor_get_uint8(v___y_567_, sizeof(void*)*3);
v_wantsRebuild_571_ = lean_ctor_get_uint8(v___y_567_, sizeof(void*)*3 + 1);
v_buildTime_572_ = lean_ctor_get(v___y_567_, 2);
v_isSharedCheck_582_ = !lean_is_exclusive(v___y_567_);
if (v_isSharedCheck_582_ == 0)
{
lean_object* v_unused_583_; 
v_unused_583_ = lean_ctor_get(v___y_567_, 1);
lean_dec(v_unused_583_);
v___x_574_ = v___y_567_;
v_isShared_575_ = v_isSharedCheck_582_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_buildTime_572_);
lean_inc(v_log_569_);
lean_dec(v___y_567_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_582_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_576_ = l_Lake_BuildTrace_nil(v_caption_561_);
v___x_577_ = lean_box(0);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 1, v___x_576_);
v___x_579_ = v___x_574_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_log_569_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_581_, 2, v_buildTime_572_);
lean_ctor_set_uint8(v_reuseFailAlloc_581_, sizeof(void*)*3, v_action_570_);
lean_ctor_set_uint8(v_reuseFailAlloc_581_, sizeof(void*)*3 + 1, v_wantsRebuild_571_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; 
v___x_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_577_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
return v___x_580_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_newTrace___boxed(lean_object* v_caption_584_, lean_object* v_a_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lake_newTrace(v_caption_584_, v_a_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v_a_585_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lake_modifyTrace___redArg(lean_object* v_f_593_, lean_object* v___y_594_){
_start:
{
lean_object* v_log_596_; uint8_t v_action_597_; uint8_t v_wantsRebuild_598_; lean_object* v_trace_599_; lean_object* v_buildTime_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_610_; 
v_log_596_ = lean_ctor_get(v___y_594_, 0);
v_action_597_ = lean_ctor_get_uint8(v___y_594_, sizeof(void*)*3);
v_wantsRebuild_598_ = lean_ctor_get_uint8(v___y_594_, sizeof(void*)*3 + 1);
v_trace_599_ = lean_ctor_get(v___y_594_, 1);
v_buildTime_600_ = lean_ctor_get(v___y_594_, 2);
v_isSharedCheck_610_ = !lean_is_exclusive(v___y_594_);
if (v_isSharedCheck_610_ == 0)
{
v___x_602_ = v___y_594_;
v_isShared_603_ = v_isSharedCheck_610_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_buildTime_600_);
lean_inc(v_trace_599_);
lean_inc(v_log_596_);
lean_dec(v___y_594_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_610_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_604_ = lean_box(0);
v___x_605_ = lean_apply_1(v_f_593_, v_trace_599_);
if (v_isShared_603_ == 0)
{
lean_ctor_set(v___x_602_, 1, v___x_605_);
v___x_607_ = v___x_602_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_log_596_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v___x_605_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v_buildTime_600_);
lean_ctor_set_uint8(v_reuseFailAlloc_609_, sizeof(void*)*3, v_action_597_);
lean_ctor_set_uint8(v_reuseFailAlloc_609_, sizeof(void*)*3 + 1, v_wantsRebuild_598_);
v___x_607_ = v_reuseFailAlloc_609_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
lean_object* v___x_608_; 
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_604_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
return v___x_608_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_modifyTrace___redArg___boxed(lean_object* v_f_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lake_modifyTrace___redArg(v_f_611_, v___y_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lake_modifyTrace(lean_object* v_f_615_, lean_object* v_a_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_){
_start:
{
lean_object* v_log_623_; uint8_t v_action_624_; uint8_t v_wantsRebuild_625_; lean_object* v_trace_626_; lean_object* v_buildTime_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_637_; 
v_log_623_ = lean_ctor_get(v___y_621_, 0);
v_action_624_ = lean_ctor_get_uint8(v___y_621_, sizeof(void*)*3);
v_wantsRebuild_625_ = lean_ctor_get_uint8(v___y_621_, sizeof(void*)*3 + 1);
v_trace_626_ = lean_ctor_get(v___y_621_, 1);
v_buildTime_627_ = lean_ctor_get(v___y_621_, 2);
v_isSharedCheck_637_ = !lean_is_exclusive(v___y_621_);
if (v_isSharedCheck_637_ == 0)
{
v___x_629_ = v___y_621_;
v_isShared_630_ = v_isSharedCheck_637_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_buildTime_627_);
lean_inc(v_trace_626_);
lean_inc(v_log_623_);
lean_dec(v___y_621_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_637_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_631_ = lean_box(0);
v___x_632_ = lean_apply_1(v_f_615_, v_trace_626_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 1, v___x_632_);
v___x_634_ = v___x_629_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_log_623_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_636_, 2, v_buildTime_627_);
lean_ctor_set_uint8(v_reuseFailAlloc_636_, sizeof(void*)*3, v_action_624_);
lean_ctor_set_uint8(v_reuseFailAlloc_636_, sizeof(void*)*3 + 1, v_wantsRebuild_625_);
v___x_634_ = v_reuseFailAlloc_636_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_635_; 
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_631_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
return v___x_635_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_modifyTrace___boxed(lean_object* v_f_638_, lean_object* v_a_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lake_modifyTrace(v_f_638_, v_a_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec(v___y_642_);
lean_dec(v___y_641_);
lean_dec(v___y_640_);
lean_dec_ref(v_a_639_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lake_setTraceCaption___redArg(lean_object* v_caption_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_trace_650_; lean_object* v_log_651_; uint8_t v_action_652_; uint8_t v_wantsRebuild_653_; lean_object* v_buildTime_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_674_; 
v_trace_650_ = lean_ctor_get(v___y_648_, 1);
v_log_651_ = lean_ctor_get(v___y_648_, 0);
v_action_652_ = lean_ctor_get_uint8(v___y_648_, sizeof(void*)*3);
v_wantsRebuild_653_ = lean_ctor_get_uint8(v___y_648_, sizeof(void*)*3 + 1);
v_buildTime_654_ = lean_ctor_get(v___y_648_, 2);
v_isSharedCheck_674_ = !lean_is_exclusive(v___y_648_);
if (v_isSharedCheck_674_ == 0)
{
v___x_656_ = v___y_648_;
v_isShared_657_ = v_isSharedCheck_674_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_buildTime_654_);
lean_inc(v_trace_650_);
lean_inc(v_log_651_);
lean_dec(v___y_648_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_674_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v_inputs_658_; uint64_t v_hash_659_; lean_object* v_mtime_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_672_; 
v_inputs_658_ = lean_ctor_get(v_trace_650_, 1);
v_hash_659_ = lean_ctor_get_uint64(v_trace_650_, sizeof(void*)*3);
v_mtime_660_ = lean_ctor_get(v_trace_650_, 2);
v_isSharedCheck_672_ = !lean_is_exclusive(v_trace_650_);
if (v_isSharedCheck_672_ == 0)
{
lean_object* v_unused_673_; 
v_unused_673_ = lean_ctor_get(v_trace_650_, 0);
lean_dec(v_unused_673_);
v___x_662_ = v_trace_650_;
v_isShared_663_ = v_isSharedCheck_672_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_mtime_660_);
lean_inc(v_inputs_658_);
lean_dec(v_trace_650_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_672_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_664_; lean_object* v___x_666_; 
v___x_664_ = lean_box(0);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v_caption_647_);
v___x_666_ = v___x_662_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_caption_647_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v_inputs_658_);
lean_ctor_set(v_reuseFailAlloc_671_, 2, v_mtime_660_);
lean_ctor_set_uint64(v_reuseFailAlloc_671_, sizeof(void*)*3, v_hash_659_);
v___x_666_ = v_reuseFailAlloc_671_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_668_; 
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 1, v___x_666_);
v___x_668_ = v___x_656_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_log_651_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_670_, 2, v_buildTime_654_);
lean_ctor_set_uint8(v_reuseFailAlloc_670_, sizeof(void*)*3, v_action_652_);
lean_ctor_set_uint8(v_reuseFailAlloc_670_, sizeof(void*)*3 + 1, v_wantsRebuild_653_);
v___x_668_ = v_reuseFailAlloc_670_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
lean_object* v___x_669_; 
v___x_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_664_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
return v___x_669_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_setTraceCaption___redArg___boxed(lean_object* v_caption_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lake_setTraceCaption___redArg(v_caption_675_, v___y_676_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lake_setTraceCaption(lean_object* v_caption_679_, lean_object* v_a_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
lean_object* v_trace_687_; lean_object* v_log_688_; uint8_t v_action_689_; uint8_t v_wantsRebuild_690_; lean_object* v_buildTime_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_711_; 
v_trace_687_ = lean_ctor_get(v___y_685_, 1);
v_log_688_ = lean_ctor_get(v___y_685_, 0);
v_action_689_ = lean_ctor_get_uint8(v___y_685_, sizeof(void*)*3);
v_wantsRebuild_690_ = lean_ctor_get_uint8(v___y_685_, sizeof(void*)*3 + 1);
v_buildTime_691_ = lean_ctor_get(v___y_685_, 2);
v_isSharedCheck_711_ = !lean_is_exclusive(v___y_685_);
if (v_isSharedCheck_711_ == 0)
{
v___x_693_ = v___y_685_;
v_isShared_694_ = v_isSharedCheck_711_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_buildTime_691_);
lean_inc(v_trace_687_);
lean_inc(v_log_688_);
lean_dec(v___y_685_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_711_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v_inputs_695_; uint64_t v_hash_696_; lean_object* v_mtime_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_709_; 
v_inputs_695_ = lean_ctor_get(v_trace_687_, 1);
v_hash_696_ = lean_ctor_get_uint64(v_trace_687_, sizeof(void*)*3);
v_mtime_697_ = lean_ctor_get(v_trace_687_, 2);
v_isSharedCheck_709_ = !lean_is_exclusive(v_trace_687_);
if (v_isSharedCheck_709_ == 0)
{
lean_object* v_unused_710_; 
v_unused_710_ = lean_ctor_get(v_trace_687_, 0);
lean_dec(v_unused_710_);
v___x_699_ = v_trace_687_;
v_isShared_700_ = v_isSharedCheck_709_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_mtime_697_);
lean_inc(v_inputs_695_);
lean_dec(v_trace_687_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_709_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_701_ = lean_box(0);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 0, v_caption_679_);
v___x_703_ = v___x_699_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_caption_679_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v_inputs_695_);
lean_ctor_set(v_reuseFailAlloc_708_, 2, v_mtime_697_);
lean_ctor_set_uint64(v_reuseFailAlloc_708_, sizeof(void*)*3, v_hash_696_);
v___x_703_ = v_reuseFailAlloc_708_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_705_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 1, v___x_703_);
v___x_705_ = v___x_693_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_log_688_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_707_, 2, v_buildTime_691_);
lean_ctor_set_uint8(v_reuseFailAlloc_707_, sizeof(void*)*3, v_action_689_);
lean_ctor_set_uint8(v_reuseFailAlloc_707_, sizeof(void*)*3 + 1, v_wantsRebuild_690_);
v___x_705_ = v_reuseFailAlloc_707_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
lean_object* v___x_706_; 
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_701_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
return v___x_706_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_setTraceCaption___boxed(lean_object* v_caption_712_, lean_object* v_a_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lake_setTraceCaption(v_caption_712_, v_a_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_);
lean_dec_ref(v___y_717_);
lean_dec(v___y_716_);
lean_dec(v___y_715_);
lean_dec(v___y_714_);
lean_dec_ref(v_a_713_);
return v_res_720_;
}
}
static lean_object* _init_l_Lake_takeTrace___redArg___closed__1(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = ((lean_object*)(l_Lake_takeTrace___redArg___closed__0));
v___x_723_ = l_Lake_BuildTrace_nil(v___x_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeTrace___redArg(lean_object* v___y_724_){
_start:
{
lean_object* v_log_726_; uint8_t v_action_727_; uint8_t v_wantsRebuild_728_; lean_object* v_trace_729_; lean_object* v_buildTime_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_739_; 
v_log_726_ = lean_ctor_get(v___y_724_, 0);
v_action_727_ = lean_ctor_get_uint8(v___y_724_, sizeof(void*)*3);
v_wantsRebuild_728_ = lean_ctor_get_uint8(v___y_724_, sizeof(void*)*3 + 1);
v_trace_729_ = lean_ctor_get(v___y_724_, 1);
v_buildTime_730_ = lean_ctor_get(v___y_724_, 2);
v_isSharedCheck_739_ = !lean_is_exclusive(v___y_724_);
if (v_isSharedCheck_739_ == 0)
{
v___x_732_ = v___y_724_;
v_isShared_733_ = v_isSharedCheck_739_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_buildTime_730_);
lean_inc(v_trace_729_);
lean_inc(v_log_726_);
lean_dec(v___y_724_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_739_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_734_; lean_object* v___x_736_; 
v___x_734_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v___x_734_);
v___x_736_ = v___x_732_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_log_726_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v___x_734_);
lean_ctor_set(v_reuseFailAlloc_738_, 2, v_buildTime_730_);
lean_ctor_set_uint8(v_reuseFailAlloc_738_, sizeof(void*)*3, v_action_727_);
lean_ctor_set_uint8(v_reuseFailAlloc_738_, sizeof(void*)*3 + 1, v_wantsRebuild_728_);
v___x_736_ = v_reuseFailAlloc_738_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
lean_object* v___x_737_; 
v___x_737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_737_, 0, v_trace_729_);
lean_ctor_set(v___x_737_, 1, v___x_736_);
return v___x_737_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_takeTrace___redArg___boxed(lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lake_takeTrace___redArg(v___y_740_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeTrace(lean_object* v_a_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
lean_object* v_log_750_; uint8_t v_action_751_; uint8_t v_wantsRebuild_752_; lean_object* v_trace_753_; lean_object* v_buildTime_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_763_; 
v_log_750_ = lean_ctor_get(v___y_748_, 0);
v_action_751_ = lean_ctor_get_uint8(v___y_748_, sizeof(void*)*3);
v_wantsRebuild_752_ = lean_ctor_get_uint8(v___y_748_, sizeof(void*)*3 + 1);
v_trace_753_ = lean_ctor_get(v___y_748_, 1);
v_buildTime_754_ = lean_ctor_get(v___y_748_, 2);
v_isSharedCheck_763_ = !lean_is_exclusive(v___y_748_);
if (v_isSharedCheck_763_ == 0)
{
v___x_756_ = v___y_748_;
v_isShared_757_ = v_isSharedCheck_763_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_buildTime_754_);
lean_inc(v_trace_753_);
lean_inc(v_log_750_);
lean_dec(v___y_748_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_763_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_758_; lean_object* v___x_760_; 
v___x_758_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 1, v___x_758_);
v___x_760_ = v___x_756_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_log_750_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v___x_758_);
lean_ctor_set(v_reuseFailAlloc_762_, 2, v_buildTime_754_);
lean_ctor_set_uint8(v_reuseFailAlloc_762_, sizeof(void*)*3, v_action_751_);
lean_ctor_set_uint8(v_reuseFailAlloc_762_, sizeof(void*)*3 + 1, v_wantsRebuild_752_);
v___x_760_ = v_reuseFailAlloc_762_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; 
v___x_761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_761_, 0, v_trace_753_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
return v___x_761_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_takeTrace___boxed(lean_object* v_a_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lake_takeTrace(v_a_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v___y_767_);
lean_dec(v___y_766_);
lean_dec(v___y_765_);
lean_dec_ref(v_a_764_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lake_swapTrace___redArg(lean_object* v_trace_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_log_775_; uint8_t v_action_776_; uint8_t v_wantsRebuild_777_; lean_object* v_trace_778_; lean_object* v_buildTime_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_787_; 
v_log_775_ = lean_ctor_get(v___y_773_, 0);
v_action_776_ = lean_ctor_get_uint8(v___y_773_, sizeof(void*)*3);
v_wantsRebuild_777_ = lean_ctor_get_uint8(v___y_773_, sizeof(void*)*3 + 1);
v_trace_778_ = lean_ctor_get(v___y_773_, 1);
v_buildTime_779_ = lean_ctor_get(v___y_773_, 2);
v_isSharedCheck_787_ = !lean_is_exclusive(v___y_773_);
if (v_isSharedCheck_787_ == 0)
{
v___x_781_ = v___y_773_;
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_buildTime_779_);
lean_inc(v_trace_778_);
lean_inc(v_log_775_);
lean_dec(v___y_773_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 1, v_trace_772_);
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_log_775_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_trace_772_);
lean_ctor_set(v_reuseFailAlloc_786_, 2, v_buildTime_779_);
lean_ctor_set_uint8(v_reuseFailAlloc_786_, sizeof(void*)*3, v_action_776_);
lean_ctor_set_uint8(v_reuseFailAlloc_786_, sizeof(void*)*3 + 1, v_wantsRebuild_777_);
v___x_784_ = v_reuseFailAlloc_786_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
lean_object* v___x_785_; 
v___x_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_785_, 0, v_trace_778_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
return v___x_785_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_swapTrace___redArg___boxed(lean_object* v_trace_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lake_swapTrace___redArg(v_trace_788_, v___y_789_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lake_swapTrace(lean_object* v_trace_792_, lean_object* v_a_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_log_800_; uint8_t v_action_801_; uint8_t v_wantsRebuild_802_; lean_object* v_trace_803_; lean_object* v_buildTime_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_812_; 
v_log_800_ = lean_ctor_get(v___y_798_, 0);
v_action_801_ = lean_ctor_get_uint8(v___y_798_, sizeof(void*)*3);
v_wantsRebuild_802_ = lean_ctor_get_uint8(v___y_798_, sizeof(void*)*3 + 1);
v_trace_803_ = lean_ctor_get(v___y_798_, 1);
v_buildTime_804_ = lean_ctor_get(v___y_798_, 2);
v_isSharedCheck_812_ = !lean_is_exclusive(v___y_798_);
if (v_isSharedCheck_812_ == 0)
{
v___x_806_ = v___y_798_;
v_isShared_807_ = v_isSharedCheck_812_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_buildTime_804_);
lean_inc(v_trace_803_);
lean_inc(v_log_800_);
lean_dec(v___y_798_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_812_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 1, v_trace_792_);
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_log_800_);
lean_ctor_set(v_reuseFailAlloc_811_, 1, v_trace_792_);
lean_ctor_set(v_reuseFailAlloc_811_, 2, v_buildTime_804_);
lean_ctor_set_uint8(v_reuseFailAlloc_811_, sizeof(void*)*3, v_action_801_);
lean_ctor_set_uint8(v_reuseFailAlloc_811_, sizeof(void*)*3 + 1, v_wantsRebuild_802_);
v___x_809_ = v_reuseFailAlloc_811_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
lean_object* v___x_810_; 
v___x_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_810_, 0, v_trace_803_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
return v___x_810_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_swapTrace___boxed(lean_object* v_trace_813_, lean_object* v_a_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lake_swapTrace(v_trace_813_, v_a_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec(v___y_817_);
lean_dec(v___y_816_);
lean_dec(v___y_815_);
lean_dec_ref(v_a_814_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lake_addTrace___redArg(lean_object* v_trace_822_, lean_object* v___y_823_){
_start:
{
lean_object* v_log_825_; uint8_t v_action_826_; uint8_t v_wantsRebuild_827_; lean_object* v_trace_828_; lean_object* v_buildTime_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_839_; 
v_log_825_ = lean_ctor_get(v___y_823_, 0);
v_action_826_ = lean_ctor_get_uint8(v___y_823_, sizeof(void*)*3);
v_wantsRebuild_827_ = lean_ctor_get_uint8(v___y_823_, sizeof(void*)*3 + 1);
v_trace_828_ = lean_ctor_get(v___y_823_, 1);
v_buildTime_829_ = lean_ctor_get(v___y_823_, 2);
v_isSharedCheck_839_ = !lean_is_exclusive(v___y_823_);
if (v_isSharedCheck_839_ == 0)
{
v___x_831_ = v___y_823_;
v_isShared_832_ = v_isSharedCheck_839_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_buildTime_829_);
lean_inc(v_trace_828_);
lean_inc(v_log_825_);
lean_dec(v___y_823_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_839_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_836_; 
v___x_833_ = lean_box(0);
v___x_834_ = l_Lake_BuildTrace_mix(v_trace_828_, v_trace_822_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 1, v___x_834_);
v___x_836_ = v___x_831_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_log_825_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v___x_834_);
lean_ctor_set(v_reuseFailAlloc_838_, 2, v_buildTime_829_);
lean_ctor_set_uint8(v_reuseFailAlloc_838_, sizeof(void*)*3, v_action_826_);
lean_ctor_set_uint8(v_reuseFailAlloc_838_, sizeof(void*)*3 + 1, v_wantsRebuild_827_);
v___x_836_ = v_reuseFailAlloc_838_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
lean_object* v___x_837_; 
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_833_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
return v___x_837_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addTrace___redArg___boxed(lean_object* v_trace_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lake_addTrace___redArg(v_trace_840_, v___y_841_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Lake_addTrace(lean_object* v_trace_844_, lean_object* v_a_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
lean_object* v_log_852_; uint8_t v_action_853_; uint8_t v_wantsRebuild_854_; lean_object* v_trace_855_; lean_object* v_buildTime_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_866_; 
v_log_852_ = lean_ctor_get(v___y_850_, 0);
v_action_853_ = lean_ctor_get_uint8(v___y_850_, sizeof(void*)*3);
v_wantsRebuild_854_ = lean_ctor_get_uint8(v___y_850_, sizeof(void*)*3 + 1);
v_trace_855_ = lean_ctor_get(v___y_850_, 1);
v_buildTime_856_ = lean_ctor_get(v___y_850_, 2);
v_isSharedCheck_866_ = !lean_is_exclusive(v___y_850_);
if (v_isSharedCheck_866_ == 0)
{
v___x_858_ = v___y_850_;
v_isShared_859_ = v_isSharedCheck_866_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_buildTime_856_);
lean_inc(v_trace_855_);
lean_inc(v_log_852_);
lean_dec(v___y_850_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_866_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_863_; 
v___x_860_ = lean_box(0);
v___x_861_ = l_Lake_BuildTrace_mix(v_trace_855_, v_trace_844_);
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 1, v___x_861_);
v___x_863_ = v___x_858_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_log_852_);
lean_ctor_set(v_reuseFailAlloc_865_, 1, v___x_861_);
lean_ctor_set(v_reuseFailAlloc_865_, 2, v_buildTime_856_);
lean_ctor_set_uint8(v_reuseFailAlloc_865_, sizeof(void*)*3, v_action_853_);
lean_ctor_set_uint8(v_reuseFailAlloc_865_, sizeof(void*)*3 + 1, v_wantsRebuild_854_);
v___x_863_ = v_reuseFailAlloc_865_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v___x_864_; 
v___x_864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_864_, 0, v___x_860_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
return v___x_864_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addTrace___boxed(lean_object* v_trace_867_, lean_object* v_a_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Lake_addTrace(v_trace_867_, v_a_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_);
lean_dec_ref(v___y_872_);
lean_dec(v___y_871_);
lean_dec(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v_a_868_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Lake_addSubTrace___redArg(lean_object* v_caption_876_, lean_object* v_x_877_, lean_object* v_a_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v_log_885_; uint8_t v_action_886_; uint8_t v_wantsRebuild_887_; lean_object* v_trace_888_; lean_object* v_buildTime_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_920_; 
v_log_885_ = lean_ctor_get(v___y_883_, 0);
v_action_886_ = lean_ctor_get_uint8(v___y_883_, sizeof(void*)*3);
v_wantsRebuild_887_ = lean_ctor_get_uint8(v___y_883_, sizeof(void*)*3 + 1);
v_trace_888_ = lean_ctor_get(v___y_883_, 1);
v_buildTime_889_ = lean_ctor_get(v___y_883_, 2);
v_isSharedCheck_920_ = !lean_is_exclusive(v___y_883_);
if (v_isSharedCheck_920_ == 0)
{
v___x_891_ = v___y_883_;
v_isShared_892_ = v_isSharedCheck_920_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_buildTime_889_);
lean_inc(v_trace_888_);
lean_inc(v_log_885_);
lean_dec(v___y_883_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_920_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; lean_object* v___x_895_; 
v___x_893_ = l_Lake_BuildTrace_nil(v_caption_876_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 1, v___x_893_);
v___x_895_ = v___x_891_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_log_885_);
lean_ctor_set(v_reuseFailAlloc_919_, 1, v___x_893_);
lean_ctor_set(v_reuseFailAlloc_919_, 2, v_buildTime_889_);
lean_ctor_set_uint8(v_reuseFailAlloc_919_, sizeof(void*)*3, v_action_886_);
lean_ctor_set_uint8(v_reuseFailAlloc_919_, sizeof(void*)*3 + 1, v_wantsRebuild_887_);
v___x_895_ = v_reuseFailAlloc_919_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
lean_object* v___x_896_; 
lean_inc_ref(v___y_882_);
lean_inc(v___y_881_);
lean_inc(v___y_880_);
lean_inc(v___y_879_);
v___x_896_ = lean_apply_7(v_x_877_, v_a_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___x_895_, lean_box(0));
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_918_; 
v_a_897_ = lean_ctor_get(v___x_896_, 1);
v_a_898_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_918_ == 0)
{
v___x_900_ = v___x_896_;
v_isShared_901_ = v_isSharedCheck_918_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_897_);
lean_inc(v_a_898_);
lean_dec(v___x_896_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_918_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v_log_902_; uint8_t v_action_903_; uint8_t v_wantsRebuild_904_; lean_object* v_trace_905_; lean_object* v_buildTime_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_917_; 
v_log_902_ = lean_ctor_get(v_a_897_, 0);
v_action_903_ = lean_ctor_get_uint8(v_a_897_, sizeof(void*)*3);
v_wantsRebuild_904_ = lean_ctor_get_uint8(v_a_897_, sizeof(void*)*3 + 1);
v_trace_905_ = lean_ctor_get(v_a_897_, 1);
v_buildTime_906_ = lean_ctor_get(v_a_897_, 2);
v_isSharedCheck_917_ = !lean_is_exclusive(v_a_897_);
if (v_isSharedCheck_917_ == 0)
{
v___x_908_ = v_a_897_;
v_isShared_909_ = v_isSharedCheck_917_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_buildTime_906_);
lean_inc(v_trace_905_);
lean_inc(v_log_902_);
lean_dec(v_a_897_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_917_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_910_ = l_Lake_BuildTrace_mix(v_trace_888_, v_trace_905_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 1, v___x_910_);
v___x_912_ = v___x_908_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_log_902_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v___x_910_);
lean_ctor_set(v_reuseFailAlloc_916_, 2, v_buildTime_906_);
lean_ctor_set_uint8(v_reuseFailAlloc_916_, sizeof(void*)*3, v_action_903_);
lean_ctor_set_uint8(v_reuseFailAlloc_916_, sizeof(void*)*3 + 1, v_wantsRebuild_904_);
v___x_912_ = v_reuseFailAlloc_916_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v___x_914_; 
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 1, v___x_912_);
v___x_914_ = v___x_900_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_898_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v___x_912_);
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
}
else
{
lean_dec_ref(v_trace_888_);
return v___x_896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addSubTrace___redArg___boxed(lean_object* v_caption_921_, lean_object* v_x_922_, lean_object* v_a_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lake_addSubTrace___redArg(v_caption_921_, v_x_922_, v_a_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec(v___y_926_);
lean_dec(v___y_925_);
lean_dec(v___y_924_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lake_addSubTrace(lean_object* v_00_u03b1_931_, lean_object* v_caption_932_, lean_object* v_x_933_, lean_object* v_a_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v_log_941_; uint8_t v_action_942_; uint8_t v_wantsRebuild_943_; lean_object* v_trace_944_; lean_object* v_buildTime_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_976_; 
v_log_941_ = lean_ctor_get(v___y_939_, 0);
v_action_942_ = lean_ctor_get_uint8(v___y_939_, sizeof(void*)*3);
v_wantsRebuild_943_ = lean_ctor_get_uint8(v___y_939_, sizeof(void*)*3 + 1);
v_trace_944_ = lean_ctor_get(v___y_939_, 1);
v_buildTime_945_ = lean_ctor_get(v___y_939_, 2);
v_isSharedCheck_976_ = !lean_is_exclusive(v___y_939_);
if (v_isSharedCheck_976_ == 0)
{
v___x_947_ = v___y_939_;
v_isShared_948_ = v_isSharedCheck_976_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_buildTime_945_);
lean_inc(v_trace_944_);
lean_inc(v_log_941_);
lean_dec(v___y_939_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_976_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_949_; lean_object* v___x_951_; 
v___x_949_ = l_Lake_BuildTrace_nil(v_caption_932_);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 1, v___x_949_);
v___x_951_ = v___x_947_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_log_941_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v___x_949_);
lean_ctor_set(v_reuseFailAlloc_975_, 2, v_buildTime_945_);
lean_ctor_set_uint8(v_reuseFailAlloc_975_, sizeof(void*)*3, v_action_942_);
lean_ctor_set_uint8(v_reuseFailAlloc_975_, sizeof(void*)*3 + 1, v_wantsRebuild_943_);
v___x_951_ = v_reuseFailAlloc_975_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_952_; 
lean_inc_ref(v___y_938_);
lean_inc(v___y_937_);
lean_inc(v___y_936_);
lean_inc(v___y_935_);
v___x_952_ = lean_apply_7(v_x_933_, v_a_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___x_951_, lean_box(0));
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_974_; 
v_a_953_ = lean_ctor_get(v___x_952_, 1);
v_a_954_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_974_ == 0)
{
v___x_956_ = v___x_952_;
v_isShared_957_ = v_isSharedCheck_974_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_953_);
lean_inc(v_a_954_);
lean_dec(v___x_952_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_974_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v_log_958_; uint8_t v_action_959_; uint8_t v_wantsRebuild_960_; lean_object* v_trace_961_; lean_object* v_buildTime_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_973_; 
v_log_958_ = lean_ctor_get(v_a_953_, 0);
v_action_959_ = lean_ctor_get_uint8(v_a_953_, sizeof(void*)*3);
v_wantsRebuild_960_ = lean_ctor_get_uint8(v_a_953_, sizeof(void*)*3 + 1);
v_trace_961_ = lean_ctor_get(v_a_953_, 1);
v_buildTime_962_ = lean_ctor_get(v_a_953_, 2);
v_isSharedCheck_973_ = !lean_is_exclusive(v_a_953_);
if (v_isSharedCheck_973_ == 0)
{
v___x_964_ = v_a_953_;
v_isShared_965_ = v_isSharedCheck_973_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_buildTime_962_);
lean_inc(v_trace_961_);
lean_inc(v_log_958_);
lean_dec(v_a_953_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_973_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_966_ = l_Lake_BuildTrace_mix(v_trace_944_, v_trace_961_);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 1, v___x_966_);
v___x_968_ = v___x_964_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_log_958_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v___x_966_);
lean_ctor_set(v_reuseFailAlloc_972_, 2, v_buildTime_962_);
lean_ctor_set_uint8(v_reuseFailAlloc_972_, sizeof(void*)*3, v_action_959_);
lean_ctor_set_uint8(v_reuseFailAlloc_972_, sizeof(void*)*3 + 1, v_wantsRebuild_960_);
v___x_968_ = v_reuseFailAlloc_972_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
lean_object* v___x_970_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v___x_968_);
v___x_970_ = v___x_956_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_954_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v___x_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
}
else
{
lean_dec_ref(v_trace_944_);
return v___x_952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addSubTrace___boxed(lean_object* v_00_u03b1_977_, lean_object* v_caption_978_, lean_object* v_x_979_, lean_object* v_a_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l_Lake_addSubTrace(v_00_u03b1_977_, v_caption_978_, v_x_979_, v_a_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec(v___y_982_);
lean_dec(v___y_981_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn___redArg(lean_object* v_f_988_, lean_object* v_a_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v___x_996_; 
lean_inc_ref(v___y_994_);
lean_inc_ref(v___y_993_);
lean_inc(v___y_992_);
lean_inc(v___y_991_);
lean_inc(v___y_990_);
v___x_996_ = lean_apply_7(v_f_988_, v_a_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, lean_box(0));
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn___redArg___boxed(lean_object* v_f_997_, lean_object* v_a_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lake_SpawnM_ofFn___redArg(v_f_997_, v_a_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec_ref(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec(v___y_999_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn(lean_object* v_00_u03b1_1006_, lean_object* v_f_1007_, lean_object* v_a_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v___x_1015_; 
lean_inc_ref(v___y_1013_);
lean_inc_ref(v___y_1012_);
lean_inc(v___y_1011_);
lean_inc(v___y_1010_);
lean_inc(v___y_1009_);
v___x_1015_ = lean_apply_7(v_f_1007_, v_a_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, lean_box(0));
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn___boxed(lean_object* v_00_u03b1_1016_, lean_object* v_f_1017_, lean_object* v_a_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lake_SpawnM_ofFn(v_00_u03b1_1016_, v_f_1017_, v_a_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
lean_dec_ref(v___y_1023_);
lean_dec_ref(v___y_1022_);
lean_dec(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec(v___y_1019_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn___redArg(lean_object* v_self_1026_, lean_object* v_fetch_1027_, lean_object* v_pkg_x3f_1028_, lean_object* v_stack_1029_, lean_object* v_store_1030_, lean_object* v_ctx_1031_, lean_object* v_s_1032_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_apply_7(v_self_1026_, v_fetch_1027_, v_pkg_x3f_1028_, v_stack_1029_, v_store_1030_, v_ctx_1031_, v_s_1032_, lean_box(0));
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn___redArg___boxed(lean_object* v_self_1035_, lean_object* v_fetch_1036_, lean_object* v_pkg_x3f_1037_, lean_object* v_stack_1038_, lean_object* v_store_1039_, lean_object* v_ctx_1040_, lean_object* v_s_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lake_SpawnM_toFn___redArg(v_self_1035_, v_fetch_1036_, v_pkg_x3f_1037_, v_stack_1038_, v_store_1039_, v_ctx_1040_, v_s_1041_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn(lean_object* v_00_u03b1_1044_, lean_object* v_self_1045_, lean_object* v_fetch_1046_, lean_object* v_pkg_x3f_1047_, lean_object* v_stack_1048_, lean_object* v_store_1049_, lean_object* v_ctx_1050_, lean_object* v_s_1051_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = lean_apply_7(v_self_1045_, v_fetch_1046_, v_pkg_x3f_1047_, v_stack_1048_, v_store_1049_, v_ctx_1050_, v_s_1051_, lean_box(0));
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn___boxed(lean_object* v_00_u03b1_1054_, lean_object* v_self_1055_, lean_object* v_fetch_1056_, lean_object* v_pkg_x3f_1057_, lean_object* v_stack_1058_, lean_object* v_store_1059_, lean_object* v_ctx_1060_, lean_object* v_s_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lake_SpawnM_toFn(v_00_u03b1_1054_, v_self_1055_, v_fetch_1056_, v_pkg_x3f_1057_, v_stack_1058_, v_store_1059_, v_ctx_1060_, v_s_1061_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM___redArg(lean_object* v_x_1064_, lean_object* v_a_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_trace_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v_trace_1072_ = lean_ctor_get(v___y_1070_, 1);
lean_inc_ref(v_trace_1072_);
lean_inc_ref(v___y_1069_);
lean_inc(v___y_1068_);
lean_inc(v___y_1067_);
lean_inc(v___y_1066_);
v___x_1073_ = lean_apply_7(v_x_1064_, v_a_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v_trace_1072_, lean_box(0));
v___x_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
lean_ctor_set(v___x_1074_, 1, v___y_1070_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM___redArg___boxed(lean_object* v_x_1075_, lean_object* v_a_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lake_JobM_runSpawnM___redArg(v_x_1075_, v_a_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec(v___y_1077_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM(lean_object* v_00_u03b1_1084_, lean_object* v_x_1085_, lean_object* v_a_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v_trace_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_trace_1093_ = lean_ctor_get(v___y_1091_, 1);
lean_inc_ref(v_trace_1093_);
lean_inc_ref(v___y_1090_);
lean_inc(v___y_1089_);
lean_inc(v___y_1088_);
lean_inc(v___y_1087_);
v___x_1094_ = lean_apply_7(v_x_1085_, v_a_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v_trace_1093_, lean_box(0));
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
lean_ctor_set(v___x_1095_, 1, v___y_1091_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM___boxed(lean_object* v_00_u03b1_1096_, lean_object* v_x_1097_, lean_object* v_a_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lake_JobM_runSpawnM(v_00_u03b1_1096_, v_x_1097_, v_a_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec(v___y_1099_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM___redArg(lean_object* v_x_1108_, lean_object* v_a_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
uint8_t v___x_1116_; uint8_t v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1116_ = 0;
v___x_1117_ = 0;
v___x_1118_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
v___x_1119_ = lean_unsigned_to_nat(0u);
v___x_1120_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1120_, 0, v___y_1114_);
lean_ctor_set(v___x_1120_, 1, v___x_1118_);
lean_ctor_set(v___x_1120_, 2, v___x_1119_);
lean_ctor_set_uint8(v___x_1120_, sizeof(void*)*3, v___x_1116_);
lean_ctor_set_uint8(v___x_1120_, sizeof(void*)*3 + 1, v___x_1117_);
lean_inc_ref(v___y_1113_);
lean_inc(v___y_1112_);
lean_inc(v___y_1111_);
lean_inc(v___y_1110_);
v___x_1121_ = lean_apply_7(v_x_1108_, v_a_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___x_1120_, lean_box(0));
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v_a_1122_; lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1131_; 
v_a_1122_ = lean_ctor_get(v___x_1121_, 1);
v_a_1123_ = lean_ctor_get(v___x_1121_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1125_ = v___x_1121_;
v_isShared_1126_ = v_isSharedCheck_1131_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1122_);
lean_inc(v_a_1123_);
lean_dec(v___x_1121_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1131_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v_log_1127_; lean_object* v___x_1129_; 
v_log_1127_ = lean_ctor_get(v_a_1122_, 0);
lean_inc_ref(v_log_1127_);
lean_dec(v_a_1122_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 1, v_log_1127_);
v___x_1129_ = v___x_1125_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1123_);
lean_ctor_set(v_reuseFailAlloc_1130_, 1, v_log_1127_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
else
{
lean_object* v_a_1132_; lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1141_; 
v_a_1132_ = lean_ctor_get(v___x_1121_, 1);
v_a_1133_ = lean_ctor_get(v___x_1121_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1135_ = v___x_1121_;
v_isShared_1136_ = v_isSharedCheck_1141_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1132_);
lean_inc(v_a_1133_);
lean_dec(v___x_1121_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1141_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v_log_1137_; lean_object* v___x_1139_; 
v_log_1137_ = lean_ctor_get(v_a_1132_, 0);
lean_inc_ref(v_log_1137_);
lean_dec(v_a_1132_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 1, v_log_1137_);
v___x_1139_ = v___x_1135_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1133_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v_log_1137_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM___redArg___boxed(lean_object* v_x_1142_, lean_object* v_a_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lake_FetchM_runJobM___redArg(v_x_1142_, v_a_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec(v___y_1146_);
lean_dec(v___y_1145_);
lean_dec(v___y_1144_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM(lean_object* v_00_u03b1_1151_, lean_object* v_x_1152_, lean_object* v_a_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
uint8_t v___x_1160_; uint8_t v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1160_ = 0;
v___x_1161_ = 0;
v___x_1162_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
v___x_1163_ = lean_unsigned_to_nat(0u);
v___x_1164_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1164_, 0, v___y_1158_);
lean_ctor_set(v___x_1164_, 1, v___x_1162_);
lean_ctor_set(v___x_1164_, 2, v___x_1163_);
lean_ctor_set_uint8(v___x_1164_, sizeof(void*)*3, v___x_1160_);
lean_ctor_set_uint8(v___x_1164_, sizeof(void*)*3 + 1, v___x_1161_);
lean_inc_ref(v___y_1157_);
lean_inc(v___y_1156_);
lean_inc(v___y_1155_);
lean_inc(v___y_1154_);
v___x_1165_ = lean_apply_7(v_x_1152_, v_a_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___x_1164_, lean_box(0));
if (lean_obj_tag(v___x_1165_) == 0)
{
lean_object* v_a_1166_; lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1175_; 
v_a_1166_ = lean_ctor_get(v___x_1165_, 1);
v_a_1167_ = lean_ctor_get(v___x_1165_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1169_ = v___x_1165_;
v_isShared_1170_ = v_isSharedCheck_1175_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1166_);
lean_inc(v_a_1167_);
lean_dec(v___x_1165_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1175_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v_log_1171_; lean_object* v___x_1173_; 
v_log_1171_ = lean_ctor_get(v_a_1166_, 0);
lean_inc_ref(v_log_1171_);
lean_dec(v_a_1166_);
if (v_isShared_1170_ == 0)
{
lean_ctor_set(v___x_1169_, 1, v_log_1171_);
v___x_1173_ = v___x_1169_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1167_);
lean_ctor_set(v_reuseFailAlloc_1174_, 1, v_log_1171_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
else
{
lean_object* v_a_1176_; lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1185_; 
v_a_1176_ = lean_ctor_get(v___x_1165_, 1);
v_a_1177_ = lean_ctor_get(v___x_1165_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1179_ = v___x_1165_;
v_isShared_1180_ = v_isSharedCheck_1185_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1176_);
lean_inc(v_a_1177_);
lean_dec(v___x_1165_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1185_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v_log_1181_; lean_object* v___x_1183_; 
v_log_1181_ = lean_ctor_get(v_a_1176_, 0);
lean_inc_ref(v_log_1181_);
lean_dec(v_a_1176_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 1, v_log_1181_);
v___x_1183_ = v___x_1179_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1177_);
lean_ctor_set(v_reuseFailAlloc_1184_, 1, v_log_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM___boxed(lean_object* v_00_u03b1_1186_, lean_object* v_x_1187_, lean_object* v_a_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lake_FetchM_runJobM(v_00_u03b1_1186_, v_x_1187_, v_a_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec(v___y_1189_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM___redArg(lean_object* v_x_1198_, lean_object* v_a_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_log_1206_; uint8_t v_action_1207_; uint8_t v_wantsRebuild_1208_; lean_object* v_trace_1209_; lean_object* v_buildTime_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1239_; 
v_log_1206_ = lean_ctor_get(v___y_1204_, 0);
v_action_1207_ = lean_ctor_get_uint8(v___y_1204_, sizeof(void*)*3);
v_wantsRebuild_1208_ = lean_ctor_get_uint8(v___y_1204_, sizeof(void*)*3 + 1);
v_trace_1209_ = lean_ctor_get(v___y_1204_, 1);
v_buildTime_1210_ = lean_ctor_get(v___y_1204_, 2);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___y_1204_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1212_ = v___y_1204_;
v_isShared_1213_ = v_isSharedCheck_1239_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_buildTime_1210_);
lean_inc(v_trace_1209_);
lean_inc(v_log_1206_);
lean_dec(v___y_1204_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1239_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1214_; 
lean_inc_ref(v___y_1203_);
lean_inc(v___y_1202_);
lean_inc(v___y_1201_);
lean_inc(v___y_1200_);
v___x_1214_ = lean_apply_7(v_x_1198_, v_a_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v_log_1206_, lean_box(0));
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1226_; 
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
v_a_1216_ = lean_ctor_get(v___x_1214_, 1);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1218_ = v___x_1214_;
v_isShared_1219_ = v_isSharedCheck_1226_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_inc(v_a_1215_);
lean_dec(v___x_1214_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1226_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 0, v_a_1216_);
v___x_1221_ = v___x_1212_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_a_1216_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v_trace_1209_);
lean_ctor_set(v_reuseFailAlloc_1225_, 2, v_buildTime_1210_);
lean_ctor_set_uint8(v_reuseFailAlloc_1225_, sizeof(void*)*3, v_action_1207_);
lean_ctor_set_uint8(v_reuseFailAlloc_1225_, sizeof(void*)*3 + 1, v_wantsRebuild_1208_);
v___x_1221_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
lean_object* v___x_1223_; 
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 1, v___x_1221_);
v___x_1223_ = v___x_1218_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1215_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v___x_1221_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
else
{
lean_object* v_a_1227_; lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1238_; 
v_a_1227_ = lean_ctor_get(v___x_1214_, 0);
v_a_1228_ = lean_ctor_get(v___x_1214_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1230_ = v___x_1214_;
v_isShared_1231_ = v_isSharedCheck_1238_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_inc(v_a_1227_);
lean_dec(v___x_1214_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1238_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 0, v_a_1228_);
v___x_1233_ = v___x_1212_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_a_1228_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_trace_1209_);
lean_ctor_set(v_reuseFailAlloc_1237_, 2, v_buildTime_1210_);
lean_ctor_set_uint8(v_reuseFailAlloc_1237_, sizeof(void*)*3, v_action_1207_);
lean_ctor_set_uint8(v_reuseFailAlloc_1237_, sizeof(void*)*3 + 1, v_wantsRebuild_1208_);
v___x_1233_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1235_; 
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 1, v___x_1233_);
v___x_1235_ = v___x_1230_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1227_);
lean_ctor_set(v_reuseFailAlloc_1236_, 1, v___x_1233_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM___redArg___boxed(lean_object* v_x_1240_, lean_object* v_a_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lake_JobM_runFetchM___redArg(v_x_1240_, v_a_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec(v___y_1243_);
lean_dec(v___y_1242_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM(lean_object* v_00_u03b1_1249_, lean_object* v_x_1250_, lean_object* v_a_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_){
_start:
{
lean_object* v_log_1258_; uint8_t v_action_1259_; uint8_t v_wantsRebuild_1260_; lean_object* v_trace_1261_; lean_object* v_buildTime_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1291_; 
v_log_1258_ = lean_ctor_get(v___y_1256_, 0);
v_action_1259_ = lean_ctor_get_uint8(v___y_1256_, sizeof(void*)*3);
v_wantsRebuild_1260_ = lean_ctor_get_uint8(v___y_1256_, sizeof(void*)*3 + 1);
v_trace_1261_ = lean_ctor_get(v___y_1256_, 1);
v_buildTime_1262_ = lean_ctor_get(v___y_1256_, 2);
v_isSharedCheck_1291_ = !lean_is_exclusive(v___y_1256_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1264_ = v___y_1256_;
v_isShared_1265_ = v_isSharedCheck_1291_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_buildTime_1262_);
lean_inc(v_trace_1261_);
lean_inc(v_log_1258_);
lean_dec(v___y_1256_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1291_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1266_; 
lean_inc_ref(v___y_1255_);
lean_inc(v___y_1254_);
lean_inc(v___y_1253_);
lean_inc(v___y_1252_);
v___x_1266_ = lean_apply_7(v_x_1250_, v_a_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v_log_1258_, lean_box(0));
if (lean_obj_tag(v___x_1266_) == 0)
{
lean_object* v_a_1267_; lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1278_; 
v_a_1267_ = lean_ctor_get(v___x_1266_, 0);
v_a_1268_ = lean_ctor_get(v___x_1266_, 1);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1270_ = v___x_1266_;
v_isShared_1271_ = v_isSharedCheck_1278_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_inc(v_a_1267_);
lean_dec(v___x_1266_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1278_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v_a_1268_);
v___x_1273_ = v___x_1264_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1268_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v_trace_1261_);
lean_ctor_set(v_reuseFailAlloc_1277_, 2, v_buildTime_1262_);
lean_ctor_set_uint8(v_reuseFailAlloc_1277_, sizeof(void*)*3, v_action_1259_);
lean_ctor_set_uint8(v_reuseFailAlloc_1277_, sizeof(void*)*3 + 1, v_wantsRebuild_1260_);
v___x_1273_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
lean_object* v___x_1275_; 
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 1, v___x_1273_);
v___x_1275_ = v___x_1270_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1267_);
lean_ctor_set(v_reuseFailAlloc_1276_, 1, v___x_1273_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
else
{
lean_object* v_a_1279_; lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1290_; 
v_a_1279_ = lean_ctor_get(v___x_1266_, 0);
v_a_1280_ = lean_ctor_get(v___x_1266_, 1);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1282_ = v___x_1266_;
v_isShared_1283_ = v_isSharedCheck_1290_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_inc(v_a_1279_);
lean_dec(v___x_1266_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1290_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v_a_1280_);
v___x_1285_ = v___x_1264_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1280_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v_trace_1261_);
lean_ctor_set(v_reuseFailAlloc_1289_, 2, v_buildTime_1262_);
lean_ctor_set_uint8(v_reuseFailAlloc_1289_, sizeof(void*)*3, v_action_1259_);
lean_ctor_set_uint8(v_reuseFailAlloc_1289_, sizeof(void*)*3 + 1, v_wantsRebuild_1260_);
v___x_1285_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
lean_object* v___x_1287_; 
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 1, v___x_1285_);
v___x_1287_ = v___x_1282_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1279_);
lean_ctor_set(v_reuseFailAlloc_1288_, 1, v___x_1285_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM___boxed(lean_object* v_00_u03b1_1292_, lean_object* v_x_1293_, lean_object* v_a_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lake_JobM_runFetchM(v_00_u03b1_1292_, v_x_1293_, v_a_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec(v___y_1296_);
lean_dec(v___y_1295_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindTask___redArg___lam__0(lean_object* v_inst_1304_, lean_object* v_caption_1305_, uint8_t v_optional_1306_, lean_object* v_toPure_1307_, lean_object* v_____do__lift_1308_){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1309_, 0, v_____do__lift_1308_);
lean_ctor_set(v___x_1309_, 1, v_inst_1304_);
lean_ctor_set(v___x_1309_, 2, v_caption_1305_);
lean_ctor_set_uint8(v___x_1309_, sizeof(void*)*3, v_optional_1306_);
v___x_1310_ = lean_apply_2(v_toPure_1307_, lean_box(0), v___x_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindTask___redArg___lam__0___boxed(lean_object* v_inst_1311_, lean_object* v_caption_1312_, lean_object* v_optional_1313_, lean_object* v_toPure_1314_, lean_object* v_____do__lift_1315_){
_start:
{
uint8_t v_optional_boxed_1316_; lean_object* v_res_1317_; 
v_optional_boxed_1316_ = lean_unbox(v_optional_1313_);
v_res_1317_ = l_Lake_Job_bindTask___redArg___lam__0(v_inst_1311_, v_caption_1312_, v_optional_boxed_1316_, v_toPure_1314_, v_____do__lift_1315_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindTask___redArg(lean_object* v_inst_1318_, lean_object* v_inst_1319_, lean_object* v_f_1320_, lean_object* v_self_1321_){
_start:
{
lean_object* v_toApplicative_1322_; lean_object* v_toBind_1323_; lean_object* v_task_1324_; lean_object* v_caption_1325_; uint8_t v_optional_1326_; lean_object* v_toPure_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___f_1330_; lean_object* v___x_1331_; 
v_toApplicative_1322_ = lean_ctor_get(v_inst_1318_, 0);
lean_inc_ref(v_toApplicative_1322_);
v_toBind_1323_ = lean_ctor_get(v_inst_1318_, 1);
lean_inc(v_toBind_1323_);
lean_dec_ref(v_inst_1318_);
v_task_1324_ = lean_ctor_get(v_self_1321_, 0);
lean_inc_ref(v_task_1324_);
v_caption_1325_ = lean_ctor_get(v_self_1321_, 2);
lean_inc_ref(v_caption_1325_);
v_optional_1326_ = lean_ctor_get_uint8(v_self_1321_, sizeof(void*)*3);
lean_dec_ref(v_self_1321_);
v_toPure_1327_ = lean_ctor_get(v_toApplicative_1322_, 1);
lean_inc(v_toPure_1327_);
lean_dec_ref(v_toApplicative_1322_);
v___x_1328_ = lean_apply_1(v_f_1320_, v_task_1324_);
v___x_1329_ = lean_box(v_optional_1326_);
v___f_1330_ = lean_alloc_closure((void*)(l_Lake_Job_bindTask___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1330_, 0, v_inst_1319_);
lean_closure_set(v___f_1330_, 1, v_caption_1325_);
lean_closure_set(v___f_1330_, 2, v___x_1329_);
lean_closure_set(v___f_1330_, 3, v_toPure_1327_);
v___x_1331_ = lean_apply_4(v_toBind_1323_, lean_box(0), lean_box(0), v___x_1328_, v___f_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindTask(lean_object* v_m_1332_, lean_object* v_00_u03b2_1333_, lean_object* v_00_u03b1_1334_, lean_object* v_inst_1335_, lean_object* v_inst_1336_, lean_object* v_f_1337_, lean_object* v_self_1338_){
_start:
{
lean_object* v_toApplicative_1339_; lean_object* v_toBind_1340_; lean_object* v_task_1341_; lean_object* v_caption_1342_; uint8_t v_optional_1343_; lean_object* v_toPure_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___f_1347_; lean_object* v___x_1348_; 
v_toApplicative_1339_ = lean_ctor_get(v_inst_1335_, 0);
lean_inc_ref(v_toApplicative_1339_);
v_toBind_1340_ = lean_ctor_get(v_inst_1335_, 1);
lean_inc(v_toBind_1340_);
lean_dec_ref(v_inst_1335_);
v_task_1341_ = lean_ctor_get(v_self_1338_, 0);
lean_inc_ref(v_task_1341_);
v_caption_1342_ = lean_ctor_get(v_self_1338_, 2);
lean_inc_ref(v_caption_1342_);
v_optional_1343_ = lean_ctor_get_uint8(v_self_1338_, sizeof(void*)*3);
lean_dec_ref(v_self_1338_);
v_toPure_1344_ = lean_ctor_get(v_toApplicative_1339_, 1);
lean_inc(v_toPure_1344_);
lean_dec_ref(v_toApplicative_1339_);
v___x_1345_ = lean_apply_1(v_f_1337_, v_task_1341_);
v___x_1346_ = lean_box(v_optional_1343_);
v___f_1347_ = lean_alloc_closure((void*)(l_Lake_Job_bindTask___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1347_, 0, v_inst_1336_);
lean_closure_set(v___f_1347_, 1, v_caption_1342_);
lean_closure_set(v___f_1347_, 2, v___x_1346_);
lean_closure_set(v___f_1347_, 3, v_toPure_1344_);
v___x_1348_ = lean_apply_4(v_toBind_1340_, lean_box(0), lean_box(0), v___x_1345_, v___f_1347_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lake_Job_sync_spec__0(lean_object* v_msg_1350_){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_1352_ = lean_panic_fn_borrowed(v___x_1351_, v_msg_1350_);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__0(lean_object* v_val_1353_, lean_object* v_val_1354_, lean_object* v_a_x3f_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1358_ = lean_get_set_stdout(v_val_1353_);
lean_dec_ref(v___x_1358_);
v___x_1359_ = lean_box(0);
v___x_1360_ = lean_get_set_stderr(v_val_1354_);
lean_dec_ref(v___x_1360_);
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1359_);
lean_ctor_set(v___x_1361_, 1, v___y_1356_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__0___boxed(lean_object* v_val_1362_, lean_object* v_val_1363_, lean_object* v_a_x3f_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_Lake_Job_sync___redArg___lam__0(v_val_1362_, v_val_1363_, v_a_x3f_1364_, v___y_1365_);
lean_dec(v_a_x3f_1364_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__1(lean_object* v_a_1368_, lean_object* v_____r_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1377_, 0, v_a_1368_);
lean_ctor_set(v___x_1377_, 1, v___y_1375_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__1___boxed(lean_object* v_a_1378_, lean_object* v_____r_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lake_Job_sync___redArg___lam__1(v_a_1378_, v_____r_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_);
lean_dec_ref(v___y_1384_);
lean_dec(v___y_1383_);
lean_dec(v___y_1382_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
return v_res_1387_;
}
}
static lean_object* _init_l_Lake_Job_sync___redArg___closed__0(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1388_ = lean_unsigned_to_nat(0u);
v___x_1389_ = l_ByteArray_empty;
v___x_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
lean_ctor_set(v___x_1390_, 1, v___x_1388_);
return v___x_1390_;
}
}
static lean_object* _init_l_Lake_Job_sync___redArg___closed__2(void){
_start:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; uint8_t v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1393_ = lean_unsigned_to_nat(0u);
v___x_1394_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
v___x_1395_ = 0;
v___x_1396_ = 0;
v___x_1397_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_1398_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
lean_ctor_set(v___x_1398_, 1, v___x_1394_);
lean_ctor_set(v___x_1398_, 2, v___x_1393_);
lean_ctor_set_uint8(v___x_1398_, sizeof(void*)*3, v___x_1396_);
lean_ctor_set_uint8(v___x_1398_, sizeof(void*)*3 + 1, v___x_1395_);
return v___x_1398_;
}
}
static lean_object* _init_l_Lake_Job_sync___redArg___closed__7(void){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1403_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__6));
v___x_1404_ = lean_unsigned_to_nat(46u);
v___x_1405_ = lean_unsigned_to_nat(193u);
v___x_1406_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__5));
v___x_1407_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__4));
v___x_1408_ = l_mkPanicMessageWithDecl(v___x_1407_, v___x_1406_, v___x_1405_, v___x_1404_, v___x_1403_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg(lean_object* v_inst_1409_, lean_object* v_act_1410_, lean_object* v_caption_1411_, lean_object* v_a_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v_val_1419_; lean_object* v_a_1424_; lean_object* v_a_1425_; lean_object* v___y_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1429_ = lean_unsigned_to_nat(0u);
v___x_1430_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__0, &l_Lake_Job_sync___redArg___closed__0_once, _init_l_Lake_Job_sync___redArg___closed__0);
v___x_1431_ = lean_st_mk_ref(v___x_1430_);
lean_inc(v___x_1431_);
v___x_1432_ = l_IO_FS_Stream_ofBuffer(v___x_1431_);
lean_inc_ref(v___x_1432_);
v___x_1433_ = lean_get_set_stdout(v___x_1432_);
v___x_1434_ = lean_get_set_stderr(v___x_1432_);
v___x_1435_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__2, &l_Lake_Job_sync___redArg___closed__2_once, _init_l_Lake_Job_sync___redArg___closed__2);
lean_inc_ref(v___y_1416_);
lean_inc(v___y_1415_);
lean_inc(v___y_1414_);
lean_inc(v___y_1413_);
lean_inc_ref(v_a_1412_);
v___x_1436_ = lean_apply_7(v_act_1410_, v_a_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___x_1435_, lean_box(0));
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v_a_1437_; lean_object* v_a_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v_a_1441_; lean_object* v_log_1442_; uint8_t v_action_1443_; uint8_t v_wantsRebuild_1444_; lean_object* v_trace_1445_; lean_object* v_buildTime_1446_; lean_object* v___x_1447_; lean_object* v___y_1449_; lean_object* v_data_1474_; uint8_t v___x_1475_; 
v_a_1437_ = lean_ctor_get(v___x_1436_, 0);
lean_inc_n(v_a_1437_, 2);
v_a_1438_ = lean_ctor_get(v___x_1436_, 1);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1436_, 2);
v___x_1439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1439_, 0, v_a_1437_);
v___x_1440_ = l_Lake_Job_sync___redArg___lam__0(v___x_1433_, v___x_1434_, v___x_1439_, v_a_1438_);
lean_dec_ref_known(v___x_1439_, 1);
v_a_1441_ = lean_ctor_get(v___x_1440_, 1);
lean_inc(v_a_1441_);
lean_dec_ref(v___x_1440_);
v_log_1442_ = lean_ctor_get(v_a_1441_, 0);
v_action_1443_ = lean_ctor_get_uint8(v_a_1441_, sizeof(void*)*3);
v_wantsRebuild_1444_ = lean_ctor_get_uint8(v_a_1441_, sizeof(void*)*3 + 1);
v_trace_1445_ = lean_ctor_get(v_a_1441_, 1);
v_buildTime_1446_ = lean_ctor_get(v_a_1441_, 2);
v___x_1447_ = lean_st_ref_get(v___x_1431_);
lean_dec(v___x_1431_);
v_data_1474_ = lean_ctor_get(v___x_1447_, 0);
lean_inc_ref(v_data_1474_);
lean_dec(v___x_1447_);
v___x_1475_ = lean_string_validate_utf8(v_data_1474_);
if (v___x_1475_ == 0)
{
lean_object* v___x_1476_; lean_object* v___x_1477_; 
lean_dec_ref(v_data_1474_);
v___x_1476_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__7, &l_Lake_Job_sync___redArg___closed__7_once, _init_l_Lake_Job_sync___redArg___closed__7);
v___x_1477_ = l_panic___at___00Lake_Job_sync_spec__0(v___x_1476_);
v___y_1449_ = v___x_1477_;
goto v___jp_1448_;
}
else
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_string_from_utf8_unchecked(v_data_1474_);
v___y_1449_ = v___x_1478_;
goto v___jp_1448_;
}
v___jp_1448_:
{
lean_object* v___x_1450_; uint8_t v___x_1451_; 
v___x_1450_ = lean_string_utf8_byte_size(v___y_1449_);
v___x_1451_ = lean_nat_dec_eq(v___x_1450_, v___x_1429_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1468_; 
lean_inc(v_buildTime_1446_);
lean_inc_ref(v_trace_1445_);
lean_inc_ref(v_log_1442_);
v_isSharedCheck_1468_ = !lean_is_exclusive(v_a_1441_);
if (v_isSharedCheck_1468_ == 0)
{
lean_object* v_unused_1469_; lean_object* v_unused_1470_; lean_object* v_unused_1471_; 
v_unused_1469_ = lean_ctor_get(v_a_1441_, 2);
lean_dec(v_unused_1469_);
v_unused_1470_ = lean_ctor_get(v_a_1441_, 1);
lean_dec(v_unused_1470_);
v_unused_1471_ = lean_ctor_get(v_a_1441_, 0);
lean_dec(v_unused_1471_);
v___x_1453_ = v_a_1441_;
v_isShared_1454_ = v_isSharedCheck_1468_;
goto v_resetjp_1452_;
}
else
{
lean_dec(v_a_1441_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1468_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1465_; 
v___x_1455_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__3));
v___x_1456_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1456_, 0, v___y_1449_);
lean_ctor_set(v___x_1456_, 1, v___x_1429_);
lean_ctor_set(v___x_1456_, 2, v___x_1450_);
v___x_1457_ = l_String_Slice_trimAscii(v___x_1456_);
v___x_1458_ = l_String_Slice_toString(v___x_1457_);
lean_dec_ref(v___x_1457_);
v___x_1459_ = lean_string_append(v___x_1455_, v___x_1458_);
lean_dec_ref(v___x_1458_);
v___x_1460_ = 1;
v___x_1461_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1461_, 0, v___x_1459_);
lean_ctor_set_uint8(v___x_1461_, sizeof(void*)*1, v___x_1460_);
v___x_1462_ = lean_box(0);
v___x_1463_ = lean_array_push(v_log_1442_, v___x_1461_);
if (v_isShared_1454_ == 0)
{
lean_ctor_set(v___x_1453_, 0, v___x_1463_);
v___x_1465_ = v___x_1453_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v___x_1463_);
lean_ctor_set(v_reuseFailAlloc_1467_, 1, v_trace_1445_);
lean_ctor_set(v_reuseFailAlloc_1467_, 2, v_buildTime_1446_);
lean_ctor_set_uint8(v_reuseFailAlloc_1467_, sizeof(void*)*3, v_action_1443_);
lean_ctor_set_uint8(v_reuseFailAlloc_1467_, sizeof(void*)*3 + 1, v_wantsRebuild_1444_);
v___x_1465_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Lake_Job_sync___redArg___lam__1(v_a_1437_, v___x_1462_, v_a_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___x_1465_);
lean_dec_ref(v_a_1412_);
v___y_1428_ = v___x_1466_;
goto v___jp_1427_;
}
}
}
else
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
lean_dec_ref(v___y_1449_);
v___x_1472_ = lean_box(0);
v___x_1473_ = l_Lake_Job_sync___redArg___lam__1(v_a_1437_, v___x_1472_, v_a_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v_a_1441_);
lean_dec_ref(v_a_1412_);
v___y_1428_ = v___x_1473_;
goto v___jp_1427_;
}
}
}
else
{
lean_object* v_a_1479_; lean_object* v_a_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v_a_1483_; 
lean_dec(v___x_1431_);
lean_dec_ref(v_a_1412_);
v_a_1479_ = lean_ctor_get(v___x_1436_, 0);
lean_inc(v_a_1479_);
v_a_1480_ = lean_ctor_get(v___x_1436_, 1);
lean_inc(v_a_1480_);
lean_dec_ref_known(v___x_1436_, 2);
v___x_1481_ = lean_box(0);
v___x_1482_ = l_Lake_Job_sync___redArg___lam__0(v___x_1433_, v___x_1434_, v___x_1481_, v_a_1480_);
v_a_1483_ = lean_ctor_get(v___x_1482_, 1);
lean_inc(v_a_1483_);
lean_dec_ref(v___x_1482_);
v_a_1424_ = v_a_1479_;
v_a_1425_ = v_a_1483_;
goto v___jp_1423_;
}
v___jp_1418_:
{
lean_object* v___x_1420_; uint8_t v___x_1421_; lean_object* v___x_1422_; 
v___x_1420_ = lean_task_pure(v_val_1419_);
v___x_1421_ = 0;
v___x_1422_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v_inst_1409_);
lean_ctor_set(v___x_1422_, 2, v_caption_1411_);
lean_ctor_set_uint8(v___x_1422_, sizeof(void*)*3, v___x_1421_);
return v___x_1422_;
}
v___jp_1423_:
{
lean_object* v___x_1426_; 
v___x_1426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1426_, 0, v_a_1424_);
lean_ctor_set(v___x_1426_, 1, v_a_1425_);
v_val_1419_ = v___x_1426_;
goto v___jp_1418_;
}
v___jp_1427_:
{
v_val_1419_ = v___y_1428_;
goto v___jp_1418_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___boxed(lean_object* v_inst_1484_, lean_object* v_act_1485_, lean_object* v_caption_1486_, lean_object* v_a_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l_Lake_Job_sync___redArg(v_inst_1484_, v_act_1485_, v_caption_1486_, v_a_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec(v___y_1489_);
lean_dec(v___y_1488_);
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync(lean_object* v_00_u03b1_1494_, lean_object* v_inst_1495_, lean_object* v_act_1496_, lean_object* v_caption_1497_, lean_object* v_a_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_){
_start:
{
lean_object* v___x_1505_; 
v___x_1505_ = l_Lake_Job_sync___redArg(v_inst_1495_, v_act_1496_, v_caption_1497_, v_a_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___boxed(lean_object* v_00_u03b1_1506_, lean_object* v_inst_1507_, lean_object* v_act_1508_, lean_object* v_caption_1509_, lean_object* v_a_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lake_Job_sync(v_00_u03b1_1506_, v_inst_1507_, v_act_1508_, v_caption_1509_, v_a_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
lean_dec_ref(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec(v___y_1511_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg___lam__1(lean_object* v___x_1518_, lean_object* v___x_1519_, uint8_t v___x_1520_, uint8_t v___x_1521_, lean_object* v___x_1522_, lean_object* v___x_1523_, lean_object* v_act_1524_, lean_object* v_a_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_){
_start:
{
lean_object* v_a_1532_; lean_object* v_a_1533_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1535_ = lean_st_mk_ref(v___x_1518_);
lean_inc(v___x_1535_);
v___x_1536_ = l_IO_FS_Stream_ofBuffer(v___x_1535_);
lean_inc_ref(v___x_1536_);
v___x_1537_ = lean_get_set_stdout(v___x_1536_);
v___x_1538_ = lean_get_set_stderr(v___x_1536_);
lean_inc(v___x_1523_);
v___x_1539_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1539_, 0, v___x_1519_);
lean_ctor_set(v___x_1539_, 1, v___x_1522_);
lean_ctor_set(v___x_1539_, 2, v___x_1523_);
lean_ctor_set_uint8(v___x_1539_, sizeof(void*)*3, v___x_1520_);
lean_ctor_set_uint8(v___x_1539_, sizeof(void*)*3 + 1, v___x_1521_);
lean_inc_ref(v___y_1529_);
lean_inc(v___y_1528_);
lean_inc(v___y_1527_);
lean_inc(v___y_1526_);
v___x_1540_ = lean_apply_7(v_act_1524_, v_a_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___x_1539_, lean_box(0));
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1587_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
v_a_1542_ = lean_ctor_get(v___x_1540_, 1);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1544_ = v___x_1540_;
v_isShared_1545_ = v_isSharedCheck_1587_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_inc(v_a_1541_);
lean_dec(v___x_1540_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1587_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v___y_1547_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v_a_1553_; lean_object* v_log_1554_; uint8_t v_action_1555_; uint8_t v_wantsRebuild_1556_; lean_object* v_trace_1557_; lean_object* v_buildTime_1558_; lean_object* v___x_1559_; lean_object* v___y_1561_; lean_object* v_data_1582_; uint8_t v___x_1583_; 
lean_inc(v_a_1541_);
v___x_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1551_, 0, v_a_1541_);
v___x_1552_ = l_Lake_Job_sync___redArg___lam__0(v___x_1537_, v___x_1538_, v___x_1551_, v_a_1542_);
lean_dec_ref_known(v___x_1551_, 1);
v_a_1553_ = lean_ctor_get(v___x_1552_, 1);
lean_inc(v_a_1553_);
lean_dec_ref(v___x_1552_);
v_log_1554_ = lean_ctor_get(v_a_1553_, 0);
v_action_1555_ = lean_ctor_get_uint8(v_a_1553_, sizeof(void*)*3);
v_wantsRebuild_1556_ = lean_ctor_get_uint8(v_a_1553_, sizeof(void*)*3 + 1);
v_trace_1557_ = lean_ctor_get(v_a_1553_, 1);
v_buildTime_1558_ = lean_ctor_get(v_a_1553_, 2);
v___x_1559_ = lean_st_ref_get(v___x_1535_);
lean_dec(v___x_1535_);
v_data_1582_ = lean_ctor_get(v___x_1559_, 0);
lean_inc_ref(v_data_1582_);
lean_dec(v___x_1559_);
v___x_1583_ = lean_string_validate_utf8(v_data_1582_);
if (v___x_1583_ == 0)
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
lean_dec_ref(v_data_1582_);
v___x_1584_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__7, &l_Lake_Job_sync___redArg___closed__7_once, _init_l_Lake_Job_sync___redArg___closed__7);
v___x_1585_ = l_panic___at___00Lake_Job_sync_spec__0(v___x_1584_);
v___y_1561_ = v___x_1585_;
goto v___jp_1560_;
}
else
{
lean_object* v___x_1586_; 
v___x_1586_ = lean_string_from_utf8_unchecked(v_data_1582_);
v___y_1561_ = v___x_1586_;
goto v___jp_1560_;
}
v___jp_1546_:
{
lean_object* v___x_1549_; 
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 1, v___y_1547_);
v___x_1549_ = v___x_1544_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1541_);
lean_ctor_set(v_reuseFailAlloc_1550_, 1, v___y_1547_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
v___jp_1560_:
{
lean_object* v___x_1562_; uint8_t v___x_1563_; 
v___x_1562_ = lean_string_utf8_byte_size(v___y_1561_);
v___x_1563_ = lean_nat_dec_eq(v___x_1562_, v___x_1523_);
if (v___x_1563_ == 0)
{
lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1578_; 
lean_inc(v_buildTime_1558_);
lean_inc_ref(v_trace_1557_);
lean_inc_ref(v_log_1554_);
v_isSharedCheck_1578_ = !lean_is_exclusive(v_a_1553_);
if (v_isSharedCheck_1578_ == 0)
{
lean_object* v_unused_1579_; lean_object* v_unused_1580_; lean_object* v_unused_1581_; 
v_unused_1579_ = lean_ctor_get(v_a_1553_, 2);
lean_dec(v_unused_1579_);
v_unused_1580_ = lean_ctor_get(v_a_1553_, 1);
lean_dec(v_unused_1580_);
v_unused_1581_ = lean_ctor_get(v_a_1553_, 0);
lean_dec(v_unused_1581_);
v___x_1565_ = v_a_1553_;
v_isShared_1566_ = v_isSharedCheck_1578_;
goto v_resetjp_1564_;
}
else
{
lean_dec(v_a_1553_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1578_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1576_; 
v___x_1567_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__3));
v___x_1568_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1568_, 0, v___y_1561_);
lean_ctor_set(v___x_1568_, 1, v___x_1523_);
lean_ctor_set(v___x_1568_, 2, v___x_1562_);
v___x_1569_ = l_String_Slice_trimAscii(v___x_1568_);
v___x_1570_ = l_String_Slice_toString(v___x_1569_);
lean_dec_ref(v___x_1569_);
v___x_1571_ = lean_string_append(v___x_1567_, v___x_1570_);
lean_dec_ref(v___x_1570_);
v___x_1572_ = 1;
v___x_1573_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1573_, 0, v___x_1571_);
lean_ctor_set_uint8(v___x_1573_, sizeof(void*)*1, v___x_1572_);
v___x_1574_ = lean_array_push(v_log_1554_, v___x_1573_);
if (v_isShared_1566_ == 0)
{
lean_ctor_set(v___x_1565_, 0, v___x_1574_);
v___x_1576_ = v___x_1565_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v___x_1574_);
lean_ctor_set(v_reuseFailAlloc_1577_, 1, v_trace_1557_);
lean_ctor_set(v_reuseFailAlloc_1577_, 2, v_buildTime_1558_);
lean_ctor_set_uint8(v_reuseFailAlloc_1577_, sizeof(void*)*3, v_action_1555_);
lean_ctor_set_uint8(v_reuseFailAlloc_1577_, sizeof(void*)*3 + 1, v_wantsRebuild_1556_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
v___y_1547_ = v___x_1576_;
goto v___jp_1546_;
}
}
}
else
{
lean_dec_ref(v___y_1561_);
lean_dec(v___x_1523_);
v___y_1547_ = v_a_1553_;
goto v___jp_1546_;
}
}
}
}
else
{
lean_object* v_a_1588_; lean_object* v_a_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v_a_1592_; 
lean_dec(v___x_1535_);
lean_dec(v___x_1523_);
v_a_1588_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1588_);
v_a_1589_ = lean_ctor_get(v___x_1540_, 1);
lean_inc(v_a_1589_);
lean_dec_ref_known(v___x_1540_, 2);
v___x_1590_ = lean_box(0);
v___x_1591_ = l_Lake_Job_sync___redArg___lam__0(v___x_1537_, v___x_1538_, v___x_1590_, v_a_1589_);
v_a_1592_ = lean_ctor_get(v___x_1591_, 1);
lean_inc(v_a_1592_);
lean_dec_ref(v___x_1591_);
v_a_1532_ = v_a_1588_;
v_a_1533_ = v_a_1592_;
goto v___jp_1531_;
}
v___jp_1531_:
{
lean_object* v___x_1534_; 
v___x_1534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1534_, 0, v_a_1532_);
lean_ctor_set(v___x_1534_, 1, v_a_1533_);
return v___x_1534_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg___lam__1___boxed(lean_object* v___x_1593_, lean_object* v___x_1594_, lean_object* v___x_1595_, lean_object* v___x_1596_, lean_object* v___x_1597_, lean_object* v___x_1598_, lean_object* v_act_1599_, lean_object* v_a_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
uint8_t v___x_27557__boxed_1606_; uint8_t v___x_27558__boxed_1607_; lean_object* v_res_1608_; 
v___x_27557__boxed_1606_ = lean_unbox(v___x_1595_);
v___x_27558__boxed_1607_ = lean_unbox(v___x_1596_);
v_res_1608_ = l_Lake_Job_async___redArg___lam__1(v___x_1593_, v___x_1594_, v___x_27557__boxed_1606_, v___x_27558__boxed_1607_, v___x_1597_, v___x_1598_, v_act_1599_, v_a_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec(v___y_1602_);
lean_dec(v___y_1601_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg(lean_object* v_inst_1609_, lean_object* v_act_1610_, lean_object* v_prio_1611_, lean_object* v_caption_1612_, lean_object* v_a_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; uint8_t v___x_1622_; uint8_t v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___f_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1619_ = lean_unsigned_to_nat(0u);
v___x_1620_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__0, &l_Lake_Job_sync___redArg___closed__0_once, _init_l_Lake_Job_sync___redArg___closed__0);
v___x_1621_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_1622_ = 0;
v___x_1623_ = 0;
v___x_1624_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
v___x_1625_ = lean_box(v___x_1622_);
v___x_1626_ = lean_box(v___x_1623_);
lean_inc_ref(v___y_1617_);
lean_inc(v___y_1616_);
lean_inc(v___y_1615_);
lean_inc(v___y_1614_);
v___f_1627_ = lean_alloc_closure((void*)(l_Lake_Job_async___redArg___lam__1___boxed), 13, 12);
lean_closure_set(v___f_1627_, 0, v___x_1620_);
lean_closure_set(v___f_1627_, 1, v___x_1621_);
lean_closure_set(v___f_1627_, 2, v___x_1625_);
lean_closure_set(v___f_1627_, 3, v___x_1626_);
lean_closure_set(v___f_1627_, 4, v___x_1624_);
lean_closure_set(v___f_1627_, 5, v___x_1619_);
lean_closure_set(v___f_1627_, 6, v_act_1610_);
lean_closure_set(v___f_1627_, 7, v_a_1613_);
lean_closure_set(v___f_1627_, 8, v___y_1614_);
lean_closure_set(v___f_1627_, 9, v___y_1615_);
lean_closure_set(v___f_1627_, 10, v___y_1616_);
lean_closure_set(v___f_1627_, 11, v___y_1617_);
v___x_1628_ = lean_io_as_task(v___f_1627_, v_prio_1611_);
v___x_1629_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1629_, 0, v___x_1628_);
lean_ctor_set(v___x_1629_, 1, v_inst_1609_);
lean_ctor_set(v___x_1629_, 2, v_caption_1612_);
lean_ctor_set_uint8(v___x_1629_, sizeof(void*)*3, v___x_1623_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg___boxed(lean_object* v_inst_1630_, lean_object* v_act_1631_, lean_object* v_prio_1632_, lean_object* v_caption_1633_, lean_object* v_a_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Lake_Job_async___redArg(v_inst_1630_, v_act_1631_, v_prio_1632_, v_caption_1633_, v_a_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
lean_dec_ref(v___y_1638_);
lean_dec(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec(v___y_1635_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async(lean_object* v_00_u03b1_1641_, lean_object* v_inst_1642_, lean_object* v_act_1643_, lean_object* v_prio_1644_, lean_object* v_caption_1645_, lean_object* v_a_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Lake_Job_async___redArg(v_inst_1642_, v_act_1643_, v_prio_1644_, v_caption_1645_, v_a_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async___boxed(lean_object* v_00_u03b1_1654_, lean_object* v_inst_1655_, lean_object* v_act_1656_, lean_object* v_prio_1657_, lean_object* v_caption_1658_, lean_object* v_a_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Lake_Job_async(v_00_u03b1_1654_, v_inst_1655_, v_act_1656_, v_prio_1657_, v_caption_1658_, v_a_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
lean_dec_ref(v___y_1664_);
lean_dec_ref(v___y_1663_);
lean_dec(v___y_1662_);
lean_dec(v___y_1661_);
lean_dec(v___y_1660_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait___redArg(lean_object* v_self_1667_){
_start:
{
lean_object* v_task_1669_; lean_object* v___x_1670_; 
v_task_1669_ = lean_ctor_get(v_self_1667_, 0);
lean_inc_ref(v_task_1669_);
lean_dec_ref(v_self_1667_);
v___x_1670_ = lean_io_wait(v_task_1669_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait___redArg___boxed(lean_object* v_self_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l_Lake_Job_wait___redArg(v_self_1671_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait(lean_object* v_00_u03b1_1674_, lean_object* v_self_1675_){
_start:
{
lean_object* v_task_1677_; lean_object* v___x_1678_; 
v_task_1677_ = lean_ctor_get(v_self_1675_, 0);
lean_inc_ref(v_task_1677_);
lean_dec_ref(v_self_1675_);
v___x_1678_ = lean_io_wait(v_task_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait___boxed(lean_object* v_00_u03b1_1679_, lean_object* v_self_1680_, lean_object* v___y_1681_){
_start:
{
lean_object* v_res_1682_; 
v_res_1682_ = l_Lake_Job_wait(v_00_u03b1_1679_, v_self_1680_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f___redArg(lean_object* v_self_1683_){
_start:
{
lean_object* v_task_1685_; lean_object* v___x_1686_; 
v_task_1685_ = lean_ctor_get(v_self_1683_, 0);
lean_inc_ref(v_task_1685_);
lean_dec_ref(v_self_1683_);
v___x_1686_ = lean_io_wait(v_task_1685_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1688_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc(v_a_1687_);
lean_dec_ref_known(v___x_1686_, 2);
v___x_1688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1688_, 0, v_a_1687_);
return v___x_1688_;
}
else
{
lean_object* v___x_1689_; 
lean_dec_ref_known(v___x_1686_, 2);
v___x_1689_ = lean_box(0);
return v___x_1689_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f___redArg___boxed(lean_object* v_self_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lake_Job_wait_x3f___redArg(v_self_1690_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f(lean_object* v_00_u03b1_1693_, lean_object* v_self_1694_){
_start:
{
lean_object* v_task_1696_; lean_object* v___x_1697_; 
v_task_1696_ = lean_ctor_get(v_self_1694_, 0);
lean_inc_ref(v_task_1696_);
lean_dec_ref(v_self_1694_);
v___x_1697_ = lean_io_wait(v_task_1696_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v___x_1699_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_a_1698_);
lean_dec_ref_known(v___x_1697_, 2);
v___x_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1699_, 0, v_a_1698_);
return v___x_1699_;
}
else
{
lean_object* v___x_1700_; 
lean_dec_ref_known(v___x_1697_, 2);
v___x_1700_ = lean_box(0);
return v___x_1700_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f___boxed(lean_object* v_00_u03b1_1701_, lean_object* v_self_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l_Lake_Job_wait_x3f(v_00_u03b1_1701_, v_self_1702_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0(lean_object* v_as_1705_, size_t v_i_1706_, size_t v_stop_1707_, lean_object* v_b_1708_, lean_object* v___y_1709_){
_start:
{
uint8_t v___x_1711_; 
v___x_1711_ = lean_usize_dec_eq(v_i_1706_, v_stop_1707_);
if (v___x_1711_ == 0)
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; size_t v___x_1715_; size_t v___x_1716_; 
v___x_1712_ = lean_array_uget_borrowed(v_as_1705_, v_i_1706_);
v___x_1713_ = lean_box(0);
lean_inc(v___x_1712_);
v___x_1714_ = lean_array_push(v___y_1709_, v___x_1712_);
v___x_1715_ = ((size_t)1ULL);
v___x_1716_ = lean_usize_add(v_i_1706_, v___x_1715_);
v_i_1706_ = v___x_1716_;
v_b_1708_ = v___x_1713_;
v___y_1709_ = v___x_1714_;
goto _start;
}
else
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1718_, 0, v_b_1708_);
lean_ctor_set(v___x_1718_, 1, v___y_1709_);
return v___x_1718_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0___boxed(lean_object* v_as_1719_, lean_object* v_i_1720_, lean_object* v_stop_1721_, lean_object* v_b_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_){
_start:
{
size_t v_i_boxed_1725_; size_t v_stop_boxed_1726_; lean_object* v_res_1727_; 
v_i_boxed_1725_ = lean_unbox_usize(v_i_1720_);
lean_dec(v_i_1720_);
v_stop_boxed_1726_ = lean_unbox_usize(v_stop_1721_);
lean_dec(v_stop_1721_);
v_res_1727_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0(v_as_1719_, v_i_boxed_1725_, v_stop_boxed_1726_, v_b_1722_, v___y_1723_);
lean_dec_ref(v_as_1719_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_await___redArg(lean_object* v_self_1728_, lean_object* v_a_1729_){
_start:
{
lean_object* v_task_1731_; lean_object* v___x_1732_; 
v_task_1731_ = lean_ctor_get(v_self_1728_, 0);
lean_inc_ref(v_task_1731_);
lean_dec_ref(v_self_1728_);
v___x_1732_ = lean_io_wait(v_task_1731_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1761_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
v_a_1734_ = lean_ctor_get(v___x_1732_, 1);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1736_ = v___x_1732_;
v_isShared_1737_ = v_isSharedCheck_1761_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_inc(v_a_1733_);
lean_dec(v___x_1732_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1761_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v_a_1739_; lean_object* v_log_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; uint8_t v___x_1746_; 
v_log_1743_ = lean_ctor_get(v_a_1734_, 0);
lean_inc_ref(v_log_1743_);
lean_dec(v_a_1734_);
v___x_1744_ = lean_unsigned_to_nat(0u);
v___x_1745_ = lean_array_get_size(v_log_1743_);
v___x_1746_ = lean_nat_dec_lt(v___x_1744_, v___x_1745_);
if (v___x_1746_ == 0)
{
lean_dec_ref(v_log_1743_);
v_a_1739_ = v_a_1729_;
goto v___jp_1738_;
}
else
{
lean_object* v___x_1747_; size_t v___x_1748_; size_t v___x_1749_; lean_object* v___x_1750_; 
v___x_1747_ = lean_box(0);
v___x_1748_ = ((size_t)0ULL);
v___x_1749_ = lean_usize_of_nat(v___x_1745_);
v___x_1750_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0(v_log_1743_, v___x_1748_, v___x_1749_, v___x_1747_, v_a_1729_);
lean_dec_ref(v_log_1743_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 1);
lean_inc(v_a_1751_);
lean_dec_ref_known(v___x_1750_, 2);
v_a_1739_ = v_a_1751_;
goto v___jp_1738_;
}
else
{
lean_object* v_a_1752_; lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1760_; 
lean_del_object(v___x_1736_);
lean_dec(v_a_1733_);
v_a_1752_ = lean_ctor_get(v___x_1750_, 0);
v_a_1753_ = lean_ctor_get(v___x_1750_, 1);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1755_ = v___x_1750_;
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_inc(v_a_1752_);
lean_dec(v___x_1750_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1758_; 
if (v_isShared_1756_ == 0)
{
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_a_1752_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v_a_1753_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
v___jp_1738_:
{
lean_object* v___x_1741_; 
if (v_isShared_1737_ == 0)
{
lean_ctor_set(v___x_1736_, 1, v_a_1739_);
v___x_1741_ = v___x_1736_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1733_);
lean_ctor_set(v_reuseFailAlloc_1742_, 1, v_a_1739_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
}
else
{
lean_object* v_a_1762_; lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1790_; 
v_a_1762_ = lean_ctor_get(v___x_1732_, 0);
v_a_1763_ = lean_ctor_get(v___x_1732_, 1);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1765_ = v___x_1732_;
v_isShared_1766_ = v_isSharedCheck_1790_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_inc(v_a_1762_);
lean_dec(v___x_1732_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1790_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v_a_1768_; lean_object* v_log_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; uint8_t v___x_1775_; 
v_log_1772_ = lean_ctor_get(v_a_1763_, 0);
lean_inc_ref(v_log_1772_);
lean_dec(v_a_1763_);
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = lean_array_get_size(v_log_1772_);
v___x_1775_ = lean_nat_dec_lt(v___x_1773_, v___x_1774_);
if (v___x_1775_ == 0)
{
lean_dec_ref(v_log_1772_);
v_a_1768_ = v_a_1729_;
goto v___jp_1767_;
}
else
{
lean_object* v___x_1776_; size_t v___x_1777_; size_t v___x_1778_; lean_object* v___x_1779_; 
v___x_1776_ = lean_box(0);
v___x_1777_ = ((size_t)0ULL);
v___x_1778_ = lean_usize_of_nat(v___x_1774_);
v___x_1779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0(v_log_1772_, v___x_1777_, v___x_1778_, v___x_1776_, v_a_1729_);
lean_dec_ref(v_log_1772_);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v_a_1780_; 
v_a_1780_ = lean_ctor_get(v___x_1779_, 1);
lean_inc(v_a_1780_);
lean_dec_ref_known(v___x_1779_, 2);
v_a_1768_ = v_a_1780_;
goto v___jp_1767_;
}
else
{
lean_object* v_a_1781_; lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1789_; 
lean_del_object(v___x_1765_);
lean_dec(v_a_1762_);
v_a_1781_ = lean_ctor_get(v___x_1779_, 0);
v_a_1782_ = lean_ctor_get(v___x_1779_, 1);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1779_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1784_ = v___x_1779_;
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_inc(v_a_1781_);
lean_dec(v___x_1779_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_a_1781_);
lean_ctor_set(v_reuseFailAlloc_1788_, 1, v_a_1782_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
v___jp_1767_:
{
lean_object* v___x_1770_; 
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 1, v_a_1768_);
v___x_1770_ = v___x_1765_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1762_);
lean_ctor_set(v_reuseFailAlloc_1771_, 1, v_a_1768_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_await___redArg___boxed(lean_object* v_self_1791_, lean_object* v_a_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v_res_1794_; 
v_res_1794_ = l_Lake_Job_await___redArg(v_self_1791_, v_a_1792_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_await(lean_object* v_00_u03b1_1795_, lean_object* v_self_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = l_Lake_Job_await___redArg(v_self_1796_, v_a_1797_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_await___boxed(lean_object* v_00_u03b1_1800_, lean_object* v_self_1801_, lean_object* v_a_1802_, lean_object* v___y_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_Lake_Job_await(v_00_u03b1_1800_, v_self_1801_, v_a_1802_);
return v_res_1804_;
}
}
static lean_object* _init_l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0(void){
_start:
{
lean_object* v___x_1805_; uint8_t v___x_1806_; lean_object* v___x_1807_; 
v___x_1805_ = l_Lake_cancelMessage;
v___x_1806_ = 0;
v___x_1807_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1807_, 0, v___x_1805_);
lean_ctor_set_uint8(v___x_1807_, sizeof(void*)*1, v___x_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg(lean_object* v_s_1808_){
_start:
{
lean_object* v_log_1809_; uint8_t v_action_1810_; uint8_t v_wantsRebuild_1811_; lean_object* v_trace_1812_; lean_object* v_buildTime_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1824_; 
v_log_1809_ = lean_ctor_get(v_s_1808_, 0);
v_action_1810_ = lean_ctor_get_uint8(v_s_1808_, sizeof(void*)*3);
v_wantsRebuild_1811_ = lean_ctor_get_uint8(v_s_1808_, sizeof(void*)*3 + 1);
v_trace_1812_ = lean_ctor_get(v_s_1808_, 1);
v_buildTime_1813_ = lean_ctor_get(v_s_1808_, 2);
v_isSharedCheck_1824_ = !lean_is_exclusive(v_s_1808_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1815_ = v_s_1808_;
v_isShared_1816_ = v_isSharedCheck_1824_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_buildTime_1813_);
lean_inc(v_trace_1812_);
lean_inc(v_log_1809_);
lean_dec(v_s_1808_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1824_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1817_ = lean_array_get_size(v_log_1809_);
v___x_1818_ = lean_obj_once(&l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0, &l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0_once, _init_l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0);
v___x_1819_ = lean_array_push(v_log_1809_, v___x_1818_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 0, v___x_1819_);
v___x_1821_ = v___x_1815_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1819_);
lean_ctor_set(v_reuseFailAlloc_1823_, 1, v_trace_1812_);
lean_ctor_set(v_reuseFailAlloc_1823_, 2, v_buildTime_1813_);
lean_ctor_set_uint8(v_reuseFailAlloc_1823_, sizeof(void*)*3, v_action_1810_);
lean_ctor_set_uint8(v_reuseFailAlloc_1823_, sizeof(void*)*3 + 1, v_wantsRebuild_1811_);
v___x_1821_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
lean_object* v___x_1822_; 
v___x_1822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1817_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
return v___x_1822_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult(lean_object* v_00_u03b1_1825_, lean_object* v_s_1826_){
_start:
{
lean_object* v_log_1827_; uint8_t v_action_1828_; uint8_t v_wantsRebuild_1829_; lean_object* v_trace_1830_; lean_object* v_buildTime_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1842_; 
v_log_1827_ = lean_ctor_get(v_s_1826_, 0);
v_action_1828_ = lean_ctor_get_uint8(v_s_1826_, sizeof(void*)*3);
v_wantsRebuild_1829_ = lean_ctor_get_uint8(v_s_1826_, sizeof(void*)*3 + 1);
v_trace_1830_ = lean_ctor_get(v_s_1826_, 1);
v_buildTime_1831_ = lean_ctor_get(v_s_1826_, 2);
v_isSharedCheck_1842_ = !lean_is_exclusive(v_s_1826_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1833_ = v_s_1826_;
v_isShared_1834_ = v_isSharedCheck_1842_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_buildTime_1831_);
lean_inc(v_trace_1830_);
lean_inc(v_log_1827_);
lean_dec(v_s_1826_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1842_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1839_; 
v___x_1835_ = lean_array_get_size(v_log_1827_);
v___x_1836_ = lean_obj_once(&l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0, &l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0_once, _init_l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0);
v___x_1837_ = lean_array_push(v_log_1827_, v___x_1836_);
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 0, v___x_1837_);
v___x_1839_ = v___x_1833_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v___x_1837_);
lean_ctor_set(v_reuseFailAlloc_1841_, 1, v_trace_1830_);
lean_ctor_set(v_reuseFailAlloc_1841_, 2, v_buildTime_1831_);
lean_ctor_set_uint8(v_reuseFailAlloc_1841_, sizeof(void*)*3, v_action_1828_);
lean_ctor_set_uint8(v_reuseFailAlloc_1841_, sizeof(void*)*3 + 1, v_wantsRebuild_1829_);
v___x_1839_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
lean_object* v___x_1840_; 
v___x_1840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1835_);
lean_ctor_set(v___x_1840_, 1, v___x_1839_);
return v___x_1840_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg___lam__1(lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v_f_1845_, lean_object* v_a_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v_x_1850_){
_start:
{
lean_object* v_a_1853_; lean_object* v_a_1854_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1861_; uint8_t v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v___y_1865_; uint8_t v___y_1866_; lean_object* v___y_1867_; lean_object* v___y_1868_; lean_object* v___y_1869_; 
if (lean_obj_tag(v_x_1850_) == 0)
{
lean_object* v_a_1881_; lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1949_; 
v_a_1881_ = lean_ctor_get(v_x_1850_, 0);
v_a_1882_ = lean_ctor_get(v_x_1850_, 1);
v_isSharedCheck_1949_ = !lean_is_exclusive(v_x_1850_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1884_ = v_x_1850_;
v_isShared_1885_ = v_isSharedCheck_1949_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_inc(v_a_1881_);
lean_dec(v_x_1850_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1949_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v_cancelTk_x3f_1928_; 
v_cancelTk_x3f_1928_ = lean_ctor_get(v___y_1843_, 6);
if (lean_obj_tag(v_cancelTk_x3f_1928_) == 1)
{
lean_object* v_val_1929_; uint8_t v___x_1930_; 
v_val_1929_ = lean_ctor_get(v_cancelTk_x3f_1928_, 0);
v___x_1930_ = l_IO_CancelToken_isSet(v_val_1929_);
if (v___x_1930_ == 0)
{
lean_del_object(v___x_1884_);
goto v___jp_1886_;
}
else
{
lean_object* v_log_1931_; uint8_t v_action_1932_; uint8_t v_wantsRebuild_1933_; lean_object* v_trace_1934_; lean_object* v_buildTime_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1948_; 
lean_dec(v_a_1881_);
lean_dec_ref(v_a_1846_);
lean_dec_ref(v_f_1845_);
v_log_1931_ = lean_ctor_get(v_a_1882_, 0);
v_action_1932_ = lean_ctor_get_uint8(v_a_1882_, sizeof(void*)*3);
v_wantsRebuild_1933_ = lean_ctor_get_uint8(v_a_1882_, sizeof(void*)*3 + 1);
v_trace_1934_ = lean_ctor_get(v_a_1882_, 1);
v_buildTime_1935_ = lean_ctor_get(v_a_1882_, 2);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_a_1882_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1937_ = v_a_1882_;
v_isShared_1938_ = v_isSharedCheck_1948_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_buildTime_1935_);
lean_inc(v_trace_1934_);
lean_inc(v_log_1931_);
lean_dec(v_a_1882_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1948_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1943_; 
v___x_1939_ = lean_array_get_size(v_log_1931_);
v___x_1940_ = lean_obj_once(&l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0, &l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0_once, _init_l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0);
v___x_1941_ = lean_array_push(v_log_1931_, v___x_1940_);
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 0, v___x_1941_);
v___x_1943_ = v___x_1937_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1941_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v_trace_1934_);
lean_ctor_set(v_reuseFailAlloc_1947_, 2, v_buildTime_1935_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*3, v_action_1932_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*3 + 1, v_wantsRebuild_1933_);
v___x_1943_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
lean_object* v___x_1945_; 
if (v_isShared_1885_ == 0)
{
lean_ctor_set_tag(v___x_1884_, 1);
lean_ctor_set(v___x_1884_, 1, v___x_1943_);
lean_ctor_set(v___x_1884_, 0, v___x_1939_);
v___x_1945_ = v___x_1884_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1939_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
else
{
lean_del_object(v___x_1884_);
goto v___jp_1886_;
}
v___jp_1886_:
{
lean_object* v_log_1887_; uint8_t v_action_1888_; uint8_t v_wantsRebuild_1889_; lean_object* v_trace_1890_; lean_object* v_buildTime_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1927_; 
v_log_1887_ = lean_ctor_get(v_a_1882_, 0);
v_action_1888_ = lean_ctor_get_uint8(v_a_1882_, sizeof(void*)*3);
v_wantsRebuild_1889_ = lean_ctor_get_uint8(v_a_1882_, sizeof(void*)*3 + 1);
v_trace_1890_ = lean_ctor_get(v_a_1882_, 1);
v_buildTime_1891_ = lean_ctor_get(v_a_1882_, 2);
v_isSharedCheck_1927_ = !lean_is_exclusive(v_a_1882_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1893_ = v_a_1882_;
v_isShared_1894_ = v_isSharedCheck_1927_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_buildTime_1891_);
lean_inc(v_trace_1890_);
lean_inc(v_log_1887_);
lean_dec(v_a_1882_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1927_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v_trace_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1903_; 
lean_inc_ref(v___y_1844_);
v_trace_1895_ = l_Lake_BuildTrace_mix(v___y_1844_, v_trace_1890_);
v___x_1896_ = lean_unsigned_to_nat(0u);
v___x_1897_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__0, &l_Lake_Job_sync___redArg___closed__0_once, _init_l_Lake_Job_sync___redArg___closed__0);
v___x_1898_ = lean_st_mk_ref(v___x_1897_);
lean_inc(v___x_1898_);
v___x_1899_ = l_IO_FS_Stream_ofBuffer(v___x_1898_);
lean_inc_ref(v___x_1899_);
v___x_1900_ = lean_get_set_stdout(v___x_1899_);
v___x_1901_ = lean_get_set_stderr(v___x_1899_);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 1, v_trace_1895_);
v___x_1903_ = v___x_1893_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_log_1887_);
lean_ctor_set(v_reuseFailAlloc_1926_, 1, v_trace_1895_);
lean_ctor_set(v_reuseFailAlloc_1926_, 2, v_buildTime_1891_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*3, v_action_1888_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*3 + 1, v_wantsRebuild_1889_);
v___x_1903_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
lean_object* v___x_1904_; 
lean_inc_ref(v___y_1843_);
lean_inc(v___y_1849_);
lean_inc(v___y_1848_);
lean_inc(v___y_1847_);
v___x_1904_ = lean_apply_8(v_f_1845_, v_a_1881_, v_a_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1843_, v___x_1903_, lean_box(0));
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; lean_object* v_a_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v_a_1909_; lean_object* v_log_1910_; uint8_t v_action_1911_; uint8_t v_wantsRebuild_1912_; lean_object* v_trace_1913_; lean_object* v_buildTime_1914_; lean_object* v___x_1915_; lean_object* v_data_1916_; uint8_t v___x_1917_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
lean_inc_n(v_a_1905_, 2);
v_a_1906_ = lean_ctor_get(v___x_1904_, 1);
lean_inc(v_a_1906_);
lean_dec_ref_known(v___x_1904_, 2);
v___x_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1907_, 0, v_a_1905_);
v___x_1908_ = l_Lake_Job_sync___redArg___lam__0(v___x_1900_, v___x_1901_, v___x_1907_, v_a_1906_);
lean_dec_ref_known(v___x_1907_, 1);
v_a_1909_ = lean_ctor_get(v___x_1908_, 1);
lean_inc(v_a_1909_);
lean_dec_ref(v___x_1908_);
v_log_1910_ = lean_ctor_get(v_a_1909_, 0);
lean_inc_ref(v_log_1910_);
v_action_1911_ = lean_ctor_get_uint8(v_a_1909_, sizeof(void*)*3);
v_wantsRebuild_1912_ = lean_ctor_get_uint8(v_a_1909_, sizeof(void*)*3 + 1);
v_trace_1913_ = lean_ctor_get(v_a_1909_, 1);
lean_inc_ref(v_trace_1913_);
v_buildTime_1914_ = lean_ctor_get(v_a_1909_, 2);
lean_inc(v_buildTime_1914_);
v___x_1915_ = lean_st_ref_get(v___x_1898_);
lean_dec(v___x_1898_);
v_data_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc_ref(v_data_1916_);
lean_dec(v___x_1915_);
v___x_1917_ = lean_string_validate_utf8(v_data_1916_);
if (v___x_1917_ == 0)
{
lean_object* v___x_1918_; lean_object* v___x_1919_; 
lean_dec_ref(v_data_1916_);
v___x_1918_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__7, &l_Lake_Job_sync___redArg___closed__7_once, _init_l_Lake_Job_sync___redArg___closed__7);
v___x_1919_ = l_panic___at___00Lake_Job_sync_spec__0(v___x_1918_);
v___y_1861_ = v_trace_1913_;
v___y_1862_ = v_wantsRebuild_1912_;
v___y_1863_ = v_a_1905_;
v___y_1864_ = v_log_1910_;
v___y_1865_ = v___x_1896_;
v___y_1866_ = v_action_1911_;
v___y_1867_ = v_a_1909_;
v___y_1868_ = v_buildTime_1914_;
v___y_1869_ = v___x_1919_;
goto v___jp_1860_;
}
else
{
lean_object* v___x_1920_; 
v___x_1920_ = lean_string_from_utf8_unchecked(v_data_1916_);
v___y_1861_ = v_trace_1913_;
v___y_1862_ = v_wantsRebuild_1912_;
v___y_1863_ = v_a_1905_;
v___y_1864_ = v_log_1910_;
v___y_1865_ = v___x_1896_;
v___y_1866_ = v_action_1911_;
v___y_1867_ = v_a_1909_;
v___y_1868_ = v_buildTime_1914_;
v___y_1869_ = v___x_1920_;
goto v___jp_1860_;
}
}
else
{
lean_object* v_a_1921_; lean_object* v_a_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v_a_1925_; 
lean_dec(v___x_1898_);
v_a_1921_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_a_1921_);
v_a_1922_ = lean_ctor_get(v___x_1904_, 1);
lean_inc(v_a_1922_);
lean_dec_ref_known(v___x_1904_, 2);
v___x_1923_ = lean_box(0);
v___x_1924_ = l_Lake_Job_sync___redArg___lam__0(v___x_1900_, v___x_1901_, v___x_1923_, v_a_1922_);
v_a_1925_ = lean_ctor_get(v___x_1924_, 1);
lean_inc(v_a_1925_);
lean_dec_ref(v___x_1924_);
v_a_1853_ = v_a_1921_;
v_a_1854_ = v_a_1925_;
goto v___jp_1852_;
}
}
}
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_dec_ref(v_a_1846_);
lean_dec_ref(v_f_1845_);
v_a_1950_ = lean_ctor_get(v_x_1850_, 0);
v_a_1951_ = lean_ctor_get(v_x_1850_, 1);
v_isSharedCheck_1958_ = !lean_is_exclusive(v_x_1850_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v_x_1850_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_inc(v_a_1950_);
lean_dec(v_x_1850_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1950_);
lean_ctor_set(v_reuseFailAlloc_1957_, 1, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
v___jp_1852_:
{
lean_object* v___x_1855_; 
v___x_1855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1855_, 0, v_a_1853_);
lean_ctor_set(v___x_1855_, 1, v_a_1854_);
return v___x_1855_;
}
v___jp_1856_:
{
lean_object* v___x_1859_; 
v___x_1859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1859_, 0, v___y_1857_);
lean_ctor_set(v___x_1859_, 1, v___y_1858_);
return v___x_1859_;
}
v___jp_1860_:
{
lean_object* v___x_1870_; uint8_t v___x_1871_; 
v___x_1870_ = lean_string_utf8_byte_size(v___y_1869_);
v___x_1871_ = lean_nat_dec_eq(v___x_1870_, v___y_1865_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; uint8_t v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
lean_dec_ref(v___y_1867_);
v___x_1872_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__3));
v___x_1873_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1873_, 0, v___y_1869_);
lean_ctor_set(v___x_1873_, 1, v___y_1865_);
lean_ctor_set(v___x_1873_, 2, v___x_1870_);
v___x_1874_ = l_String_Slice_trimAscii(v___x_1873_);
v___x_1875_ = l_String_Slice_toString(v___x_1874_);
lean_dec_ref(v___x_1874_);
v___x_1876_ = lean_string_append(v___x_1872_, v___x_1875_);
lean_dec_ref(v___x_1875_);
v___x_1877_ = 1;
v___x_1878_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1878_, 0, v___x_1876_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*1, v___x_1877_);
v___x_1879_ = lean_array_push(v___y_1864_, v___x_1878_);
v___x_1880_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
lean_ctor_set(v___x_1880_, 1, v___y_1861_);
lean_ctor_set(v___x_1880_, 2, v___y_1868_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*3, v___y_1866_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*3 + 1, v___y_1862_);
v___y_1857_ = v___y_1863_;
v___y_1858_ = v___x_1880_;
goto v___jp_1856_;
}
else
{
lean_dec_ref(v___y_1869_);
lean_dec(v___y_1868_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
lean_dec_ref(v___y_1861_);
v___y_1857_ = v___y_1863_;
v___y_1858_ = v___y_1867_;
goto v___jp_1856_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg___lam__1___boxed(lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v_f_1961_, lean_object* v_a_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v_x_1966_, lean_object* v___y_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = l_Lake_Job_mapM___redArg___lam__1(v___y_1959_, v___y_1960_, v_f_1961_, v_a_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v_x_1966_);
lean_dec(v___y_1965_);
lean_dec(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1960_);
lean_dec_ref(v___y_1959_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg(lean_object* v_kind_1969_, lean_object* v_self_1970_, lean_object* v_f_1971_, lean_object* v_prio_1972_, uint8_t v_sync_1973_, lean_object* v_a_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_task_1981_; lean_object* v_caption_1982_; uint8_t v_optional_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1992_; 
v_task_1981_ = lean_ctor_get(v_self_1970_, 0);
v_caption_1982_ = lean_ctor_get(v_self_1970_, 2);
v_optional_1983_ = lean_ctor_get_uint8(v_self_1970_, sizeof(void*)*3);
v_isSharedCheck_1992_ = !lean_is_exclusive(v_self_1970_);
if (v_isSharedCheck_1992_ == 0)
{
lean_object* v_unused_1993_; 
v_unused_1993_ = lean_ctor_get(v_self_1970_, 1);
lean_dec(v_unused_1993_);
v___x_1985_ = v_self_1970_;
v_isShared_1986_ = v_isSharedCheck_1992_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_caption_1982_);
lean_inc(v_task_1981_);
lean_dec(v_self_1970_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1992_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___f_1987_; lean_object* v___x_1988_; lean_object* v___x_1990_; 
lean_inc(v___y_1977_);
lean_inc(v___y_1976_);
lean_inc(v___y_1975_);
lean_inc_ref(v___y_1979_);
lean_inc_ref(v___y_1978_);
v___f_1987_ = lean_alloc_closure((void*)(l_Lake_Job_mapM___redArg___lam__1___boxed), 9, 7);
lean_closure_set(v___f_1987_, 0, v___y_1978_);
lean_closure_set(v___f_1987_, 1, v___y_1979_);
lean_closure_set(v___f_1987_, 2, v_f_1971_);
lean_closure_set(v___f_1987_, 3, v_a_1974_);
lean_closure_set(v___f_1987_, 4, v___y_1975_);
lean_closure_set(v___f_1987_, 5, v___y_1976_);
lean_closure_set(v___f_1987_, 6, v___y_1977_);
v___x_1988_ = lean_io_map_task(v___f_1987_, v_task_1981_, v_prio_1972_, v_sync_1973_);
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 1, v_kind_1969_);
lean_ctor_set(v___x_1985_, 0, v___x_1988_);
v___x_1990_ = v___x_1985_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1988_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_kind_1969_);
lean_ctor_set(v_reuseFailAlloc_1991_, 2, v_caption_1982_);
lean_ctor_set_uint8(v_reuseFailAlloc_1991_, sizeof(void*)*3, v_optional_1983_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg___boxed(lean_object* v_kind_1994_, lean_object* v_self_1995_, lean_object* v_f_1996_, lean_object* v_prio_1997_, lean_object* v_sync_1998_, lean_object* v_a_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_){
_start:
{
uint8_t v_sync_boxed_2006_; lean_object* v_res_2007_; 
v_sync_boxed_2006_ = lean_unbox(v_sync_1998_);
v_res_2007_ = l_Lake_Job_mapM___redArg(v_kind_1994_, v_self_1995_, v_f_1996_, v_prio_1997_, v_sync_boxed_2006_, v_a_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
lean_dec_ref(v___y_2004_);
lean_dec_ref(v___y_2003_);
lean_dec(v___y_2002_);
lean_dec(v___y_2001_);
lean_dec(v___y_2000_);
return v_res_2007_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM(lean_object* v_00_u03b2_2008_, lean_object* v_00_u03b1_2009_, lean_object* v_kind_2010_, lean_object* v_self_2011_, lean_object* v_f_2012_, lean_object* v_prio_2013_, uint8_t v_sync_2014_, lean_object* v_a_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_){
_start:
{
lean_object* v___x_2022_; 
v___x_2022_ = l_Lake_Job_mapM___redArg(v_kind_2010_, v_self_2011_, v_f_2012_, v_prio_2013_, v_sync_2014_, v_a_2015_, v___y_2016_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM___boxed(lean_object* v_00_u03b2_2023_, lean_object* v_00_u03b1_2024_, lean_object* v_kind_2025_, lean_object* v_self_2026_, lean_object* v_f_2027_, lean_object* v_prio_2028_, lean_object* v_sync_2029_, lean_object* v_a_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
uint8_t v_sync_boxed_2037_; lean_object* v_res_2038_; 
v_sync_boxed_2037_ = lean_unbox(v_sync_2029_);
v_res_2038_ = l_Lake_Job_mapM(v_00_u03b2_2023_, v_00_u03b1_2024_, v_kind_2025_, v_self_2026_, v_f_2027_, v_prio_2028_, v_sync_boxed_2037_, v_a_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
lean_dec_ref(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec(v___y_2032_);
lean_dec(v___y_2031_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__0(lean_object* v_a_2039_, lean_object* v_x_2040_){
_start:
{
if (lean_obj_tag(v_x_2040_) == 0)
{
lean_object* v_a_2041_; lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2064_; 
v_a_2041_ = lean_ctor_get(v_x_2040_, 0);
v_a_2042_ = lean_ctor_get(v_x_2040_, 1);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_x_2040_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2044_ = v_x_2040_;
v_isShared_2045_ = v_isSharedCheck_2064_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_inc(v_a_2041_);
lean_dec(v_x_2040_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2064_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2046_; lean_object* v_log_2047_; uint8_t v_action_2048_; uint8_t v_wantsRebuild_2049_; lean_object* v_buildTime_2050_; lean_object* v_trace_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2061_; 
lean_inc(v_a_2042_);
v___x_2046_ = l_Lake_JobState_merge(v_a_2039_, v_a_2042_);
v_log_2047_ = lean_ctor_get(v___x_2046_, 0);
lean_inc_ref(v_log_2047_);
v_action_2048_ = lean_ctor_get_uint8(v___x_2046_, sizeof(void*)*3);
v_wantsRebuild_2049_ = lean_ctor_get_uint8(v___x_2046_, sizeof(void*)*3 + 1);
v_buildTime_2050_ = lean_ctor_get(v___x_2046_, 2);
lean_inc(v_buildTime_2050_);
lean_dec_ref(v___x_2046_);
v_trace_2051_ = lean_ctor_get(v_a_2042_, 1);
v_isSharedCheck_2061_ = !lean_is_exclusive(v_a_2042_);
if (v_isSharedCheck_2061_ == 0)
{
lean_object* v_unused_2062_; lean_object* v_unused_2063_; 
v_unused_2062_ = lean_ctor_get(v_a_2042_, 2);
lean_dec(v_unused_2062_);
v_unused_2063_ = lean_ctor_get(v_a_2042_, 0);
lean_dec(v_unused_2063_);
v___x_2053_ = v_a_2042_;
v_isShared_2054_ = v_isSharedCheck_2061_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_trace_2051_);
lean_dec(v_a_2042_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2061_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 2, v_buildTime_2050_);
lean_ctor_set(v___x_2053_, 0, v_log_2047_);
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v_log_2047_);
lean_ctor_set(v_reuseFailAlloc_2060_, 1, v_trace_2051_);
lean_ctor_set(v_reuseFailAlloc_2060_, 2, v_buildTime_2050_);
v___x_2056_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
lean_object* v___x_2058_; 
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*3, v_action_2048_);
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*3 + 1, v_wantsRebuild_2049_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 1, v___x_2056_);
v___x_2058_ = v___x_2044_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2041_);
lean_ctor_set(v_reuseFailAlloc_2059_, 1, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
}
else
{
lean_object* v_a_2065_; lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2091_; 
v_a_2065_ = lean_ctor_get(v_x_2040_, 0);
v_a_2066_ = lean_ctor_get(v_x_2040_, 1);
v_isSharedCheck_2091_ = !lean_is_exclusive(v_x_2040_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_2068_ = v_x_2040_;
v_isShared_2069_ = v_isSharedCheck_2091_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_inc(v_a_2065_);
lean_dec(v_x_2040_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2091_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v_log_2070_; lean_object* v___x_2071_; lean_object* v_log_2072_; uint8_t v_action_2073_; uint8_t v_wantsRebuild_2074_; lean_object* v_buildTime_2075_; lean_object* v_trace_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2088_; 
v_log_2070_ = lean_ctor_get(v_a_2039_, 0);
lean_inc_ref(v_log_2070_);
lean_inc(v_a_2066_);
v___x_2071_ = l_Lake_JobState_merge(v_a_2039_, v_a_2066_);
v_log_2072_ = lean_ctor_get(v___x_2071_, 0);
lean_inc_ref(v_log_2072_);
v_action_2073_ = lean_ctor_get_uint8(v___x_2071_, sizeof(void*)*3);
v_wantsRebuild_2074_ = lean_ctor_get_uint8(v___x_2071_, sizeof(void*)*3 + 1);
v_buildTime_2075_ = lean_ctor_get(v___x_2071_, 2);
lean_inc(v_buildTime_2075_);
lean_dec_ref(v___x_2071_);
v_trace_2076_ = lean_ctor_get(v_a_2066_, 1);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_a_2066_);
if (v_isSharedCheck_2088_ == 0)
{
lean_object* v_unused_2089_; lean_object* v_unused_2090_; 
v_unused_2089_ = lean_ctor_get(v_a_2066_, 2);
lean_dec(v_unused_2089_);
v_unused_2090_ = lean_ctor_get(v_a_2066_, 0);
lean_dec(v_unused_2090_);
v___x_2078_ = v_a_2066_;
v_isShared_2079_ = v_isSharedCheck_2088_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_trace_2076_);
lean_dec(v_a_2066_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2088_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
v___x_2080_ = lean_array_get_size(v_log_2070_);
lean_dec_ref(v_log_2070_);
v___x_2081_ = lean_nat_add(v___x_2080_, v_a_2065_);
lean_dec(v_a_2065_);
if (v_isShared_2079_ == 0)
{
lean_ctor_set(v___x_2078_, 2, v_buildTime_2075_);
lean_ctor_set(v___x_2078_, 0, v_log_2072_);
v___x_2083_ = v___x_2078_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_log_2072_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v_trace_2076_);
lean_ctor_set(v_reuseFailAlloc_2087_, 2, v_buildTime_2075_);
v___x_2083_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
lean_object* v___x_2085_; 
lean_ctor_set_uint8(v___x_2083_, sizeof(void*)*3, v_action_2073_);
lean_ctor_set_uint8(v___x_2083_, sizeof(void*)*3 + 1, v_wantsRebuild_2074_);
if (v_isShared_2069_ == 0)
{
lean_ctor_set(v___x_2068_, 1, v___x_2083_);
lean_ctor_set(v___x_2068_, 0, v___x_2081_);
v___x_2085_ = v___x_2068_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v___x_2081_);
lean_ctor_set(v_reuseFailAlloc_2086_, 1, v___x_2083_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__1(lean_object* v_val_2092_, lean_object* v_val_2093_, lean_object* v_a_x3f_2094_, lean_object* v___y_2095_){
_start:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2097_ = lean_get_set_stdout(v_val_2092_);
lean_dec_ref(v___x_2097_);
v___x_2098_ = lean_box(0);
v___x_2099_ = lean_get_set_stderr(v_val_2093_);
lean_dec_ref(v___x_2099_);
v___x_2100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2098_);
lean_ctor_set(v___x_2100_, 1, v___y_2095_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__1___boxed(lean_object* v_val_2101_, lean_object* v_val_2102_, lean_object* v_a_x3f_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_Lake_Job_bindM___redArg___lam__1(v_val_2101_, v_val_2102_, v_a_x3f_2103_, v___y_2104_);
lean_dec(v_a_x3f_2103_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__2(lean_object* v_a_2107_, lean_object* v_____r_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v___x_2116_; 
v___x_2116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2116_, 0, v_a_2107_);
lean_ctor_set(v___x_2116_, 1, v___y_2114_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__2___boxed(lean_object* v_a_2117_, lean_object* v_____r_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lake_Job_bindM___redArg___lam__2(v_a_2117_, v_____r_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec(v___y_2120_);
lean_dec_ref(v___y_2119_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__3(lean_object* v___y_2127_, lean_object* v_prio_2128_, lean_object* v_a_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v_f_2134_, lean_object* v_x_2135_){
_start:
{
lean_object* v_a_2138_; lean_object* v_a_2139_; lean_object* v___y_2143_; uint8_t v___y_2153_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v___y_2156_; uint8_t v___y_2157_; lean_object* v___y_2158_; lean_object* v___y_2159_; lean_object* v___y_2160_; lean_object* v___y_2161_; 
if (lean_obj_tag(v_x_2135_) == 0)
{
lean_object* v_a_2177_; lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2247_; 
v_a_2177_ = lean_ctor_get(v_x_2135_, 0);
v_a_2178_ = lean_ctor_get(v_x_2135_, 1);
v_isSharedCheck_2247_ = !lean_is_exclusive(v_x_2135_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2180_ = v_x_2135_;
v_isShared_2181_ = v_isSharedCheck_2247_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_inc(v_a_2177_);
lean_dec(v_x_2135_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2247_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v_cancelTk_x3f_2225_; 
v_cancelTk_x3f_2225_ = lean_ctor_get(v___y_2127_, 6);
if (lean_obj_tag(v_cancelTk_x3f_2225_) == 1)
{
lean_object* v_val_2226_; uint8_t v___x_2227_; 
v_val_2226_ = lean_ctor_get(v_cancelTk_x3f_2225_, 0);
v___x_2227_ = l_IO_CancelToken_isSet(v_val_2226_);
if (v___x_2227_ == 0)
{
lean_del_object(v___x_2180_);
goto v___jp_2182_;
}
else
{
lean_object* v_log_2228_; uint8_t v_action_2229_; uint8_t v_wantsRebuild_2230_; lean_object* v_trace_2231_; lean_object* v_buildTime_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2246_; 
lean_dec(v_a_2177_);
lean_dec_ref(v_f_2134_);
lean_dec_ref(v_a_2129_);
lean_dec(v_prio_2128_);
v_log_2228_ = lean_ctor_get(v_a_2178_, 0);
v_action_2229_ = lean_ctor_get_uint8(v_a_2178_, sizeof(void*)*3);
v_wantsRebuild_2230_ = lean_ctor_get_uint8(v_a_2178_, sizeof(void*)*3 + 1);
v_trace_2231_ = lean_ctor_get(v_a_2178_, 1);
v_buildTime_2232_ = lean_ctor_get(v_a_2178_, 2);
v_isSharedCheck_2246_ = !lean_is_exclusive(v_a_2178_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2234_ = v_a_2178_;
v_isShared_2235_ = v_isSharedCheck_2246_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_buildTime_2232_);
lean_inc(v_trace_2231_);
lean_inc(v_log_2228_);
lean_dec(v_a_2178_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2246_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2240_; 
v___x_2236_ = lean_array_get_size(v_log_2228_);
v___x_2237_ = lean_obj_once(&l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0, &l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0_once, _init_l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0);
v___x_2238_ = lean_array_push(v_log_2228_, v___x_2237_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 0, v___x_2238_);
v___x_2240_ = v___x_2234_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v___x_2238_);
lean_ctor_set(v_reuseFailAlloc_2245_, 1, v_trace_2231_);
lean_ctor_set(v_reuseFailAlloc_2245_, 2, v_buildTime_2232_);
lean_ctor_set_uint8(v_reuseFailAlloc_2245_, sizeof(void*)*3, v_action_2229_);
lean_ctor_set_uint8(v_reuseFailAlloc_2245_, sizeof(void*)*3 + 1, v_wantsRebuild_2230_);
v___x_2240_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
lean_object* v___x_2242_; 
if (v_isShared_2181_ == 0)
{
lean_ctor_set_tag(v___x_2180_, 1);
lean_ctor_set(v___x_2180_, 1, v___x_2240_);
lean_ctor_set(v___x_2180_, 0, v___x_2236_);
v___x_2242_ = v___x_2180_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v___x_2236_);
lean_ctor_set(v_reuseFailAlloc_2244_, 1, v___x_2240_);
v___x_2242_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
lean_object* v___x_2243_; 
v___x_2243_ = lean_task_pure(v___x_2242_);
return v___x_2243_;
}
}
}
}
}
else
{
lean_del_object(v___x_2180_);
goto v___jp_2182_;
}
v___jp_2182_:
{
lean_object* v_log_2183_; uint8_t v_action_2184_; uint8_t v_wantsRebuild_2185_; lean_object* v_trace_2186_; lean_object* v_buildTime_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2224_; 
v_log_2183_ = lean_ctor_get(v_a_2178_, 0);
v_action_2184_ = lean_ctor_get_uint8(v_a_2178_, sizeof(void*)*3);
v_wantsRebuild_2185_ = lean_ctor_get_uint8(v_a_2178_, sizeof(void*)*3 + 1);
v_trace_2186_ = lean_ctor_get(v_a_2178_, 1);
v_buildTime_2187_ = lean_ctor_get(v_a_2178_, 2);
v_isSharedCheck_2224_ = !lean_is_exclusive(v_a_2178_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2189_ = v_a_2178_;
v_isShared_2190_ = v_isSharedCheck_2224_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_buildTime_2187_);
lean_inc(v_trace_2186_);
lean_inc(v_log_2183_);
lean_dec(v_a_2178_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2224_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v_trace_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2199_; 
lean_inc_ref(v___y_2133_);
v_trace_2191_ = l_Lake_BuildTrace_mix(v___y_2133_, v_trace_2186_);
v___x_2192_ = lean_unsigned_to_nat(0u);
v___x_2193_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__0, &l_Lake_Job_sync___redArg___closed__0_once, _init_l_Lake_Job_sync___redArg___closed__0);
v___x_2194_ = lean_st_mk_ref(v___x_2193_);
lean_inc(v___x_2194_);
v___x_2195_ = l_IO_FS_Stream_ofBuffer(v___x_2194_);
lean_inc_ref(v___x_2195_);
v___x_2196_ = lean_get_set_stdout(v___x_2195_);
v___x_2197_ = lean_get_set_stderr(v___x_2195_);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 1, v_trace_2191_);
v___x_2199_ = v___x_2189_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_log_2183_);
lean_ctor_set(v_reuseFailAlloc_2223_, 1, v_trace_2191_);
lean_ctor_set(v_reuseFailAlloc_2223_, 2, v_buildTime_2187_);
lean_ctor_set_uint8(v_reuseFailAlloc_2223_, sizeof(void*)*3, v_action_2184_);
lean_ctor_set_uint8(v_reuseFailAlloc_2223_, sizeof(void*)*3 + 1, v_wantsRebuild_2185_);
v___x_2199_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
lean_object* v___x_2200_; 
lean_inc_ref(v___y_2127_);
lean_inc(v___y_2132_);
lean_inc(v___y_2131_);
lean_inc(v___y_2130_);
lean_inc_ref(v_a_2129_);
v___x_2200_ = lean_apply_8(v_f_2134_, v_a_2177_, v_a_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2127_, v___x_2199_, lean_box(0));
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v_a_2202_; lean_object* v___f_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v_a_2206_; lean_object* v_log_2207_; uint8_t v_action_2208_; uint8_t v_wantsRebuild_2209_; lean_object* v_trace_2210_; lean_object* v_buildTime_2211_; lean_object* v___x_2212_; lean_object* v_data_2213_; uint8_t v___x_2214_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc_n(v_a_2201_, 2);
v_a_2202_ = lean_ctor_get(v___x_2200_, 1);
lean_inc(v_a_2202_);
lean_dec_ref_known(v___x_2200_, 2);
v___f_2203_ = lean_alloc_closure((void*)(l_Lake_Job_bindM___redArg___lam__2___boxed), 9, 1);
lean_closure_set(v___f_2203_, 0, v_a_2201_);
v___x_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2204_, 0, v_a_2201_);
v___x_2205_ = l_Lake_Job_bindM___redArg___lam__1(v___x_2196_, v___x_2197_, v___x_2204_, v_a_2202_);
lean_dec_ref_known(v___x_2204_, 1);
v_a_2206_ = lean_ctor_get(v___x_2205_, 1);
lean_inc(v_a_2206_);
lean_dec_ref(v___x_2205_);
v_log_2207_ = lean_ctor_get(v_a_2206_, 0);
lean_inc_ref(v_log_2207_);
v_action_2208_ = lean_ctor_get_uint8(v_a_2206_, sizeof(void*)*3);
v_wantsRebuild_2209_ = lean_ctor_get_uint8(v_a_2206_, sizeof(void*)*3 + 1);
v_trace_2210_ = lean_ctor_get(v_a_2206_, 1);
lean_inc_ref(v_trace_2210_);
v_buildTime_2211_ = lean_ctor_get(v_a_2206_, 2);
lean_inc(v_buildTime_2211_);
v___x_2212_ = lean_st_ref_get(v___x_2194_);
lean_dec(v___x_2194_);
v_data_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc_ref(v_data_2213_);
lean_dec(v___x_2212_);
v___x_2214_ = lean_string_validate_utf8(v_data_2213_);
if (v___x_2214_ == 0)
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
lean_dec_ref(v_data_2213_);
v___x_2215_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__7, &l_Lake_Job_sync___redArg___closed__7_once, _init_l_Lake_Job_sync___redArg___closed__7);
v___x_2216_ = l_panic___at___00Lake_Job_sync_spec__0(v___x_2215_);
v___y_2153_ = v_action_2208_;
v___y_2154_ = v_buildTime_2211_;
v___y_2155_ = v_trace_2210_;
v___y_2156_ = v___f_2203_;
v___y_2157_ = v_wantsRebuild_2209_;
v___y_2158_ = v___x_2192_;
v___y_2159_ = v_log_2207_;
v___y_2160_ = v_a_2206_;
v___y_2161_ = v___x_2216_;
goto v___jp_2152_;
}
else
{
lean_object* v___x_2217_; 
v___x_2217_ = lean_string_from_utf8_unchecked(v_data_2213_);
v___y_2153_ = v_action_2208_;
v___y_2154_ = v_buildTime_2211_;
v___y_2155_ = v_trace_2210_;
v___y_2156_ = v___f_2203_;
v___y_2157_ = v_wantsRebuild_2209_;
v___y_2158_ = v___x_2192_;
v___y_2159_ = v_log_2207_;
v___y_2160_ = v_a_2206_;
v___y_2161_ = v___x_2217_;
goto v___jp_2152_;
}
}
else
{
lean_object* v_a_2218_; lean_object* v_a_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v_a_2222_; 
lean_dec(v___x_2194_);
lean_dec_ref(v_a_2129_);
lean_dec(v_prio_2128_);
v_a_2218_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2218_);
v_a_2219_ = lean_ctor_get(v___x_2200_, 1);
lean_inc(v_a_2219_);
lean_dec_ref_known(v___x_2200_, 2);
v___x_2220_ = lean_box(0);
v___x_2221_ = l_Lake_Job_bindM___redArg___lam__1(v___x_2196_, v___x_2197_, v___x_2220_, v_a_2219_);
v_a_2222_ = lean_ctor_get(v___x_2221_, 1);
lean_inc(v_a_2222_);
lean_dec_ref(v___x_2221_);
v_a_2138_ = v_a_2218_;
v_a_2139_ = v_a_2222_;
goto v___jp_2137_;
}
}
}
}
}
}
else
{
lean_object* v_a_2248_; lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2257_; 
lean_dec_ref(v_f_2134_);
lean_dec_ref(v_a_2129_);
lean_dec(v_prio_2128_);
v_a_2248_ = lean_ctor_get(v_x_2135_, 0);
v_a_2249_ = lean_ctor_get(v_x_2135_, 1);
v_isSharedCheck_2257_ = !lean_is_exclusive(v_x_2135_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2251_ = v_x_2135_;
v_isShared_2252_ = v_isSharedCheck_2257_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_inc(v_a_2248_);
lean_dec(v_x_2135_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2257_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2254_; 
if (v_isShared_2252_ == 0)
{
v___x_2254_ = v___x_2251_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v_a_2248_);
lean_ctor_set(v_reuseFailAlloc_2256_, 1, v_a_2249_);
v___x_2254_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
lean_object* v___x_2255_; 
v___x_2255_ = lean_task_pure(v___x_2254_);
return v___x_2255_;
}
}
}
v___jp_2137_:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2140_, 0, v_a_2138_);
lean_ctor_set(v___x_2140_, 1, v_a_2139_);
v___x_2141_ = lean_task_pure(v___x_2140_);
return v___x_2141_;
}
v___jp_2142_:
{
if (lean_obj_tag(v___y_2143_) == 0)
{
lean_object* v_a_2144_; lean_object* v_a_2145_; lean_object* v_task_2146_; lean_object* v___f_2147_; uint8_t v___x_2148_; lean_object* v___x_2149_; 
v_a_2144_ = lean_ctor_get(v___y_2143_, 0);
lean_inc(v_a_2144_);
v_a_2145_ = lean_ctor_get(v___y_2143_, 1);
lean_inc(v_a_2145_);
lean_dec_ref_known(v___y_2143_, 2);
v_task_2146_ = lean_ctor_get(v_a_2144_, 0);
lean_inc_ref(v_task_2146_);
lean_dec(v_a_2144_);
v___f_2147_ = lean_alloc_closure((void*)(l_Lake_Job_bindM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2147_, 0, v_a_2145_);
v___x_2148_ = 1;
v___x_2149_ = lean_task_map(v___f_2147_, v_task_2146_, v_prio_2128_, v___x_2148_);
return v___x_2149_;
}
else
{
lean_object* v_a_2150_; lean_object* v_a_2151_; 
lean_dec(v_prio_2128_);
v_a_2150_ = lean_ctor_get(v___y_2143_, 0);
lean_inc(v_a_2150_);
v_a_2151_ = lean_ctor_get(v___y_2143_, 1);
lean_inc(v_a_2151_);
lean_dec_ref_known(v___y_2143_, 2);
v_a_2138_ = v_a_2150_;
v_a_2139_ = v_a_2151_;
goto v___jp_2137_;
}
}
v___jp_2152_:
{
lean_object* v___x_2162_; uint8_t v___x_2163_; 
v___x_2162_ = lean_string_utf8_byte_size(v___y_2161_);
v___x_2163_ = lean_nat_dec_eq(v___x_2162_, v___y_2158_);
if (v___x_2163_ == 0)
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; uint8_t v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
lean_dec_ref(v___y_2160_);
v___x_2164_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__3));
v___x_2165_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2165_, 0, v___y_2161_);
lean_ctor_set(v___x_2165_, 1, v___y_2158_);
lean_ctor_set(v___x_2165_, 2, v___x_2162_);
v___x_2166_ = l_String_Slice_trimAscii(v___x_2165_);
v___x_2167_ = l_String_Slice_toString(v___x_2166_);
lean_dec_ref(v___x_2166_);
v___x_2168_ = lean_string_append(v___x_2164_, v___x_2167_);
lean_dec_ref(v___x_2167_);
v___x_2169_ = 1;
v___x_2170_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2170_, 0, v___x_2168_);
lean_ctor_set_uint8(v___x_2170_, sizeof(void*)*1, v___x_2169_);
v___x_2171_ = lean_box(0);
v___x_2172_ = lean_array_push(v___y_2159_, v___x_2170_);
v___x_2173_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
lean_ctor_set(v___x_2173_, 1, v___y_2155_);
lean_ctor_set(v___x_2173_, 2, v___y_2154_);
lean_ctor_set_uint8(v___x_2173_, sizeof(void*)*3, v___y_2153_);
lean_ctor_set_uint8(v___x_2173_, sizeof(void*)*3 + 1, v___y_2157_);
lean_inc_ref(v___y_2127_);
lean_inc(v___y_2132_);
lean_inc(v___y_2131_);
lean_inc(v___y_2130_);
v___x_2174_ = lean_apply_8(v___y_2156_, v___x_2171_, v_a_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2127_, v___x_2173_, lean_box(0));
v___y_2143_ = v___x_2174_;
goto v___jp_2142_;
}
else
{
lean_object* v___x_2175_; lean_object* v___x_2176_; 
lean_dec_ref(v___y_2161_);
lean_dec_ref(v___y_2159_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2155_);
lean_dec(v___y_2154_);
v___x_2175_ = lean_box(0);
lean_inc_ref(v___y_2127_);
lean_inc(v___y_2132_);
lean_inc(v___y_2131_);
lean_inc(v___y_2130_);
v___x_2176_ = lean_apply_8(v___y_2156_, v___x_2175_, v_a_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2127_, v___y_2160_, lean_box(0));
v___y_2143_ = v___x_2176_;
goto v___jp_2142_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__3___boxed(lean_object* v___y_2258_, lean_object* v_prio_2259_, lean_object* v_a_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v_f_2265_, lean_object* v_x_2266_, lean_object* v___y_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_Lake_Job_bindM___redArg___lam__3(v___y_2258_, v_prio_2259_, v_a_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v_f_2265_, v_x_2266_);
lean_dec_ref(v___y_2264_);
lean_dec(v___y_2263_);
lean_dec(v___y_2262_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2258_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg(lean_object* v_kind_2269_, lean_object* v_self_2270_, lean_object* v_f_2271_, lean_object* v_prio_2272_, uint8_t v_sync_2273_, lean_object* v_a_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v_task_2281_; lean_object* v_caption_2282_; uint8_t v_optional_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2292_; 
v_task_2281_ = lean_ctor_get(v_self_2270_, 0);
v_caption_2282_ = lean_ctor_get(v_self_2270_, 2);
v_optional_2283_ = lean_ctor_get_uint8(v_self_2270_, sizeof(void*)*3);
v_isSharedCheck_2292_ = !lean_is_exclusive(v_self_2270_);
if (v_isSharedCheck_2292_ == 0)
{
lean_object* v_unused_2293_; 
v_unused_2293_ = lean_ctor_get(v_self_2270_, 1);
lean_dec(v_unused_2293_);
v___x_2285_ = v_self_2270_;
v_isShared_2286_ = v_isSharedCheck_2292_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_caption_2282_);
lean_inc(v_task_2281_);
lean_dec(v_self_2270_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2292_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___f_2287_; lean_object* v___x_2288_; lean_object* v___x_2290_; 
lean_inc_ref(v___y_2279_);
lean_inc(v___y_2277_);
lean_inc(v___y_2276_);
lean_inc(v___y_2275_);
lean_inc(v_prio_2272_);
lean_inc_ref(v___y_2278_);
v___f_2287_ = lean_alloc_closure((void*)(l_Lake_Job_bindM___redArg___lam__3___boxed), 10, 8);
lean_closure_set(v___f_2287_, 0, v___y_2278_);
lean_closure_set(v___f_2287_, 1, v_prio_2272_);
lean_closure_set(v___f_2287_, 2, v_a_2274_);
lean_closure_set(v___f_2287_, 3, v___y_2275_);
lean_closure_set(v___f_2287_, 4, v___y_2276_);
lean_closure_set(v___f_2287_, 5, v___y_2277_);
lean_closure_set(v___f_2287_, 6, v___y_2279_);
lean_closure_set(v___f_2287_, 7, v_f_2271_);
v___x_2288_ = lean_io_bind_task(v_task_2281_, v___f_2287_, v_prio_2272_, v_sync_2273_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 1, v_kind_2269_);
lean_ctor_set(v___x_2285_, 0, v___x_2288_);
v___x_2290_ = v___x_2285_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2288_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v_kind_2269_);
lean_ctor_set(v_reuseFailAlloc_2291_, 2, v_caption_2282_);
lean_ctor_set_uint8(v_reuseFailAlloc_2291_, sizeof(void*)*3, v_optional_2283_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___boxed(lean_object* v_kind_2294_, lean_object* v_self_2295_, lean_object* v_f_2296_, lean_object* v_prio_2297_, lean_object* v_sync_2298_, lean_object* v_a_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_){
_start:
{
uint8_t v_sync_boxed_2306_; lean_object* v_res_2307_; 
v_sync_boxed_2306_ = lean_unbox(v_sync_2298_);
v_res_2307_ = l_Lake_Job_bindM___redArg(v_kind_2294_, v_self_2295_, v_f_2296_, v_prio_2297_, v_sync_boxed_2306_, v_a_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_);
lean_dec_ref(v___y_2304_);
lean_dec_ref(v___y_2303_);
lean_dec(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec(v___y_2300_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM(lean_object* v_00_u03b2_2308_, lean_object* v_00_u03b1_2309_, lean_object* v_kind_2310_, lean_object* v_self_2311_, lean_object* v_f_2312_, lean_object* v_prio_2313_, uint8_t v_sync_2314_, lean_object* v_a_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_){
_start:
{
lean_object* v___x_2322_; 
v___x_2322_ = l_Lake_Job_bindM___redArg(v_kind_2310_, v_self_2311_, v_f_2312_, v_prio_2313_, v_sync_2314_, v_a_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___boxed(lean_object* v_00_u03b2_2323_, lean_object* v_00_u03b1_2324_, lean_object* v_kind_2325_, lean_object* v_self_2326_, lean_object* v_f_2327_, lean_object* v_prio_2328_, lean_object* v_sync_2329_, lean_object* v_a_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
uint8_t v_sync_boxed_2337_; lean_object* v_res_2338_; 
v_sync_boxed_2337_ = lean_unbox(v_sync_2329_);
v_res_2338_ = l_Lake_Job_bindM(v_00_u03b2_2323_, v_00_u03b1_2324_, v_kind_2325_, v_self_2326_, v_f_2327_, v_prio_2328_, v_sync_boxed_2337_, v_a_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_);
lean_dec_ref(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec(v___y_2332_);
lean_dec(v___y_2331_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___lam__0(lean_object* v_f_2339_, lean_object* v_rx_2340_, lean_object* v_ry_2341_){
_start:
{
lean_object* v___x_2342_; 
v___x_2342_ = lean_apply_2(v_f_2339_, v_rx_2340_, v_ry_2341_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___lam__1(lean_object* v_other_2343_, lean_object* v_f_2344_, lean_object* v_prio_2345_, uint8_t v_sync_2346_, lean_object* v_rx_2347_){
_start:
{
lean_object* v_task_2348_; lean_object* v___f_2349_; lean_object* v___x_2350_; 
v_task_2348_ = lean_ctor_get(v_other_2343_, 0);
lean_inc_ref(v_task_2348_);
lean_dec_ref(v_other_2343_);
v___f_2349_ = lean_alloc_closure((void*)(l_Lake_Job_zipResultWith___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2349_, 0, v_f_2344_);
lean_closure_set(v___f_2349_, 1, v_rx_2347_);
v___x_2350_ = lean_task_map(v___f_2349_, v_task_2348_, v_prio_2345_, v_sync_2346_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___lam__1___boxed(lean_object* v_other_2351_, lean_object* v_f_2352_, lean_object* v_prio_2353_, lean_object* v_sync_2354_, lean_object* v_rx_2355_){
_start:
{
uint8_t v_sync_boxed_2356_; lean_object* v_res_2357_; 
v_sync_boxed_2356_ = lean_unbox(v_sync_2354_);
v_res_2357_ = l_Lake_Job_zipResultWith___redArg___lam__1(v_other_2351_, v_f_2352_, v_prio_2353_, v_sync_boxed_2356_, v_rx_2355_);
return v_res_2357_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg(lean_object* v_inst_2358_, lean_object* v_f_2359_, lean_object* v_self_2360_, lean_object* v_other_2361_, lean_object* v_prio_2362_, uint8_t v_sync_2363_){
_start:
{
lean_object* v_task_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2377_; 
v_task_2364_ = lean_ctor_get(v_self_2360_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v_self_2360_);
if (v_isSharedCheck_2377_ == 0)
{
lean_object* v_unused_2378_; lean_object* v_unused_2379_; 
v_unused_2378_ = lean_ctor_get(v_self_2360_, 2);
lean_dec(v_unused_2378_);
v_unused_2379_ = lean_ctor_get(v_self_2360_, 1);
lean_dec(v_unused_2379_);
v___x_2366_ = v_self_2360_;
v_isShared_2367_ = v_isSharedCheck_2377_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_task_2364_);
lean_dec(v_self_2360_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2377_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2368_; lean_object* v___f_2369_; uint8_t v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; uint8_t v___x_2373_; lean_object* v___x_2375_; 
v___x_2368_ = lean_box(v_sync_2363_);
lean_inc(v_prio_2362_);
v___f_2369_ = lean_alloc_closure((void*)(l_Lake_Job_zipResultWith___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2369_, 0, v_other_2361_);
lean_closure_set(v___f_2369_, 1, v_f_2359_);
lean_closure_set(v___f_2369_, 2, v_prio_2362_);
lean_closure_set(v___f_2369_, 3, v___x_2368_);
v___x_2370_ = 1;
v___x_2371_ = lean_task_bind(v_task_2364_, v___f_2369_, v_prio_2362_, v___x_2370_);
v___x_2372_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2373_ = 0;
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 2, v___x_2372_);
lean_ctor_set(v___x_2366_, 1, v_inst_2358_);
lean_ctor_set(v___x_2366_, 0, v___x_2371_);
v___x_2375_ = v___x_2366_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2371_);
lean_ctor_set(v_reuseFailAlloc_2376_, 1, v_inst_2358_);
lean_ctor_set(v_reuseFailAlloc_2376_, 2, v___x_2372_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
lean_ctor_set_uint8(v___x_2375_, sizeof(void*)*3, v___x_2373_);
return v___x_2375_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___boxed(lean_object* v_inst_2380_, lean_object* v_f_2381_, lean_object* v_self_2382_, lean_object* v_other_2383_, lean_object* v_prio_2384_, lean_object* v_sync_2385_){
_start:
{
uint8_t v_sync_boxed_2386_; lean_object* v_res_2387_; 
v_sync_boxed_2386_ = lean_unbox(v_sync_2385_);
v_res_2387_ = l_Lake_Job_zipResultWith___redArg(v_inst_2380_, v_f_2381_, v_self_2382_, v_other_2383_, v_prio_2384_, v_sync_boxed_2386_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith(lean_object* v_00_u03b3_2388_, lean_object* v_00_u03b1_2389_, lean_object* v_00_u03b2_2390_, lean_object* v_inst_2391_, lean_object* v_f_2392_, lean_object* v_self_2393_, lean_object* v_other_2394_, lean_object* v_prio_2395_, uint8_t v_sync_2396_){
_start:
{
lean_object* v_task_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2410_; 
v_task_2397_ = lean_ctor_get(v_self_2393_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v_self_2393_);
if (v_isSharedCheck_2410_ == 0)
{
lean_object* v_unused_2411_; lean_object* v_unused_2412_; 
v_unused_2411_ = lean_ctor_get(v_self_2393_, 2);
lean_dec(v_unused_2411_);
v_unused_2412_ = lean_ctor_get(v_self_2393_, 1);
lean_dec(v_unused_2412_);
v___x_2399_ = v_self_2393_;
v_isShared_2400_ = v_isSharedCheck_2410_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_task_2397_);
lean_dec(v_self_2393_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2410_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2401_; lean_object* v___f_2402_; uint8_t v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; uint8_t v___x_2406_; lean_object* v___x_2408_; 
v___x_2401_ = lean_box(v_sync_2396_);
lean_inc(v_prio_2395_);
v___f_2402_ = lean_alloc_closure((void*)(l_Lake_Job_zipResultWith___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2402_, 0, v_other_2394_);
lean_closure_set(v___f_2402_, 1, v_f_2392_);
lean_closure_set(v___f_2402_, 2, v_prio_2395_);
lean_closure_set(v___f_2402_, 3, v___x_2401_);
v___x_2403_ = 1;
v___x_2404_ = lean_task_bind(v_task_2397_, v___f_2402_, v_prio_2395_, v___x_2403_);
v___x_2405_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2406_ = 0;
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 2, v___x_2405_);
lean_ctor_set(v___x_2399_, 1, v_inst_2391_);
lean_ctor_set(v___x_2399_, 0, v___x_2404_);
v___x_2408_ = v___x_2399_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2409_, 1, v_inst_2391_);
lean_ctor_set(v_reuseFailAlloc_2409_, 2, v___x_2405_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
lean_ctor_set_uint8(v___x_2408_, sizeof(void*)*3, v___x_2406_);
return v___x_2408_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___boxed(lean_object* v_00_u03b3_2413_, lean_object* v_00_u03b1_2414_, lean_object* v_00_u03b2_2415_, lean_object* v_inst_2416_, lean_object* v_f_2417_, lean_object* v_self_2418_, lean_object* v_other_2419_, lean_object* v_prio_2420_, lean_object* v_sync_2421_){
_start:
{
uint8_t v_sync_boxed_2422_; lean_object* v_res_2423_; 
v_sync_boxed_2422_ = lean_unbox(v_sync_2421_);
v_res_2423_ = l_Lake_Job_zipResultWith(v_00_u03b3_2413_, v_00_u03b1_2414_, v_00_u03b2_2415_, v_inst_2416_, v_f_2417_, v_self_2418_, v_other_2419_, v_prio_2420_, v_sync_boxed_2422_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___lam__0(lean_object* v_rx_2424_, lean_object* v_f_2425_, lean_object* v_ry_2426_){
_start:
{
lean_object* v___y_2428_; lean_object* v___y_2429_; lean_object* v___y_2430_; lean_object* v___y_2434_; lean_object* v___y_2435_; lean_object* v___y_2436_; lean_object* v_a_2439_; 
if (lean_obj_tag(v_rx_2424_) == 0)
{
if (lean_obj_tag(v_ry_2426_) == 0)
{
lean_object* v_a_2441_; lean_object* v_a_2442_; lean_object* v_a_2443_; lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2453_; 
v_a_2441_ = lean_ctor_get(v_rx_2424_, 0);
lean_inc(v_a_2441_);
v_a_2442_ = lean_ctor_get(v_rx_2424_, 1);
lean_inc(v_a_2442_);
lean_dec_ref_known(v_rx_2424_, 2);
v_a_2443_ = lean_ctor_get(v_ry_2426_, 0);
v_a_2444_ = lean_ctor_get(v_ry_2426_, 1);
v_isSharedCheck_2453_ = !lean_is_exclusive(v_ry_2426_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2446_ = v_ry_2426_;
v_isShared_2447_ = v_isSharedCheck_2453_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_inc(v_a_2443_);
lean_dec(v_ry_2426_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2453_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2451_; 
v___x_2448_ = lean_apply_2(v_f_2425_, v_a_2441_, v_a_2443_);
v___x_2449_ = l_Lake_JobState_merge(v_a_2442_, v_a_2444_);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 1, v___x_2449_);
lean_ctor_set(v___x_2446_, 0, v___x_2448_);
v___x_2451_ = v___x_2446_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v___x_2448_);
lean_ctor_set(v_reuseFailAlloc_2452_, 1, v___x_2449_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
}
else
{
lean_object* v_a_2454_; 
lean_dec(v_f_2425_);
v_a_2454_ = lean_ctor_get(v_rx_2424_, 1);
lean_inc(v_a_2454_);
lean_dec_ref_known(v_rx_2424_, 2);
v_a_2439_ = v_a_2454_;
goto v___jp_2438_;
}
}
else
{
lean_dec(v_f_2425_);
if (lean_obj_tag(v_rx_2424_) == 0)
{
lean_object* v_a_2455_; 
v_a_2455_ = lean_ctor_get(v_rx_2424_, 1);
lean_inc(v_a_2455_);
lean_dec_ref_known(v_rx_2424_, 2);
v_a_2439_ = v_a_2455_;
goto v___jp_2438_;
}
else
{
lean_object* v_a_2456_; lean_object* v___x_2457_; 
v_a_2456_ = lean_ctor_get(v_rx_2424_, 1);
lean_inc(v_a_2456_);
lean_dec_ref_known(v_rx_2424_, 2);
v___x_2457_ = lean_unsigned_to_nat(0u);
v___y_2434_ = v_ry_2426_;
v___y_2435_ = v___x_2457_;
v___y_2436_ = v_a_2456_;
goto v___jp_2433_;
}
}
v___jp_2427_:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = l_Lake_JobState_merge(v___y_2429_, v___y_2430_);
v___x_2432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2432_, 0, v___y_2428_);
lean_ctor_set(v___x_2432_, 1, v___x_2431_);
return v___x_2432_;
}
v___jp_2433_:
{
lean_object* v_a_2437_; 
v_a_2437_ = lean_ctor_get(v___y_2434_, 1);
lean_inc(v_a_2437_);
lean_dec_ref(v___y_2434_);
v___y_2428_ = v___y_2435_;
v___y_2429_ = v___y_2436_;
v___y_2430_ = v_a_2437_;
goto v___jp_2427_;
}
v___jp_2438_:
{
lean_object* v___x_2440_; 
v___x_2440_ = lean_unsigned_to_nat(0u);
v___y_2434_ = v_ry_2426_;
v___y_2435_ = v___x_2440_;
v___y_2436_ = v_a_2439_;
goto v___jp_2433_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___lam__1(lean_object* v_other_2458_, lean_object* v_f_2459_, lean_object* v_prio_2460_, uint8_t v_sync_2461_, lean_object* v_rx_2462_){
_start:
{
lean_object* v_task_2463_; lean_object* v___f_2464_; lean_object* v___x_2465_; 
v_task_2463_ = lean_ctor_get(v_other_2458_, 0);
lean_inc_ref(v_task_2463_);
lean_dec_ref(v_other_2458_);
v___f_2464_ = lean_alloc_closure((void*)(l_Lake_Job_zipWith___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2464_, 0, v_rx_2462_);
lean_closure_set(v___f_2464_, 1, v_f_2459_);
v___x_2465_ = lean_task_map(v___f_2464_, v_task_2463_, v_prio_2460_, v_sync_2461_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___lam__1___boxed(lean_object* v_other_2466_, lean_object* v_f_2467_, lean_object* v_prio_2468_, lean_object* v_sync_2469_, lean_object* v_rx_2470_){
_start:
{
uint8_t v_sync_boxed_2471_; lean_object* v_res_2472_; 
v_sync_boxed_2471_ = lean_unbox(v_sync_2469_);
v_res_2472_ = l_Lake_Job_zipWith___redArg___lam__1(v_other_2466_, v_f_2467_, v_prio_2468_, v_sync_boxed_2471_, v_rx_2470_);
return v_res_2472_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg(lean_object* v_inst_2473_, lean_object* v_f_2474_, lean_object* v_self_2475_, lean_object* v_other_2476_, lean_object* v_prio_2477_, uint8_t v_sync_2478_){
_start:
{
lean_object* v_task_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2492_; 
v_task_2479_ = lean_ctor_get(v_self_2475_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v_self_2475_);
if (v_isSharedCheck_2492_ == 0)
{
lean_object* v_unused_2493_; lean_object* v_unused_2494_; 
v_unused_2493_ = lean_ctor_get(v_self_2475_, 2);
lean_dec(v_unused_2493_);
v_unused_2494_ = lean_ctor_get(v_self_2475_, 1);
lean_dec(v_unused_2494_);
v___x_2481_ = v_self_2475_;
v_isShared_2482_ = v_isSharedCheck_2492_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_task_2479_);
lean_dec(v_self_2475_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2492_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2483_; lean_object* v___f_2484_; uint8_t v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; uint8_t v___x_2488_; lean_object* v___x_2490_; 
v___x_2483_ = lean_box(v_sync_2478_);
lean_inc(v_prio_2477_);
v___f_2484_ = lean_alloc_closure((void*)(l_Lake_Job_zipWith___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2484_, 0, v_other_2476_);
lean_closure_set(v___f_2484_, 1, v_f_2474_);
lean_closure_set(v___f_2484_, 2, v_prio_2477_);
lean_closure_set(v___f_2484_, 3, v___x_2483_);
v___x_2485_ = 1;
v___x_2486_ = lean_task_bind(v_task_2479_, v___f_2484_, v_prio_2477_, v___x_2485_);
v___x_2487_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2488_ = 0;
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 2, v___x_2487_);
lean_ctor_set(v___x_2481_, 1, v_inst_2473_);
lean_ctor_set(v___x_2481_, 0, v___x_2486_);
v___x_2490_ = v___x_2481_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v___x_2486_);
lean_ctor_set(v_reuseFailAlloc_2491_, 1, v_inst_2473_);
lean_ctor_set(v_reuseFailAlloc_2491_, 2, v___x_2487_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
lean_ctor_set_uint8(v___x_2490_, sizeof(void*)*3, v___x_2488_);
return v___x_2490_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___boxed(lean_object* v_inst_2495_, lean_object* v_f_2496_, lean_object* v_self_2497_, lean_object* v_other_2498_, lean_object* v_prio_2499_, lean_object* v_sync_2500_){
_start:
{
uint8_t v_sync_boxed_2501_; lean_object* v_res_2502_; 
v_sync_boxed_2501_ = lean_unbox(v_sync_2500_);
v_res_2502_ = l_Lake_Job_zipWith___redArg(v_inst_2495_, v_f_2496_, v_self_2497_, v_other_2498_, v_prio_2499_, v_sync_boxed_2501_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___lam__0(lean_object* v_rx_2503_, lean_object* v_f_2504_, lean_object* v_ry_2505_){
_start:
{
lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2513_; lean_object* v___y_2514_; lean_object* v___y_2515_; lean_object* v_a_2518_; lean_object* v_rb_2519_; 
if (lean_obj_tag(v_rx_2503_) == 0)
{
if (lean_obj_tag(v_ry_2505_) == 0)
{
lean_object* v_a_2521_; lean_object* v_a_2522_; lean_object* v_a_2523_; lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2533_; 
v_a_2521_ = lean_ctor_get(v_rx_2503_, 0);
lean_inc(v_a_2521_);
v_a_2522_ = lean_ctor_get(v_rx_2503_, 1);
lean_inc(v_a_2522_);
lean_dec_ref_known(v_rx_2503_, 2);
v_a_2523_ = lean_ctor_get(v_ry_2505_, 0);
v_a_2524_ = lean_ctor_get(v_ry_2505_, 1);
v_isSharedCheck_2533_ = !lean_is_exclusive(v_ry_2505_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2526_ = v_ry_2505_;
v_isShared_2527_ = v_isSharedCheck_2533_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_inc(v_a_2523_);
lean_dec(v_ry_2505_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2533_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2531_; 
v___x_2528_ = lean_apply_2(v_f_2504_, v_a_2521_, v_a_2523_);
v___x_2529_ = l_Lake_JobState_merge(v_a_2522_, v_a_2524_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 1, v___x_2529_);
lean_ctor_set(v___x_2526_, 0, v___x_2528_);
v___x_2531_ = v___x_2526_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v___x_2528_);
lean_ctor_set(v_reuseFailAlloc_2532_, 1, v___x_2529_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
else
{
lean_object* v_a_2534_; 
lean_dec(v_f_2504_);
v_a_2534_ = lean_ctor_get(v_rx_2503_, 1);
lean_inc(v_a_2534_);
lean_dec_ref_known(v_rx_2503_, 2);
v_a_2518_ = v_a_2534_;
v_rb_2519_ = v_ry_2505_;
goto v___jp_2517_;
}
}
else
{
lean_dec(v_f_2504_);
if (lean_obj_tag(v_rx_2503_) == 0)
{
lean_object* v_a_2535_; 
v_a_2535_ = lean_ctor_get(v_rx_2503_, 1);
lean_inc(v_a_2535_);
lean_dec_ref_known(v_rx_2503_, 2);
v_a_2518_ = v_a_2535_;
v_rb_2519_ = v_ry_2505_;
goto v___jp_2517_;
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2537_; 
v_a_2536_ = lean_ctor_get(v_rx_2503_, 1);
lean_inc(v_a_2536_);
lean_dec_ref_known(v_rx_2503_, 2);
v___x_2537_ = lean_unsigned_to_nat(0u);
v___y_2513_ = v_ry_2505_;
v___y_2514_ = v___x_2537_;
v___y_2515_ = v_a_2536_;
goto v___jp_2512_;
}
}
v___jp_2506_:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2510_ = l_Lake_JobState_merge(v___y_2508_, v___y_2509_);
v___x_2511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___y_2507_);
lean_ctor_set(v___x_2511_, 1, v___x_2510_);
return v___x_2511_;
}
v___jp_2512_:
{
lean_object* v_a_2516_; 
v_a_2516_ = lean_ctor_get(v___y_2513_, 1);
lean_inc(v_a_2516_);
lean_dec_ref(v___y_2513_);
v___y_2507_ = v___y_2514_;
v___y_2508_ = v___y_2515_;
v___y_2509_ = v_a_2516_;
goto v___jp_2506_;
}
v___jp_2517_:
{
lean_object* v___x_2520_; 
v___x_2520_ = lean_unsigned_to_nat(0u);
v___y_2513_ = v_rb_2519_;
v___y_2514_ = v___x_2520_;
v___y_2515_ = v_a_2518_;
goto v___jp_2512_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___lam__1(lean_object* v_other_2538_, lean_object* v_f_2539_, lean_object* v_prio_2540_, uint8_t v_sync_2541_, lean_object* v_rx_2542_){
_start:
{
lean_object* v_task_2543_; lean_object* v___f_2544_; lean_object* v___x_2545_; 
v_task_2543_ = lean_ctor_get(v_other_2538_, 0);
lean_inc_ref(v_task_2543_);
lean_dec_ref(v_other_2538_);
v___f_2544_ = lean_alloc_closure((void*)(l_Lake_Job_zipWith___lam__0), 3, 2);
lean_closure_set(v___f_2544_, 0, v_rx_2542_);
lean_closure_set(v___f_2544_, 1, v_f_2539_);
v___x_2545_ = lean_task_map(v___f_2544_, v_task_2543_, v_prio_2540_, v_sync_2541_);
return v___x_2545_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___lam__1___boxed(lean_object* v_other_2546_, lean_object* v_f_2547_, lean_object* v_prio_2548_, lean_object* v_sync_2549_, lean_object* v_rx_2550_){
_start:
{
uint8_t v_sync_boxed_2551_; lean_object* v_res_2552_; 
v_sync_boxed_2551_ = lean_unbox(v_sync_2549_);
v_res_2552_ = l_Lake_Job_zipWith___lam__1(v_other_2546_, v_f_2547_, v_prio_2548_, v_sync_boxed_2551_, v_rx_2550_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith(lean_object* v_00_u03b3_2553_, lean_object* v_00_u03b1_2554_, lean_object* v_00_u03b2_2555_, lean_object* v_inst_2556_, lean_object* v_f_2557_, lean_object* v_self_2558_, lean_object* v_other_2559_, lean_object* v_prio_2560_, uint8_t v_sync_2561_){
_start:
{
lean_object* v_task_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2575_; 
v_task_2562_ = lean_ctor_get(v_self_2558_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v_self_2558_);
if (v_isSharedCheck_2575_ == 0)
{
lean_object* v_unused_2576_; lean_object* v_unused_2577_; 
v_unused_2576_ = lean_ctor_get(v_self_2558_, 2);
lean_dec(v_unused_2576_);
v_unused_2577_ = lean_ctor_get(v_self_2558_, 1);
lean_dec(v_unused_2577_);
v___x_2564_ = v_self_2558_;
v_isShared_2565_ = v_isSharedCheck_2575_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_task_2562_);
lean_dec(v_self_2558_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2575_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2566_; lean_object* v___f_2567_; uint8_t v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; uint8_t v___x_2571_; lean_object* v___x_2573_; 
v___x_2566_ = lean_box(v_sync_2561_);
lean_inc(v_prio_2560_);
v___f_2567_ = lean_alloc_closure((void*)(l_Lake_Job_zipWith___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2567_, 0, v_other_2559_);
lean_closure_set(v___f_2567_, 1, v_f_2557_);
lean_closure_set(v___f_2567_, 2, v_prio_2560_);
lean_closure_set(v___f_2567_, 3, v___x_2566_);
v___x_2568_ = 1;
v___x_2569_ = lean_task_bind(v_task_2562_, v___f_2567_, v_prio_2560_, v___x_2568_);
v___x_2570_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2571_ = 0;
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 2, v___x_2570_);
lean_ctor_set(v___x_2564_, 1, v_inst_2556_);
lean_ctor_set(v___x_2564_, 0, v___x_2569_);
v___x_2573_ = v___x_2564_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2569_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v_inst_2556_);
lean_ctor_set(v_reuseFailAlloc_2574_, 2, v___x_2570_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
lean_ctor_set_uint8(v___x_2573_, sizeof(void*)*3, v___x_2571_);
return v___x_2573_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___boxed(lean_object* v_00_u03b3_2578_, lean_object* v_00_u03b1_2579_, lean_object* v_00_u03b2_2580_, lean_object* v_inst_2581_, lean_object* v_f_2582_, lean_object* v_self_2583_, lean_object* v_other_2584_, lean_object* v_prio_2585_, lean_object* v_sync_2586_){
_start:
{
uint8_t v_sync_boxed_2587_; lean_object* v_res_2588_; 
v_sync_boxed_2587_ = lean_unbox(v_sync_2586_);
v_res_2588_ = l_Lake_Job_zipWith(v_00_u03b3_2578_, v_00_u03b1_2579_, v_00_u03b2_2580_, v_inst_2581_, v_f_2582_, v_self_2583_, v_other_2584_, v_prio_2585_, v_sync_boxed_2587_);
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg___lam__0(lean_object* v___x_2589_, lean_object* v_rx_2590_, lean_object* v_ry_2591_){
_start:
{
lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2612_; lean_object* v___y_2613_; 
if (lean_obj_tag(v_rx_2590_) == 0)
{
if (lean_obj_tag(v_ry_2591_) == 0)
{
lean_object* v_a_2615_; lean_object* v_a_2616_; lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2639_; 
lean_dec(v___x_2589_);
v_a_2615_ = lean_ctor_get(v_rx_2590_, 0);
lean_inc(v_a_2615_);
v_a_2616_ = lean_ctor_get(v_rx_2590_, 1);
lean_inc(v_a_2616_);
lean_dec_ref_known(v_rx_2590_, 2);
v_a_2617_ = lean_ctor_get(v_ry_2591_, 1);
v_isSharedCheck_2639_ = !lean_is_exclusive(v_ry_2591_);
if (v_isSharedCheck_2639_ == 0)
{
lean_object* v_unused_2640_; 
v_unused_2640_ = lean_ctor_get(v_ry_2591_, 0);
lean_dec(v_unused_2640_);
v___x_2619_ = v_ry_2591_;
v_isShared_2620_ = v_isSharedCheck_2639_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v_ry_2591_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2639_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2621_; lean_object* v_log_2622_; uint8_t v_action_2623_; uint8_t v_wantsRebuild_2624_; lean_object* v_buildTime_2625_; lean_object* v_trace_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2636_; 
lean_inc(v_a_2616_);
v___x_2621_ = l_Lake_JobState_merge(v_a_2616_, v_a_2617_);
v_log_2622_ = lean_ctor_get(v___x_2621_, 0);
lean_inc_ref(v_log_2622_);
v_action_2623_ = lean_ctor_get_uint8(v___x_2621_, sizeof(void*)*3);
v_wantsRebuild_2624_ = lean_ctor_get_uint8(v___x_2621_, sizeof(void*)*3 + 1);
v_buildTime_2625_ = lean_ctor_get(v___x_2621_, 2);
lean_inc(v_buildTime_2625_);
lean_dec_ref(v___x_2621_);
v_trace_2626_ = lean_ctor_get(v_a_2616_, 1);
v_isSharedCheck_2636_ = !lean_is_exclusive(v_a_2616_);
if (v_isSharedCheck_2636_ == 0)
{
lean_object* v_unused_2637_; lean_object* v_unused_2638_; 
v_unused_2637_ = lean_ctor_get(v_a_2616_, 2);
lean_dec(v_unused_2637_);
v_unused_2638_ = lean_ctor_get(v_a_2616_, 0);
lean_dec(v_unused_2638_);
v___x_2628_ = v_a_2616_;
v_isShared_2629_ = v_isSharedCheck_2636_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_trace_2626_);
lean_dec(v_a_2616_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2636_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 2, v_buildTime_2625_);
lean_ctor_set(v___x_2628_, 0, v_log_2622_);
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_log_2622_);
lean_ctor_set(v_reuseFailAlloc_2635_, 1, v_trace_2626_);
lean_ctor_set(v_reuseFailAlloc_2635_, 2, v_buildTime_2625_);
v___x_2631_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
lean_object* v___x_2633_; 
lean_ctor_set_uint8(v___x_2631_, sizeof(void*)*3, v_action_2623_);
lean_ctor_set_uint8(v___x_2631_, sizeof(void*)*3 + 1, v_wantsRebuild_2624_);
if (v_isShared_2620_ == 0)
{
lean_ctor_set(v___x_2619_, 1, v___x_2631_);
lean_ctor_set(v___x_2619_, 0, v_a_2615_);
v___x_2633_ = v___x_2619_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2615_);
lean_ctor_set(v_reuseFailAlloc_2634_, 1, v___x_2631_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
}
else
{
lean_object* v_a_2641_; 
v_a_2641_ = lean_ctor_get(v_rx_2590_, 1);
lean_inc(v_a_2641_);
lean_dec_ref_known(v_rx_2590_, 2);
v___y_2612_ = v_ry_2591_;
v___y_2613_ = v_a_2641_;
goto v___jp_2611_;
}
}
else
{
lean_object* v_a_2642_; 
v_a_2642_ = lean_ctor_get(v_rx_2590_, 1);
lean_inc(v_a_2642_);
lean_dec_ref(v_rx_2590_);
v___y_2612_ = v_ry_2591_;
v___y_2613_ = v_a_2642_;
goto v___jp_2611_;
}
v___jp_2592_:
{
lean_object* v___x_2595_; lean_object* v_log_2596_; uint8_t v_action_2597_; uint8_t v_wantsRebuild_2598_; lean_object* v_buildTime_2599_; lean_object* v_trace_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2608_; 
lean_inc_ref(v___y_2593_);
v___x_2595_ = l_Lake_JobState_merge(v___y_2593_, v___y_2594_);
v_log_2596_ = lean_ctor_get(v___x_2595_, 0);
lean_inc_ref(v_log_2596_);
v_action_2597_ = lean_ctor_get_uint8(v___x_2595_, sizeof(void*)*3);
v_wantsRebuild_2598_ = lean_ctor_get_uint8(v___x_2595_, sizeof(void*)*3 + 1);
v_buildTime_2599_ = lean_ctor_get(v___x_2595_, 2);
lean_inc(v_buildTime_2599_);
lean_dec_ref(v___x_2595_);
v_trace_2600_ = lean_ctor_get(v___y_2593_, 1);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___y_2593_);
if (v_isSharedCheck_2608_ == 0)
{
lean_object* v_unused_2609_; lean_object* v_unused_2610_; 
v_unused_2609_ = lean_ctor_get(v___y_2593_, 2);
lean_dec(v_unused_2609_);
v_unused_2610_ = lean_ctor_get(v___y_2593_, 0);
lean_dec(v_unused_2610_);
v___x_2602_ = v___y_2593_;
v_isShared_2603_ = v_isSharedCheck_2608_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_trace_2600_);
lean_dec(v___y_2593_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2608_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2605_; 
if (v_isShared_2603_ == 0)
{
lean_ctor_set(v___x_2602_, 2, v_buildTime_2599_);
lean_ctor_set(v___x_2602_, 0, v_log_2596_);
v___x_2605_ = v___x_2602_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_log_2596_);
lean_ctor_set(v_reuseFailAlloc_2607_, 1, v_trace_2600_);
lean_ctor_set(v_reuseFailAlloc_2607_, 2, v_buildTime_2599_);
v___x_2605_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
lean_object* v___x_2606_; 
lean_ctor_set_uint8(v___x_2605_, sizeof(void*)*3, v_action_2597_);
lean_ctor_set_uint8(v___x_2605_, sizeof(void*)*3 + 1, v_wantsRebuild_2598_);
v___x_2606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2589_);
lean_ctor_set(v___x_2606_, 1, v___x_2605_);
return v___x_2606_;
}
}
}
v___jp_2611_:
{
lean_object* v_a_2614_; 
v_a_2614_ = lean_ctor_get(v___y_2612_, 1);
lean_inc(v_a_2614_);
lean_dec_ref(v___y_2612_);
v___y_2593_ = v___y_2613_;
v___y_2594_ = v_a_2614_;
goto v___jp_2592_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg___lam__1(lean_object* v_other_2643_, lean_object* v___x_2644_, uint8_t v___x_2645_, lean_object* v_rx_2646_){
_start:
{
lean_object* v_task_2647_; lean_object* v___f_2648_; lean_object* v___x_2649_; 
v_task_2647_ = lean_ctor_get(v_other_2643_, 0);
lean_inc_ref(v_task_2647_);
lean_dec_ref(v_other_2643_);
lean_inc(v___x_2644_);
v___f_2648_ = lean_alloc_closure((void*)(l_Lake_Job_add___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2648_, 0, v___x_2644_);
lean_closure_set(v___f_2648_, 1, v_rx_2646_);
v___x_2649_ = lean_task_map(v___f_2648_, v_task_2647_, v___x_2644_, v___x_2645_);
return v___x_2649_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg___lam__1___boxed(lean_object* v_other_2650_, lean_object* v___x_2651_, lean_object* v___x_2652_, lean_object* v_rx_2653_){
_start:
{
uint8_t v___x_253__boxed_2654_; lean_object* v_res_2655_; 
v___x_253__boxed_2654_ = lean_unbox(v___x_2652_);
v_res_2655_ = l_Lake_Job_add___redArg___lam__1(v_other_2650_, v___x_2651_, v___x_253__boxed_2654_, v_rx_2653_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg(lean_object* v_self_2656_, lean_object* v_other_2657_){
_start:
{
lean_object* v_task_2658_; lean_object* v_kind_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2673_; 
v_task_2658_ = lean_ctor_get(v_self_2656_, 0);
v_kind_2659_ = lean_ctor_get(v_self_2656_, 1);
v_isSharedCheck_2673_ = !lean_is_exclusive(v_self_2656_);
if (v_isSharedCheck_2673_ == 0)
{
lean_object* v_unused_2674_; 
v_unused_2674_ = lean_ctor_get(v_self_2656_, 2);
lean_dec(v_unused_2674_);
v___x_2661_ = v_self_2656_;
v_isShared_2662_ = v_isSharedCheck_2673_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_kind_2659_);
lean_inc(v_task_2658_);
lean_dec(v_self_2656_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2673_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2663_; uint8_t v___x_2664_; lean_object* v___x_2665_; lean_object* v___f_2666_; uint8_t v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2663_ = lean_unsigned_to_nat(0u);
v___x_2664_ = 0;
v___x_2665_ = lean_box(v___x_2664_);
v___f_2666_ = lean_alloc_closure((void*)(l_Lake_Job_add___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2666_, 0, v_other_2657_);
lean_closure_set(v___f_2666_, 1, v___x_2663_);
lean_closure_set(v___f_2666_, 2, v___x_2665_);
v___x_2667_ = 1;
v___x_2668_ = lean_task_bind(v_task_2658_, v___f_2666_, v___x_2663_, v___x_2667_);
v___x_2669_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
if (v_isShared_2662_ == 0)
{
lean_ctor_set(v___x_2661_, 2, v___x_2669_);
lean_ctor_set(v___x_2661_, 0, v___x_2668_);
v___x_2671_ = v___x_2661_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v___x_2668_);
lean_ctor_set(v_reuseFailAlloc_2672_, 1, v_kind_2659_);
lean_ctor_set(v_reuseFailAlloc_2672_, 2, v___x_2669_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_ctor_set_uint8(v___x_2671_, sizeof(void*)*3, v___x_2664_);
return v___x_2671_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_add(lean_object* v_00_u03b1_2675_, lean_object* v_00_u03b2_2676_, lean_object* v_self_2677_, lean_object* v_other_2678_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = l_Lake_Job_add___redArg(v_self_2677_, v_other_2678_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg___lam__0(lean_object* v___x_2680_, lean_object* v_rx_2681_, lean_object* v_ry_2682_){
_start:
{
lean_object* v___y_2684_; lean_object* v___y_2685_; lean_object* v___y_2689_; lean_object* v___y_2690_; 
if (lean_obj_tag(v_rx_2681_) == 0)
{
if (lean_obj_tag(v_ry_2682_) == 0)
{
lean_object* v_a_2692_; lean_object* v_a_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2702_; 
lean_dec(v___x_2680_);
v_a_2692_ = lean_ctor_get(v_rx_2681_, 1);
lean_inc(v_a_2692_);
lean_dec_ref_known(v_rx_2681_, 2);
v_a_2693_ = lean_ctor_get(v_ry_2682_, 1);
v_isSharedCheck_2702_ = !lean_is_exclusive(v_ry_2682_);
if (v_isSharedCheck_2702_ == 0)
{
lean_object* v_unused_2703_; 
v_unused_2703_ = lean_ctor_get(v_ry_2682_, 0);
lean_dec(v_unused_2703_);
v___x_2695_ = v_ry_2682_;
v_isShared_2696_ = v_isSharedCheck_2702_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_a_2693_);
lean_dec(v_ry_2682_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2702_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2700_; 
v___x_2697_ = lean_box(0);
v___x_2698_ = l_Lake_JobState_merge(v_a_2692_, v_a_2693_);
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 1, v___x_2698_);
lean_ctor_set(v___x_2695_, 0, v___x_2697_);
v___x_2700_ = v___x_2695_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v___x_2697_);
lean_ctor_set(v_reuseFailAlloc_2701_, 1, v___x_2698_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
else
{
lean_object* v_a_2704_; 
v_a_2704_ = lean_ctor_get(v_rx_2681_, 1);
lean_inc(v_a_2704_);
lean_dec_ref_known(v_rx_2681_, 2);
v___y_2689_ = v_ry_2682_;
v___y_2690_ = v_a_2704_;
goto v___jp_2688_;
}
}
else
{
lean_object* v_a_2705_; 
v_a_2705_ = lean_ctor_get(v_rx_2681_, 1);
lean_inc(v_a_2705_);
lean_dec_ref(v_rx_2681_);
v___y_2689_ = v_ry_2682_;
v___y_2690_ = v_a_2705_;
goto v___jp_2688_;
}
v___jp_2683_:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; 
v___x_2686_ = l_Lake_JobState_merge(v___y_2684_, v___y_2685_);
v___x_2687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2680_);
lean_ctor_set(v___x_2687_, 1, v___x_2686_);
return v___x_2687_;
}
v___jp_2688_:
{
lean_object* v_a_2691_; 
v_a_2691_ = lean_ctor_get(v___y_2689_, 1);
lean_inc(v_a_2691_);
lean_dec_ref(v___y_2689_);
v___y_2684_ = v___y_2690_;
v___y_2685_ = v_a_2691_;
goto v___jp_2683_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg___lam__1(lean_object* v_other_2706_, lean_object* v___x_2707_, uint8_t v___x_2708_, lean_object* v_rx_2709_){
_start:
{
lean_object* v_task_2710_; lean_object* v___f_2711_; lean_object* v___x_2712_; 
v_task_2710_ = lean_ctor_get(v_other_2706_, 0);
lean_inc_ref(v_task_2710_);
lean_dec_ref(v_other_2706_);
lean_inc(v___x_2707_);
v___f_2711_ = lean_alloc_closure((void*)(l_Lake_Job_mix___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2711_, 0, v___x_2707_);
lean_closure_set(v___f_2711_, 1, v_rx_2709_);
v___x_2712_ = lean_task_map(v___f_2711_, v_task_2710_, v___x_2707_, v___x_2708_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg___lam__1___boxed(lean_object* v_other_2713_, lean_object* v___x_2714_, lean_object* v___x_2715_, lean_object* v_rx_2716_){
_start:
{
uint8_t v___x_142__boxed_2717_; lean_object* v_res_2718_; 
v___x_142__boxed_2717_ = lean_unbox(v___x_2715_);
v_res_2718_ = l_Lake_Job_mix___redArg___lam__1(v_other_2713_, v___x_2714_, v___x_142__boxed_2717_, v_rx_2716_);
return v_res_2718_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg(lean_object* v_self_2719_, lean_object* v_other_2720_){
_start:
{
lean_object* v_task_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2736_; 
v_task_2721_ = lean_ctor_get(v_self_2719_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v_self_2719_);
if (v_isSharedCheck_2736_ == 0)
{
lean_object* v_unused_2737_; lean_object* v_unused_2738_; 
v_unused_2737_ = lean_ctor_get(v_self_2719_, 2);
lean_dec(v_unused_2737_);
v_unused_2738_ = lean_ctor_get(v_self_2719_, 1);
lean_dec(v_unused_2738_);
v___x_2723_ = v_self_2719_;
v_isShared_2724_ = v_isSharedCheck_2736_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_task_2721_);
lean_dec(v_self_2719_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2736_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2725_; lean_object* v___x_2726_; uint8_t v___x_2727_; lean_object* v___x_2728_; lean_object* v___f_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; uint8_t v___x_2732_; lean_object* v___x_2734_; 
v___x_2725_ = l_Lake_instDataKindUnit;
v___x_2726_ = lean_unsigned_to_nat(0u);
v___x_2727_ = 1;
v___x_2728_ = lean_box(v___x_2727_);
v___f_2729_ = lean_alloc_closure((void*)(l_Lake_Job_mix___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2729_, 0, v_other_2720_);
lean_closure_set(v___f_2729_, 1, v___x_2726_);
lean_closure_set(v___f_2729_, 2, v___x_2728_);
v___x_2730_ = lean_task_bind(v_task_2721_, v___f_2729_, v___x_2726_, v___x_2727_);
v___x_2731_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2732_ = 0;
if (v_isShared_2724_ == 0)
{
lean_ctor_set(v___x_2723_, 2, v___x_2731_);
lean_ctor_set(v___x_2723_, 1, v___x_2725_);
lean_ctor_set(v___x_2723_, 0, v___x_2730_);
v___x_2734_ = v___x_2723_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2730_);
lean_ctor_set(v_reuseFailAlloc_2735_, 1, v___x_2725_);
lean_ctor_set(v_reuseFailAlloc_2735_, 2, v___x_2731_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
lean_ctor_set_uint8(v___x_2734_, sizeof(void*)*3, v___x_2732_);
return v___x_2734_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mix(lean_object* v_00_u03b1_2739_, lean_object* v_00_u03b2_2740_, lean_object* v_self_2741_, lean_object* v_other_2742_){
_start:
{
lean_object* v___x_2743_; 
v___x_2743_ = l_Lake_Job_mix___redArg(v_self_2741_, v_other_2742_);
return v___x_2743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg(lean_object* v_as_2744_, size_t v_i_2745_, size_t v_stop_2746_, lean_object* v_b_2747_){
_start:
{
uint8_t v___x_2748_; 
v___x_2748_ = lean_usize_dec_eq(v_i_2745_, v_stop_2746_);
if (v___x_2748_ == 0)
{
size_t v___x_2749_; size_t v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2749_ = ((size_t)1ULL);
v___x_2750_ = lean_usize_sub(v_i_2745_, v___x_2749_);
v___x_2751_ = lean_array_uget_borrowed(v_as_2744_, v___x_2750_);
lean_inc(v___x_2751_);
v___x_2752_ = l_Lake_Job_mix___redArg(v___x_2751_, v_b_2747_);
v_i_2745_ = v___x_2750_;
v_b_2747_ = v___x_2752_;
goto _start;
}
else
{
return v_b_2747_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg___boxed(lean_object* v_as_2754_, lean_object* v_i_2755_, lean_object* v_stop_2756_, lean_object* v_b_2757_){
_start:
{
size_t v_i_boxed_2758_; size_t v_stop_boxed_2759_; lean_object* v_res_2760_; 
v_i_boxed_2758_ = lean_unbox_usize(v_i_2755_);
lean_dec(v_i_2755_);
v_stop_boxed_2759_ = lean_unbox_usize(v_stop_2756_);
lean_dec(v_stop_2756_);
v_res_2760_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg(v_as_2754_, v_i_boxed_2758_, v_stop_boxed_2759_, v_b_2757_);
lean_dec_ref(v_as_2754_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_mixList_spec__0___redArg(lean_object* v_init_2761_, lean_object* v_l_2762_){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; uint8_t v___x_2766_; 
v___x_2763_ = lean_array_mk(v_l_2762_);
v___x_2764_ = lean_array_get_size(v___x_2763_);
v___x_2765_ = lean_unsigned_to_nat(0u);
v___x_2766_ = lean_nat_dec_lt(v___x_2765_, v___x_2764_);
if (v___x_2766_ == 0)
{
lean_dec_ref(v___x_2763_);
return v_init_2761_;
}
else
{
size_t v___x_2767_; size_t v___x_2768_; lean_object* v___x_2769_; 
v___x_2767_ = lean_usize_of_nat(v___x_2764_);
v___x_2768_ = ((size_t)0ULL);
v___x_2769_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg(v___x_2763_, v___x_2767_, v___x_2768_, v_init_2761_);
lean_dec_ref(v___x_2763_);
return v___x_2769_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixList___redArg(lean_object* v_jobs_2770_, lean_object* v_traceCaption_2771_){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; uint8_t v___x_2776_; uint8_t v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2772_ = lean_box(0);
v___x_2773_ = lean_box(0);
v___x_2774_ = lean_unsigned_to_nat(0u);
v___x_2775_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_2776_ = 0;
v___x_2777_ = 0;
v___x_2778_ = l_Lake_BuildTrace_nil(v_traceCaption_2771_);
v___x_2779_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2779_, 0, v___x_2775_);
lean_ctor_set(v___x_2779_, 1, v___x_2778_);
lean_ctor_set(v___x_2779_, 2, v___x_2774_);
lean_ctor_set_uint8(v___x_2779_, sizeof(void*)*3, v___x_2776_);
lean_ctor_set_uint8(v___x_2779_, sizeof(void*)*3 + 1, v___x_2777_);
v___x_2780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2772_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
v___x_2781_ = lean_task_pure(v___x_2780_);
v___x_2782_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2783_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2783_, 0, v___x_2781_);
lean_ctor_set(v___x_2783_, 1, v___x_2773_);
lean_ctor_set(v___x_2783_, 2, v___x_2782_);
lean_ctor_set_uint8(v___x_2783_, sizeof(void*)*3, v___x_2777_);
v___x_2784_ = l_List_foldrTR___at___00Lake_Job_mixList_spec__0___redArg(v___x_2783_, v_jobs_2770_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixList(lean_object* v_00_u03b1_2785_, lean_object* v_jobs_2786_, lean_object* v_traceCaption_2787_){
_start:
{
lean_object* v___x_2788_; 
v___x_2788_ = l_Lake_Job_mixList___redArg(v_jobs_2786_, v_traceCaption_2787_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_mixList_spec__0(lean_object* v_00_u03b1_2789_, lean_object* v_init_2790_, lean_object* v_l_2791_){
_start:
{
lean_object* v___x_2792_; 
v___x_2792_ = l_List_foldrTR___at___00Lake_Job_mixList_spec__0___redArg(v_init_2790_, v_l_2791_);
return v___x_2792_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0(lean_object* v_00_u03b1_2793_, lean_object* v_as_2794_, size_t v_i_2795_, size_t v_stop_2796_, lean_object* v_b_2797_){
_start:
{
lean_object* v___x_2798_; 
v___x_2798_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg(v_as_2794_, v_i_2795_, v_stop_2796_, v_b_2797_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2799_, lean_object* v_as_2800_, lean_object* v_i_2801_, lean_object* v_stop_2802_, lean_object* v_b_2803_){
_start:
{
size_t v_i_boxed_2804_; size_t v_stop_boxed_2805_; lean_object* v_res_2806_; 
v_i_boxed_2804_ = lean_unbox_usize(v_i_2801_);
lean_dec(v_i_2801_);
v_stop_boxed_2805_ = lean_unbox_usize(v_stop_2802_);
lean_dec(v_stop_2802_);
v_res_2806_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0(v_00_u03b1_2799_, v_as_2800_, v_i_boxed_2804_, v_stop_boxed_2805_, v_b_2803_);
lean_dec_ref(v_as_2800_);
return v_res_2806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(lean_object* v_as_2807_, size_t v_i_2808_, size_t v_stop_2809_, lean_object* v_b_2810_){
_start:
{
uint8_t v___x_2811_; 
v___x_2811_ = lean_usize_dec_eq(v_i_2808_, v_stop_2809_);
if (v___x_2811_ == 0)
{
lean_object* v___x_2812_; lean_object* v___x_2813_; size_t v___x_2814_; size_t v___x_2815_; 
v___x_2812_ = lean_array_uget_borrowed(v_as_2807_, v_i_2808_);
lean_inc(v___x_2812_);
v___x_2813_ = l_Lake_Job_mix___redArg(v_b_2810_, v___x_2812_);
v___x_2814_ = ((size_t)1ULL);
v___x_2815_ = lean_usize_add(v_i_2808_, v___x_2814_);
v_i_2808_ = v___x_2815_;
v_b_2810_ = v___x_2813_;
goto _start;
}
else
{
return v_b_2810_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg___boxed(lean_object* v_as_2817_, lean_object* v_i_2818_, lean_object* v_stop_2819_, lean_object* v_b_2820_){
_start:
{
size_t v_i_boxed_2821_; size_t v_stop_boxed_2822_; lean_object* v_res_2823_; 
v_i_boxed_2821_ = lean_unbox_usize(v_i_2818_);
lean_dec(v_i_2818_);
v_stop_boxed_2822_ = lean_unbox_usize(v_stop_2819_);
lean_dec(v_stop_2819_);
v_res_2823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(v_as_2817_, v_i_boxed_2821_, v_stop_boxed_2822_, v_b_2820_);
lean_dec_ref(v_as_2817_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixArray___redArg(lean_object* v_jobs_2824_, lean_object* v_traceCaption_2825_){
_start:
{
lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; uint8_t v___x_2830_; uint8_t v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; uint8_t v___x_2839_; 
v___x_2826_ = lean_box(0);
v___x_2827_ = lean_box(0);
v___x_2828_ = lean_unsigned_to_nat(0u);
v___x_2829_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_2830_ = 0;
v___x_2831_ = 0;
v___x_2832_ = l_Lake_BuildTrace_nil(v_traceCaption_2825_);
v___x_2833_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2833_, 0, v___x_2829_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
lean_ctor_set(v___x_2833_, 2, v___x_2828_);
lean_ctor_set_uint8(v___x_2833_, sizeof(void*)*3, v___x_2830_);
lean_ctor_set_uint8(v___x_2833_, sizeof(void*)*3 + 1, v___x_2831_);
v___x_2834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2826_);
lean_ctor_set(v___x_2834_, 1, v___x_2833_);
v___x_2835_ = lean_task_pure(v___x_2834_);
v___x_2836_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2837_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2837_, 0, v___x_2835_);
lean_ctor_set(v___x_2837_, 1, v___x_2827_);
lean_ctor_set(v___x_2837_, 2, v___x_2836_);
lean_ctor_set_uint8(v___x_2837_, sizeof(void*)*3, v___x_2831_);
v___x_2838_ = lean_array_get_size(v_jobs_2824_);
v___x_2839_ = lean_nat_dec_lt(v___x_2828_, v___x_2838_);
if (v___x_2839_ == 0)
{
return v___x_2837_;
}
else
{
uint8_t v___x_2840_; 
v___x_2840_ = lean_nat_dec_le(v___x_2838_, v___x_2838_);
if (v___x_2840_ == 0)
{
if (v___x_2839_ == 0)
{
return v___x_2837_;
}
else
{
size_t v___x_2841_; size_t v___x_2842_; lean_object* v___x_2843_; 
v___x_2841_ = ((size_t)0ULL);
v___x_2842_ = lean_usize_of_nat(v___x_2838_);
v___x_2843_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(v_jobs_2824_, v___x_2841_, v___x_2842_, v___x_2837_);
return v___x_2843_;
}
}
else
{
size_t v___x_2844_; size_t v___x_2845_; lean_object* v___x_2846_; 
v___x_2844_ = ((size_t)0ULL);
v___x_2845_ = lean_usize_of_nat(v___x_2838_);
v___x_2846_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(v_jobs_2824_, v___x_2844_, v___x_2845_, v___x_2837_);
return v___x_2846_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixArray___redArg___boxed(lean_object* v_jobs_2847_, lean_object* v_traceCaption_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lake_Job_mixArray___redArg(v_jobs_2847_, v_traceCaption_2848_);
lean_dec_ref(v_jobs_2847_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixArray(lean_object* v_00_u03b1_2850_, lean_object* v_jobs_2851_, lean_object* v_traceCaption_2852_){
_start:
{
lean_object* v___x_2853_; 
v___x_2853_ = l_Lake_Job_mixArray___redArg(v_jobs_2851_, v_traceCaption_2852_);
return v___x_2853_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixArray___boxed(lean_object* v_00_u03b1_2854_, lean_object* v_jobs_2855_, lean_object* v_traceCaption_2856_){
_start:
{
lean_object* v_res_2857_; 
v_res_2857_ = l_Lake_Job_mixArray(v_00_u03b1_2854_, v_jobs_2855_, v_traceCaption_2856_);
lean_dec_ref(v_jobs_2855_);
return v_res_2857_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0(lean_object* v_00_u03b1_2858_, lean_object* v_as_2859_, size_t v_i_2860_, size_t v_stop_2861_, lean_object* v_b_2862_){
_start:
{
lean_object* v___x_2863_; 
v___x_2863_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(v_as_2859_, v_i_2860_, v_stop_2861_, v_b_2862_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___boxed(lean_object* v_00_u03b1_2864_, lean_object* v_as_2865_, lean_object* v_i_2866_, lean_object* v_stop_2867_, lean_object* v_b_2868_){
_start:
{
size_t v_i_boxed_2869_; size_t v_stop_boxed_2870_; lean_object* v_res_2871_; 
v_i_boxed_2869_ = lean_unbox_usize(v_i_2866_);
lean_dec(v_i_2866_);
v_stop_boxed_2870_ = lean_unbox_usize(v_stop_2867_);
lean_dec(v_stop_2867_);
v_res_2871_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0(v_00_u03b1_2864_, v_as_2865_, v_i_boxed_2869_, v_stop_boxed_2870_, v_b_2868_);
lean_dec_ref(v_as_2865_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__0(lean_object* v___x_2872_, lean_object* v_rx_2873_, lean_object* v_ry_2874_){
_start:
{
lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___y_2881_; lean_object* v___y_2882_; 
if (lean_obj_tag(v_rx_2873_) == 0)
{
if (lean_obj_tag(v_ry_2874_) == 0)
{
lean_object* v_a_2884_; lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2902_; 
lean_dec(v___x_2872_);
v_a_2884_ = lean_ctor_get(v_rx_2873_, 0);
v_a_2885_ = lean_ctor_get(v_rx_2873_, 1);
v_isSharedCheck_2902_ = !lean_is_exclusive(v_rx_2873_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2887_ = v_rx_2873_;
v_isShared_2888_ = v_isSharedCheck_2902_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_inc(v_a_2884_);
lean_dec(v_rx_2873_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2902_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v_a_2889_; lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2901_; 
v_a_2889_ = lean_ctor_get(v_ry_2874_, 0);
v_a_2890_ = lean_ctor_get(v_ry_2874_, 1);
v_isSharedCheck_2901_ = !lean_is_exclusive(v_ry_2874_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2892_ = v_ry_2874_;
v_isShared_2893_ = v_isSharedCheck_2901_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_inc(v_a_2889_);
lean_dec(v_ry_2874_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2901_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2888_ == 0)
{
lean_ctor_set_tag(v___x_2887_, 1);
lean_ctor_set(v___x_2887_, 1, v_a_2889_);
v___x_2895_ = v___x_2887_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v_a_2884_);
lean_ctor_set(v_reuseFailAlloc_2900_, 1, v_a_2889_);
v___x_2895_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
lean_object* v___x_2896_; lean_object* v___x_2898_; 
v___x_2896_ = l_Lake_JobState_merge(v_a_2885_, v_a_2890_);
if (v_isShared_2893_ == 0)
{
lean_ctor_set(v___x_2892_, 1, v___x_2896_);
lean_ctor_set(v___x_2892_, 0, v___x_2895_);
v___x_2898_ = v___x_2892_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v___x_2895_);
lean_ctor_set(v_reuseFailAlloc_2899_, 1, v___x_2896_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
}
}
else
{
lean_object* v_a_2903_; 
v_a_2903_ = lean_ctor_get(v_rx_2873_, 1);
lean_inc(v_a_2903_);
lean_dec_ref_known(v_rx_2873_, 2);
v___y_2881_ = v_ry_2874_;
v___y_2882_ = v_a_2903_;
goto v___jp_2880_;
}
}
else
{
lean_object* v_a_2904_; 
v_a_2904_ = lean_ctor_get(v_rx_2873_, 1);
lean_inc(v_a_2904_);
lean_dec_ref(v_rx_2873_);
v___y_2881_ = v_ry_2874_;
v___y_2882_ = v_a_2904_;
goto v___jp_2880_;
}
v___jp_2875_:
{
lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2878_ = l_Lake_JobState_merge(v___y_2876_, v___y_2877_);
v___x_2879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2872_);
lean_ctor_set(v___x_2879_, 1, v___x_2878_);
return v___x_2879_;
}
v___jp_2880_:
{
lean_object* v_a_2883_; 
v_a_2883_ = lean_ctor_get(v___y_2881_, 1);
lean_inc(v_a_2883_);
lean_dec_ref(v___y_2881_);
v___y_2876_ = v___y_2882_;
v___y_2877_ = v_a_2883_;
goto v___jp_2875_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__1(lean_object* v_b_2905_, lean_object* v___x_2906_, uint8_t v___x_2907_, lean_object* v_rx_2908_){
_start:
{
lean_object* v_task_2909_; lean_object* v___f_2910_; lean_object* v___x_2911_; 
v_task_2909_ = lean_ctor_get(v_b_2905_, 0);
lean_inc_ref(v_task_2909_);
lean_dec_ref(v_b_2905_);
lean_inc(v___x_2906_);
v___f_2910_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2910_, 0, v___x_2906_);
lean_closure_set(v___f_2910_, 1, v_rx_2908_);
v___x_2911_ = lean_task_map(v___f_2910_, v_task_2909_, v___x_2906_, v___x_2907_);
return v___x_2911_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v_b_2912_, lean_object* v___x_2913_, lean_object* v___x_2914_, lean_object* v_rx_2915_){
_start:
{
uint8_t v___x_480__boxed_2916_; lean_object* v_res_2917_; 
v___x_480__boxed_2916_ = lean_unbox(v___x_2914_);
v_res_2917_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__1(v_b_2912_, v___x_2913_, v___x_480__boxed_2916_, v_rx_2915_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg(lean_object* v_as_2918_, size_t v_i_2919_, size_t v_stop_2920_, lean_object* v_b_2921_){
_start:
{
uint8_t v___x_2922_; 
v___x_2922_ = lean_usize_dec_eq(v_i_2919_, v_stop_2920_);
if (v___x_2922_ == 0)
{
size_t v___x_2923_; size_t v___x_2924_; lean_object* v___x_2925_; lean_object* v_task_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2941_; 
v___x_2923_ = ((size_t)1ULL);
v___x_2924_ = lean_usize_sub(v_i_2919_, v___x_2923_);
v___x_2925_ = lean_array_uget(v_as_2918_, v___x_2924_);
v_task_2926_ = lean_ctor_get(v___x_2925_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___x_2925_);
if (v_isSharedCheck_2941_ == 0)
{
lean_object* v_unused_2942_; lean_object* v_unused_2943_; 
v_unused_2942_ = lean_ctor_get(v___x_2925_, 2);
lean_dec(v_unused_2942_);
v_unused_2943_ = lean_ctor_get(v___x_2925_, 1);
lean_dec(v_unused_2943_);
v___x_2928_ = v___x_2925_;
v_isShared_2929_ = v_isSharedCheck_2941_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_task_2926_);
lean_dec(v___x_2925_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2941_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; uint8_t v___x_2932_; lean_object* v___x_2933_; lean_object* v___f_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2938_; 
v___x_2930_ = lean_box(0);
v___x_2931_ = lean_unsigned_to_nat(0u);
v___x_2932_ = 1;
v___x_2933_ = lean_box(v___x_2932_);
v___f_2934_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2934_, 0, v_b_2921_);
lean_closure_set(v___f_2934_, 1, v___x_2931_);
lean_closure_set(v___f_2934_, 2, v___x_2933_);
v___x_2935_ = lean_task_bind(v_task_2926_, v___f_2934_, v___x_2931_, v___x_2932_);
v___x_2936_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
if (v_isShared_2929_ == 0)
{
lean_ctor_set(v___x_2928_, 2, v___x_2936_);
lean_ctor_set(v___x_2928_, 1, v___x_2930_);
lean_ctor_set(v___x_2928_, 0, v___x_2935_);
v___x_2938_ = v___x_2928_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v___x_2935_);
lean_ctor_set(v_reuseFailAlloc_2940_, 1, v___x_2930_);
lean_ctor_set(v_reuseFailAlloc_2940_, 2, v___x_2936_);
v___x_2938_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
lean_ctor_set_uint8(v___x_2938_, sizeof(void*)*3, v___x_2922_);
v_i_2919_ = v___x_2924_;
v_b_2921_ = v___x_2938_;
goto _start;
}
}
}
else
{
return v_b_2921_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___boxed(lean_object* v_as_2944_, lean_object* v_i_2945_, lean_object* v_stop_2946_, lean_object* v_b_2947_){
_start:
{
size_t v_i_boxed_2948_; size_t v_stop_boxed_2949_; lean_object* v_res_2950_; 
v_i_boxed_2948_ = lean_unbox_usize(v_i_2945_);
lean_dec(v_i_2945_);
v_stop_boxed_2949_ = lean_unbox_usize(v_stop_2946_);
lean_dec(v_stop_2946_);
v_res_2950_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg(v_as_2944_, v_i_boxed_2948_, v_stop_boxed_2949_, v_b_2947_);
lean_dec_ref(v_as_2944_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_collectList_spec__0___redArg(lean_object* v_init_2951_, lean_object* v_l_2952_){
_start:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; uint8_t v___x_2956_; 
v___x_2953_ = lean_array_mk(v_l_2952_);
v___x_2954_ = lean_array_get_size(v___x_2953_);
v___x_2955_ = lean_unsigned_to_nat(0u);
v___x_2956_ = lean_nat_dec_lt(v___x_2955_, v___x_2954_);
if (v___x_2956_ == 0)
{
lean_dec_ref(v___x_2953_);
return v_init_2951_;
}
else
{
size_t v___x_2957_; size_t v___x_2958_; lean_object* v___x_2959_; 
v___x_2957_ = lean_usize_of_nat(v___x_2954_);
v___x_2958_ = ((size_t)0ULL);
v___x_2959_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg(v___x_2953_, v___x_2957_, v___x_2958_, v_init_2951_);
lean_dec_ref(v___x_2953_);
return v___x_2959_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectList___redArg(lean_object* v_jobs_2960_, lean_object* v_traceCaption_2961_){
_start:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; uint8_t v___x_2966_; uint8_t v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2962_ = lean_box(0);
v___x_2963_ = lean_box(0);
v___x_2964_ = lean_unsigned_to_nat(0u);
v___x_2965_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_2966_ = 0;
v___x_2967_ = 0;
v___x_2968_ = l_Lake_BuildTrace_nil(v_traceCaption_2961_);
v___x_2969_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2969_, 0, v___x_2965_);
lean_ctor_set(v___x_2969_, 1, v___x_2968_);
lean_ctor_set(v___x_2969_, 2, v___x_2964_);
lean_ctor_set_uint8(v___x_2969_, sizeof(void*)*3, v___x_2966_);
lean_ctor_set_uint8(v___x_2969_, sizeof(void*)*3 + 1, v___x_2967_);
v___x_2970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2962_);
lean_ctor_set(v___x_2970_, 1, v___x_2969_);
v___x_2971_ = lean_task_pure(v___x_2970_);
v___x_2972_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2973_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2973_, 0, v___x_2971_);
lean_ctor_set(v___x_2973_, 1, v___x_2963_);
lean_ctor_set(v___x_2973_, 2, v___x_2972_);
lean_ctor_set_uint8(v___x_2973_, sizeof(void*)*3, v___x_2967_);
v___x_2974_ = l_List_foldrTR___at___00Lake_Job_collectList_spec__0___redArg(v___x_2973_, v_jobs_2960_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectList(lean_object* v_00_u03b1_2975_, lean_object* v_jobs_2976_, lean_object* v_traceCaption_2977_){
_start:
{
lean_object* v___x_2978_; 
v___x_2978_ = l_Lake_Job_collectList___redArg(v_jobs_2976_, v_traceCaption_2977_);
return v___x_2978_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_collectList_spec__0(lean_object* v_00_u03b1_2979_, lean_object* v_init_2980_, lean_object* v_l_2981_){
_start:
{
lean_object* v___x_2982_; 
v___x_2982_ = l_List_foldrTR___at___00Lake_Job_collectList_spec__0___redArg(v_init_2980_, v_l_2981_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0(lean_object* v_00_u03b1_2983_, lean_object* v_as_2984_, size_t v_i_2985_, size_t v_stop_2986_, lean_object* v_b_2987_){
_start:
{
lean_object* v___x_2988_; 
v___x_2988_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg(v_as_2984_, v_i_2985_, v_stop_2986_, v_b_2987_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2989_, lean_object* v_as_2990_, lean_object* v_i_2991_, lean_object* v_stop_2992_, lean_object* v_b_2993_){
_start:
{
size_t v_i_boxed_2994_; size_t v_stop_boxed_2995_; lean_object* v_res_2996_; 
v_i_boxed_2994_ = lean_unbox_usize(v_i_2991_);
lean_dec(v_i_2991_);
v_stop_boxed_2995_ = lean_unbox_usize(v_stop_2992_);
lean_dec(v_stop_2992_);
v_res_2996_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0(v_00_u03b1_2989_, v_as_2990_, v_i_boxed_2994_, v_stop_boxed_2995_, v_b_2993_);
lean_dec_ref(v_as_2990_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__0(lean_object* v___x_2997_, lean_object* v_rx_2998_, lean_object* v_ry_2999_){
_start:
{
lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3006_; lean_object* v___y_3007_; 
if (lean_obj_tag(v_rx_2998_) == 0)
{
if (lean_obj_tag(v_ry_2999_) == 0)
{
lean_object* v_a_3009_; lean_object* v_a_3010_; lean_object* v_a_3011_; lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3021_; 
lean_dec(v___x_2997_);
v_a_3009_ = lean_ctor_get(v_rx_2998_, 0);
lean_inc(v_a_3009_);
v_a_3010_ = lean_ctor_get(v_rx_2998_, 1);
lean_inc(v_a_3010_);
lean_dec_ref_known(v_rx_2998_, 2);
v_a_3011_ = lean_ctor_get(v_ry_2999_, 0);
v_a_3012_ = lean_ctor_get(v_ry_2999_, 1);
v_isSharedCheck_3021_ = !lean_is_exclusive(v_ry_2999_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_3014_ = v_ry_2999_;
v_isShared_3015_ = v_isSharedCheck_3021_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_inc(v_a_3011_);
lean_dec(v_ry_2999_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3021_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3019_; 
v___x_3016_ = lean_array_push(v_a_3009_, v_a_3011_);
v___x_3017_ = l_Lake_JobState_merge(v_a_3010_, v_a_3012_);
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 1, v___x_3017_);
lean_ctor_set(v___x_3014_, 0, v___x_3016_);
v___x_3019_ = v___x_3014_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v___x_3016_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v___x_3017_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
else
{
lean_object* v_a_3022_; 
v_a_3022_ = lean_ctor_get(v_rx_2998_, 1);
lean_inc(v_a_3022_);
lean_dec_ref_known(v_rx_2998_, 2);
v___y_3006_ = v_ry_2999_;
v___y_3007_ = v_a_3022_;
goto v___jp_3005_;
}
}
else
{
lean_object* v_a_3023_; 
v_a_3023_ = lean_ctor_get(v_rx_2998_, 1);
lean_inc(v_a_3023_);
lean_dec_ref(v_rx_2998_);
v___y_3006_ = v_ry_2999_;
v___y_3007_ = v_a_3023_;
goto v___jp_3005_;
}
v___jp_3000_:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3003_ = l_Lake_JobState_merge(v___y_3001_, v___y_3002_);
v___x_3004_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3004_, 0, v___x_2997_);
lean_ctor_set(v___x_3004_, 1, v___x_3003_);
return v___x_3004_;
}
v___jp_3005_:
{
lean_object* v_a_3008_; 
v_a_3008_ = lean_ctor_get(v___y_3006_, 1);
lean_inc(v_a_3008_);
lean_dec_ref(v___y_3006_);
v___y_3001_ = v___y_3007_;
v___y_3002_ = v_a_3008_;
goto v___jp_3000_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__1(lean_object* v___x_3024_, lean_object* v___x_3025_, uint8_t v___x_3026_, lean_object* v_rx_3027_){
_start:
{
lean_object* v_task_3028_; lean_object* v___f_3029_; lean_object* v___x_3030_; 
v_task_3028_ = lean_ctor_get(v___x_3024_, 0);
lean_inc_ref(v_task_3028_);
lean_dec_ref(v___x_3024_);
lean_inc(v___x_3025_);
v___f_3029_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3029_, 0, v___x_3025_);
lean_closure_set(v___f_3029_, 1, v_rx_3027_);
v___x_3030_ = lean_task_map(v___f_3029_, v_task_3028_, v___x_3025_, v___x_3026_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__1___boxed(lean_object* v___x_3031_, lean_object* v___x_3032_, lean_object* v___x_3033_, lean_object* v_rx_3034_){
_start:
{
uint8_t v___x_414__boxed_3035_; lean_object* v_res_3036_; 
v___x_414__boxed_3035_ = lean_unbox(v___x_3033_);
v_res_3036_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__1(v___x_3031_, v___x_3032_, v___x_414__boxed_3035_, v_rx_3034_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(lean_object* v_as_3037_, size_t v_i_3038_, size_t v_stop_3039_, lean_object* v_b_3040_){
_start:
{
uint8_t v___x_3041_; 
v___x_3041_ = lean_usize_dec_eq(v_i_3038_, v_stop_3039_);
if (v___x_3041_ == 0)
{
lean_object* v_task_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3060_; 
v_task_3042_ = lean_ctor_get(v_b_3040_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v_b_3040_);
if (v_isSharedCheck_3060_ == 0)
{
lean_object* v_unused_3061_; lean_object* v_unused_3062_; 
v_unused_3061_ = lean_ctor_get(v_b_3040_, 2);
lean_dec(v_unused_3061_);
v_unused_3062_ = lean_ctor_get(v_b_3040_, 1);
lean_dec(v_unused_3062_);
v___x_3044_ = v_b_3040_;
v_isShared_3045_ = v_isSharedCheck_3060_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_task_3042_);
lean_dec(v_b_3040_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3060_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; uint8_t v___x_3049_; lean_object* v___x_3050_; lean_object* v___f_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3055_; 
v___x_3046_ = lean_box(0);
v___x_3047_ = lean_array_uget_borrowed(v_as_3037_, v_i_3038_);
v___x_3048_ = lean_unsigned_to_nat(0u);
v___x_3049_ = 1;
v___x_3050_ = lean_box(v___x_3049_);
lean_inc(v___x_3047_);
v___f_3051_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_3051_, 0, v___x_3047_);
lean_closure_set(v___f_3051_, 1, v___x_3048_);
lean_closure_set(v___f_3051_, 2, v___x_3050_);
v___x_3052_ = lean_task_bind(v_task_3042_, v___f_3051_, v___x_3048_, v___x_3049_);
v___x_3053_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
if (v_isShared_3045_ == 0)
{
lean_ctor_set(v___x_3044_, 2, v___x_3053_);
lean_ctor_set(v___x_3044_, 1, v___x_3046_);
lean_ctor_set(v___x_3044_, 0, v___x_3052_);
v___x_3055_ = v___x_3044_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v___x_3052_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v___x_3046_);
lean_ctor_set(v_reuseFailAlloc_3059_, 2, v___x_3053_);
v___x_3055_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
size_t v___x_3056_; size_t v___x_3057_; 
lean_ctor_set_uint8(v___x_3055_, sizeof(void*)*3, v___x_3041_);
v___x_3056_ = ((size_t)1ULL);
v___x_3057_ = lean_usize_add(v_i_3038_, v___x_3056_);
v_i_3038_ = v___x_3057_;
v_b_3040_ = v___x_3055_;
goto _start;
}
}
}
else
{
return v_b_3040_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___boxed(lean_object* v_as_3063_, lean_object* v_i_3064_, lean_object* v_stop_3065_, lean_object* v_b_3066_){
_start:
{
size_t v_i_boxed_3067_; size_t v_stop_boxed_3068_; lean_object* v_res_3069_; 
v_i_boxed_3067_ = lean_unbox_usize(v_i_3064_);
lean_dec(v_i_3064_);
v_stop_boxed_3068_ = lean_unbox_usize(v_stop_3065_);
lean_dec(v_stop_3065_);
v_res_3069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(v_as_3063_, v_i_boxed_3067_, v_stop_boxed_3068_, v_b_3066_);
lean_dec_ref(v_as_3063_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectArray___redArg(lean_object* v_jobs_3070_, lean_object* v_traceCaption_3071_){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; uint8_t v___x_3077_; uint8_t v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; uint8_t v___x_3085_; 
v___x_3072_ = lean_array_get_size(v_jobs_3070_);
v___x_3073_ = lean_mk_empty_array_with_capacity(v___x_3072_);
v___x_3074_ = lean_box(0);
v___x_3075_ = lean_unsigned_to_nat(0u);
v___x_3076_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_3077_ = 0;
v___x_3078_ = 0;
v___x_3079_ = l_Lake_BuildTrace_nil(v_traceCaption_3071_);
v___x_3080_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3080_, 0, v___x_3076_);
lean_ctor_set(v___x_3080_, 1, v___x_3079_);
lean_ctor_set(v___x_3080_, 2, v___x_3075_);
lean_ctor_set_uint8(v___x_3080_, sizeof(void*)*3, v___x_3077_);
lean_ctor_set_uint8(v___x_3080_, sizeof(void*)*3 + 1, v___x_3078_);
v___x_3081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3073_);
lean_ctor_set(v___x_3081_, 1, v___x_3080_);
v___x_3082_ = lean_task_pure(v___x_3081_);
v___x_3083_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_3084_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3084_, 0, v___x_3082_);
lean_ctor_set(v___x_3084_, 1, v___x_3074_);
lean_ctor_set(v___x_3084_, 2, v___x_3083_);
lean_ctor_set_uint8(v___x_3084_, sizeof(void*)*3, v___x_3078_);
v___x_3085_ = lean_nat_dec_lt(v___x_3075_, v___x_3072_);
if (v___x_3085_ == 0)
{
return v___x_3084_;
}
else
{
uint8_t v___x_3086_; 
v___x_3086_ = lean_nat_dec_le(v___x_3072_, v___x_3072_);
if (v___x_3086_ == 0)
{
if (v___x_3085_ == 0)
{
return v___x_3084_;
}
else
{
size_t v___x_3087_; size_t v___x_3088_; lean_object* v___x_3089_; 
v___x_3087_ = ((size_t)0ULL);
v___x_3088_ = lean_usize_of_nat(v___x_3072_);
v___x_3089_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(v_jobs_3070_, v___x_3087_, v___x_3088_, v___x_3084_);
return v___x_3089_;
}
}
else
{
size_t v___x_3090_; size_t v___x_3091_; lean_object* v___x_3092_; 
v___x_3090_ = ((size_t)0ULL);
v___x_3091_ = lean_usize_of_nat(v___x_3072_);
v___x_3092_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(v_jobs_3070_, v___x_3090_, v___x_3091_, v___x_3084_);
return v___x_3092_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectArray___redArg___boxed(lean_object* v_jobs_3093_, lean_object* v_traceCaption_3094_){
_start:
{
lean_object* v_res_3095_; 
v_res_3095_ = l_Lake_Job_collectArray___redArg(v_jobs_3093_, v_traceCaption_3094_);
lean_dec_ref(v_jobs_3093_);
return v_res_3095_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectArray(lean_object* v_00_u03b1_3096_, lean_object* v_jobs_3097_, lean_object* v_traceCaption_3098_){
_start:
{
lean_object* v___x_3099_; 
v___x_3099_ = l_Lake_Job_collectArray___redArg(v_jobs_3097_, v_traceCaption_3098_);
return v___x_3099_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectArray___boxed(lean_object* v_00_u03b1_3100_, lean_object* v_jobs_3101_, lean_object* v_traceCaption_3102_){
_start:
{
lean_object* v_res_3103_; 
v_res_3103_ = l_Lake_Job_collectArray(v_00_u03b1_3100_, v_jobs_3101_, v_traceCaption_3102_);
lean_dec_ref(v_jobs_3101_);
return v_res_3103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0(lean_object* v_00_u03b1_3104_, lean_object* v_as_3105_, size_t v_i_3106_, size_t v_stop_3107_, lean_object* v_b_3108_){
_start:
{
lean_object* v___x_3109_; 
v___x_3109_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(v_as_3105_, v_i_3106_, v_stop_3107_, v_b_3108_);
return v___x_3109_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___boxed(lean_object* v_00_u03b1_3110_, lean_object* v_as_3111_, lean_object* v_i_3112_, lean_object* v_stop_3113_, lean_object* v_b_3114_){
_start:
{
size_t v_i_boxed_3115_; size_t v_stop_boxed_3116_; lean_object* v_res_3117_; 
v_i_boxed_3115_ = lean_unbox_usize(v_i_3112_);
lean_dec(v_i_3112_);
v_stop_boxed_3116_ = lean_unbox_usize(v_stop_3113_);
lean_dec(v_stop_3113_);
v_res_3117_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0(v_00_u03b1_3110_, v_as_3111_, v_i_boxed_3115_, v_stop_boxed_3116_, v_b_3114_);
lean_dec_ref(v_as_3111_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1___redArg(){
_start:
{
lean_object* v___x_3119_; 
v___x_3119_ = lean_box(0);
return v___x_3119_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1___redArg___boxed(lean_object* v___dummy_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1___redArg();
return v_res_3121_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1(lean_object* v_00_u03b1_3122_, lean_object* v_inst_3123_){
_start:
{
lean_object* v___x_3124_; 
v___x_3124_ = lean_box(0);
return v___x_3124_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__0(lean_object* v___x_3125_, lean_object* v_rx_3126_, lean_object* v_i_3127_, lean_object* v_ry_3128_){
_start:
{
lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v___y_3135_; lean_object* v___y_3136_; 
if (lean_obj_tag(v_rx_3126_) == 0)
{
if (lean_obj_tag(v_ry_3128_) == 0)
{
lean_object* v_a_3138_; lean_object* v_a_3139_; lean_object* v_a_3140_; lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3150_; 
lean_dec(v___x_3125_);
v_a_3138_ = lean_ctor_get(v_rx_3126_, 0);
lean_inc(v_a_3138_);
v_a_3139_ = lean_ctor_get(v_rx_3126_, 1);
lean_inc(v_a_3139_);
lean_dec_ref_known(v_rx_3126_, 2);
v_a_3140_ = lean_ctor_get(v_ry_3128_, 0);
v_a_3141_ = lean_ctor_get(v_ry_3128_, 1);
v_isSharedCheck_3150_ = !lean_is_exclusive(v_ry_3128_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3143_ = v_ry_3128_;
v_isShared_3144_ = v_isSharedCheck_3150_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_inc(v_a_3140_);
lean_dec(v_ry_3128_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3150_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3148_; 
v___x_3145_ = lean_array_fset(v_a_3138_, v_i_3127_, v_a_3140_);
v___x_3146_ = l_Lake_JobState_merge(v_a_3139_, v_a_3141_);
if (v_isShared_3144_ == 0)
{
lean_ctor_set(v___x_3143_, 1, v___x_3146_);
lean_ctor_set(v___x_3143_, 0, v___x_3145_);
v___x_3148_ = v___x_3143_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v___x_3145_);
lean_ctor_set(v_reuseFailAlloc_3149_, 1, v___x_3146_);
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
lean_object* v_a_3151_; 
v_a_3151_ = lean_ctor_get(v_rx_3126_, 1);
lean_inc(v_a_3151_);
lean_dec_ref_known(v_rx_3126_, 2);
v___y_3135_ = v_ry_3128_;
v___y_3136_ = v_a_3151_;
goto v___jp_3134_;
}
}
else
{
lean_object* v_a_3152_; 
v_a_3152_ = lean_ctor_get(v_rx_3126_, 1);
lean_inc(v_a_3152_);
lean_dec_ref(v_rx_3126_);
v___y_3135_ = v_ry_3128_;
v___y_3136_ = v_a_3152_;
goto v___jp_3134_;
}
v___jp_3129_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3132_ = l_Lake_JobState_merge(v___y_3130_, v___y_3131_);
v___x_3133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3125_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
return v___x_3133_;
}
v___jp_3134_:
{
lean_object* v_a_3137_; 
v_a_3137_ = lean_ctor_get(v___y_3135_, 1);
lean_inc(v_a_3137_);
lean_dec_ref(v___y_3135_);
v___y_3130_ = v___y_3136_;
v___y_3131_ = v_a_3137_;
goto v___jp_3129_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__0___boxed(lean_object* v___x_3153_, lean_object* v_rx_3154_, lean_object* v_i_3155_, lean_object* v_ry_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l_Lake_Job_collectVector___redArg___lam__0(v___x_3153_, v_rx_3154_, v_i_3155_, v_ry_3156_);
lean_dec(v_i_3155_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__1(lean_object* v___x_3158_, lean_object* v___x_3159_, lean_object* v_i_3160_, uint8_t v___x_3161_, lean_object* v_rx_3162_){
_start:
{
lean_object* v_task_3163_; lean_object* v___f_3164_; lean_object* v___x_3165_; 
v_task_3163_ = lean_ctor_get(v___x_3158_, 0);
lean_inc_ref(v_task_3163_);
lean_dec_ref(v___x_3158_);
lean_inc(v___x_3159_);
v___f_3164_ = lean_alloc_closure((void*)(l_Lake_Job_collectVector___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3164_, 0, v___x_3159_);
lean_closure_set(v___f_3164_, 1, v_rx_3162_);
lean_closure_set(v___f_3164_, 2, v_i_3160_);
v___x_3165_ = lean_task_map(v___f_3164_, v_task_3163_, v___x_3159_, v___x_3161_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__1___boxed(lean_object* v___x_3166_, lean_object* v___x_3167_, lean_object* v_i_3168_, lean_object* v___x_3169_, lean_object* v_rx_3170_){
_start:
{
uint8_t v___x_191__boxed_3171_; lean_object* v_res_3172_; 
v___x_191__boxed_3171_ = lean_unbox(v___x_3169_);
v_res_3172_ = l_Lake_Job_collectVector___redArg___lam__1(v___x_3166_, v___x_3167_, v_i_3168_, v___x_191__boxed_3171_, v_rx_3170_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__2(lean_object* v_jobs_3173_, lean_object* v___x_3174_, lean_object* v_i_3175_, lean_object* v_h_3176_, lean_object* v_job_3177_){
_start:
{
lean_object* v_task_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3193_; 
v_task_3178_ = lean_ctor_get(v_job_3177_, 0);
v_isSharedCheck_3193_ = !lean_is_exclusive(v_job_3177_);
if (v_isSharedCheck_3193_ == 0)
{
lean_object* v_unused_3194_; lean_object* v_unused_3195_; 
v_unused_3194_ = lean_ctor_get(v_job_3177_, 2);
lean_dec(v_unused_3194_);
v_unused_3195_ = lean_ctor_get(v_job_3177_, 1);
lean_dec(v_unused_3195_);
v___x_3180_ = v_job_3177_;
v_isShared_3181_ = v_isSharedCheck_3193_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_task_3178_);
lean_dec(v_job_3177_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3193_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; uint8_t v___x_3184_; lean_object* v___x_3185_; lean_object* v___f_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; uint8_t v___x_3189_; lean_object* v___x_3191_; 
v___x_3182_ = lean_array_fget_borrowed(v_jobs_3173_, v_i_3175_);
v___x_3183_ = lean_unsigned_to_nat(0u);
v___x_3184_ = 1;
v___x_3185_ = lean_box(v___x_3184_);
lean_inc(v___x_3182_);
v___f_3186_ = lean_alloc_closure((void*)(l_Lake_Job_collectVector___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3186_, 0, v___x_3182_);
lean_closure_set(v___f_3186_, 1, v___x_3183_);
lean_closure_set(v___f_3186_, 2, v_i_3175_);
lean_closure_set(v___f_3186_, 3, v___x_3185_);
v___x_3187_ = lean_task_bind(v_task_3178_, v___f_3186_, v___x_3183_, v___x_3184_);
v___x_3188_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_3189_ = 0;
if (v_isShared_3181_ == 0)
{
lean_ctor_set(v___x_3180_, 2, v___x_3188_);
lean_ctor_set(v___x_3180_, 1, v___x_3174_);
lean_ctor_set(v___x_3180_, 0, v___x_3187_);
v___x_3191_ = v___x_3180_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v___x_3187_);
lean_ctor_set(v_reuseFailAlloc_3192_, 1, v___x_3174_);
lean_ctor_set(v_reuseFailAlloc_3192_, 2, v___x_3188_);
v___x_3191_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
lean_ctor_set_uint8(v___x_3191_, sizeof(void*)*3, v___x_3189_);
return v___x_3191_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__2___boxed(lean_object* v_jobs_3196_, lean_object* v___x_3197_, lean_object* v_i_3198_, lean_object* v_h_3199_, lean_object* v_job_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Lake_Job_collectVector___redArg___lam__2(v_jobs_3196_, v___x_3197_, v_i_3198_, v_h_3199_, v_job_3200_);
lean_dec_ref(v_jobs_3196_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg(lean_object* v_n_3202_, lean_object* v_jobs_3203_, lean_object* v_traceCaption_3204_){
_start:
{
lean_object* v_placeholder_3205_; lean_object* v___x_3206_; lean_object* v___f_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; uint8_t v___x_3211_; uint8_t v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v_placeholder_3205_ = lean_box(0);
v___x_3206_ = lean_box(0);
v___f_3207_ = lean_alloc_closure((void*)(l_Lake_Job_collectVector___redArg___lam__2___boxed), 5, 2);
lean_closure_set(v___f_3207_, 0, v_jobs_3203_);
lean_closure_set(v___f_3207_, 1, v___x_3206_);
lean_inc_n(v_n_3202_, 2);
v___x_3208_ = lean_mk_array(v_n_3202_, v_placeholder_3205_);
v___x_3209_ = lean_unsigned_to_nat(0u);
v___x_3210_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_3211_ = 0;
v___x_3212_ = 0;
v___x_3213_ = l_Lake_BuildTrace_nil(v_traceCaption_3204_);
v___x_3214_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3214_, 0, v___x_3210_);
lean_ctor_set(v___x_3214_, 1, v___x_3213_);
lean_ctor_set(v___x_3214_, 2, v___x_3209_);
lean_ctor_set_uint8(v___x_3214_, sizeof(void*)*3, v___x_3211_);
lean_ctor_set_uint8(v___x_3214_, sizeof(void*)*3 + 1, v___x_3212_);
v___x_3215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3208_);
lean_ctor_set(v___x_3215_, 1, v___x_3214_);
v___x_3216_ = lean_task_pure(v___x_3215_);
v___x_3217_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_3218_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3218_, 0, v___x_3216_);
lean_ctor_set(v___x_3218_, 1, v___x_3206_);
lean_ctor_set(v___x_3218_, 2, v___x_3217_);
lean_ctor_set_uint8(v___x_3218_, sizeof(void*)*3, v___x_3212_);
v___x_3219_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_box(0), v_n_3202_, v___f_3207_, v_n_3202_, lean_box(0), v___x_3218_);
lean_dec(v_n_3202_);
return v___x_3219_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector(lean_object* v_n_3220_, lean_object* v_00_u03b1_3221_, lean_object* v_inst_3222_, lean_object* v_jobs_3223_, lean_object* v_traceCaption_3224_){
_start:
{
lean_object* v___x_3225_; 
v___x_3225_ = l_Lake_Job_collectVector___redArg(v_n_3220_, v_jobs_3223_, v_traceCaption_3224_);
return v___x_3225_;
}
}
lean_object* runtime_initialize_Lake_Build_Fetch(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Build_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instMonadStateOfJobStateJobM = _init_l_Lake_instMonadStateOfJobStateJobM();
lean_mark_persistent(l_Lake_instMonadStateOfJobStateJobM);
l_Lake_instAlternativeJobM = _init_l_Lake_instAlternativeJobM();
lean_mark_persistent(l_Lake_instAlternativeJobM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Job_Monad(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Fetch(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Job_Monad(builtin);
}
#ifdef __cplusplus
}
#endif
