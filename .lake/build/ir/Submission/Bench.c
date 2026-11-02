// Lean compiler output
// Module: Submission.Bench
// Imports: public import Init public meta import Init public import Submission.Program
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_Bench_execMem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_Bench_execMem___closed__0_value;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_inst4___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_inst4___lam__0___boxed(lean_object*);
static const lean_closure_object lp_subsetsum_SubsetSum_MITM_Bench_inst4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_subsetsum_SubsetSum_MITM_Bench_inst4___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_subsetsum_SubsetSum_MITM_Bench_inst4___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_Bench_inst4___closed__0_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_Bench_inst4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_Bench_inst4___closed__0_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_Bench_inst4___closed__1 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_Bench_inst4___closed__1_value;
LEAN_EXPORT const lean_object* lp_subsetsum_SubsetSum_MITM_Bench_inst4 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_Bench_inst4___closed__1_value;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0(lean_object* v_x_1_, lean_object* v_i_2_, lean_object* v_v_3_, lean_object* v_x_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_nat_dec_eq(v_x_4_, v_i_2_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_apply_1(v_x_1_, v_x_4_);
return v___x_6_;
}
else
{
lean_dec(v_x_4_);
lean_dec_ref(v_x_1_);
lean_inc(v_v_3_);
return v_v_3_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed(lean_object* v_x_7_, lean_object* v_i_8_, lean_object* v_v_9_, lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0(v_x_7_, v_i_8_, v_v_9_, v_x_10_);
lean_dec(v_v_9_);
lean_dec(v_i_8_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__1(lean_object* v_x_12_, lean_object* v_i_13_, lean_object* v_j_14_, lean_object* v_x_15_){
_start:
{
lean_object* v___x_16_; uint8_t v___x_17_; 
lean_inc_ref(v_x_12_);
v___x_16_ = lean_apply_1(v_x_12_, v_i_13_);
v___x_17_ = lean_nat_dec_eq(v_x_15_, v___x_16_);
lean_dec(v___x_16_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; 
lean_dec(v_j_14_);
v___x_18_ = lean_apply_1(v_x_12_, v_x_15_);
return v___x_18_;
}
else
{
lean_object* v___x_19_; 
lean_dec(v_x_15_);
v___x_19_ = lean_apply_1(v_x_12_, v_j_14_);
return v___x_19_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__2(lean_object* v_i_20_, lean_object* v_x_21_, lean_object* v_00_u03c1_22_, lean_object* v_x_23_, lean_object* v_x_24_){
_start:
{
uint8_t v___x_25_; 
v___x_25_ = lean_nat_dec_eq(v_x_24_, v_i_20_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; 
lean_dec(v_x_23_);
lean_dec_ref(v_00_u03c1_22_);
v___x_26_ = lean_apply_1(v_x_21_, v_x_24_);
return v___x_26_;
}
else
{
lean_object* v___x_27_; 
lean_dec(v_x_24_);
lean_dec_ref(v_x_21_);
v___x_27_ = lean_apply_1(v_00_u03c1_22_, v_x_23_);
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__2___boxed(lean_object* v_i_28_, lean_object* v_x_29_, lean_object* v_00_u03c1_30_, lean_object* v_x_31_, lean_object* v_x_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__2(v_i_28_, v_x_29_, v_00_u03c1_30_, v_x_31_, v_x_32_);
lean_dec(v_i_28_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem(lean_object* v_w_37_, lean_object* v_P_38_, lean_object* v_00_u03c1_39_, lean_object* v_x_40_, lean_object* v_x_41_, lean_object* v_x_42_, lean_object* v_x_43_){
_start:
{
lean_object* v_zero_44_; uint8_t v_isZero_45_; 
v_zero_44_ = lean_unsigned_to_nat(0u);
v_isZero_45_ = lean_nat_dec_eq(v_x_40_, v_zero_44_);
if (v_isZero_45_ == 1)
{
lean_object* v___x_46_; lean_object* v___x_47_; 
lean_dec(v_x_42_);
lean_dec(v_x_41_);
lean_dec(v_x_40_);
lean_dec_ref(v_00_u03c1_39_);
v___x_46_ = lean_box(0);
v___x_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_47_, 0, v_x_43_);
lean_ctor_set(v___x_47_, 1, v___x_46_);
return v___x_47_;
}
else
{
lean_object* v_one_48_; lean_object* v_n_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_one_48_ = lean_unsigned_to_nat(1u);
v_n_49_ = lean_nat_sub(v_x_40_, v_one_48_);
lean_dec(v_x_40_);
v___x_50_ = lean_box(16);
lean_inc(v_x_41_);
v___x_51_ = l_List_getD___redArg(v_P_38_, v_x_41_, v___x_50_);
switch(lean_obj_tag(v___x_51_))
{
case 0:
{
lean_object* v_i_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v_i_52_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_52_);
lean_dec_ref_known(v___x_51_, 1);
v___x_53_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
v___x_54_ = l_BitVec_ofNat(v_w_37_, v_one_48_);
v___x_55_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_55_, 0, v_x_43_);
lean_closure_set(v___x_55_, 1, v_i_52_);
lean_closure_set(v___x_55_, 2, v___x_54_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_53_;
v_x_43_ = v___x_55_;
goto _start;
}
case 1:
{
lean_object* v_i_57_; lean_object* v_j_58_; lean_object* v_k_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_i_57_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_57_);
v_j_58_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_58_);
v_k_59_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_k_59_);
lean_dec_ref_known(v___x_51_, 3);
v___x_60_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_61_ = lean_apply_1(v_x_43_, v_j_58_);
v___x_62_ = lean_apply_1(v_x_43_, v_k_59_);
v___x_63_ = l_BitVec_add(v_w_37_, v___x_61_, v___x_62_);
lean_dec(v___x_62_);
lean_dec(v___x_61_);
v___x_64_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_64_, 0, v_x_43_);
lean_closure_set(v___x_64_, 1, v_i_57_);
lean_closure_set(v___x_64_, 2, v___x_63_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_60_;
v_x_43_ = v___x_64_;
goto _start;
}
case 2:
{
lean_object* v_i_66_; lean_object* v_j_67_; lean_object* v_k_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_i_66_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_66_);
v_j_67_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_67_);
v_k_68_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_k_68_);
lean_dec_ref_known(v___x_51_, 3);
v___x_69_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_70_ = lean_apply_1(v_x_43_, v_j_67_);
v___x_71_ = lean_apply_1(v_x_43_, v_k_68_);
v___x_72_ = l_BitVec_sub(v_w_37_, v___x_70_, v___x_71_);
lean_dec(v___x_71_);
lean_dec(v___x_70_);
v___x_73_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_73_, 0, v_x_43_);
lean_closure_set(v___x_73_, 1, v_i_66_);
lean_closure_set(v___x_73_, 2, v___x_72_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_69_;
v_x_43_ = v___x_73_;
goto _start;
}
case 3:
{
lean_object* v_i_75_; lean_object* v_j_76_; lean_object* v_k_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v_i_75_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_75_);
v_j_76_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_76_);
v_k_77_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_k_77_);
lean_dec_ref_known(v___x_51_, 3);
v___x_78_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_79_ = lean_apply_1(v_x_43_, v_j_76_);
v___x_80_ = lean_apply_1(v_x_43_, v_k_77_);
v___x_81_ = l_BitVec_mul(v_w_37_, v___x_79_, v___x_80_);
lean_dec(v___x_80_);
lean_dec(v___x_79_);
v___x_82_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_82_, 0, v_x_43_);
lean_closure_set(v___x_82_, 1, v_i_75_);
lean_closure_set(v___x_82_, 2, v___x_81_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_78_;
v_x_43_ = v___x_82_;
goto _start;
}
case 4:
{
lean_object* v_i_84_; lean_object* v_j_85_; lean_object* v_k_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v_i_84_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_84_);
v_j_85_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_85_);
v_k_86_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_k_86_);
lean_dec_ref_known(v___x_51_, 3);
v___x_87_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_88_ = lean_apply_1(v_x_43_, v_j_85_);
v___x_89_ = lean_apply_1(v_x_43_, v_k_86_);
v___x_90_ = lean_nat_div(v___x_88_, v___x_89_);
lean_dec(v___x_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_91_, 0, v_x_43_);
lean_closure_set(v___x_91_, 1, v_i_84_);
lean_closure_set(v___x_91_, 2, v___x_90_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_87_;
v_x_43_ = v___x_91_;
goto _start;
}
case 5:
{
lean_object* v_i_93_; lean_object* v_j_94_; lean_object* v_k_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v_i_93_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_93_);
v_j_94_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_94_);
v_k_95_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_k_95_);
lean_dec_ref_known(v___x_51_, 3);
v___x_96_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_97_ = lean_apply_1(v_x_43_, v_j_94_);
v___x_98_ = lean_apply_1(v_x_43_, v_k_95_);
v___x_99_ = lean_nat_mod(v___x_97_, v___x_98_);
lean_dec(v___x_98_);
lean_dec(v___x_97_);
v___x_100_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_100_, 0, v_x_43_);
lean_closure_set(v___x_100_, 1, v_i_93_);
lean_closure_set(v___x_100_, 2, v___x_99_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_96_;
v_x_43_ = v___x_100_;
goto _start;
}
case 6:
{
lean_object* v_i_102_; lean_object* v_j_103_; lean_object* v_k_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v_i_102_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_102_);
v_j_103_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_103_);
v_k_104_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_k_104_);
lean_dec_ref_known(v___x_51_, 3);
v___x_105_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_106_ = lean_apply_1(v_x_43_, v_j_103_);
v___x_107_ = lean_apply_1(v_x_43_, v_k_104_);
v___x_108_ = lean_nat_land(v___x_106_, v___x_107_);
lean_dec(v___x_107_);
lean_dec(v___x_106_);
v___x_109_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_109_, 0, v_x_43_);
lean_closure_set(v___x_109_, 1, v_i_102_);
lean_closure_set(v___x_109_, 2, v___x_108_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_105_;
v_x_43_ = v___x_109_;
goto _start;
}
case 7:
{
lean_object* v_i_111_; lean_object* v_j_112_; lean_object* v_k_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v_i_111_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_111_);
v_j_112_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_112_);
v_k_113_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_k_113_);
lean_dec_ref_known(v___x_51_, 3);
v___x_114_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_115_ = lean_apply_1(v_x_43_, v_j_112_);
v___x_116_ = lean_apply_1(v_x_43_, v_k_113_);
v___x_117_ = lean_nat_lor(v___x_115_, v___x_116_);
lean_dec(v___x_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_118_, 0, v_x_43_);
lean_closure_set(v___x_118_, 1, v_i_111_);
lean_closure_set(v___x_118_, 2, v___x_117_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_114_;
v_x_43_ = v___x_118_;
goto _start;
}
case 8:
{
lean_object* v_i_120_; lean_object* v_j_121_; lean_object* v_k_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v_i_120_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_120_);
v_j_121_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_121_);
v_k_122_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_k_122_);
lean_dec_ref_known(v___x_51_, 3);
v___x_123_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_124_ = lean_apply_1(v_x_43_, v_j_121_);
v___x_125_ = lean_apply_1(v_x_43_, v_k_122_);
v___x_126_ = lean_nat_lxor(v___x_124_, v___x_125_);
lean_dec(v___x_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_127_, 0, v_x_43_);
lean_closure_set(v___x_127_, 1, v_i_120_);
lean_closure_set(v___x_127_, 2, v___x_126_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_123_;
v_x_43_ = v___x_127_;
goto _start;
}
case 9:
{
lean_object* v_i_129_; lean_object* v_j_130_; lean_object* v_k_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v_i_129_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_129_);
v_j_130_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_130_);
v_k_131_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_k_131_);
lean_dec_ref_known(v___x_51_, 3);
v___x_132_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_133_ = lean_apply_1(v_x_43_, v_j_130_);
v___x_134_ = lean_apply_1(v_x_43_, v_k_131_);
v___x_135_ = l_BitVec_shiftLeft(v_w_37_, v___x_133_, v___x_134_);
lean_dec(v___x_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_136_, 0, v_x_43_);
lean_closure_set(v___x_136_, 1, v_i_129_);
lean_closure_set(v___x_136_, 2, v___x_135_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_132_;
v_x_43_ = v___x_136_;
goto _start;
}
case 10:
{
lean_object* v_i_138_; lean_object* v_j_139_; lean_object* v_k_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_i_138_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_138_);
v_j_139_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_139_);
v_k_140_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_k_140_);
lean_dec_ref_known(v___x_51_, 3);
v___x_141_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_142_ = lean_apply_1(v_x_43_, v_j_139_);
v___x_143_ = lean_apply_1(v_x_43_, v_k_140_);
v___x_144_ = lean_nat_shiftr(v___x_142_, v___x_143_);
lean_dec(v___x_143_);
lean_dec(v___x_142_);
v___x_145_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_145_, 0, v_x_43_);
lean_closure_set(v___x_145_, 1, v_i_138_);
lean_closure_set(v___x_145_, 2, v___x_144_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_141_;
v_x_43_ = v___x_145_;
goto _start;
}
case 11:
{
lean_object* v_i_147_; lean_object* v_j_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_i_147_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_147_);
v_j_148_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_148_);
lean_dec_ref_known(v___x_51_, 2);
v___x_149_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
lean_inc_ref_n(v_x_43_, 2);
v___x_150_ = lean_apply_1(v_x_43_, v_j_148_);
v___x_151_ = lean_apply_1(v_x_43_, v___x_150_);
v___x_152_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__0___boxed), 4, 3);
lean_closure_set(v___x_152_, 0, v_x_43_);
lean_closure_set(v___x_152_, 1, v_i_147_);
lean_closure_set(v___x_152_, 2, v___x_151_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_149_;
v_x_43_ = v___x_152_;
goto _start;
}
case 12:
{
lean_object* v_i_154_; lean_object* v_j_155_; lean_object* v___f_156_; lean_object* v___x_157_; 
v_i_154_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_154_);
v_j_155_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_155_);
lean_dec_ref_known(v___x_51_, 2);
v___f_156_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__1), 4, 3);
lean_closure_set(v___f_156_, 0, v_x_43_);
lean_closure_set(v___f_156_, 1, v_i_154_);
lean_closure_set(v___f_156_, 2, v_j_155_);
v___x_157_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_157_;
v_x_43_ = v___f_156_;
goto _start;
}
case 13:
{
lean_object* v_i_159_; lean_object* v___f_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v_i_159_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_159_);
lean_dec_ref_known(v___x_51_, 1);
lean_inc(v_x_42_);
lean_inc_ref(v_00_u03c1_39_);
v___f_160_ = lean_alloc_closure((void*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___lam__2___boxed), 5, 4);
lean_closure_set(v___f_160_, 0, v_i_159_);
lean_closure_set(v___f_160_, 1, v_x_43_);
lean_closure_set(v___f_160_, 2, v_00_u03c1_39_);
lean_closure_set(v___f_160_, 3, v_x_42_);
v___x_161_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
v___x_162_ = lean_nat_add(v_x_42_, v_one_48_);
lean_dec(v_x_42_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_161_;
v_x_42_ = v___x_162_;
v_x_43_ = v___f_160_;
goto _start;
}
case 14:
{
lean_object* v_i_164_; lean_object* v_j_165_; lean_object* v_l_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; 
v_i_164_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_i_164_);
v_j_165_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_j_165_);
v_l_166_ = lean_ctor_get(v___x_51_, 2);
lean_inc(v_l_166_);
lean_dec_ref_known(v___x_51_, 3);
lean_inc_ref_n(v_x_43_, 2);
v___x_167_ = lean_apply_1(v_x_43_, v_i_164_);
v___x_168_ = lean_apply_1(v_x_43_, v_j_165_);
v___x_169_ = lean_nat_dec_lt(v___x_167_, v___x_168_);
lean_dec(v___x_168_);
lean_dec(v___x_167_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; 
lean_dec(v_l_166_);
v___x_170_ = lean_nat_add(v_x_41_, v_one_48_);
lean_dec(v_x_41_);
v_x_40_ = v_n_49_;
v_x_41_ = v___x_170_;
goto _start;
}
else
{
lean_dec(v_x_41_);
v_x_40_ = v_n_49_;
v_x_41_ = v_l_166_;
goto _start;
}
}
case 15:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
lean_dec(v_n_49_);
lean_dec(v_x_42_);
lean_dec(v_x_41_);
lean_dec_ref(v_00_u03c1_39_);
v___x_173_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_Bench_execMem___closed__0));
v___x_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_174_, 0, v_x_43_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
return v___x_174_;
}
default: 
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
lean_dec(v_n_49_);
lean_dec(v_x_42_);
lean_dec(v_x_41_);
lean_dec_ref(v_00_u03c1_39_);
v___x_175_ = lean_box(v_isZero_45_);
v___x_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
v___x_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_177_, 0, v_x_43_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_execMem___boxed(lean_object* v_w_178_, lean_object* v_P_179_, lean_object* v_00_u03c1_180_, lean_object* v_x_181_, lean_object* v_x_182_, lean_object* v_x_183_, lean_object* v_x_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = lp_subsetsum_SubsetSum_MITM_Bench_execMem(v_w_178_, v_P_179_, v_00_u03c1_180_, v_x_181_, v_x_182_, v_x_183_, v_x_184_);
lean_dec(v_P_179_);
lean_dec(v_w_178_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_inst4___lam__0(lean_object* v_i_186_){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_unsigned_to_nat(3u);
v___x_188_ = lean_nat_add(v_i_186_, v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Bench_inst4___lam__0___boxed(lean_object* v_i_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = lp_subsetsum_SubsetSum_MITM_Bench_inst4___lam__0(v_i_189_);
lean_dec(v_i_189_);
return v_res_190_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Program(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Bench(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Program(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
