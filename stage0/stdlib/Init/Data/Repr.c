// Lean compiler output
// Module: Init.Data.Repr
// Imports: public import Init.Data.Format.Basic public import Init.Control.Id public import Init.Data.UInt.BasicAux import Init.Data.Char.Basic
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
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Std_Format_joinSep___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
uint8_t lean_string_isempty(lean_object*);
lean_object* lean_string_foldl(lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_instToFormatFormat___lam__0___boxed(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_System_Platform_numBits;
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_usize_to_nat(size_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_substring_tostring(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
LEAN_EXPORT lean_object* l_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_repr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reprStr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reprStr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reprArg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reprArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprId___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instReprId___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instReprId___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprId___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instReprId___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instReprId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprId___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprId__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprId__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instReprId__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprEmpty___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_instReprEmpty___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprEmpty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprEmpty___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprEmpty___closed__0 = (const lean_object*)&l_instReprEmpty___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprEmpty = (const lean_object*)&l_instReprEmpty___closed__0_value;
static const lean_string_object l_Bool_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Bool_repr___redArg___closed__0 = (const lean_object*)&l_Bool_repr___redArg___closed__0_value;
static const lean_ctor_object l_Bool_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Bool_repr___redArg___closed__0_value)}};
static const lean_object* l_Bool_repr___redArg___closed__1 = (const lean_object*)&l_Bool_repr___redArg___closed__1_value;
static const lean_string_object l_Bool_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Bool_repr___redArg___closed__2 = (const lean_object*)&l_Bool_repr___redArg___closed__2_value;
static const lean_ctor_object l_Bool_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Bool_repr___redArg___closed__2_value)}};
static const lean_object* l_Bool_repr___redArg___closed__3 = (const lean_object*)&l_Bool_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Bool_repr___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Bool_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Bool_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Bool_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Bool_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprBool___closed__0 = (const lean_object*)&l_instReprBool___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprBool = (const lean_object*)&l_instReprBool___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Repr_addAppParen_spec__0(lean_object*);
static const lean_string_object l_Repr_addAppParen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Repr_addAppParen___closed__0 = (const lean_object*)&l_Repr_addAppParen___closed__0_value;
static const lean_string_object l_Repr_addAppParen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Repr_addAppParen___closed__1 = (const lean_object*)&l_Repr_addAppParen___closed__1_value;
static lean_once_cell_t l_Repr_addAppParen___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Repr_addAppParen___closed__2;
static lean_once_cell_t l_Repr_addAppParen___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Repr_addAppParen___closed__3;
static const lean_ctor_object l_Repr_addAppParen___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Repr_addAppParen___closed__0_value)}};
static const lean_object* l_Repr_addAppParen___closed__4 = (const lean_object*)&l_Repr_addAppParen___closed__4_value;
static const lean_ctor_object l_Repr_addAppParen___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Repr_addAppParen___closed__1_value)}};
static const lean_object* l_Repr_addAppParen___closed__5 = (const lean_object*)&l_Repr_addAppParen___closed__5_value;
LEAN_EXPORT lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Repr_addAppParen___boxed(lean_object*, lean_object*);
static const lean_string_object l_Decidable_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "isFalse _"};
static const lean_object* l_Decidable_repr___redArg___closed__0 = (const lean_object*)&l_Decidable_repr___redArg___closed__0_value;
static const lean_ctor_object l_Decidable_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Decidable_repr___redArg___closed__0_value)}};
static const lean_object* l_Decidable_repr___redArg___closed__1 = (const lean_object*)&l_Decidable_repr___redArg___closed__1_value;
static const lean_string_object l_Decidable_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isTrue _"};
static const lean_object* l_Decidable_repr___redArg___closed__2 = (const lean_object*)&l_Decidable_repr___redArg___closed__2_value;
static const lean_ctor_object l_Decidable_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Decidable_repr___redArg___closed__2_value)}};
static const lean_object* l_Decidable_repr___redArg___closed__3 = (const lean_object*)&l_Decidable_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Decidable_repr___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Decidable_repr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Decidable_repr(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Decidable_repr___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instReprDecidable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Decidable_repr___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_instReprDecidable___redArg___closed__0 = (const lean_object*)&l_instReprDecidable___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_instReprDecidable___redArg();
LEAN_EXPORT lean_object* l_instReprDecidable___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instReprDecidable(lean_object*);
static const lean_string_object l_instReprPUnit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "PUnit.unit"};
static const lean_object* l_instReprPUnit___lam__0___closed__0 = (const lean_object*)&l_instReprPUnit___lam__0___closed__0_value;
static const lean_ctor_object l_instReprPUnit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_instReprPUnit___lam__0___closed__0_value)}};
static const lean_object* l_instReprPUnit___lam__0___closed__1 = (const lean_object*)&l_instReprPUnit___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_instReprPUnit___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprPUnit___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprPUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprPUnit___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprPUnit___closed__0 = (const lean_object*)&l_instReprPUnit___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprPUnit = (const lean_object*)&l_instReprPUnit___closed__0_value;
static const lean_string_object l_instReprULift___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ULift.up "};
static const lean_object* l_instReprULift___redArg___lam__0___closed__0 = (const lean_object*)&l_instReprULift___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_instReprULift___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_instReprULift___redArg___lam__0___closed__0_value)}};
static const lean_object* l_instReprULift___redArg___lam__0___closed__1 = (const lean_object*)&l_instReprULift___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_instReprULift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprULift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprULift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instReprULift(lean_object*, lean_object*);
static const lean_string_object l_instReprUnit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "()"};
static const lean_object* l_instReprUnit___lam__0___closed__0 = (const lean_object*)&l_instReprUnit___lam__0___closed__0_value;
static const lean_ctor_object l_instReprUnit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_instReprUnit___lam__0___closed__0_value)}};
static const lean_object* l_instReprUnit___lam__0___closed__1 = (const lean_object*)&l_instReprUnit___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_instReprUnit___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprUnit___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprUnit___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprUnit___closed__0 = (const lean_object*)&l_instReprUnit___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprUnit = (const lean_object*)&l_instReprUnit___closed__0_value;
static const lean_string_object l_Option_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___redArg___closed__0 = (const lean_object*)&l_Option_repr___redArg___closed__0_value;
static const lean_ctor_object l_Option_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___redArg___closed__0_value)}};
static const lean_object* l_Option_repr___redArg___closed__1 = (const lean_object*)&l_Option_repr___redArg___closed__1_value;
static const lean_string_object l_Option_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___redArg___closed__2 = (const lean_object*)&l_Option_repr___redArg___closed__2_value;
static const lean_ctor_object l_Option_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___redArg___closed__2_value)}};
static const lean_object* l_Option_repr___redArg___closed__3 = (const lean_object*)&l_Option_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instReprOption(lean_object*, lean_object*);
static const lean_string_object l_Sum_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Sum.inl "};
static const lean_object* l_Sum_repr___redArg___closed__0 = (const lean_object*)&l_Sum_repr___redArg___closed__0_value;
static const lean_ctor_object l_Sum_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Sum_repr___redArg___closed__0_value)}};
static const lean_object* l_Sum_repr___redArg___closed__1 = (const lean_object*)&l_Sum_repr___redArg___closed__1_value;
static const lean_string_object l_Sum_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Sum.inr "};
static const lean_object* l_Sum_repr___redArg___closed__2 = (const lean_object*)&l_Sum_repr___redArg___closed__2_value;
static const lean_ctor_object l_Sum_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Sum_repr___redArg___closed__2_value)}};
static const lean_object* l_Sum_repr___redArg___closed__3 = (const lean_object*)&l_Sum_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Sum_repr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_repr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_repr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprSum___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprSum(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprTupleOfRepr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instReprTupleOfRepr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_reprTuple___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_reprTuple(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprTupleProdOfRepr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprTupleProdOfRepr(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Prod_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToFormatFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Prod_repr___redArg___closed__0 = (const lean_object*)&l_Prod_repr___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Prod_repr___redArg___closed__1 = (const lean_object*)&l_Prod_repr___redArg___closed__1_value;
static const lean_ctor_object l_Prod_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___redArg___closed__2 = (const lean_object*)&l_Prod_repr___redArg___closed__2_value;
static const lean_ctor_object l_Prod_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Prod_repr___redArg___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Prod_repr___redArg___closed__3 = (const lean_object*)&l_Prod_repr___redArg___closed__3_value;
static lean_once_cell_t l_Prod_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___redArg___closed__4;
LEAN_EXPORT lean_object* l_Prod_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprProdOfReprTuple___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprProdOfReprTuple(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Sigma_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Sigma_repr___redArg___closed__0 = (const lean_object*)&l_Sigma_repr___redArg___closed__0_value;
static const lean_string_object l_Sigma_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Sigma_repr___redArg___closed__1 = (const lean_object*)&l_Sigma_repr___redArg___closed__1_value;
static const lean_ctor_object l_Sigma_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Sigma_repr___redArg___closed__1_value)}};
static const lean_object* l_Sigma_repr___redArg___closed__2 = (const lean_object*)&l_Sigma_repr___redArg___closed__2_value;
static const lean_string_object l_Sigma_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Sigma_repr___redArg___closed__3 = (const lean_object*)&l_Sigma_repr___redArg___closed__3_value;
static lean_once_cell_t l_Sigma_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Sigma_repr___redArg___closed__4;
static lean_once_cell_t l_Sigma_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Sigma_repr___redArg___closed__5;
static const lean_ctor_object l_Sigma_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Sigma_repr___redArg___closed__0_value)}};
static const lean_object* l_Sigma_repr___redArg___closed__6 = (const lean_object*)&l_Sigma_repr___redArg___closed__6_value;
static const lean_ctor_object l_Sigma_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Sigma_repr___redArg___closed__3_value)}};
static const lean_object* l_Sigma_repr___redArg___closed__7 = (const lean_object*)&l_Sigma_repr___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Sigma_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_repr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprSigma___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprSigma(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprSubtype___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprSubtype___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instReprSubtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Nat_digitChar(lean_object*);
LEAN_EXPORT lean_object* l_Nat_digitChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_toDigitsCore(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_toDigitsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_toDigits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_toDigits___boxed(lean_object*, lean_object*);
lean_object* lean_string_of_usize(size_t);
LEAN_EXPORT lean_object* l_USize_repr___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Init_Data_Repr_0__Nat_reprArray_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Repr_0__Nat_reprArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Repr_0__Nat_reprArray___closed__0;
static lean_once_cell_t l___private_Init_Data_Repr_0__Nat_reprArray___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Repr_0__Nat_reprArray___closed__1;
static lean_once_cell_t l___private_Init_Data_Repr_0__Nat_reprArray___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Repr_0__Nat_reprArray___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Repr_0__Nat_reprArray;
static lean_once_cell_t l_Nat_reprFast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reprFast___closed__0;
static lean_once_cell_t l_Nat_reprFast___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reprFast___closed__1;
LEAN_EXPORT lean_object* l_Nat_reprFast(lean_object*);
LEAN_EXPORT uint32_t l_Nat_superDigitChar(lean_object*);
LEAN_EXPORT lean_object* l_Nat_superDigitChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_toSuperDigitsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_toSuperDigits(lean_object*);
LEAN_EXPORT lean_object* l_Nat_toSuperscriptString(lean_object*);
LEAN_EXPORT uint32_t l_Nat_subDigitChar(lean_object*);
LEAN_EXPORT lean_object* l_Nat_subDigitChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_toSubDigitsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_toSubDigits(lean_object*);
LEAN_EXPORT lean_object* l_Nat_toSubscriptString(lean_object*);
LEAN_EXPORT lean_object* l_instReprNat___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprNat___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprNat___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprNat___closed__0 = (const lean_object*)&l_instReprNat___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprNat = (const lean_object*)&l_instReprNat___closed__0_value;
static const lean_string_object l_hexDigitRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_hexDigitRepr___closed__0 = (const lean_object*)&l_hexDigitRepr___closed__0_value;
LEAN_EXPORT lean_object* l_hexDigitRepr(lean_object*);
LEAN_EXPORT lean_object* l_hexDigitRepr___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Repr_0__Char_quoteCore_smallCharToHex(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Repr_0__Char_quoteCore_smallCharToHex___boxed(lean_object*);
static const lean_string_object l_Char_quoteCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\x"};
static const lean_object* l_Char_quoteCore___closed__0 = (const lean_object*)&l_Char_quoteCore___closed__0_value;
static const lean_string_object l_Char_quoteCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\'"};
static const lean_object* l_Char_quoteCore___closed__1 = (const lean_object*)&l_Char_quoteCore___closed__1_value;
static const lean_string_object l_Char_quoteCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\\""};
static const lean_object* l_Char_quoteCore___closed__2 = (const lean_object*)&l_Char_quoteCore___closed__2_value;
static const lean_string_object l_Char_quoteCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\\\"};
static const lean_object* l_Char_quoteCore___closed__3 = (const lean_object*)&l_Char_quoteCore___closed__3_value;
static const lean_string_object l_Char_quoteCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\t"};
static const lean_object* l_Char_quoteCore___closed__4 = (const lean_object*)&l_Char_quoteCore___closed__4_value;
static const lean_string_object l_Char_quoteCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\n"};
static const lean_object* l_Char_quoteCore___closed__5 = (const lean_object*)&l_Char_quoteCore___closed__5_value;
LEAN_EXPORT lean_object* l_Char_quoteCore(uint32_t, uint8_t);
LEAN_EXPORT lean_object* l_Char_quoteCore___boxed(lean_object*, lean_object*);
static const lean_string_object l_Char_quote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Char_quote___closed__0 = (const lean_object*)&l_Char_quote___closed__0_value;
LEAN_EXPORT lean_object* l_Char_quote(uint32_t);
LEAN_EXPORT lean_object* l_Char_quote___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instReprChar___lam__0(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_instReprChar___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprChar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprChar___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprChar___closed__0 = (const lean_object*)&l_instReprChar___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprChar = (const lean_object*)&l_instReprChar___closed__0_value;
LEAN_EXPORT lean_object* l_Char_repr(uint32_t);
LEAN_EXPORT lean_object* l_Char_repr___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_quote___lam__0(uint8_t, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_String_quote___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_String_quote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_quote___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_String_quote___closed__0 = (const lean_object*)&l_String_quote___closed__0_value;
static const lean_string_object l_String_quote___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_String_quote___closed__1 = (const lean_object*)&l_String_quote___closed__1_value;
static const lean_string_object l_String_quote___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\"\""};
static const lean_object* l_String_quote___closed__2 = (const lean_object*)&l_String_quote___closed__2_value;
LEAN_EXPORT lean_object* l_String_quote(lean_object*);
LEAN_EXPORT lean_object* l_instReprString___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprString___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprString___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprString___closed__0 = (const lean_object*)&l_instReprString___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprString = (const lean_object*)&l_instReprString___closed__0_value;
static const lean_string_object l_instReprRaw___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "{ byteIdx := "};
static const lean_object* l_instReprRaw___lam__0___closed__0 = (const lean_object*)&l_instReprRaw___lam__0___closed__0_value;
static const lean_ctor_object l_instReprRaw___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_instReprRaw___lam__0___closed__0_value)}};
static const lean_object* l_instReprRaw___lam__0___closed__1 = (const lean_object*)&l_instReprRaw___lam__0___closed__1_value;
static const lean_string_object l_instReprRaw___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_instReprRaw___lam__0___closed__2 = (const lean_object*)&l_instReprRaw___lam__0___closed__2_value;
static const lean_ctor_object l_instReprRaw___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_instReprRaw___lam__0___closed__2_value)}};
static const lean_object* l_instReprRaw___lam__0___closed__3 = (const lean_object*)&l_instReprRaw___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_instReprRaw___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprRaw___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprRaw___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprRaw___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprRaw___closed__0 = (const lean_object*)&l_instReprRaw___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprRaw = (const lean_object*)&l_instReprRaw___closed__0_value;
static const lean_string_object l_instReprRaw__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ".toRawSubstring"};
static const lean_object* l_instReprRaw__1___lam__0___closed__0 = (const lean_object*)&l_instReprRaw__1___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_instReprRaw__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprRaw__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprRaw__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprRaw__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprRaw__1___closed__0 = (const lean_object*)&l_instReprRaw__1___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprRaw__1 = (const lean_object*)&l_instReprRaw__1___closed__0_value;
LEAN_EXPORT lean_object* l_instReprFin___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprFin___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprFin___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprFin___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprFin___redArg___closed__0 = (const lean_object*)&l_instReprFin___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_instReprFin___redArg();
LEAN_EXPORT lean_object* l_instReprFin___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instReprFin(lean_object*);
LEAN_EXPORT lean_object* l_instReprFin___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instReprUInt8___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_instReprUInt8___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprUInt8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprUInt8___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprUInt8___closed__0 = (const lean_object*)&l_instReprUInt8___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprUInt8 = (const lean_object*)&l_instReprUInt8___closed__0_value;
LEAN_EXPORT lean_object* l_instReprUInt16___lam__0(uint16_t, lean_object*);
LEAN_EXPORT lean_object* l_instReprUInt16___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprUInt16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprUInt16___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprUInt16___closed__0 = (const lean_object*)&l_instReprUInt16___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprUInt16 = (const lean_object*)&l_instReprUInt16___closed__0_value;
LEAN_EXPORT lean_object* l_instReprUInt32___lam__0(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_instReprUInt32___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprUInt32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprUInt32___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprUInt32___closed__0 = (const lean_object*)&l_instReprUInt32___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprUInt32 = (const lean_object*)&l_instReprUInt32___closed__0_value;
LEAN_EXPORT lean_object* l_instReprUInt64___lam__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_instReprUInt64___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprUInt64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprUInt64___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprUInt64___closed__0 = (const lean_object*)&l_instReprUInt64___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprUInt64 = (const lean_object*)&l_instReprUInt64___closed__0_value;
LEAN_EXPORT lean_object* l_instReprUSize___lam__0(size_t, lean_object*);
LEAN_EXPORT lean_object* l_instReprUSize___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprUSize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprUSize___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprUSize___closed__0 = (const lean_object*)&l_instReprUSize___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprUSize = (const lean_object*)&l_instReprUSize___closed__0_value;
static const lean_string_object l_List_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___redArg___closed__0 = (const lean_object*)&l_List_repr___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___redArg___closed__0_value)}};
static const lean_object* l_List_repr___redArg___closed__1 = (const lean_object*)&l_List_repr___redArg___closed__1_value;
static const lean_string_object l_List_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___redArg___closed__2 = (const lean_object*)&l_List_repr___redArg___closed__2_value;
static const lean_string_object l_List_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr___redArg___closed__3 = (const lean_object*)&l_List_repr___redArg___closed__3_value;
static lean_once_cell_t l_List_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___redArg___closed__4;
static lean_once_cell_t l_List_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___redArg___closed__5;
static const lean_ctor_object l_List_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___redArg___closed__2_value)}};
static const lean_object* l_List_repr___redArg___closed__6 = (const lean_object*)&l_List_repr___redArg___closed__6_value;
static const lean_ctor_object l_List_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___redArg___closed__3_value)}};
static const lean_object* l_List_repr___redArg___closed__7 = (const lean_object*)&l_List_repr___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_List_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instReprList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprListOfReprAtom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprListOfReprAtom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprAtomBool;
LEAN_EXPORT lean_object* l_instReprAtomNat;
LEAN_EXPORT lean_object* l_instReprAtomInt;
LEAN_EXPORT lean_object* l_instReprAtomChar;
LEAN_EXPORT lean_object* l_instReprAtomString;
LEAN_EXPORT lean_object* l_instReprAtomUInt8;
LEAN_EXPORT lean_object* l_instReprAtomUInt16;
LEAN_EXPORT lean_object* l_instReprAtomUInt32;
LEAN_EXPORT lean_object* l_instReprAtomUInt64;
LEAN_EXPORT lean_object* l_instReprAtomUSize;
static const lean_string_object l_instReprSourceInfo_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.SourceInfo.none"};
static const lean_object* l_instReprSourceInfo_repr___closed__0 = (const lean_object*)&l_instReprSourceInfo_repr___closed__0_value;
static const lean_ctor_object l_instReprSourceInfo_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_instReprSourceInfo_repr___closed__0_value)}};
static const lean_object* l_instReprSourceInfo_repr___closed__1 = (const lean_object*)&l_instReprSourceInfo_repr___closed__1_value;
static const lean_string_object l_instReprSourceInfo_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.SourceInfo.original"};
static const lean_object* l_instReprSourceInfo_repr___closed__2 = (const lean_object*)&l_instReprSourceInfo_repr___closed__2_value;
static const lean_ctor_object l_instReprSourceInfo_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_instReprSourceInfo_repr___closed__2_value)}};
static const lean_object* l_instReprSourceInfo_repr___closed__3 = (const lean_object*)&l_instReprSourceInfo_repr___closed__3_value;
static const lean_ctor_object l_instReprSourceInfo_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_instReprSourceInfo_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_instReprSourceInfo_repr___closed__4 = (const lean_object*)&l_instReprSourceInfo_repr___closed__4_value;
static lean_once_cell_t l_instReprSourceInfo_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instReprSourceInfo_repr___closed__5;
static lean_once_cell_t l_instReprSourceInfo_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instReprSourceInfo_repr___closed__6;
static const lean_string_object l_instReprSourceInfo_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.SourceInfo.synthetic"};
static const lean_object* l_instReprSourceInfo_repr___closed__7 = (const lean_object*)&l_instReprSourceInfo_repr___closed__7_value;
static const lean_ctor_object l_instReprSourceInfo_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_instReprSourceInfo_repr___closed__7_value)}};
static const lean_object* l_instReprSourceInfo_repr___closed__8 = (const lean_object*)&l_instReprSourceInfo_repr___closed__8_value;
static const lean_ctor_object l_instReprSourceInfo_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_instReprSourceInfo_repr___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_instReprSourceInfo_repr___closed__9 = (const lean_object*)&l_instReprSourceInfo_repr___closed__9_value;
LEAN_EXPORT lean_object* l_instReprSourceInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprSourceInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instReprSourceInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprSourceInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instReprSourceInfo___closed__0 = (const lean_object*)&l_instReprSourceInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_instReprSourceInfo = (const lean_object*)&l_instReprSourceInfo___closed__0_value;
LEAN_EXPORT lean_object* l_repr___redArg(lean_object* v_inst_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(0u);
v___x_4_ = lean_apply_2(v_inst_1_, v_a_2_, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_repr(lean_object* v_00_u03b1_5_, lean_object* v_inst_6_, lean_object* v_a_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_unsigned_to_nat(0u);
v___x_9_ = lean_apply_2(v_inst_6_, v_a_7_, v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_reprStr___redArg(lean_object* v_inst_10_, lean_object* v_a_11_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_12_ = lean_unsigned_to_nat(0u);
v___x_13_ = lean_apply_2(v_inst_10_, v_a_11_, v___x_12_);
v___x_14_ = l_Std_Format_defWidth;
v___x_15_ = l_Std_Format_pretty(v___x_13_, v___x_14_, v___x_12_, v___x_12_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_reprStr(lean_object* v_00_u03b1_16_, lean_object* v_inst_17_, lean_object* v_a_18_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_19_ = lean_unsigned_to_nat(0u);
v___x_20_ = lean_apply_2(v_inst_17_, v_a_18_, v___x_19_);
v___x_21_ = l_Std_Format_defWidth;
v___x_22_ = l_Std_Format_pretty(v___x_20_, v___x_21_, v___x_19_, v___x_19_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_reprArg___redArg(lean_object* v_inst_23_, lean_object* v_a_24_){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_unsigned_to_nat(1024u);
v___x_26_ = lean_apply_2(v_inst_23_, v_a_24_, v___x_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_reprArg(lean_object* v_00_u03b1_27_, lean_object* v_inst_28_, lean_object* v_a_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(1024u);
v___x_31_ = lean_apply_2(v_inst_28_, v_a_29_, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_instReprId___aux__1___redArg(lean_object* v_inst_32_){
_start:
{
lean_inc_ref(v_inst_32_);
return v_inst_32_;
}
}
LEAN_EXPORT lean_object* l_instReprId___aux__1___redArg___boxed(lean_object* v_inst_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_instReprId___aux__1___redArg(v_inst_33_);
lean_dec_ref(v_inst_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_instReprId___aux__1(lean_object* v_00_u03b1_35_, lean_object* v_inst_36_){
_start:
{
lean_inc_ref(v_inst_36_);
return v_inst_36_;
}
}
LEAN_EXPORT lean_object* l_instReprId___aux__1___boxed(lean_object* v_00_u03b1_37_, lean_object* v_inst_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_instReprId___aux__1(v_00_u03b1_37_, v_inst_38_);
lean_dec_ref(v_inst_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_instReprId___redArg(lean_object* v_inst_40_){
_start:
{
lean_inc_ref(v_inst_40_);
return v_inst_40_;
}
}
LEAN_EXPORT lean_object* l_instReprId___redArg___boxed(lean_object* v_inst_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_instReprId___redArg(v_inst_41_);
lean_dec_ref(v_inst_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_instReprId(lean_object* v_00_u03b1_43_, lean_object* v_inst_44_){
_start:
{
lean_inc_ref(v_inst_44_);
return v_inst_44_;
}
}
LEAN_EXPORT lean_object* l_instReprId___boxed(lean_object* v_00_u03b1_45_, lean_object* v_inst_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_instReprId(v_00_u03b1_45_, v_inst_46_);
lean_dec_ref(v_inst_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_instReprId__1___redArg___lam__0(lean_object* v_inst_48_, lean_object* v_x_49_, lean_object* v_prec_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_apply_2(v_inst_48_, v_x_49_, v_prec_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_instReprId__1___redArg(lean_object* v_inst_52_){
_start:
{
lean_object* v___f_53_; 
v___f_53_ = lean_alloc_closure((void*)(l_instReprId__1___redArg___lam__0), 3, 1);
lean_closure_set(v___f_53_, 0, v_inst_52_);
return v___f_53_;
}
}
LEAN_EXPORT lean_object* l_instReprId__1(lean_object* v_00_u03b1_54_, lean_object* v_inst_55_){
_start:
{
lean_object* v___f_56_; 
v___f_56_ = lean_alloc_closure((void*)(l_instReprId__1___redArg___lam__0), 3, 1);
lean_closure_set(v___f_56_, 0, v_inst_55_);
return v___f_56_;
}
}
LEAN_EXPORT lean_object* l_instReprEmpty___lam__0(uint8_t v_a_57_, lean_object* v_a_58_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_instReprEmpty___lam__0___boxed(lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
uint8_t v_a_8__boxed_61_; lean_object* v_res_62_; 
v_a_8__boxed_61_ = lean_unbox(v_a_59_);
v_res_62_ = l_instReprEmpty___lam__0(v_a_8__boxed_61_, v_a_60_);
lean_dec(v_a_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Bool_repr___redArg(uint8_t v_x_71_){
_start:
{
if (v_x_71_ == 0)
{
lean_object* v___x_72_; 
v___x_72_ = ((lean_object*)(l_Bool_repr___redArg___closed__1));
return v___x_72_;
}
else
{
lean_object* v___x_73_; 
v___x_73_ = ((lean_object*)(l_Bool_repr___redArg___closed__3));
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l_Bool_repr___redArg___boxed(lean_object* v_x_74_){
_start:
{
uint8_t v_x_36__boxed_75_; lean_object* v_res_76_; 
v_x_36__boxed_75_ = lean_unbox(v_x_74_);
v_res_76_ = l_Bool_repr___redArg(v_x_36__boxed_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Bool_repr(uint8_t v_x_77_, lean_object* v_x_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Bool_repr___redArg(v_x_77_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Bool_repr___boxed(lean_object* v_x_80_, lean_object* v_x_81_){
_start:
{
uint8_t v_x_49__boxed_82_; lean_object* v_res_83_; 
v_x_49__boxed_82_ = lean_unbox(v_x_80_);
v_res_83_ = l_Bool_repr(v_x_49__boxed_82_, v_x_81_);
lean_dec(v_x_81_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Repr_addAppParen_spec__0(lean_object* v_a_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_nat_to_int(v_a_86_);
return v___x_87_;
}
}
static lean_object* _init_l_Repr_addAppParen___closed__2(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = ((lean_object*)(l_Repr_addAppParen___closed__0));
v___x_91_ = lean_string_length(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Repr_addAppParen___closed__3(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_obj_once(&l_Repr_addAppParen___closed__2, &l_Repr_addAppParen___closed__2_once, _init_l_Repr_addAppParen___closed__2);
v___x_93_ = lean_nat_to_int(v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Repr_addAppParen(lean_object* v_f_98_, lean_object* v_prec_99_){
_start:
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = lean_unsigned_to_nat(1024u);
v___x_101_ = lean_nat_dec_le(v___x_100_, v_prec_99_);
if (v___x_101_ == 0)
{
return v_f_98_;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; lean_object* v___x_109_; 
v___x_102_ = lean_obj_once(&l_Repr_addAppParen___closed__3, &l_Repr_addAppParen___closed__3_once, _init_l_Repr_addAppParen___closed__3);
v___x_103_ = ((lean_object*)(l_Repr_addAppParen___closed__4));
v___x_104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v_f_98_);
v___x_105_ = ((lean_object*)(l_Repr_addAppParen___closed__5));
v___x_106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_104_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
v___x_107_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_102_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
v___x_108_ = 0;
v___x_109_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_109_, 0, v___x_107_);
lean_ctor_set_uint8(v___x_109_, sizeof(void*)*1, v___x_108_);
return v___x_109_;
}
}
}
LEAN_EXPORT lean_object* l_Repr_addAppParen___boxed(lean_object* v_f_110_, lean_object* v_prec_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Repr_addAppParen(v_f_110_, v_prec_111_);
lean_dec(v_prec_111_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Decidable_repr___redArg(uint8_t v_x_119_, lean_object* v_x_120_){
_start:
{
if (v_x_119_ == 0)
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = ((lean_object*)(l_Decidable_repr___redArg___closed__1));
v___x_122_ = l_Repr_addAppParen(v___x_121_, v_x_120_);
return v___x_122_;
}
else
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = ((lean_object*)(l_Decidable_repr___redArg___closed__3));
v___x_124_ = l_Repr_addAppParen(v___x_123_, v_x_120_);
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Decidable_repr___redArg___boxed(lean_object* v_x_125_, lean_object* v_x_126_){
_start:
{
uint8_t v_x_43__boxed_127_; lean_object* v_res_128_; 
v_x_43__boxed_127_ = lean_unbox(v_x_125_);
v_res_128_ = l_Decidable_repr___redArg(v_x_43__boxed_127_, v_x_126_);
lean_dec(v_x_126_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Decidable_repr(lean_object* v_p_129_, uint8_t v_x_130_, lean_object* v_x_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Decidable_repr___redArg(v_x_130_, v_x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Decidable_repr___boxed(lean_object* v_p_133_, lean_object* v_x_134_, lean_object* v_x_135_){
_start:
{
uint8_t v_x_63__boxed_136_; lean_object* v_res_137_; 
v_x_63__boxed_136_ = lean_unbox(v_x_134_);
v_res_137_ = l_Decidable_repr(v_p_133_, v_x_63__boxed_136_, v_x_135_);
lean_dec(v_x_135_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_instReprDecidable___redArg(){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = ((lean_object*)(l_instReprDecidable___redArg___closed__0));
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_instReprDecidable___redArg___boxed(lean_object* v___dummy_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_instReprDecidable___redArg();
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_instReprDecidable(lean_object* v_p_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = ((lean_object*)(l_instReprDecidable___redArg___closed__0));
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_instReprPUnit___lam__0(lean_object* v_x_148_, lean_object* v_x_149_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = ((lean_object*)(l_instReprPUnit___lam__0___closed__1));
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_instReprPUnit___lam__0___boxed(lean_object* v_x_151_, lean_object* v_x_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_instReprPUnit___lam__0(v_x_151_, v_x_152_);
lean_dec(v_x_152_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_instReprULift___redArg___lam__0(lean_object* v_inst_159_, lean_object* v_v_160_, lean_object* v_prec_161_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_162_ = ((lean_object*)(l_instReprULift___redArg___lam__0___closed__1));
v___x_163_ = lean_unsigned_to_nat(1024u);
v___x_164_ = lean_apply_2(v_inst_159_, v_v_160_, v___x_163_);
v___x_165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_162_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = l_Repr_addAppParen(v___x_165_, v_prec_161_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_instReprULift___redArg___lam__0___boxed(lean_object* v_inst_167_, lean_object* v_v_168_, lean_object* v_prec_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_instReprULift___redArg___lam__0(v_inst_167_, v_v_168_, v_prec_169_);
lean_dec(v_prec_169_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_instReprULift___redArg(lean_object* v_inst_171_){
_start:
{
lean_object* v___f_172_; 
v___f_172_ = lean_alloc_closure((void*)(l_instReprULift___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_172_, 0, v_inst_171_);
return v___f_172_;
}
}
LEAN_EXPORT lean_object* l_instReprULift(lean_object* v_00_u03b1_173_, lean_object* v_inst_174_){
_start:
{
lean_object* v___f_175_; 
v___f_175_ = lean_alloc_closure((void*)(l_instReprULift___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_175_, 0, v_inst_174_);
return v___f_175_;
}
}
LEAN_EXPORT lean_object* l_instReprUnit___lam__0(lean_object* v_x_179_, lean_object* v_x_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = ((lean_object*)(l_instReprUnit___lam__0___closed__1));
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_instReprUnit___lam__0___boxed(lean_object* v_x_182_, lean_object* v_x_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_instReprUnit___lam__0(v_x_182_, v_x_183_);
lean_dec(v_x_183_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___redArg(lean_object* v_inst_193_, lean_object* v_x_194_, lean_object* v_x_195_){
_start:
{
if (lean_obj_tag(v_x_194_) == 0)
{
lean_object* v___x_196_; 
lean_dec_ref(v_inst_193_);
v___x_196_ = ((lean_object*)(l_Option_repr___redArg___closed__1));
return v___x_196_;
}
else
{
lean_object* v_val_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_val_197_ = lean_ctor_get(v_x_194_, 0);
lean_inc(v_val_197_);
lean_dec_ref_known(v_x_194_, 1);
v___x_198_ = ((lean_object*)(l_Option_repr___redArg___closed__3));
v___x_199_ = lean_unsigned_to_nat(1024u);
v___x_200_ = lean_apply_2(v_inst_193_, v_val_197_, v___x_199_);
v___x_201_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_198_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = l_Repr_addAppParen(v___x_201_, v_x_195_);
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___redArg___boxed(lean_object* v_inst_203_, lean_object* v_x_204_, lean_object* v_x_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Option_repr___redArg(v_inst_203_, v_x_204_, v_x_205_);
lean_dec(v_x_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Option_repr(lean_object* v_00_u03b1_207_, lean_object* v_inst_208_, lean_object* v_x_209_, lean_object* v_x_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l_Option_repr___redArg(v_inst_208_, v_x_209_, v_x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___boxed(lean_object* v_00_u03b1_212_, lean_object* v_inst_213_, lean_object* v_x_214_, lean_object* v_x_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Option_repr(v_00_u03b1_212_, v_inst_213_, v_x_214_, v_x_215_);
lean_dec(v_x_215_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_instReprOption___redArg(lean_object* v_inst_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = lean_alloc_closure((void*)(l_Option_repr___boxed), 4, 2);
lean_closure_set(v___x_218_, 0, lean_box(0));
lean_closure_set(v___x_218_, 1, v_inst_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_instReprOption(lean_object* v_00_u03b1_219_, lean_object* v_inst_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_alloc_closure((void*)(l_Option_repr___boxed), 4, 2);
lean_closure_set(v___x_221_, 0, lean_box(0));
lean_closure_set(v___x_221_, 1, v_inst_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Sum_repr___redArg(lean_object* v_inst_228_, lean_object* v_inst_229_, lean_object* v_x_230_, lean_object* v_x_231_){
_start:
{
if (lean_obj_tag(v_x_230_) == 0)
{
lean_object* v_val_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
lean_dec_ref(v_inst_229_);
v_val_232_ = lean_ctor_get(v_x_230_, 0);
lean_inc(v_val_232_);
lean_dec_ref_known(v_x_230_, 1);
v___x_233_ = ((lean_object*)(l_Sum_repr___redArg___closed__1));
v___x_234_ = lean_unsigned_to_nat(1024u);
v___x_235_ = lean_apply_2(v_inst_228_, v_val_232_, v___x_234_);
v___x_236_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_233_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = l_Repr_addAppParen(v___x_236_, v_x_231_);
return v___x_237_;
}
else
{
lean_object* v_val_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
lean_dec_ref(v_inst_228_);
v_val_238_ = lean_ctor_get(v_x_230_, 0);
lean_inc(v_val_238_);
lean_dec_ref_known(v_x_230_, 1);
v___x_239_ = ((lean_object*)(l_Sum_repr___redArg___closed__3));
v___x_240_ = lean_unsigned_to_nat(1024u);
v___x_241_ = lean_apply_2(v_inst_229_, v_val_238_, v___x_240_);
v___x_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_239_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = l_Repr_addAppParen(v___x_242_, v_x_231_);
return v___x_243_;
}
}
}
LEAN_EXPORT lean_object* l_Sum_repr___redArg___boxed(lean_object* v_inst_244_, lean_object* v_inst_245_, lean_object* v_x_246_, lean_object* v_x_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Sum_repr___redArg(v_inst_244_, v_inst_245_, v_x_246_, v_x_247_);
lean_dec(v_x_247_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Sum_repr(lean_object* v_00_u03b1_249_, lean_object* v_00_u03b2_250_, lean_object* v_inst_251_, lean_object* v_inst_252_, lean_object* v_x_253_, lean_object* v_x_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Sum_repr___redArg(v_inst_251_, v_inst_252_, v_x_253_, v_x_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Sum_repr___boxed(lean_object* v_00_u03b1_256_, lean_object* v_00_u03b2_257_, lean_object* v_inst_258_, lean_object* v_inst_259_, lean_object* v_x_260_, lean_object* v_x_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Sum_repr(v_00_u03b1_256_, v_00_u03b2_257_, v_inst_258_, v_inst_259_, v_x_260_, v_x_261_);
lean_dec(v_x_261_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_instReprSum___redArg(lean_object* v_inst_263_, lean_object* v_inst_264_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_alloc_closure((void*)(l_Sum_repr___boxed), 6, 4);
lean_closure_set(v___x_265_, 0, lean_box(0));
lean_closure_set(v___x_265_, 1, lean_box(0));
lean_closure_set(v___x_265_, 2, v_inst_263_);
lean_closure_set(v___x_265_, 3, v_inst_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_instReprSum(lean_object* v_00_u03b1_266_, lean_object* v_00_u03b2_267_, lean_object* v_inst_268_, lean_object* v_inst_269_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = lean_alloc_closure((void*)(l_Sum_repr___boxed), 6, 4);
lean_closure_set(v___x_270_, 0, lean_box(0));
lean_closure_set(v___x_270_, 1, lean_box(0));
lean_closure_set(v___x_270_, 2, v_inst_268_);
lean_closure_set(v___x_270_, 3, v_inst_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object* v_inst_271_, lean_object* v_a_272_, lean_object* v_xs_273_){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_274_ = lean_unsigned_to_nat(0u);
v___x_275_ = lean_apply_2(v_inst_271_, v_a_272_, v___x_274_);
v___x_276_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v_xs_273_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_instReprTupleOfRepr___redArg(lean_object* v_inst_277_){
_start:
{
lean_object* v___f_278_; 
v___f_278_ = lean_alloc_closure((void*)(l_instReprTupleOfRepr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_278_, 0, v_inst_277_);
return v___f_278_;
}
}
LEAN_EXPORT lean_object* l_instReprTupleOfRepr(lean_object* v_00_u03b1_279_, lean_object* v_inst_280_){
_start:
{
lean_object* v___f_281_; 
v___f_281_ = lean_alloc_closure((void*)(l_instReprTupleOfRepr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_281_, 0, v_inst_280_);
return v___f_281_;
}
}
LEAN_EXPORT lean_object* l_Prod_reprTuple___redArg(lean_object* v_inst_282_, lean_object* v_inst_283_, lean_object* v_x_284_, lean_object* v_x_285_){
_start:
{
lean_object* v_fst_286_; lean_object* v_snd_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_297_; 
v_fst_286_ = lean_ctor_get(v_x_284_, 0);
v_snd_287_ = lean_ctor_get(v_x_284_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v_x_284_);
if (v_isSharedCheck_297_ == 0)
{
v___x_289_ = v_x_284_;
v_isShared_290_ = v_isSharedCheck_297_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_snd_287_);
lean_inc(v_fst_286_);
lean_dec(v_x_284_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_297_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_294_; 
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_apply_2(v_inst_282_, v_fst_286_, v___x_291_);
if (v_isShared_290_ == 0)
{
lean_ctor_set_tag(v___x_289_, 1);
lean_ctor_set(v___x_289_, 1, v_x_285_);
lean_ctor_set(v___x_289_, 0, v___x_292_);
v___x_294_ = v___x_289_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v_x_285_);
v___x_294_ = v_reuseFailAlloc_296_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
lean_object* v___x_295_; 
v___x_295_ = lean_apply_2(v_inst_283_, v_snd_287_, v___x_294_);
return v___x_295_;
}
}
}
}
LEAN_EXPORT lean_object* l_Prod_reprTuple(lean_object* v_00_u03b1_298_, lean_object* v_00_u03b2_299_, lean_object* v_inst_300_, lean_object* v_inst_301_, lean_object* v_x_302_, lean_object* v_x_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Prod_reprTuple___redArg(v_inst_300_, v_inst_301_, v_x_302_, v_x_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_instReprTupleProdOfRepr___redArg(lean_object* v_inst_305_, lean_object* v_inst_306_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = lean_alloc_closure((void*)(l_Prod_reprTuple), 6, 4);
lean_closure_set(v___x_307_, 0, lean_box(0));
lean_closure_set(v___x_307_, 1, lean_box(0));
lean_closure_set(v___x_307_, 2, v_inst_305_);
lean_closure_set(v___x_307_, 3, v_inst_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_instReprTupleProdOfRepr(lean_object* v_00_u03b1_308_, lean_object* v_00_u03b2_309_, lean_object* v_inst_310_, lean_object* v_inst_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_alloc_closure((void*)(l_Prod_reprTuple), 6, 4);
lean_closure_set(v___x_312_, 0, lean_box(0));
lean_closure_set(v___x_312_, 1, lean_box(0));
lean_closure_set(v___x_312_, 2, v_inst_310_);
lean_closure_set(v___x_312_, 3, v_inst_311_);
return v___x_312_;
}
}
static lean_object* _init_l_Prod_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_obj_once(&l_Repr_addAppParen___closed__2, &l_Repr_addAppParen___closed__2_once, _init_l_Repr_addAppParen___closed__2);
v___x_321_ = lean_nat_to_int(v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___redArg(lean_object* v_inst_322_, lean_object* v_inst_323_, lean_object* v_x_324_){
_start:
{
lean_object* v_fst_325_; lean_object* v_snd_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_349_; 
v_fst_325_ = lean_ctor_get(v_x_324_, 0);
v_snd_326_ = lean_ctor_get(v_x_324_, 1);
v_isSharedCheck_349_ = !lean_is_exclusive(v_x_324_);
if (v_isSharedCheck_349_ == 0)
{
v___x_328_ = v_x_324_;
v_isShared_329_ = v_isSharedCheck_349_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_snd_326_);
lean_inc(v_fst_325_);
lean_dec(v_x_324_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_349_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___f_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_335_; 
v___f_330_ = ((lean_object*)(l_Prod_repr___redArg___closed__0));
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = lean_apply_2(v_inst_322_, v_fst_325_, v___x_331_);
v___x_333_ = lean_box(0);
if (v_isShared_329_ == 0)
{
lean_ctor_set_tag(v___x_328_, 1);
lean_ctor_set(v___x_328_, 1, v___x_333_);
lean_ctor_set(v___x_328_, 0, v___x_332_);
v___x_335_ = v___x_328_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_332_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v___x_333_);
v___x_335_ = v_reuseFailAlloc_348_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; lean_object* v___x_347_; 
v___x_336_ = lean_apply_2(v_inst_323_, v_snd_326_, v___x_335_);
v___x_337_ = l_List_reverse___redArg(v___x_336_);
v___x_338_ = ((lean_object*)(l_Prod_repr___redArg___closed__3));
v___x_339_ = l_Std_Format_joinSep___redArg(v___f_330_, v___x_337_, v___x_338_);
v___x_340_ = lean_obj_once(&l_Prod_repr___redArg___closed__4, &l_Prod_repr___redArg___closed__4_once, _init_l_Prod_repr___redArg___closed__4);
v___x_341_ = ((lean_object*)(l_Repr_addAppParen___closed__4));
v___x_342_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v___x_339_);
v___x_343_ = ((lean_object*)(l_Repr_addAppParen___closed__5));
v___x_344_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_342_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_345_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_340_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
v___x_346_ = 0;
v___x_347_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_347_, 0, v___x_345_);
lean_ctor_set_uint8(v___x_347_, sizeof(void*)*1, v___x_346_);
return v___x_347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Prod_repr(lean_object* v_00_u03b1_350_, lean_object* v_00_u03b2_351_, lean_object* v_inst_352_, lean_object* v_inst_353_, lean_object* v_x_354_, lean_object* v_x_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Prod_repr___redArg(v_inst_352_, v_inst_353_, v_x_354_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___boxed(lean_object* v_00_u03b1_357_, lean_object* v_00_u03b2_358_, lean_object* v_inst_359_, lean_object* v_inst_360_, lean_object* v_x_361_, lean_object* v_x_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Prod_repr(v_00_u03b1_357_, v_00_u03b2_358_, v_inst_359_, v_inst_360_, v_x_361_, v_x_362_);
lean_dec(v_x_362_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_instReprProdOfReprTuple___redArg(lean_object* v_inst_364_, lean_object* v_inst_365_){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_366_, 0, lean_box(0));
lean_closure_set(v___x_366_, 1, lean_box(0));
lean_closure_set(v___x_366_, 2, v_inst_364_);
lean_closure_set(v___x_366_, 3, v_inst_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_instReprProdOfReprTuple(lean_object* v_00_u03b1_367_, lean_object* v_00_u03b2_368_, lean_object* v_inst_369_, lean_object* v_inst_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_371_, 0, lean_box(0));
lean_closure_set(v___x_371_, 1, lean_box(0));
lean_closure_set(v___x_371_, 2, v_inst_369_);
lean_closure_set(v___x_371_, 3, v_inst_370_);
return v___x_371_;
}
}
static lean_object* _init_l_Sigma_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = ((lean_object*)(l_Sigma_repr___redArg___closed__0));
v___x_378_ = lean_string_length(v___x_377_);
return v___x_378_;
}
}
static lean_object* _init_l_Sigma_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_obj_once(&l_Sigma_repr___redArg___closed__4, &l_Sigma_repr___redArg___closed__4_once, _init_l_Sigma_repr___redArg___closed__4);
v___x_380_ = lean_nat_to_int(v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Sigma_repr___redArg(lean_object* v_inst_385_, lean_object* v_inst_386_, lean_object* v_x_387_){
_start:
{
lean_object* v_fst_388_; lean_object* v_snd_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_409_; 
v_fst_388_ = lean_ctor_get(v_x_387_, 0);
v_snd_389_ = lean_ctor_get(v_x_387_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v_x_387_);
if (v_isSharedCheck_409_ == 0)
{
v___x_391_ = v_x_387_;
v_isShared_392_ = v_isSharedCheck_409_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_snd_389_);
lean_inc(v_fst_388_);
lean_dec(v_x_387_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_409_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_393_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_388_);
v___x_394_ = lean_apply_2(v_inst_385_, v_fst_388_, v___x_393_);
v___x_395_ = ((lean_object*)(l_Sigma_repr___redArg___closed__2));
if (v_isShared_392_ == 0)
{
lean_ctor_set_tag(v___x_391_, 5);
lean_ctor_set(v___x_391_, 1, v___x_395_);
lean_ctor_set(v___x_391_, 0, v___x_394_);
v___x_397_ = v___x_391_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_394_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v___x_395_);
v___x_397_ = v_reuseFailAlloc_408_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; lean_object* v___x_407_; 
v___x_398_ = lean_apply_3(v_inst_386_, v_fst_388_, v_snd_389_, v___x_393_);
v___x_399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_397_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = lean_obj_once(&l_Sigma_repr___redArg___closed__5, &l_Sigma_repr___redArg___closed__5_once, _init_l_Sigma_repr___redArg___closed__5);
v___x_401_ = ((lean_object*)(l_Sigma_repr___redArg___closed__6));
v___x_402_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set(v___x_402_, 1, v___x_399_);
v___x_403_ = ((lean_object*)(l_Sigma_repr___redArg___closed__7));
v___x_404_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_402_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_400_);
lean_ctor_set(v___x_405_, 1, v___x_404_);
v___x_406_ = 0;
v___x_407_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_407_, 0, v___x_405_);
lean_ctor_set_uint8(v___x_407_, sizeof(void*)*1, v___x_406_);
return v___x_407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Sigma_repr(lean_object* v_00_u03b1_410_, lean_object* v_00_u03b2_411_, lean_object* v_inst_412_, lean_object* v_inst_413_, lean_object* v_x_414_, lean_object* v_x_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Sigma_repr___redArg(v_inst_412_, v_inst_413_, v_x_414_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Sigma_repr___boxed(lean_object* v_00_u03b1_417_, lean_object* v_00_u03b2_418_, lean_object* v_inst_419_, lean_object* v_inst_420_, lean_object* v_x_421_, lean_object* v_x_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Sigma_repr(v_00_u03b1_417_, v_00_u03b2_418_, v_inst_419_, v_inst_420_, v_x_421_, v_x_422_);
lean_dec(v_x_422_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_instReprSigma___redArg(lean_object* v_inst_424_, lean_object* v_inst_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = lean_alloc_closure((void*)(l_Sigma_repr___boxed), 6, 4);
lean_closure_set(v___x_426_, 0, lean_box(0));
lean_closure_set(v___x_426_, 1, lean_box(0));
lean_closure_set(v___x_426_, 2, v_inst_424_);
lean_closure_set(v___x_426_, 3, v_inst_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_instReprSigma(lean_object* v_00_u03b1_427_, lean_object* v_00_u03b2_428_, lean_object* v_inst_429_, lean_object* v_inst_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = lean_alloc_closure((void*)(l_Sigma_repr___boxed), 6, 4);
lean_closure_set(v___x_431_, 0, lean_box(0));
lean_closure_set(v___x_431_, 1, lean_box(0));
lean_closure_set(v___x_431_, 2, v_inst_429_);
lean_closure_set(v___x_431_, 3, v_inst_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_instReprSubtype___redArg___lam__0(lean_object* v_inst_432_, lean_object* v_s_433_, lean_object* v_prec_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = lean_apply_2(v_inst_432_, v_s_433_, v_prec_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_instReprSubtype___redArg(lean_object* v_inst_436_){
_start:
{
lean_object* v___f_437_; 
v___f_437_ = lean_alloc_closure((void*)(l_instReprSubtype___redArg___lam__0), 3, 1);
lean_closure_set(v___f_437_, 0, v_inst_436_);
return v___f_437_;
}
}
LEAN_EXPORT lean_object* l_instReprSubtype(lean_object* v_00_u03b1_438_, lean_object* v_p_439_, lean_object* v_inst_440_){
_start:
{
lean_object* v___f_441_; 
v___f_441_ = lean_alloc_closure((void*)(l_instReprSubtype___redArg___lam__0), 3, 1);
lean_closure_set(v___f_441_, 0, v_inst_440_);
return v___f_441_;
}
}
LEAN_EXPORT uint32_t l_Nat_digitChar(lean_object* v_n_442_){
_start:
{
lean_object* v___x_443_; uint8_t v___x_444_; 
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = lean_nat_dec_eq(v_n_442_, v___x_443_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; uint8_t v___x_446_; 
v___x_445_ = lean_unsigned_to_nat(1u);
v___x_446_ = lean_nat_dec_eq(v_n_442_, v___x_445_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_447_ = lean_unsigned_to_nat(2u);
v___x_448_ = lean_nat_dec_eq(v_n_442_, v___x_447_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_449_ = lean_unsigned_to_nat(3u);
v___x_450_ = lean_nat_dec_eq(v_n_442_, v___x_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_451_ = lean_unsigned_to_nat(4u);
v___x_452_ = lean_nat_dec_eq(v_n_442_, v___x_451_);
if (v___x_452_ == 0)
{
lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_453_ = lean_unsigned_to_nat(5u);
v___x_454_ = lean_nat_dec_eq(v_n_442_, v___x_453_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_455_ = lean_unsigned_to_nat(6u);
v___x_456_ = lean_nat_dec_eq(v_n_442_, v___x_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_457_ = lean_unsigned_to_nat(7u);
v___x_458_ = lean_nat_dec_eq(v_n_442_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_459_ = lean_unsigned_to_nat(8u);
v___x_460_ = lean_nat_dec_eq(v_n_442_, v___x_459_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_461_ = lean_unsigned_to_nat(9u);
v___x_462_ = lean_nat_dec_eq(v_n_442_, v___x_461_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_463_ = lean_unsigned_to_nat(10u);
v___x_464_ = lean_nat_dec_eq(v_n_442_, v___x_463_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_465_ = lean_unsigned_to_nat(11u);
v___x_466_ = lean_nat_dec_eq(v_n_442_, v___x_465_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_467_ = lean_unsigned_to_nat(12u);
v___x_468_ = lean_nat_dec_eq(v_n_442_, v___x_467_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_469_ = lean_unsigned_to_nat(13u);
v___x_470_ = lean_nat_dec_eq(v_n_442_, v___x_469_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_471_ = lean_unsigned_to_nat(14u);
v___x_472_ = lean_nat_dec_eq(v_n_442_, v___x_471_);
if (v___x_472_ == 0)
{
lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_473_ = lean_unsigned_to_nat(15u);
v___x_474_ = lean_nat_dec_eq(v_n_442_, v___x_473_);
if (v___x_474_ == 0)
{
uint32_t v___x_475_; 
v___x_475_ = 42;
return v___x_475_;
}
else
{
uint32_t v___x_476_; 
v___x_476_ = 102;
return v___x_476_;
}
}
else
{
uint32_t v___x_477_; 
v___x_477_ = 101;
return v___x_477_;
}
}
else
{
uint32_t v___x_478_; 
v___x_478_ = 100;
return v___x_478_;
}
}
else
{
uint32_t v___x_479_; 
v___x_479_ = 99;
return v___x_479_;
}
}
else
{
uint32_t v___x_480_; 
v___x_480_ = 98;
return v___x_480_;
}
}
else
{
uint32_t v___x_481_; 
v___x_481_ = 97;
return v___x_481_;
}
}
else
{
uint32_t v___x_482_; 
v___x_482_ = 57;
return v___x_482_;
}
}
else
{
uint32_t v___x_483_; 
v___x_483_ = 56;
return v___x_483_;
}
}
else
{
uint32_t v___x_484_; 
v___x_484_ = 55;
return v___x_484_;
}
}
else
{
uint32_t v___x_485_; 
v___x_485_ = 54;
return v___x_485_;
}
}
else
{
uint32_t v___x_486_; 
v___x_486_ = 53;
return v___x_486_;
}
}
else
{
uint32_t v___x_487_; 
v___x_487_ = 52;
return v___x_487_;
}
}
else
{
uint32_t v___x_488_; 
v___x_488_ = 51;
return v___x_488_;
}
}
else
{
uint32_t v___x_489_; 
v___x_489_ = 50;
return v___x_489_;
}
}
else
{
uint32_t v___x_490_; 
v___x_490_ = 49;
return v___x_490_;
}
}
else
{
uint32_t v___x_491_; 
v___x_491_ = 48;
return v___x_491_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_digitChar___boxed(lean_object* v_n_492_){
_start:
{
uint32_t v_res_493_; lean_object* v_r_494_; 
v_res_493_ = l_Nat_digitChar(v_n_492_);
lean_dec(v_n_492_);
v_r_494_ = lean_box_uint32(v_res_493_);
return v_r_494_;
}
}
LEAN_EXPORT lean_object* l_Nat_toDigitsCore(lean_object* v_base_495_, lean_object* v_x_496_, lean_object* v_x_497_, lean_object* v_x_498_){
_start:
{
lean_object* v_zero_499_; uint8_t v_isZero_500_; 
v_zero_499_ = lean_unsigned_to_nat(0u);
v_isZero_500_ = lean_nat_dec_eq(v_x_496_, v_zero_499_);
if (v_isZero_500_ == 1)
{
lean_dec(v_x_497_);
lean_dec(v_x_496_);
return v_x_498_;
}
else
{
lean_object* v___x_501_; uint32_t v_d_502_; lean_object* v_n_x27_503_; uint8_t v___x_504_; 
v___x_501_ = lean_nat_mod(v_x_497_, v_base_495_);
v_d_502_ = l_Nat_digitChar(v___x_501_);
lean_dec(v___x_501_);
v_n_x27_503_ = lean_nat_div(v_x_497_, v_base_495_);
lean_dec(v_x_497_);
v___x_504_ = lean_nat_dec_eq(v_n_x27_503_, v_zero_499_);
if (v___x_504_ == 0)
{
lean_object* v_one_505_; lean_object* v_n_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v_one_505_ = lean_unsigned_to_nat(1u);
v_n_506_ = lean_nat_sub(v_x_496_, v_one_505_);
lean_dec(v_x_496_);
v___x_507_ = lean_box_uint32(v_d_502_);
v___x_508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
lean_ctor_set(v___x_508_, 1, v_x_498_);
v_x_496_ = v_n_506_;
v_x_497_ = v_n_x27_503_;
v_x_498_ = v___x_508_;
goto _start;
}
else
{
lean_object* v___x_510_; lean_object* v___x_511_; 
lean_dec(v_n_x27_503_);
lean_dec(v_x_496_);
v___x_510_ = lean_box_uint32(v_d_502_);
v___x_511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
lean_ctor_set(v___x_511_, 1, v_x_498_);
return v___x_511_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_toDigitsCore___boxed(lean_object* v_base_512_, lean_object* v_x_513_, lean_object* v_x_514_, lean_object* v_x_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Nat_toDigitsCore(v_base_512_, v_x_513_, v_x_514_, v_x_515_);
lean_dec(v_base_512_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Nat_toDigits(lean_object* v_base_517_, lean_object* v_n_518_){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_519_ = lean_unsigned_to_nat(1u);
v___x_520_ = lean_nat_add(v_n_518_, v___x_519_);
v___x_521_ = lean_box(0);
v___x_522_ = l_Nat_toDigitsCore(v_base_517_, v___x_520_, v_n_518_, v___x_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Nat_toDigits___boxed(lean_object* v_base_523_, lean_object* v_n_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Nat_toDigits(v_base_523_, v_n_524_);
lean_dec(v_base_523_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_USize_repr___boxed(lean_object* v_n_527_){
_start:
{
size_t v_n_boxed_528_; lean_object* v_res_529_; 
v_n_boxed_528_ = lean_unbox_usize(v_n_527_);
lean_dec(v_n_527_);
v_res_529_ = lean_string_of_usize(v_n_boxed_528_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Init_Data_Repr_0__Nat_reprArray_spec__0(lean_object* v_a_530_, lean_object* v_a_531_){
_start:
{
if (lean_obj_tag(v_a_530_) == 0)
{
lean_object* v___x_532_; 
v___x_532_ = l_List_reverse___redArg(v_a_531_);
return v___x_532_;
}
else
{
lean_object* v_head_533_; lean_object* v_tail_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_544_; 
v_head_533_ = lean_ctor_get(v_a_530_, 0);
v_tail_534_ = lean_ctor_get(v_a_530_, 1);
v_isSharedCheck_544_ = !lean_is_exclusive(v_a_530_);
if (v_isSharedCheck_544_ == 0)
{
v___x_536_ = v_a_530_;
v_isShared_537_ = v_isSharedCheck_544_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_tail_534_);
lean_inc(v_head_533_);
lean_dec(v_a_530_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_544_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
size_t v___x_538_; lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_538_ = lean_usize_of_nat(v_head_533_);
lean_dec(v_head_533_);
v___x_539_ = lean_string_of_usize(v___x_538_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 1, v_a_531_);
lean_ctor_set(v___x_536_, 0, v___x_539_);
v___x_541_ = v___x_536_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_a_531_);
v___x_541_ = v_reuseFailAlloc_543_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
v_a_530_ = v_tail_534_;
v_a_531_ = v___x_541_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Repr_0__Nat_reprArray___closed__0(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_unsigned_to_nat(128u);
v___x_546_ = l_List_range(v___x_545_);
return v___x_546_;
}
}
static lean_object* _init_l___private_Init_Data_Repr_0__Nat_reprArray___closed__1(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_547_ = lean_box(0);
v___x_548_ = lean_obj_once(&l___private_Init_Data_Repr_0__Nat_reprArray___closed__0, &l___private_Init_Data_Repr_0__Nat_reprArray___closed__0_once, _init_l___private_Init_Data_Repr_0__Nat_reprArray___closed__0);
v___x_549_ = l_List_mapTR_loop___at___00__private_Init_Data_Repr_0__Nat_reprArray_spec__0(v___x_548_, v___x_547_);
return v___x_549_;
}
}
static lean_object* _init_l___private_Init_Data_Repr_0__Nat_reprArray___closed__2(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_obj_once(&l___private_Init_Data_Repr_0__Nat_reprArray___closed__1, &l___private_Init_Data_Repr_0__Nat_reprArray___closed__1_once, _init_l___private_Init_Data_Repr_0__Nat_reprArray___closed__1);
v___x_551_ = lean_array_mk(v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_l___private_Init_Data_Repr_0__Nat_reprArray(void){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lean_obj_once(&l___private_Init_Data_Repr_0__Nat_reprArray___closed__2, &l___private_Init_Data_Repr_0__Nat_reprArray___closed__2_once, _init_l___private_Init_Data_Repr_0__Nat_reprArray___closed__2);
return v___x_552_;
}
}
static lean_object* _init_l_Nat_reprFast___closed__0(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = l___private_Init_Data_Repr_0__Nat_reprArray;
v___x_554_ = lean_array_get_size(v___x_553_);
return v___x_554_;
}
}
static lean_object* _init_l_Nat_reprFast___closed__1(void){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_555_ = l_System_Platform_numBits;
v___x_556_ = lean_unsigned_to_nat(2u);
v___x_557_ = lean_nat_pow(v___x_556_, v___x_555_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Nat_reprFast(lean_object* v_n_558_){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
v___x_559_ = l___private_Init_Data_Repr_0__Nat_reprArray;
v___x_560_ = lean_obj_once(&l_Nat_reprFast___closed__0, &l_Nat_reprFast___closed__0_once, _init_l_Nat_reprFast___closed__0);
v___x_561_ = lean_nat_dec_lt(v_n_558_, v___x_560_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; uint8_t v___x_563_; 
v___x_562_ = lean_obj_once(&l_Nat_reprFast___closed__1, &l_Nat_reprFast___closed__1_once, _init_l_Nat_reprFast___closed__1);
v___x_563_ = lean_nat_dec_lt(v_n_558_, v___x_562_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_564_ = lean_unsigned_to_nat(10u);
v___x_565_ = l_Nat_toDigits(v___x_564_, v_n_558_);
v___x_566_ = lean_string_mk(v___x_565_);
return v___x_566_;
}
else
{
size_t v___x_567_; lean_object* v___x_568_; 
v___x_567_ = lean_usize_of_nat(v_n_558_);
lean_dec(v_n_558_);
v___x_568_ = lean_string_of_usize(v___x_567_);
return v___x_568_;
}
}
else
{
lean_object* v___x_569_; 
v___x_569_ = lean_array_fget_borrowed(v___x_559_, v_n_558_);
lean_dec(v_n_558_);
lean_inc(v___x_569_);
return v___x_569_;
}
}
}
LEAN_EXPORT uint32_t l_Nat_superDigitChar(lean_object* v_n_570_){
_start:
{
lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_571_ = lean_unsigned_to_nat(0u);
v___x_572_ = lean_nat_dec_eq(v_n_570_, v___x_571_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; uint8_t v___x_574_; 
v___x_573_ = lean_unsigned_to_nat(1u);
v___x_574_ = lean_nat_dec_eq(v_n_570_, v___x_573_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_575_ = lean_unsigned_to_nat(2u);
v___x_576_ = lean_nat_dec_eq(v_n_570_, v___x_575_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_unsigned_to_nat(3u);
v___x_578_ = lean_nat_dec_eq(v_n_570_, v___x_577_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_579_ = lean_unsigned_to_nat(4u);
v___x_580_ = lean_nat_dec_eq(v_n_570_, v___x_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_581_ = lean_unsigned_to_nat(5u);
v___x_582_ = lean_nat_dec_eq(v_n_570_, v___x_581_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_583_ = lean_unsigned_to_nat(6u);
v___x_584_ = lean_nat_dec_eq(v_n_570_, v___x_583_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; uint8_t v___x_586_; 
v___x_585_ = lean_unsigned_to_nat(7u);
v___x_586_ = lean_nat_dec_eq(v_n_570_, v___x_585_);
if (v___x_586_ == 0)
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = lean_unsigned_to_nat(8u);
v___x_588_ = lean_nat_dec_eq(v_n_570_, v___x_587_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = lean_unsigned_to_nat(9u);
v___x_590_ = lean_nat_dec_eq(v_n_570_, v___x_589_);
if (v___x_590_ == 0)
{
uint32_t v___x_591_; 
v___x_591_ = 42;
return v___x_591_;
}
else
{
uint32_t v___x_592_; 
v___x_592_ = 8313;
return v___x_592_;
}
}
else
{
uint32_t v___x_593_; 
v___x_593_ = 8312;
return v___x_593_;
}
}
else
{
uint32_t v___x_594_; 
v___x_594_ = 8311;
return v___x_594_;
}
}
else
{
uint32_t v___x_595_; 
v___x_595_ = 8310;
return v___x_595_;
}
}
else
{
uint32_t v___x_596_; 
v___x_596_ = 8309;
return v___x_596_;
}
}
else
{
uint32_t v___x_597_; 
v___x_597_ = 8308;
return v___x_597_;
}
}
else
{
uint32_t v___x_598_; 
v___x_598_ = 179;
return v___x_598_;
}
}
else
{
uint32_t v___x_599_; 
v___x_599_ = 178;
return v___x_599_;
}
}
else
{
uint32_t v___x_600_; 
v___x_600_ = 185;
return v___x_600_;
}
}
else
{
uint32_t v___x_601_; 
v___x_601_ = 8304;
return v___x_601_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_superDigitChar___boxed(lean_object* v_n_602_){
_start:
{
uint32_t v_res_603_; lean_object* v_r_604_; 
v_res_603_ = l_Nat_superDigitChar(v_n_602_);
lean_dec(v_n_602_);
v_r_604_ = lean_box_uint32(v_res_603_);
return v_r_604_;
}
}
LEAN_EXPORT lean_object* l_Nat_toSuperDigitsAux(lean_object* v_x_605_, lean_object* v_x_606_){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; uint32_t v_d_609_; lean_object* v_n_x27_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_607_ = lean_unsigned_to_nat(10u);
v___x_608_ = lean_nat_mod(v_x_605_, v___x_607_);
v_d_609_ = l_Nat_superDigitChar(v___x_608_);
lean_dec(v___x_608_);
v_n_x27_610_ = lean_nat_div(v_x_605_, v___x_607_);
lean_dec(v_x_605_);
v___x_611_ = lean_unsigned_to_nat(0u);
v___x_612_ = lean_nat_dec_eq(v_n_x27_610_, v___x_611_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_box_uint32(v_d_609_);
v___x_614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
lean_ctor_set(v___x_614_, 1, v_x_606_);
v_x_605_ = v_n_x27_610_;
v_x_606_ = v___x_614_;
goto _start;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; 
lean_dec(v_n_x27_610_);
v___x_616_ = lean_box_uint32(v_d_609_);
v___x_617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
lean_ctor_set(v___x_617_, 1, v_x_606_);
return v___x_617_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_toSuperDigits(lean_object* v_n_618_){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = lean_box(0);
v___x_620_ = l_Nat_toSuperDigitsAux(v_n_618_, v___x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Nat_toSuperscriptString(lean_object* v_n_621_){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = l_Nat_toSuperDigits(v_n_621_);
v___x_623_ = lean_string_mk(v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT uint32_t l_Nat_subDigitChar(lean_object* v_n_624_){
_start:
{
lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_625_ = lean_unsigned_to_nat(0u);
v___x_626_ = lean_nat_dec_eq(v_n_624_, v___x_625_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; uint8_t v___x_628_; 
v___x_627_ = lean_unsigned_to_nat(1u);
v___x_628_ = lean_nat_dec_eq(v_n_624_, v___x_627_);
if (v___x_628_ == 0)
{
lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_629_ = lean_unsigned_to_nat(2u);
v___x_630_ = lean_nat_dec_eq(v_n_624_, v___x_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_631_ = lean_unsigned_to_nat(3u);
v___x_632_ = lean_nat_dec_eq(v_n_624_, v___x_631_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_633_ = lean_unsigned_to_nat(4u);
v___x_634_ = lean_nat_dec_eq(v_n_624_, v___x_633_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_635_ = lean_unsigned_to_nat(5u);
v___x_636_ = lean_nat_dec_eq(v_n_624_, v___x_635_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_637_ = lean_unsigned_to_nat(6u);
v___x_638_ = lean_nat_dec_eq(v_n_624_, v___x_637_);
if (v___x_638_ == 0)
{
lean_object* v___x_639_; uint8_t v___x_640_; 
v___x_639_ = lean_unsigned_to_nat(7u);
v___x_640_ = lean_nat_dec_eq(v_n_624_, v___x_639_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; uint8_t v___x_642_; 
v___x_641_ = lean_unsigned_to_nat(8u);
v___x_642_ = lean_nat_dec_eq(v_n_624_, v___x_641_);
if (v___x_642_ == 0)
{
lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_643_ = lean_unsigned_to_nat(9u);
v___x_644_ = lean_nat_dec_eq(v_n_624_, v___x_643_);
if (v___x_644_ == 0)
{
uint32_t v___x_645_; 
v___x_645_ = 42;
return v___x_645_;
}
else
{
uint32_t v___x_646_; 
v___x_646_ = 8329;
return v___x_646_;
}
}
else
{
uint32_t v___x_647_; 
v___x_647_ = 8328;
return v___x_647_;
}
}
else
{
uint32_t v___x_648_; 
v___x_648_ = 8327;
return v___x_648_;
}
}
else
{
uint32_t v___x_649_; 
v___x_649_ = 8326;
return v___x_649_;
}
}
else
{
uint32_t v___x_650_; 
v___x_650_ = 8325;
return v___x_650_;
}
}
else
{
uint32_t v___x_651_; 
v___x_651_ = 8324;
return v___x_651_;
}
}
else
{
uint32_t v___x_652_; 
v___x_652_ = 8323;
return v___x_652_;
}
}
else
{
uint32_t v___x_653_; 
v___x_653_ = 8322;
return v___x_653_;
}
}
else
{
uint32_t v___x_654_; 
v___x_654_ = 8321;
return v___x_654_;
}
}
else
{
uint32_t v___x_655_; 
v___x_655_ = 8320;
return v___x_655_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_subDigitChar___boxed(lean_object* v_n_656_){
_start:
{
uint32_t v_res_657_; lean_object* v_r_658_; 
v_res_657_ = l_Nat_subDigitChar(v_n_656_);
lean_dec(v_n_656_);
v_r_658_ = lean_box_uint32(v_res_657_);
return v_r_658_;
}
}
LEAN_EXPORT lean_object* l_Nat_toSubDigitsAux(lean_object* v_x_659_, lean_object* v_x_660_){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; uint32_t v_d_663_; lean_object* v_n_x27_664_; lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_661_ = lean_unsigned_to_nat(10u);
v___x_662_ = lean_nat_mod(v_x_659_, v___x_661_);
v_d_663_ = l_Nat_subDigitChar(v___x_662_);
lean_dec(v___x_662_);
v_n_x27_664_ = lean_nat_div(v_x_659_, v___x_661_);
lean_dec(v_x_659_);
v___x_665_ = lean_unsigned_to_nat(0u);
v___x_666_ = lean_nat_dec_eq(v_n_x27_664_, v___x_665_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = lean_box_uint32(v_d_663_);
v___x_668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set(v___x_668_, 1, v_x_660_);
v_x_659_ = v_n_x27_664_;
v_x_660_ = v___x_668_;
goto _start;
}
else
{
lean_object* v___x_670_; lean_object* v___x_671_; 
lean_dec(v_n_x27_664_);
v___x_670_ = lean_box_uint32(v_d_663_);
v___x_671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
lean_ctor_set(v___x_671_, 1, v_x_660_);
return v___x_671_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_toSubDigits(lean_object* v_n_672_){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = lean_box(0);
v___x_674_ = l_Nat_toSubDigitsAux(v_n_672_, v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Nat_toSubscriptString(lean_object* v_n_675_){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = l_Nat_toSubDigits(v_n_675_);
v___x_677_ = lean_string_mk(v___x_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_instReprNat___lam__0(lean_object* v_n_678_, lean_object* v_x_679_){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = l_Nat_reprFast(v_n_678_);
v___x_681_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_instReprNat___lam__0___boxed(lean_object* v_n_682_, lean_object* v_x_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_instReprNat___lam__0(v_n_682_, v_x_683_);
lean_dec(v_x_683_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_hexDigitRepr(lean_object* v_n_688_){
_start:
{
uint32_t v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = l_Nat_digitChar(v_n_688_);
v___x_690_ = ((lean_object*)(l_hexDigitRepr___closed__0));
v___x_691_ = lean_string_push(v___x_690_, v___x_689_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_hexDigitRepr___boxed(lean_object* v_n_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_hexDigitRepr(v_n_692_);
lean_dec(v_n_692_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Repr_0__Char_quoteCore_smallCharToHex(uint32_t v_c_694_){
_start:
{
lean_object* v_n_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v_d2_698_; lean_object* v_d1_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v_n_695_ = lean_uint32_to_nat(v_c_694_);
v___x_696_ = lean_unsigned_to_nat(16u);
v___x_697_ = lean_unsigned_to_nat(4u);
v_d2_698_ = lean_nat_shiftr(v_n_695_, v___x_697_);
v_d1_699_ = lean_nat_mod(v_n_695_, v___x_696_);
lean_dec(v_n_695_);
v___x_700_ = l_hexDigitRepr(v_d2_698_);
lean_dec(v_d2_698_);
v___x_701_ = l_hexDigitRepr(v_d1_699_);
lean_dec(v_d1_699_);
v___x_702_ = lean_string_append(v___x_700_, v___x_701_);
lean_dec_ref(v___x_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Repr_0__Char_quoteCore_smallCharToHex___boxed(lean_object* v_c_703_){
_start:
{
uint32_t v_c_boxed_704_; lean_object* v_res_705_; 
v_c_boxed_704_ = lean_unbox_uint32(v_c_703_);
lean_dec(v_c_703_);
v_res_705_ = l___private_Init_Data_Repr_0__Char_quoteCore_smallCharToHex(v_c_boxed_704_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Char_quoteCore(uint32_t v_c_712_, uint8_t v_inString_713_){
_start:
{
uint8_t v___y_715_; uint32_t v___x_727_; uint8_t v___x_728_; 
v___x_727_ = 10;
v___x_728_ = lean_uint32_dec_eq(v_c_712_, v___x_727_);
if (v___x_728_ == 0)
{
uint32_t v___x_729_; uint8_t v___x_730_; 
v___x_729_ = 9;
v___x_730_ = lean_uint32_dec_eq(v_c_712_, v___x_729_);
if (v___x_730_ == 0)
{
uint32_t v___x_731_; uint8_t v___x_732_; 
v___x_731_ = 92;
v___x_732_ = lean_uint32_dec_eq(v_c_712_, v___x_731_);
if (v___x_732_ == 0)
{
uint32_t v___x_733_; uint8_t v___x_734_; 
v___x_733_ = 34;
v___x_734_ = lean_uint32_dec_eq(v_c_712_, v___x_733_);
if (v___x_734_ == 0)
{
if (v_inString_713_ == 0)
{
uint32_t v___x_735_; uint8_t v___x_736_; 
v___x_735_ = 39;
v___x_736_ = lean_uint32_dec_eq(v_c_712_, v___x_735_);
if (v___x_736_ == 0)
{
goto v___jp_721_;
}
else
{
lean_object* v___x_737_; 
v___x_737_ = ((lean_object*)(l_Char_quoteCore___closed__1));
return v___x_737_;
}
}
else
{
goto v___jp_721_;
}
}
else
{
lean_object* v___x_738_; 
v___x_738_ = ((lean_object*)(l_Char_quoteCore___closed__2));
return v___x_738_;
}
}
else
{
lean_object* v___x_739_; 
v___x_739_ = ((lean_object*)(l_Char_quoteCore___closed__3));
return v___x_739_;
}
}
else
{
lean_object* v___x_740_; 
v___x_740_ = ((lean_object*)(l_Char_quoteCore___closed__4));
return v___x_740_;
}
}
else
{
lean_object* v___x_741_; 
v___x_741_ = ((lean_object*)(l_Char_quoteCore___closed__5));
return v___x_741_;
}
v___jp_714_:
{
if (v___y_715_ == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = ((lean_object*)(l_hexDigitRepr___closed__0));
v___x_717_ = lean_string_push(v___x_716_, v_c_712_);
return v___x_717_;
}
else
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_718_ = ((lean_object*)(l_Char_quoteCore___closed__0));
v___x_719_ = l___private_Init_Data_Repr_0__Char_quoteCore_smallCharToHex(v_c_712_);
v___x_720_ = lean_string_append(v___x_718_, v___x_719_);
lean_dec_ref(v___x_719_);
return v___x_720_;
}
}
v___jp_721_:
{
lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_722_ = lean_uint32_to_nat(v_c_712_);
v___x_723_ = lean_unsigned_to_nat(31u);
v___x_724_ = lean_nat_dec_le(v___x_722_, v___x_723_);
lean_dec(v___x_722_);
if (v___x_724_ == 0)
{
uint32_t v___x_725_; uint8_t v___x_726_; 
v___x_725_ = 127;
v___x_726_ = lean_uint32_dec_eq(v_c_712_, v___x_725_);
v___y_715_ = v___x_726_;
goto v___jp_714_;
}
else
{
v___y_715_ = v___x_724_;
goto v___jp_714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Char_quoteCore___boxed(lean_object* v_c_742_, lean_object* v_inString_743_){
_start:
{
uint32_t v_c_boxed_744_; uint8_t v_inString_boxed_745_; lean_object* v_res_746_; 
v_c_boxed_744_ = lean_unbox_uint32(v_c_742_);
lean_dec(v_c_742_);
v_inString_boxed_745_ = lean_unbox(v_inString_743_);
v_res_746_ = l_Char_quoteCore(v_c_boxed_744_, v_inString_boxed_745_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Char_quote(uint32_t v_c_748_){
_start:
{
lean_object* v___x_749_; uint8_t v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_749_ = ((lean_object*)(l_Char_quote___closed__0));
v___x_750_ = 0;
v___x_751_ = l_Char_quoteCore(v_c_748_, v___x_750_);
v___x_752_ = lean_string_append(v___x_749_, v___x_751_);
lean_dec_ref(v___x_751_);
v___x_753_ = lean_string_append(v___x_752_, v___x_749_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Char_quote___boxed(lean_object* v_c_754_){
_start:
{
uint32_t v_c_boxed_755_; lean_object* v_res_756_; 
v_c_boxed_755_ = lean_unbox_uint32(v_c_754_);
lean_dec(v_c_754_);
v_res_756_ = l_Char_quote(v_c_boxed_755_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_instReprChar___lam__0(uint32_t v_c_757_, lean_object* v_x_758_){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = l_Char_quote(v_c_757_);
v___x_760_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_instReprChar___lam__0___boxed(lean_object* v_c_761_, lean_object* v_x_762_){
_start:
{
uint32_t v_c_boxed_763_; lean_object* v_res_764_; 
v_c_boxed_763_ = lean_unbox_uint32(v_c_761_);
lean_dec(v_c_761_);
v_res_764_ = l_instReprChar___lam__0(v_c_boxed_763_, v_x_762_);
lean_dec(v_x_762_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Char_repr(uint32_t v_c_767_){
_start:
{
lean_object* v___x_768_; 
v___x_768_ = l_Char_quote(v_c_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Char_repr___boxed(lean_object* v_c_769_){
_start:
{
uint32_t v_c_boxed_770_; lean_object* v_res_771_; 
v_c_boxed_770_ = lean_unbox_uint32(v_c_769_);
lean_dec(v_c_769_);
v_res_771_ = l_Char_repr(v_c_boxed_770_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_String_quote___lam__0(uint8_t v___x_772_, lean_object* v_s_773_, uint32_t v_c_774_){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = l_Char_quoteCore(v_c_774_, v___x_772_);
v___x_776_ = lean_string_append(v_s_773_, v___x_775_);
lean_dec_ref(v___x_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_String_quote___lam__0___boxed(lean_object* v___x_777_, lean_object* v_s_778_, lean_object* v_c_779_){
_start:
{
uint8_t v___x_21__boxed_780_; uint32_t v_c_boxed_781_; lean_object* v_res_782_; 
v___x_21__boxed_780_ = lean_unbox(v___x_777_);
v_c_boxed_781_ = lean_unbox_uint32(v_c_779_);
lean_dec(v_c_779_);
v_res_782_ = l_String_quote___lam__0(v___x_21__boxed_780_, v_s_778_, v_c_boxed_781_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_String_quote(lean_object* v_s_788_){
_start:
{
uint8_t v___x_789_; 
lean_inc_ref(v_s_788_);
v___x_789_ = lean_string_isempty(v_s_788_);
if (v___x_789_ == 0)
{
lean_object* v___f_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___f_790_ = ((lean_object*)(l_String_quote___closed__0));
v___x_791_ = ((lean_object*)(l_String_quote___closed__1));
v___x_792_ = lean_string_foldl(v___f_790_, v___x_791_, v_s_788_);
v___x_793_ = lean_string_append(v___x_792_, v___x_791_);
return v___x_793_;
}
else
{
lean_object* v___x_794_; 
lean_dec_ref(v_s_788_);
v___x_794_ = ((lean_object*)(l_String_quote___closed__2));
return v___x_794_;
}
}
}
LEAN_EXPORT lean_object* l_instReprString___lam__0(lean_object* v_s_795_, lean_object* v_x_796_){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = l_String_quote(v_s_795_);
v___x_798_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_instReprString___lam__0___boxed(lean_object* v_s_799_, lean_object* v_x_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_instReprString___lam__0(v_s_799_, v_x_800_);
lean_dec(v_x_800_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_instReprRaw___lam__0(lean_object* v_p_810_, lean_object* v_x_811_){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_812_ = ((lean_object*)(l_instReprRaw___lam__0___closed__1));
v___x_813_ = l_Nat_reprFast(v_p_810_);
v___x_814_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
v___x_815_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_812_);
lean_ctor_set(v___x_815_, 1, v___x_814_);
v___x_816_ = ((lean_object*)(l_instReprRaw___lam__0___closed__3));
v___x_817_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_815_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_instReprRaw___lam__0___boxed(lean_object* v_p_818_, lean_object* v_x_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_instReprRaw___lam__0(v_p_818_, v_x_819_);
lean_dec(v_x_819_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_instReprRaw__1___lam__0(lean_object* v_s_824_, lean_object* v_x_825_){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_826_ = lean_substring_tostring(v_s_824_);
v___x_827_ = l_String_quote(v___x_826_);
v___x_828_ = ((lean_object*)(l_instReprRaw__1___lam__0___closed__0));
v___x_829_ = lean_string_append(v___x_827_, v___x_828_);
v___x_830_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_instReprRaw__1___lam__0___boxed(lean_object* v_s_831_, lean_object* v_x_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_instReprRaw__1___lam__0(v_s_831_, v_x_832_);
lean_dec(v_x_832_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_instReprFin___redArg___lam__0(lean_object* v_f_836_, lean_object* v_x_837_){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = l_Nat_reprFast(v_f_836_);
v___x_839_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_instReprFin___redArg___lam__0___boxed(lean_object* v_f_840_, lean_object* v_x_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_instReprFin___redArg___lam__0(v_f_840_, v_x_841_);
lean_dec(v_x_841_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_instReprFin___redArg(){
_start:
{
lean_object* v___f_845_; 
v___f_845_ = ((lean_object*)(l_instReprFin___redArg___closed__0));
return v___f_845_;
}
}
LEAN_EXPORT lean_object* l_instReprFin___redArg___boxed(lean_object* v___dummy_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_instReprFin___redArg();
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_instReprFin(lean_object* v_n_848_){
_start:
{
lean_object* v___f_849_; 
v___f_849_ = ((lean_object*)(l_instReprFin___redArg___closed__0));
return v___f_849_;
}
}
LEAN_EXPORT lean_object* l_instReprFin___boxed(lean_object* v_n_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_instReprFin(v_n_850_);
lean_dec(v_n_850_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_instReprUInt8___lam__0(uint8_t v_n_852_, lean_object* v_x_853_){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = lean_uint8_to_nat(v_n_852_);
v___x_855_ = l_Nat_reprFast(v___x_854_);
v___x_856_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_instReprUInt8___lam__0___boxed(lean_object* v_n_857_, lean_object* v_x_858_){
_start:
{
uint8_t v_n_boxed_859_; lean_object* v_res_860_; 
v_n_boxed_859_ = lean_unbox(v_n_857_);
v_res_860_ = l_instReprUInt8___lam__0(v_n_boxed_859_, v_x_858_);
lean_dec(v_x_858_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_instReprUInt16___lam__0(uint16_t v_n_863_, lean_object* v_x_864_){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_865_ = lean_uint16_to_nat(v_n_863_);
v___x_866_ = l_Nat_reprFast(v___x_865_);
v___x_867_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_instReprUInt16___lam__0___boxed(lean_object* v_n_868_, lean_object* v_x_869_){
_start:
{
uint16_t v_n_boxed_870_; lean_object* v_res_871_; 
v_n_boxed_870_ = lean_unbox(v_n_868_);
v_res_871_ = l_instReprUInt16___lam__0(v_n_boxed_870_, v_x_869_);
lean_dec(v_x_869_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_instReprUInt32___lam__0(uint32_t v_n_874_, lean_object* v_x_875_){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_876_ = lean_uint32_to_nat(v_n_874_);
v___x_877_ = l_Nat_reprFast(v___x_876_);
v___x_878_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_878_, 0, v___x_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_instReprUInt32___lam__0___boxed(lean_object* v_n_879_, lean_object* v_x_880_){
_start:
{
uint32_t v_n_boxed_881_; lean_object* v_res_882_; 
v_n_boxed_881_ = lean_unbox_uint32(v_n_879_);
lean_dec(v_n_879_);
v_res_882_ = l_instReprUInt32___lam__0(v_n_boxed_881_, v_x_880_);
lean_dec(v_x_880_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_instReprUInt64___lam__0(uint64_t v_n_885_, lean_object* v_x_886_){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_887_ = lean_uint64_to_nat(v_n_885_);
v___x_888_ = l_Nat_reprFast(v___x_887_);
v___x_889_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_instReprUInt64___lam__0___boxed(lean_object* v_n_890_, lean_object* v_x_891_){
_start:
{
uint64_t v_n_boxed_892_; lean_object* v_res_893_; 
v_n_boxed_892_ = lean_unbox_uint64(v_n_890_);
lean_dec_ref(v_n_890_);
v_res_893_ = l_instReprUInt64___lam__0(v_n_boxed_892_, v_x_891_);
lean_dec(v_x_891_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_instReprUSize___lam__0(size_t v_n_896_, lean_object* v_x_897_){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_898_ = lean_usize_to_nat(v_n_896_);
v___x_899_ = l_Nat_reprFast(v___x_898_);
v___x_900_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_instReprUSize___lam__0___boxed(lean_object* v_n_901_, lean_object* v_x_902_){
_start:
{
size_t v_n_boxed_903_; lean_object* v_res_904_; 
v_n_boxed_903_ = lean_unbox_usize(v_n_901_);
lean_dec(v_n_901_);
v_res_904_ = l_instReprUSize___lam__0(v_n_boxed_903_, v_x_902_);
lean_dec(v_x_902_);
return v_res_904_;
}
}
static lean_object* _init_l_List_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = ((lean_object*)(l_List_repr___redArg___closed__2));
v___x_913_ = lean_string_length(v___x_912_);
return v___x_913_;
}
}
static lean_object* _init_l_List_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_914_ = lean_obj_once(&l_List_repr___redArg___closed__4, &l_List_repr___redArg___closed__4_once, _init_l_List_repr___redArg___closed__4);
v___x_915_ = lean_nat_to_int(v___x_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_List_repr___redArg(lean_object* v_inst_920_, lean_object* v_a_921_){
_start:
{
if (lean_obj_tag(v_a_921_) == 0)
{
lean_object* v___x_922_; 
lean_dec_ref(v_inst_920_);
v___x_922_ = ((lean_object*)(l_List_repr___redArg___closed__1));
return v___x_922_;
}
else
{
lean_object* v_x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; uint8_t v___x_932_; lean_object* v___x_933_; 
v_x_923_ = lean_alloc_closure((void*)(l_repr), 3, 2);
lean_closure_set(v_x_923_, 0, lean_box(0));
lean_closure_set(v_x_923_, 1, v_inst_920_);
v___x_924_ = ((lean_object*)(l_Prod_repr___redArg___closed__3));
v___x_925_ = l_Std_Format_joinSep___redArg(v_x_923_, v_a_921_, v___x_924_);
v___x_926_ = lean_obj_once(&l_List_repr___redArg___closed__5, &l_List_repr___redArg___closed__5_once, _init_l_List_repr___redArg___closed__5);
v___x_927_ = ((lean_object*)(l_List_repr___redArg___closed__6));
v___x_928_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
lean_ctor_set(v___x_928_, 1, v___x_925_);
v___x_929_ = ((lean_object*)(l_List_repr___redArg___closed__7));
v___x_930_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_928_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_926_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___x_932_ = 0;
v___x_933_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set_uint8(v___x_933_, sizeof(void*)*1, v___x_932_);
return v___x_933_;
}
}
}
LEAN_EXPORT lean_object* l_List_repr(lean_object* v_00_u03b1_934_, lean_object* v_inst_935_, lean_object* v_a_936_, lean_object* v_n_937_){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = l_List_repr___redArg(v_inst_935_, v_a_936_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_List_repr___boxed(lean_object* v_00_u03b1_939_, lean_object* v_inst_940_, lean_object* v_a_941_, lean_object* v_n_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_List_repr(v_00_u03b1_939_, v_inst_940_, v_a_941_, v_n_942_);
lean_dec(v_n_942_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_instReprList___redArg(lean_object* v_inst_944_){
_start:
{
lean_object* v___x_945_; 
v___x_945_ = lean_alloc_closure((void*)(l_List_repr___boxed), 4, 2);
lean_closure_set(v___x_945_, 0, lean_box(0));
lean_closure_set(v___x_945_, 1, v_inst_944_);
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l_instReprList(lean_object* v_00_u03b1_946_, lean_object* v_inst_947_){
_start:
{
lean_object* v___x_948_; 
v___x_948_ = lean_alloc_closure((void*)(l_List_repr___boxed), 4, 2);
lean_closure_set(v___x_948_, 0, lean_box(0));
lean_closure_set(v___x_948_, 1, v_inst_947_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___redArg(lean_object* v_inst_949_, lean_object* v_a_950_){
_start:
{
if (lean_obj_tag(v_a_950_) == 0)
{
lean_object* v___x_951_; 
lean_dec_ref(v_inst_949_);
v___x_951_ = ((lean_object*)(l_List_repr___redArg___closed__1));
return v___x_951_;
}
else
{
lean_object* v_x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v_x_952_ = lean_alloc_closure((void*)(l_repr), 3, 2);
lean_closure_set(v_x_952_, 0, lean_box(0));
lean_closure_set(v_x_952_, 1, v_inst_949_);
v___x_953_ = ((lean_object*)(l_Prod_repr___redArg___closed__3));
v___x_954_ = l_Std_Format_joinSep___redArg(v_x_952_, v_a_950_, v___x_953_);
v___x_955_ = lean_obj_once(&l_List_repr___redArg___closed__5, &l_List_repr___redArg___closed__5_once, _init_l_List_repr___redArg___closed__5);
v___x_956_ = ((lean_object*)(l_List_repr___redArg___closed__6));
v___x_957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
lean_ctor_set(v___x_957_, 1, v___x_954_);
v___x_958_ = ((lean_object*)(l_List_repr___redArg___closed__7));
v___x_959_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_957_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_955_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
v___x_961_ = l_Std_Format_fill(v___x_960_);
return v___x_961_;
}
}
}
LEAN_EXPORT lean_object* l_List_repr_x27(lean_object* v_00_u03b1_962_, lean_object* v_inst_963_, lean_object* v_inst_964_, lean_object* v_a_965_, lean_object* v_n_966_){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = l_List_repr_x27___redArg(v_inst_963_, v_a_965_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___boxed(lean_object* v_00_u03b1_968_, lean_object* v_inst_969_, lean_object* v_inst_970_, lean_object* v_a_971_, lean_object* v_n_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_List_repr_x27(v_00_u03b1_968_, v_inst_969_, v_inst_970_, v_a_971_, v_n_972_);
lean_dec(v_n_972_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_instReprListOfReprAtom___redArg(lean_object* v_inst_974_, lean_object* v_inst_975_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = lean_alloc_closure((void*)(l_List_repr_x27___boxed), 5, 3);
lean_closure_set(v___x_976_, 0, lean_box(0));
lean_closure_set(v___x_976_, 1, v_inst_974_);
lean_closure_set(v___x_976_, 2, v_inst_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_instReprListOfReprAtom(lean_object* v_00_u03b1_977_, lean_object* v_inst_978_, lean_object* v_inst_979_){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = lean_alloc_closure((void*)(l_List_repr_x27___boxed), 5, 3);
lean_closure_set(v___x_980_, 0, lean_box(0));
lean_closure_set(v___x_980_, 1, v_inst_978_);
lean_closure_set(v___x_980_, 2, v_inst_979_);
return v___x_980_;
}
}
static lean_object* _init_l_instReprAtomBool(void){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = lean_box(0);
return v___x_981_;
}
}
static lean_object* _init_l_instReprAtomNat(void){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = lean_box(0);
return v___x_982_;
}
}
static lean_object* _init_l_instReprAtomInt(void){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = lean_box(0);
return v___x_983_;
}
}
static lean_object* _init_l_instReprAtomChar(void){
_start:
{
lean_object* v___x_984_; 
v___x_984_ = lean_box(0);
return v___x_984_;
}
}
static lean_object* _init_l_instReprAtomString(void){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = lean_box(0);
return v___x_985_;
}
}
static lean_object* _init_l_instReprAtomUInt8(void){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = lean_box(0);
return v___x_986_;
}
}
static lean_object* _init_l_instReprAtomUInt16(void){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = lean_box(0);
return v___x_987_;
}
}
static lean_object* _init_l_instReprAtomUInt32(void){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = lean_box(0);
return v___x_988_;
}
}
static lean_object* _init_l_instReprAtomUInt64(void){
_start:
{
lean_object* v___x_989_; 
v___x_989_ = lean_box(0);
return v___x_989_;
}
}
static lean_object* _init_l_instReprAtomUSize(void){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = lean_box(0);
return v___x_990_;
}
}
static lean_object* _init_l_instReprSourceInfo_repr___closed__5(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = lean_unsigned_to_nat(2u);
v___x_1001_ = lean_nat_to_int(v___x_1000_);
return v___x_1001_;
}
}
static lean_object* _init_l_instReprSourceInfo_repr___closed__6(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1002_ = lean_unsigned_to_nat(1u);
v___x_1003_ = lean_nat_to_int(v___x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_instReprSourceInfo_repr(lean_object* v_x_1010_, lean_object* v_prec_1011_){
_start:
{
lean_object* v___y_1013_; 
switch(lean_obj_tag(v_x_1010_))
{
case 0:
{
lean_object* v_leading_1019_; lean_object* v_pos_1020_; lean_object* v_trailing_1021_; lean_object* v_endPos_1022_; lean_object* v___y_1024_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v_leading_1019_ = lean_ctor_get(v_x_1010_, 0);
lean_inc_ref(v_leading_1019_);
v_pos_1020_ = lean_ctor_get(v_x_1010_, 1);
lean_inc(v_pos_1020_);
v_trailing_1021_ = lean_ctor_get(v_x_1010_, 2);
lean_inc_ref(v_trailing_1021_);
v_endPos_1022_ = lean_ctor_get(v_x_1010_, 3);
lean_inc(v_endPos_1022_);
lean_dec_ref_known(v_x_1010_, 4);
v___x_1057_ = lean_unsigned_to_nat(1024u);
v___x_1058_ = lean_nat_dec_le(v___x_1057_, v_prec_1011_);
if (v___x_1058_ == 0)
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_obj_once(&l_instReprSourceInfo_repr___closed__5, &l_instReprSourceInfo_repr___closed__5_once, _init_l_instReprSourceInfo_repr___closed__5);
v___y_1024_ = v___x_1059_;
goto v___jp_1023_;
}
else
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_obj_once(&l_instReprSourceInfo_repr___closed__6, &l_instReprSourceInfo_repr___closed__6_once, _init_l_instReprSourceInfo_repr___closed__6);
v___y_1024_ = v___x_1060_;
goto v___jp_1023_;
}
v___jp_1023_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1025_ = lean_box(1);
v___x_1026_ = ((lean_object*)(l_instReprSourceInfo_repr___closed__4));
v___x_1027_ = lean_substring_tostring(v_leading_1019_);
v___x_1028_ = l_String_quote(v___x_1027_);
v___x_1029_ = ((lean_object*)(l_instReprRaw__1___lam__0___closed__0));
v___x_1030_ = lean_string_append(v___x_1028_, v___x_1029_);
v___x_1031_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
v___x_1032_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1026_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1032_);
lean_ctor_set(v___x_1033_, 1, v___x_1025_);
v___x_1034_ = ((lean_object*)(l_instReprRaw___lam__0___closed__1));
v___x_1035_ = l_Nat_reprFast(v_pos_1020_);
v___x_1036_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
v___x_1037_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1034_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = ((lean_object*)(l_instReprRaw___lam__0___closed__3));
v___x_1039_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1037_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1033_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
lean_ctor_set(v___x_1041_, 1, v___x_1025_);
v___x_1042_ = lean_substring_tostring(v_trailing_1021_);
v___x_1043_ = l_String_quote(v___x_1042_);
v___x_1044_ = lean_string_append(v___x_1043_, v___x_1029_);
v___x_1045_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1041_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
lean_ctor_set(v___x_1047_, 1, v___x_1025_);
v___x_1048_ = l_Nat_reprFast(v_endPos_1022_);
v___x_1049_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
v___x_1050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1034_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
lean_ctor_set(v___x_1051_, 1, v___x_1038_);
v___x_1052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1047_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
lean_inc(v___y_1024_);
v___x_1053_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___y_1024_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
v___x_1054_ = 0;
v___x_1055_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1055_, 0, v___x_1053_);
lean_ctor_set_uint8(v___x_1055_, sizeof(void*)*1, v___x_1054_);
v___x_1056_ = l_Repr_addAppParen(v___x_1055_, v_prec_1011_);
return v___x_1056_;
}
}
case 1:
{
lean_object* v_pos_1061_; lean_object* v_endPos_1062_; uint8_t v_canonical_1063_; lean_object* v___y_1065_; lean_object* v___x_1088_; uint8_t v___x_1089_; 
v_pos_1061_ = lean_ctor_get(v_x_1010_, 0);
lean_inc(v_pos_1061_);
v_endPos_1062_ = lean_ctor_get(v_x_1010_, 1);
lean_inc(v_endPos_1062_);
v_canonical_1063_ = lean_ctor_get_uint8(v_x_1010_, sizeof(void*)*2);
lean_dec_ref_known(v_x_1010_, 2);
v___x_1088_ = lean_unsigned_to_nat(1024u);
v___x_1089_ = lean_nat_dec_le(v___x_1088_, v_prec_1011_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; 
v___x_1090_ = lean_obj_once(&l_instReprSourceInfo_repr___closed__5, &l_instReprSourceInfo_repr___closed__5_once, _init_l_instReprSourceInfo_repr___closed__5);
v___y_1065_ = v___x_1090_;
goto v___jp_1064_;
}
else
{
lean_object* v___x_1091_; 
v___x_1091_ = lean_obj_once(&l_instReprSourceInfo_repr___closed__6, &l_instReprSourceInfo_repr___closed__6_once, _init_l_instReprSourceInfo_repr___closed__6);
v___y_1065_ = v___x_1091_;
goto v___jp_1064_;
}
v___jp_1064_:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; uint8_t v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1066_ = lean_box(1);
v___x_1067_ = ((lean_object*)(l_instReprSourceInfo_repr___closed__9));
v___x_1068_ = ((lean_object*)(l_instReprRaw___lam__0___closed__1));
v___x_1069_ = l_Nat_reprFast(v_pos_1061_);
v___x_1070_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
v___x_1071_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1068_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = ((lean_object*)(l_instReprRaw___lam__0___closed__3));
v___x_1073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1071_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1067_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
lean_ctor_set(v___x_1075_, 1, v___x_1066_);
v___x_1076_ = l_Nat_reprFast(v_endPos_1062_);
v___x_1077_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
v___x_1078_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1068_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
lean_ctor_set(v___x_1079_, 1, v___x_1072_);
v___x_1080_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1075_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
lean_ctor_set(v___x_1081_, 1, v___x_1066_);
v___x_1082_ = l_Bool_repr___redArg(v_canonical_1063_);
v___x_1083_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1081_);
lean_ctor_set(v___x_1083_, 1, v___x_1082_);
lean_inc(v___y_1065_);
v___x_1084_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___y_1065_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = 0;
v___x_1086_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1086_, 0, v___x_1084_);
lean_ctor_set_uint8(v___x_1086_, sizeof(void*)*1, v___x_1085_);
v___x_1087_ = l_Repr_addAppParen(v___x_1086_, v_prec_1011_);
return v___x_1087_;
}
}
default: 
{
lean_object* v___x_1092_; uint8_t v___x_1093_; 
v___x_1092_ = lean_unsigned_to_nat(1024u);
v___x_1093_ = lean_nat_dec_le(v___x_1092_, v_prec_1011_);
if (v___x_1093_ == 0)
{
lean_object* v___x_1094_; 
v___x_1094_ = lean_obj_once(&l_instReprSourceInfo_repr___closed__5, &l_instReprSourceInfo_repr___closed__5_once, _init_l_instReprSourceInfo_repr___closed__5);
v___y_1013_ = v___x_1094_;
goto v___jp_1012_;
}
else
{
lean_object* v___x_1095_; 
v___x_1095_ = lean_obj_once(&l_instReprSourceInfo_repr___closed__6, &l_instReprSourceInfo_repr___closed__6_once, _init_l_instReprSourceInfo_repr___closed__6);
v___y_1013_ = v___x_1095_;
goto v___jp_1012_;
}
}
}
v___jp_1012_:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1014_ = ((lean_object*)(l_instReprSourceInfo_repr___closed__1));
lean_inc(v___y_1013_);
v___x_1015_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___y_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = 0;
v___x_1017_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1017_, 0, v___x_1015_);
lean_ctor_set_uint8(v___x_1017_, sizeof(void*)*1, v___x_1016_);
v___x_1018_ = l_Repr_addAppParen(v___x_1017_, v_prec_1011_);
return v___x_1018_;
}
}
}
LEAN_EXPORT lean_object* l_instReprSourceInfo_repr___boxed(lean_object* v_x_1096_, lean_object* v_prec_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_instReprSourceInfo_repr(v_x_1096_, v_prec_1097_);
lean_dec(v_prec_1097_);
return v_res_1098_;
}
}
lean_object* runtime_initialize_Init_Data_Format_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Id(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_BasicAux(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Repr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Id(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Init_Data_Repr_0__Nat_reprArray = _init_l___private_Init_Data_Repr_0__Nat_reprArray();
lean_mark_persistent(l___private_Init_Data_Repr_0__Nat_reprArray);
l_instReprAtomBool = _init_l_instReprAtomBool();
lean_mark_persistent(l_instReprAtomBool);
l_instReprAtomNat = _init_l_instReprAtomNat();
lean_mark_persistent(l_instReprAtomNat);
l_instReprAtomInt = _init_l_instReprAtomInt();
lean_mark_persistent(l_instReprAtomInt);
l_instReprAtomChar = _init_l_instReprAtomChar();
lean_mark_persistent(l_instReprAtomChar);
l_instReprAtomString = _init_l_instReprAtomString();
lean_mark_persistent(l_instReprAtomString);
l_instReprAtomUInt8 = _init_l_instReprAtomUInt8();
lean_mark_persistent(l_instReprAtomUInt8);
l_instReprAtomUInt16 = _init_l_instReprAtomUInt16();
lean_mark_persistent(l_instReprAtomUInt16);
l_instReprAtomUInt32 = _init_l_instReprAtomUInt32();
lean_mark_persistent(l_instReprAtomUInt32);
l_instReprAtomUInt64 = _init_l_instReprAtomUInt64();
lean_mark_persistent(l_instReprAtomUInt64);
l_instReprAtomUSize = _init_l_instReprAtomUSize();
lean_mark_persistent(l_instReprAtomUSize);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Repr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Format_Basic(uint8_t builtin);
lean_object* initialize_Init_Control_Id(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_BasicAux(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Repr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Id(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Repr(builtin);
}
#ifdef __cplusplus
}
#endif
