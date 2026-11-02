// Lean compiler output
// Module: Submission.SubsetSumStatement
// Imports: public import Init public meta import Init
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
lean_object* l_BitVec_add(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_sub(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_mul(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
lean_object* lean_nat_lor(lean_object*, lean_object*);
lean_object* lean_nat_lxor(lean_object*, lean_object*);
lean_object* l_BitVec_shiftLeft(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_ofFn___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_log2(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_one_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_one_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_add_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_add_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_sub_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_sub_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_mul_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_mul_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_div_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_div_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_rem_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_rem_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_and_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_and_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_or_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_or_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_xor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_xor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_shl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_shl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_shr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_shr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_load_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_load_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_store_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_store_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_rand_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_rand_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_blt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_blt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_accept_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_accept_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_reject_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_reject_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_subsetsum_BigOSpeedrun_SubsetSum_exec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___closed__0 = (const lean_object*)&lp_subsetsum_BigOSpeedrun_SubsetSum_exec___closed__0_value;
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_foldl___at___00BigOSpeedrun_SubsetSum_Instance_maxValue_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_foldl___at___00BigOSpeedrun_SubsetSum_Instance_maxValue_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_maxValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_bits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_wordLength(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_wordLength___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_input(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_loadWords(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_loadWords___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_tape(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_tape___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_count___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_count___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_count(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_count___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
case 6:
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
case 7:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(7u);
return v___x_9_;
}
case 8:
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(8u);
return v___x_10_;
}
case 9:
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(9u);
return v___x_11_;
}
case 10:
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(10u);
return v___x_12_;
}
case 11:
{
lean_object* v___x_13_; 
v___x_13_ = lean_unsigned_to_nat(11u);
return v___x_13_;
}
case 12:
{
lean_object* v___x_14_; 
v___x_14_ = lean_unsigned_to_nat(12u);
return v___x_14_;
}
case 13:
{
lean_object* v___x_15_; 
v___x_15_ = lean_unsigned_to_nat(13u);
return v___x_15_;
}
case 14:
{
lean_object* v___x_16_; 
v___x_16_ = lean_unsigned_to_nat(14u);
return v___x_16_;
}
case 15:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(15u);
return v___x_17_;
}
default: 
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(16u);
return v___x_18_;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorIdx___boxed(lean_object* v_x_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorIdx(v_x_19_);
lean_dec(v_x_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(lean_object* v_t_21_, lean_object* v_k_22_){
_start:
{
switch(lean_obj_tag(v_t_21_))
{
case 0:
{
lean_object* v_i_23_; lean_object* v___x_24_; 
v_i_23_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_23_);
lean_dec_ref_known(v_t_21_, 1);
v___x_24_ = lean_apply_1(v_k_22_, v_i_23_);
return v___x_24_;
}
case 1:
{
lean_object* v_i_25_; lean_object* v_j_26_; lean_object* v_k_27_; lean_object* v___x_28_; 
v_i_25_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_25_);
v_j_26_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_26_);
v_k_27_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_k_27_);
lean_dec_ref_known(v_t_21_, 3);
v___x_28_ = lean_apply_3(v_k_22_, v_i_25_, v_j_26_, v_k_27_);
return v___x_28_;
}
case 2:
{
lean_object* v_i_29_; lean_object* v_j_30_; lean_object* v_k_31_; lean_object* v___x_32_; 
v_i_29_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_29_);
v_j_30_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_30_);
v_k_31_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_k_31_);
lean_dec_ref_known(v_t_21_, 3);
v___x_32_ = lean_apply_3(v_k_22_, v_i_29_, v_j_30_, v_k_31_);
return v___x_32_;
}
case 3:
{
lean_object* v_i_33_; lean_object* v_j_34_; lean_object* v_k_35_; lean_object* v___x_36_; 
v_i_33_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_33_);
v_j_34_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_34_);
v_k_35_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_k_35_);
lean_dec_ref_known(v_t_21_, 3);
v___x_36_ = lean_apply_3(v_k_22_, v_i_33_, v_j_34_, v_k_35_);
return v___x_36_;
}
case 4:
{
lean_object* v_i_37_; lean_object* v_j_38_; lean_object* v_k_39_; lean_object* v___x_40_; 
v_i_37_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_37_);
v_j_38_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_38_);
v_k_39_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_k_39_);
lean_dec_ref_known(v_t_21_, 3);
v___x_40_ = lean_apply_3(v_k_22_, v_i_37_, v_j_38_, v_k_39_);
return v___x_40_;
}
case 5:
{
lean_object* v_i_41_; lean_object* v_j_42_; lean_object* v_k_43_; lean_object* v___x_44_; 
v_i_41_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_41_);
v_j_42_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_42_);
v_k_43_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_k_43_);
lean_dec_ref_known(v_t_21_, 3);
v___x_44_ = lean_apply_3(v_k_22_, v_i_41_, v_j_42_, v_k_43_);
return v___x_44_;
}
case 6:
{
lean_object* v_i_45_; lean_object* v_j_46_; lean_object* v_k_47_; lean_object* v___x_48_; 
v_i_45_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_45_);
v_j_46_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_46_);
v_k_47_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_k_47_);
lean_dec_ref_known(v_t_21_, 3);
v___x_48_ = lean_apply_3(v_k_22_, v_i_45_, v_j_46_, v_k_47_);
return v___x_48_;
}
case 7:
{
lean_object* v_i_49_; lean_object* v_j_50_; lean_object* v_k_51_; lean_object* v___x_52_; 
v_i_49_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_49_);
v_j_50_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_50_);
v_k_51_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_k_51_);
lean_dec_ref_known(v_t_21_, 3);
v___x_52_ = lean_apply_3(v_k_22_, v_i_49_, v_j_50_, v_k_51_);
return v___x_52_;
}
case 8:
{
lean_object* v_i_53_; lean_object* v_j_54_; lean_object* v_k_55_; lean_object* v___x_56_; 
v_i_53_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_53_);
v_j_54_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_54_);
v_k_55_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_k_55_);
lean_dec_ref_known(v_t_21_, 3);
v___x_56_ = lean_apply_3(v_k_22_, v_i_53_, v_j_54_, v_k_55_);
return v___x_56_;
}
case 9:
{
lean_object* v_i_57_; lean_object* v_j_58_; lean_object* v_k_59_; lean_object* v___x_60_; 
v_i_57_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_57_);
v_j_58_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_58_);
v_k_59_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_k_59_);
lean_dec_ref_known(v_t_21_, 3);
v___x_60_ = lean_apply_3(v_k_22_, v_i_57_, v_j_58_, v_k_59_);
return v___x_60_;
}
case 10:
{
lean_object* v_i_61_; lean_object* v_j_62_; lean_object* v_k_63_; lean_object* v___x_64_; 
v_i_61_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_61_);
v_j_62_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_62_);
v_k_63_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_k_63_);
lean_dec_ref_known(v_t_21_, 3);
v___x_64_ = lean_apply_3(v_k_22_, v_i_61_, v_j_62_, v_k_63_);
return v___x_64_;
}
case 11:
{
lean_object* v_i_65_; lean_object* v_j_66_; lean_object* v___x_67_; 
v_i_65_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_65_);
v_j_66_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_66_);
lean_dec_ref_known(v_t_21_, 2);
v___x_67_ = lean_apply_2(v_k_22_, v_i_65_, v_j_66_);
return v___x_67_;
}
case 12:
{
lean_object* v_i_68_; lean_object* v_j_69_; lean_object* v___x_70_; 
v_i_68_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_68_);
v_j_69_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_69_);
lean_dec_ref_known(v_t_21_, 2);
v___x_70_ = lean_apply_2(v_k_22_, v_i_68_, v_j_69_);
return v___x_70_;
}
case 13:
{
lean_object* v_i_71_; lean_object* v___x_72_; 
v_i_71_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_71_);
lean_dec_ref_known(v_t_21_, 1);
v___x_72_ = lean_apply_1(v_k_22_, v_i_71_);
return v___x_72_;
}
case 14:
{
lean_object* v_i_73_; lean_object* v_j_74_; lean_object* v_l_75_; lean_object* v___x_76_; 
v_i_73_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_i_73_);
v_j_74_ = lean_ctor_get(v_t_21_, 1);
lean_inc(v_j_74_);
v_l_75_ = lean_ctor_get(v_t_21_, 2);
lean_inc(v_l_75_);
lean_dec_ref_known(v_t_21_, 3);
v___x_76_ = lean_apply_3(v_k_22_, v_i_73_, v_j_74_, v_l_75_);
return v___x_76_;
}
default: 
{
lean_dec(v_t_21_);
return v_k_22_;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim(lean_object* v_motive_77_, lean_object* v_ctorIdx_78_, lean_object* v_t_79_, lean_object* v_h_80_, lean_object* v_k_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_79_, v_k_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___boxed(lean_object* v_motive_83_, lean_object* v_ctorIdx_84_, lean_object* v_t_85_, lean_object* v_h_86_, lean_object* v_k_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim(v_motive_83_, v_ctorIdx_84_, v_t_85_, v_h_86_, v_k_87_);
lean_dec(v_ctorIdx_84_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_one_elim___redArg(lean_object* v_t_89_, lean_object* v_one_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_89_, v_one_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_one_elim(lean_object* v_motive_92_, lean_object* v_t_93_, lean_object* v_h_94_, lean_object* v_one_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_93_, v_one_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_add_elim___redArg(lean_object* v_t_97_, lean_object* v_add_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_97_, v_add_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_add_elim(lean_object* v_motive_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_add_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_101_, v_add_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_sub_elim___redArg(lean_object* v_t_105_, lean_object* v_sub_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_105_, v_sub_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_sub_elim(lean_object* v_motive_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_sub_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_109_, v_sub_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_mul_elim___redArg(lean_object* v_t_113_, lean_object* v_mul_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_113_, v_mul_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_mul_elim(lean_object* v_motive_116_, lean_object* v_t_117_, lean_object* v_h_118_, lean_object* v_mul_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_117_, v_mul_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_div_elim___redArg(lean_object* v_t_121_, lean_object* v_div_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_121_, v_div_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_div_elim(lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_div_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_125_, v_div_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_rem_elim___redArg(lean_object* v_t_129_, lean_object* v_rem_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_129_, v_rem_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_rem_elim(lean_object* v_motive_132_, lean_object* v_t_133_, lean_object* v_h_134_, lean_object* v_rem_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_133_, v_rem_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_and_elim___redArg(lean_object* v_t_137_, lean_object* v_and_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_137_, v_and_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_and_elim(lean_object* v_motive_140_, lean_object* v_t_141_, lean_object* v_h_142_, lean_object* v_and_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_141_, v_and_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_or_elim___redArg(lean_object* v_t_145_, lean_object* v_or_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_145_, v_or_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_or_elim(lean_object* v_motive_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_or_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_149_, v_or_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_xor_elim___redArg(lean_object* v_t_153_, lean_object* v_xor_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_153_, v_xor_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_xor_elim(lean_object* v_motive_156_, lean_object* v_t_157_, lean_object* v_h_158_, lean_object* v_xor_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_157_, v_xor_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_shl_elim___redArg(lean_object* v_t_161_, lean_object* v_shl_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_161_, v_shl_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_shl_elim(lean_object* v_motive_164_, lean_object* v_t_165_, lean_object* v_h_166_, lean_object* v_shl_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_165_, v_shl_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_shr_elim___redArg(lean_object* v_t_169_, lean_object* v_shr_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_169_, v_shr_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_shr_elim(lean_object* v_motive_172_, lean_object* v_t_173_, lean_object* v_h_174_, lean_object* v_shr_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_173_, v_shr_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_load_elim___redArg(lean_object* v_t_177_, lean_object* v_load_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_177_, v_load_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_load_elim(lean_object* v_motive_180_, lean_object* v_t_181_, lean_object* v_h_182_, lean_object* v_load_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_181_, v_load_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_store_elim___redArg(lean_object* v_t_185_, lean_object* v_store_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_185_, v_store_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_store_elim(lean_object* v_motive_188_, lean_object* v_t_189_, lean_object* v_h_190_, lean_object* v_store_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_189_, v_store_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_rand_elim___redArg(lean_object* v_t_193_, lean_object* v_rand_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_193_, v_rand_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_rand_elim(lean_object* v_motive_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_rand_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_197_, v_rand_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_blt_elim___redArg(lean_object* v_t_201_, lean_object* v_blt_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_201_, v_blt_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_blt_elim(lean_object* v_motive_204_, lean_object* v_t_205_, lean_object* v_h_206_, lean_object* v_blt_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_205_, v_blt_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_accept_elim___redArg(lean_object* v_t_209_, lean_object* v_accept_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_209_, v_accept_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_accept_elim(lean_object* v_motive_212_, lean_object* v_t_213_, lean_object* v_h_214_, lean_object* v_accept_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_213_, v_accept_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_reject_elim___redArg(lean_object* v_t_217_, lean_object* v_reject_218_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_217_, v_reject_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_reject_elim(lean_object* v_motive_220_, lean_object* v_t_221_, lean_object* v_h_222_, lean_object* v_reject_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instr_ctorElim___redArg(v_t_221_, v_reject_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__0(lean_object* v_i_225_, lean_object* v_x_226_, lean_object* v_v_227_, lean_object* v_x_228_){
_start:
{
uint8_t v___x_229_; 
v___x_229_ = lean_nat_dec_eq(v_x_228_, v_i_225_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; 
v___x_230_ = lean_apply_1(v_x_226_, v_x_228_);
return v___x_230_;
}
else
{
lean_dec(v_x_228_);
lean_dec_ref(v_x_226_);
lean_inc(v_v_227_);
return v_v_227_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__0___boxed(lean_object* v_i_231_, lean_object* v_x_232_, lean_object* v_v_233_, lean_object* v_x_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__0(v_i_231_, v_x_232_, v_v_233_, v_x_234_);
lean_dec(v_v_233_);
lean_dec(v_i_231_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__1(lean_object* v_i_236_, lean_object* v_x_237_, lean_object* v_00_u03c1_238_, lean_object* v_x_239_, lean_object* v_x_240_){
_start:
{
uint8_t v___x_241_; 
v___x_241_ = lean_nat_dec_eq(v_x_240_, v_i_236_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; 
lean_dec(v_x_239_);
lean_dec_ref(v_00_u03c1_238_);
v___x_242_ = lean_apply_1(v_x_237_, v_x_240_);
return v___x_242_;
}
else
{
lean_object* v___x_243_; 
lean_dec(v_x_240_);
lean_dec_ref(v_x_237_);
v___x_243_ = lean_apply_1(v_00_u03c1_238_, v_x_239_);
return v___x_243_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__1___boxed(lean_object* v_i_244_, lean_object* v_x_245_, lean_object* v_00_u03c1_246_, lean_object* v_x_247_, lean_object* v_x_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__1(v_i_244_, v_x_245_, v_00_u03c1_246_, v_x_247_, v_x_248_);
lean_dec(v_i_244_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec(lean_object* v_w_253_, lean_object* v_P_254_, lean_object* v_00_u03c1_255_, lean_object* v_x_256_, lean_object* v_x_257_, lean_object* v_x_258_, lean_object* v_x_259_){
_start:
{
lean_object* v_zero_260_; uint8_t v_isZero_261_; 
v_zero_260_ = lean_unsigned_to_nat(0u);
v_isZero_261_ = lean_nat_dec_eq(v_x_256_, v_zero_260_);
if (v_isZero_261_ == 1)
{
lean_object* v___x_262_; 
lean_dec_ref(v_x_259_);
lean_dec(v_x_258_);
lean_dec(v_x_257_);
lean_dec(v_x_256_);
lean_dec_ref(v_00_u03c1_255_);
v___x_262_ = lean_box(0);
return v___x_262_;
}
else
{
lean_object* v_one_263_; lean_object* v_n_264_; lean_object* v_i_266_; lean_object* v_v_267_; lean_object* v___x_271_; lean_object* v___x_272_; 
v_one_263_ = lean_unsigned_to_nat(1u);
v_n_264_ = lean_nat_sub(v_x_256_, v_one_263_);
lean_dec(v_x_256_);
v___x_271_ = lean_box(16);
lean_inc(v_x_257_);
v___x_272_ = l_List_getD___redArg(v_P_254_, v_x_257_, v___x_271_);
switch(lean_obj_tag(v___x_272_))
{
case 0:
{
lean_object* v_i_273_; lean_object* v___x_274_; 
v_i_273_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_273_);
lean_dec_ref_known(v___x_272_, 1);
v___x_274_ = l_BitVec_ofNat(v_w_253_, v_one_263_);
v_i_266_ = v_i_273_;
v_v_267_ = v___x_274_;
goto v___jp_265_;
}
case 1:
{
lean_object* v_i_275_; lean_object* v_j_276_; lean_object* v_k_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_i_275_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_275_);
v_j_276_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_276_);
v_k_277_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_k_277_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_278_ = lean_apply_1(v_x_259_, v_j_276_);
v___x_279_ = lean_apply_1(v_x_259_, v_k_277_);
v___x_280_ = l_BitVec_add(v_w_253_, v___x_278_, v___x_279_);
lean_dec(v___x_279_);
lean_dec(v___x_278_);
v_i_266_ = v_i_275_;
v_v_267_ = v___x_280_;
goto v___jp_265_;
}
case 2:
{
lean_object* v_i_281_; lean_object* v_j_282_; lean_object* v_k_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_i_281_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_281_);
v_j_282_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_282_);
v_k_283_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_k_283_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_284_ = lean_apply_1(v_x_259_, v_j_282_);
v___x_285_ = lean_apply_1(v_x_259_, v_k_283_);
v___x_286_ = l_BitVec_sub(v_w_253_, v___x_284_, v___x_285_);
lean_dec(v___x_285_);
lean_dec(v___x_284_);
v_i_266_ = v_i_281_;
v_v_267_ = v___x_286_;
goto v___jp_265_;
}
case 3:
{
lean_object* v_i_287_; lean_object* v_j_288_; lean_object* v_k_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_i_287_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_287_);
v_j_288_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_288_);
v_k_289_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_k_289_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_290_ = lean_apply_1(v_x_259_, v_j_288_);
v___x_291_ = lean_apply_1(v_x_259_, v_k_289_);
v___x_292_ = l_BitVec_mul(v_w_253_, v___x_290_, v___x_291_);
lean_dec(v___x_291_);
lean_dec(v___x_290_);
v_i_266_ = v_i_287_;
v_v_267_ = v___x_292_;
goto v___jp_265_;
}
case 4:
{
lean_object* v_i_293_; lean_object* v_j_294_; lean_object* v_k_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_i_293_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_293_);
v_j_294_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_294_);
v_k_295_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_k_295_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_296_ = lean_apply_1(v_x_259_, v_j_294_);
v___x_297_ = lean_apply_1(v_x_259_, v_k_295_);
v___x_298_ = lean_nat_div(v___x_296_, v___x_297_);
lean_dec(v___x_297_);
lean_dec(v___x_296_);
v_i_266_ = v_i_293_;
v_v_267_ = v___x_298_;
goto v___jp_265_;
}
case 5:
{
lean_object* v_i_299_; lean_object* v_j_300_; lean_object* v_k_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v_i_299_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_299_);
v_j_300_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_300_);
v_k_301_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_k_301_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_302_ = lean_apply_1(v_x_259_, v_j_300_);
v___x_303_ = lean_apply_1(v_x_259_, v_k_301_);
v___x_304_ = lean_nat_mod(v___x_302_, v___x_303_);
lean_dec(v___x_303_);
lean_dec(v___x_302_);
v_i_266_ = v_i_299_;
v_v_267_ = v___x_304_;
goto v___jp_265_;
}
case 6:
{
lean_object* v_i_305_; lean_object* v_j_306_; lean_object* v_k_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_i_305_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_305_);
v_j_306_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_306_);
v_k_307_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_k_307_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_308_ = lean_apply_1(v_x_259_, v_j_306_);
v___x_309_ = lean_apply_1(v_x_259_, v_k_307_);
v___x_310_ = lean_nat_land(v___x_308_, v___x_309_);
lean_dec(v___x_309_);
lean_dec(v___x_308_);
v_i_266_ = v_i_305_;
v_v_267_ = v___x_310_;
goto v___jp_265_;
}
case 7:
{
lean_object* v_i_311_; lean_object* v_j_312_; lean_object* v_k_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v_i_311_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_311_);
v_j_312_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_312_);
v_k_313_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_k_313_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_314_ = lean_apply_1(v_x_259_, v_j_312_);
v___x_315_ = lean_apply_1(v_x_259_, v_k_313_);
v___x_316_ = lean_nat_lor(v___x_314_, v___x_315_);
lean_dec(v___x_315_);
lean_dec(v___x_314_);
v_i_266_ = v_i_311_;
v_v_267_ = v___x_316_;
goto v___jp_265_;
}
case 8:
{
lean_object* v_i_317_; lean_object* v_j_318_; lean_object* v_k_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v_i_317_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_317_);
v_j_318_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_318_);
v_k_319_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_k_319_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_320_ = lean_apply_1(v_x_259_, v_j_318_);
v___x_321_ = lean_apply_1(v_x_259_, v_k_319_);
v___x_322_ = lean_nat_lxor(v___x_320_, v___x_321_);
lean_dec(v___x_321_);
lean_dec(v___x_320_);
v_i_266_ = v_i_317_;
v_v_267_ = v___x_322_;
goto v___jp_265_;
}
case 9:
{
lean_object* v_i_323_; lean_object* v_j_324_; lean_object* v_k_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_i_323_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_323_);
v_j_324_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_324_);
v_k_325_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_k_325_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_326_ = lean_apply_1(v_x_259_, v_j_324_);
v___x_327_ = lean_apply_1(v_x_259_, v_k_325_);
v___x_328_ = l_BitVec_shiftLeft(v_w_253_, v___x_326_, v___x_327_);
lean_dec(v___x_327_);
lean_dec(v___x_326_);
v_i_266_ = v_i_323_;
v_v_267_ = v___x_328_;
goto v___jp_265_;
}
case 10:
{
lean_object* v_i_329_; lean_object* v_j_330_; lean_object* v_k_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v_i_329_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_329_);
v_j_330_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_330_);
v_k_331_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_k_331_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_332_ = lean_apply_1(v_x_259_, v_j_330_);
v___x_333_ = lean_apply_1(v_x_259_, v_k_331_);
v___x_334_ = lean_nat_shiftr(v___x_332_, v___x_333_);
lean_dec(v___x_333_);
lean_dec(v___x_332_);
v_i_266_ = v_i_329_;
v_v_267_ = v___x_334_;
goto v___jp_265_;
}
case 11:
{
lean_object* v_i_335_; lean_object* v_j_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_i_335_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_335_);
v_j_336_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_336_);
lean_dec_ref_known(v___x_272_, 2);
lean_inc_ref_n(v_x_259_, 2);
v___x_337_ = lean_apply_1(v_x_259_, v_j_336_);
v___x_338_ = lean_apply_1(v_x_259_, v___x_337_);
v_i_266_ = v_i_335_;
v_v_267_ = v___x_338_;
goto v___jp_265_;
}
case 12:
{
lean_object* v_i_339_; lean_object* v_j_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_i_339_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_339_);
v_j_340_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_340_);
lean_dec_ref_known(v___x_272_, 2);
lean_inc_ref_n(v_x_259_, 2);
v___x_341_ = lean_apply_1(v_x_259_, v_i_339_);
v___x_342_ = lean_apply_1(v_x_259_, v_j_340_);
v_i_266_ = v___x_341_;
v_v_267_ = v___x_342_;
goto v___jp_265_;
}
case 13:
{
lean_object* v_i_343_; lean_object* v___f_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_i_343_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_343_);
lean_dec_ref_known(v___x_272_, 1);
lean_inc(v_x_258_);
lean_inc_ref(v_00_u03c1_255_);
v___f_344_ = lean_alloc_closure((void*)(lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__1___boxed), 5, 4);
lean_closure_set(v___f_344_, 0, v_i_343_);
lean_closure_set(v___f_344_, 1, v_x_259_);
lean_closure_set(v___f_344_, 2, v_00_u03c1_255_);
lean_closure_set(v___f_344_, 3, v_x_258_);
v___x_345_ = lean_nat_add(v_x_257_, v_one_263_);
lean_dec(v_x_257_);
v___x_346_ = lean_nat_add(v_x_258_, v_one_263_);
lean_dec(v_x_258_);
v_x_256_ = v_n_264_;
v_x_257_ = v___x_345_;
v_x_258_ = v___x_346_;
v_x_259_ = v___f_344_;
goto _start;
}
case 14:
{
lean_object* v_i_348_; lean_object* v_j_349_; lean_object* v_l_350_; lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v_i_348_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_i_348_);
v_j_349_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_j_349_);
v_l_350_ = lean_ctor_get(v___x_272_, 2);
lean_inc(v_l_350_);
lean_dec_ref_known(v___x_272_, 3);
lean_inc_ref_n(v_x_259_, 2);
v___x_351_ = lean_apply_1(v_x_259_, v_i_348_);
v___x_352_ = lean_apply_1(v_x_259_, v_j_349_);
v___x_353_ = lean_nat_dec_lt(v___x_351_, v___x_352_);
lean_dec(v___x_352_);
lean_dec(v___x_351_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; 
lean_dec(v_l_350_);
v___x_354_ = lean_nat_add(v_x_257_, v_one_263_);
lean_dec(v_x_257_);
v_x_256_ = v_n_264_;
v_x_257_ = v___x_354_;
goto _start;
}
else
{
lean_dec(v_x_257_);
v_x_256_ = v_n_264_;
v_x_257_ = v_l_350_;
goto _start;
}
}
case 15:
{
lean_object* v___x_357_; 
lean_dec(v_n_264_);
lean_dec_ref(v_x_259_);
lean_dec(v_x_258_);
lean_dec(v_x_257_);
lean_dec_ref(v_00_u03c1_255_);
v___x_357_ = ((lean_object*)(lp_subsetsum_BigOSpeedrun_SubsetSum_exec___closed__0));
return v___x_357_;
}
default: 
{
lean_object* v___x_358_; lean_object* v___x_359_; 
lean_dec(v_n_264_);
lean_dec_ref(v_x_259_);
lean_dec(v_x_258_);
lean_dec(v_x_257_);
lean_dec_ref(v_00_u03c1_255_);
v___x_358_ = lean_box(v_isZero_261_);
v___x_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
}
v___jp_265_:
{
lean_object* v___f_268_; lean_object* v___x_269_; 
v___f_268_ = lean_alloc_closure((void*)(lp_subsetsum_BigOSpeedrun_SubsetSum_exec___lam__0___boxed), 4, 3);
lean_closure_set(v___f_268_, 0, v_i_266_);
lean_closure_set(v___f_268_, 1, v_x_259_);
lean_closure_set(v___f_268_, 2, v_v_267_);
v___x_269_ = lean_nat_add(v_x_257_, v_one_263_);
lean_dec(v_x_257_);
v_x_256_ = v_n_264_;
v_x_257_ = v___x_269_;
v_x_259_ = v___f_268_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_exec___boxed(lean_object* v_w_360_, lean_object* v_P_361_, lean_object* v_00_u03c1_362_, lean_object* v_x_363_, lean_object* v_x_364_, lean_object* v_x_365_, lean_object* v_x_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = lp_subsetsum_BigOSpeedrun_SubsetSum_exec(v_w_360_, v_P_361_, v_00_u03c1_362_, v_x_363_, v_x_364_, v_x_365_, v_x_366_);
lean_dec(v_P_361_);
lean_dec(v_w_360_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_foldl___at___00BigOSpeedrun_SubsetSum_Instance_maxValue_spec__0(lean_object* v_x_368_, lean_object* v_x_369_){
_start:
{
if (lean_obj_tag(v_x_369_) == 0)
{
lean_inc(v_x_368_);
return v_x_368_;
}
else
{
lean_object* v_head_370_; lean_object* v_tail_371_; uint8_t v___x_372_; 
v_head_370_ = lean_ctor_get(v_x_369_, 0);
v_tail_371_ = lean_ctor_get(v_x_369_, 1);
v___x_372_ = lean_nat_dec_le(v_x_368_, v_head_370_);
if (v___x_372_ == 0)
{
v_x_369_ = v_tail_371_;
goto _start;
}
else
{
v_x_368_ = v_head_370_;
v_x_369_ = v_tail_371_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_foldl___at___00BigOSpeedrun_SubsetSum_Instance_maxValue_spec__0___boxed(lean_object* v_x_375_, lean_object* v_x_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = lp_subsetsum_List_foldl___at___00BigOSpeedrun_SubsetSum_Instance_maxValue_spec__0(v_x_375_, v_x_376_);
lean_dec(v_x_376_);
lean_dec(v_x_375_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_maxValue(lean_object* v_n_378_, lean_object* v_x_379_){
_start:
{
lean_object* v_a_380_; lean_object* v_t_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v_a_380_ = lean_ctor_get(v_x_379_, 0);
lean_inc_ref(v_a_380_);
v_t_381_ = lean_ctor_get(v_x_379_, 1);
lean_inc(v_t_381_);
lean_dec_ref(v_x_379_);
v___x_382_ = l_List_ofFn___redArg(v_n_378_, v_a_380_);
v___x_383_ = lp_subsetsum_List_foldl___at___00BigOSpeedrun_SubsetSum_Instance_maxValue_spec__0(v_t_381_, v___x_382_);
lean_dec(v___x_382_);
lean_dec(v_t_381_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_bits(lean_object* v_n_384_, lean_object* v_x_385_){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_386_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_maxValue(v_n_384_, v_x_385_);
v___x_387_ = lean_nat_log2(v___x_386_);
lean_dec(v___x_386_);
v___x_388_ = lean_unsigned_to_nat(1u);
v___x_389_ = lean_nat_add(v___x_387_, v___x_388_);
lean_dec(v___x_387_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_wordLength(lean_object* v_n_390_, lean_object* v_b_391_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_392_ = lean_unsigned_to_nat(4u);
v___x_393_ = lean_nat_add(v_n_390_, v_b_391_);
v___x_394_ = lean_nat_mul(v___x_392_, v___x_393_);
lean_dec(v___x_393_);
v___x_395_ = lean_unsigned_to_nat(2u);
v___x_396_ = lean_nat_add(v_n_390_, v___x_395_);
v___x_397_ = lean_nat_pow(v___x_396_, v___x_392_);
lean_dec(v___x_396_);
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = lean_nat_sub(v___x_397_, v___x_398_);
lean_dec(v___x_397_);
v___x_400_ = lean_nat_log2(v___x_399_);
lean_dec(v___x_399_);
v___x_401_ = lean_nat_add(v___x_394_, v___x_400_);
lean_dec(v___x_400_);
lean_dec(v___x_394_);
v___x_402_ = lean_nat_add(v___x_401_, v___x_398_);
lean_dec(v___x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_wordLength___boxed(lean_object* v_n_403_, lean_object* v_b_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = lp_subsetsum_BigOSpeedrun_SubsetSum_wordLength(v_n_403_, v_b_404_);
lean_dec(v_b_404_);
lean_dec(v_n_403_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_input(lean_object* v_n_406_, lean_object* v_x_407_){
_start:
{
lean_object* v_a_408_; lean_object* v_t_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_420_; 
v_a_408_ = lean_ctor_get(v_x_407_, 0);
v_t_409_ = lean_ctor_get(v_x_407_, 1);
v_isSharedCheck_420_ = !lean_is_exclusive(v_x_407_);
if (v_isSharedCheck_420_ == 0)
{
v___x_411_ = v_x_407_;
v_isShared_412_ = v_isSharedCheck_420_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_t_409_);
lean_inc(v_a_408_);
lean_dec(v_x_407_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_420_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_416_; 
lean_inc(v_n_406_);
v___x_413_ = l_List_ofFn___redArg(v_n_406_, v_a_408_);
v___x_414_ = lean_box(0);
if (v_isShared_412_ == 0)
{
lean_ctor_set_tag(v___x_411_, 1);
lean_ctor_set(v___x_411_, 1, v___x_414_);
lean_ctor_set(v___x_411_, 0, v_t_409_);
v___x_416_ = v___x_411_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_t_409_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v___x_414_);
v___x_416_ = v_reuseFailAlloc_419_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = l_List_appendTR___redArg(v___x_413_, v___x_416_);
v___x_418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_418_, 0, v_n_406_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
return v___x_418_;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_loadWords(lean_object* v_w_421_, lean_object* v_ws_422_, lean_object* v_a_423_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = l_List_getD___redArg(v_ws_422_, v_a_423_, v___x_424_);
v___x_426_ = l_BitVec_ofNat(v_w_421_, v___x_425_);
lean_dec(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_loadWords___boxed(lean_object* v_w_427_, lean_object* v_ws_428_, lean_object* v_a_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = lp_subsetsum_BigOSpeedrun_SubsetSum_loadWords(v_w_427_, v_ws_428_, v_a_429_);
lean_dec(v_ws_428_);
lean_dec(v_w_427_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_run(lean_object* v_n_431_, lean_object* v_P_432_, lean_object* v_x_433_, lean_object* v_00_u03c1_434_, lean_object* v_t_435_){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
lean_inc_ref(v_x_433_);
lean_inc(v_n_431_);
v___x_436_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_bits(v_n_431_, v_x_433_);
v___x_437_ = lp_subsetsum_BigOSpeedrun_SubsetSum_wordLength(v_n_431_, v___x_436_);
lean_dec(v___x_436_);
v___x_438_ = lean_unsigned_to_nat(0u);
v___x_439_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_input(v_n_431_, v_x_433_);
lean_inc(v___x_437_);
v___x_440_ = lean_alloc_closure((void*)(lp_subsetsum_BigOSpeedrun_SubsetSum_loadWords___boxed), 3, 2);
lean_closure_set(v___x_440_, 0, v___x_437_);
lean_closure_set(v___x_440_, 1, v___x_439_);
v___x_441_ = lp_subsetsum_BigOSpeedrun_SubsetSum_exec(v___x_437_, v_P_432_, v_00_u03c1_434_, v_t_435_, v___x_438_, v___x_438_, v___x_440_);
lean_dec(v___x_437_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_run___boxed(lean_object* v_n_442_, lean_object* v_P_443_, lean_object* v_x_444_, lean_object* v_00_u03c1_445_, lean_object* v_t_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = lp_subsetsum_BigOSpeedrun_SubsetSum_run(v_n_442_, v_P_443_, v_x_444_, v_00_u03c1_445_, v_t_446_);
lean_dec(v_P_443_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_tape(lean_object* v_w_448_, lean_object* v_s_449_, lean_object* v_r_450_){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_451_ = lean_unsigned_to_nat(2u);
v___x_452_ = lean_nat_mul(v_w_448_, v_r_450_);
v___x_453_ = lean_nat_pow(v___x_451_, v___x_452_);
lean_dec(v___x_452_);
v___x_454_ = lean_nat_div(v_s_449_, v___x_453_);
lean_dec(v___x_453_);
v___x_455_ = l_BitVec_ofNat(v_w_448_, v___x_454_);
lean_dec(v___x_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_tape___boxed(lean_object* v_w_456_, lean_object* v_s_457_, lean_object* v_r_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = lp_subsetsum_BigOSpeedrun_SubsetSum_tape(v_w_456_, v_s_457_, v_r_458_);
lean_dec(v_r_458_);
lean_dec(v_s_457_);
lean_dec(v_w_456_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_count___redArg(lean_object* v_inst_460_, lean_object* v_x_461_){
_start:
{
lean_object* v_zero_462_; uint8_t v_isZero_463_; 
v_zero_462_ = lean_unsigned_to_nat(0u);
v_isZero_463_ = lean_nat_dec_eq(v_x_461_, v_zero_462_);
if (v_isZero_463_ == 1)
{
lean_dec_ref(v_inst_460_);
return v_zero_462_;
}
else
{
lean_object* v_one_464_; lean_object* v_n_465_; lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v___x_468_; 
v_one_464_ = lean_unsigned_to_nat(1u);
v_n_465_ = lean_nat_sub(v_x_461_, v_one_464_);
lean_inc_ref(v_inst_460_);
v___x_466_ = lp_subsetsum_BigOSpeedrun_SubsetSum_count___redArg(v_inst_460_, v_n_465_);
v___x_467_ = lean_apply_1(v_inst_460_, v_n_465_);
v___x_468_ = lean_unbox(v___x_467_);
if (v___x_468_ == 0)
{
return v___x_466_;
}
else
{
lean_object* v___x_469_; 
v___x_469_ = lean_nat_add(v___x_466_, v_one_464_);
lean_dec(v___x_466_);
return v___x_469_;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_count___redArg___boxed(lean_object* v_inst_470_, lean_object* v_x_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = lp_subsetsum_BigOSpeedrun_SubsetSum_count___redArg(v_inst_470_, v_x_471_);
lean_dec(v_x_471_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_count(lean_object* v_p_473_, lean_object* v_inst_474_, lean_object* v_x_475_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = lp_subsetsum_BigOSpeedrun_SubsetSum_count___redArg(v_inst_474_, v_x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_count___boxed(lean_object* v_p_477_, lean_object* v_inst_478_, lean_object* v_x_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = lp_subsetsum_BigOSpeedrun_SubsetSum_count(v_p_477_, v_inst_478_, v_x_479_);
lean_dec(v_x_479_);
return v_res_480_;
}
}
lean_object* runtime_initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_subsetsum_Submission_SubsetSumStatement(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_subsetsum_Submission_SubsetSumStatement(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_SubsetSumStatement(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_subsetsum_Submission_SubsetSumStatement(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_subsetsum_Submission_SubsetSumStatement(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_subsetsum_Submission_SubsetSumStatement(builtin);
}
#ifdef __cplusplus
}
#endif
