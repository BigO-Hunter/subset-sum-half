// Lean compiler output
// Module: Submission.PhaseB
// Imports: public import Init public meta import Init public import Submission.Prologue public import Submission.PhaseA public import Submission.Sort public import Submission.Words
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
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_subsetsum_List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_subsetsum_SubsetSum_MITM_bsFind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_bsFind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_bsFind_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_bsFind_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_bsFind_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_bsFind_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_candSum_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_candSum_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_candSum(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_candSum___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_sMod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_sMod___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_subsetsum_SubsetSum_MITM_bsFind(lean_object* v_arr_1_, lean_object* v_x_2_, lean_object* v_x_3_, lean_object* v_x_4_, lean_object* v_x_5_){
_start:
{
lean_object* v_zero_6_; uint8_t v_isZero_7_; 
v_zero_6_ = lean_unsigned_to_nat(0u);
v_isZero_7_ = lean_nat_dec_eq(v_x_3_, v_zero_6_);
if (v_isZero_7_ == 1)
{
uint8_t v___x_8_; 
lean_dec(v_x_5_);
lean_dec(v_x_4_);
lean_dec(v_x_3_);
v___x_8_ = 0;
return v___x_8_;
}
else
{
uint8_t v___x_9_; 
v___x_9_ = lean_nat_dec_le(v_x_4_, v_x_5_);
if (v___x_9_ == 0)
{
lean_dec(v_x_5_);
lean_dec(v_x_4_);
lean_dec(v_x_3_);
return v___x_9_;
}
else
{
lean_object* v_one_10_; lean_object* v_n_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; uint8_t v___x_15_; 
v_one_10_ = lean_unsigned_to_nat(1u);
v_n_11_ = lean_nat_sub(v_x_3_, v_one_10_);
lean_dec(v_x_3_);
v___x_12_ = lean_nat_add(v_x_4_, v_x_5_);
v___x_13_ = lean_nat_shiftr(v___x_12_, v_one_10_);
lean_dec(v___x_12_);
lean_inc(v___x_13_);
v___x_14_ = l_List_getD___redArg(v_arr_1_, v___x_13_, v_zero_6_);
v___x_15_ = lean_nat_dec_lt(v___x_14_, v_x_2_);
if (v___x_15_ == 0)
{
uint8_t v___x_16_; 
lean_dec(v_x_5_);
v___x_16_ = lean_nat_dec_lt(v_x_2_, v___x_14_);
lean_dec(v___x_14_);
if (v___x_16_ == 0)
{
lean_dec(v___x_13_);
lean_dec(v_n_11_);
lean_dec(v_x_4_);
return v___x_9_;
}
else
{
lean_object* v___x_17_; 
v___x_17_ = lean_nat_sub(v___x_13_, v_one_10_);
lean_dec(v___x_13_);
v_x_3_ = v_n_11_;
v_x_5_ = v___x_17_;
goto _start;
}
}
else
{
lean_object* v___x_19_; 
lean_dec(v___x_14_);
lean_dec(v_x_4_);
v___x_19_ = lean_nat_add(v___x_13_, v_one_10_);
lean_dec(v___x_13_);
v_x_3_ = v_n_11_;
v_x_4_ = v___x_19_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_bsFind___boxed(lean_object* v_arr_21_, lean_object* v_x_22_, lean_object* v_x_23_, lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = lp_subsetsum_SubsetSum_MITM_bsFind(v_arr_21_, v_x_22_, v_x_23_, v_x_24_, v_x_25_);
lean_dec(v_x_22_);
lean_dec(v_arr_21_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_bsFind_match__1_splitter___redArg(lean_object* v_x_28_, lean_object* v_x_29_, lean_object* v_x_30_, lean_object* v_h__1_31_, lean_object* v_h__2_32_){
_start:
{
lean_object* v_zero_33_; uint8_t v_isZero_34_; 
v_zero_33_ = lean_unsigned_to_nat(0u);
v_isZero_34_ = lean_nat_dec_eq(v_x_28_, v_zero_33_);
if (v_isZero_34_ == 1)
{
lean_object* v___x_35_; 
lean_dec(v_h__2_32_);
v___x_35_ = lean_apply_2(v_h__1_31_, v_x_29_, v_x_30_);
return v___x_35_;
}
else
{
lean_object* v_one_36_; lean_object* v_n_37_; lean_object* v___x_38_; 
lean_dec(v_h__1_31_);
v_one_36_ = lean_unsigned_to_nat(1u);
v_n_37_ = lean_nat_sub(v_x_28_, v_one_36_);
v___x_38_ = lean_apply_3(v_h__2_32_, v_n_37_, v_x_29_, v_x_30_);
return v___x_38_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_bsFind_match__1_splitter___redArg___boxed(lean_object* v_x_39_, lean_object* v_x_40_, lean_object* v_x_41_, lean_object* v_h__1_42_, lean_object* v_h__2_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_bsFind_match__1_splitter___redArg(v_x_39_, v_x_40_, v_x_41_, v_h__1_42_, v_h__2_43_);
lean_dec(v_x_39_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_bsFind_match__1_splitter(lean_object* v_motive_45_, lean_object* v_x_46_, lean_object* v_x_47_, lean_object* v_x_48_, lean_object* v_h__1_49_, lean_object* v_h__2_50_){
_start:
{
lean_object* v_zero_51_; uint8_t v_isZero_52_; 
v_zero_51_ = lean_unsigned_to_nat(0u);
v_isZero_52_ = lean_nat_dec_eq(v_x_46_, v_zero_51_);
if (v_isZero_52_ == 1)
{
lean_object* v___x_53_; 
lean_dec(v_h__2_50_);
v___x_53_ = lean_apply_2(v_h__1_49_, v_x_47_, v_x_48_);
return v___x_53_;
}
else
{
lean_object* v_one_54_; lean_object* v_n_55_; lean_object* v___x_56_; 
lean_dec(v_h__1_49_);
v_one_54_ = lean_unsigned_to_nat(1u);
v_n_55_ = lean_nat_sub(v_x_46_, v_one_54_);
v___x_56_ = lean_apply_3(v_h__2_50_, v_n_55_, v_x_47_, v_x_48_);
return v___x_56_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_bsFind_match__1_splitter___boxed(lean_object* v_motive_57_, lean_object* v_x_58_, lean_object* v_x_59_, lean_object* v_x_60_, lean_object* v_h__1_61_, lean_object* v_h__2_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_bsFind_match__1_splitter(v_motive_57_, v_x_58_, v_x_59_, v_x_60_, v_h__1_61_, v_h__2_62_);
lean_dec(v_x_58_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_candSum_spec__0(lean_object* v_j_64_, lean_object* v_idx_65_, lean_object* v_A_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
if (lean_obj_tag(v_a_67_) == 0)
{
lean_object* v___x_69_; 
lean_dec_ref(v_A_66_);
v___x_69_ = l_List_reverse___redArg(v_a_68_);
return v___x_69_;
}
else
{
lean_object* v_head_70_; lean_object* v_tail_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_90_; 
v_head_70_ = lean_ctor_get(v_a_67_, 0);
v_tail_71_ = lean_ctor_get(v_a_67_, 1);
v_isSharedCheck_90_ = !lean_is_exclusive(v_a_67_);
if (v_isSharedCheck_90_ == 0)
{
v___x_73_ = v_a_67_;
v_isShared_74_ = v_isSharedCheck_90_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_tail_71_);
lean_inc(v_head_70_);
lean_dec(v_a_67_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_90_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___y_76_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_81_ = lean_unsigned_to_nat(2u);
v___x_82_ = lean_nat_add(v_head_70_, v_j_64_);
lean_dec(v_head_70_);
v___x_83_ = lean_nat_pow(v___x_81_, v___x_82_);
v___x_84_ = lean_nat_div(v_idx_65_, v___x_83_);
lean_dec(v___x_83_);
v___x_85_ = lean_nat_mod(v___x_84_, v___x_81_);
lean_dec(v___x_84_);
v___x_86_ = lean_unsigned_to_nat(1u);
v___x_87_ = lean_nat_dec_eq(v___x_85_, v___x_86_);
lean_dec(v___x_85_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; 
lean_dec(v___x_82_);
v___x_88_ = lean_unsigned_to_nat(0u);
v___y_76_ = v___x_88_;
goto v___jp_75_;
}
else
{
lean_object* v___x_89_; 
lean_inc_ref(v_A_66_);
v___x_89_ = lean_apply_1(v_A_66_, v___x_82_);
v___y_76_ = v___x_89_;
goto v___jp_75_;
}
v___jp_75_:
{
lean_object* v___x_78_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 1, v_a_68_);
lean_ctor_set(v___x_73_, 0, v___y_76_);
v___x_78_ = v___x_73_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___y_76_);
lean_ctor_set(v_reuseFailAlloc_80_, 1, v_a_68_);
v___x_78_ = v_reuseFailAlloc_80_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
v_a_67_ = v_tail_71_;
v_a_68_ = v___x_78_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_candSum_spec__0___boxed(lean_object* v_j_91_, lean_object* v_idx_92_, lean_object* v_A_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_candSum_spec__0(v_j_91_, v_idx_92_, v_A_93_, v_a_94_, v_a_95_);
lean_dec(v_idx_92_);
lean_dec(v_j_91_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_candSum(lean_object* v_A_97_, lean_object* v_idx_98_, lean_object* v_j_99_, lean_object* v_m2_100_){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_101_ = lean_nat_sub(v_m2_100_, v_j_99_);
v___x_102_ = l_List_range(v___x_101_);
v___x_103_ = lean_box(0);
v___x_104_ = lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_candSum_spec__0(v_j_99_, v_idx_98_, v_A_97_, v___x_102_, v___x_103_);
v___x_105_ = lp_subsetsum_List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1(v___x_104_);
lean_dec(v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_candSum___boxed(lean_object* v_A_106_, lean_object* v_idx_107_, lean_object* v_j_108_, lean_object* v_m2_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = lp_subsetsum_SubsetSum_MITM_candSum(v_A_106_, v_idx_107_, v_j_108_, v_m2_109_);
lean_dec(v_m2_109_);
lean_dec(v_j_108_);
lean_dec(v_idx_107_);
return v_res_110_;
}
}
LEAN_EXPORT uint8_t lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_sMod(lean_object* v_S_111_, lean_object* v_m_112_, lean_object* v_i_113_){
_start:
{
uint8_t v___x_114_; 
v___x_114_ = lean_nat_dec_eq(v_i_113_, v_m_112_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = lean_apply_1(v_S_111_, v_i_113_);
v___x_116_ = lean_unbox(v___x_115_);
return v___x_116_;
}
else
{
uint8_t v___x_117_; 
lean_dec(v_i_113_);
lean_dec_ref(v_S_111_);
v___x_117_ = 0;
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_sMod___boxed(lean_object* v_S_118_, lean_object* v_m_119_, lean_object* v_i_120_){
_start:
{
uint8_t v_res_121_; lean_object* v_r_122_; 
v_res_121_ = lp_subsetsum___private_Submission_PhaseB_0__SubsetSum_MITM_sMod(v_S_118_, v_m_119_, v_i_120_);
lean_dec(v_m_119_);
v_r_122_ = lean_box(v_res_121_);
return v_r_122_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Prologue(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_PhaseA(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Sort(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Words(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_PhaseB(uint8_t builtin) {
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
res = initialize_subsetsum_Submission_Prologue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_PhaseA(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Sort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Words(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
