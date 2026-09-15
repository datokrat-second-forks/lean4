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
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_pushLogEntry(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__0(lean_object*);
lean_object* l_instMonadBaseIO___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonadStateOfOfPure___redArg(lean_object*);
uint8_t l_Lake_JobAction_merge(uint8_t, uint8_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_wait(lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EquipT_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadStateOfOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadStateOfOfMonadLift___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lake_EquipT_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_ofFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_toFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_toFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_toFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_JobM_toFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadStateOfJobStateJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__0 = (const lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__0_value;
static const lean_closure_object l_Lake_instMonadStateOfJobStateJobM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__8___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__0_value)} };
static const lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__1 = (const lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__1_value;
static lean_once_cell_t l_Lake_instMonadStateOfJobStateJobM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__2;
static const lean_closure_object l_Lake_instMonadStateOfJobStateJobM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EquipT_lift___boxed, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__3 = (const lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__3_value;
static const lean_closure_object l_Lake_instMonadStateOfJobStateJobM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__4 = (const lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__4_value;
static const lean_closure_object l_Lake_instMonadStateOfJobStateJobM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instMonadStateOfJobStateJobM___closed__5 = (const lean_object*)&l_Lake_instMonadStateOfJobStateJobM___closed__5_value;
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
static const lean_closure_object l_Lake_instAlternativeJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instAlternativeJobM___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instAlternativeJobM___closed__0 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__0_value;
static const lean_closure_object l_Lake_instAlternativeJobM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instAlternativeJobM___lam__1___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instAlternativeJobM___closed__1 = (const lean_object*)&l_Lake_instAlternativeJobM___closed__1_value;
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
static lean_object* _init_l_Lake_instMonadStateOfJobStateJobM___closed__2(void){
_start:
{
lean_object* v___f_80_; lean_object* v___x_81_; 
v___f_80_ = ((lean_object*)(l_Lake_instMonadStateOfJobStateJobM___closed__1));
v___x_81_ = l_Lake_EStateT_instMonadStateOfOfPure___redArg(v___f_80_);
return v___x_81_;
}
}
static lean_object* _init_l_Lake_instMonadStateOfJobStateJobM(void){
_start:
{
lean_object* v___x_85_; lean_object* v_get_86_; lean_object* v_set_87_; lean_object* v_modifyGet_88_; lean_object* v___x_89_; lean_object* v___f_90_; lean_object* v___x_91_; lean_object* v___f_92_; lean_object* v___f_93_; lean_object* v___x_94_; lean_object* v___f_95_; lean_object* v___f_96_; lean_object* v___x_97_; lean_object* v___f_98_; lean_object* v___f_99_; lean_object* v___x_100_; lean_object* v___f_101_; lean_object* v___f_102_; lean_object* v___x_103_; lean_object* v___f_104_; lean_object* v___f_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_85_ = lean_obj_once(&l_Lake_instMonadStateOfJobStateJobM___closed__2, &l_Lake_instMonadStateOfJobStateJobM___closed__2_once, _init_l_Lake_instMonadStateOfJobStateJobM___closed__2);
v_get_86_ = lean_ctor_get(v___x_85_, 0);
v_set_87_ = lean_ctor_get(v___x_85_, 1);
v_modifyGet_88_ = lean_ctor_get(v___x_85_, 2);
v___x_89_ = ((lean_object*)(l_Lake_instMonadStateOfJobStateJobM___closed__3));
v___f_90_ = ((lean_object*)(l_Lake_instMonadStateOfJobStateJobM___closed__4));
v___x_91_ = ((lean_object*)(l_Lake_instMonadStateOfJobStateJobM___closed__5));
lean_inc(v_set_87_);
v___f_92_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_92_, 0, v_set_87_);
lean_closure_set(v___f_92_, 1, v___f_90_);
lean_inc(v_modifyGet_88_);
v___f_93_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_93_, 0, v_modifyGet_88_);
lean_closure_set(v___f_93_, 1, v___f_90_);
lean_inc(v_get_86_);
v___x_94_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_94_, 0, lean_box(0));
lean_closure_set(v___x_94_, 1, v_get_86_);
v___f_95_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_95_, 0, v___f_92_);
lean_closure_set(v___f_95_, 1, v___x_91_);
v___f_96_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_96_, 0, v___f_93_);
lean_closure_set(v___f_96_, 1, v___x_91_);
v___x_97_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_97_, 0, lean_box(0));
lean_closure_set(v___x_97_, 1, lean_box(0));
lean_closure_set(v___x_97_, 2, lean_box(0));
lean_closure_set(v___x_97_, 3, lean_box(0));
lean_closure_set(v___x_97_, 4, v___x_94_);
v___f_98_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_98_, 0, v___f_95_);
lean_closure_set(v___f_98_, 1, v___f_90_);
v___f_99_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_99_, 0, v___f_96_);
lean_closure_set(v___f_99_, 1, v___f_90_);
v___x_100_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_100_, 0, lean_box(0));
lean_closure_set(v___x_100_, 1, v___x_97_);
v___f_101_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_101_, 0, v___f_98_);
lean_closure_set(v___f_101_, 1, v___f_90_);
v___f_102_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_102_, 0, v___f_99_);
lean_closure_set(v___f_102_, 1, v___f_90_);
v___x_103_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_103_, 0, lean_box(0));
lean_closure_set(v___x_103_, 1, v___x_100_);
v___f_104_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_104_, 0, v___f_101_);
lean_closure_set(v___f_104_, 1, v___x_89_);
v___f_105_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_105_, 0, v___f_102_);
lean_closure_set(v___f_105_, 1, v___x_89_);
v___x_106_ = lean_alloc_closure((void*)(l_Lake_EquipT_lift___boxed), 5, 4);
lean_closure_set(v___x_106_, 0, lean_box(0));
lean_closure_set(v___x_106_, 1, lean_box(0));
lean_closure_set(v___x_106_, 2, lean_box(0));
lean_closure_set(v___x_106_, 3, v___x_103_);
v___x_107_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___f_104_);
lean_ctor_set(v___x_107_, 2, v___f_105_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__0(lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_log_115_; lean_object* v___x_116_; 
v_log_115_ = lean_ctor_get(v___y_113_, 0);
lean_inc_ref(v_log_115_);
v___x_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_116_, 0, v_log_115_);
lean_ctor_set(v___x_116_, 1, v___y_113_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__0___boxed(lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lake_instMonadStateOfLogJobM___lam__0(v___y_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_);
lean_dec_ref(v___y_121_);
lean_dec(v___y_120_);
lean_dec(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__1(lean_object* v_log_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
uint8_t v_action_133_; uint8_t v_wantsRebuild_134_; lean_object* v_trace_135_; lean_object* v_buildTime_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_145_; 
v_action_133_ = lean_ctor_get_uint8(v___y_131_, sizeof(void*)*3);
v_wantsRebuild_134_ = lean_ctor_get_uint8(v___y_131_, sizeof(void*)*3 + 1);
v_trace_135_ = lean_ctor_get(v___y_131_, 1);
v_buildTime_136_ = lean_ctor_get(v___y_131_, 2);
v_isSharedCheck_145_ = !lean_is_exclusive(v___y_131_);
if (v_isSharedCheck_145_ == 0)
{
lean_object* v_unused_146_; 
v_unused_146_ = lean_ctor_get(v___y_131_, 0);
lean_dec(v_unused_146_);
v___x_138_ = v___y_131_;
v_isShared_139_ = v_isSharedCheck_145_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_buildTime_136_);
lean_inc(v_trace_135_);
lean_dec(v___y_131_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_145_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_140_ = lean_box(0);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 0, v_log_125_);
v___x_142_ = v___x_138_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_log_125_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v_trace_135_);
lean_ctor_set(v_reuseFailAlloc_144_, 2, v_buildTime_136_);
lean_ctor_set_uint8(v_reuseFailAlloc_144_, sizeof(void*)*3, v_action_133_);
lean_ctor_set_uint8(v_reuseFailAlloc_144_, sizeof(void*)*3 + 1, v_wantsRebuild_134_);
v___x_142_ = v_reuseFailAlloc_144_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; 
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_140_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
return v___x_143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__1___boxed(lean_object* v_log_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lake_instMonadStateOfLogJobM___lam__1(v_log_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_);
lean_dec_ref(v___y_152_);
lean_dec(v___y_151_);
lean_dec(v___y_150_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__2(lean_object* v_00_u03b1_156_, lean_object* v_f_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_){
_start:
{
lean_object* v_log_165_; uint8_t v_action_166_; uint8_t v_wantsRebuild_167_; lean_object* v_trace_168_; lean_object* v_buildTime_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_186_; 
v_log_165_ = lean_ctor_get(v___y_163_, 0);
v_action_166_ = lean_ctor_get_uint8(v___y_163_, sizeof(void*)*3);
v_wantsRebuild_167_ = lean_ctor_get_uint8(v___y_163_, sizeof(void*)*3 + 1);
v_trace_168_ = lean_ctor_get(v___y_163_, 1);
v_buildTime_169_ = lean_ctor_get(v___y_163_, 2);
v_isSharedCheck_186_ = !lean_is_exclusive(v___y_163_);
if (v_isSharedCheck_186_ == 0)
{
v___x_171_ = v___y_163_;
v_isShared_172_ = v_isSharedCheck_186_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_buildTime_169_);
lean_inc(v_trace_168_);
lean_inc(v_log_165_);
lean_dec(v___y_163_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_186_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v_fst_174_; lean_object* v_snd_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_185_; 
v___x_173_ = lean_apply_1(v_f_157_, v_log_165_);
v_fst_174_ = lean_ctor_get(v___x_173_, 0);
v_snd_175_ = lean_ctor_get(v___x_173_, 1);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_185_ == 0)
{
v___x_177_ = v___x_173_;
v_isShared_178_ = v_isSharedCheck_185_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_snd_175_);
lean_inc(v_fst_174_);
lean_dec(v___x_173_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_185_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_180_; 
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v_snd_175_);
v___x_180_ = v___x_171_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_snd_175_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v_trace_168_);
lean_ctor_set(v_reuseFailAlloc_184_, 2, v_buildTime_169_);
lean_ctor_set_uint8(v_reuseFailAlloc_184_, sizeof(void*)*3, v_action_166_);
lean_ctor_set_uint8(v_reuseFailAlloc_184_, sizeof(void*)*3 + 1, v_wantsRebuild_167_);
v___x_180_ = v_reuseFailAlloc_184_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
lean_object* v___x_182_; 
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 1, v___x_180_);
v___x_182_ = v___x_177_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_fst_174_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStateOfLogJobM___lam__2___boxed(lean_object* v_00_u03b1_187_, lean_object* v_f_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lake_instMonadStateOfLogJobM___lam__2(v_00_u03b1_187_, v_f_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_, v___y_194_);
lean_dec_ref(v___y_193_);
lean_dec(v___y_192_);
lean_dec(v___y_191_);
lean_dec(v___y_190_);
lean_dec_ref(v___y_189_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorJobM___lam__0(lean_object* v_00_u03b1_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v_log_217_; uint8_t v_action_218_; uint8_t v_wantsRebuild_219_; lean_object* v_trace_220_; lean_object* v_buildTime_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_233_; 
v_log_217_ = lean_ctor_get(v___y_215_, 0);
v_action_218_ = lean_ctor_get_uint8(v___y_215_, sizeof(void*)*3);
v_wantsRebuild_219_ = lean_ctor_get_uint8(v___y_215_, sizeof(void*)*3 + 1);
v_trace_220_ = lean_ctor_get(v___y_215_, 1);
v_buildTime_221_ = lean_ctor_get(v___y_215_, 2);
v_isSharedCheck_233_ = !lean_is_exclusive(v___y_215_);
if (v_isSharedCheck_233_ == 0)
{
v___x_223_ = v___y_215_;
v_isShared_224_ = v_isSharedCheck_233_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_buildTime_221_);
lean_inc(v_trace_220_);
lean_inc(v_log_217_);
lean_dec(v___y_215_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_233_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
uint8_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_230_; 
v___x_225_ = 3;
v___x_226_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_226_, 0, v___y_209_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*1, v___x_225_);
v___x_227_ = lean_array_get_size(v_log_217_);
v___x_228_ = lean_array_push(v_log_217_, v___x_226_);
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 0, v___x_228_);
v___x_230_ = v___x_223_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v_trace_220_);
lean_ctor_set(v_reuseFailAlloc_232_, 2, v_buildTime_221_);
lean_ctor_set_uint8(v_reuseFailAlloc_232_, sizeof(void*)*3, v_action_218_);
lean_ctor_set_uint8(v_reuseFailAlloc_232_, sizeof(void*)*3 + 1, v_wantsRebuild_219_);
v___x_230_ = v_reuseFailAlloc_232_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_231_; 
v___x_231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_227_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
return v___x_231_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorJobM___lam__0___boxed(lean_object* v_00_u03b1_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lake_instMonadErrorJobM___lam__0(v_00_u03b1_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_, v___y_240_, v___y_241_);
lean_dec_ref(v___y_240_);
lean_dec(v___y_239_);
lean_dec(v___y_238_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__0(lean_object* v_00_u03b1_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_log_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v_log_254_ = lean_ctor_get(v___y_252_, 0);
v___x_255_ = lean_array_get_size(v_log_254_);
v___x_256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
lean_ctor_set(v___x_256_, 1, v___y_252_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__0___boxed(lean_object* v_00_u03b1_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lake_instAlternativeJobM___lam__0(v_00_u03b1_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec(v___y_261_);
lean_dec(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__1(lean_object* v_00_u03b1_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v___x_276_; 
lean_inc_ref(v___y_273_);
lean_inc(v___y_272_);
lean_inc(v___y_271_);
lean_inc(v___y_270_);
lean_inc_ref(v___y_269_);
v___x_276_ = lean_apply_7(v___y_267_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, lean_box(0));
if (lean_obj_tag(v___x_276_) == 0)
{
lean_dec_ref(v___y_269_);
lean_dec_ref(v___y_268_);
return v___x_276_;
}
else
{
lean_object* v_a_277_; lean_object* v_a_278_; lean_object* v_log_279_; uint8_t v_action_280_; uint8_t v_wantsRebuild_281_; lean_object* v_trace_282_; lean_object* v_buildTime_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_293_; 
v_a_277_ = lean_ctor_get(v___x_276_, 1);
lean_inc(v_a_277_);
v_a_278_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_278_);
lean_dec_ref_known(v___x_276_, 2);
v_log_279_ = lean_ctor_get(v_a_277_, 0);
v_action_280_ = lean_ctor_get_uint8(v_a_277_, sizeof(void*)*3);
v_wantsRebuild_281_ = lean_ctor_get_uint8(v_a_277_, sizeof(void*)*3 + 1);
v_trace_282_ = lean_ctor_get(v_a_277_, 1);
v_buildTime_283_ = lean_ctor_get(v_a_277_, 2);
v_isSharedCheck_293_ = !lean_is_exclusive(v_a_277_);
if (v_isSharedCheck_293_ == 0)
{
v___x_285_ = v_a_277_;
v_isShared_286_ = v_isSharedCheck_293_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_buildTime_283_);
lean_inc(v_trace_282_);
lean_inc(v_log_279_);
lean_dec(v_a_277_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_293_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_287_ = l_Array_shrink___redArg(v_log_279_, v_a_278_);
lean_dec(v_a_278_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v___x_287_);
v___x_289_ = v___x_285_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_trace_282_);
lean_ctor_set(v_reuseFailAlloc_292_, 2, v_buildTime_283_);
lean_ctor_set_uint8(v_reuseFailAlloc_292_, sizeof(void*)*3, v_action_280_);
lean_ctor_set_uint8(v_reuseFailAlloc_292_, sizeof(void*)*3 + 1, v_wantsRebuild_281_);
v___x_289_ = v_reuseFailAlloc_292_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_box(0);
lean_inc_ref(v___y_273_);
lean_inc(v___y_272_);
lean_inc(v___y_271_);
lean_inc(v___y_270_);
v___x_291_ = lean_apply_8(v___y_268_, v___x_290_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___x_289_, lean_box(0));
return v___x_291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeJobM___lam__1___boxed(lean_object* v_00_u03b1_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lake_instAlternativeJobM___lam__1(v_00_u03b1_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec(v___y_299_);
lean_dec(v___y_298_);
return v_res_304_;
}
}
static lean_object* _init_l_Lake_instAlternativeJobM(void){
_start:
{
lean_object* v___x_307_; lean_object* v_toApplicative_308_; lean_object* v_toBind_309_; lean_object* v_toFunctor_310_; lean_object* v_toPure_311_; lean_object* v___f_312_; lean_object* v___f_313_; lean_object* v___f_314_; lean_object* v___f_315_; lean_object* v___x_316_; lean_object* v___f_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v_toApplicative_325_; lean_object* v___f_326_; lean_object* v___f_327_; lean_object* v___x_328_; 
v___x_307_ = l_instMonadBaseIO;
v_toApplicative_308_ = lean_ctor_get(v___x_307_, 0);
v_toBind_309_ = lean_ctor_get(v___x_307_, 1);
v_toFunctor_310_ = lean_ctor_get(v_toApplicative_308_, 0);
v_toPure_311_ = lean_ctor_get(v_toApplicative_308_, 1);
lean_inc_n(v_toBind_309_, 3);
lean_inc_n(v_toPure_311_, 5);
v___f_312_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_312_, 0, v_toPure_311_);
lean_closure_set(v___f_312_, 1, v_toBind_309_);
v___f_313_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_313_, 0, v_toPure_311_);
lean_closure_set(v___f_313_, 1, v_toBind_309_);
lean_inc_ref(v___f_312_);
v___f_314_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_314_, 0, v_toPure_311_);
lean_closure_set(v___f_314_, 1, v___f_312_);
lean_inc_ref_n(v_toFunctor_310_, 2);
v___f_315_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_315_, 0, v_toFunctor_310_);
lean_closure_set(v___f_315_, 1, v_toPure_311_);
lean_closure_set(v___f_315_, 2, v_toBind_309_);
v___x_316_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_310_);
v___f_317_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_317_, 0, v_toPure_311_);
v___x_318_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_318_, 0, v___x_316_);
lean_ctor_set(v___x_318_, 1, v___f_317_);
lean_ctor_set(v___x_318_, 2, v___f_315_);
lean_ctor_set(v___x_318_, 3, v___f_314_);
lean_ctor_set(v___x_318_, 4, v___f_313_);
v___x_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v___f_312_);
v___x_320_ = l_ReaderT_instMonad___redArg(v___x_319_);
v___x_321_ = l_StateRefT_x27_instMonad___redArg(v___x_320_);
v___x_322_ = l_ReaderT_instMonad___redArg(v___x_321_);
v___x_323_ = l_ReaderT_instMonad___redArg(v___x_322_);
v___x_324_ = l_Lake_EquipT_instMonad___redArg(v___x_323_);
v_toApplicative_325_ = lean_ctor_get(v___x_324_, 0);
lean_inc_ref(v_toApplicative_325_);
lean_dec_ref(v___x_324_);
v___f_326_ = ((lean_object*)(l_Lake_instAlternativeJobM___closed__0));
v___f_327_ = ((lean_object*)(l_Lake_instAlternativeJobM___closed__1));
v___x_328_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_328_, 0, v_toApplicative_325_);
lean_ctor_set(v___x_328_, 1, v___f_326_);
lean_ctor_set(v___x_328_, 2, v___f_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLogIOJobM___lam__0(lean_object* v_00_u03b1_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
lean_object* v_log_338_; uint8_t v_action_339_; uint8_t v_wantsRebuild_340_; lean_object* v_trace_341_; lean_object* v_buildTime_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_371_; 
v_log_338_ = lean_ctor_get(v___y_336_, 0);
v_action_339_ = lean_ctor_get_uint8(v___y_336_, sizeof(void*)*3);
v_wantsRebuild_340_ = lean_ctor_get_uint8(v___y_336_, sizeof(void*)*3 + 1);
v_trace_341_ = lean_ctor_get(v___y_336_, 1);
v_buildTime_342_ = lean_ctor_get(v___y_336_, 2);
v_isSharedCheck_371_ = !lean_is_exclusive(v___y_336_);
if (v_isSharedCheck_371_ == 0)
{
v___x_344_ = v___y_336_;
v_isShared_345_ = v_isSharedCheck_371_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_buildTime_342_);
lean_inc(v_trace_341_);
lean_inc(v_log_338_);
lean_dec(v___y_336_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_371_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_346_; 
v___x_346_ = lean_apply_2(v___y_330_, v_log_338_, lean_box(0));
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_358_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
v_a_348_ = lean_ctor_get(v___x_346_, 1);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_358_ == 0)
{
v___x_350_ = v___x_346_;
v_isShared_351_ = v_isSharedCheck_358_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_inc(v_a_347_);
lean_dec(v___x_346_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_358_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 0, v_a_348_);
v___x_353_ = v___x_344_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_a_348_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_trace_341_);
lean_ctor_set(v_reuseFailAlloc_357_, 2, v_buildTime_342_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3, v_action_339_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3 + 1, v_wantsRebuild_340_);
v___x_353_ = v_reuseFailAlloc_357_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_object* v___x_355_; 
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 1, v___x_353_);
v___x_355_ = v___x_350_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_a_347_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
}
else
{
lean_object* v_a_359_; lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_370_; 
v_a_359_ = lean_ctor_get(v___x_346_, 0);
v_a_360_ = lean_ctor_get(v___x_346_, 1);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_370_ == 0)
{
v___x_362_ = v___x_346_;
v_isShared_363_ = v_isSharedCheck_370_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_inc(v_a_359_);
lean_dec(v___x_346_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_370_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 0, v_a_360_);
v___x_365_ = v___x_344_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_a_360_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v_trace_341_);
lean_ctor_set(v_reuseFailAlloc_369_, 2, v_buildTime_342_);
lean_ctor_set_uint8(v_reuseFailAlloc_369_, sizeof(void*)*3, v_action_339_);
lean_ctor_set_uint8(v_reuseFailAlloc_369_, sizeof(void*)*3 + 1, v_wantsRebuild_340_);
v___x_365_ = v_reuseFailAlloc_369_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
lean_object* v___x_367_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 1, v___x_365_);
v___x_367_ = v___x_362_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_359_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v___x_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLogIOJobM___lam__0___boxed(lean_object* v_00_u03b1_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lake_instMonadLiftLogIOJobM___lam__0(v_00_u03b1_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lake_updateAction___redArg(uint8_t v_action_384_, lean_object* v___y_385_){
_start:
{
lean_object* v_log_387_; uint8_t v_action_388_; uint8_t v_wantsRebuild_389_; lean_object* v_trace_390_; lean_object* v_buildTime_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_401_; 
v_log_387_ = lean_ctor_get(v___y_385_, 0);
v_action_388_ = lean_ctor_get_uint8(v___y_385_, sizeof(void*)*3);
v_wantsRebuild_389_ = lean_ctor_get_uint8(v___y_385_, sizeof(void*)*3 + 1);
v_trace_390_ = lean_ctor_get(v___y_385_, 1);
v_buildTime_391_ = lean_ctor_get(v___y_385_, 2);
v_isSharedCheck_401_ = !lean_is_exclusive(v___y_385_);
if (v_isSharedCheck_401_ == 0)
{
v___x_393_ = v___y_385_;
v_isShared_394_ = v_isSharedCheck_401_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_buildTime_391_);
lean_inc(v_trace_390_);
lean_inc(v_log_387_);
lean_dec(v___y_385_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_401_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_395_; uint8_t v___x_396_; lean_object* v___x_398_; 
v___x_395_ = lean_box(0);
v___x_396_ = l_Lake_JobAction_merge(v_action_388_, v_action_384_);
if (v_isShared_394_ == 0)
{
v___x_398_ = v___x_393_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_log_387_);
lean_ctor_set(v_reuseFailAlloc_400_, 1, v_trace_390_);
lean_ctor_set(v_reuseFailAlloc_400_, 2, v_buildTime_391_);
lean_ctor_set_uint8(v_reuseFailAlloc_400_, sizeof(void*)*3 + 1, v_wantsRebuild_389_);
v___x_398_ = v_reuseFailAlloc_400_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_399_; 
lean_ctor_set_uint8(v___x_398_, sizeof(void*)*3, v___x_396_);
v___x_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_395_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
return v___x_399_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_updateAction___redArg___boxed(lean_object* v_action_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
uint8_t v_action_boxed_405_; lean_object* v_res_406_; 
v_action_boxed_405_ = lean_unbox(v_action_402_);
v_res_406_ = l_Lake_updateAction___redArg(v_action_boxed_405_, v___y_403_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Lake_updateAction(uint8_t v_action_407_, lean_object* v_a_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_log_415_; uint8_t v_action_416_; uint8_t v_wantsRebuild_417_; lean_object* v_trace_418_; lean_object* v_buildTime_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_429_; 
v_log_415_ = lean_ctor_get(v___y_413_, 0);
v_action_416_ = lean_ctor_get_uint8(v___y_413_, sizeof(void*)*3);
v_wantsRebuild_417_ = lean_ctor_get_uint8(v___y_413_, sizeof(void*)*3 + 1);
v_trace_418_ = lean_ctor_get(v___y_413_, 1);
v_buildTime_419_ = lean_ctor_get(v___y_413_, 2);
v_isSharedCheck_429_ = !lean_is_exclusive(v___y_413_);
if (v_isSharedCheck_429_ == 0)
{
v___x_421_ = v___y_413_;
v_isShared_422_ = v_isSharedCheck_429_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_buildTime_419_);
lean_inc(v_trace_418_);
lean_inc(v_log_415_);
lean_dec(v___y_413_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_429_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_423_; uint8_t v___x_424_; lean_object* v___x_426_; 
v___x_423_ = lean_box(0);
v___x_424_ = l_Lake_JobAction_merge(v_action_416_, v_action_407_);
if (v_isShared_422_ == 0)
{
v___x_426_ = v___x_421_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_log_415_);
lean_ctor_set(v_reuseFailAlloc_428_, 1, v_trace_418_);
lean_ctor_set(v_reuseFailAlloc_428_, 2, v_buildTime_419_);
lean_ctor_set_uint8(v_reuseFailAlloc_428_, sizeof(void*)*3 + 1, v_wantsRebuild_417_);
v___x_426_ = v_reuseFailAlloc_428_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; 
lean_ctor_set_uint8(v___x_426_, sizeof(void*)*3, v___x_424_);
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_423_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
return v___x_427_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_updateAction___boxed(lean_object* v_action_430_, lean_object* v_a_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
uint8_t v_action_boxed_438_; lean_object* v_res_439_; 
v_action_boxed_438_ = lean_unbox(v_action_430_);
v_res_439_ = l_Lake_updateAction(v_action_boxed_438_, v_a_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec(v___y_433_);
lean_dec(v___y_432_);
lean_dec_ref(v_a_431_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrace___redArg(lean_object* v___y_440_){
_start:
{
lean_object* v_trace_442_; lean_object* v___x_443_; 
v_trace_442_ = lean_ctor_get(v___y_440_, 1);
lean_inc_ref(v_trace_442_);
v___x_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_443_, 0, v_trace_442_);
lean_ctor_set(v___x_443_, 1, v___y_440_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrace___redArg___boxed(lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lake_getTrace___redArg(v___y_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrace(lean_object* v_a_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v_trace_454_; lean_object* v___x_455_; 
v_trace_454_ = lean_ctor_get(v___y_452_, 1);
lean_inc_ref(v_trace_454_);
v___x_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_455_, 0, v_trace_454_);
lean_ctor_set(v___x_455_, 1, v___y_452_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrace___boxed(lean_object* v_a_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lake_getTrace(v_a_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec(v___y_458_);
lean_dec(v___y_457_);
lean_dec_ref(v_a_456_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lake_setTrace___redArg(lean_object* v_trace_464_, lean_object* v___y_465_){
_start:
{
lean_object* v_log_467_; uint8_t v_action_468_; uint8_t v_wantsRebuild_469_; lean_object* v_buildTime_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_479_; 
v_log_467_ = lean_ctor_get(v___y_465_, 0);
v_action_468_ = lean_ctor_get_uint8(v___y_465_, sizeof(void*)*3);
v_wantsRebuild_469_ = lean_ctor_get_uint8(v___y_465_, sizeof(void*)*3 + 1);
v_buildTime_470_ = lean_ctor_get(v___y_465_, 2);
v_isSharedCheck_479_ = !lean_is_exclusive(v___y_465_);
if (v_isSharedCheck_479_ == 0)
{
lean_object* v_unused_480_; 
v_unused_480_ = lean_ctor_get(v___y_465_, 1);
lean_dec(v_unused_480_);
v___x_472_ = v___y_465_;
v_isShared_473_ = v_isSharedCheck_479_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_buildTime_470_);
lean_inc(v_log_467_);
lean_dec(v___y_465_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_479_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_474_ = lean_box(0);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 1, v_trace_464_);
v___x_476_ = v___x_472_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_log_467_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_trace_464_);
lean_ctor_set(v_reuseFailAlloc_478_, 2, v_buildTime_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_478_, sizeof(void*)*3, v_action_468_);
lean_ctor_set_uint8(v_reuseFailAlloc_478_, sizeof(void*)*3 + 1, v_wantsRebuild_469_);
v___x_476_ = v_reuseFailAlloc_478_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; 
v___x_477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_474_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
return v___x_477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_setTrace___redArg___boxed(lean_object* v_trace_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lake_setTrace___redArg(v_trace_481_, v___y_482_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l_Lake_setTrace(lean_object* v_trace_485_, lean_object* v_a_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
lean_object* v_log_493_; uint8_t v_action_494_; uint8_t v_wantsRebuild_495_; lean_object* v_buildTime_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_505_; 
v_log_493_ = lean_ctor_get(v___y_491_, 0);
v_action_494_ = lean_ctor_get_uint8(v___y_491_, sizeof(void*)*3);
v_wantsRebuild_495_ = lean_ctor_get_uint8(v___y_491_, sizeof(void*)*3 + 1);
v_buildTime_496_ = lean_ctor_get(v___y_491_, 2);
v_isSharedCheck_505_ = !lean_is_exclusive(v___y_491_);
if (v_isSharedCheck_505_ == 0)
{
lean_object* v_unused_506_; 
v_unused_506_ = lean_ctor_get(v___y_491_, 1);
lean_dec(v_unused_506_);
v___x_498_ = v___y_491_;
v_isShared_499_ = v_isSharedCheck_505_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_buildTime_496_);
lean_inc(v_log_493_);
lean_dec(v___y_491_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_505_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_500_; lean_object* v___x_502_; 
v___x_500_ = lean_box(0);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 1, v_trace_485_);
v___x_502_ = v___x_498_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_log_493_);
lean_ctor_set(v_reuseFailAlloc_504_, 1, v_trace_485_);
lean_ctor_set(v_reuseFailAlloc_504_, 2, v_buildTime_496_);
lean_ctor_set_uint8(v_reuseFailAlloc_504_, sizeof(void*)*3, v_action_494_);
lean_ctor_set_uint8(v_reuseFailAlloc_504_, sizeof(void*)*3 + 1, v_wantsRebuild_495_);
v___x_502_ = v_reuseFailAlloc_504_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
lean_object* v___x_503_; 
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_500_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
return v___x_503_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_setTrace___boxed(lean_object* v_trace_507_, lean_object* v_a_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lake_setTrace(v_trace_507_, v_a_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec(v___y_511_);
lean_dec(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v_a_508_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lake_newTrace___redArg(lean_object* v_caption_516_, lean_object* v___y_517_){
_start:
{
lean_object* v_log_519_; uint8_t v_action_520_; uint8_t v_wantsRebuild_521_; lean_object* v_buildTime_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_532_; 
v_log_519_ = lean_ctor_get(v___y_517_, 0);
v_action_520_ = lean_ctor_get_uint8(v___y_517_, sizeof(void*)*3);
v_wantsRebuild_521_ = lean_ctor_get_uint8(v___y_517_, sizeof(void*)*3 + 1);
v_buildTime_522_ = lean_ctor_get(v___y_517_, 2);
v_isSharedCheck_532_ = !lean_is_exclusive(v___y_517_);
if (v_isSharedCheck_532_ == 0)
{
lean_object* v_unused_533_; 
v_unused_533_ = lean_ctor_get(v___y_517_, 1);
lean_dec(v_unused_533_);
v___x_524_ = v___y_517_;
v_isShared_525_ = v_isSharedCheck_532_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_buildTime_522_);
lean_inc(v_log_519_);
lean_dec(v___y_517_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_532_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_526_ = l_Lake_BuildTrace_nil(v_caption_516_);
v___x_527_ = lean_box(0);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 1, v___x_526_);
v___x_529_ = v___x_524_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_log_519_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_531_, 2, v_buildTime_522_);
lean_ctor_set_uint8(v_reuseFailAlloc_531_, sizeof(void*)*3, v_action_520_);
lean_ctor_set_uint8(v_reuseFailAlloc_531_, sizeof(void*)*3 + 1, v_wantsRebuild_521_);
v___x_529_ = v_reuseFailAlloc_531_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
lean_object* v___x_530_; 
v___x_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_527_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
return v___x_530_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_newTrace___redArg___boxed(lean_object* v_caption_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lake_newTrace___redArg(v_caption_534_, v___y_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Lake_newTrace(lean_object* v_caption_538_, lean_object* v_a_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
lean_object* v_log_546_; uint8_t v_action_547_; uint8_t v_wantsRebuild_548_; lean_object* v_buildTime_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_559_; 
v_log_546_ = lean_ctor_get(v___y_544_, 0);
v_action_547_ = lean_ctor_get_uint8(v___y_544_, sizeof(void*)*3);
v_wantsRebuild_548_ = lean_ctor_get_uint8(v___y_544_, sizeof(void*)*3 + 1);
v_buildTime_549_ = lean_ctor_get(v___y_544_, 2);
v_isSharedCheck_559_ = !lean_is_exclusive(v___y_544_);
if (v_isSharedCheck_559_ == 0)
{
lean_object* v_unused_560_; 
v_unused_560_ = lean_ctor_get(v___y_544_, 1);
lean_dec(v_unused_560_);
v___x_551_ = v___y_544_;
v_isShared_552_ = v_isSharedCheck_559_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_buildTime_549_);
lean_inc(v_log_546_);
lean_dec(v___y_544_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_559_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_553_ = l_Lake_BuildTrace_nil(v_caption_538_);
v___x_554_ = lean_box(0);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 1, v___x_553_);
v___x_556_ = v___x_551_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_log_546_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v___x_553_);
lean_ctor_set(v_reuseFailAlloc_558_, 2, v_buildTime_549_);
lean_ctor_set_uint8(v_reuseFailAlloc_558_, sizeof(void*)*3, v_action_547_);
lean_ctor_set_uint8(v_reuseFailAlloc_558_, sizeof(void*)*3 + 1, v_wantsRebuild_548_);
v___x_556_ = v_reuseFailAlloc_558_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_557_; 
v___x_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_554_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
return v___x_557_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_newTrace___boxed(lean_object* v_caption_561_, lean_object* v_a_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lake_newTrace(v_caption_561_, v_a_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v_a_562_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lake_modifyTrace___redArg(lean_object* v_f_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_log_573_; uint8_t v_action_574_; uint8_t v_wantsRebuild_575_; lean_object* v_trace_576_; lean_object* v_buildTime_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_587_; 
v_log_573_ = lean_ctor_get(v___y_571_, 0);
v_action_574_ = lean_ctor_get_uint8(v___y_571_, sizeof(void*)*3);
v_wantsRebuild_575_ = lean_ctor_get_uint8(v___y_571_, sizeof(void*)*3 + 1);
v_trace_576_ = lean_ctor_get(v___y_571_, 1);
v_buildTime_577_ = lean_ctor_get(v___y_571_, 2);
v_isSharedCheck_587_ = !lean_is_exclusive(v___y_571_);
if (v_isSharedCheck_587_ == 0)
{
v___x_579_ = v___y_571_;
v_isShared_580_ = v_isSharedCheck_587_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_buildTime_577_);
lean_inc(v_trace_576_);
lean_inc(v_log_573_);
lean_dec(v___y_571_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_587_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_581_ = lean_box(0);
v___x_582_ = lean_apply_1(v_f_570_, v_trace_576_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 1, v___x_582_);
v___x_584_ = v___x_579_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_log_573_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_586_, 2, v_buildTime_577_);
lean_ctor_set_uint8(v_reuseFailAlloc_586_, sizeof(void*)*3, v_action_574_);
lean_ctor_set_uint8(v_reuseFailAlloc_586_, sizeof(void*)*3 + 1, v_wantsRebuild_575_);
v___x_584_ = v_reuseFailAlloc_586_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
lean_object* v___x_585_; 
v___x_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_581_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
return v___x_585_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_modifyTrace___redArg___boxed(lean_object* v_f_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lake_modifyTrace___redArg(v_f_588_, v___y_589_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lake_modifyTrace(lean_object* v_f_592_, lean_object* v_a_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
lean_object* v_log_600_; uint8_t v_action_601_; uint8_t v_wantsRebuild_602_; lean_object* v_trace_603_; lean_object* v_buildTime_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_614_; 
v_log_600_ = lean_ctor_get(v___y_598_, 0);
v_action_601_ = lean_ctor_get_uint8(v___y_598_, sizeof(void*)*3);
v_wantsRebuild_602_ = lean_ctor_get_uint8(v___y_598_, sizeof(void*)*3 + 1);
v_trace_603_ = lean_ctor_get(v___y_598_, 1);
v_buildTime_604_ = lean_ctor_get(v___y_598_, 2);
v_isSharedCheck_614_ = !lean_is_exclusive(v___y_598_);
if (v_isSharedCheck_614_ == 0)
{
v___x_606_ = v___y_598_;
v_isShared_607_ = v_isSharedCheck_614_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_buildTime_604_);
lean_inc(v_trace_603_);
lean_inc(v_log_600_);
lean_dec(v___y_598_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_614_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_611_; 
v___x_608_ = lean_box(0);
v___x_609_ = lean_apply_1(v_f_592_, v_trace_603_);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 1, v___x_609_);
v___x_611_ = v___x_606_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_log_600_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v___x_609_);
lean_ctor_set(v_reuseFailAlloc_613_, 2, v_buildTime_604_);
lean_ctor_set_uint8(v_reuseFailAlloc_613_, sizeof(void*)*3, v_action_601_);
lean_ctor_set_uint8(v_reuseFailAlloc_613_, sizeof(void*)*3 + 1, v_wantsRebuild_602_);
v___x_611_ = v_reuseFailAlloc_613_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
lean_object* v___x_612_; 
v___x_612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_612_, 0, v___x_608_);
lean_ctor_set(v___x_612_, 1, v___x_611_);
return v___x_612_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_modifyTrace___boxed(lean_object* v_f_615_, lean_object* v_a_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lake_modifyTrace(v_f_615_, v_a_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v_a_616_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lake_setTraceCaption___redArg(lean_object* v_caption_624_, lean_object* v___y_625_){
_start:
{
lean_object* v_trace_627_; lean_object* v_log_628_; uint8_t v_action_629_; uint8_t v_wantsRebuild_630_; lean_object* v_buildTime_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_651_; 
v_trace_627_ = lean_ctor_get(v___y_625_, 1);
v_log_628_ = lean_ctor_get(v___y_625_, 0);
v_action_629_ = lean_ctor_get_uint8(v___y_625_, sizeof(void*)*3);
v_wantsRebuild_630_ = lean_ctor_get_uint8(v___y_625_, sizeof(void*)*3 + 1);
v_buildTime_631_ = lean_ctor_get(v___y_625_, 2);
v_isSharedCheck_651_ = !lean_is_exclusive(v___y_625_);
if (v_isSharedCheck_651_ == 0)
{
v___x_633_ = v___y_625_;
v_isShared_634_ = v_isSharedCheck_651_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_buildTime_631_);
lean_inc(v_trace_627_);
lean_inc(v_log_628_);
lean_dec(v___y_625_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_651_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v_inputs_635_; uint64_t v_hash_636_; lean_object* v_mtime_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_649_; 
v_inputs_635_ = lean_ctor_get(v_trace_627_, 1);
v_hash_636_ = lean_ctor_get_uint64(v_trace_627_, sizeof(void*)*3);
v_mtime_637_ = lean_ctor_get(v_trace_627_, 2);
v_isSharedCheck_649_ = !lean_is_exclusive(v_trace_627_);
if (v_isSharedCheck_649_ == 0)
{
lean_object* v_unused_650_; 
v_unused_650_ = lean_ctor_get(v_trace_627_, 0);
lean_dec(v_unused_650_);
v___x_639_ = v_trace_627_;
v_isShared_640_ = v_isSharedCheck_649_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_mtime_637_);
lean_inc(v_inputs_635_);
lean_dec(v_trace_627_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_649_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_641_; lean_object* v___x_643_; 
v___x_641_ = lean_box(0);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v_caption_624_);
v___x_643_ = v___x_639_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_caption_624_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v_inputs_635_);
lean_ctor_set(v_reuseFailAlloc_648_, 2, v_mtime_637_);
lean_ctor_set_uint64(v_reuseFailAlloc_648_, sizeof(void*)*3, v_hash_636_);
v___x_643_ = v_reuseFailAlloc_648_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_645_; 
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 1, v___x_643_);
v___x_645_ = v___x_633_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_log_628_);
lean_ctor_set(v_reuseFailAlloc_647_, 1, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_647_, 2, v_buildTime_631_);
lean_ctor_set_uint8(v_reuseFailAlloc_647_, sizeof(void*)*3, v_action_629_);
lean_ctor_set_uint8(v_reuseFailAlloc_647_, sizeof(void*)*3 + 1, v_wantsRebuild_630_);
v___x_645_ = v_reuseFailAlloc_647_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
lean_object* v___x_646_; 
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_641_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
return v___x_646_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_setTraceCaption___redArg___boxed(lean_object* v_caption_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Lake_setTraceCaption___redArg(v_caption_652_, v___y_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lake_setTraceCaption(lean_object* v_caption_656_, lean_object* v_a_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
lean_object* v_trace_664_; lean_object* v_log_665_; uint8_t v_action_666_; uint8_t v_wantsRebuild_667_; lean_object* v_buildTime_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_688_; 
v_trace_664_ = lean_ctor_get(v___y_662_, 1);
v_log_665_ = lean_ctor_get(v___y_662_, 0);
v_action_666_ = lean_ctor_get_uint8(v___y_662_, sizeof(void*)*3);
v_wantsRebuild_667_ = lean_ctor_get_uint8(v___y_662_, sizeof(void*)*3 + 1);
v_buildTime_668_ = lean_ctor_get(v___y_662_, 2);
v_isSharedCheck_688_ = !lean_is_exclusive(v___y_662_);
if (v_isSharedCheck_688_ == 0)
{
v___x_670_ = v___y_662_;
v_isShared_671_ = v_isSharedCheck_688_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_buildTime_668_);
lean_inc(v_trace_664_);
lean_inc(v_log_665_);
lean_dec(v___y_662_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_688_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v_inputs_672_; uint64_t v_hash_673_; lean_object* v_mtime_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_686_; 
v_inputs_672_ = lean_ctor_get(v_trace_664_, 1);
v_hash_673_ = lean_ctor_get_uint64(v_trace_664_, sizeof(void*)*3);
v_mtime_674_ = lean_ctor_get(v_trace_664_, 2);
v_isSharedCheck_686_ = !lean_is_exclusive(v_trace_664_);
if (v_isSharedCheck_686_ == 0)
{
lean_object* v_unused_687_; 
v_unused_687_ = lean_ctor_get(v_trace_664_, 0);
lean_dec(v_unused_687_);
v___x_676_ = v_trace_664_;
v_isShared_677_ = v_isSharedCheck_686_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_mtime_674_);
lean_inc(v_inputs_672_);
lean_dec(v_trace_664_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_686_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; lean_object* v___x_680_; 
v___x_678_ = lean_box(0);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v_caption_656_);
v___x_680_ = v___x_676_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_caption_656_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_inputs_672_);
lean_ctor_set(v_reuseFailAlloc_685_, 2, v_mtime_674_);
lean_ctor_set_uint64(v_reuseFailAlloc_685_, sizeof(void*)*3, v_hash_673_);
v___x_680_ = v_reuseFailAlloc_685_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
lean_object* v___x_682_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_680_);
v___x_682_ = v___x_670_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_log_665_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_684_, 2, v_buildTime_668_);
lean_ctor_set_uint8(v_reuseFailAlloc_684_, sizeof(void*)*3, v_action_666_);
lean_ctor_set_uint8(v_reuseFailAlloc_684_, sizeof(void*)*3 + 1, v_wantsRebuild_667_);
v___x_682_ = v_reuseFailAlloc_684_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
lean_object* v___x_683_; 
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v___x_678_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
return v___x_683_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_setTraceCaption___boxed(lean_object* v_caption_689_, lean_object* v_a_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lake_setTraceCaption(v_caption_689_, v_a_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec(v___y_693_);
lean_dec(v___y_692_);
lean_dec(v___y_691_);
lean_dec_ref(v_a_690_);
return v_res_697_;
}
}
static lean_object* _init_l_Lake_takeTrace___redArg___closed__1(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = ((lean_object*)(l_Lake_takeTrace___redArg___closed__0));
v___x_700_ = l_Lake_BuildTrace_nil(v___x_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeTrace___redArg(lean_object* v___y_701_){
_start:
{
lean_object* v_log_703_; uint8_t v_action_704_; uint8_t v_wantsRebuild_705_; lean_object* v_trace_706_; lean_object* v_buildTime_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_716_; 
v_log_703_ = lean_ctor_get(v___y_701_, 0);
v_action_704_ = lean_ctor_get_uint8(v___y_701_, sizeof(void*)*3);
v_wantsRebuild_705_ = lean_ctor_get_uint8(v___y_701_, sizeof(void*)*3 + 1);
v_trace_706_ = lean_ctor_get(v___y_701_, 1);
v_buildTime_707_ = lean_ctor_get(v___y_701_, 2);
v_isSharedCheck_716_ = !lean_is_exclusive(v___y_701_);
if (v_isSharedCheck_716_ == 0)
{
v___x_709_ = v___y_701_;
v_isShared_710_ = v_isSharedCheck_716_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_buildTime_707_);
lean_inc(v_trace_706_);
lean_inc(v_log_703_);
lean_dec(v___y_701_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_716_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_711_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 1, v___x_711_);
v___x_713_ = v___x_709_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_log_703_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v___x_711_);
lean_ctor_set(v_reuseFailAlloc_715_, 2, v_buildTime_707_);
lean_ctor_set_uint8(v_reuseFailAlloc_715_, sizeof(void*)*3, v_action_704_);
lean_ctor_set_uint8(v_reuseFailAlloc_715_, sizeof(void*)*3 + 1, v_wantsRebuild_705_);
v___x_713_ = v_reuseFailAlloc_715_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
lean_object* v___x_714_; 
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v_trace_706_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
return v___x_714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_takeTrace___redArg___boxed(lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lake_takeTrace___redArg(v___y_717_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeTrace(lean_object* v_a_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_log_727_; uint8_t v_action_728_; uint8_t v_wantsRebuild_729_; lean_object* v_trace_730_; lean_object* v_buildTime_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_740_; 
v_log_727_ = lean_ctor_get(v___y_725_, 0);
v_action_728_ = lean_ctor_get_uint8(v___y_725_, sizeof(void*)*3);
v_wantsRebuild_729_ = lean_ctor_get_uint8(v___y_725_, sizeof(void*)*3 + 1);
v_trace_730_ = lean_ctor_get(v___y_725_, 1);
v_buildTime_731_ = lean_ctor_get(v___y_725_, 2);
v_isSharedCheck_740_ = !lean_is_exclusive(v___y_725_);
if (v_isSharedCheck_740_ == 0)
{
v___x_733_ = v___y_725_;
v_isShared_734_ = v_isSharedCheck_740_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_buildTime_731_);
lean_inc(v_trace_730_);
lean_inc(v_log_727_);
lean_dec(v___y_725_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_740_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_735_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 1, v___x_735_);
v___x_737_ = v___x_733_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_log_727_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_739_, 2, v_buildTime_731_);
lean_ctor_set_uint8(v_reuseFailAlloc_739_, sizeof(void*)*3, v_action_728_);
lean_ctor_set_uint8(v_reuseFailAlloc_739_, sizeof(void*)*3 + 1, v_wantsRebuild_729_);
v___x_737_ = v_reuseFailAlloc_739_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v___x_738_; 
v___x_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_738_, 0, v_trace_730_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
return v___x_738_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_takeTrace___boxed(lean_object* v_a_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lake_takeTrace(v_a_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_744_);
lean_dec(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v_a_741_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lake_swapTrace___redArg(lean_object* v_trace_749_, lean_object* v___y_750_){
_start:
{
lean_object* v_log_752_; uint8_t v_action_753_; uint8_t v_wantsRebuild_754_; lean_object* v_trace_755_; lean_object* v_buildTime_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_764_; 
v_log_752_ = lean_ctor_get(v___y_750_, 0);
v_action_753_ = lean_ctor_get_uint8(v___y_750_, sizeof(void*)*3);
v_wantsRebuild_754_ = lean_ctor_get_uint8(v___y_750_, sizeof(void*)*3 + 1);
v_trace_755_ = lean_ctor_get(v___y_750_, 1);
v_buildTime_756_ = lean_ctor_get(v___y_750_, 2);
v_isSharedCheck_764_ = !lean_is_exclusive(v___y_750_);
if (v_isSharedCheck_764_ == 0)
{
v___x_758_ = v___y_750_;
v_isShared_759_ = v_isSharedCheck_764_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_buildTime_756_);
lean_inc(v_trace_755_);
lean_inc(v_log_752_);
lean_dec(v___y_750_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_764_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 1, v_trace_749_);
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_log_752_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v_trace_749_);
lean_ctor_set(v_reuseFailAlloc_763_, 2, v_buildTime_756_);
lean_ctor_set_uint8(v_reuseFailAlloc_763_, sizeof(void*)*3, v_action_753_);
lean_ctor_set_uint8(v_reuseFailAlloc_763_, sizeof(void*)*3 + 1, v_wantsRebuild_754_);
v___x_761_ = v_reuseFailAlloc_763_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_762_; 
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v_trace_755_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
return v___x_762_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_swapTrace___redArg___boxed(lean_object* v_trace_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lake_swapTrace___redArg(v_trace_765_, v___y_766_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lake_swapTrace(lean_object* v_trace_769_, lean_object* v_a_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
lean_object* v_log_777_; uint8_t v_action_778_; uint8_t v_wantsRebuild_779_; lean_object* v_trace_780_; lean_object* v_buildTime_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_789_; 
v_log_777_ = lean_ctor_get(v___y_775_, 0);
v_action_778_ = lean_ctor_get_uint8(v___y_775_, sizeof(void*)*3);
v_wantsRebuild_779_ = lean_ctor_get_uint8(v___y_775_, sizeof(void*)*3 + 1);
v_trace_780_ = lean_ctor_get(v___y_775_, 1);
v_buildTime_781_ = lean_ctor_get(v___y_775_, 2);
v_isSharedCheck_789_ = !lean_is_exclusive(v___y_775_);
if (v_isSharedCheck_789_ == 0)
{
v___x_783_ = v___y_775_;
v_isShared_784_ = v_isSharedCheck_789_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_buildTime_781_);
lean_inc(v_trace_780_);
lean_inc(v_log_777_);
lean_dec(v___y_775_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_789_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 1, v_trace_769_);
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_log_777_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_trace_769_);
lean_ctor_set(v_reuseFailAlloc_788_, 2, v_buildTime_781_);
lean_ctor_set_uint8(v_reuseFailAlloc_788_, sizeof(void*)*3, v_action_778_);
lean_ctor_set_uint8(v_reuseFailAlloc_788_, sizeof(void*)*3 + 1, v_wantsRebuild_779_);
v___x_786_ = v_reuseFailAlloc_788_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_787_; 
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v_trace_780_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
return v___x_787_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_swapTrace___boxed(lean_object* v_trace_790_, lean_object* v_a_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l_Lake_swapTrace(v_trace_790_, v_a_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_);
lean_dec_ref(v___y_795_);
lean_dec(v___y_794_);
lean_dec(v___y_793_);
lean_dec(v___y_792_);
lean_dec_ref(v_a_791_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l_Lake_addTrace___redArg(lean_object* v_trace_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_log_802_; uint8_t v_action_803_; uint8_t v_wantsRebuild_804_; lean_object* v_trace_805_; lean_object* v_buildTime_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_816_; 
v_log_802_ = lean_ctor_get(v___y_800_, 0);
v_action_803_ = lean_ctor_get_uint8(v___y_800_, sizeof(void*)*3);
v_wantsRebuild_804_ = lean_ctor_get_uint8(v___y_800_, sizeof(void*)*3 + 1);
v_trace_805_ = lean_ctor_get(v___y_800_, 1);
v_buildTime_806_ = lean_ctor_get(v___y_800_, 2);
v_isSharedCheck_816_ = !lean_is_exclusive(v___y_800_);
if (v_isSharedCheck_816_ == 0)
{
v___x_808_ = v___y_800_;
v_isShared_809_ = v_isSharedCheck_816_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_buildTime_806_);
lean_inc(v_trace_805_);
lean_inc(v_log_802_);
lean_dec(v___y_800_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_816_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_810_ = lean_box(0);
v___x_811_ = l_Lake_BuildTrace_mix(v_trace_805_, v_trace_799_);
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 1, v___x_811_);
v___x_813_ = v___x_808_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_log_802_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v___x_811_);
lean_ctor_set(v_reuseFailAlloc_815_, 2, v_buildTime_806_);
lean_ctor_set_uint8(v_reuseFailAlloc_815_, sizeof(void*)*3, v_action_803_);
lean_ctor_set_uint8(v_reuseFailAlloc_815_, sizeof(void*)*3 + 1, v_wantsRebuild_804_);
v___x_813_ = v_reuseFailAlloc_815_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
lean_object* v___x_814_; 
v___x_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_810_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
return v___x_814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addTrace___redArg___boxed(lean_object* v_trace_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lake_addTrace___redArg(v_trace_817_, v___y_818_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lake_addTrace(lean_object* v_trace_821_, lean_object* v_a_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_log_829_; uint8_t v_action_830_; uint8_t v_wantsRebuild_831_; lean_object* v_trace_832_; lean_object* v_buildTime_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_843_; 
v_log_829_ = lean_ctor_get(v___y_827_, 0);
v_action_830_ = lean_ctor_get_uint8(v___y_827_, sizeof(void*)*3);
v_wantsRebuild_831_ = lean_ctor_get_uint8(v___y_827_, sizeof(void*)*3 + 1);
v_trace_832_ = lean_ctor_get(v___y_827_, 1);
v_buildTime_833_ = lean_ctor_get(v___y_827_, 2);
v_isSharedCheck_843_ = !lean_is_exclusive(v___y_827_);
if (v_isSharedCheck_843_ == 0)
{
v___x_835_ = v___y_827_;
v_isShared_836_ = v_isSharedCheck_843_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_buildTime_833_);
lean_inc(v_trace_832_);
lean_inc(v_log_829_);
lean_dec(v___y_827_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_843_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_840_; 
v___x_837_ = lean_box(0);
v___x_838_ = l_Lake_BuildTrace_mix(v_trace_832_, v_trace_821_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 1, v___x_838_);
v___x_840_ = v___x_835_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_log_829_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v___x_838_);
lean_ctor_set(v_reuseFailAlloc_842_, 2, v_buildTime_833_);
lean_ctor_set_uint8(v_reuseFailAlloc_842_, sizeof(void*)*3, v_action_830_);
lean_ctor_set_uint8(v_reuseFailAlloc_842_, sizeof(void*)*3 + 1, v_wantsRebuild_831_);
v___x_840_ = v_reuseFailAlloc_842_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
lean_object* v___x_841_; 
v___x_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_841_, 0, v___x_837_);
lean_ctor_set(v___x_841_, 1, v___x_840_);
return v___x_841_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addTrace___boxed(lean_object* v_trace_844_, lean_object* v_a_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lake_addTrace(v_trace_844_, v_a_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v_a_845_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lake_addSubTrace___redArg(lean_object* v_caption_853_, lean_object* v_x_854_, lean_object* v_a_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_log_862_; uint8_t v_action_863_; uint8_t v_wantsRebuild_864_; lean_object* v_trace_865_; lean_object* v_buildTime_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_897_; 
v_log_862_ = lean_ctor_get(v___y_860_, 0);
v_action_863_ = lean_ctor_get_uint8(v___y_860_, sizeof(void*)*3);
v_wantsRebuild_864_ = lean_ctor_get_uint8(v___y_860_, sizeof(void*)*3 + 1);
v_trace_865_ = lean_ctor_get(v___y_860_, 1);
v_buildTime_866_ = lean_ctor_get(v___y_860_, 2);
v_isSharedCheck_897_ = !lean_is_exclusive(v___y_860_);
if (v_isSharedCheck_897_ == 0)
{
v___x_868_ = v___y_860_;
v_isShared_869_ = v_isSharedCheck_897_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_buildTime_866_);
lean_inc(v_trace_865_);
lean_inc(v_log_862_);
lean_dec(v___y_860_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_897_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_870_ = l_Lake_BuildTrace_nil(v_caption_853_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 1, v___x_870_);
v___x_872_ = v___x_868_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_log_862_);
lean_ctor_set(v_reuseFailAlloc_896_, 1, v___x_870_);
lean_ctor_set(v_reuseFailAlloc_896_, 2, v_buildTime_866_);
lean_ctor_set_uint8(v_reuseFailAlloc_896_, sizeof(void*)*3, v_action_863_);
lean_ctor_set_uint8(v_reuseFailAlloc_896_, sizeof(void*)*3 + 1, v_wantsRebuild_864_);
v___x_872_ = v_reuseFailAlloc_896_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_object* v___x_873_; 
lean_inc_ref(v___y_859_);
lean_inc(v___y_858_);
lean_inc(v___y_857_);
lean_inc(v___y_856_);
v___x_873_ = lean_apply_7(v_x_854_, v_a_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___x_872_, lean_box(0));
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_895_; 
v_a_874_ = lean_ctor_get(v___x_873_, 1);
v_a_875_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_895_ == 0)
{
v___x_877_ = v___x_873_;
v_isShared_878_ = v_isSharedCheck_895_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_874_);
lean_inc(v_a_875_);
lean_dec(v___x_873_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_895_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v_log_879_; uint8_t v_action_880_; uint8_t v_wantsRebuild_881_; lean_object* v_trace_882_; lean_object* v_buildTime_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_894_; 
v_log_879_ = lean_ctor_get(v_a_874_, 0);
v_action_880_ = lean_ctor_get_uint8(v_a_874_, sizeof(void*)*3);
v_wantsRebuild_881_ = lean_ctor_get_uint8(v_a_874_, sizeof(void*)*3 + 1);
v_trace_882_ = lean_ctor_get(v_a_874_, 1);
v_buildTime_883_ = lean_ctor_get(v_a_874_, 2);
v_isSharedCheck_894_ = !lean_is_exclusive(v_a_874_);
if (v_isSharedCheck_894_ == 0)
{
v___x_885_ = v_a_874_;
v_isShared_886_ = v_isSharedCheck_894_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_buildTime_883_);
lean_inc(v_trace_882_);
lean_inc(v_log_879_);
lean_dec(v_a_874_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_894_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v___x_889_; 
v___x_887_ = l_Lake_BuildTrace_mix(v_trace_865_, v_trace_882_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 1, v___x_887_);
v___x_889_ = v___x_885_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_log_879_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_893_, 2, v_buildTime_883_);
lean_ctor_set_uint8(v_reuseFailAlloc_893_, sizeof(void*)*3, v_action_880_);
lean_ctor_set_uint8(v_reuseFailAlloc_893_, sizeof(void*)*3 + 1, v_wantsRebuild_881_);
v___x_889_ = v_reuseFailAlloc_893_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
lean_object* v___x_891_; 
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 1, v___x_889_);
v___x_891_ = v___x_877_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_875_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
else
{
lean_dec_ref(v_trace_865_);
return v___x_873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addSubTrace___redArg___boxed(lean_object* v_caption_898_, lean_object* v_x_899_, lean_object* v_a_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lake_addSubTrace___redArg(v_caption_898_, v_x_899_, v_a_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec(v___y_903_);
lean_dec(v___y_902_);
lean_dec(v___y_901_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lake_addSubTrace(lean_object* v_00_u03b1_908_, lean_object* v_caption_909_, lean_object* v_x_910_, lean_object* v_a_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v_log_918_; uint8_t v_action_919_; uint8_t v_wantsRebuild_920_; lean_object* v_trace_921_; lean_object* v_buildTime_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_953_; 
v_log_918_ = lean_ctor_get(v___y_916_, 0);
v_action_919_ = lean_ctor_get_uint8(v___y_916_, sizeof(void*)*3);
v_wantsRebuild_920_ = lean_ctor_get_uint8(v___y_916_, sizeof(void*)*3 + 1);
v_trace_921_ = lean_ctor_get(v___y_916_, 1);
v_buildTime_922_ = lean_ctor_get(v___y_916_, 2);
v_isSharedCheck_953_ = !lean_is_exclusive(v___y_916_);
if (v_isSharedCheck_953_ == 0)
{
v___x_924_ = v___y_916_;
v_isShared_925_ = v_isSharedCheck_953_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_buildTime_922_);
lean_inc(v_trace_921_);
lean_inc(v_log_918_);
lean_dec(v___y_916_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_953_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_926_ = l_Lake_BuildTrace_nil(v_caption_909_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 1, v___x_926_);
v___x_928_ = v___x_924_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_log_918_);
lean_ctor_set(v_reuseFailAlloc_952_, 1, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_952_, 2, v_buildTime_922_);
lean_ctor_set_uint8(v_reuseFailAlloc_952_, sizeof(void*)*3, v_action_919_);
lean_ctor_set_uint8(v_reuseFailAlloc_952_, sizeof(void*)*3 + 1, v_wantsRebuild_920_);
v___x_928_ = v_reuseFailAlloc_952_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v___x_929_; 
lean_inc_ref(v___y_915_);
lean_inc(v___y_914_);
lean_inc(v___y_913_);
lean_inc(v___y_912_);
v___x_929_ = lean_apply_7(v_x_910_, v_a_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___x_928_, lean_box(0));
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v_a_930_; lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_951_; 
v_a_930_ = lean_ctor_get(v___x_929_, 1);
v_a_931_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_951_ == 0)
{
v___x_933_ = v___x_929_;
v_isShared_934_ = v_isSharedCheck_951_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_930_);
lean_inc(v_a_931_);
lean_dec(v___x_929_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_951_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v_log_935_; uint8_t v_action_936_; uint8_t v_wantsRebuild_937_; lean_object* v_trace_938_; lean_object* v_buildTime_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_950_; 
v_log_935_ = lean_ctor_get(v_a_930_, 0);
v_action_936_ = lean_ctor_get_uint8(v_a_930_, sizeof(void*)*3);
v_wantsRebuild_937_ = lean_ctor_get_uint8(v_a_930_, sizeof(void*)*3 + 1);
v_trace_938_ = lean_ctor_get(v_a_930_, 1);
v_buildTime_939_ = lean_ctor_get(v_a_930_, 2);
v_isSharedCheck_950_ = !lean_is_exclusive(v_a_930_);
if (v_isSharedCheck_950_ == 0)
{
v___x_941_ = v_a_930_;
v_isShared_942_ = v_isSharedCheck_950_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_buildTime_939_);
lean_inc(v_trace_938_);
lean_inc(v_log_935_);
lean_dec(v_a_930_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_950_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v___x_945_; 
v___x_943_ = l_Lake_BuildTrace_mix(v_trace_921_, v_trace_938_);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 1, v___x_943_);
v___x_945_ = v___x_941_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_log_935_);
lean_ctor_set(v_reuseFailAlloc_949_, 1, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_949_, 2, v_buildTime_939_);
lean_ctor_set_uint8(v_reuseFailAlloc_949_, sizeof(void*)*3, v_action_936_);
lean_ctor_set_uint8(v_reuseFailAlloc_949_, sizeof(void*)*3 + 1, v_wantsRebuild_937_);
v___x_945_ = v_reuseFailAlloc_949_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_947_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_945_);
v___x_947_ = v___x_933_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_931_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v___x_945_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
else
{
lean_dec_ref(v_trace_921_);
return v___x_929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addSubTrace___boxed(lean_object* v_00_u03b1_954_, lean_object* v_caption_955_, lean_object* v_x_956_, lean_object* v_a_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lake_addSubTrace(v_00_u03b1_954_, v_caption_955_, v_x_956_, v_a_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec(v___y_959_);
lean_dec(v___y_958_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn___redArg(lean_object* v_f_965_, lean_object* v_a_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v___x_973_; 
lean_inc_ref(v___y_971_);
lean_inc_ref(v___y_970_);
lean_inc(v___y_969_);
lean_inc(v___y_968_);
lean_inc(v___y_967_);
v___x_973_ = lean_apply_7(v_f_965_, v_a_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, lean_box(0));
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn___redArg___boxed(lean_object* v_f_974_, lean_object* v_a_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lake_SpawnM_ofFn___redArg(v_f_974_, v_a_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_);
lean_dec_ref(v___y_980_);
lean_dec_ref(v___y_979_);
lean_dec(v___y_978_);
lean_dec(v___y_977_);
lean_dec(v___y_976_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn(lean_object* v_00_u03b1_983_, lean_object* v_f_984_, lean_object* v_a_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v___x_992_; 
lean_inc_ref(v___y_990_);
lean_inc_ref(v___y_989_);
lean_inc(v___y_988_);
lean_inc(v___y_987_);
lean_inc(v___y_986_);
v___x_992_ = lean_apply_7(v_f_984_, v_a_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, lean_box(0));
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_ofFn___boxed(lean_object* v_00_u03b1_993_, lean_object* v_f_994_, lean_object* v_a_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Lake_SpawnM_ofFn(v_00_u03b1_993_, v_f_994_, v_a_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
lean_dec_ref(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
lean_dec(v___y_997_);
lean_dec(v___y_996_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn___redArg(lean_object* v_self_1003_, lean_object* v_fetch_1004_, lean_object* v_pkg_x3f_1005_, lean_object* v_stack_1006_, lean_object* v_store_1007_, lean_object* v_ctx_1008_, lean_object* v_s_1009_){
_start:
{
lean_object* v___x_1011_; 
v___x_1011_ = lean_apply_7(v_self_1003_, v_fetch_1004_, v_pkg_x3f_1005_, v_stack_1006_, v_store_1007_, v_ctx_1008_, v_s_1009_, lean_box(0));
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn___redArg___boxed(lean_object* v_self_1012_, lean_object* v_fetch_1013_, lean_object* v_pkg_x3f_1014_, lean_object* v_stack_1015_, lean_object* v_store_1016_, lean_object* v_ctx_1017_, lean_object* v_s_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Lake_SpawnM_toFn___redArg(v_self_1012_, v_fetch_1013_, v_pkg_x3f_1014_, v_stack_1015_, v_store_1016_, v_ctx_1017_, v_s_1018_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn(lean_object* v_00_u03b1_1021_, lean_object* v_self_1022_, lean_object* v_fetch_1023_, lean_object* v_pkg_x3f_1024_, lean_object* v_stack_1025_, lean_object* v_store_1026_, lean_object* v_ctx_1027_, lean_object* v_s_1028_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = lean_apply_7(v_self_1022_, v_fetch_1023_, v_pkg_x3f_1024_, v_stack_1025_, v_store_1026_, v_ctx_1027_, v_s_1028_, lean_box(0));
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l_Lake_SpawnM_toFn___boxed(lean_object* v_00_u03b1_1031_, lean_object* v_self_1032_, lean_object* v_fetch_1033_, lean_object* v_pkg_x3f_1034_, lean_object* v_stack_1035_, lean_object* v_store_1036_, lean_object* v_ctx_1037_, lean_object* v_s_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lake_SpawnM_toFn(v_00_u03b1_1031_, v_self_1032_, v_fetch_1033_, v_pkg_x3f_1034_, v_stack_1035_, v_store_1036_, v_ctx_1037_, v_s_1038_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM___redArg(lean_object* v_x_1041_, lean_object* v_a_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_trace_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v_trace_1049_ = lean_ctor_get(v___y_1047_, 1);
lean_inc_ref(v_trace_1049_);
lean_inc_ref(v___y_1046_);
lean_inc(v___y_1045_);
lean_inc(v___y_1044_);
lean_inc(v___y_1043_);
v___x_1050_ = lean_apply_7(v_x_1041_, v_a_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v_trace_1049_, lean_box(0));
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
lean_ctor_set(v___x_1051_, 1, v___y_1047_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM___redArg___boxed(lean_object* v_x_1052_, lean_object* v_a_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Lake_JobM_runSpawnM___redArg(v_x_1052_, v_a_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___y_1056_);
lean_dec(v___y_1055_);
lean_dec(v___y_1054_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM(lean_object* v_00_u03b1_1061_, lean_object* v_x_1062_, lean_object* v_a_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v_trace_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v_trace_1070_ = lean_ctor_get(v___y_1068_, 1);
lean_inc_ref(v_trace_1070_);
lean_inc_ref(v___y_1067_);
lean_inc(v___y_1066_);
lean_inc(v___y_1065_);
lean_inc(v___y_1064_);
v___x_1071_ = lean_apply_7(v_x_1062_, v_a_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v_trace_1070_, lean_box(0));
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
lean_ctor_set(v___x_1072_, 1, v___y_1068_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runSpawnM___boxed(lean_object* v_00_u03b1_1073_, lean_object* v_x_1074_, lean_object* v_a_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Lake_JobM_runSpawnM(v_00_u03b1_1073_, v_x_1074_, v_a_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec(v___y_1076_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM___redArg(lean_object* v_x_1085_, lean_object* v_a_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
uint8_t v___x_1093_; uint8_t v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1093_ = 0;
v___x_1094_ = 0;
v___x_1095_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
v___x_1096_ = lean_unsigned_to_nat(0u);
v___x_1097_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1097_, 0, v___y_1091_);
lean_ctor_set(v___x_1097_, 1, v___x_1095_);
lean_ctor_set(v___x_1097_, 2, v___x_1096_);
lean_ctor_set_uint8(v___x_1097_, sizeof(void*)*3, v___x_1093_);
lean_ctor_set_uint8(v___x_1097_, sizeof(void*)*3 + 1, v___x_1094_);
lean_inc_ref(v___y_1090_);
lean_inc(v___y_1089_);
lean_inc(v___y_1088_);
lean_inc(v___y_1087_);
v___x_1098_ = lean_apply_7(v_x_1085_, v_a_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___x_1097_, lean_box(0));
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1108_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 1);
v_a_1100_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1102_ = v___x_1098_;
v_isShared_1103_ = v_isSharedCheck_1108_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1099_);
lean_inc(v_a_1100_);
lean_dec(v___x_1098_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1108_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v_log_1104_; lean_object* v___x_1106_; 
v_log_1104_ = lean_ctor_get(v_a_1099_, 0);
lean_inc_ref(v_log_1104_);
lean_dec(v_a_1099_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 1, v_log_1104_);
v___x_1106_ = v___x_1102_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1100_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v_log_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
else
{
lean_object* v_a_1109_; lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1118_; 
v_a_1109_ = lean_ctor_get(v___x_1098_, 1);
v_a_1110_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1112_ = v___x_1098_;
v_isShared_1113_ = v_isSharedCheck_1118_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1109_);
lean_inc(v_a_1110_);
lean_dec(v___x_1098_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1118_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v_log_1114_; lean_object* v___x_1116_; 
v_log_1114_ = lean_ctor_get(v_a_1109_, 0);
lean_inc_ref(v_log_1114_);
lean_dec(v_a_1109_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 1, v_log_1114_);
v___x_1116_ = v___x_1112_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1110_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_log_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM___redArg___boxed(lean_object* v_x_1119_, lean_object* v_a_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lake_FetchM_runJobM___redArg(v_x_1119_, v_a_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
lean_dec_ref(v___y_1124_);
lean_dec(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec(v___y_1121_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM(lean_object* v_00_u03b1_1128_, lean_object* v_x_1129_, lean_object* v_a_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
uint8_t v___x_1137_; uint8_t v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1137_ = 0;
v___x_1138_ = 0;
v___x_1139_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
v___x_1140_ = lean_unsigned_to_nat(0u);
v___x_1141_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1141_, 0, v___y_1135_);
lean_ctor_set(v___x_1141_, 1, v___x_1139_);
lean_ctor_set(v___x_1141_, 2, v___x_1140_);
lean_ctor_set_uint8(v___x_1141_, sizeof(void*)*3, v___x_1137_);
lean_ctor_set_uint8(v___x_1141_, sizeof(void*)*3 + 1, v___x_1138_);
lean_inc_ref(v___y_1134_);
lean_inc(v___y_1133_);
lean_inc(v___y_1132_);
lean_inc(v___y_1131_);
v___x_1142_ = lean_apply_7(v_x_1129_, v_a_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___x_1141_, lean_box(0));
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1152_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 1);
v_a_1144_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1146_ = v___x_1142_;
v_isShared_1147_ = v_isSharedCheck_1152_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1143_);
lean_inc(v_a_1144_);
lean_dec(v___x_1142_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1152_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v_log_1148_; lean_object* v___x_1150_; 
v_log_1148_ = lean_ctor_get(v_a_1143_, 0);
lean_inc_ref(v_log_1148_);
lean_dec(v_a_1143_);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 1, v_log_1148_);
v___x_1150_ = v___x_1146_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1144_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v_log_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
else
{
lean_object* v_a_1153_; lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1162_; 
v_a_1153_ = lean_ctor_get(v___x_1142_, 1);
v_a_1154_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1156_ = v___x_1142_;
v_isShared_1157_ = v_isSharedCheck_1162_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1153_);
lean_inc(v_a_1154_);
lean_dec(v___x_1142_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1162_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v_log_1158_; lean_object* v___x_1160_; 
v_log_1158_ = lean_ctor_get(v_a_1153_, 0);
lean_inc_ref(v_log_1158_);
lean_dec(v_a_1153_);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 1, v_log_1158_);
v___x_1160_ = v___x_1156_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_a_1154_);
lean_ctor_set(v_reuseFailAlloc_1161_, 1, v_log_1158_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
return v___x_1160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_FetchM_runJobM___boxed(lean_object* v_00_u03b1_1163_, lean_object* v_x_1164_, lean_object* v_a_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lake_FetchM_runJobM(v_00_u03b1_1163_, v_x_1164_, v_a_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec(v___y_1166_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM___redArg(lean_object* v_x_1175_, lean_object* v_a_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v_log_1183_; uint8_t v_action_1184_; uint8_t v_wantsRebuild_1185_; lean_object* v_trace_1186_; lean_object* v_buildTime_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1216_; 
v_log_1183_ = lean_ctor_get(v___y_1181_, 0);
v_action_1184_ = lean_ctor_get_uint8(v___y_1181_, sizeof(void*)*3);
v_wantsRebuild_1185_ = lean_ctor_get_uint8(v___y_1181_, sizeof(void*)*3 + 1);
v_trace_1186_ = lean_ctor_get(v___y_1181_, 1);
v_buildTime_1187_ = lean_ctor_get(v___y_1181_, 2);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___y_1181_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1189_ = v___y_1181_;
v_isShared_1190_ = v_isSharedCheck_1216_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_buildTime_1187_);
lean_inc(v_trace_1186_);
lean_inc(v_log_1183_);
lean_dec(v___y_1181_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1216_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v___x_1191_; 
lean_inc_ref(v___y_1180_);
lean_inc(v___y_1179_);
lean_inc(v___y_1178_);
lean_inc(v___y_1177_);
v___x_1191_ = lean_apply_7(v_x_1175_, v_a_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v_log_1183_, lean_box(0));
if (lean_obj_tag(v___x_1191_) == 0)
{
lean_object* v_a_1192_; lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1203_; 
v_a_1192_ = lean_ctor_get(v___x_1191_, 0);
v_a_1193_ = lean_ctor_get(v___x_1191_, 1);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1195_ = v___x_1191_;
v_isShared_1196_ = v_isSharedCheck_1203_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_inc(v_a_1192_);
lean_dec(v___x_1191_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1203_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 0, v_a_1193_);
v___x_1198_ = v___x_1189_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_a_1193_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v_trace_1186_);
lean_ctor_set(v_reuseFailAlloc_1202_, 2, v_buildTime_1187_);
lean_ctor_set_uint8(v_reuseFailAlloc_1202_, sizeof(void*)*3, v_action_1184_);
lean_ctor_set_uint8(v_reuseFailAlloc_1202_, sizeof(void*)*3 + 1, v_wantsRebuild_1185_);
v___x_1198_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1200_; 
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 1, v___x_1198_);
v___x_1200_ = v___x_1195_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1192_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
else
{
lean_object* v_a_1204_; lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1215_; 
v_a_1204_ = lean_ctor_get(v___x_1191_, 0);
v_a_1205_ = lean_ctor_get(v___x_1191_, 1);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1207_ = v___x_1191_;
v_isShared_1208_ = v_isSharedCheck_1215_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_inc(v_a_1204_);
lean_dec(v___x_1191_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1215_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 0, v_a_1205_);
v___x_1210_ = v___x_1189_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1205_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v_trace_1186_);
lean_ctor_set(v_reuseFailAlloc_1214_, 2, v_buildTime_1187_);
lean_ctor_set_uint8(v_reuseFailAlloc_1214_, sizeof(void*)*3, v_action_1184_);
lean_ctor_set_uint8(v_reuseFailAlloc_1214_, sizeof(void*)*3 + 1, v_wantsRebuild_1185_);
v___x_1210_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
lean_object* v___x_1212_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v___x_1210_);
v___x_1212_ = v___x_1207_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1204_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v___x_1210_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM___redArg___boxed(lean_object* v_x_1217_, lean_object* v_a_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l_Lake_JobM_runFetchM___redArg(v_x_1217_, v_a_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
lean_dec_ref(v___y_1222_);
lean_dec(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec(v___y_1219_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM(lean_object* v_00_u03b1_1226_, lean_object* v_x_1227_, lean_object* v_a_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v_log_1235_; uint8_t v_action_1236_; uint8_t v_wantsRebuild_1237_; lean_object* v_trace_1238_; lean_object* v_buildTime_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1268_; 
v_log_1235_ = lean_ctor_get(v___y_1233_, 0);
v_action_1236_ = lean_ctor_get_uint8(v___y_1233_, sizeof(void*)*3);
v_wantsRebuild_1237_ = lean_ctor_get_uint8(v___y_1233_, sizeof(void*)*3 + 1);
v_trace_1238_ = lean_ctor_get(v___y_1233_, 1);
v_buildTime_1239_ = lean_ctor_get(v___y_1233_, 2);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___y_1233_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1241_ = v___y_1233_;
v_isShared_1242_ = v_isSharedCheck_1268_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_buildTime_1239_);
lean_inc(v_trace_1238_);
lean_inc(v_log_1235_);
lean_dec(v___y_1233_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1268_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1243_; 
lean_inc_ref(v___y_1232_);
lean_inc(v___y_1231_);
lean_inc(v___y_1230_);
lean_inc(v___y_1229_);
v___x_1243_ = lean_apply_7(v_x_1227_, v_a_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v_log_1235_, lean_box(0));
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1255_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
v_a_1245_ = lean_ctor_get(v___x_1243_, 1);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1247_ = v___x_1243_;
v_isShared_1248_ = v_isSharedCheck_1255_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_inc(v_a_1244_);
lean_dec(v___x_1243_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1255_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v_a_1245_);
v___x_1250_ = v___x_1241_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_a_1245_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_trace_1238_);
lean_ctor_set(v_reuseFailAlloc_1254_, 2, v_buildTime_1239_);
lean_ctor_set_uint8(v_reuseFailAlloc_1254_, sizeof(void*)*3, v_action_1236_);
lean_ctor_set_uint8(v_reuseFailAlloc_1254_, sizeof(void*)*3 + 1, v_wantsRebuild_1237_);
v___x_1250_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1252_; 
if (v_isShared_1248_ == 0)
{
lean_ctor_set(v___x_1247_, 1, v___x_1250_);
v___x_1252_ = v___x_1247_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1244_);
lean_ctor_set(v_reuseFailAlloc_1253_, 1, v___x_1250_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
else
{
lean_object* v_a_1256_; lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1267_; 
v_a_1256_ = lean_ctor_get(v___x_1243_, 0);
v_a_1257_ = lean_ctor_get(v___x_1243_, 1);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1259_ = v___x_1243_;
v_isShared_1260_ = v_isSharedCheck_1267_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_inc(v_a_1256_);
lean_dec(v___x_1243_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1267_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v_a_1257_);
v___x_1262_ = v___x_1241_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1257_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v_trace_1238_);
lean_ctor_set(v_reuseFailAlloc_1266_, 2, v_buildTime_1239_);
lean_ctor_set_uint8(v_reuseFailAlloc_1266_, sizeof(void*)*3, v_action_1236_);
lean_ctor_set_uint8(v_reuseFailAlloc_1266_, sizeof(void*)*3 + 1, v_wantsRebuild_1237_);
v___x_1262_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
lean_object* v___x_1264_; 
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 1, v___x_1262_);
v___x_1264_ = v___x_1259_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1256_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v___x_1262_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_JobM_runFetchM___boxed(lean_object* v_00_u03b1_1269_, lean_object* v_x_1270_, lean_object* v_a_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lake_JobM_runFetchM(v_00_u03b1_1269_, v_x_1270_, v_a_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v___y_1274_);
lean_dec(v___y_1273_);
lean_dec(v___y_1272_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindTask___redArg___lam__0(lean_object* v_inst_1281_, lean_object* v_caption_1282_, uint8_t v_optional_1283_, lean_object* v_toPure_1284_, lean_object* v_____do__lift_1285_){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1286_, 0, v_____do__lift_1285_);
lean_ctor_set(v___x_1286_, 1, v_inst_1281_);
lean_ctor_set(v___x_1286_, 2, v_caption_1282_);
lean_ctor_set_uint8(v___x_1286_, sizeof(void*)*3, v_optional_1283_);
v___x_1287_ = lean_apply_2(v_toPure_1284_, lean_box(0), v___x_1286_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindTask___redArg___lam__0___boxed(lean_object* v_inst_1288_, lean_object* v_caption_1289_, lean_object* v_optional_1290_, lean_object* v_toPure_1291_, lean_object* v_____do__lift_1292_){
_start:
{
uint8_t v_optional_boxed_1293_; lean_object* v_res_1294_; 
v_optional_boxed_1293_ = lean_unbox(v_optional_1290_);
v_res_1294_ = l_Lake_Job_bindTask___redArg___lam__0(v_inst_1288_, v_caption_1289_, v_optional_boxed_1293_, v_toPure_1291_, v_____do__lift_1292_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindTask___redArg(lean_object* v_inst_1295_, lean_object* v_inst_1296_, lean_object* v_f_1297_, lean_object* v_self_1298_){
_start:
{
lean_object* v_toApplicative_1299_; lean_object* v_toBind_1300_; lean_object* v_task_1301_; lean_object* v_caption_1302_; uint8_t v_optional_1303_; lean_object* v_toPure_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___f_1307_; lean_object* v___x_1308_; 
v_toApplicative_1299_ = lean_ctor_get(v_inst_1295_, 0);
lean_inc_ref(v_toApplicative_1299_);
v_toBind_1300_ = lean_ctor_get(v_inst_1295_, 1);
lean_inc(v_toBind_1300_);
lean_dec_ref(v_inst_1295_);
v_task_1301_ = lean_ctor_get(v_self_1298_, 0);
lean_inc_ref(v_task_1301_);
v_caption_1302_ = lean_ctor_get(v_self_1298_, 2);
lean_inc_ref(v_caption_1302_);
v_optional_1303_ = lean_ctor_get_uint8(v_self_1298_, sizeof(void*)*3);
lean_dec_ref(v_self_1298_);
v_toPure_1304_ = lean_ctor_get(v_toApplicative_1299_, 1);
lean_inc(v_toPure_1304_);
lean_dec_ref(v_toApplicative_1299_);
v___x_1305_ = lean_apply_1(v_f_1297_, v_task_1301_);
v___x_1306_ = lean_box(v_optional_1303_);
v___f_1307_ = lean_alloc_closure((void*)(l_Lake_Job_bindTask___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1307_, 0, v_inst_1296_);
lean_closure_set(v___f_1307_, 1, v_caption_1302_);
lean_closure_set(v___f_1307_, 2, v___x_1306_);
lean_closure_set(v___f_1307_, 3, v_toPure_1304_);
v___x_1308_ = lean_apply_4(v_toBind_1300_, lean_box(0), lean_box(0), v___x_1305_, v___f_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindTask(lean_object* v_m_1309_, lean_object* v_00_u03b2_1310_, lean_object* v_00_u03b1_1311_, lean_object* v_inst_1312_, lean_object* v_inst_1313_, lean_object* v_f_1314_, lean_object* v_self_1315_){
_start:
{
lean_object* v_toApplicative_1316_; lean_object* v_toBind_1317_; lean_object* v_task_1318_; lean_object* v_caption_1319_; uint8_t v_optional_1320_; lean_object* v_toPure_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___f_1324_; lean_object* v___x_1325_; 
v_toApplicative_1316_ = lean_ctor_get(v_inst_1312_, 0);
lean_inc_ref(v_toApplicative_1316_);
v_toBind_1317_ = lean_ctor_get(v_inst_1312_, 1);
lean_inc(v_toBind_1317_);
lean_dec_ref(v_inst_1312_);
v_task_1318_ = lean_ctor_get(v_self_1315_, 0);
lean_inc_ref(v_task_1318_);
v_caption_1319_ = lean_ctor_get(v_self_1315_, 2);
lean_inc_ref(v_caption_1319_);
v_optional_1320_ = lean_ctor_get_uint8(v_self_1315_, sizeof(void*)*3);
lean_dec_ref(v_self_1315_);
v_toPure_1321_ = lean_ctor_get(v_toApplicative_1316_, 1);
lean_inc(v_toPure_1321_);
lean_dec_ref(v_toApplicative_1316_);
v___x_1322_ = lean_apply_1(v_f_1314_, v_task_1318_);
v___x_1323_ = lean_box(v_optional_1320_);
v___f_1324_ = lean_alloc_closure((void*)(l_Lake_Job_bindTask___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1324_, 0, v_inst_1313_);
lean_closure_set(v___f_1324_, 1, v_caption_1319_);
lean_closure_set(v___f_1324_, 2, v___x_1323_);
lean_closure_set(v___f_1324_, 3, v_toPure_1321_);
v___x_1325_ = lean_apply_4(v_toBind_1317_, lean_box(0), lean_box(0), v___x_1322_, v___f_1324_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lake_Job_sync_spec__0(lean_object* v_msg_1327_){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_1329_ = lean_panic_fn_borrowed(v___x_1328_, v_msg_1327_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__0(lean_object* v_val_1330_, lean_object* v_val_1331_, lean_object* v_a_x3f_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1335_ = lean_get_set_stdout(v_val_1330_);
lean_dec_ref(v___x_1335_);
v___x_1336_ = lean_box(0);
v___x_1337_ = lean_get_set_stderr(v_val_1331_);
lean_dec_ref(v___x_1337_);
v___x_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1336_);
lean_ctor_set(v___x_1338_, 1, v___y_1333_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__0___boxed(lean_object* v_val_1339_, lean_object* v_val_1340_, lean_object* v_a_x3f_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Lake_Job_sync___redArg___lam__0(v_val_1339_, v_val_1340_, v_a_x3f_1341_, v___y_1342_);
lean_dec(v_a_x3f_1341_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__1(lean_object* v_a_1345_, lean_object* v_____r_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1354_, 0, v_a_1345_);
lean_ctor_set(v___x_1354_, 1, v___y_1352_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___lam__1___boxed(lean_object* v_a_1355_, lean_object* v_____r_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Lake_Job_sync___redArg___lam__1(v_a_1355_, v_____r_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1360_);
lean_dec(v___y_1359_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
return v_res_1364_;
}
}
static lean_object* _init_l_Lake_Job_sync___redArg___closed__0(void){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1365_ = lean_unsigned_to_nat(0u);
v___x_1366_ = l_ByteArray_empty;
v___x_1367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
lean_ctor_set(v___x_1367_, 1, v___x_1365_);
return v___x_1367_;
}
}
static lean_object* _init_l_Lake_Job_sync___redArg___closed__2(void){
_start:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; uint8_t v___x_1372_; uint8_t v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1370_ = lean_unsigned_to_nat(0u);
v___x_1371_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
v___x_1372_ = 0;
v___x_1373_ = 0;
v___x_1374_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_1375_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1375_, 0, v___x_1374_);
lean_ctor_set(v___x_1375_, 1, v___x_1371_);
lean_ctor_set(v___x_1375_, 2, v___x_1370_);
lean_ctor_set_uint8(v___x_1375_, sizeof(void*)*3, v___x_1373_);
lean_ctor_set_uint8(v___x_1375_, sizeof(void*)*3 + 1, v___x_1372_);
return v___x_1375_;
}
}
static lean_object* _init_l_Lake_Job_sync___redArg___closed__7(void){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1380_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__6));
v___x_1381_ = lean_unsigned_to_nat(46u);
v___x_1382_ = lean_unsigned_to_nat(193u);
v___x_1383_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__5));
v___x_1384_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__4));
v___x_1385_ = l_mkPanicMessageWithDecl(v___x_1384_, v___x_1383_, v___x_1382_, v___x_1381_, v___x_1380_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg(lean_object* v_inst_1386_, lean_object* v_act_1387_, lean_object* v_caption_1388_, lean_object* v_a_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v_val_1396_; lean_object* v_a_1401_; lean_object* v_a_1402_; lean_object* v___y_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1406_ = lean_unsigned_to_nat(0u);
v___x_1407_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__0, &l_Lake_Job_sync___redArg___closed__0_once, _init_l_Lake_Job_sync___redArg___closed__0);
v___x_1408_ = lean_st_mk_ref(v___x_1407_);
lean_inc(v___x_1408_);
v___x_1409_ = l_IO_FS_Stream_ofBuffer(v___x_1408_);
lean_inc_ref(v___x_1409_);
v___x_1410_ = lean_get_set_stdout(v___x_1409_);
v___x_1411_ = lean_get_set_stderr(v___x_1409_);
v___x_1412_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__2, &l_Lake_Job_sync___redArg___closed__2_once, _init_l_Lake_Job_sync___redArg___closed__2);
lean_inc_ref(v___y_1393_);
lean_inc(v___y_1392_);
lean_inc(v___y_1391_);
lean_inc(v___y_1390_);
lean_inc_ref(v_a_1389_);
v___x_1413_ = lean_apply_7(v_act_1387_, v_a_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___x_1412_, lean_box(0));
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; lean_object* v_a_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v_a_1418_; lean_object* v_log_1419_; uint8_t v_action_1420_; uint8_t v_wantsRebuild_1421_; lean_object* v_trace_1422_; lean_object* v_buildTime_1423_; lean_object* v___x_1424_; lean_object* v___y_1426_; lean_object* v_data_1451_; uint8_t v___x_1452_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc_n(v_a_1414_, 2);
v_a_1415_ = lean_ctor_get(v___x_1413_, 1);
lean_inc(v_a_1415_);
lean_dec_ref_known(v___x_1413_, 2);
v___x_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1416_, 0, v_a_1414_);
v___x_1417_ = l_Lake_Job_sync___redArg___lam__0(v___x_1410_, v___x_1411_, v___x_1416_, v_a_1415_);
lean_dec_ref_known(v___x_1416_, 1);
v_a_1418_ = lean_ctor_get(v___x_1417_, 1);
lean_inc(v_a_1418_);
lean_dec_ref(v___x_1417_);
v_log_1419_ = lean_ctor_get(v_a_1418_, 0);
v_action_1420_ = lean_ctor_get_uint8(v_a_1418_, sizeof(void*)*3);
v_wantsRebuild_1421_ = lean_ctor_get_uint8(v_a_1418_, sizeof(void*)*3 + 1);
v_trace_1422_ = lean_ctor_get(v_a_1418_, 1);
v_buildTime_1423_ = lean_ctor_get(v_a_1418_, 2);
v___x_1424_ = lean_st_ref_get(v___x_1408_);
lean_dec(v___x_1408_);
v_data_1451_ = lean_ctor_get(v___x_1424_, 0);
lean_inc_ref(v_data_1451_);
lean_dec(v___x_1424_);
v___x_1452_ = lean_string_validate_utf8(v_data_1451_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
lean_dec_ref(v_data_1451_);
v___x_1453_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__7, &l_Lake_Job_sync___redArg___closed__7_once, _init_l_Lake_Job_sync___redArg___closed__7);
v___x_1454_ = l_panic___at___00Lake_Job_sync_spec__0(v___x_1453_);
v___y_1426_ = v___x_1454_;
goto v___jp_1425_;
}
else
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_string_from_utf8_unchecked(v_data_1451_);
v___y_1426_ = v___x_1455_;
goto v___jp_1425_;
}
v___jp_1425_:
{
lean_object* v___x_1427_; uint8_t v___x_1428_; 
v___x_1427_ = lean_string_utf8_byte_size(v___y_1426_);
v___x_1428_ = lean_nat_dec_eq(v___x_1427_, v___x_1406_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1445_; 
lean_inc(v_buildTime_1423_);
lean_inc_ref(v_trace_1422_);
lean_inc_ref(v_log_1419_);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_a_1418_);
if (v_isSharedCheck_1445_ == 0)
{
lean_object* v_unused_1446_; lean_object* v_unused_1447_; lean_object* v_unused_1448_; 
v_unused_1446_ = lean_ctor_get(v_a_1418_, 2);
lean_dec(v_unused_1446_);
v_unused_1447_ = lean_ctor_get(v_a_1418_, 1);
lean_dec(v_unused_1447_);
v_unused_1448_ = lean_ctor_get(v_a_1418_, 0);
lean_dec(v_unused_1448_);
v___x_1430_ = v_a_1418_;
v_isShared_1431_ = v_isSharedCheck_1445_;
goto v_resetjp_1429_;
}
else
{
lean_dec(v_a_1418_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1445_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; uint8_t v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v___x_1432_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__3));
v___x_1433_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1433_, 0, v___y_1426_);
lean_ctor_set(v___x_1433_, 1, v___x_1406_);
lean_ctor_set(v___x_1433_, 2, v___x_1427_);
v___x_1434_ = l_String_Slice_trimAscii(v___x_1433_);
v___x_1435_ = l_String_Slice_toString(v___x_1434_);
lean_dec_ref(v___x_1434_);
v___x_1436_ = lean_string_append(v___x_1432_, v___x_1435_);
lean_dec_ref(v___x_1435_);
v___x_1437_ = 1;
v___x_1438_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1438_, 0, v___x_1436_);
lean_ctor_set_uint8(v___x_1438_, sizeof(void*)*1, v___x_1437_);
v___x_1439_ = lean_box(0);
v___x_1440_ = lean_array_push(v_log_1419_, v___x_1438_);
if (v_isShared_1431_ == 0)
{
lean_ctor_set(v___x_1430_, 0, v___x_1440_);
v___x_1442_ = v___x_1430_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v_trace_1422_);
lean_ctor_set(v_reuseFailAlloc_1444_, 2, v_buildTime_1423_);
lean_ctor_set_uint8(v_reuseFailAlloc_1444_, sizeof(void*)*3, v_action_1420_);
lean_ctor_set_uint8(v_reuseFailAlloc_1444_, sizeof(void*)*3 + 1, v_wantsRebuild_1421_);
v___x_1442_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___x_1443_; 
v___x_1443_ = l_Lake_Job_sync___redArg___lam__1(v_a_1414_, v___x_1439_, v_a_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___x_1442_);
lean_dec_ref(v_a_1389_);
v___y_1405_ = v___x_1443_;
goto v___jp_1404_;
}
}
}
else
{
lean_object* v___x_1449_; lean_object* v___x_1450_; 
lean_dec_ref(v___y_1426_);
v___x_1449_ = lean_box(0);
v___x_1450_ = l_Lake_Job_sync___redArg___lam__1(v_a_1414_, v___x_1449_, v_a_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v_a_1418_);
lean_dec_ref(v_a_1389_);
v___y_1405_ = v___x_1450_;
goto v___jp_1404_;
}
}
}
else
{
lean_object* v_a_1456_; lean_object* v_a_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v_a_1460_; 
lean_dec(v___x_1408_);
lean_dec_ref(v_a_1389_);
v_a_1456_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_a_1456_);
v_a_1457_ = lean_ctor_get(v___x_1413_, 1);
lean_inc(v_a_1457_);
lean_dec_ref_known(v___x_1413_, 2);
v___x_1458_ = lean_box(0);
v___x_1459_ = l_Lake_Job_sync___redArg___lam__0(v___x_1410_, v___x_1411_, v___x_1458_, v_a_1457_);
v_a_1460_ = lean_ctor_get(v___x_1459_, 1);
lean_inc(v_a_1460_);
lean_dec_ref(v___x_1459_);
v_a_1401_ = v_a_1456_;
v_a_1402_ = v_a_1460_;
goto v___jp_1400_;
}
v___jp_1395_:
{
lean_object* v___x_1397_; uint8_t v___x_1398_; lean_object* v___x_1399_; 
v___x_1397_ = lean_task_pure(v_val_1396_);
v___x_1398_ = 0;
v___x_1399_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1399_, 0, v___x_1397_);
lean_ctor_set(v___x_1399_, 1, v_inst_1386_);
lean_ctor_set(v___x_1399_, 2, v_caption_1388_);
lean_ctor_set_uint8(v___x_1399_, sizeof(void*)*3, v___x_1398_);
return v___x_1399_;
}
v___jp_1400_:
{
lean_object* v___x_1403_; 
v___x_1403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1403_, 0, v_a_1401_);
lean_ctor_set(v___x_1403_, 1, v_a_1402_);
v_val_1396_ = v___x_1403_;
goto v___jp_1395_;
}
v___jp_1404_:
{
v_val_1396_ = v___y_1405_;
goto v___jp_1395_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___redArg___boxed(lean_object* v_inst_1461_, lean_object* v_act_1462_, lean_object* v_caption_1463_, lean_object* v_a_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lake_Job_sync___redArg(v_inst_1461_, v_act_1462_, v_caption_1463_, v_a_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
lean_dec_ref(v___y_1468_);
lean_dec(v___y_1467_);
lean_dec(v___y_1466_);
lean_dec(v___y_1465_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync(lean_object* v_00_u03b1_1471_, lean_object* v_inst_1472_, lean_object* v_act_1473_, lean_object* v_caption_1474_, lean_object* v_a_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Lake_Job_sync___redArg(v_inst_1472_, v_act_1473_, v_caption_1474_, v_a_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_sync___boxed(lean_object* v_00_u03b1_1483_, lean_object* v_inst_1484_, lean_object* v_act_1485_, lean_object* v_caption_1486_, lean_object* v_a_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Lake_Job_sync(v_00_u03b1_1483_, v_inst_1484_, v_act_1485_, v_caption_1486_, v_a_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
lean_dec_ref(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec(v___y_1489_);
lean_dec(v___y_1488_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg___lam__1(lean_object* v___x_1495_, lean_object* v___x_1496_, uint8_t v___x_1497_, uint8_t v___x_1498_, lean_object* v___x_1499_, lean_object* v___x_1500_, lean_object* v_act_1501_, lean_object* v_a_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v_a_1509_; lean_object* v_a_1510_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1512_ = lean_st_mk_ref(v___x_1495_);
lean_inc(v___x_1512_);
v___x_1513_ = l_IO_FS_Stream_ofBuffer(v___x_1512_);
lean_inc_ref(v___x_1513_);
v___x_1514_ = lean_get_set_stdout(v___x_1513_);
v___x_1515_ = lean_get_set_stderr(v___x_1513_);
lean_inc(v___x_1500_);
v___x_1516_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1516_, 0, v___x_1496_);
lean_ctor_set(v___x_1516_, 1, v___x_1499_);
lean_ctor_set(v___x_1516_, 2, v___x_1500_);
lean_ctor_set_uint8(v___x_1516_, sizeof(void*)*3, v___x_1497_);
lean_ctor_set_uint8(v___x_1516_, sizeof(void*)*3 + 1, v___x_1498_);
lean_inc_ref(v___y_1506_);
lean_inc(v___y_1505_);
lean_inc(v___y_1504_);
lean_inc(v___y_1503_);
v___x_1517_ = lean_apply_7(v_act_1501_, v_a_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___x_1516_, lean_box(0));
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; lean_object* v_a_1519_; lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1564_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
v_a_1519_ = lean_ctor_get(v___x_1517_, 1);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1517_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1521_ = v___x_1517_;
v_isShared_1522_ = v_isSharedCheck_1564_;
goto v_resetjp_1520_;
}
else
{
lean_inc(v_a_1519_);
lean_inc(v_a_1518_);
lean_dec(v___x_1517_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1564_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___y_1524_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v_a_1530_; lean_object* v_log_1531_; uint8_t v_action_1532_; uint8_t v_wantsRebuild_1533_; lean_object* v_trace_1534_; lean_object* v_buildTime_1535_; lean_object* v___x_1536_; lean_object* v___y_1538_; lean_object* v_data_1559_; uint8_t v___x_1560_; 
lean_inc(v_a_1518_);
v___x_1528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1528_, 0, v_a_1518_);
v___x_1529_ = l_Lake_Job_sync___redArg___lam__0(v___x_1514_, v___x_1515_, v___x_1528_, v_a_1519_);
lean_dec_ref_known(v___x_1528_, 1);
v_a_1530_ = lean_ctor_get(v___x_1529_, 1);
lean_inc(v_a_1530_);
lean_dec_ref(v___x_1529_);
v_log_1531_ = lean_ctor_get(v_a_1530_, 0);
v_action_1532_ = lean_ctor_get_uint8(v_a_1530_, sizeof(void*)*3);
v_wantsRebuild_1533_ = lean_ctor_get_uint8(v_a_1530_, sizeof(void*)*3 + 1);
v_trace_1534_ = lean_ctor_get(v_a_1530_, 1);
v_buildTime_1535_ = lean_ctor_get(v_a_1530_, 2);
v___x_1536_ = lean_st_ref_get(v___x_1512_);
lean_dec(v___x_1512_);
v_data_1559_ = lean_ctor_get(v___x_1536_, 0);
lean_inc_ref(v_data_1559_);
lean_dec(v___x_1536_);
v___x_1560_ = lean_string_validate_utf8(v_data_1559_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
lean_dec_ref(v_data_1559_);
v___x_1561_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__7, &l_Lake_Job_sync___redArg___closed__7_once, _init_l_Lake_Job_sync___redArg___closed__7);
v___x_1562_ = l_panic___at___00Lake_Job_sync_spec__0(v___x_1561_);
v___y_1538_ = v___x_1562_;
goto v___jp_1537_;
}
else
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_string_from_utf8_unchecked(v_data_1559_);
v___y_1538_ = v___x_1563_;
goto v___jp_1537_;
}
v___jp_1523_:
{
lean_object* v___x_1526_; 
if (v_isShared_1522_ == 0)
{
lean_ctor_set(v___x_1521_, 1, v___y_1524_);
v___x_1526_ = v___x_1521_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_a_1518_);
lean_ctor_set(v_reuseFailAlloc_1527_, 1, v___y_1524_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
v___jp_1537_:
{
lean_object* v___x_1539_; uint8_t v___x_1540_; 
v___x_1539_ = lean_string_utf8_byte_size(v___y_1538_);
v___x_1540_ = lean_nat_dec_eq(v___x_1539_, v___x_1500_);
if (v___x_1540_ == 0)
{
lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1555_; 
lean_inc(v_buildTime_1535_);
lean_inc_ref(v_trace_1534_);
lean_inc_ref(v_log_1531_);
v_isSharedCheck_1555_ = !lean_is_exclusive(v_a_1530_);
if (v_isSharedCheck_1555_ == 0)
{
lean_object* v_unused_1556_; lean_object* v_unused_1557_; lean_object* v_unused_1558_; 
v_unused_1556_ = lean_ctor_get(v_a_1530_, 2);
lean_dec(v_unused_1556_);
v_unused_1557_ = lean_ctor_get(v_a_1530_, 1);
lean_dec(v_unused_1557_);
v_unused_1558_ = lean_ctor_get(v_a_1530_, 0);
lean_dec(v_unused_1558_);
v___x_1542_ = v_a_1530_;
v_isShared_1543_ = v_isSharedCheck_1555_;
goto v_resetjp_1541_;
}
else
{
lean_dec(v_a_1530_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1555_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; uint8_t v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1544_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__3));
v___x_1545_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1545_, 0, v___y_1538_);
lean_ctor_set(v___x_1545_, 1, v___x_1500_);
lean_ctor_set(v___x_1545_, 2, v___x_1539_);
v___x_1546_ = l_String_Slice_trimAscii(v___x_1545_);
v___x_1547_ = l_String_Slice_toString(v___x_1546_);
lean_dec_ref(v___x_1546_);
v___x_1548_ = lean_string_append(v___x_1544_, v___x_1547_);
lean_dec_ref(v___x_1547_);
v___x_1549_ = 1;
v___x_1550_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1550_, 0, v___x_1548_);
lean_ctor_set_uint8(v___x_1550_, sizeof(void*)*1, v___x_1549_);
v___x_1551_ = lean_array_push(v_log_1531_, v___x_1550_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1551_);
v___x_1553_ = v___x_1542_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1551_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v_trace_1534_);
lean_ctor_set(v_reuseFailAlloc_1554_, 2, v_buildTime_1535_);
lean_ctor_set_uint8(v_reuseFailAlloc_1554_, sizeof(void*)*3, v_action_1532_);
lean_ctor_set_uint8(v_reuseFailAlloc_1554_, sizeof(void*)*3 + 1, v_wantsRebuild_1533_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
v___y_1524_ = v___x_1553_;
goto v___jp_1523_;
}
}
}
else
{
lean_dec_ref(v___y_1538_);
lean_dec(v___x_1500_);
v___y_1524_ = v_a_1530_;
goto v___jp_1523_;
}
}
}
}
else
{
lean_object* v_a_1565_; lean_object* v_a_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v_a_1569_; 
lean_dec(v___x_1512_);
lean_dec(v___x_1500_);
v_a_1565_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1565_);
v_a_1566_ = lean_ctor_get(v___x_1517_, 1);
lean_inc(v_a_1566_);
lean_dec_ref_known(v___x_1517_, 2);
v___x_1567_ = lean_box(0);
v___x_1568_ = l_Lake_Job_sync___redArg___lam__0(v___x_1514_, v___x_1515_, v___x_1567_, v_a_1566_);
v_a_1569_ = lean_ctor_get(v___x_1568_, 1);
lean_inc(v_a_1569_);
lean_dec_ref(v___x_1568_);
v_a_1509_ = v_a_1565_;
v_a_1510_ = v_a_1569_;
goto v___jp_1508_;
}
v___jp_1508_:
{
lean_object* v___x_1511_; 
v___x_1511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1511_, 0, v_a_1509_);
lean_ctor_set(v___x_1511_, 1, v_a_1510_);
return v___x_1511_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg___lam__1___boxed(lean_object* v___x_1570_, lean_object* v___x_1571_, lean_object* v___x_1572_, lean_object* v___x_1573_, lean_object* v___x_1574_, lean_object* v___x_1575_, lean_object* v_act_1576_, lean_object* v_a_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
uint8_t v___x_31964__boxed_1583_; uint8_t v___x_31965__boxed_1584_; lean_object* v_res_1585_; 
v___x_31964__boxed_1583_ = lean_unbox(v___x_1572_);
v___x_31965__boxed_1584_ = lean_unbox(v___x_1573_);
v_res_1585_ = l_Lake_Job_async___redArg___lam__1(v___x_1570_, v___x_1571_, v___x_31964__boxed_1583_, v___x_31965__boxed_1584_, v___x_1574_, v___x_1575_, v_act_1576_, v_a_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
lean_dec_ref(v___y_1581_);
lean_dec(v___y_1580_);
lean_dec(v___y_1579_);
lean_dec(v___y_1578_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg(lean_object* v_inst_1586_, lean_object* v_act_1587_, lean_object* v_prio_1588_, lean_object* v_caption_1589_, lean_object* v_a_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_){
_start:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; uint8_t v___x_1599_; uint8_t v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___f_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1596_ = lean_unsigned_to_nat(0u);
v___x_1597_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__0, &l_Lake_Job_sync___redArg___closed__0_once, _init_l_Lake_Job_sync___redArg___closed__0);
v___x_1598_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_1599_ = 0;
v___x_1600_ = 0;
v___x_1601_ = lean_obj_once(&l_Lake_takeTrace___redArg___closed__1, &l_Lake_takeTrace___redArg___closed__1_once, _init_l_Lake_takeTrace___redArg___closed__1);
v___x_1602_ = lean_box(v___x_1599_);
v___x_1603_ = lean_box(v___x_1600_);
lean_inc_ref(v___y_1594_);
lean_inc(v___y_1593_);
lean_inc(v___y_1592_);
lean_inc(v___y_1591_);
v___f_1604_ = lean_alloc_closure((void*)(l_Lake_Job_async___redArg___lam__1___boxed), 13, 12);
lean_closure_set(v___f_1604_, 0, v___x_1597_);
lean_closure_set(v___f_1604_, 1, v___x_1598_);
lean_closure_set(v___f_1604_, 2, v___x_1602_);
lean_closure_set(v___f_1604_, 3, v___x_1603_);
lean_closure_set(v___f_1604_, 4, v___x_1601_);
lean_closure_set(v___f_1604_, 5, v___x_1596_);
lean_closure_set(v___f_1604_, 6, v_act_1587_);
lean_closure_set(v___f_1604_, 7, v_a_1590_);
lean_closure_set(v___f_1604_, 8, v___y_1591_);
lean_closure_set(v___f_1604_, 9, v___y_1592_);
lean_closure_set(v___f_1604_, 10, v___y_1593_);
lean_closure_set(v___f_1604_, 11, v___y_1594_);
v___x_1605_ = lean_io_as_task(v___f_1604_, v_prio_1588_);
v___x_1606_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1606_, 0, v___x_1605_);
lean_ctor_set(v___x_1606_, 1, v_inst_1586_);
lean_ctor_set(v___x_1606_, 2, v_caption_1589_);
lean_ctor_set_uint8(v___x_1606_, sizeof(void*)*3, v___x_1600_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async___redArg___boxed(lean_object* v_inst_1607_, lean_object* v_act_1608_, lean_object* v_prio_1609_, lean_object* v_caption_1610_, lean_object* v_a_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Lake_Job_async___redArg(v_inst_1607_, v_act_1608_, v_prio_1609_, v_caption_1610_, v_a_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec(v___y_1612_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async(lean_object* v_00_u03b1_1618_, lean_object* v_inst_1619_, lean_object* v_act_1620_, lean_object* v_prio_1621_, lean_object* v_caption_1622_, lean_object* v_a_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = l_Lake_Job_async___redArg(v_inst_1619_, v_act_1620_, v_prio_1621_, v_caption_1622_, v_a_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_async___boxed(lean_object* v_00_u03b1_1631_, lean_object* v_inst_1632_, lean_object* v_act_1633_, lean_object* v_prio_1634_, lean_object* v_caption_1635_, lean_object* v_a_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l_Lake_Job_async(v_00_u03b1_1631_, v_inst_1632_, v_act_1633_, v_prio_1634_, v_caption_1635_, v_a_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
lean_dec_ref(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec(v___y_1637_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait___redArg(lean_object* v_self_1644_){
_start:
{
lean_object* v_task_1646_; lean_object* v___x_1647_; 
v_task_1646_ = lean_ctor_get(v_self_1644_, 0);
lean_inc_ref(v_task_1646_);
lean_dec_ref(v_self_1644_);
v___x_1647_ = lean_io_wait(v_task_1646_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait___redArg___boxed(lean_object* v_self_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lake_Job_wait___redArg(v_self_1648_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait(lean_object* v_00_u03b1_1651_, lean_object* v_self_1652_){
_start:
{
lean_object* v_task_1654_; lean_object* v___x_1655_; 
v_task_1654_ = lean_ctor_get(v_self_1652_, 0);
lean_inc_ref(v_task_1654_);
lean_dec_ref(v_self_1652_);
v___x_1655_ = lean_io_wait(v_task_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait___boxed(lean_object* v_00_u03b1_1656_, lean_object* v_self_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lake_Job_wait(v_00_u03b1_1656_, v_self_1657_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f___redArg(lean_object* v_self_1660_){
_start:
{
lean_object* v_task_1662_; lean_object* v___x_1663_; 
v_task_1662_ = lean_ctor_get(v_self_1660_, 0);
lean_inc_ref(v_task_1662_);
lean_dec_ref(v_self_1660_);
v___x_1663_ = lean_io_wait(v_task_1662_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; lean_object* v___x_1665_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 2);
v___x_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1665_, 0, v_a_1664_);
return v___x_1665_;
}
else
{
lean_object* v___x_1666_; 
lean_dec_ref_known(v___x_1663_, 2);
v___x_1666_ = lean_box(0);
return v___x_1666_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f___redArg___boxed(lean_object* v_self_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l_Lake_Job_wait_x3f___redArg(v_self_1667_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f(lean_object* v_00_u03b1_1670_, lean_object* v_self_1671_){
_start:
{
lean_object* v_task_1673_; lean_object* v___x_1674_; 
v_task_1673_ = lean_ctor_get(v_self_1671_, 0);
lean_inc_ref(v_task_1673_);
lean_dec_ref(v_self_1671_);
v___x_1674_ = lean_io_wait(v_task_1673_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; lean_object* v___x_1676_; 
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
lean_inc(v_a_1675_);
lean_dec_ref_known(v___x_1674_, 2);
v___x_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1676_, 0, v_a_1675_);
return v___x_1676_;
}
else
{
lean_object* v___x_1677_; 
lean_dec_ref_known(v___x_1674_, 2);
v___x_1677_ = lean_box(0);
return v___x_1677_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_wait_x3f___boxed(lean_object* v_00_u03b1_1678_, lean_object* v_self_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_Lake_Job_wait_x3f(v_00_u03b1_1678_, v_self_1679_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0(lean_object* v_as_1682_, size_t v_i_1683_, size_t v_stop_1684_, lean_object* v_b_1685_, lean_object* v___y_1686_){
_start:
{
uint8_t v___x_1688_; 
v___x_1688_ = lean_usize_dec_eq(v_i_1683_, v_stop_1684_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; size_t v___x_1692_; size_t v___x_1693_; 
v___x_1689_ = lean_array_uget_borrowed(v_as_1682_, v_i_1683_);
v___x_1690_ = lean_box(0);
lean_inc(v___x_1689_);
v___x_1691_ = lean_array_push(v___y_1686_, v___x_1689_);
v___x_1692_ = ((size_t)1ULL);
v___x_1693_ = lean_usize_add(v_i_1683_, v___x_1692_);
v_i_1683_ = v___x_1693_;
v_b_1685_ = v___x_1690_;
v___y_1686_ = v___x_1691_;
goto _start;
}
else
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1695_, 0, v_b_1685_);
lean_ctor_set(v___x_1695_, 1, v___y_1686_);
return v___x_1695_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0___boxed(lean_object* v_as_1696_, lean_object* v_i_1697_, lean_object* v_stop_1698_, lean_object* v_b_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
size_t v_i_boxed_1702_; size_t v_stop_boxed_1703_; lean_object* v_res_1704_; 
v_i_boxed_1702_ = lean_unbox_usize(v_i_1697_);
lean_dec(v_i_1697_);
v_stop_boxed_1703_ = lean_unbox_usize(v_stop_1698_);
lean_dec(v_stop_1698_);
v_res_1704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0(v_as_1696_, v_i_boxed_1702_, v_stop_boxed_1703_, v_b_1699_, v___y_1700_);
lean_dec_ref(v_as_1696_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_await___redArg(lean_object* v_self_1705_, lean_object* v_a_1706_){
_start:
{
lean_object* v_task_1708_; lean_object* v___x_1709_; 
v_task_1708_ = lean_ctor_get(v_self_1705_, 0);
lean_inc_ref(v_task_1708_);
lean_dec_ref(v_self_1705_);
v___x_1709_ = lean_io_wait(v_task_1708_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1738_; 
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
v_a_1711_ = lean_ctor_get(v___x_1709_, 1);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1713_ = v___x_1709_;
v_isShared_1714_ = v_isSharedCheck_1738_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_inc(v_a_1710_);
lean_dec(v___x_1709_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1738_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v_a_1716_; lean_object* v_log_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; uint8_t v___x_1723_; 
v_log_1720_ = lean_ctor_get(v_a_1711_, 0);
lean_inc_ref(v_log_1720_);
lean_dec(v_a_1711_);
v___x_1721_ = lean_unsigned_to_nat(0u);
v___x_1722_ = lean_array_get_size(v_log_1720_);
v___x_1723_ = lean_nat_dec_lt(v___x_1721_, v___x_1722_);
if (v___x_1723_ == 0)
{
lean_dec_ref(v_log_1720_);
v_a_1716_ = v_a_1706_;
goto v___jp_1715_;
}
else
{
lean_object* v___x_1724_; size_t v___x_1725_; size_t v___x_1726_; lean_object* v___x_1727_; 
v___x_1724_ = lean_box(0);
v___x_1725_ = ((size_t)0ULL);
v___x_1726_ = lean_usize_of_nat(v___x_1722_);
v___x_1727_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0(v_log_1720_, v___x_1725_, v___x_1726_, v___x_1724_, v_a_1706_);
lean_dec_ref(v_log_1720_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 1);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___x_1727_, 2);
v_a_1716_ = v_a_1728_;
goto v___jp_1715_;
}
else
{
lean_object* v_a_1729_; lean_object* v_a_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1737_; 
lean_del_object(v___x_1713_);
lean_dec(v_a_1710_);
v_a_1729_ = lean_ctor_get(v___x_1727_, 0);
v_a_1730_ = lean_ctor_get(v___x_1727_, 1);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1732_ = v___x_1727_;
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_a_1730_);
lean_inc(v_a_1729_);
lean_dec(v___x_1727_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1733_ == 0)
{
v___x_1735_ = v___x_1732_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_a_1729_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_a_1730_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
}
v___jp_1715_:
{
lean_object* v___x_1718_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 1, v_a_1716_);
v___x_1718_ = v___x_1713_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1710_);
lean_ctor_set(v_reuseFailAlloc_1719_, 1, v_a_1716_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
else
{
lean_object* v_a_1739_; lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1767_; 
v_a_1739_ = lean_ctor_get(v___x_1709_, 0);
v_a_1740_ = lean_ctor_get(v___x_1709_, 1);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1742_ = v___x_1709_;
v_isShared_1743_ = v_isSharedCheck_1767_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_inc(v_a_1739_);
lean_dec(v___x_1709_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1767_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v_a_1745_; lean_object* v_log_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; uint8_t v___x_1752_; 
v_log_1749_ = lean_ctor_get(v_a_1740_, 0);
lean_inc_ref(v_log_1749_);
lean_dec(v_a_1740_);
v___x_1750_ = lean_unsigned_to_nat(0u);
v___x_1751_ = lean_array_get_size(v_log_1749_);
v___x_1752_ = lean_nat_dec_lt(v___x_1750_, v___x_1751_);
if (v___x_1752_ == 0)
{
lean_dec_ref(v_log_1749_);
v_a_1745_ = v_a_1706_;
goto v___jp_1744_;
}
else
{
lean_object* v___x_1753_; size_t v___x_1754_; size_t v___x_1755_; lean_object* v___x_1756_; 
v___x_1753_ = lean_box(0);
v___x_1754_ = ((size_t)0ULL);
v___x_1755_ = lean_usize_of_nat(v___x_1751_);
v___x_1756_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_await_spec__0(v_log_1749_, v___x_1754_, v___x_1755_, v___x_1753_, v_a_1706_);
lean_dec_ref(v_log_1749_);
if (lean_obj_tag(v___x_1756_) == 0)
{
lean_object* v_a_1757_; 
v_a_1757_ = lean_ctor_get(v___x_1756_, 1);
lean_inc(v_a_1757_);
lean_dec_ref_known(v___x_1756_, 2);
v_a_1745_ = v_a_1757_;
goto v___jp_1744_;
}
else
{
lean_object* v_a_1758_; lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
lean_del_object(v___x_1742_);
lean_dec(v_a_1739_);
v_a_1758_ = lean_ctor_get(v___x_1756_, 0);
v_a_1759_ = lean_ctor_get(v___x_1756_, 1);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1756_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1756_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_inc(v_a_1758_);
lean_dec(v___x_1756_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1758_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
v___jp_1744_:
{
lean_object* v___x_1747_; 
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 1, v_a_1745_);
v___x_1747_ = v___x_1742_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1739_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v_a_1745_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_await___redArg___boxed(lean_object* v_self_1768_, lean_object* v_a_1769_, lean_object* v___y_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lake_Job_await___redArg(v_self_1768_, v_a_1769_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_await(lean_object* v_00_u03b1_1772_, lean_object* v_self_1773_, lean_object* v_a_1774_){
_start:
{
lean_object* v___x_1776_; 
v___x_1776_ = l_Lake_Job_await___redArg(v_self_1773_, v_a_1774_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_await___boxed(lean_object* v_00_u03b1_1777_, lean_object* v_self_1778_, lean_object* v_a_1779_, lean_object* v___y_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l_Lake_Job_await(v_00_u03b1_1777_, v_self_1778_, v_a_1779_);
return v_res_1781_;
}
}
static lean_object* _init_l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0(void){
_start:
{
lean_object* v___x_1782_; uint8_t v___x_1783_; lean_object* v___x_1784_; 
v___x_1782_ = l_Lake_cancelMessage;
v___x_1783_ = 0;
v___x_1784_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1784_, 0, v___x_1782_);
lean_ctor_set_uint8(v___x_1784_, sizeof(void*)*1, v___x_1783_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg(lean_object* v_s_1785_){
_start:
{
lean_object* v_log_1786_; uint8_t v_action_1787_; uint8_t v_wantsRebuild_1788_; lean_object* v_trace_1789_; lean_object* v_buildTime_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1801_; 
v_log_1786_ = lean_ctor_get(v_s_1785_, 0);
v_action_1787_ = lean_ctor_get_uint8(v_s_1785_, sizeof(void*)*3);
v_wantsRebuild_1788_ = lean_ctor_get_uint8(v_s_1785_, sizeof(void*)*3 + 1);
v_trace_1789_ = lean_ctor_get(v_s_1785_, 1);
v_buildTime_1790_ = lean_ctor_get(v_s_1785_, 2);
v_isSharedCheck_1801_ = !lean_is_exclusive(v_s_1785_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1792_ = v_s_1785_;
v_isShared_1793_ = v_isSharedCheck_1801_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_buildTime_1790_);
lean_inc(v_trace_1789_);
lean_inc(v_log_1786_);
lean_dec(v_s_1785_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1801_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1798_; 
v___x_1794_ = lean_array_get_size(v_log_1786_);
v___x_1795_ = lean_obj_once(&l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0, &l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0_once, _init_l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0);
v___x_1796_ = lean_array_push(v_log_1786_, v___x_1795_);
if (v_isShared_1793_ == 0)
{
lean_ctor_set(v___x_1792_, 0, v___x_1796_);
v___x_1798_ = v___x_1792_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v___x_1796_);
lean_ctor_set(v_reuseFailAlloc_1800_, 1, v_trace_1789_);
lean_ctor_set(v_reuseFailAlloc_1800_, 2, v_buildTime_1790_);
lean_ctor_set_uint8(v_reuseFailAlloc_1800_, sizeof(void*)*3, v_action_1787_);
lean_ctor_set_uint8(v_reuseFailAlloc_1800_, sizeof(void*)*3 + 1, v_wantsRebuild_1788_);
v___x_1798_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1794_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
return v___x_1799_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult(lean_object* v_00_u03b1_1802_, lean_object* v_s_1803_){
_start:
{
lean_object* v_log_1804_; uint8_t v_action_1805_; uint8_t v_wantsRebuild_1806_; lean_object* v_trace_1807_; lean_object* v_buildTime_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1819_; 
v_log_1804_ = lean_ctor_get(v_s_1803_, 0);
v_action_1805_ = lean_ctor_get_uint8(v_s_1803_, sizeof(void*)*3);
v_wantsRebuild_1806_ = lean_ctor_get_uint8(v_s_1803_, sizeof(void*)*3 + 1);
v_trace_1807_ = lean_ctor_get(v_s_1803_, 1);
v_buildTime_1808_ = lean_ctor_get(v_s_1803_, 2);
v_isSharedCheck_1819_ = !lean_is_exclusive(v_s_1803_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1810_ = v_s_1803_;
v_isShared_1811_ = v_isSharedCheck_1819_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_buildTime_1808_);
lean_inc(v_trace_1807_);
lean_inc(v_log_1804_);
lean_dec(v_s_1803_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1819_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1816_; 
v___x_1812_ = lean_array_get_size(v_log_1804_);
v___x_1813_ = lean_obj_once(&l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0, &l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0_once, _init_l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0);
v___x_1814_ = lean_array_push(v_log_1804_, v___x_1813_);
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 0, v___x_1814_);
v___x_1816_ = v___x_1810_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v___x_1814_);
lean_ctor_set(v_reuseFailAlloc_1818_, 1, v_trace_1807_);
lean_ctor_set(v_reuseFailAlloc_1818_, 2, v_buildTime_1808_);
lean_ctor_set_uint8(v_reuseFailAlloc_1818_, sizeof(void*)*3, v_action_1805_);
lean_ctor_set_uint8(v_reuseFailAlloc_1818_, sizeof(void*)*3 + 1, v_wantsRebuild_1806_);
v___x_1816_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
lean_object* v___x_1817_; 
v___x_1817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1812_);
lean_ctor_set(v___x_1817_, 1, v___x_1816_);
return v___x_1817_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg___lam__1(lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v_f_1822_, lean_object* v_a_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v_x_1827_){
_start:
{
lean_object* v_a_1830_; lean_object* v_a_1831_; lean_object* v___y_1834_; lean_object* v___y_1835_; lean_object* v___y_1838_; lean_object* v___y_1839_; lean_object* v___y_1840_; uint8_t v___y_1841_; lean_object* v___y_1842_; lean_object* v___y_1843_; uint8_t v___y_1844_; lean_object* v___y_1845_; lean_object* v___y_1846_; 
if (lean_obj_tag(v_x_1827_) == 0)
{
lean_object* v_a_1858_; lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1926_; 
v_a_1858_ = lean_ctor_get(v_x_1827_, 0);
v_a_1859_ = lean_ctor_get(v_x_1827_, 1);
v_isSharedCheck_1926_ = !lean_is_exclusive(v_x_1827_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1861_ = v_x_1827_;
v_isShared_1862_ = v_isSharedCheck_1926_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_inc(v_a_1858_);
lean_dec(v_x_1827_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1926_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v_cancelTk_x3f_1905_; 
v_cancelTk_x3f_1905_ = lean_ctor_get(v___y_1820_, 6);
if (lean_obj_tag(v_cancelTk_x3f_1905_) == 1)
{
lean_object* v_val_1906_; uint8_t v___x_1907_; 
v_val_1906_ = lean_ctor_get(v_cancelTk_x3f_1905_, 0);
v___x_1907_ = l_IO_CancelToken_isSet(v_val_1906_);
if (v___x_1907_ == 0)
{
lean_del_object(v___x_1861_);
goto v___jp_1863_;
}
else
{
lean_object* v_log_1908_; uint8_t v_action_1909_; uint8_t v_wantsRebuild_1910_; lean_object* v_trace_1911_; lean_object* v_buildTime_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1925_; 
lean_dec(v_a_1858_);
lean_dec_ref(v_a_1823_);
lean_dec_ref(v_f_1822_);
v_log_1908_ = lean_ctor_get(v_a_1859_, 0);
v_action_1909_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3);
v_wantsRebuild_1910_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 1);
v_trace_1911_ = lean_ctor_get(v_a_1859_, 1);
v_buildTime_1912_ = lean_ctor_get(v_a_1859_, 2);
v_isSharedCheck_1925_ = !lean_is_exclusive(v_a_1859_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1914_ = v_a_1859_;
v_isShared_1915_ = v_isSharedCheck_1925_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_buildTime_1912_);
lean_inc(v_trace_1911_);
lean_inc(v_log_1908_);
lean_dec(v_a_1859_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1925_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1920_; 
v___x_1916_ = lean_array_get_size(v_log_1908_);
v___x_1917_ = lean_obj_once(&l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0, &l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0_once, _init_l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0);
v___x_1918_ = lean_array_push(v_log_1908_, v___x_1917_);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 0, v___x_1918_);
v___x_1920_ = v___x_1914_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v___x_1918_);
lean_ctor_set(v_reuseFailAlloc_1924_, 1, v_trace_1911_);
lean_ctor_set(v_reuseFailAlloc_1924_, 2, v_buildTime_1912_);
lean_ctor_set_uint8(v_reuseFailAlloc_1924_, sizeof(void*)*3, v_action_1909_);
lean_ctor_set_uint8(v_reuseFailAlloc_1924_, sizeof(void*)*3 + 1, v_wantsRebuild_1910_);
v___x_1920_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
lean_object* v___x_1922_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set_tag(v___x_1861_, 1);
lean_ctor_set(v___x_1861_, 1, v___x_1920_);
lean_ctor_set(v___x_1861_, 0, v___x_1916_);
v___x_1922_ = v___x_1861_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v___x_1916_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v___x_1920_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
}
else
{
lean_del_object(v___x_1861_);
goto v___jp_1863_;
}
v___jp_1863_:
{
lean_object* v_log_1864_; uint8_t v_action_1865_; uint8_t v_wantsRebuild_1866_; lean_object* v_trace_1867_; lean_object* v_buildTime_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1904_; 
v_log_1864_ = lean_ctor_get(v_a_1859_, 0);
v_action_1865_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3);
v_wantsRebuild_1866_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 1);
v_trace_1867_ = lean_ctor_get(v_a_1859_, 1);
v_buildTime_1868_ = lean_ctor_get(v_a_1859_, 2);
v_isSharedCheck_1904_ = !lean_is_exclusive(v_a_1859_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1870_ = v_a_1859_;
v_isShared_1871_ = v_isSharedCheck_1904_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_buildTime_1868_);
lean_inc(v_trace_1867_);
lean_inc(v_log_1864_);
lean_dec(v_a_1859_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1904_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v_trace_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1880_; 
lean_inc_ref(v___y_1821_);
v_trace_1872_ = l_Lake_BuildTrace_mix(v___y_1821_, v_trace_1867_);
v___x_1873_ = lean_unsigned_to_nat(0u);
v___x_1874_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__0, &l_Lake_Job_sync___redArg___closed__0_once, _init_l_Lake_Job_sync___redArg___closed__0);
v___x_1875_ = lean_st_mk_ref(v___x_1874_);
lean_inc(v___x_1875_);
v___x_1876_ = l_IO_FS_Stream_ofBuffer(v___x_1875_);
lean_inc_ref(v___x_1876_);
v___x_1877_ = lean_get_set_stdout(v___x_1876_);
v___x_1878_ = lean_get_set_stderr(v___x_1876_);
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 1, v_trace_1872_);
v___x_1880_ = v___x_1870_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_log_1864_);
lean_ctor_set(v_reuseFailAlloc_1903_, 1, v_trace_1872_);
lean_ctor_set(v_reuseFailAlloc_1903_, 2, v_buildTime_1868_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*3, v_action_1865_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*3 + 1, v_wantsRebuild_1866_);
v___x_1880_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
lean_object* v___x_1881_; 
lean_inc_ref(v___y_1820_);
lean_inc(v___y_1826_);
lean_inc(v___y_1825_);
lean_inc(v___y_1824_);
v___x_1881_ = lean_apply_8(v_f_1822_, v_a_1858_, v_a_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1820_, v___x_1880_, lean_box(0));
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v_a_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v_a_1886_; lean_object* v_log_1887_; uint8_t v_action_1888_; uint8_t v_wantsRebuild_1889_; lean_object* v_trace_1890_; lean_object* v_buildTime_1891_; lean_object* v___x_1892_; lean_object* v_data_1893_; uint8_t v___x_1894_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc_n(v_a_1882_, 2);
v_a_1883_ = lean_ctor_get(v___x_1881_, 1);
lean_inc(v_a_1883_);
lean_dec_ref_known(v___x_1881_, 2);
v___x_1884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1884_, 0, v_a_1882_);
v___x_1885_ = l_Lake_Job_sync___redArg___lam__0(v___x_1877_, v___x_1878_, v___x_1884_, v_a_1883_);
lean_dec_ref_known(v___x_1884_, 1);
v_a_1886_ = lean_ctor_get(v___x_1885_, 1);
lean_inc(v_a_1886_);
lean_dec_ref(v___x_1885_);
v_log_1887_ = lean_ctor_get(v_a_1886_, 0);
lean_inc_ref(v_log_1887_);
v_action_1888_ = lean_ctor_get_uint8(v_a_1886_, sizeof(void*)*3);
v_wantsRebuild_1889_ = lean_ctor_get_uint8(v_a_1886_, sizeof(void*)*3 + 1);
v_trace_1890_ = lean_ctor_get(v_a_1886_, 1);
lean_inc_ref(v_trace_1890_);
v_buildTime_1891_ = lean_ctor_get(v_a_1886_, 2);
lean_inc(v_buildTime_1891_);
v___x_1892_ = lean_st_ref_get(v___x_1875_);
lean_dec(v___x_1875_);
v_data_1893_ = lean_ctor_get(v___x_1892_, 0);
lean_inc_ref(v_data_1893_);
lean_dec(v___x_1892_);
v___x_1894_ = lean_string_validate_utf8(v_data_1893_);
if (v___x_1894_ == 0)
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
lean_dec_ref(v_data_1893_);
v___x_1895_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__7, &l_Lake_Job_sync___redArg___closed__7_once, _init_l_Lake_Job_sync___redArg___closed__7);
v___x_1896_ = l_panic___at___00Lake_Job_sync_spec__0(v___x_1895_);
v___y_1838_ = v_trace_1890_;
v___y_1839_ = v_buildTime_1891_;
v___y_1840_ = v___x_1873_;
v___y_1841_ = v_action_1888_;
v___y_1842_ = v_a_1882_;
v___y_1843_ = v_a_1886_;
v___y_1844_ = v_wantsRebuild_1889_;
v___y_1845_ = v_log_1887_;
v___y_1846_ = v___x_1896_;
goto v___jp_1837_;
}
else
{
lean_object* v___x_1897_; 
v___x_1897_ = lean_string_from_utf8_unchecked(v_data_1893_);
v___y_1838_ = v_trace_1890_;
v___y_1839_ = v_buildTime_1891_;
v___y_1840_ = v___x_1873_;
v___y_1841_ = v_action_1888_;
v___y_1842_ = v_a_1882_;
v___y_1843_ = v_a_1886_;
v___y_1844_ = v_wantsRebuild_1889_;
v___y_1845_ = v_log_1887_;
v___y_1846_ = v___x_1897_;
goto v___jp_1837_;
}
}
else
{
lean_object* v_a_1898_; lean_object* v_a_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v_a_1902_; 
lean_dec(v___x_1875_);
v_a_1898_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1898_);
v_a_1899_ = lean_ctor_get(v___x_1881_, 1);
lean_inc(v_a_1899_);
lean_dec_ref_known(v___x_1881_, 2);
v___x_1900_ = lean_box(0);
v___x_1901_ = l_Lake_Job_sync___redArg___lam__0(v___x_1877_, v___x_1878_, v___x_1900_, v_a_1899_);
v_a_1902_ = lean_ctor_get(v___x_1901_, 1);
lean_inc(v_a_1902_);
lean_dec_ref(v___x_1901_);
v_a_1830_ = v_a_1898_;
v_a_1831_ = v_a_1902_;
goto v___jp_1829_;
}
}
}
}
}
}
else
{
lean_object* v_a_1927_; lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec_ref(v_a_1823_);
lean_dec_ref(v_f_1822_);
v_a_1927_ = lean_ctor_get(v_x_1827_, 0);
v_a_1928_ = lean_ctor_get(v_x_1827_, 1);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_x_1827_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v_x_1827_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_inc(v_a_1927_);
lean_dec(v_x_1827_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1927_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
v___jp_1829_:
{
lean_object* v___x_1832_; 
v___x_1832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1832_, 0, v_a_1830_);
lean_ctor_set(v___x_1832_, 1, v_a_1831_);
return v___x_1832_;
}
v___jp_1833_:
{
lean_object* v___x_1836_; 
v___x_1836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1836_, 0, v___y_1834_);
lean_ctor_set(v___x_1836_, 1, v___y_1835_);
return v___x_1836_;
}
v___jp_1837_:
{
lean_object* v___x_1847_; uint8_t v___x_1848_; 
v___x_1847_ = lean_string_utf8_byte_size(v___y_1846_);
v___x_1848_ = lean_nat_dec_eq(v___x_1847_, v___y_1840_);
if (v___x_1848_ == 0)
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; uint8_t v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
lean_dec_ref(v___y_1843_);
v___x_1849_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__3));
v___x_1850_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1850_, 0, v___y_1846_);
lean_ctor_set(v___x_1850_, 1, v___y_1840_);
lean_ctor_set(v___x_1850_, 2, v___x_1847_);
v___x_1851_ = l_String_Slice_trimAscii(v___x_1850_);
v___x_1852_ = l_String_Slice_toString(v___x_1851_);
lean_dec_ref(v___x_1851_);
v___x_1853_ = lean_string_append(v___x_1849_, v___x_1852_);
lean_dec_ref(v___x_1852_);
v___x_1854_ = 1;
v___x_1855_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1855_, 0, v___x_1853_);
lean_ctor_set_uint8(v___x_1855_, sizeof(void*)*1, v___x_1854_);
v___x_1856_ = lean_array_push(v___y_1845_, v___x_1855_);
v___x_1857_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1857_, 0, v___x_1856_);
lean_ctor_set(v___x_1857_, 1, v___y_1838_);
lean_ctor_set(v___x_1857_, 2, v___y_1839_);
lean_ctor_set_uint8(v___x_1857_, sizeof(void*)*3, v___y_1841_);
lean_ctor_set_uint8(v___x_1857_, sizeof(void*)*3 + 1, v___y_1844_);
v___y_1834_ = v___y_1842_;
v___y_1835_ = v___x_1857_;
goto v___jp_1833_;
}
else
{
lean_dec_ref(v___y_1846_);
lean_dec_ref(v___y_1845_);
lean_dec(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
v___y_1834_ = v___y_1842_;
v___y_1835_ = v___y_1843_;
goto v___jp_1833_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg___lam__1___boxed(lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v_f_1938_, lean_object* v_a_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v_x_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lake_Job_mapM___redArg___lam__1(v___y_1936_, v___y_1937_, v_f_1938_, v_a_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v_x_1943_);
lean_dec(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1937_);
lean_dec_ref(v___y_1936_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg(lean_object* v_kind_1946_, lean_object* v_self_1947_, lean_object* v_f_1948_, lean_object* v_prio_1949_, uint8_t v_sync_1950_, lean_object* v_a_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_){
_start:
{
lean_object* v_task_1958_; lean_object* v_caption_1959_; uint8_t v_optional_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1969_; 
v_task_1958_ = lean_ctor_get(v_self_1947_, 0);
v_caption_1959_ = lean_ctor_get(v_self_1947_, 2);
v_optional_1960_ = lean_ctor_get_uint8(v_self_1947_, sizeof(void*)*3);
v_isSharedCheck_1969_ = !lean_is_exclusive(v_self_1947_);
if (v_isSharedCheck_1969_ == 0)
{
lean_object* v_unused_1970_; 
v_unused_1970_ = lean_ctor_get(v_self_1947_, 1);
lean_dec(v_unused_1970_);
v___x_1962_ = v_self_1947_;
v_isShared_1963_ = v_isSharedCheck_1969_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_caption_1959_);
lean_inc(v_task_1958_);
lean_dec(v_self_1947_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1969_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___f_1964_; lean_object* v___x_1965_; lean_object* v___x_1967_; 
lean_inc(v___y_1954_);
lean_inc(v___y_1953_);
lean_inc(v___y_1952_);
lean_inc_ref(v___y_1956_);
lean_inc_ref(v___y_1955_);
v___f_1964_ = lean_alloc_closure((void*)(l_Lake_Job_mapM___redArg___lam__1___boxed), 9, 7);
lean_closure_set(v___f_1964_, 0, v___y_1955_);
lean_closure_set(v___f_1964_, 1, v___y_1956_);
lean_closure_set(v___f_1964_, 2, v_f_1948_);
lean_closure_set(v___f_1964_, 3, v_a_1951_);
lean_closure_set(v___f_1964_, 4, v___y_1952_);
lean_closure_set(v___f_1964_, 5, v___y_1953_);
lean_closure_set(v___f_1964_, 6, v___y_1954_);
v___x_1965_ = lean_io_map_task(v___f_1964_, v_task_1958_, v_prio_1949_, v_sync_1950_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 1, v_kind_1946_);
lean_ctor_set(v___x_1962_, 0, v___x_1965_);
v___x_1967_ = v___x_1962_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v___x_1965_);
lean_ctor_set(v_reuseFailAlloc_1968_, 1, v_kind_1946_);
lean_ctor_set(v_reuseFailAlloc_1968_, 2, v_caption_1959_);
lean_ctor_set_uint8(v_reuseFailAlloc_1968_, sizeof(void*)*3, v_optional_1960_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM___redArg___boxed(lean_object* v_kind_1971_, lean_object* v_self_1972_, lean_object* v_f_1973_, lean_object* v_prio_1974_, lean_object* v_sync_1975_, lean_object* v_a_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
uint8_t v_sync_boxed_1983_; lean_object* v_res_1984_; 
v_sync_boxed_1983_ = lean_unbox(v_sync_1975_);
v_res_1984_ = l_Lake_Job_mapM___redArg(v_kind_1971_, v_self_1972_, v_f_1973_, v_prio_1974_, v_sync_boxed_1983_, v_a_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
lean_dec_ref(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec(v___y_1978_);
lean_dec(v___y_1977_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM(lean_object* v_00_u03b2_1985_, lean_object* v_00_u03b1_1986_, lean_object* v_kind_1987_, lean_object* v_self_1988_, lean_object* v_f_1989_, lean_object* v_prio_1990_, uint8_t v_sync_1991_, lean_object* v_a_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_){
_start:
{
lean_object* v___x_1999_; 
v___x_1999_ = l_Lake_Job_mapM___redArg(v_kind_1987_, v_self_1988_, v_f_1989_, v_prio_1990_, v_sync_1991_, v_a_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mapM___boxed(lean_object* v_00_u03b2_2000_, lean_object* v_00_u03b1_2001_, lean_object* v_kind_2002_, lean_object* v_self_2003_, lean_object* v_f_2004_, lean_object* v_prio_2005_, lean_object* v_sync_2006_, lean_object* v_a_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
uint8_t v_sync_boxed_2014_; lean_object* v_res_2015_; 
v_sync_boxed_2014_ = lean_unbox(v_sync_2006_);
v_res_2015_ = l_Lake_Job_mapM(v_00_u03b2_2000_, v_00_u03b1_2001_, v_kind_2002_, v_self_2003_, v_f_2004_, v_prio_2005_, v_sync_boxed_2014_, v_a_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_);
lean_dec_ref(v___y_2012_);
lean_dec_ref(v___y_2011_);
lean_dec(v___y_2010_);
lean_dec(v___y_2009_);
lean_dec(v___y_2008_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__0(lean_object* v_a_2016_, lean_object* v_x_2017_){
_start:
{
if (lean_obj_tag(v_x_2017_) == 0)
{
lean_object* v_a_2018_; lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2041_; 
v_a_2018_ = lean_ctor_get(v_x_2017_, 0);
v_a_2019_ = lean_ctor_get(v_x_2017_, 1);
v_isSharedCheck_2041_ = !lean_is_exclusive(v_x_2017_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2021_ = v_x_2017_;
v_isShared_2022_ = v_isSharedCheck_2041_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_inc(v_a_2018_);
lean_dec(v_x_2017_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2041_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2023_; lean_object* v_log_2024_; uint8_t v_action_2025_; uint8_t v_wantsRebuild_2026_; lean_object* v_buildTime_2027_; lean_object* v_trace_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2038_; 
lean_inc(v_a_2019_);
v___x_2023_ = l_Lake_JobState_merge(v_a_2016_, v_a_2019_);
v_log_2024_ = lean_ctor_get(v___x_2023_, 0);
lean_inc_ref(v_log_2024_);
v_action_2025_ = lean_ctor_get_uint8(v___x_2023_, sizeof(void*)*3);
v_wantsRebuild_2026_ = lean_ctor_get_uint8(v___x_2023_, sizeof(void*)*3 + 1);
v_buildTime_2027_ = lean_ctor_get(v___x_2023_, 2);
lean_inc(v_buildTime_2027_);
lean_dec_ref(v___x_2023_);
v_trace_2028_ = lean_ctor_get(v_a_2019_, 1);
v_isSharedCheck_2038_ = !lean_is_exclusive(v_a_2019_);
if (v_isSharedCheck_2038_ == 0)
{
lean_object* v_unused_2039_; lean_object* v_unused_2040_; 
v_unused_2039_ = lean_ctor_get(v_a_2019_, 2);
lean_dec(v_unused_2039_);
v_unused_2040_ = lean_ctor_get(v_a_2019_, 0);
lean_dec(v_unused_2040_);
v___x_2030_ = v_a_2019_;
v_isShared_2031_ = v_isSharedCheck_2038_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_trace_2028_);
lean_dec(v_a_2019_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2038_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2033_; 
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 2, v_buildTime_2027_);
lean_ctor_set(v___x_2030_, 0, v_log_2024_);
v___x_2033_ = v___x_2030_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_log_2024_);
lean_ctor_set(v_reuseFailAlloc_2037_, 1, v_trace_2028_);
lean_ctor_set(v_reuseFailAlloc_2037_, 2, v_buildTime_2027_);
v___x_2033_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
lean_object* v___x_2035_; 
lean_ctor_set_uint8(v___x_2033_, sizeof(void*)*3, v_action_2025_);
lean_ctor_set_uint8(v___x_2033_, sizeof(void*)*3 + 1, v_wantsRebuild_2026_);
if (v_isShared_2022_ == 0)
{
lean_ctor_set(v___x_2021_, 1, v___x_2033_);
v___x_2035_ = v___x_2021_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_a_2018_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v___x_2033_);
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
}
else
{
lean_object* v_a_2042_; lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2068_; 
v_a_2042_ = lean_ctor_get(v_x_2017_, 0);
v_a_2043_ = lean_ctor_get(v_x_2017_, 1);
v_isSharedCheck_2068_ = !lean_is_exclusive(v_x_2017_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2045_ = v_x_2017_;
v_isShared_2046_ = v_isSharedCheck_2068_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_inc(v_a_2042_);
lean_dec(v_x_2017_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2068_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v_log_2047_; lean_object* v___x_2048_; lean_object* v_log_2049_; uint8_t v_action_2050_; uint8_t v_wantsRebuild_2051_; lean_object* v_buildTime_2052_; lean_object* v_trace_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2065_; 
v_log_2047_ = lean_ctor_get(v_a_2016_, 0);
lean_inc_ref(v_log_2047_);
lean_inc(v_a_2043_);
v___x_2048_ = l_Lake_JobState_merge(v_a_2016_, v_a_2043_);
v_log_2049_ = lean_ctor_get(v___x_2048_, 0);
lean_inc_ref(v_log_2049_);
v_action_2050_ = lean_ctor_get_uint8(v___x_2048_, sizeof(void*)*3);
v_wantsRebuild_2051_ = lean_ctor_get_uint8(v___x_2048_, sizeof(void*)*3 + 1);
v_buildTime_2052_ = lean_ctor_get(v___x_2048_, 2);
lean_inc(v_buildTime_2052_);
lean_dec_ref(v___x_2048_);
v_trace_2053_ = lean_ctor_get(v_a_2043_, 1);
v_isSharedCheck_2065_ = !lean_is_exclusive(v_a_2043_);
if (v_isSharedCheck_2065_ == 0)
{
lean_object* v_unused_2066_; lean_object* v_unused_2067_; 
v_unused_2066_ = lean_ctor_get(v_a_2043_, 2);
lean_dec(v_unused_2066_);
v_unused_2067_ = lean_ctor_get(v_a_2043_, 0);
lean_dec(v_unused_2067_);
v___x_2055_ = v_a_2043_;
v_isShared_2056_ = v_isSharedCheck_2065_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_trace_2053_);
lean_dec(v_a_2043_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2065_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2060_; 
v___x_2057_ = lean_array_get_size(v_log_2047_);
lean_dec_ref(v_log_2047_);
v___x_2058_ = lean_nat_add(v___x_2057_, v_a_2042_);
lean_dec(v_a_2042_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 2, v_buildTime_2052_);
lean_ctor_set(v___x_2055_, 0, v_log_2049_);
v___x_2060_ = v___x_2055_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_log_2049_);
lean_ctor_set(v_reuseFailAlloc_2064_, 1, v_trace_2053_);
lean_ctor_set(v_reuseFailAlloc_2064_, 2, v_buildTime_2052_);
v___x_2060_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
lean_object* v___x_2062_; 
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*3, v_action_2050_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*3 + 1, v_wantsRebuild_2051_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2060_);
lean_ctor_set(v___x_2045_, 0, v___x_2058_);
v___x_2062_ = v___x_2045_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v___x_2058_);
lean_ctor_set(v_reuseFailAlloc_2063_, 1, v___x_2060_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__1(lean_object* v_val_2069_, lean_object* v_val_2070_, lean_object* v_a_x3f_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2074_ = lean_get_set_stdout(v_val_2069_);
lean_dec_ref(v___x_2074_);
v___x_2075_ = lean_box(0);
v___x_2076_ = lean_get_set_stderr(v_val_2070_);
lean_dec_ref(v___x_2076_);
v___x_2077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2075_);
lean_ctor_set(v___x_2077_, 1, v___y_2072_);
return v___x_2077_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__1___boxed(lean_object* v_val_2078_, lean_object* v_val_2079_, lean_object* v_a_x3f_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l_Lake_Job_bindM___redArg___lam__1(v_val_2078_, v_val_2079_, v_a_x3f_2080_, v___y_2081_);
lean_dec(v_a_x3f_2080_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__2(lean_object* v_a_2084_, lean_object* v_____r_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v___x_2093_; 
v___x_2093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2093_, 0, v_a_2084_);
lean_ctor_set(v___x_2093_, 1, v___y_2091_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__2___boxed(lean_object* v_a_2094_, lean_object* v_____r_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l_Lake_Job_bindM___redArg___lam__2(v_a_2094_, v_____r_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec(v___y_2099_);
lean_dec(v___y_2098_);
lean_dec(v___y_2097_);
lean_dec_ref(v___y_2096_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__3(lean_object* v___y_2104_, lean_object* v_prio_2105_, lean_object* v_a_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v_f_2111_, lean_object* v_x_2112_){
_start:
{
lean_object* v_a_2115_; lean_object* v_a_2116_; lean_object* v___y_2120_; lean_object* v___y_2130_; uint8_t v___y_2131_; uint8_t v___y_2132_; lean_object* v___y_2133_; lean_object* v___y_2134_; lean_object* v___y_2135_; lean_object* v___y_2136_; lean_object* v___y_2137_; lean_object* v___y_2138_; 
if (lean_obj_tag(v_x_2112_) == 0)
{
lean_object* v_a_2154_; lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2224_; 
v_a_2154_ = lean_ctor_get(v_x_2112_, 0);
v_a_2155_ = lean_ctor_get(v_x_2112_, 1);
v_isSharedCheck_2224_ = !lean_is_exclusive(v_x_2112_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2157_ = v_x_2112_;
v_isShared_2158_ = v_isSharedCheck_2224_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_inc(v_a_2154_);
lean_dec(v_x_2112_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2224_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v_cancelTk_x3f_2202_; 
v_cancelTk_x3f_2202_ = lean_ctor_get(v___y_2104_, 6);
if (lean_obj_tag(v_cancelTk_x3f_2202_) == 1)
{
lean_object* v_val_2203_; uint8_t v___x_2204_; 
v_val_2203_ = lean_ctor_get(v_cancelTk_x3f_2202_, 0);
v___x_2204_ = l_IO_CancelToken_isSet(v_val_2203_);
if (v___x_2204_ == 0)
{
lean_del_object(v___x_2157_);
goto v___jp_2159_;
}
else
{
lean_object* v_log_2205_; uint8_t v_action_2206_; uint8_t v_wantsRebuild_2207_; lean_object* v_trace_2208_; lean_object* v_buildTime_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2223_; 
lean_dec(v_a_2154_);
lean_dec_ref(v_f_2111_);
lean_dec_ref(v_a_2106_);
lean_dec(v_prio_2105_);
v_log_2205_ = lean_ctor_get(v_a_2155_, 0);
v_action_2206_ = lean_ctor_get_uint8(v_a_2155_, sizeof(void*)*3);
v_wantsRebuild_2207_ = lean_ctor_get_uint8(v_a_2155_, sizeof(void*)*3 + 1);
v_trace_2208_ = lean_ctor_get(v_a_2155_, 1);
v_buildTime_2209_ = lean_ctor_get(v_a_2155_, 2);
v_isSharedCheck_2223_ = !lean_is_exclusive(v_a_2155_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2211_ = v_a_2155_;
v_isShared_2212_ = v_isSharedCheck_2223_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_buildTime_2209_);
lean_inc(v_trace_2208_);
lean_inc(v_log_2205_);
lean_dec(v_a_2155_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2223_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2217_; 
v___x_2213_ = lean_array_get_size(v_log_2205_);
v___x_2214_ = lean_obj_once(&l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0, &l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0_once, _init_l___private_Lake_Build_Job_Monad_0__Lake_Job_canceledResult___redArg___closed__0);
v___x_2215_ = lean_array_push(v_log_2205_, v___x_2214_);
if (v_isShared_2212_ == 0)
{
lean_ctor_set(v___x_2211_, 0, v___x_2215_);
v___x_2217_ = v___x_2211_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2215_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v_trace_2208_);
lean_ctor_set(v_reuseFailAlloc_2222_, 2, v_buildTime_2209_);
lean_ctor_set_uint8(v_reuseFailAlloc_2222_, sizeof(void*)*3, v_action_2206_);
lean_ctor_set_uint8(v_reuseFailAlloc_2222_, sizeof(void*)*3 + 1, v_wantsRebuild_2207_);
v___x_2217_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
lean_object* v___x_2219_; 
if (v_isShared_2158_ == 0)
{
lean_ctor_set_tag(v___x_2157_, 1);
lean_ctor_set(v___x_2157_, 1, v___x_2217_);
lean_ctor_set(v___x_2157_, 0, v___x_2213_);
v___x_2219_ = v___x_2157_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v___x_2213_);
lean_ctor_set(v_reuseFailAlloc_2221_, 1, v___x_2217_);
v___x_2219_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
lean_object* v___x_2220_; 
v___x_2220_ = lean_task_pure(v___x_2219_);
return v___x_2220_;
}
}
}
}
}
else
{
lean_del_object(v___x_2157_);
goto v___jp_2159_;
}
v___jp_2159_:
{
lean_object* v_log_2160_; uint8_t v_action_2161_; uint8_t v_wantsRebuild_2162_; lean_object* v_trace_2163_; lean_object* v_buildTime_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2201_; 
v_log_2160_ = lean_ctor_get(v_a_2155_, 0);
v_action_2161_ = lean_ctor_get_uint8(v_a_2155_, sizeof(void*)*3);
v_wantsRebuild_2162_ = lean_ctor_get_uint8(v_a_2155_, sizeof(void*)*3 + 1);
v_trace_2163_ = lean_ctor_get(v_a_2155_, 1);
v_buildTime_2164_ = lean_ctor_get(v_a_2155_, 2);
v_isSharedCheck_2201_ = !lean_is_exclusive(v_a_2155_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2166_ = v_a_2155_;
v_isShared_2167_ = v_isSharedCheck_2201_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_buildTime_2164_);
lean_inc(v_trace_2163_);
lean_inc(v_log_2160_);
lean_dec(v_a_2155_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2201_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v_trace_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2176_; 
lean_inc_ref(v___y_2110_);
v_trace_2168_ = l_Lake_BuildTrace_mix(v___y_2110_, v_trace_2163_);
v___x_2169_ = lean_unsigned_to_nat(0u);
v___x_2170_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__0, &l_Lake_Job_sync___redArg___closed__0_once, _init_l_Lake_Job_sync___redArg___closed__0);
v___x_2171_ = lean_st_mk_ref(v___x_2170_);
lean_inc(v___x_2171_);
v___x_2172_ = l_IO_FS_Stream_ofBuffer(v___x_2171_);
lean_inc_ref(v___x_2172_);
v___x_2173_ = lean_get_set_stdout(v___x_2172_);
v___x_2174_ = lean_get_set_stderr(v___x_2172_);
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 1, v_trace_2168_);
v___x_2176_ = v___x_2166_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_log_2160_);
lean_ctor_set(v_reuseFailAlloc_2200_, 1, v_trace_2168_);
lean_ctor_set(v_reuseFailAlloc_2200_, 2, v_buildTime_2164_);
lean_ctor_set_uint8(v_reuseFailAlloc_2200_, sizeof(void*)*3, v_action_2161_);
lean_ctor_set_uint8(v_reuseFailAlloc_2200_, sizeof(void*)*3 + 1, v_wantsRebuild_2162_);
v___x_2176_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
lean_object* v___x_2177_; 
lean_inc_ref(v___y_2104_);
lean_inc(v___y_2109_);
lean_inc(v___y_2108_);
lean_inc(v___y_2107_);
lean_inc_ref(v_a_2106_);
v___x_2177_ = lean_apply_8(v_f_2111_, v_a_2154_, v_a_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2104_, v___x_2176_, lean_box(0));
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v_a_2178_; lean_object* v_a_2179_; lean_object* v___f_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v_a_2183_; lean_object* v_log_2184_; uint8_t v_action_2185_; uint8_t v_wantsRebuild_2186_; lean_object* v_trace_2187_; lean_object* v_buildTime_2188_; lean_object* v___x_2189_; lean_object* v_data_2190_; uint8_t v___x_2191_; 
v_a_2178_ = lean_ctor_get(v___x_2177_, 0);
lean_inc_n(v_a_2178_, 2);
v_a_2179_ = lean_ctor_get(v___x_2177_, 1);
lean_inc(v_a_2179_);
lean_dec_ref_known(v___x_2177_, 2);
v___f_2180_ = lean_alloc_closure((void*)(l_Lake_Job_bindM___redArg___lam__2___boxed), 9, 1);
lean_closure_set(v___f_2180_, 0, v_a_2178_);
v___x_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2181_, 0, v_a_2178_);
v___x_2182_ = l_Lake_Job_bindM___redArg___lam__1(v___x_2173_, v___x_2174_, v___x_2181_, v_a_2179_);
lean_dec_ref_known(v___x_2181_, 1);
v_a_2183_ = lean_ctor_get(v___x_2182_, 1);
lean_inc(v_a_2183_);
lean_dec_ref(v___x_2182_);
v_log_2184_ = lean_ctor_get(v_a_2183_, 0);
lean_inc_ref(v_log_2184_);
v_action_2185_ = lean_ctor_get_uint8(v_a_2183_, sizeof(void*)*3);
v_wantsRebuild_2186_ = lean_ctor_get_uint8(v_a_2183_, sizeof(void*)*3 + 1);
v_trace_2187_ = lean_ctor_get(v_a_2183_, 1);
lean_inc_ref(v_trace_2187_);
v_buildTime_2188_ = lean_ctor_get(v_a_2183_, 2);
lean_inc(v_buildTime_2188_);
v___x_2189_ = lean_st_ref_get(v___x_2171_);
lean_dec(v___x_2171_);
v_data_2190_ = lean_ctor_get(v___x_2189_, 0);
lean_inc_ref(v_data_2190_);
lean_dec(v___x_2189_);
v___x_2191_ = lean_string_validate_utf8(v_data_2190_);
if (v___x_2191_ == 0)
{
lean_object* v___x_2192_; lean_object* v___x_2193_; 
lean_dec_ref(v_data_2190_);
v___x_2192_ = lean_obj_once(&l_Lake_Job_sync___redArg___closed__7, &l_Lake_Job_sync___redArg___closed__7_once, _init_l_Lake_Job_sync___redArg___closed__7);
v___x_2193_ = l_panic___at___00Lake_Job_sync_spec__0(v___x_2192_);
v___y_2130_ = v_trace_2187_;
v___y_2131_ = v_wantsRebuild_2186_;
v___y_2132_ = v_action_2185_;
v___y_2133_ = v___x_2169_;
v___y_2134_ = v_a_2183_;
v___y_2135_ = v___f_2180_;
v___y_2136_ = v_buildTime_2188_;
v___y_2137_ = v_log_2184_;
v___y_2138_ = v___x_2193_;
goto v___jp_2129_;
}
else
{
lean_object* v___x_2194_; 
v___x_2194_ = lean_string_from_utf8_unchecked(v_data_2190_);
v___y_2130_ = v_trace_2187_;
v___y_2131_ = v_wantsRebuild_2186_;
v___y_2132_ = v_action_2185_;
v___y_2133_ = v___x_2169_;
v___y_2134_ = v_a_2183_;
v___y_2135_ = v___f_2180_;
v___y_2136_ = v_buildTime_2188_;
v___y_2137_ = v_log_2184_;
v___y_2138_ = v___x_2194_;
goto v___jp_2129_;
}
}
else
{
lean_object* v_a_2195_; lean_object* v_a_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v_a_2199_; 
lean_dec(v___x_2171_);
lean_dec_ref(v_a_2106_);
lean_dec(v_prio_2105_);
v_a_2195_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_a_2195_);
v_a_2196_ = lean_ctor_get(v___x_2177_, 1);
lean_inc(v_a_2196_);
lean_dec_ref_known(v___x_2177_, 2);
v___x_2197_ = lean_box(0);
v___x_2198_ = l_Lake_Job_bindM___redArg___lam__1(v___x_2173_, v___x_2174_, v___x_2197_, v_a_2196_);
v_a_2199_ = lean_ctor_get(v___x_2198_, 1);
lean_inc(v_a_2199_);
lean_dec_ref(v___x_2198_);
v_a_2115_ = v_a_2195_;
v_a_2116_ = v_a_2199_;
goto v___jp_2114_;
}
}
}
}
}
}
else
{
lean_object* v_a_2225_; lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2234_; 
lean_dec_ref(v_f_2111_);
lean_dec_ref(v_a_2106_);
lean_dec(v_prio_2105_);
v_a_2225_ = lean_ctor_get(v_x_2112_, 0);
v_a_2226_ = lean_ctor_get(v_x_2112_, 1);
v_isSharedCheck_2234_ = !lean_is_exclusive(v_x_2112_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2228_ = v_x_2112_;
v_isShared_2229_ = v_isSharedCheck_2234_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_inc(v_a_2225_);
lean_dec(v_x_2112_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2234_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2225_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v_a_2226_);
v___x_2231_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
lean_object* v___x_2232_; 
v___x_2232_ = lean_task_pure(v___x_2231_);
return v___x_2232_;
}
}
}
v___jp_2114_:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2117_, 0, v_a_2115_);
lean_ctor_set(v___x_2117_, 1, v_a_2116_);
v___x_2118_ = lean_task_pure(v___x_2117_);
return v___x_2118_;
}
v___jp_2119_:
{
if (lean_obj_tag(v___y_2120_) == 0)
{
lean_object* v_a_2121_; lean_object* v_a_2122_; lean_object* v_task_2123_; lean_object* v___f_2124_; uint8_t v___x_2125_; lean_object* v___x_2126_; 
v_a_2121_ = lean_ctor_get(v___y_2120_, 0);
lean_inc(v_a_2121_);
v_a_2122_ = lean_ctor_get(v___y_2120_, 1);
lean_inc(v_a_2122_);
lean_dec_ref_known(v___y_2120_, 2);
v_task_2123_ = lean_ctor_get(v_a_2121_, 0);
lean_inc_ref(v_task_2123_);
lean_dec(v_a_2121_);
v___f_2124_ = lean_alloc_closure((void*)(l_Lake_Job_bindM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2124_, 0, v_a_2122_);
v___x_2125_ = 1;
v___x_2126_ = lean_task_map(v___f_2124_, v_task_2123_, v_prio_2105_, v___x_2125_);
return v___x_2126_;
}
else
{
lean_object* v_a_2127_; lean_object* v_a_2128_; 
lean_dec(v_prio_2105_);
v_a_2127_ = lean_ctor_get(v___y_2120_, 0);
lean_inc(v_a_2127_);
v_a_2128_ = lean_ctor_get(v___y_2120_, 1);
lean_inc(v_a_2128_);
lean_dec_ref_known(v___y_2120_, 2);
v_a_2115_ = v_a_2127_;
v_a_2116_ = v_a_2128_;
goto v___jp_2114_;
}
}
v___jp_2129_:
{
lean_object* v___x_2139_; uint8_t v___x_2140_; 
v___x_2139_ = lean_string_utf8_byte_size(v___y_2138_);
v___x_2140_ = lean_nat_dec_eq(v___x_2139_, v___y_2133_);
if (v___x_2140_ == 0)
{
lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; uint8_t v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
lean_dec_ref(v___y_2134_);
v___x_2141_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__3));
v___x_2142_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2142_, 0, v___y_2138_);
lean_ctor_set(v___x_2142_, 1, v___y_2133_);
lean_ctor_set(v___x_2142_, 2, v___x_2139_);
v___x_2143_ = l_String_Slice_trimAscii(v___x_2142_);
v___x_2144_ = l_String_Slice_toString(v___x_2143_);
lean_dec_ref(v___x_2143_);
v___x_2145_ = lean_string_append(v___x_2141_, v___x_2144_);
lean_dec_ref(v___x_2144_);
v___x_2146_ = 1;
v___x_2147_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2147_, 0, v___x_2145_);
lean_ctor_set_uint8(v___x_2147_, sizeof(void*)*1, v___x_2146_);
v___x_2148_ = lean_box(0);
v___x_2149_ = lean_array_push(v___y_2137_, v___x_2147_);
v___x_2150_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2150_, 0, v___x_2149_);
lean_ctor_set(v___x_2150_, 1, v___y_2130_);
lean_ctor_set(v___x_2150_, 2, v___y_2136_);
lean_ctor_set_uint8(v___x_2150_, sizeof(void*)*3, v___y_2132_);
lean_ctor_set_uint8(v___x_2150_, sizeof(void*)*3 + 1, v___y_2131_);
lean_inc_ref(v___y_2104_);
lean_inc(v___y_2109_);
lean_inc(v___y_2108_);
lean_inc(v___y_2107_);
v___x_2151_ = lean_apply_8(v___y_2135_, v___x_2148_, v_a_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2104_, v___x_2150_, lean_box(0));
v___y_2120_ = v___x_2151_;
goto v___jp_2119_;
}
else
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
lean_dec_ref(v___y_2138_);
lean_dec_ref(v___y_2137_);
lean_dec(v___y_2136_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2130_);
v___x_2152_ = lean_box(0);
lean_inc_ref(v___y_2104_);
lean_inc(v___y_2109_);
lean_inc(v___y_2108_);
lean_inc(v___y_2107_);
v___x_2153_ = lean_apply_8(v___y_2135_, v___x_2152_, v_a_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2104_, v___y_2134_, lean_box(0));
v___y_2120_ = v___x_2153_;
goto v___jp_2119_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___lam__3___boxed(lean_object* v___y_2235_, lean_object* v_prio_2236_, lean_object* v_a_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v_f_2242_, lean_object* v_x_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Lake_Job_bindM___redArg___lam__3(v___y_2235_, v_prio_2236_, v_a_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v_f_2242_, v_x_2243_);
lean_dec_ref(v___y_2241_);
lean_dec(v___y_2240_);
lean_dec(v___y_2239_);
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2235_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg(lean_object* v_kind_2246_, lean_object* v_self_2247_, lean_object* v_f_2248_, lean_object* v_prio_2249_, uint8_t v_sync_2250_, lean_object* v_a_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v_task_2258_; lean_object* v_caption_2259_; uint8_t v_optional_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2269_; 
v_task_2258_ = lean_ctor_get(v_self_2247_, 0);
v_caption_2259_ = lean_ctor_get(v_self_2247_, 2);
v_optional_2260_ = lean_ctor_get_uint8(v_self_2247_, sizeof(void*)*3);
v_isSharedCheck_2269_ = !lean_is_exclusive(v_self_2247_);
if (v_isSharedCheck_2269_ == 0)
{
lean_object* v_unused_2270_; 
v_unused_2270_ = lean_ctor_get(v_self_2247_, 1);
lean_dec(v_unused_2270_);
v___x_2262_ = v_self_2247_;
v_isShared_2263_ = v_isSharedCheck_2269_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_caption_2259_);
lean_inc(v_task_2258_);
lean_dec(v_self_2247_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2269_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___f_2264_; lean_object* v___x_2265_; lean_object* v___x_2267_; 
lean_inc_ref(v___y_2256_);
lean_inc(v___y_2254_);
lean_inc(v___y_2253_);
lean_inc(v___y_2252_);
lean_inc(v_prio_2249_);
lean_inc_ref(v___y_2255_);
v___f_2264_ = lean_alloc_closure((void*)(l_Lake_Job_bindM___redArg___lam__3___boxed), 10, 8);
lean_closure_set(v___f_2264_, 0, v___y_2255_);
lean_closure_set(v___f_2264_, 1, v_prio_2249_);
lean_closure_set(v___f_2264_, 2, v_a_2251_);
lean_closure_set(v___f_2264_, 3, v___y_2252_);
lean_closure_set(v___f_2264_, 4, v___y_2253_);
lean_closure_set(v___f_2264_, 5, v___y_2254_);
lean_closure_set(v___f_2264_, 6, v___y_2256_);
lean_closure_set(v___f_2264_, 7, v_f_2248_);
v___x_2265_ = lean_io_bind_task(v_task_2258_, v___f_2264_, v_prio_2249_, v_sync_2250_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 1, v_kind_2246_);
lean_ctor_set(v___x_2262_, 0, v___x_2265_);
v___x_2267_ = v___x_2262_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v___x_2265_);
lean_ctor_set(v_reuseFailAlloc_2268_, 1, v_kind_2246_);
lean_ctor_set(v_reuseFailAlloc_2268_, 2, v_caption_2259_);
lean_ctor_set_uint8(v_reuseFailAlloc_2268_, sizeof(void*)*3, v_optional_2260_);
v___x_2267_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
return v___x_2267_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___redArg___boxed(lean_object* v_kind_2271_, lean_object* v_self_2272_, lean_object* v_f_2273_, lean_object* v_prio_2274_, lean_object* v_sync_2275_, lean_object* v_a_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_){
_start:
{
uint8_t v_sync_boxed_2283_; lean_object* v_res_2284_; 
v_sync_boxed_2283_ = lean_unbox(v_sync_2275_);
v_res_2284_ = l_Lake_Job_bindM___redArg(v_kind_2271_, v_self_2272_, v_f_2273_, v_prio_2274_, v_sync_boxed_2283_, v_a_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
lean_dec_ref(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec(v___y_2277_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM(lean_object* v_00_u03b2_2285_, lean_object* v_00_u03b1_2286_, lean_object* v_kind_2287_, lean_object* v_self_2288_, lean_object* v_f_2289_, lean_object* v_prio_2290_, uint8_t v_sync_2291_, lean_object* v_a_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_){
_start:
{
lean_object* v___x_2299_; 
v___x_2299_ = l_Lake_Job_bindM___redArg(v_kind_2287_, v_self_2288_, v_f_2289_, v_prio_2290_, v_sync_2291_, v_a_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_bindM___boxed(lean_object* v_00_u03b2_2300_, lean_object* v_00_u03b1_2301_, lean_object* v_kind_2302_, lean_object* v_self_2303_, lean_object* v_f_2304_, lean_object* v_prio_2305_, lean_object* v_sync_2306_, lean_object* v_a_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
uint8_t v_sync_boxed_2314_; lean_object* v_res_2315_; 
v_sync_boxed_2314_ = lean_unbox(v_sync_2306_);
v_res_2315_ = l_Lake_Job_bindM(v_00_u03b2_2300_, v_00_u03b1_2301_, v_kind_2302_, v_self_2303_, v_f_2304_, v_prio_2305_, v_sync_boxed_2314_, v_a_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_);
lean_dec_ref(v___y_2312_);
lean_dec_ref(v___y_2311_);
lean_dec(v___y_2310_);
lean_dec(v___y_2309_);
lean_dec(v___y_2308_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___lam__0(lean_object* v_f_2316_, lean_object* v_rx_2317_, lean_object* v_ry_2318_){
_start:
{
lean_object* v___x_2319_; 
v___x_2319_ = lean_apply_2(v_f_2316_, v_rx_2317_, v_ry_2318_);
return v___x_2319_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___lam__1(lean_object* v_other_2320_, lean_object* v_f_2321_, lean_object* v_prio_2322_, uint8_t v_sync_2323_, lean_object* v_rx_2324_){
_start:
{
lean_object* v_task_2325_; lean_object* v___f_2326_; lean_object* v___x_2327_; 
v_task_2325_ = lean_ctor_get(v_other_2320_, 0);
lean_inc_ref(v_task_2325_);
lean_dec_ref(v_other_2320_);
v___f_2326_ = lean_alloc_closure((void*)(l_Lake_Job_zipResultWith___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2326_, 0, v_f_2321_);
lean_closure_set(v___f_2326_, 1, v_rx_2324_);
v___x_2327_ = lean_task_map(v___f_2326_, v_task_2325_, v_prio_2322_, v_sync_2323_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___lam__1___boxed(lean_object* v_other_2328_, lean_object* v_f_2329_, lean_object* v_prio_2330_, lean_object* v_sync_2331_, lean_object* v_rx_2332_){
_start:
{
uint8_t v_sync_boxed_2333_; lean_object* v_res_2334_; 
v_sync_boxed_2333_ = lean_unbox(v_sync_2331_);
v_res_2334_ = l_Lake_Job_zipResultWith___redArg___lam__1(v_other_2328_, v_f_2329_, v_prio_2330_, v_sync_boxed_2333_, v_rx_2332_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg(lean_object* v_inst_2335_, lean_object* v_f_2336_, lean_object* v_self_2337_, lean_object* v_other_2338_, lean_object* v_prio_2339_, uint8_t v_sync_2340_){
_start:
{
lean_object* v_task_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2354_; 
v_task_2341_ = lean_ctor_get(v_self_2337_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_self_2337_);
if (v_isSharedCheck_2354_ == 0)
{
lean_object* v_unused_2355_; lean_object* v_unused_2356_; 
v_unused_2355_ = lean_ctor_get(v_self_2337_, 2);
lean_dec(v_unused_2355_);
v_unused_2356_ = lean_ctor_get(v_self_2337_, 1);
lean_dec(v_unused_2356_);
v___x_2343_ = v_self_2337_;
v_isShared_2344_ = v_isSharedCheck_2354_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_task_2341_);
lean_dec(v_self_2337_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2354_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2345_; lean_object* v___f_2346_; uint8_t v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; uint8_t v___x_2350_; lean_object* v___x_2352_; 
v___x_2345_ = lean_box(v_sync_2340_);
lean_inc(v_prio_2339_);
v___f_2346_ = lean_alloc_closure((void*)(l_Lake_Job_zipResultWith___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2346_, 0, v_other_2338_);
lean_closure_set(v___f_2346_, 1, v_f_2336_);
lean_closure_set(v___f_2346_, 2, v_prio_2339_);
lean_closure_set(v___f_2346_, 3, v___x_2345_);
v___x_2347_ = 1;
v___x_2348_ = lean_task_bind(v_task_2341_, v___f_2346_, v_prio_2339_, v___x_2347_);
v___x_2349_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2350_ = 0;
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 2, v___x_2349_);
lean_ctor_set(v___x_2343_, 1, v_inst_2335_);
lean_ctor_set(v___x_2343_, 0, v___x_2348_);
v___x_2352_ = v___x_2343_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2348_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v_inst_2335_);
lean_ctor_set(v_reuseFailAlloc_2353_, 2, v___x_2349_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_ctor_set_uint8(v___x_2352_, sizeof(void*)*3, v___x_2350_);
return v___x_2352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___redArg___boxed(lean_object* v_inst_2357_, lean_object* v_f_2358_, lean_object* v_self_2359_, lean_object* v_other_2360_, lean_object* v_prio_2361_, lean_object* v_sync_2362_){
_start:
{
uint8_t v_sync_boxed_2363_; lean_object* v_res_2364_; 
v_sync_boxed_2363_ = lean_unbox(v_sync_2362_);
v_res_2364_ = l_Lake_Job_zipResultWith___redArg(v_inst_2357_, v_f_2358_, v_self_2359_, v_other_2360_, v_prio_2361_, v_sync_boxed_2363_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith(lean_object* v_00_u03b3_2365_, lean_object* v_00_u03b1_2366_, lean_object* v_00_u03b2_2367_, lean_object* v_inst_2368_, lean_object* v_f_2369_, lean_object* v_self_2370_, lean_object* v_other_2371_, lean_object* v_prio_2372_, uint8_t v_sync_2373_){
_start:
{
lean_object* v_task_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2387_; 
v_task_2374_ = lean_ctor_get(v_self_2370_, 0);
v_isSharedCheck_2387_ = !lean_is_exclusive(v_self_2370_);
if (v_isSharedCheck_2387_ == 0)
{
lean_object* v_unused_2388_; lean_object* v_unused_2389_; 
v_unused_2388_ = lean_ctor_get(v_self_2370_, 2);
lean_dec(v_unused_2388_);
v_unused_2389_ = lean_ctor_get(v_self_2370_, 1);
lean_dec(v_unused_2389_);
v___x_2376_ = v_self_2370_;
v_isShared_2377_ = v_isSharedCheck_2387_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_task_2374_);
lean_dec(v_self_2370_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2387_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2378_; lean_object* v___f_2379_; uint8_t v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; uint8_t v___x_2383_; lean_object* v___x_2385_; 
v___x_2378_ = lean_box(v_sync_2373_);
lean_inc(v_prio_2372_);
v___f_2379_ = lean_alloc_closure((void*)(l_Lake_Job_zipResultWith___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2379_, 0, v_other_2371_);
lean_closure_set(v___f_2379_, 1, v_f_2369_);
lean_closure_set(v___f_2379_, 2, v_prio_2372_);
lean_closure_set(v___f_2379_, 3, v___x_2378_);
v___x_2380_ = 1;
v___x_2381_ = lean_task_bind(v_task_2374_, v___f_2379_, v_prio_2372_, v___x_2380_);
v___x_2382_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2383_ = 0;
if (v_isShared_2377_ == 0)
{
lean_ctor_set(v___x_2376_, 2, v___x_2382_);
lean_ctor_set(v___x_2376_, 1, v_inst_2368_);
lean_ctor_set(v___x_2376_, 0, v___x_2381_);
v___x_2385_ = v___x_2376_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v___x_2381_);
lean_ctor_set(v_reuseFailAlloc_2386_, 1, v_inst_2368_);
lean_ctor_set(v_reuseFailAlloc_2386_, 2, v___x_2382_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
lean_ctor_set_uint8(v___x_2385_, sizeof(void*)*3, v___x_2383_);
return v___x_2385_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipResultWith___boxed(lean_object* v_00_u03b3_2390_, lean_object* v_00_u03b1_2391_, lean_object* v_00_u03b2_2392_, lean_object* v_inst_2393_, lean_object* v_f_2394_, lean_object* v_self_2395_, lean_object* v_other_2396_, lean_object* v_prio_2397_, lean_object* v_sync_2398_){
_start:
{
uint8_t v_sync_boxed_2399_; lean_object* v_res_2400_; 
v_sync_boxed_2399_ = lean_unbox(v_sync_2398_);
v_res_2400_ = l_Lake_Job_zipResultWith(v_00_u03b3_2390_, v_00_u03b1_2391_, v_00_u03b2_2392_, v_inst_2393_, v_f_2394_, v_self_2395_, v_other_2396_, v_prio_2397_, v_sync_boxed_2399_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___lam__0(lean_object* v_rx_2401_, lean_object* v_f_2402_, lean_object* v_ry_2403_){
_start:
{
lean_object* v___y_2405_; lean_object* v___y_2406_; lean_object* v___y_2407_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v_a_2416_; 
if (lean_obj_tag(v_rx_2401_) == 0)
{
if (lean_obj_tag(v_ry_2403_) == 0)
{
lean_object* v_a_2418_; lean_object* v_a_2419_; lean_object* v_a_2420_; lean_object* v_a_2421_; lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2430_; 
v_a_2418_ = lean_ctor_get(v_rx_2401_, 0);
lean_inc(v_a_2418_);
v_a_2419_ = lean_ctor_get(v_rx_2401_, 1);
lean_inc(v_a_2419_);
lean_dec_ref_known(v_rx_2401_, 2);
v_a_2420_ = lean_ctor_get(v_ry_2403_, 0);
v_a_2421_ = lean_ctor_get(v_ry_2403_, 1);
v_isSharedCheck_2430_ = !lean_is_exclusive(v_ry_2403_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2423_ = v_ry_2403_;
v_isShared_2424_ = v_isSharedCheck_2430_;
goto v_resetjp_2422_;
}
else
{
lean_inc(v_a_2421_);
lean_inc(v_a_2420_);
lean_dec(v_ry_2403_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2430_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2428_; 
v___x_2425_ = lean_apply_2(v_f_2402_, v_a_2418_, v_a_2420_);
v___x_2426_ = l_Lake_JobState_merge(v_a_2419_, v_a_2421_);
if (v_isShared_2424_ == 0)
{
lean_ctor_set(v___x_2423_, 1, v___x_2426_);
lean_ctor_set(v___x_2423_, 0, v___x_2425_);
v___x_2428_ = v___x_2423_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v___x_2425_);
lean_ctor_set(v_reuseFailAlloc_2429_, 1, v___x_2426_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
else
{
lean_object* v_a_2431_; 
lean_dec(v_f_2402_);
v_a_2431_ = lean_ctor_get(v_rx_2401_, 1);
lean_inc(v_a_2431_);
lean_dec_ref_known(v_rx_2401_, 2);
v_a_2416_ = v_a_2431_;
goto v___jp_2415_;
}
}
else
{
lean_dec(v_f_2402_);
if (lean_obj_tag(v_rx_2401_) == 0)
{
lean_object* v_a_2432_; 
v_a_2432_ = lean_ctor_get(v_rx_2401_, 1);
lean_inc(v_a_2432_);
lean_dec_ref_known(v_rx_2401_, 2);
v_a_2416_ = v_a_2432_;
goto v___jp_2415_;
}
else
{
lean_object* v_a_2433_; lean_object* v___x_2434_; 
v_a_2433_ = lean_ctor_get(v_rx_2401_, 1);
lean_inc(v_a_2433_);
lean_dec_ref_known(v_rx_2401_, 2);
v___x_2434_ = lean_unsigned_to_nat(0u);
v___y_2411_ = v_ry_2403_;
v___y_2412_ = v___x_2434_;
v___y_2413_ = v_a_2433_;
goto v___jp_2410_;
}
}
v___jp_2404_:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = l_Lake_JobState_merge(v___y_2406_, v___y_2407_);
v___x_2409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2409_, 0, v___y_2405_);
lean_ctor_set(v___x_2409_, 1, v___x_2408_);
return v___x_2409_;
}
v___jp_2410_:
{
lean_object* v_a_2414_; 
v_a_2414_ = lean_ctor_get(v___y_2411_, 1);
lean_inc(v_a_2414_);
lean_dec_ref(v___y_2411_);
v___y_2405_ = v___y_2412_;
v___y_2406_ = v___y_2413_;
v___y_2407_ = v_a_2414_;
goto v___jp_2404_;
}
v___jp_2415_:
{
lean_object* v___x_2417_; 
v___x_2417_ = lean_unsigned_to_nat(0u);
v___y_2411_ = v_ry_2403_;
v___y_2412_ = v___x_2417_;
v___y_2413_ = v_a_2416_;
goto v___jp_2410_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___lam__1(lean_object* v_other_2435_, lean_object* v_f_2436_, lean_object* v_prio_2437_, uint8_t v_sync_2438_, lean_object* v_rx_2439_){
_start:
{
lean_object* v_task_2440_; lean_object* v___f_2441_; lean_object* v___x_2442_; 
v_task_2440_ = lean_ctor_get(v_other_2435_, 0);
lean_inc_ref(v_task_2440_);
lean_dec_ref(v_other_2435_);
v___f_2441_ = lean_alloc_closure((void*)(l_Lake_Job_zipWith___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2441_, 0, v_rx_2439_);
lean_closure_set(v___f_2441_, 1, v_f_2436_);
v___x_2442_ = lean_task_map(v___f_2441_, v_task_2440_, v_prio_2437_, v_sync_2438_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___lam__1___boxed(lean_object* v_other_2443_, lean_object* v_f_2444_, lean_object* v_prio_2445_, lean_object* v_sync_2446_, lean_object* v_rx_2447_){
_start:
{
uint8_t v_sync_boxed_2448_; lean_object* v_res_2449_; 
v_sync_boxed_2448_ = lean_unbox(v_sync_2446_);
v_res_2449_ = l_Lake_Job_zipWith___redArg___lam__1(v_other_2443_, v_f_2444_, v_prio_2445_, v_sync_boxed_2448_, v_rx_2447_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg(lean_object* v_inst_2450_, lean_object* v_f_2451_, lean_object* v_self_2452_, lean_object* v_other_2453_, lean_object* v_prio_2454_, uint8_t v_sync_2455_){
_start:
{
lean_object* v_task_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2469_; 
v_task_2456_ = lean_ctor_get(v_self_2452_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v_self_2452_);
if (v_isSharedCheck_2469_ == 0)
{
lean_object* v_unused_2470_; lean_object* v_unused_2471_; 
v_unused_2470_ = lean_ctor_get(v_self_2452_, 2);
lean_dec(v_unused_2470_);
v_unused_2471_ = lean_ctor_get(v_self_2452_, 1);
lean_dec(v_unused_2471_);
v___x_2458_ = v_self_2452_;
v_isShared_2459_ = v_isSharedCheck_2469_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_task_2456_);
lean_dec(v_self_2452_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2469_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2460_; lean_object* v___f_2461_; uint8_t v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; uint8_t v___x_2465_; lean_object* v___x_2467_; 
v___x_2460_ = lean_box(v_sync_2455_);
lean_inc(v_prio_2454_);
v___f_2461_ = lean_alloc_closure((void*)(l_Lake_Job_zipWith___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2461_, 0, v_other_2453_);
lean_closure_set(v___f_2461_, 1, v_f_2451_);
lean_closure_set(v___f_2461_, 2, v_prio_2454_);
lean_closure_set(v___f_2461_, 3, v___x_2460_);
v___x_2462_ = 1;
v___x_2463_ = lean_task_bind(v_task_2456_, v___f_2461_, v_prio_2454_, v___x_2462_);
v___x_2464_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2465_ = 0;
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 2, v___x_2464_);
lean_ctor_set(v___x_2458_, 1, v_inst_2450_);
lean_ctor_set(v___x_2458_, 0, v___x_2463_);
v___x_2467_ = v___x_2458_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v___x_2463_);
lean_ctor_set(v_reuseFailAlloc_2468_, 1, v_inst_2450_);
lean_ctor_set(v_reuseFailAlloc_2468_, 2, v___x_2464_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
lean_ctor_set_uint8(v___x_2467_, sizeof(void*)*3, v___x_2465_);
return v___x_2467_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___redArg___boxed(lean_object* v_inst_2472_, lean_object* v_f_2473_, lean_object* v_self_2474_, lean_object* v_other_2475_, lean_object* v_prio_2476_, lean_object* v_sync_2477_){
_start:
{
uint8_t v_sync_boxed_2478_; lean_object* v_res_2479_; 
v_sync_boxed_2478_ = lean_unbox(v_sync_2477_);
v_res_2479_ = l_Lake_Job_zipWith___redArg(v_inst_2472_, v_f_2473_, v_self_2474_, v_other_2475_, v_prio_2476_, v_sync_boxed_2478_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___lam__0(lean_object* v_rx_2480_, lean_object* v_f_2481_, lean_object* v_ry_2482_){
_start:
{
lean_object* v___y_2484_; lean_object* v___y_2485_; lean_object* v___y_2486_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v_a_2495_; lean_object* v_rb_2496_; 
if (lean_obj_tag(v_rx_2480_) == 0)
{
if (lean_obj_tag(v_ry_2482_) == 0)
{
lean_object* v_a_2498_; lean_object* v_a_2499_; lean_object* v_a_2500_; lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2510_; 
v_a_2498_ = lean_ctor_get(v_rx_2480_, 0);
lean_inc(v_a_2498_);
v_a_2499_ = lean_ctor_get(v_rx_2480_, 1);
lean_inc(v_a_2499_);
lean_dec_ref_known(v_rx_2480_, 2);
v_a_2500_ = lean_ctor_get(v_ry_2482_, 0);
v_a_2501_ = lean_ctor_get(v_ry_2482_, 1);
v_isSharedCheck_2510_ = !lean_is_exclusive(v_ry_2482_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2503_ = v_ry_2482_;
v_isShared_2504_ = v_isSharedCheck_2510_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_inc(v_a_2500_);
lean_dec(v_ry_2482_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2510_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2508_; 
v___x_2505_ = lean_apply_2(v_f_2481_, v_a_2498_, v_a_2500_);
v___x_2506_ = l_Lake_JobState_merge(v_a_2499_, v_a_2501_);
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 1, v___x_2506_);
lean_ctor_set(v___x_2503_, 0, v___x_2505_);
v___x_2508_ = v___x_2503_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v___x_2505_);
lean_ctor_set(v_reuseFailAlloc_2509_, 1, v___x_2506_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
else
{
lean_object* v_a_2511_; 
lean_dec(v_f_2481_);
v_a_2511_ = lean_ctor_get(v_rx_2480_, 1);
lean_inc(v_a_2511_);
lean_dec_ref_known(v_rx_2480_, 2);
v_a_2495_ = v_a_2511_;
v_rb_2496_ = v_ry_2482_;
goto v___jp_2494_;
}
}
else
{
lean_dec(v_f_2481_);
if (lean_obj_tag(v_rx_2480_) == 0)
{
lean_object* v_a_2512_; 
v_a_2512_ = lean_ctor_get(v_rx_2480_, 1);
lean_inc(v_a_2512_);
lean_dec_ref_known(v_rx_2480_, 2);
v_a_2495_ = v_a_2512_;
v_rb_2496_ = v_ry_2482_;
goto v___jp_2494_;
}
else
{
lean_object* v_a_2513_; lean_object* v___x_2514_; 
v_a_2513_ = lean_ctor_get(v_rx_2480_, 1);
lean_inc(v_a_2513_);
lean_dec_ref_known(v_rx_2480_, 2);
v___x_2514_ = lean_unsigned_to_nat(0u);
v___y_2490_ = v_ry_2482_;
v___y_2491_ = v___x_2514_;
v___y_2492_ = v_a_2513_;
goto v___jp_2489_;
}
}
v___jp_2483_:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = l_Lake_JobState_merge(v___y_2485_, v___y_2486_);
v___x_2488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2488_, 0, v___y_2484_);
lean_ctor_set(v___x_2488_, 1, v___x_2487_);
return v___x_2488_;
}
v___jp_2489_:
{
lean_object* v_a_2493_; 
v_a_2493_ = lean_ctor_get(v___y_2490_, 1);
lean_inc(v_a_2493_);
lean_dec_ref(v___y_2490_);
v___y_2484_ = v___y_2491_;
v___y_2485_ = v___y_2492_;
v___y_2486_ = v_a_2493_;
goto v___jp_2483_;
}
v___jp_2494_:
{
lean_object* v___x_2497_; 
v___x_2497_ = lean_unsigned_to_nat(0u);
v___y_2490_ = v_rb_2496_;
v___y_2491_ = v___x_2497_;
v___y_2492_ = v_a_2495_;
goto v___jp_2489_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___lam__1(lean_object* v_other_2515_, lean_object* v_f_2516_, lean_object* v_prio_2517_, uint8_t v_sync_2518_, lean_object* v_rx_2519_){
_start:
{
lean_object* v_task_2520_; lean_object* v___f_2521_; lean_object* v___x_2522_; 
v_task_2520_ = lean_ctor_get(v_other_2515_, 0);
lean_inc_ref(v_task_2520_);
lean_dec_ref(v_other_2515_);
v___f_2521_ = lean_alloc_closure((void*)(l_Lake_Job_zipWith___lam__0), 3, 2);
lean_closure_set(v___f_2521_, 0, v_rx_2519_);
lean_closure_set(v___f_2521_, 1, v_f_2516_);
v___x_2522_ = lean_task_map(v___f_2521_, v_task_2520_, v_prio_2517_, v_sync_2518_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___lam__1___boxed(lean_object* v_other_2523_, lean_object* v_f_2524_, lean_object* v_prio_2525_, lean_object* v_sync_2526_, lean_object* v_rx_2527_){
_start:
{
uint8_t v_sync_boxed_2528_; lean_object* v_res_2529_; 
v_sync_boxed_2528_ = lean_unbox(v_sync_2526_);
v_res_2529_ = l_Lake_Job_zipWith___lam__1(v_other_2523_, v_f_2524_, v_prio_2525_, v_sync_boxed_2528_, v_rx_2527_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith(lean_object* v_00_u03b3_2530_, lean_object* v_00_u03b1_2531_, lean_object* v_00_u03b2_2532_, lean_object* v_inst_2533_, lean_object* v_f_2534_, lean_object* v_self_2535_, lean_object* v_other_2536_, lean_object* v_prio_2537_, uint8_t v_sync_2538_){
_start:
{
lean_object* v_task_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2552_; 
v_task_2539_ = lean_ctor_get(v_self_2535_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v_self_2535_);
if (v_isSharedCheck_2552_ == 0)
{
lean_object* v_unused_2553_; lean_object* v_unused_2554_; 
v_unused_2553_ = lean_ctor_get(v_self_2535_, 2);
lean_dec(v_unused_2553_);
v_unused_2554_ = lean_ctor_get(v_self_2535_, 1);
lean_dec(v_unused_2554_);
v___x_2541_ = v_self_2535_;
v_isShared_2542_ = v_isSharedCheck_2552_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_task_2539_);
lean_dec(v_self_2535_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2552_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2543_; lean_object* v___f_2544_; uint8_t v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; uint8_t v___x_2548_; lean_object* v___x_2550_; 
v___x_2543_ = lean_box(v_sync_2538_);
lean_inc(v_prio_2537_);
v___f_2544_ = lean_alloc_closure((void*)(l_Lake_Job_zipWith___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2544_, 0, v_other_2536_);
lean_closure_set(v___f_2544_, 1, v_f_2534_);
lean_closure_set(v___f_2544_, 2, v_prio_2537_);
lean_closure_set(v___f_2544_, 3, v___x_2543_);
v___x_2545_ = 1;
v___x_2546_ = lean_task_bind(v_task_2539_, v___f_2544_, v_prio_2537_, v___x_2545_);
v___x_2547_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2548_ = 0;
if (v_isShared_2542_ == 0)
{
lean_ctor_set(v___x_2541_, 2, v___x_2547_);
lean_ctor_set(v___x_2541_, 1, v_inst_2533_);
lean_ctor_set(v___x_2541_, 0, v___x_2546_);
v___x_2550_ = v___x_2541_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v___x_2546_);
lean_ctor_set(v_reuseFailAlloc_2551_, 1, v_inst_2533_);
lean_ctor_set(v_reuseFailAlloc_2551_, 2, v___x_2547_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
lean_ctor_set_uint8(v___x_2550_, sizeof(void*)*3, v___x_2548_);
return v___x_2550_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_zipWith___boxed(lean_object* v_00_u03b3_2555_, lean_object* v_00_u03b1_2556_, lean_object* v_00_u03b2_2557_, lean_object* v_inst_2558_, lean_object* v_f_2559_, lean_object* v_self_2560_, lean_object* v_other_2561_, lean_object* v_prio_2562_, lean_object* v_sync_2563_){
_start:
{
uint8_t v_sync_boxed_2564_; lean_object* v_res_2565_; 
v_sync_boxed_2564_ = lean_unbox(v_sync_2563_);
v_res_2565_ = l_Lake_Job_zipWith(v_00_u03b3_2555_, v_00_u03b1_2556_, v_00_u03b2_2557_, v_inst_2558_, v_f_2559_, v_self_2560_, v_other_2561_, v_prio_2562_, v_sync_boxed_2564_);
return v_res_2565_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg___lam__0(lean_object* v___x_2566_, lean_object* v_rx_2567_, lean_object* v_ry_2568_){
_start:
{
lean_object* v___y_2570_; lean_object* v___y_2571_; lean_object* v___y_2589_; lean_object* v___y_2590_; 
if (lean_obj_tag(v_rx_2567_) == 0)
{
if (lean_obj_tag(v_ry_2568_) == 0)
{
lean_object* v_a_2592_; lean_object* v_a_2593_; lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2616_; 
lean_dec(v___x_2566_);
v_a_2592_ = lean_ctor_get(v_rx_2567_, 0);
lean_inc(v_a_2592_);
v_a_2593_ = lean_ctor_get(v_rx_2567_, 1);
lean_inc(v_a_2593_);
lean_dec_ref_known(v_rx_2567_, 2);
v_a_2594_ = lean_ctor_get(v_ry_2568_, 1);
v_isSharedCheck_2616_ = !lean_is_exclusive(v_ry_2568_);
if (v_isSharedCheck_2616_ == 0)
{
lean_object* v_unused_2617_; 
v_unused_2617_ = lean_ctor_get(v_ry_2568_, 0);
lean_dec(v_unused_2617_);
v___x_2596_ = v_ry_2568_;
v_isShared_2597_ = v_isSharedCheck_2616_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v_ry_2568_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2616_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v___x_2598_; lean_object* v_log_2599_; uint8_t v_action_2600_; uint8_t v_wantsRebuild_2601_; lean_object* v_buildTime_2602_; lean_object* v_trace_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2613_; 
lean_inc(v_a_2593_);
v___x_2598_ = l_Lake_JobState_merge(v_a_2593_, v_a_2594_);
v_log_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc_ref(v_log_2599_);
v_action_2600_ = lean_ctor_get_uint8(v___x_2598_, sizeof(void*)*3);
v_wantsRebuild_2601_ = lean_ctor_get_uint8(v___x_2598_, sizeof(void*)*3 + 1);
v_buildTime_2602_ = lean_ctor_get(v___x_2598_, 2);
lean_inc(v_buildTime_2602_);
lean_dec_ref(v___x_2598_);
v_trace_2603_ = lean_ctor_get(v_a_2593_, 1);
v_isSharedCheck_2613_ = !lean_is_exclusive(v_a_2593_);
if (v_isSharedCheck_2613_ == 0)
{
lean_object* v_unused_2614_; lean_object* v_unused_2615_; 
v_unused_2614_ = lean_ctor_get(v_a_2593_, 2);
lean_dec(v_unused_2614_);
v_unused_2615_ = lean_ctor_get(v_a_2593_, 0);
lean_dec(v_unused_2615_);
v___x_2605_ = v_a_2593_;
v_isShared_2606_ = v_isSharedCheck_2613_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_trace_2603_);
lean_dec(v_a_2593_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2613_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 2, v_buildTime_2602_);
lean_ctor_set(v___x_2605_, 0, v_log_2599_);
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_log_2599_);
lean_ctor_set(v_reuseFailAlloc_2612_, 1, v_trace_2603_);
lean_ctor_set(v_reuseFailAlloc_2612_, 2, v_buildTime_2602_);
v___x_2608_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
lean_object* v___x_2610_; 
lean_ctor_set_uint8(v___x_2608_, sizeof(void*)*3, v_action_2600_);
lean_ctor_set_uint8(v___x_2608_, sizeof(void*)*3 + 1, v_wantsRebuild_2601_);
if (v_isShared_2597_ == 0)
{
lean_ctor_set(v___x_2596_, 1, v___x_2608_);
lean_ctor_set(v___x_2596_, 0, v_a_2592_);
v___x_2610_ = v___x_2596_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2592_);
lean_ctor_set(v_reuseFailAlloc_2611_, 1, v___x_2608_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
}
}
else
{
lean_object* v_a_2618_; 
v_a_2618_ = lean_ctor_get(v_rx_2567_, 1);
lean_inc(v_a_2618_);
lean_dec_ref_known(v_rx_2567_, 2);
v___y_2589_ = v_ry_2568_;
v___y_2590_ = v_a_2618_;
goto v___jp_2588_;
}
}
else
{
lean_object* v_a_2619_; 
v_a_2619_ = lean_ctor_get(v_rx_2567_, 1);
lean_inc(v_a_2619_);
lean_dec_ref(v_rx_2567_);
v___y_2589_ = v_ry_2568_;
v___y_2590_ = v_a_2619_;
goto v___jp_2588_;
}
v___jp_2569_:
{
lean_object* v___x_2572_; lean_object* v_log_2573_; uint8_t v_action_2574_; uint8_t v_wantsRebuild_2575_; lean_object* v_buildTime_2576_; lean_object* v_trace_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2585_; 
lean_inc_ref(v___y_2570_);
v___x_2572_ = l_Lake_JobState_merge(v___y_2570_, v___y_2571_);
v_log_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc_ref(v_log_2573_);
v_action_2574_ = lean_ctor_get_uint8(v___x_2572_, sizeof(void*)*3);
v_wantsRebuild_2575_ = lean_ctor_get_uint8(v___x_2572_, sizeof(void*)*3 + 1);
v_buildTime_2576_ = lean_ctor_get(v___x_2572_, 2);
lean_inc(v_buildTime_2576_);
lean_dec_ref(v___x_2572_);
v_trace_2577_ = lean_ctor_get(v___y_2570_, 1);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___y_2570_);
if (v_isSharedCheck_2585_ == 0)
{
lean_object* v_unused_2586_; lean_object* v_unused_2587_; 
v_unused_2586_ = lean_ctor_get(v___y_2570_, 2);
lean_dec(v_unused_2586_);
v_unused_2587_ = lean_ctor_get(v___y_2570_, 0);
lean_dec(v_unused_2587_);
v___x_2579_ = v___y_2570_;
v_isShared_2580_ = v_isSharedCheck_2585_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_trace_2577_);
lean_dec(v___y_2570_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2585_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2582_; 
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 2, v_buildTime_2576_);
lean_ctor_set(v___x_2579_, 0, v_log_2573_);
v___x_2582_ = v___x_2579_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_log_2573_);
lean_ctor_set(v_reuseFailAlloc_2584_, 1, v_trace_2577_);
lean_ctor_set(v_reuseFailAlloc_2584_, 2, v_buildTime_2576_);
v___x_2582_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
lean_object* v___x_2583_; 
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*3, v_action_2574_);
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*3 + 1, v_wantsRebuild_2575_);
v___x_2583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2566_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
return v___x_2583_;
}
}
}
v___jp_2588_:
{
lean_object* v_a_2591_; 
v_a_2591_ = lean_ctor_get(v___y_2589_, 1);
lean_inc(v_a_2591_);
lean_dec_ref(v___y_2589_);
v___y_2570_ = v___y_2590_;
v___y_2571_ = v_a_2591_;
goto v___jp_2569_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg___lam__1(lean_object* v_other_2620_, lean_object* v___x_2621_, uint8_t v___x_2622_, lean_object* v_rx_2623_){
_start:
{
lean_object* v_task_2624_; lean_object* v___f_2625_; lean_object* v___x_2626_; 
v_task_2624_ = lean_ctor_get(v_other_2620_, 0);
lean_inc_ref(v_task_2624_);
lean_dec_ref(v_other_2620_);
lean_inc(v___x_2621_);
v___f_2625_ = lean_alloc_closure((void*)(l_Lake_Job_add___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2625_, 0, v___x_2621_);
lean_closure_set(v___f_2625_, 1, v_rx_2623_);
v___x_2626_ = lean_task_map(v___f_2625_, v_task_2624_, v___x_2621_, v___x_2622_);
return v___x_2626_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg___lam__1___boxed(lean_object* v_other_2627_, lean_object* v___x_2628_, lean_object* v___x_2629_, lean_object* v_rx_2630_){
_start:
{
uint8_t v___x_253__boxed_2631_; lean_object* v_res_2632_; 
v___x_253__boxed_2631_ = lean_unbox(v___x_2629_);
v_res_2632_ = l_Lake_Job_add___redArg___lam__1(v_other_2627_, v___x_2628_, v___x_253__boxed_2631_, v_rx_2630_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_add___redArg(lean_object* v_self_2633_, lean_object* v_other_2634_){
_start:
{
lean_object* v_task_2635_; lean_object* v_kind_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2650_; 
v_task_2635_ = lean_ctor_get(v_self_2633_, 0);
v_kind_2636_ = lean_ctor_get(v_self_2633_, 1);
v_isSharedCheck_2650_ = !lean_is_exclusive(v_self_2633_);
if (v_isSharedCheck_2650_ == 0)
{
lean_object* v_unused_2651_; 
v_unused_2651_ = lean_ctor_get(v_self_2633_, 2);
lean_dec(v_unused_2651_);
v___x_2638_ = v_self_2633_;
v_isShared_2639_ = v_isSharedCheck_2650_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_kind_2636_);
lean_inc(v_task_2635_);
lean_dec(v_self_2633_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2650_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2640_; uint8_t v___x_2641_; lean_object* v___x_2642_; lean_object* v___f_2643_; uint8_t v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2648_; 
v___x_2640_ = lean_unsigned_to_nat(0u);
v___x_2641_ = 0;
v___x_2642_ = lean_box(v___x_2641_);
v___f_2643_ = lean_alloc_closure((void*)(l_Lake_Job_add___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2643_, 0, v_other_2634_);
lean_closure_set(v___f_2643_, 1, v___x_2640_);
lean_closure_set(v___f_2643_, 2, v___x_2642_);
v___x_2644_ = 1;
v___x_2645_ = lean_task_bind(v_task_2635_, v___f_2643_, v___x_2640_, v___x_2644_);
v___x_2646_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
if (v_isShared_2639_ == 0)
{
lean_ctor_set(v___x_2638_, 2, v___x_2646_);
lean_ctor_set(v___x_2638_, 0, v___x_2645_);
v___x_2648_ = v___x_2638_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v___x_2645_);
lean_ctor_set(v_reuseFailAlloc_2649_, 1, v_kind_2636_);
lean_ctor_set(v_reuseFailAlloc_2649_, 2, v___x_2646_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
lean_ctor_set_uint8(v___x_2648_, sizeof(void*)*3, v___x_2641_);
return v___x_2648_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_add(lean_object* v_00_u03b1_2652_, lean_object* v_00_u03b2_2653_, lean_object* v_self_2654_, lean_object* v_other_2655_){
_start:
{
lean_object* v___x_2656_; 
v___x_2656_ = l_Lake_Job_add___redArg(v_self_2654_, v_other_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg___lam__0(lean_object* v___x_2657_, lean_object* v_rx_2658_, lean_object* v_ry_2659_){
_start:
{
lean_object* v___y_2661_; lean_object* v___y_2662_; lean_object* v___y_2666_; lean_object* v___y_2667_; 
if (lean_obj_tag(v_rx_2658_) == 0)
{
if (lean_obj_tag(v_ry_2659_) == 0)
{
lean_object* v_a_2669_; lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2679_; 
lean_dec(v___x_2657_);
v_a_2669_ = lean_ctor_get(v_rx_2658_, 1);
lean_inc(v_a_2669_);
lean_dec_ref_known(v_rx_2658_, 2);
v_a_2670_ = lean_ctor_get(v_ry_2659_, 1);
v_isSharedCheck_2679_ = !lean_is_exclusive(v_ry_2659_);
if (v_isSharedCheck_2679_ == 0)
{
lean_object* v_unused_2680_; 
v_unused_2680_ = lean_ctor_get(v_ry_2659_, 0);
lean_dec(v_unused_2680_);
v___x_2672_ = v_ry_2659_;
v_isShared_2673_ = v_isSharedCheck_2679_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v_ry_2659_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2679_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2677_; 
v___x_2674_ = lean_box(0);
v___x_2675_ = l_Lake_JobState_merge(v_a_2669_, v_a_2670_);
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 1, v___x_2675_);
lean_ctor_set(v___x_2672_, 0, v___x_2674_);
v___x_2677_ = v___x_2672_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2674_);
lean_ctor_set(v_reuseFailAlloc_2678_, 1, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
else
{
lean_object* v_a_2681_; 
v_a_2681_ = lean_ctor_get(v_rx_2658_, 1);
lean_inc(v_a_2681_);
lean_dec_ref_known(v_rx_2658_, 2);
v___y_2666_ = v_ry_2659_;
v___y_2667_ = v_a_2681_;
goto v___jp_2665_;
}
}
else
{
lean_object* v_a_2682_; 
v_a_2682_ = lean_ctor_get(v_rx_2658_, 1);
lean_inc(v_a_2682_);
lean_dec_ref(v_rx_2658_);
v___y_2666_ = v_ry_2659_;
v___y_2667_ = v_a_2682_;
goto v___jp_2665_;
}
v___jp_2660_:
{
lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2663_ = l_Lake_JobState_merge(v___y_2661_, v___y_2662_);
v___x_2664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2657_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
return v___x_2664_;
}
v___jp_2665_:
{
lean_object* v_a_2668_; 
v_a_2668_ = lean_ctor_get(v___y_2666_, 1);
lean_inc(v_a_2668_);
lean_dec_ref(v___y_2666_);
v___y_2661_ = v___y_2667_;
v___y_2662_ = v_a_2668_;
goto v___jp_2660_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg___lam__1(lean_object* v_other_2683_, lean_object* v___x_2684_, uint8_t v___x_2685_, lean_object* v_rx_2686_){
_start:
{
lean_object* v_task_2687_; lean_object* v___f_2688_; lean_object* v___x_2689_; 
v_task_2687_ = lean_ctor_get(v_other_2683_, 0);
lean_inc_ref(v_task_2687_);
lean_dec_ref(v_other_2683_);
lean_inc(v___x_2684_);
v___f_2688_ = lean_alloc_closure((void*)(l_Lake_Job_mix___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2688_, 0, v___x_2684_);
lean_closure_set(v___f_2688_, 1, v_rx_2686_);
v___x_2689_ = lean_task_map(v___f_2688_, v_task_2687_, v___x_2684_, v___x_2685_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg___lam__1___boxed(lean_object* v_other_2690_, lean_object* v___x_2691_, lean_object* v___x_2692_, lean_object* v_rx_2693_){
_start:
{
uint8_t v___x_142__boxed_2694_; lean_object* v_res_2695_; 
v___x_142__boxed_2694_ = lean_unbox(v___x_2692_);
v_res_2695_ = l_Lake_Job_mix___redArg___lam__1(v_other_2690_, v___x_2691_, v___x_142__boxed_2694_, v_rx_2693_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mix___redArg(lean_object* v_self_2696_, lean_object* v_other_2697_){
_start:
{
lean_object* v_task_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2713_; 
v_task_2698_ = lean_ctor_get(v_self_2696_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v_self_2696_);
if (v_isSharedCheck_2713_ == 0)
{
lean_object* v_unused_2714_; lean_object* v_unused_2715_; 
v_unused_2714_ = lean_ctor_get(v_self_2696_, 2);
lean_dec(v_unused_2714_);
v_unused_2715_ = lean_ctor_get(v_self_2696_, 1);
lean_dec(v_unused_2715_);
v___x_2700_ = v_self_2696_;
v_isShared_2701_ = v_isSharedCheck_2713_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_task_2698_);
lean_dec(v_self_2696_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2713_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; uint8_t v___x_2704_; lean_object* v___x_2705_; lean_object* v___f_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; uint8_t v___x_2709_; lean_object* v___x_2711_; 
v___x_2702_ = l_Lake_instDataKindUnit;
v___x_2703_ = lean_unsigned_to_nat(0u);
v___x_2704_ = 1;
v___x_2705_ = lean_box(v___x_2704_);
v___f_2706_ = lean_alloc_closure((void*)(l_Lake_Job_mix___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2706_, 0, v_other_2697_);
lean_closure_set(v___f_2706_, 1, v___x_2703_);
lean_closure_set(v___f_2706_, 2, v___x_2705_);
v___x_2707_ = lean_task_bind(v_task_2698_, v___f_2706_, v___x_2703_, v___x_2704_);
v___x_2708_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2709_ = 0;
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 2, v___x_2708_);
lean_ctor_set(v___x_2700_, 1, v___x_2702_);
lean_ctor_set(v___x_2700_, 0, v___x_2707_);
v___x_2711_ = v___x_2700_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v___x_2707_);
lean_ctor_set(v_reuseFailAlloc_2712_, 1, v___x_2702_);
lean_ctor_set(v_reuseFailAlloc_2712_, 2, v___x_2708_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
lean_ctor_set_uint8(v___x_2711_, sizeof(void*)*3, v___x_2709_);
return v___x_2711_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mix(lean_object* v_00_u03b1_2716_, lean_object* v_00_u03b2_2717_, lean_object* v_self_2718_, lean_object* v_other_2719_){
_start:
{
lean_object* v___x_2720_; 
v___x_2720_ = l_Lake_Job_mix___redArg(v_self_2718_, v_other_2719_);
return v___x_2720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg(lean_object* v_as_2721_, size_t v_i_2722_, size_t v_stop_2723_, lean_object* v_b_2724_){
_start:
{
uint8_t v___x_2725_; 
v___x_2725_ = lean_usize_dec_eq(v_i_2722_, v_stop_2723_);
if (v___x_2725_ == 0)
{
size_t v___x_2726_; size_t v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2726_ = ((size_t)1ULL);
v___x_2727_ = lean_usize_sub(v_i_2722_, v___x_2726_);
v___x_2728_ = lean_array_uget_borrowed(v_as_2721_, v___x_2727_);
lean_inc(v___x_2728_);
v___x_2729_ = l_Lake_Job_mix___redArg(v___x_2728_, v_b_2724_);
v_i_2722_ = v___x_2727_;
v_b_2724_ = v___x_2729_;
goto _start;
}
else
{
return v_b_2724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg___boxed(lean_object* v_as_2731_, lean_object* v_i_2732_, lean_object* v_stop_2733_, lean_object* v_b_2734_){
_start:
{
size_t v_i_boxed_2735_; size_t v_stop_boxed_2736_; lean_object* v_res_2737_; 
v_i_boxed_2735_ = lean_unbox_usize(v_i_2732_);
lean_dec(v_i_2732_);
v_stop_boxed_2736_ = lean_unbox_usize(v_stop_2733_);
lean_dec(v_stop_2733_);
v_res_2737_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg(v_as_2731_, v_i_boxed_2735_, v_stop_boxed_2736_, v_b_2734_);
lean_dec_ref(v_as_2731_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_mixList_spec__0___redArg(lean_object* v_init_2738_, lean_object* v_l_2739_){
_start:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; uint8_t v___x_2743_; 
v___x_2740_ = lean_array_mk(v_l_2739_);
v___x_2741_ = lean_array_get_size(v___x_2740_);
v___x_2742_ = lean_unsigned_to_nat(0u);
v___x_2743_ = lean_nat_dec_lt(v___x_2742_, v___x_2741_);
if (v___x_2743_ == 0)
{
lean_dec_ref(v___x_2740_);
return v_init_2738_;
}
else
{
size_t v___x_2744_; size_t v___x_2745_; lean_object* v___x_2746_; 
v___x_2744_ = lean_usize_of_nat(v___x_2741_);
v___x_2745_ = ((size_t)0ULL);
v___x_2746_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg(v___x_2740_, v___x_2744_, v___x_2745_, v_init_2738_);
lean_dec_ref(v___x_2740_);
return v___x_2746_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixList___redArg(lean_object* v_jobs_2747_, lean_object* v_traceCaption_2748_){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; uint8_t v___x_2753_; uint8_t v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2749_ = lean_box(0);
v___x_2750_ = lean_box(0);
v___x_2751_ = lean_unsigned_to_nat(0u);
v___x_2752_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_2753_ = 0;
v___x_2754_ = 0;
v___x_2755_ = l_Lake_BuildTrace_nil(v_traceCaption_2748_);
v___x_2756_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2756_, 0, v___x_2752_);
lean_ctor_set(v___x_2756_, 1, v___x_2755_);
lean_ctor_set(v___x_2756_, 2, v___x_2751_);
lean_ctor_set_uint8(v___x_2756_, sizeof(void*)*3, v___x_2753_);
lean_ctor_set_uint8(v___x_2756_, sizeof(void*)*3 + 1, v___x_2754_);
v___x_2757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2749_);
lean_ctor_set(v___x_2757_, 1, v___x_2756_);
v___x_2758_ = lean_task_pure(v___x_2757_);
v___x_2759_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2760_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2760_, 0, v___x_2758_);
lean_ctor_set(v___x_2760_, 1, v___x_2750_);
lean_ctor_set(v___x_2760_, 2, v___x_2759_);
lean_ctor_set_uint8(v___x_2760_, sizeof(void*)*3, v___x_2754_);
v___x_2761_ = l_List_foldrTR___at___00Lake_Job_mixList_spec__0___redArg(v___x_2760_, v_jobs_2747_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixList(lean_object* v_00_u03b1_2762_, lean_object* v_jobs_2763_, lean_object* v_traceCaption_2764_){
_start:
{
lean_object* v___x_2765_; 
v___x_2765_ = l_Lake_Job_mixList___redArg(v_jobs_2763_, v_traceCaption_2764_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_mixList_spec__0(lean_object* v_00_u03b1_2766_, lean_object* v_init_2767_, lean_object* v_l_2768_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = l_List_foldrTR___at___00Lake_Job_mixList_spec__0___redArg(v_init_2767_, v_l_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0(lean_object* v_00_u03b1_2770_, lean_object* v_as_2771_, size_t v_i_2772_, size_t v_stop_2773_, lean_object* v_b_2774_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___redArg(v_as_2771_, v_i_2772_, v_stop_2773_, v_b_2774_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2776_, lean_object* v_as_2777_, lean_object* v_i_2778_, lean_object* v_stop_2779_, lean_object* v_b_2780_){
_start:
{
size_t v_i_boxed_2781_; size_t v_stop_boxed_2782_; lean_object* v_res_2783_; 
v_i_boxed_2781_ = lean_unbox_usize(v_i_2778_);
lean_dec(v_i_2778_);
v_stop_boxed_2782_ = lean_unbox_usize(v_stop_2779_);
lean_dec(v_stop_2779_);
v_res_2783_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_mixList_spec__0_spec__0(v_00_u03b1_2776_, v_as_2777_, v_i_boxed_2781_, v_stop_boxed_2782_, v_b_2780_);
lean_dec_ref(v_as_2777_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(lean_object* v_as_2784_, size_t v_i_2785_, size_t v_stop_2786_, lean_object* v_b_2787_){
_start:
{
uint8_t v___x_2788_; 
v___x_2788_ = lean_usize_dec_eq(v_i_2785_, v_stop_2786_);
if (v___x_2788_ == 0)
{
lean_object* v___x_2789_; lean_object* v___x_2790_; size_t v___x_2791_; size_t v___x_2792_; 
v___x_2789_ = lean_array_uget_borrowed(v_as_2784_, v_i_2785_);
lean_inc(v___x_2789_);
v___x_2790_ = l_Lake_Job_mix___redArg(v_b_2787_, v___x_2789_);
v___x_2791_ = ((size_t)1ULL);
v___x_2792_ = lean_usize_add(v_i_2785_, v___x_2791_);
v_i_2785_ = v___x_2792_;
v_b_2787_ = v___x_2790_;
goto _start;
}
else
{
return v_b_2787_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg___boxed(lean_object* v_as_2794_, lean_object* v_i_2795_, lean_object* v_stop_2796_, lean_object* v_b_2797_){
_start:
{
size_t v_i_boxed_2798_; size_t v_stop_boxed_2799_; lean_object* v_res_2800_; 
v_i_boxed_2798_ = lean_unbox_usize(v_i_2795_);
lean_dec(v_i_2795_);
v_stop_boxed_2799_ = lean_unbox_usize(v_stop_2796_);
lean_dec(v_stop_2796_);
v_res_2800_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(v_as_2794_, v_i_boxed_2798_, v_stop_boxed_2799_, v_b_2797_);
lean_dec_ref(v_as_2794_);
return v_res_2800_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixArray___redArg(lean_object* v_jobs_2801_, lean_object* v_traceCaption_2802_){
_start:
{
lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; uint8_t v___x_2807_; uint8_t v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; uint8_t v___x_2816_; 
v___x_2803_ = lean_box(0);
v___x_2804_ = lean_box(0);
v___x_2805_ = lean_unsigned_to_nat(0u);
v___x_2806_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_2807_ = 0;
v___x_2808_ = 0;
v___x_2809_ = l_Lake_BuildTrace_nil(v_traceCaption_2802_);
v___x_2810_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2810_, 0, v___x_2806_);
lean_ctor_set(v___x_2810_, 1, v___x_2809_);
lean_ctor_set(v___x_2810_, 2, v___x_2805_);
lean_ctor_set_uint8(v___x_2810_, sizeof(void*)*3, v___x_2807_);
lean_ctor_set_uint8(v___x_2810_, sizeof(void*)*3 + 1, v___x_2808_);
v___x_2811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2803_);
lean_ctor_set(v___x_2811_, 1, v___x_2810_);
v___x_2812_ = lean_task_pure(v___x_2811_);
v___x_2813_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2814_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2814_, 0, v___x_2812_);
lean_ctor_set(v___x_2814_, 1, v___x_2804_);
lean_ctor_set(v___x_2814_, 2, v___x_2813_);
lean_ctor_set_uint8(v___x_2814_, sizeof(void*)*3, v___x_2808_);
v___x_2815_ = lean_array_get_size(v_jobs_2801_);
v___x_2816_ = lean_nat_dec_lt(v___x_2805_, v___x_2815_);
if (v___x_2816_ == 0)
{
return v___x_2814_;
}
else
{
uint8_t v___x_2817_; 
v___x_2817_ = lean_nat_dec_le(v___x_2815_, v___x_2815_);
if (v___x_2817_ == 0)
{
if (v___x_2816_ == 0)
{
return v___x_2814_;
}
else
{
size_t v___x_2818_; size_t v___x_2819_; lean_object* v___x_2820_; 
v___x_2818_ = ((size_t)0ULL);
v___x_2819_ = lean_usize_of_nat(v___x_2815_);
v___x_2820_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(v_jobs_2801_, v___x_2818_, v___x_2819_, v___x_2814_);
return v___x_2820_;
}
}
else
{
size_t v___x_2821_; size_t v___x_2822_; lean_object* v___x_2823_; 
v___x_2821_ = ((size_t)0ULL);
v___x_2822_ = lean_usize_of_nat(v___x_2815_);
v___x_2823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(v_jobs_2801_, v___x_2821_, v___x_2822_, v___x_2814_);
return v___x_2823_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixArray___redArg___boxed(lean_object* v_jobs_2824_, lean_object* v_traceCaption_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lake_Job_mixArray___redArg(v_jobs_2824_, v_traceCaption_2825_);
lean_dec_ref(v_jobs_2824_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixArray(lean_object* v_00_u03b1_2827_, lean_object* v_jobs_2828_, lean_object* v_traceCaption_2829_){
_start:
{
lean_object* v___x_2830_; 
v___x_2830_ = l_Lake_Job_mixArray___redArg(v_jobs_2828_, v_traceCaption_2829_);
return v___x_2830_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_mixArray___boxed(lean_object* v_00_u03b1_2831_, lean_object* v_jobs_2832_, lean_object* v_traceCaption_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l_Lake_Job_mixArray(v_00_u03b1_2831_, v_jobs_2832_, v_traceCaption_2833_);
lean_dec_ref(v_jobs_2832_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0(lean_object* v_00_u03b1_2835_, lean_object* v_as_2836_, size_t v_i_2837_, size_t v_stop_2838_, lean_object* v_b_2839_){
_start:
{
lean_object* v___x_2840_; 
v___x_2840_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___redArg(v_as_2836_, v_i_2837_, v_stop_2838_, v_b_2839_);
return v___x_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0___boxed(lean_object* v_00_u03b1_2841_, lean_object* v_as_2842_, lean_object* v_i_2843_, lean_object* v_stop_2844_, lean_object* v_b_2845_){
_start:
{
size_t v_i_boxed_2846_; size_t v_stop_boxed_2847_; lean_object* v_res_2848_; 
v_i_boxed_2846_ = lean_unbox_usize(v_i_2843_);
lean_dec(v_i_2843_);
v_stop_boxed_2847_ = lean_unbox_usize(v_stop_2844_);
lean_dec(v_stop_2844_);
v_res_2848_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_mixArray_spec__0(v_00_u03b1_2841_, v_as_2842_, v_i_boxed_2846_, v_stop_boxed_2847_, v_b_2845_);
lean_dec_ref(v_as_2842_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__0(lean_object* v___x_2849_, lean_object* v_rx_2850_, lean_object* v_ry_2851_){
_start:
{
lean_object* v___y_2853_; lean_object* v___y_2854_; lean_object* v___y_2858_; lean_object* v___y_2859_; 
if (lean_obj_tag(v_rx_2850_) == 0)
{
if (lean_obj_tag(v_ry_2851_) == 0)
{
lean_object* v_a_2861_; lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2879_; 
lean_dec(v___x_2849_);
v_a_2861_ = lean_ctor_get(v_rx_2850_, 0);
v_a_2862_ = lean_ctor_get(v_rx_2850_, 1);
v_isSharedCheck_2879_ = !lean_is_exclusive(v_rx_2850_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2864_ = v_rx_2850_;
v_isShared_2865_ = v_isSharedCheck_2879_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_inc(v_a_2861_);
lean_dec(v_rx_2850_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2879_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v_a_2866_; lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2878_; 
v_a_2866_ = lean_ctor_get(v_ry_2851_, 0);
v_a_2867_ = lean_ctor_get(v_ry_2851_, 1);
v_isSharedCheck_2878_ = !lean_is_exclusive(v_ry_2851_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2869_ = v_ry_2851_;
v_isShared_2870_ = v_isSharedCheck_2878_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_inc(v_a_2866_);
lean_dec(v_ry_2851_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2878_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2865_ == 0)
{
lean_ctor_set_tag(v___x_2864_, 1);
lean_ctor_set(v___x_2864_, 1, v_a_2866_);
v___x_2872_ = v___x_2864_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_a_2861_);
lean_ctor_set(v_reuseFailAlloc_2877_, 1, v_a_2866_);
v___x_2872_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
lean_object* v___x_2873_; lean_object* v___x_2875_; 
v___x_2873_ = l_Lake_JobState_merge(v_a_2862_, v_a_2867_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 1, v___x_2873_);
lean_ctor_set(v___x_2869_, 0, v___x_2872_);
v___x_2875_ = v___x_2869_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v___x_2872_);
lean_ctor_set(v_reuseFailAlloc_2876_, 1, v___x_2873_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
return v___x_2875_;
}
}
}
}
}
else
{
lean_object* v_a_2880_; 
v_a_2880_ = lean_ctor_get(v_rx_2850_, 1);
lean_inc(v_a_2880_);
lean_dec_ref_known(v_rx_2850_, 2);
v___y_2858_ = v_ry_2851_;
v___y_2859_ = v_a_2880_;
goto v___jp_2857_;
}
}
else
{
lean_object* v_a_2881_; 
v_a_2881_ = lean_ctor_get(v_rx_2850_, 1);
lean_inc(v_a_2881_);
lean_dec_ref(v_rx_2850_);
v___y_2858_ = v_ry_2851_;
v___y_2859_ = v_a_2881_;
goto v___jp_2857_;
}
v___jp_2852_:
{
lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2855_ = l_Lake_JobState_merge(v___y_2853_, v___y_2854_);
v___x_2856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2849_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
return v___x_2856_;
}
v___jp_2857_:
{
lean_object* v_a_2860_; 
v_a_2860_ = lean_ctor_get(v___y_2858_, 1);
lean_inc(v_a_2860_);
lean_dec_ref(v___y_2858_);
v___y_2853_ = v___y_2859_;
v___y_2854_ = v_a_2860_;
goto v___jp_2852_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__1(lean_object* v_b_2882_, lean_object* v___x_2883_, uint8_t v___x_2884_, lean_object* v_rx_2885_){
_start:
{
lean_object* v_task_2886_; lean_object* v___f_2887_; lean_object* v___x_2888_; 
v_task_2886_ = lean_ctor_get(v_b_2882_, 0);
lean_inc_ref(v_task_2886_);
lean_dec_ref(v_b_2882_);
lean_inc(v___x_2883_);
v___f_2887_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2887_, 0, v___x_2883_);
lean_closure_set(v___f_2887_, 1, v_rx_2885_);
v___x_2888_ = lean_task_map(v___f_2887_, v_task_2886_, v___x_2883_, v___x_2884_);
return v___x_2888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v_b_2889_, lean_object* v___x_2890_, lean_object* v___x_2891_, lean_object* v_rx_2892_){
_start:
{
uint8_t v___x_480__boxed_2893_; lean_object* v_res_2894_; 
v___x_480__boxed_2893_ = lean_unbox(v___x_2891_);
v_res_2894_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__1(v_b_2889_, v___x_2890_, v___x_480__boxed_2893_, v_rx_2892_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg(lean_object* v_as_2895_, size_t v_i_2896_, size_t v_stop_2897_, lean_object* v_b_2898_){
_start:
{
uint8_t v___x_2899_; 
v___x_2899_ = lean_usize_dec_eq(v_i_2896_, v_stop_2897_);
if (v___x_2899_ == 0)
{
size_t v___x_2900_; size_t v___x_2901_; lean_object* v___x_2902_; lean_object* v_task_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2918_; 
v___x_2900_ = ((size_t)1ULL);
v___x_2901_ = lean_usize_sub(v_i_2896_, v___x_2900_);
v___x_2902_ = lean_array_uget(v_as_2895_, v___x_2901_);
v_task_2903_ = lean_ctor_get(v___x_2902_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2902_);
if (v_isSharedCheck_2918_ == 0)
{
lean_object* v_unused_2919_; lean_object* v_unused_2920_; 
v_unused_2919_ = lean_ctor_get(v___x_2902_, 2);
lean_dec(v_unused_2919_);
v_unused_2920_ = lean_ctor_get(v___x_2902_, 1);
lean_dec(v_unused_2920_);
v___x_2905_ = v___x_2902_;
v_isShared_2906_ = v_isSharedCheck_2918_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_task_2903_);
lean_dec(v___x_2902_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2918_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; uint8_t v___x_2909_; lean_object* v___x_2910_; lean_object* v___f_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2915_; 
v___x_2907_ = lean_box(0);
v___x_2908_ = lean_unsigned_to_nat(0u);
v___x_2909_ = 1;
v___x_2910_ = lean_box(v___x_2909_);
v___f_2911_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2911_, 0, v_b_2898_);
lean_closure_set(v___f_2911_, 1, v___x_2908_);
lean_closure_set(v___f_2911_, 2, v___x_2910_);
v___x_2912_ = lean_task_bind(v_task_2903_, v___f_2911_, v___x_2908_, v___x_2909_);
v___x_2913_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
if (v_isShared_2906_ == 0)
{
lean_ctor_set(v___x_2905_, 2, v___x_2913_);
lean_ctor_set(v___x_2905_, 1, v___x_2907_);
lean_ctor_set(v___x_2905_, 0, v___x_2912_);
v___x_2915_ = v___x_2905_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2912_);
lean_ctor_set(v_reuseFailAlloc_2917_, 1, v___x_2907_);
lean_ctor_set(v_reuseFailAlloc_2917_, 2, v___x_2913_);
v___x_2915_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
lean_ctor_set_uint8(v___x_2915_, sizeof(void*)*3, v___x_2899_);
v_i_2896_ = v___x_2901_;
v_b_2898_ = v___x_2915_;
goto _start;
}
}
}
else
{
return v_b_2898_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg___boxed(lean_object* v_as_2921_, lean_object* v_i_2922_, lean_object* v_stop_2923_, lean_object* v_b_2924_){
_start:
{
size_t v_i_boxed_2925_; size_t v_stop_boxed_2926_; lean_object* v_res_2927_; 
v_i_boxed_2925_ = lean_unbox_usize(v_i_2922_);
lean_dec(v_i_2922_);
v_stop_boxed_2926_ = lean_unbox_usize(v_stop_2923_);
lean_dec(v_stop_2923_);
v_res_2927_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg(v_as_2921_, v_i_boxed_2925_, v_stop_boxed_2926_, v_b_2924_);
lean_dec_ref(v_as_2921_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_collectList_spec__0___redArg(lean_object* v_init_2928_, lean_object* v_l_2929_){
_start:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; uint8_t v___x_2933_; 
v___x_2930_ = lean_array_mk(v_l_2929_);
v___x_2931_ = lean_array_get_size(v___x_2930_);
v___x_2932_ = lean_unsigned_to_nat(0u);
v___x_2933_ = lean_nat_dec_lt(v___x_2932_, v___x_2931_);
if (v___x_2933_ == 0)
{
lean_dec_ref(v___x_2930_);
return v_init_2928_;
}
else
{
size_t v___x_2934_; size_t v___x_2935_; lean_object* v___x_2936_; 
v___x_2934_ = lean_usize_of_nat(v___x_2931_);
v___x_2935_ = ((size_t)0ULL);
v___x_2936_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg(v___x_2930_, v___x_2934_, v___x_2935_, v_init_2928_);
lean_dec_ref(v___x_2930_);
return v___x_2936_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectList___redArg(lean_object* v_jobs_2937_, lean_object* v_traceCaption_2938_){
_start:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; uint8_t v___x_2943_; uint8_t v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2939_ = lean_box(0);
v___x_2940_ = lean_box(0);
v___x_2941_ = lean_unsigned_to_nat(0u);
v___x_2942_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_2943_ = 0;
v___x_2944_ = 0;
v___x_2945_ = l_Lake_BuildTrace_nil(v_traceCaption_2938_);
v___x_2946_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2946_, 0, v___x_2942_);
lean_ctor_set(v___x_2946_, 1, v___x_2945_);
lean_ctor_set(v___x_2946_, 2, v___x_2941_);
lean_ctor_set_uint8(v___x_2946_, sizeof(void*)*3, v___x_2943_);
lean_ctor_set_uint8(v___x_2946_, sizeof(void*)*3 + 1, v___x_2944_);
v___x_2947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2939_);
lean_ctor_set(v___x_2947_, 1, v___x_2946_);
v___x_2948_ = lean_task_pure(v___x_2947_);
v___x_2949_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_2950_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2950_, 0, v___x_2948_);
lean_ctor_set(v___x_2950_, 1, v___x_2940_);
lean_ctor_set(v___x_2950_, 2, v___x_2949_);
lean_ctor_set_uint8(v___x_2950_, sizeof(void*)*3, v___x_2944_);
v___x_2951_ = l_List_foldrTR___at___00Lake_Job_collectList_spec__0___redArg(v___x_2950_, v_jobs_2937_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectList(lean_object* v_00_u03b1_2952_, lean_object* v_jobs_2953_, lean_object* v_traceCaption_2954_){
_start:
{
lean_object* v___x_2955_; 
v___x_2955_ = l_Lake_Job_collectList___redArg(v_jobs_2953_, v_traceCaption_2954_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lake_Job_collectList_spec__0(lean_object* v_00_u03b1_2956_, lean_object* v_init_2957_, lean_object* v_l_2958_){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = l_List_foldrTR___at___00Lake_Job_collectList_spec__0___redArg(v_init_2957_, v_l_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0(lean_object* v_00_u03b1_2960_, lean_object* v_as_2961_, size_t v_i_2962_, size_t v_stop_2963_, lean_object* v_b_2964_){
_start:
{
lean_object* v___x_2965_; 
v___x_2965_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___redArg(v_as_2961_, v_i_2962_, v_stop_2963_, v_b_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2966_, lean_object* v_as_2967_, lean_object* v_i_2968_, lean_object* v_stop_2969_, lean_object* v_b_2970_){
_start:
{
size_t v_i_boxed_2971_; size_t v_stop_boxed_2972_; lean_object* v_res_2973_; 
v_i_boxed_2971_ = lean_unbox_usize(v_i_2968_);
lean_dec(v_i_2968_);
v_stop_boxed_2972_ = lean_unbox_usize(v_stop_2969_);
lean_dec(v_stop_2969_);
v_res_2973_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lake_Job_collectList_spec__0_spec__0(v_00_u03b1_2966_, v_as_2967_, v_i_boxed_2971_, v_stop_boxed_2972_, v_b_2970_);
lean_dec_ref(v_as_2967_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__0(lean_object* v___x_2974_, lean_object* v_rx_2975_, lean_object* v_ry_2976_){
_start:
{
lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___y_2983_; lean_object* v___y_2984_; 
if (lean_obj_tag(v_rx_2975_) == 0)
{
if (lean_obj_tag(v_ry_2976_) == 0)
{
lean_object* v_a_2986_; lean_object* v_a_2987_; lean_object* v_a_2988_; lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2998_; 
lean_dec(v___x_2974_);
v_a_2986_ = lean_ctor_get(v_rx_2975_, 0);
lean_inc(v_a_2986_);
v_a_2987_ = lean_ctor_get(v_rx_2975_, 1);
lean_inc(v_a_2987_);
lean_dec_ref_known(v_rx_2975_, 2);
v_a_2988_ = lean_ctor_get(v_ry_2976_, 0);
v_a_2989_ = lean_ctor_get(v_ry_2976_, 1);
v_isSharedCheck_2998_ = !lean_is_exclusive(v_ry_2976_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2991_ = v_ry_2976_;
v_isShared_2992_ = v_isSharedCheck_2998_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_inc(v_a_2988_);
lean_dec(v_ry_2976_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2998_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2996_; 
v___x_2993_ = lean_array_push(v_a_2986_, v_a_2988_);
v___x_2994_ = l_Lake_JobState_merge(v_a_2987_, v_a_2989_);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 1, v___x_2994_);
lean_ctor_set(v___x_2991_, 0, v___x_2993_);
v___x_2996_ = v___x_2991_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v___x_2993_);
lean_ctor_set(v_reuseFailAlloc_2997_, 1, v___x_2994_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
}
else
{
lean_object* v_a_2999_; 
v_a_2999_ = lean_ctor_get(v_rx_2975_, 1);
lean_inc(v_a_2999_);
lean_dec_ref_known(v_rx_2975_, 2);
v___y_2983_ = v_ry_2976_;
v___y_2984_ = v_a_2999_;
goto v___jp_2982_;
}
}
else
{
lean_object* v_a_3000_; 
v_a_3000_ = lean_ctor_get(v_rx_2975_, 1);
lean_inc(v_a_3000_);
lean_dec_ref(v_rx_2975_);
v___y_2983_ = v_ry_2976_;
v___y_2984_ = v_a_3000_;
goto v___jp_2982_;
}
v___jp_2977_:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2980_ = l_Lake_JobState_merge(v___y_2978_, v___y_2979_);
v___x_2981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2974_);
lean_ctor_set(v___x_2981_, 1, v___x_2980_);
return v___x_2981_;
}
v___jp_2982_:
{
lean_object* v_a_2985_; 
v_a_2985_ = lean_ctor_get(v___y_2983_, 1);
lean_inc(v_a_2985_);
lean_dec_ref(v___y_2983_);
v___y_2978_ = v___y_2984_;
v___y_2979_ = v_a_2985_;
goto v___jp_2977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__1(lean_object* v___x_3001_, lean_object* v___x_3002_, uint8_t v___x_3003_, lean_object* v_rx_3004_){
_start:
{
lean_object* v_task_3005_; lean_object* v___f_3006_; lean_object* v___x_3007_; 
v_task_3005_ = lean_ctor_get(v___x_3001_, 0);
lean_inc_ref(v_task_3005_);
lean_dec_ref(v___x_3001_);
lean_inc(v___x_3002_);
v___f_3006_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3006_, 0, v___x_3002_);
lean_closure_set(v___f_3006_, 1, v_rx_3004_);
v___x_3007_ = lean_task_map(v___f_3006_, v_task_3005_, v___x_3002_, v___x_3003_);
return v___x_3007_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__1___boxed(lean_object* v___x_3008_, lean_object* v___x_3009_, lean_object* v___x_3010_, lean_object* v_rx_3011_){
_start:
{
uint8_t v___x_414__boxed_3012_; lean_object* v_res_3013_; 
v___x_414__boxed_3012_ = lean_unbox(v___x_3010_);
v_res_3013_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__1(v___x_3008_, v___x_3009_, v___x_414__boxed_3012_, v_rx_3011_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(lean_object* v_as_3014_, size_t v_i_3015_, size_t v_stop_3016_, lean_object* v_b_3017_){
_start:
{
uint8_t v___x_3018_; 
v___x_3018_ = lean_usize_dec_eq(v_i_3015_, v_stop_3016_);
if (v___x_3018_ == 0)
{
lean_object* v_task_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3037_; 
v_task_3019_ = lean_ctor_get(v_b_3017_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v_b_3017_);
if (v_isSharedCheck_3037_ == 0)
{
lean_object* v_unused_3038_; lean_object* v_unused_3039_; 
v_unused_3038_ = lean_ctor_get(v_b_3017_, 2);
lean_dec(v_unused_3038_);
v_unused_3039_ = lean_ctor_get(v_b_3017_, 1);
lean_dec(v_unused_3039_);
v___x_3021_ = v_b_3017_;
v_isShared_3022_ = v_isSharedCheck_3037_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_task_3019_);
lean_dec(v_b_3017_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3037_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; uint8_t v___x_3026_; lean_object* v___x_3027_; lean_object* v___f_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3032_; 
v___x_3023_ = lean_box(0);
v___x_3024_ = lean_array_uget_borrowed(v_as_3014_, v_i_3015_);
v___x_3025_ = lean_unsigned_to_nat(0u);
v___x_3026_ = 1;
v___x_3027_ = lean_box(v___x_3026_);
lean_inc(v___x_3024_);
v___f_3028_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_3028_, 0, v___x_3024_);
lean_closure_set(v___f_3028_, 1, v___x_3025_);
lean_closure_set(v___f_3028_, 2, v___x_3027_);
v___x_3029_ = lean_task_bind(v_task_3019_, v___f_3028_, v___x_3025_, v___x_3026_);
v___x_3030_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
if (v_isShared_3022_ == 0)
{
lean_ctor_set(v___x_3021_, 2, v___x_3030_);
lean_ctor_set(v___x_3021_, 1, v___x_3023_);
lean_ctor_set(v___x_3021_, 0, v___x_3029_);
v___x_3032_ = v___x_3021_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v___x_3029_);
lean_ctor_set(v_reuseFailAlloc_3036_, 1, v___x_3023_);
lean_ctor_set(v_reuseFailAlloc_3036_, 2, v___x_3030_);
v___x_3032_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
size_t v___x_3033_; size_t v___x_3034_; 
lean_ctor_set_uint8(v___x_3032_, sizeof(void*)*3, v___x_3018_);
v___x_3033_ = ((size_t)1ULL);
v___x_3034_ = lean_usize_add(v_i_3015_, v___x_3033_);
v_i_3015_ = v___x_3034_;
v_b_3017_ = v___x_3032_;
goto _start;
}
}
}
else
{
return v_b_3017_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg___boxed(lean_object* v_as_3040_, lean_object* v_i_3041_, lean_object* v_stop_3042_, lean_object* v_b_3043_){
_start:
{
size_t v_i_boxed_3044_; size_t v_stop_boxed_3045_; lean_object* v_res_3046_; 
v_i_boxed_3044_ = lean_unbox_usize(v_i_3041_);
lean_dec(v_i_3041_);
v_stop_boxed_3045_ = lean_unbox_usize(v_stop_3042_);
lean_dec(v_stop_3042_);
v_res_3046_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(v_as_3040_, v_i_boxed_3044_, v_stop_boxed_3045_, v_b_3043_);
lean_dec_ref(v_as_3040_);
return v_res_3046_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectArray___redArg(lean_object* v_jobs_3047_, lean_object* v_traceCaption_3048_){
_start:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; uint8_t v___x_3054_; uint8_t v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; uint8_t v___x_3062_; 
v___x_3049_ = lean_array_get_size(v_jobs_3047_);
v___x_3050_ = lean_mk_empty_array_with_capacity(v___x_3049_);
v___x_3051_ = lean_box(0);
v___x_3052_ = lean_unsigned_to_nat(0u);
v___x_3053_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_3054_ = 0;
v___x_3055_ = 0;
v___x_3056_ = l_Lake_BuildTrace_nil(v_traceCaption_3048_);
v___x_3057_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3057_, 0, v___x_3053_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
lean_ctor_set(v___x_3057_, 2, v___x_3052_);
lean_ctor_set_uint8(v___x_3057_, sizeof(void*)*3, v___x_3054_);
lean_ctor_set_uint8(v___x_3057_, sizeof(void*)*3 + 1, v___x_3055_);
v___x_3058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3050_);
lean_ctor_set(v___x_3058_, 1, v___x_3057_);
v___x_3059_ = lean_task_pure(v___x_3058_);
v___x_3060_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_3061_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3061_, 0, v___x_3059_);
lean_ctor_set(v___x_3061_, 1, v___x_3051_);
lean_ctor_set(v___x_3061_, 2, v___x_3060_);
lean_ctor_set_uint8(v___x_3061_, sizeof(void*)*3, v___x_3055_);
v___x_3062_ = lean_nat_dec_lt(v___x_3052_, v___x_3049_);
if (v___x_3062_ == 0)
{
return v___x_3061_;
}
else
{
uint8_t v___x_3063_; 
v___x_3063_ = lean_nat_dec_le(v___x_3049_, v___x_3049_);
if (v___x_3063_ == 0)
{
if (v___x_3062_ == 0)
{
return v___x_3061_;
}
else
{
size_t v___x_3064_; size_t v___x_3065_; lean_object* v___x_3066_; 
v___x_3064_ = ((size_t)0ULL);
v___x_3065_ = lean_usize_of_nat(v___x_3049_);
v___x_3066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(v_jobs_3047_, v___x_3064_, v___x_3065_, v___x_3061_);
return v___x_3066_;
}
}
else
{
size_t v___x_3067_; size_t v___x_3068_; lean_object* v___x_3069_; 
v___x_3067_ = ((size_t)0ULL);
v___x_3068_ = lean_usize_of_nat(v___x_3049_);
v___x_3069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(v_jobs_3047_, v___x_3067_, v___x_3068_, v___x_3061_);
return v___x_3069_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectArray___redArg___boxed(lean_object* v_jobs_3070_, lean_object* v_traceCaption_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l_Lake_Job_collectArray___redArg(v_jobs_3070_, v_traceCaption_3071_);
lean_dec_ref(v_jobs_3070_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectArray(lean_object* v_00_u03b1_3073_, lean_object* v_jobs_3074_, lean_object* v_traceCaption_3075_){
_start:
{
lean_object* v___x_3076_; 
v___x_3076_ = l_Lake_Job_collectArray___redArg(v_jobs_3074_, v_traceCaption_3075_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectArray___boxed(lean_object* v_00_u03b1_3077_, lean_object* v_jobs_3078_, lean_object* v_traceCaption_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l_Lake_Job_collectArray(v_00_u03b1_3077_, v_jobs_3078_, v_traceCaption_3079_);
lean_dec_ref(v_jobs_3078_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0(lean_object* v_00_u03b1_3081_, lean_object* v_as_3082_, size_t v_i_3083_, size_t v_stop_3084_, lean_object* v_b_3085_){
_start:
{
lean_object* v___x_3086_; 
v___x_3086_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___redArg(v_as_3082_, v_i_3083_, v_stop_3084_, v_b_3085_);
return v___x_3086_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0___boxed(lean_object* v_00_u03b1_3087_, lean_object* v_as_3088_, lean_object* v_i_3089_, lean_object* v_stop_3090_, lean_object* v_b_3091_){
_start:
{
size_t v_i_boxed_3092_; size_t v_stop_boxed_3093_; lean_object* v_res_3094_; 
v_i_boxed_3092_ = lean_unbox_usize(v_i_3089_);
lean_dec(v_i_3089_);
v_stop_boxed_3093_ = lean_unbox_usize(v_stop_3090_);
lean_dec(v_stop_3090_);
v_res_3094_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Job_collectArray_spec__0(v_00_u03b1_3087_, v_as_3088_, v_i_boxed_3092_, v_stop_boxed_3093_, v_b_3091_);
lean_dec_ref(v_as_3088_);
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1___redArg(){
_start:
{
lean_object* v___x_3096_; 
v___x_3096_ = lean_box(0);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1___redArg___boxed(lean_object* v___dummy_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1___redArg();
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Job_Monad_0__Lake_Job_collectVector_unsafe__1(lean_object* v_00_u03b1_3099_, lean_object* v_inst_3100_){
_start:
{
lean_object* v___x_3101_; 
v___x_3101_ = lean_box(0);
return v___x_3101_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__0(lean_object* v___x_3102_, lean_object* v_rx_3103_, lean_object* v_i_3104_, lean_object* v_ry_3105_){
_start:
{
lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3112_; lean_object* v___y_3113_; 
if (lean_obj_tag(v_rx_3103_) == 0)
{
if (lean_obj_tag(v_ry_3105_) == 0)
{
lean_object* v_a_3115_; lean_object* v_a_3116_; lean_object* v_a_3117_; lean_object* v_a_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3127_; 
lean_dec(v___x_3102_);
v_a_3115_ = lean_ctor_get(v_rx_3103_, 0);
lean_inc(v_a_3115_);
v_a_3116_ = lean_ctor_get(v_rx_3103_, 1);
lean_inc(v_a_3116_);
lean_dec_ref_known(v_rx_3103_, 2);
v_a_3117_ = lean_ctor_get(v_ry_3105_, 0);
v_a_3118_ = lean_ctor_get(v_ry_3105_, 1);
v_isSharedCheck_3127_ = !lean_is_exclusive(v_ry_3105_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3120_ = v_ry_3105_;
v_isShared_3121_ = v_isSharedCheck_3127_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_a_3118_);
lean_inc(v_a_3117_);
lean_dec(v_ry_3105_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3127_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3125_; 
v___x_3122_ = lean_array_fset(v_a_3115_, v_i_3104_, v_a_3117_);
v___x_3123_ = l_Lake_JobState_merge(v_a_3116_, v_a_3118_);
if (v_isShared_3121_ == 0)
{
lean_ctor_set(v___x_3120_, 1, v___x_3123_);
lean_ctor_set(v___x_3120_, 0, v___x_3122_);
v___x_3125_ = v___x_3120_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3122_);
lean_ctor_set(v_reuseFailAlloc_3126_, 1, v___x_3123_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
else
{
lean_object* v_a_3128_; 
v_a_3128_ = lean_ctor_get(v_rx_3103_, 1);
lean_inc(v_a_3128_);
lean_dec_ref_known(v_rx_3103_, 2);
v___y_3112_ = v_ry_3105_;
v___y_3113_ = v_a_3128_;
goto v___jp_3111_;
}
}
else
{
lean_object* v_a_3129_; 
v_a_3129_ = lean_ctor_get(v_rx_3103_, 1);
lean_inc(v_a_3129_);
lean_dec_ref(v_rx_3103_);
v___y_3112_ = v_ry_3105_;
v___y_3113_ = v_a_3129_;
goto v___jp_3111_;
}
v___jp_3106_:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3109_ = l_Lake_JobState_merge(v___y_3107_, v___y_3108_);
v___x_3110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3102_);
lean_ctor_set(v___x_3110_, 1, v___x_3109_);
return v___x_3110_;
}
v___jp_3111_:
{
lean_object* v_a_3114_; 
v_a_3114_ = lean_ctor_get(v___y_3112_, 1);
lean_inc(v_a_3114_);
lean_dec_ref(v___y_3112_);
v___y_3107_ = v___y_3113_;
v___y_3108_ = v_a_3114_;
goto v___jp_3106_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__0___boxed(lean_object* v___x_3130_, lean_object* v_rx_3131_, lean_object* v_i_3132_, lean_object* v_ry_3133_){
_start:
{
lean_object* v_res_3134_; 
v_res_3134_ = l_Lake_Job_collectVector___redArg___lam__0(v___x_3130_, v_rx_3131_, v_i_3132_, v_ry_3133_);
lean_dec(v_i_3132_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__1(lean_object* v___x_3135_, lean_object* v___x_3136_, lean_object* v_i_3137_, uint8_t v___x_3138_, lean_object* v_rx_3139_){
_start:
{
lean_object* v_task_3140_; lean_object* v___f_3141_; lean_object* v___x_3142_; 
v_task_3140_ = lean_ctor_get(v___x_3135_, 0);
lean_inc_ref(v_task_3140_);
lean_dec_ref(v___x_3135_);
lean_inc(v___x_3136_);
v___f_3141_ = lean_alloc_closure((void*)(l_Lake_Job_collectVector___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3141_, 0, v___x_3136_);
lean_closure_set(v___f_3141_, 1, v_rx_3139_);
lean_closure_set(v___f_3141_, 2, v_i_3137_);
v___x_3142_ = lean_task_map(v___f_3141_, v_task_3140_, v___x_3136_, v___x_3138_);
return v___x_3142_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__1___boxed(lean_object* v___x_3143_, lean_object* v___x_3144_, lean_object* v_i_3145_, lean_object* v___x_3146_, lean_object* v_rx_3147_){
_start:
{
uint8_t v___x_191__boxed_3148_; lean_object* v_res_3149_; 
v___x_191__boxed_3148_ = lean_unbox(v___x_3146_);
v_res_3149_ = l_Lake_Job_collectVector___redArg___lam__1(v___x_3143_, v___x_3144_, v_i_3145_, v___x_191__boxed_3148_, v_rx_3147_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__2(lean_object* v_jobs_3150_, lean_object* v___x_3151_, lean_object* v_i_3152_, lean_object* v_h_3153_, lean_object* v_job_3154_){
_start:
{
lean_object* v_task_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3170_; 
v_task_3155_ = lean_ctor_get(v_job_3154_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v_job_3154_);
if (v_isSharedCheck_3170_ == 0)
{
lean_object* v_unused_3171_; lean_object* v_unused_3172_; 
v_unused_3171_ = lean_ctor_get(v_job_3154_, 2);
lean_dec(v_unused_3171_);
v_unused_3172_ = lean_ctor_get(v_job_3154_, 1);
lean_dec(v_unused_3172_);
v___x_3157_ = v_job_3154_;
v_isShared_3158_ = v_isSharedCheck_3170_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_task_3155_);
lean_dec(v_job_3154_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3170_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; uint8_t v___x_3161_; lean_object* v___x_3162_; lean_object* v___f_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; uint8_t v___x_3166_; lean_object* v___x_3168_; 
v___x_3159_ = lean_array_fget_borrowed(v_jobs_3150_, v_i_3152_);
v___x_3160_ = lean_unsigned_to_nat(0u);
v___x_3161_ = 1;
v___x_3162_ = lean_box(v___x_3161_);
lean_inc(v___x_3159_);
v___f_3163_ = lean_alloc_closure((void*)(l_Lake_Job_collectVector___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3163_, 0, v___x_3159_);
lean_closure_set(v___f_3163_, 1, v___x_3160_);
lean_closure_set(v___f_3163_, 2, v_i_3152_);
lean_closure_set(v___f_3163_, 3, v___x_3162_);
v___x_3164_ = lean_task_bind(v_task_3155_, v___f_3163_, v___x_3160_, v___x_3161_);
v___x_3165_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_3166_ = 0;
if (v_isShared_3158_ == 0)
{
lean_ctor_set(v___x_3157_, 2, v___x_3165_);
lean_ctor_set(v___x_3157_, 1, v___x_3151_);
lean_ctor_set(v___x_3157_, 0, v___x_3164_);
v___x_3168_ = v___x_3157_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v___x_3164_);
lean_ctor_set(v_reuseFailAlloc_3169_, 1, v___x_3151_);
lean_ctor_set(v_reuseFailAlloc_3169_, 2, v___x_3165_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
lean_ctor_set_uint8(v___x_3168_, sizeof(void*)*3, v___x_3166_);
return v___x_3168_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg___lam__2___boxed(lean_object* v_jobs_3173_, lean_object* v___x_3174_, lean_object* v_i_3175_, lean_object* v_h_3176_, lean_object* v_job_3177_){
_start:
{
lean_object* v_res_3178_; 
v_res_3178_ = l_Lake_Job_collectVector___redArg___lam__2(v_jobs_3173_, v___x_3174_, v_i_3175_, v_h_3176_, v_job_3177_);
lean_dec_ref(v_jobs_3173_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector___redArg(lean_object* v_n_3179_, lean_object* v_jobs_3180_, lean_object* v_traceCaption_3181_){
_start:
{
lean_object* v_placeholder_3182_; lean_object* v___x_3183_; lean_object* v___f_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; uint8_t v___x_3188_; uint8_t v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v_placeholder_3182_ = lean_box(0);
v___x_3183_ = lean_box(0);
v___f_3184_ = lean_alloc_closure((void*)(l_Lake_Job_collectVector___redArg___lam__2___boxed), 5, 2);
lean_closure_set(v___f_3184_, 0, v_jobs_3180_);
lean_closure_set(v___f_3184_, 1, v___x_3183_);
lean_inc_n(v_n_3179_, 2);
v___x_3185_ = lean_mk_array(v_n_3179_, v_placeholder_3182_);
v___x_3186_ = lean_unsigned_to_nat(0u);
v___x_3187_ = ((lean_object*)(l_Lake_Job_sync___redArg___closed__1));
v___x_3188_ = 0;
v___x_3189_ = 0;
v___x_3190_ = l_Lake_BuildTrace_nil(v_traceCaption_3181_);
v___x_3191_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3191_, 0, v___x_3187_);
lean_ctor_set(v___x_3191_, 1, v___x_3190_);
lean_ctor_set(v___x_3191_, 2, v___x_3186_);
lean_ctor_set_uint8(v___x_3191_, sizeof(void*)*3, v___x_3188_);
lean_ctor_set_uint8(v___x_3191_, sizeof(void*)*3 + 1, v___x_3189_);
v___x_3192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3185_);
lean_ctor_set(v___x_3192_, 1, v___x_3191_);
v___x_3193_ = lean_task_pure(v___x_3192_);
v___x_3194_ = ((lean_object*)(l_panic___at___00Lake_Job_sync_spec__0___closed__0));
v___x_3195_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3195_, 0, v___x_3193_);
lean_ctor_set(v___x_3195_, 1, v___x_3183_);
lean_ctor_set(v___x_3195_, 2, v___x_3194_);
lean_ctor_set_uint8(v___x_3195_, sizeof(void*)*3, v___x_3189_);
v___x_3196_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_box(0), v_n_3179_, v___f_3184_, v_n_3179_, lean_box(0), v___x_3195_);
lean_dec(v_n_3179_);
return v___x_3196_;
}
}
LEAN_EXPORT lean_object* l_Lake_Job_collectVector(lean_object* v_n_3197_, lean_object* v_00_u03b1_3198_, lean_object* v_inst_3199_, lean_object* v_jobs_3200_, lean_object* v_traceCaption_3201_){
_start:
{
lean_object* v___x_3202_; 
v___x_3202_ = l_Lake_Job_collectVector___redArg(v_n_3197_, v_jobs_3200_, v_traceCaption_3201_);
return v___x_3202_;
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
