// Lean compiler output
// Module: Lean.Compiler.LCNF.ReduceJpArity
// Imports: public import Lean.Compiler.LCNF.InferType
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_collectUsed(uint8_t, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_FVarIdHashSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectType(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkForallParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedPass;
lean_object* l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1;
static const lean_array_object l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2_value)}};
static const lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__3_value;
static const lean_array_object l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_reduceJpArity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_ReduceJpArity_reduce___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceJpArity___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "reduceJpArity"};
static const lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 159, 49, 195, 174, 35, 168, 118)}};
static const lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_reduceJpArity___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___boxed(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 194, 75, 24, 236, 214, 183, 95)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ReduceJpArity"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(206, 30, 138, 61, 117, 158, 32, 171)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(247, 202, 243, 145, 134, 14, 156, 223)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(138, 71, 137, 153, 8, 216, 125, 218)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(88, 239, 35, 247, 68, 251, 253, 157)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 2, 183, 133, 65, 4, 212, 40)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(104, 156, 123, 97, 186, 125, 28, 79)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(25, 186, 51, 177, 148, 122, 241, 48)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(252, 180, 182, 41, 102, 220, 202, 70)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 168, 162, 217, 66, 73, 237, 35)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(111, 53, 57, 59, 209, 159, 92, 167)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 96, 72, 119, 107, 230, 50, 70)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)(((size_t)(563472653) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(212, 196, 129, 99, 150, 27, 32, 210)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(155, 57, 146, 186, 53, 90, 0, 223)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(123, 247, 77, 12, 224, 72, 150, 173)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(14, 155, 198, 21, 80, 165, 91, 81)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg(lean_object* v_as_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_b_4_, lean_object* v___y_5_){
_start:
{
lean_object* v_a_8_; uint8_t v___x_12_; 
v___x_12_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; 
v___x_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_13_, 0, v_b_4_);
return v___x_13_;
}
else
{
lean_object* v_snd_14_; lean_object* v_fst_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_57_; 
v_snd_14_ = lean_ctor_get(v_b_4_, 1);
v_fst_15_ = lean_ctor_get(v_b_4_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v_b_4_);
if (v_isSharedCheck_57_ == 0)
{
v___x_17_ = v_b_4_;
v_isShared_18_ = v_isSharedCheck_57_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_snd_14_);
lean_inc(v_fst_15_);
lean_dec(v_b_4_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_57_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v_fst_19_; lean_object* v_snd_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_56_; 
v_fst_19_ = lean_ctor_get(v_snd_14_, 0);
v_snd_20_ = lean_ctor_get(v_snd_14_, 1);
v_isSharedCheck_56_ = !lean_is_exclusive(v_snd_14_);
if (v_isSharedCheck_56_ == 0)
{
v___x_22_ = v_snd_14_;
v_isShared_23_ = v_isSharedCheck_56_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_snd_20_);
lean_inc(v_fst_19_);
lean_dec(v_snd_14_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_56_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v_a_24_; lean_object* v_fvarId_25_; lean_object* v_type_26_; uint8_t v___x_27_; 
v_a_24_ = lean_array_uget_borrowed(v_as_1_, v_i_3_);
v_fvarId_25_ = lean_ctor_get(v_a_24_, 0);
v_type_26_ = lean_ctor_get(v_a_24_, 2);
v___x_27_ = l_Lean_FVarIdHashSet_contains(v_fst_15_, v_fvarId_25_);
if (v___x_27_ == 0)
{
uint8_t v___x_28_; lean_object* v___x_29_; 
v___x_28_ = 0;
v___x_29_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_28_, v_a_24_, v___y_5_);
if (lean_obj_tag(v___x_29_) == 0)
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_33_; 
lean_dec_ref_known(v___x_29_, 1);
v___x_30_ = lean_box(v___x_27_);
v___x_31_ = lean_array_push(v_fst_19_, v___x_30_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 0, v___x_31_);
v___x_33_ = v___x_22_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v___x_31_);
lean_ctor_set(v_reuseFailAlloc_37_, 1, v_snd_20_);
v___x_33_ = v_reuseFailAlloc_37_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_object* v___x_35_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 1, v___x_33_);
v___x_35_ = v___x_17_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_fst_15_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v___x_33_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
v_a_8_ = v___x_35_;
goto v___jp_7_;
}
}
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
lean_del_object(v___x_22_);
lean_dec(v_snd_20_);
lean_dec(v_fst_19_);
lean_del_object(v___x_17_);
lean_dec(v_fst_15_);
v_a_38_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_29_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_29_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
else
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_51_; 
lean_inc_ref(v_type_26_);
v___x_46_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectType(v_type_26_, v_fst_15_);
v___x_47_ = lean_box(v___x_27_);
v___x_48_ = lean_array_push(v_fst_19_, v___x_47_);
lean_inc(v_a_24_);
v___x_49_ = lean_array_push(v_snd_20_, v_a_24_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v___x_49_);
lean_ctor_set(v___x_22_, 0, v___x_48_);
v___x_51_ = v___x_22_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_48_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v___x_49_);
v___x_51_ = v_reuseFailAlloc_55_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_53_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 1, v___x_51_);
lean_ctor_set(v___x_17_, 0, v___x_46_);
v___x_53_ = v___x_17_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_46_);
lean_ctor_set(v_reuseFailAlloc_54_, 1, v___x_51_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
v_a_8_ = v___x_53_;
goto v___jp_7_;
}
}
}
}
}
}
v___jp_7_:
{
size_t v___x_9_; size_t v___x_10_; 
v___x_9_ = ((size_t)1ULL);
v___x_10_ = lean_usize_add(v_i_3_, v___x_9_);
v_i_3_ = v___x_10_;
v_b_4_ = v_a_8_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg___boxed(lean_object* v_as_58_, lean_object* v_sz_59_, lean_object* v_i_60_, lean_object* v_b_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
size_t v_sz_boxed_64_; size_t v_i_boxed_65_; lean_object* v_res_66_; 
v_sz_boxed_64_ = lean_unbox_usize(v_sz_59_);
lean_dec(v_sz_59_);
v_i_boxed_65_ = lean_unbox_usize(v_i_60_);
lean_dec(v_i_60_);
v_res_66_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg(v_as_58_, v_sz_boxed_64_, v_i_boxed_65_, v_b_61_, v___y_62_);
lean_dec(v___y_62_);
lean_dec_ref(v_as_58_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg(lean_object* v_as_67_, size_t v_sz_68_, size_t v_i_69_, lean_object* v_b_70_){
_start:
{
lean_object* v_a_73_; uint8_t v___x_77_; 
v___x_77_ = lean_usize_dec_lt(v_i_69_, v_sz_68_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; 
v___x_78_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_78_, 0, v_b_70_);
return v___x_78_;
}
else
{
lean_object* v_snd_79_; lean_object* v_fst_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_114_; 
v_snd_79_ = lean_ctor_get(v_b_70_, 1);
v_fst_80_ = lean_ctor_get(v_b_70_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v_b_70_);
if (v_isSharedCheck_114_ == 0)
{
v___x_82_ = v_b_70_;
v_isShared_83_ = v_isSharedCheck_114_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_snd_79_);
lean_inc(v_fst_80_);
lean_dec(v_b_70_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_114_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v_array_84_; lean_object* v_start_85_; lean_object* v_stop_86_; uint8_t v___x_87_; 
v_array_84_ = lean_ctor_get(v_snd_79_, 0);
v_start_85_ = lean_ctor_get(v_snd_79_, 1);
v_stop_86_ = lean_ctor_get(v_snd_79_, 2);
v___x_87_ = lean_nat_dec_lt(v_start_85_, v_stop_86_);
if (v___x_87_ == 0)
{
lean_object* v___x_89_; 
if (v_isShared_83_ == 0)
{
v___x_89_ = v___x_82_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_fst_80_);
lean_ctor_set(v_reuseFailAlloc_91_, 1, v_snd_79_);
v___x_89_ = v_reuseFailAlloc_91_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_90_; 
v___x_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
}
else
{
lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_110_; 
lean_inc(v_stop_86_);
lean_inc(v_start_85_);
lean_inc_ref(v_array_84_);
v_isSharedCheck_110_ = !lean_is_exclusive(v_snd_79_);
if (v_isSharedCheck_110_ == 0)
{
lean_object* v_unused_111_; lean_object* v_unused_112_; lean_object* v_unused_113_; 
v_unused_111_ = lean_ctor_get(v_snd_79_, 2);
lean_dec(v_unused_111_);
v_unused_112_ = lean_ctor_get(v_snd_79_, 1);
lean_dec(v_unused_112_);
v_unused_113_ = lean_ctor_get(v_snd_79_, 0);
lean_dec(v_unused_113_);
v___x_93_ = v_snd_79_;
v_isShared_94_ = v_isSharedCheck_110_;
goto v_resetjp_92_;
}
else
{
lean_dec(v_snd_79_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_110_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_a_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
v_a_95_ = lean_array_uget_borrowed(v_as_67_, v_i_69_);
v___x_96_ = lean_array_fget(v_array_84_, v_start_85_);
v___x_97_ = lean_unsigned_to_nat(1u);
v___x_98_ = lean_nat_add(v_start_85_, v___x_97_);
lean_dec(v_start_85_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v___x_98_);
v___x_100_ = v___x_93_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_array_84_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v___x_98_);
lean_ctor_set(v_reuseFailAlloc_109_, 2, v_stop_86_);
v___x_100_ = v_reuseFailAlloc_109_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
uint8_t v___x_101_; 
v___x_101_ = lean_unbox(v_a_95_);
if (v___x_101_ == 0)
{
lean_object* v___x_103_; 
lean_dec(v___x_96_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v___x_100_);
v___x_103_ = v___x_82_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_fst_80_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v___x_100_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
v_a_73_ = v___x_103_;
goto v___jp_72_;
}
}
else
{
lean_object* v___x_105_; lean_object* v___x_107_; 
v___x_105_ = lean_array_push(v_fst_80_, v___x_96_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v___x_100_);
lean_ctor_set(v___x_82_, 0, v___x_105_);
v___x_107_ = v___x_82_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v___x_105_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v___x_100_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
v_a_73_ = v___x_107_;
goto v___jp_72_;
}
}
}
}
}
}
}
v___jp_72_:
{
size_t v___x_74_; size_t v___x_75_; 
v___x_74_ = ((size_t)1ULL);
v___x_75_ = lean_usize_add(v_i_69_, v___x_74_);
v_i_69_ = v___x_75_;
v_b_70_ = v_a_73_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg___boxed(lean_object* v_as_115_, lean_object* v_sz_116_, lean_object* v_i_117_, lean_object* v_b_118_, lean_object* v___y_119_){
_start:
{
size_t v_sz_boxed_120_; size_t v_i_boxed_121_; lean_object* v_res_122_; 
v_sz_boxed_120_ = lean_unbox_usize(v_sz_116_);
lean_dec(v_sz_116_);
v_i_boxed_121_ = lean_unbox_usize(v_i_117_);
lean_dec(v_i_117_);
v_res_122_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg(v_as_115_, v_sz_boxed_120_, v_i_boxed_121_, v_b_118_);
lean_dec_ref(v_as_115_);
return v_res_122_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_box(0);
v___x_124_ = lean_unsigned_to_nat(16u);
v___x_125_ = lean_mk_array(v___x_124_, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_126_ = lean_obj_once(&l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0, &l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0_once, _init_l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0);
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___x_126_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce(lean_object* v_code_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
switch(lean_obj_tag(v_code_135_))
{
case 0:
{
lean_object* v_decl_142_; lean_object* v_k_143_; lean_object* v___x_144_; 
v_decl_142_ = lean_ctor_get(v_code_135_, 0);
v_k_143_ = lean_ctor_get(v_code_135_, 1);
lean_inc_ref(v_k_143_);
v___x_144_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_k_143_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_181_; 
v_a_145_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_181_ == 0)
{
v___x_147_ = v___x_144_;
v_isShared_148_ = v_isSharedCheck_181_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_144_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_181_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
size_t v___x_149_; size_t v___x_150_; uint8_t v___x_151_; 
v___x_149_ = lean_ptr_addr(v_k_143_);
v___x_150_ = lean_ptr_addr(v_a_145_);
v___x_151_ = lean_usize_dec_eq(v___x_149_, v___x_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_161_; 
lean_inc_ref(v_decl_142_);
v_isSharedCheck_161_ = !lean_is_exclusive(v_code_135_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; lean_object* v_unused_163_; 
v_unused_162_ = lean_ctor_get(v_code_135_, 1);
lean_dec(v_unused_162_);
v_unused_163_ = lean_ctor_get(v_code_135_, 0);
lean_dec(v_unused_163_);
v___x_153_ = v_code_135_;
v_isShared_154_ = v_isSharedCheck_161_;
goto v_resetjp_152_;
}
else
{
lean_dec(v_code_135_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_161_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 1, v_a_145_);
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_decl_142_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_a_145_);
v___x_156_ = v_reuseFailAlloc_160_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
lean_object* v___x_158_; 
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_156_);
v___x_158_ = v___x_147_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
else
{
size_t v___x_164_; uint8_t v___x_165_; 
v___x_164_ = lean_ptr_addr(v_decl_142_);
v___x_165_ = lean_usize_dec_eq(v___x_164_, v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_175_; 
lean_inc_ref(v_decl_142_);
v_isSharedCheck_175_ = !lean_is_exclusive(v_code_135_);
if (v_isSharedCheck_175_ == 0)
{
lean_object* v_unused_176_; lean_object* v_unused_177_; 
v_unused_176_ = lean_ctor_get(v_code_135_, 1);
lean_dec(v_unused_176_);
v_unused_177_ = lean_ctor_get(v_code_135_, 0);
lean_dec(v_unused_177_);
v___x_167_ = v_code_135_;
v_isShared_168_ = v_isSharedCheck_175_;
goto v_resetjp_166_;
}
else
{
lean_dec(v_code_135_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_175_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v_a_145_);
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_decl_142_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_a_145_);
v___x_170_ = v_reuseFailAlloc_174_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_object* v___x_172_; 
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_170_);
v___x_172_ = v___x_147_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_170_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
}
else
{
lean_object* v___x_179_; 
lean_dec(v_a_145_);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v_code_135_);
v___x_179_ = v___x_147_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_code_135_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_135_, 2);
return v___x_144_;
}
}
case 1:
{
lean_object* v_decl_182_; lean_object* v_k_183_; lean_object* v_params_184_; lean_object* v_type_185_; lean_object* v_value_186_; uint8_t v___x_187_; lean_object* v___x_188_; 
v_decl_182_ = lean_ctor_get(v_code_135_, 0);
v_k_183_ = lean_ctor_get(v_code_135_, 1);
v_params_184_ = lean_ctor_get(v_decl_182_, 2);
v_type_185_ = lean_ctor_get(v_decl_182_, 3);
v_value_186_ = lean_ctor_get(v_decl_182_, 4);
v___x_187_ = 0;
lean_inc_ref(v_value_186_);
v___x_188_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_value_186_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v_a_189_; lean_object* v___x_190_; 
v_a_189_ = lean_ctor_get(v___x_188_, 0);
lean_inc(v_a_189_);
lean_dec_ref_known(v___x_188_, 1);
lean_inc_ref(v_params_184_);
lean_inc_ref(v_type_185_);
lean_inc_ref(v_decl_182_);
v___x_190_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_187_, v_decl_182_, v_type_185_, v_params_184_, v_a_189_, v_a_138_);
if (lean_obj_tag(v___x_190_) == 0)
{
lean_object* v_a_191_; lean_object* v___x_192_; 
v_a_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc(v_a_191_);
lean_dec_ref_known(v___x_190_, 1);
lean_inc_ref(v_k_183_);
v___x_192_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_k_183_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_230_; 
v_a_193_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_230_ == 0)
{
v___x_195_ = v___x_192_;
v_isShared_196_ = v_isSharedCheck_230_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_192_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_230_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
size_t v___x_197_; size_t v___x_198_; uint8_t v___x_199_; 
v___x_197_ = lean_ptr_addr(v_k_183_);
v___x_198_ = lean_ptr_addr(v_a_193_);
v___x_199_ = lean_usize_dec_eq(v___x_197_, v___x_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_209_; 
v_isSharedCheck_209_ = !lean_is_exclusive(v_code_135_);
if (v_isSharedCheck_209_ == 0)
{
lean_object* v_unused_210_; lean_object* v_unused_211_; 
v_unused_210_ = lean_ctor_get(v_code_135_, 1);
lean_dec(v_unused_210_);
v_unused_211_ = lean_ctor_get(v_code_135_, 0);
lean_dec(v_unused_211_);
v___x_201_ = v_code_135_;
v_isShared_202_ = v_isSharedCheck_209_;
goto v_resetjp_200_;
}
else
{
lean_dec(v_code_135_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_209_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v_a_193_);
lean_ctor_set(v___x_201_, 0, v_a_191_);
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_191_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_a_193_);
v___x_204_ = v_reuseFailAlloc_208_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
lean_object* v___x_206_; 
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 0, v___x_204_);
v___x_206_ = v___x_195_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_204_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
else
{
size_t v___x_212_; size_t v___x_213_; uint8_t v___x_214_; 
v___x_212_ = lean_ptr_addr(v_decl_182_);
v___x_213_ = lean_ptr_addr(v_a_191_);
v___x_214_ = lean_usize_dec_eq(v___x_212_, v___x_213_);
if (v___x_214_ == 0)
{
lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_224_; 
v_isSharedCheck_224_ = !lean_is_exclusive(v_code_135_);
if (v_isSharedCheck_224_ == 0)
{
lean_object* v_unused_225_; lean_object* v_unused_226_; 
v_unused_225_ = lean_ctor_get(v_code_135_, 1);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_code_135_, 0);
lean_dec(v_unused_226_);
v___x_216_ = v_code_135_;
v_isShared_217_ = v_isSharedCheck_224_;
goto v_resetjp_215_;
}
else
{
lean_dec(v_code_135_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_224_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 1, v_a_193_);
lean_ctor_set(v___x_216_, 0, v_a_191_);
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_191_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v_a_193_);
v___x_219_ = v_reuseFailAlloc_223_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
lean_object* v___x_221_; 
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 0, v___x_219_);
v___x_221_ = v___x_195_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
else
{
lean_object* v___x_228_; 
lean_dec(v_a_193_);
lean_dec(v_a_191_);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 0, v_code_135_);
v___x_228_ = v___x_195_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_code_135_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
}
else
{
lean_dec(v_a_191_);
lean_dec_ref_known(v_code_135_, 2);
return v___x_192_;
}
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
lean_dec_ref_known(v_code_135_, 2);
v_a_231_ = lean_ctor_get(v___x_190_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_190_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_190_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_135_, 2);
return v___x_188_;
}
}
case 2:
{
lean_object* v_decl_239_; lean_object* v_k_240_; lean_object* v_params_241_; lean_object* v_type_242_; lean_object* v_value_243_; uint8_t v___x_244_; lean_object* v___x_245_; 
v_decl_239_ = lean_ctor_get(v_code_135_, 0);
v_k_240_ = lean_ctor_get(v_code_135_, 1);
v_params_241_ = lean_ctor_get(v_decl_239_, 2);
v_type_242_ = lean_ctor_get(v_decl_239_, 3);
v_value_243_ = lean_ctor_get(v_decl_239_, 4);
v___x_244_ = 0;
lean_inc_ref(v_value_243_);
v___x_245_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_value_243_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; size_t v_sz_252_; size_t v___x_253_; lean_object* v___x_254_; 
v_a_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc_n(v_a_246_, 2);
lean_dec_ref_known(v___x_245_, 1);
v___x_247_ = lean_obj_once(&l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1, &l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1_once, _init_l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1);
v___x_248_ = l_Lean_Compiler_LCNF_Code_collectUsed(v___x_244_, v_a_246_, v___x_247_);
lean_inc_ref(v_params_241_);
v___x_249_ = l_Array_reverse___redArg(v_params_241_);
v___x_250_ = ((lean_object*)(l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__3));
v___x_251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_248_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v_sz_252_ = lean_array_size(v___x_249_);
v___x_253_ = ((size_t)0ULL);
v___x_254_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg(v___x_249_, v_sz_252_, v___x_253_, v___x_251_, v_a_138_);
lean_dec_ref(v___x_249_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v_snd_256_; lean_object* v_fst_257_; lean_object* v_snd_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; 
v_a_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_a_255_);
lean_dec_ref_known(v___x_254_, 1);
v_snd_256_ = lean_ctor_get(v_a_255_, 1);
lean_inc(v_snd_256_);
lean_dec(v_a_255_);
v_fst_257_ = lean_ctor_get(v_snd_256_, 0);
lean_inc(v_fst_257_);
v_snd_258_ = lean_ctor_get(v_snd_256_, 1);
lean_inc(v_snd_258_);
lean_dec(v_snd_256_);
v___x_259_ = l_Array_reverse___redArg(v_snd_258_);
v___x_260_ = lean_array_get_size(v___x_259_);
v___x_261_ = lean_array_get_size(v_params_241_);
v___x_262_ = lean_nat_dec_eq(v___x_260_, v___x_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_311_; 
lean_inc_ref(v_k_240_);
lean_inc_ref(v_decl_239_);
v_isSharedCheck_311_ = !lean_is_exclusive(v_code_135_);
if (v_isSharedCheck_311_ == 0)
{
lean_object* v_unused_312_; lean_object* v_unused_313_; 
v_unused_312_ = lean_ctor_get(v_code_135_, 1);
lean_dec(v_unused_312_);
v_unused_313_ = lean_ctor_get(v_code_135_, 0);
lean_dec(v_unused_313_);
v___x_264_ = v_code_135_;
v_isShared_265_ = v_isSharedCheck_311_;
goto v_resetjp_263_;
}
else
{
lean_dec(v_code_135_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_311_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = l_Array_reverse___redArg(v_fst_257_);
lean_inc(v_a_246_);
v___x_267_ = l_Lean_Compiler_LCNF_Code_inferType(v___x_244_, v_a_246_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_269_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_a_268_);
lean_dec_ref_known(v___x_267_, 1);
lean_inc_ref(v___x_259_);
v___x_269_ = l_Lean_Compiler_LCNF_mkForallParams(v___x_244_, v___x_259_, v_a_268_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
lean_dec(v_a_268_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v_a_270_; lean_object* v___x_271_; 
v_a_270_ = lean_ctor_get(v___x_269_, 0);
lean_inc(v_a_270_);
lean_dec_ref_known(v___x_269_, 1);
v___x_271_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_244_, v_decl_239_, v_a_270_, v___x_259_, v_a_246_, v_a_138_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v_fvarId_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v_a_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_272_);
lean_dec_ref_known(v___x_271_, 1);
v_fvarId_273_ = lean_ctor_get(v_a_272_, 0);
lean_inc(v_a_136_);
lean_inc(v_fvarId_273_);
v___x_274_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_273_, v___x_266_, v_a_136_);
v___x_275_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_k_240_, v___x_274_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
lean_dec(v___x_274_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_286_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_286_ == 0)
{
v___x_278_ = v___x_275_;
v_isShared_279_ = v_isSharedCheck_286_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_275_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_286_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 1, v_a_276_);
lean_ctor_set(v___x_264_, 0, v_a_272_);
v___x_281_ = v___x_264_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_272_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_a_276_);
v___x_281_ = v_reuseFailAlloc_285_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_283_; 
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 0, v___x_281_);
v___x_283_ = v___x_278_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v___x_281_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
else
{
lean_dec(v_a_272_);
lean_del_object(v___x_264_);
return v___x_275_;
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec_ref(v___x_266_);
lean_del_object(v___x_264_);
lean_dec_ref(v_k_240_);
v_a_287_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_271_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_271_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
else
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_302_; 
lean_dec_ref(v___x_266_);
lean_del_object(v___x_264_);
lean_dec_ref(v___x_259_);
lean_dec(v_a_246_);
lean_dec_ref(v_k_240_);
lean_dec_ref(v_decl_239_);
v_a_295_ = lean_ctor_get(v___x_269_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_302_ == 0)
{
v___x_297_ = v___x_269_;
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_269_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_298_ == 0)
{
v___x_300_ = v___x_297_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_295_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
else
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
lean_dec_ref(v___x_266_);
lean_del_object(v___x_264_);
lean_dec_ref(v___x_259_);
lean_dec(v_a_246_);
lean_dec_ref(v_k_240_);
lean_dec_ref(v_decl_239_);
v_a_303_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v___x_267_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_267_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
}
else
{
lean_object* v___x_314_; 
lean_dec_ref(v___x_259_);
lean_dec(v_fst_257_);
lean_inc_ref(v_params_241_);
lean_inc_ref(v_type_242_);
lean_inc_ref(v_decl_239_);
v___x_314_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_244_, v_decl_239_, v_type_242_, v_params_241_, v_a_246_, v_a_138_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v___x_316_; 
v_a_315_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_a_315_);
lean_dec_ref_known(v___x_314_, 1);
lean_inc_ref(v_k_240_);
v___x_316_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_k_240_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_354_; 
v_a_317_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_354_ == 0)
{
v___x_319_ = v___x_316_;
v_isShared_320_ = v_isSharedCheck_354_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_316_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_354_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
size_t v___x_321_; size_t v___x_322_; uint8_t v___x_323_; 
v___x_321_ = lean_ptr_addr(v_k_240_);
v___x_322_ = lean_ptr_addr(v_a_317_);
v___x_323_ = lean_usize_dec_eq(v___x_321_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_333_; 
v_isSharedCheck_333_ = !lean_is_exclusive(v_code_135_);
if (v_isSharedCheck_333_ == 0)
{
lean_object* v_unused_334_; lean_object* v_unused_335_; 
v_unused_334_ = lean_ctor_get(v_code_135_, 1);
lean_dec(v_unused_334_);
v_unused_335_ = lean_ctor_get(v_code_135_, 0);
lean_dec(v_unused_335_);
v___x_325_ = v_code_135_;
v_isShared_326_ = v_isSharedCheck_333_;
goto v_resetjp_324_;
}
else
{
lean_dec(v_code_135_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_333_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 1, v_a_317_);
lean_ctor_set(v___x_325_, 0, v_a_315_);
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_a_315_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_a_317_);
v___x_328_ = v_reuseFailAlloc_332_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_330_; 
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 0, v___x_328_);
v___x_330_ = v___x_319_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_328_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
else
{
size_t v___x_336_; size_t v___x_337_; uint8_t v___x_338_; 
v___x_336_ = lean_ptr_addr(v_decl_239_);
v___x_337_ = lean_ptr_addr(v_a_315_);
v___x_338_ = lean_usize_dec_eq(v___x_336_, v___x_337_);
if (v___x_338_ == 0)
{
lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_348_; 
v_isSharedCheck_348_ = !lean_is_exclusive(v_code_135_);
if (v_isSharedCheck_348_ == 0)
{
lean_object* v_unused_349_; lean_object* v_unused_350_; 
v_unused_349_ = lean_ctor_get(v_code_135_, 1);
lean_dec(v_unused_349_);
v_unused_350_ = lean_ctor_get(v_code_135_, 0);
lean_dec(v_unused_350_);
v___x_340_ = v_code_135_;
v_isShared_341_ = v_isSharedCheck_348_;
goto v_resetjp_339_;
}
else
{
lean_dec(v_code_135_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_348_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 1, v_a_317_);
lean_ctor_set(v___x_340_, 0, v_a_315_);
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_315_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v_a_317_);
v___x_343_ = v_reuseFailAlloc_347_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
lean_object* v___x_345_; 
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 0, v___x_343_);
v___x_345_ = v___x_319_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_343_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
else
{
lean_object* v___x_352_; 
lean_dec(v_a_317_);
lean_dec(v_a_315_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 0, v_code_135_);
v___x_352_ = v___x_319_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_code_135_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
}
else
{
lean_dec(v_a_315_);
lean_dec_ref_known(v_code_135_, 2);
return v___x_316_;
}
}
else
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_362_; 
lean_dec_ref_known(v_code_135_, 2);
v_a_355_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_362_ == 0)
{
v___x_357_ = v___x_314_;
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_314_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_355_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
}
}
else
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_370_; 
lean_dec(v_a_246_);
lean_dec_ref_known(v_code_135_, 2);
v_a_363_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_370_ == 0)
{
v___x_365_ = v___x_254_;
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_254_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_368_; 
if (v_isShared_366_ == 0)
{
v___x_368_ = v___x_365_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_a_363_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_135_, 2);
return v___x_245_;
}
}
case 3:
{
lean_object* v_fvarId_371_; lean_object* v_args_372_; lean_object* v___x_373_; 
v_fvarId_371_ = lean_ctor_get(v_code_135_, 0);
v_args_372_ = lean_ctor_get(v_code_135_, 1);
v___x_373_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_a_136_, v_fvarId_371_);
if (lean_obj_tag(v___x_373_) == 1)
{
lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_406_; 
lean_inc_ref(v_args_372_);
lean_inc(v_fvarId_371_);
v_isSharedCheck_406_ = !lean_is_exclusive(v_code_135_);
if (v_isSharedCheck_406_ == 0)
{
lean_object* v_unused_407_; lean_object* v_unused_408_; 
v_unused_407_ = lean_ctor_get(v_code_135_, 1);
lean_dec(v_unused_407_);
v_unused_408_ = lean_ctor_get(v_code_135_, 0);
lean_dec(v_unused_408_);
v___x_375_ = v_code_135_;
v_isShared_376_ = v_isSharedCheck_406_;
goto v_resetjp_374_;
}
else
{
lean_dec(v_code_135_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_406_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v_val_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; size_t v_sz_383_; size_t v___x_384_; lean_object* v___x_385_; 
v_val_377_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_val_377_);
lean_dec_ref_known(v___x_373_, 1);
v___x_378_ = lean_unsigned_to_nat(0u);
v___x_379_ = ((lean_object*)(l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__4));
v___x_380_ = lean_array_get_size(v_args_372_);
v___x_381_ = l_Array_toSubarray___redArg(v_args_372_, v___x_378_, v___x_380_);
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_379_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
v_sz_383_ = lean_array_size(v_val_377_);
v___x_384_ = ((size_t)0ULL);
v___x_385_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg(v_val_377_, v_sz_383_, v___x_384_, v___x_382_);
lean_dec(v_val_377_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_397_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_397_ == 0)
{
v___x_388_ = v___x_385_;
v_isShared_389_ = v_isSharedCheck_397_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_385_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_397_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v_fst_390_; lean_object* v___x_392_; 
v_fst_390_ = lean_ctor_get(v_a_386_, 0);
lean_inc(v_fst_390_);
lean_dec(v_a_386_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 1, v_fst_390_);
v___x_392_ = v___x_375_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_fvarId_371_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v_fst_390_);
v___x_392_ = v_reuseFailAlloc_396_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
lean_object* v___x_394_; 
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v___x_392_);
v___x_394_ = v___x_388_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_392_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
lean_del_object(v___x_375_);
lean_dec(v_fvarId_371_);
v_a_398_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_385_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_385_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
}
else
{
lean_object* v___x_409_; 
lean_dec(v___x_373_);
v___x_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_409_, 0, v_code_135_);
return v___x_409_;
}
}
case 4:
{
lean_object* v_cases_410_; lean_object* v_typeName_411_; lean_object* v_resultType_412_; lean_object* v_discr_413_; lean_object* v_alts_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_453_; 
v_cases_410_ = lean_ctor_get(v_code_135_, 0);
lean_inc_ref(v_cases_410_);
v_typeName_411_ = lean_ctor_get(v_cases_410_, 0);
v_resultType_412_ = lean_ctor_get(v_cases_410_, 1);
v_discr_413_ = lean_ctor_get(v_cases_410_, 2);
v_alts_414_ = lean_ctor_get(v_cases_410_, 3);
v_isSharedCheck_453_ = !lean_is_exclusive(v_cases_410_);
if (v_isSharedCheck_453_ == 0)
{
v___x_416_ = v_cases_410_;
v_isShared_417_ = v_isSharedCheck_453_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_alts_414_);
lean_inc(v_discr_413_);
lean_inc(v_resultType_412_);
lean_inc(v_typeName_411_);
lean_dec(v_cases_410_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_453_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_414_);
v___x_419_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2(v___x_418_, v_alts_414_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_444_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_444_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_444_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_444_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
size_t v___x_424_; size_t v___x_425_; uint8_t v___x_426_; 
v___x_424_ = lean_ptr_addr(v_alts_414_);
lean_dec_ref(v_alts_414_);
v___x_425_ = lean_ptr_addr(v_a_420_);
v___x_426_ = lean_usize_dec_eq(v___x_424_, v___x_425_);
if (v___x_426_ == 0)
{
lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_439_; 
v_isSharedCheck_439_ = !lean_is_exclusive(v_code_135_);
if (v_isSharedCheck_439_ == 0)
{
lean_object* v_unused_440_; 
v_unused_440_ = lean_ctor_get(v_code_135_, 0);
lean_dec(v_unused_440_);
v___x_428_ = v_code_135_;
v_isShared_429_ = v_isSharedCheck_439_;
goto v_resetjp_427_;
}
else
{
lean_dec(v_code_135_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_439_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_431_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 3, v_a_420_);
v___x_431_ = v___x_416_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_typeName_411_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_resultType_412_);
lean_ctor_set(v_reuseFailAlloc_438_, 2, v_discr_413_);
lean_ctor_set(v_reuseFailAlloc_438_, 3, v_a_420_);
v___x_431_ = v_reuseFailAlloc_438_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
lean_object* v___x_433_; 
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v___x_431_);
v___x_433_ = v___x_428_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_431_);
v___x_433_ = v_reuseFailAlloc_437_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_435_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_433_);
v___x_435_ = v___x_422_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_433_);
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
}
else
{
lean_object* v___x_442_; 
lean_dec(v_a_420_);
lean_del_object(v___x_416_);
lean_dec(v_discr_413_);
lean_dec_ref(v_resultType_412_);
lean_dec(v_typeName_411_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v_code_135_);
v___x_442_ = v___x_422_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_code_135_);
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
lean_del_object(v___x_416_);
lean_dec_ref(v_alts_414_);
lean_dec(v_discr_413_);
lean_dec_ref(v_resultType_412_);
lean_dec(v_typeName_411_);
lean_dec_ref_known(v_code_135_, 1);
v_a_445_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_419_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_419_);
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
}
default: 
{
lean_object* v___x_454_; 
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v_code_135_);
return v___x_454_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2(lean_object* v_i_455_, lean_object* v_as_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_463_ = lean_array_get_size(v_as_456_);
v___x_464_ = lean_nat_dec_lt(v_i_455_, v___x_463_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; 
lean_dec(v_i_455_);
v___x_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_465_, 0, v_as_456_);
return v___x_465_;
}
else
{
lean_object* v_a_466_; lean_object* v___y_468_; 
v_a_466_ = lean_array_fget_borrowed(v_as_456_, v_i_455_);
switch(lean_obj_tag(v_a_466_))
{
case 0:
{
lean_object* v_code_490_; 
v_code_490_ = lean_ctor_get(v_a_466_, 2);
lean_inc_ref(v_code_490_);
v___y_468_ = v_code_490_;
goto v___jp_467_;
}
case 1:
{
lean_object* v_code_491_; 
v_code_491_ = lean_ctor_get(v_a_466_, 1);
lean_inc_ref(v_code_491_);
v___y_468_ = v_code_491_;
goto v___jp_467_;
}
default: 
{
lean_object* v_code_492_; 
v_code_492_ = lean_ctor_get(v_a_466_, 0);
lean_inc_ref(v_code_492_);
v___y_468_ = v_code_492_;
goto v___jp_467_;
}
}
v___jp_467_:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v___y_468_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_471_; size_t v___x_472_; size_t v___x_473_; uint8_t v___x_474_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_a_470_);
lean_dec_ref_known(v___x_469_, 1);
lean_inc(v_a_466_);
v___x_471_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_466_, v_a_470_);
v___x_472_ = lean_ptr_addr(v_a_466_);
v___x_473_ = lean_ptr_addr(v___x_471_);
v___x_474_ = lean_usize_dec_eq(v___x_472_, v___x_473_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_475_ = lean_unsigned_to_nat(1u);
v___x_476_ = lean_nat_add(v_i_455_, v___x_475_);
v___x_477_ = lean_array_fset(v_as_456_, v_i_455_, v___x_471_);
lean_dec(v_i_455_);
v_i_455_ = v___x_476_;
v_as_456_ = v___x_477_;
goto _start;
}
else
{
lean_object* v___x_479_; lean_object* v___x_480_; 
lean_dec_ref(v___x_471_);
v___x_479_ = lean_unsigned_to_nat(1u);
v___x_480_ = lean_nat_add(v_i_455_, v___x_479_);
lean_dec(v_i_455_);
v_i_455_ = v___x_480_;
goto _start;
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
lean_dec_ref(v_as_456_);
lean_dec(v_i_455_);
v_a_482_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_469_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_469_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___boxed(lean_object* v_i_493_, lean_object* v_as_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2(v_i_493_, v_as_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v___y_495_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___boxed(lean_object* v_code_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_code_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_);
lean_dec(v_a_507_);
lean_dec_ref(v_a_506_);
lean_dec(v_a_505_);
lean_dec_ref(v_a_504_);
lean_dec(v_a_503_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0(lean_object* v_as_510_, size_t v_sz_511_, size_t v_i_512_, lean_object* v_b_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg(v_as_510_, v_sz_511_, v_i_512_, v_b_513_, v___y_516_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___boxed(lean_object* v_as_521_, lean_object* v_sz_522_, lean_object* v_i_523_, lean_object* v_b_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
size_t v_sz_boxed_531_; size_t v_i_boxed_532_; lean_object* v_res_533_; 
v_sz_boxed_531_ = lean_unbox_usize(v_sz_522_);
lean_dec(v_sz_522_);
v_i_boxed_532_ = lean_unbox_usize(v_i_523_);
lean_dec(v_i_523_);
v_res_533_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0(v_as_521_, v_sz_boxed_531_, v_i_boxed_532_, v_b_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec(v___y_525_);
lean_dec_ref(v_as_521_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1(lean_object* v_as_534_, size_t v_sz_535_, size_t v_i_536_, lean_object* v_b_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg(v_as_534_, v_sz_535_, v_i_536_, v_b_537_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___boxed(lean_object* v_as_545_, lean_object* v_sz_546_, lean_object* v_i_547_, lean_object* v_b_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
size_t v_sz_boxed_555_; size_t v_i_boxed_556_; lean_object* v_res_557_; 
v_sz_boxed_555_ = lean_unbox_usize(v_sz_546_);
lean_dec(v_sz_546_);
v_i_boxed_556_ = lean_unbox_usize(v_i_547_);
lean_dec(v_i_547_);
v_res_557_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1(v_as_545_, v_sz_boxed_555_, v_i_boxed_556_, v_b_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
lean_dec(v___y_549_);
lean_dec_ref(v_as_545_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg(lean_object* v_f_558_, lean_object* v_v_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
if (lean_obj_tag(v_v_559_) == 0)
{
lean_object* v_code_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_590_; 
v_code_566_ = lean_ctor_get(v_v_559_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v_v_559_);
if (v_isSharedCheck_590_ == 0)
{
v___x_568_ = v_v_559_;
v_isShared_569_ = v_isSharedCheck_590_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_code_566_);
lean_dec(v_v_559_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_590_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; 
lean_inc(v___y_564_);
lean_inc_ref(v___y_563_);
lean_inc(v___y_562_);
lean_inc_ref(v___y_561_);
lean_inc(v___y_560_);
v___x_570_ = lean_apply_7(v_f_558_, v_code_566_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_, lean_box(0));
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_581_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_581_ == 0)
{
v___x_573_ = v___x_570_;
v_isShared_574_ = v_isSharedCheck_581_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_570_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_581_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v_a_571_);
v___x_576_ = v___x_568_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_580_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_578_; 
if (v_isShared_574_ == 0)
{
lean_ctor_set(v___x_573_, 0, v___x_576_);
v___x_578_ = v___x_573_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
else
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_589_; 
lean_del_object(v___x_568_);
v_a_582_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_589_ == 0)
{
v___x_584_ = v___x_570_;
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_570_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
}
else
{
lean_object* v___x_591_; 
lean_dec_ref(v_f_558_);
v___x_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_591_, 0, v_v_559_);
return v___x_591_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg___boxed(lean_object* v_f_592_, lean_object* v_v_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg(v_f_592_, v_v_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0(uint8_t v_pu_601_, lean_object* v_f_602_, lean_object* v_v_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg(v_f_602_, v_v_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___boxed(lean_object* v_pu_611_, lean_object* v_f_612_, lean_object* v_v_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
uint8_t v_pu_boxed_620_; lean_object* v_res_621_; 
v_pu_boxed_620_ = lean_unbox(v_pu_611_);
v_res_621_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0(v_pu_boxed_620_, v_f_612_, v_v_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
lean_dec(v___y_614_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity(lean_object* v_decl_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_toSignature_629_; lean_object* v_value_630_; uint8_t v_recursive_631_; lean_object* v_inlineAttr_x3f_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_658_; 
v_toSignature_629_ = lean_ctor_get(v_decl_623_, 0);
v_value_630_ = lean_ctor_get(v_decl_623_, 1);
v_recursive_631_ = lean_ctor_get_uint8(v_decl_623_, sizeof(void*)*3);
v_inlineAttr_x3f_632_ = lean_ctor_get(v_decl_623_, 2);
v_isSharedCheck_658_ = !lean_is_exclusive(v_decl_623_);
if (v_isSharedCheck_658_ == 0)
{
v___x_634_ = v_decl_623_;
v_isShared_635_ = v_isSharedCheck_658_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_inlineAttr_x3f_632_);
lean_inc(v_value_630_);
lean_inc(v_toSignature_629_);
lean_dec(v_decl_623_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_658_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_636_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceJpArity___closed__0));
v___x_637_ = lean_box(1);
v___x_638_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg(v___x_636_, v_value_630_, v___x_637_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_649_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_649_ == 0)
{
v___x_641_ = v___x_638_;
v_isShared_642_ = v_isSharedCheck_649_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_638_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_649_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v_a_639_);
v___x_644_ = v___x_634_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_toSignature_629_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v_a_639_);
lean_ctor_set(v_reuseFailAlloc_648_, 2, v_inlineAttr_x3f_632_);
lean_ctor_set_uint8(v_reuseFailAlloc_648_, sizeof(void*)*3, v_recursive_631_);
v___x_644_ = v_reuseFailAlloc_648_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_646_; 
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 0, v___x_644_);
v___x_646_ = v___x_641_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_644_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_del_object(v___x_634_);
lean_dec(v_inlineAttr_x3f_632_);
lean_dec_ref(v_toSignature_629_);
v_a_650_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_638_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_638_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity___boxed(lean_object* v_decl_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_Compiler_LCNF_Decl_reduceJpArity(v_decl_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
lean_dec(v_a_661_);
lean_dec_ref(v_a_660_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0(uint8_t v_phase_670_, lean_object* v_h_671_){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_672_ = ((lean_object*)(l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__1));
v___x_673_ = ((lean_object*)(l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__2));
v___x_674_ = lean_unsigned_to_nat(0u);
v___x_675_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_672_, v_phase_670_, v___x_673_, v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0___boxed(lean_object* v_phase_676_, lean_object* v_h_677_){
_start:
{
uint8_t v_phase_boxed_678_; lean_object* v_res_679_; 
v_phase_boxed_678_ = lean_unbox(v_phase_676_);
v_res_679_ = l_Lean_Compiler_LCNF_reduceJpArity___lam__0(v_phase_boxed_678_, v_h_677_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity(uint8_t v_phase_680_){
_start:
{
lean_object* v___x_681_; lean_object* v___f_682_; lean_object* v___x_683_; uint8_t v___x_684_; lean_object* v___x_685_; 
v___x_681_ = lean_box(v_phase_680_);
v___f_682_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_reduceJpArity___lam__0___boxed), 2, 1);
lean_closure_set(v___f_682_, 0, v___x_681_);
v___x_683_ = l_Lean_Compiler_LCNF_instInhabitedPass;
v___x_684_ = 0;
v___x_685_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___x_683_, v_phase_680_, v___x_684_, v___f_682_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___boxed(lean_object* v_phase_686_){
_start:
{
uint8_t v_phase_boxed_687_; lean_object* v_res_688_; 
v_phase_boxed_687_ = lean_unbox(v_phase_686_);
v_res_688_ = l_Lean_Compiler_LCNF_reduceJpArity(v_phase_boxed_687_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_759_; uint8_t v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_759_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_));
v___x_760_ = 1;
v___x_761_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_));
v___x_762_ = l_Lean_registerTraceClass(v___x_759_, v___x_760_, v___x_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2____boxed(lean_object* v___y_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_();
return v_res_764_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ReduceJpArity(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_563472653____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ReduceJpArity(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ReduceJpArity(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ReduceJpArity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ReduceJpArity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ReduceJpArity(builtin);
}
#ifdef __cplusplus
}
#endif
