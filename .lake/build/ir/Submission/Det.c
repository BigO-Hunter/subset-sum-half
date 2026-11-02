// Lean compiler output
// Module: Submission.Det
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__1_splitter___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__1_splitter___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__3_splitter___redArg(lean_object* v_x_1_, lean_object* v_x_2_, lean_object* v_x_3_, lean_object* v_x_4_, lean_object* v_h__1_5_, lean_object* v_h__2_6_){
_start:
{
lean_object* v_zero_7_; uint8_t v_isZero_8_; 
v_zero_7_ = lean_unsigned_to_nat(0u);
v_isZero_8_ = lean_nat_dec_eq(v_x_1_, v_zero_7_);
if (v_isZero_8_ == 1)
{
lean_object* v___x_9_; 
lean_dec(v_h__2_6_);
v___x_9_ = lean_apply_3(v_h__1_5_, v_x_2_, v_x_3_, v_x_4_);
return v___x_9_;
}
else
{
lean_object* v_one_10_; lean_object* v_n_11_; lean_object* v___x_12_; 
lean_dec(v_h__1_5_);
v_one_10_ = lean_unsigned_to_nat(1u);
v_n_11_ = lean_nat_sub(v_x_1_, v_one_10_);
v___x_12_ = lean_apply_4(v_h__2_6_, v_n_11_, v_x_2_, v_x_3_, v_x_4_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__3_splitter___redArg___boxed(lean_object* v_x_13_, lean_object* v_x_14_, lean_object* v_x_15_, lean_object* v_x_16_, lean_object* v_h__1_17_, lean_object* v_h__2_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__3_splitter___redArg(v_x_13_, v_x_14_, v_x_15_, v_x_16_, v_h__1_17_, v_h__2_18_);
lean_dec(v_x_13_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__3_splitter(lean_object* v_w_20_, lean_object* v_motive_21_, lean_object* v_x_22_, lean_object* v_x_23_, lean_object* v_x_24_, lean_object* v_x_25_, lean_object* v_h__1_26_, lean_object* v_h__2_27_){
_start:
{
lean_object* v_zero_28_; uint8_t v_isZero_29_; 
v_zero_28_ = lean_unsigned_to_nat(0u);
v_isZero_29_ = lean_nat_dec_eq(v_x_22_, v_zero_28_);
if (v_isZero_29_ == 1)
{
lean_object* v___x_30_; 
lean_dec(v_h__2_27_);
v___x_30_ = lean_apply_3(v_h__1_26_, v_x_23_, v_x_24_, v_x_25_);
return v___x_30_;
}
else
{
lean_object* v_one_31_; lean_object* v_n_32_; lean_object* v___x_33_; 
lean_dec(v_h__1_26_);
v_one_31_ = lean_unsigned_to_nat(1u);
v_n_32_ = lean_nat_sub(v_x_22_, v_one_31_);
v___x_33_ = lean_apply_4(v_h__2_27_, v_n_32_, v_x_23_, v_x_24_, v_x_25_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__3_splitter___boxed(lean_object* v_w_34_, lean_object* v_motive_35_, lean_object* v_x_36_, lean_object* v_x_37_, lean_object* v_x_38_, lean_object* v_x_39_, lean_object* v_h__1_40_, lean_object* v_h__2_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__3_splitter(v_w_34_, v_motive_35_, v_x_36_, v_x_37_, v_x_38_, v_x_39_, v_h__1_40_, v_h__2_41_);
lean_dec(v_x_36_);
lean_dec(v_w_34_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__1_splitter___redArg(lean_object* v_x_43_, lean_object* v_h__1_44_, lean_object* v_h__2_45_, lean_object* v_h__3_46_, lean_object* v_h__4_47_, lean_object* v_h__5_48_, lean_object* v_h__6_49_, lean_object* v_h__7_50_, lean_object* v_h__8_51_, lean_object* v_h__9_52_, lean_object* v_h__10_53_, lean_object* v_h__11_54_, lean_object* v_h__12_55_, lean_object* v_h__13_56_, lean_object* v_h__14_57_, lean_object* v_h__15_58_, lean_object* v_h__16_59_, lean_object* v_h__17_60_){
_start:
{
switch(lean_obj_tag(v_x_43_))
{
case 0:
{
lean_object* v_i_61_; lean_object* v___x_62_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
v_i_61_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_61_);
lean_dec_ref_known(v_x_43_, 1);
v___x_62_ = lean_apply_1(v_h__1_44_, v_i_61_);
return v___x_62_;
}
case 1:
{
lean_object* v_i_63_; lean_object* v_j_64_; lean_object* v_k_65_; lean_object* v___x_66_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__1_44_);
v_i_63_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_63_);
v_j_64_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_64_);
v_k_65_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_k_65_);
lean_dec_ref_known(v_x_43_, 3);
v___x_66_ = lean_apply_3(v_h__2_45_, v_i_63_, v_j_64_, v_k_65_);
return v___x_66_;
}
case 2:
{
lean_object* v_i_67_; lean_object* v_j_68_; lean_object* v_k_69_; lean_object* v___x_70_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_67_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_67_);
v_j_68_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_68_);
v_k_69_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_k_69_);
lean_dec_ref_known(v_x_43_, 3);
v___x_70_ = lean_apply_3(v_h__3_46_, v_i_67_, v_j_68_, v_k_69_);
return v___x_70_;
}
case 3:
{
lean_object* v_i_71_; lean_object* v_j_72_; lean_object* v_k_73_; lean_object* v___x_74_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_71_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_71_);
v_j_72_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_72_);
v_k_73_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_k_73_);
lean_dec_ref_known(v_x_43_, 3);
v___x_74_ = lean_apply_3(v_h__4_47_, v_i_71_, v_j_72_, v_k_73_);
return v___x_74_;
}
case 4:
{
lean_object* v_i_75_; lean_object* v_j_76_; lean_object* v_k_77_; lean_object* v___x_78_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_75_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_75_);
v_j_76_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_76_);
v_k_77_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_k_77_);
lean_dec_ref_known(v_x_43_, 3);
v___x_78_ = lean_apply_3(v_h__5_48_, v_i_75_, v_j_76_, v_k_77_);
return v___x_78_;
}
case 5:
{
lean_object* v_i_79_; lean_object* v_j_80_; lean_object* v_k_81_; lean_object* v___x_82_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_79_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_79_);
v_j_80_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_80_);
v_k_81_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_k_81_);
lean_dec_ref_known(v_x_43_, 3);
v___x_82_ = lean_apply_3(v_h__6_49_, v_i_79_, v_j_80_, v_k_81_);
return v___x_82_;
}
case 6:
{
lean_object* v_i_83_; lean_object* v_j_84_; lean_object* v_k_85_; lean_object* v___x_86_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_83_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_83_);
v_j_84_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_84_);
v_k_85_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_k_85_);
lean_dec_ref_known(v_x_43_, 3);
v___x_86_ = lean_apply_3(v_h__7_50_, v_i_83_, v_j_84_, v_k_85_);
return v___x_86_;
}
case 7:
{
lean_object* v_i_87_; lean_object* v_j_88_; lean_object* v_k_89_; lean_object* v___x_90_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_87_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_87_);
v_j_88_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_88_);
v_k_89_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_k_89_);
lean_dec_ref_known(v_x_43_, 3);
v___x_90_ = lean_apply_3(v_h__8_51_, v_i_87_, v_j_88_, v_k_89_);
return v___x_90_;
}
case 8:
{
lean_object* v_i_91_; lean_object* v_j_92_; lean_object* v_k_93_; lean_object* v___x_94_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_91_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_91_);
v_j_92_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_92_);
v_k_93_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_k_93_);
lean_dec_ref_known(v_x_43_, 3);
v___x_94_ = lean_apply_3(v_h__9_52_, v_i_91_, v_j_92_, v_k_93_);
return v___x_94_;
}
case 9:
{
lean_object* v_i_95_; lean_object* v_j_96_; lean_object* v_k_97_; lean_object* v___x_98_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_95_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_95_);
v_j_96_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_96_);
v_k_97_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_k_97_);
lean_dec_ref_known(v_x_43_, 3);
v___x_98_ = lean_apply_3(v_h__10_53_, v_i_95_, v_j_96_, v_k_97_);
return v___x_98_;
}
case 10:
{
lean_object* v_i_99_; lean_object* v_j_100_; lean_object* v_k_101_; lean_object* v___x_102_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_99_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_99_);
v_j_100_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_100_);
v_k_101_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_k_101_);
lean_dec_ref_known(v_x_43_, 3);
v___x_102_ = lean_apply_3(v_h__11_54_, v_i_99_, v_j_100_, v_k_101_);
return v___x_102_;
}
case 11:
{
lean_object* v_i_103_; lean_object* v_j_104_; lean_object* v___x_105_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_103_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_103_);
v_j_104_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_104_);
lean_dec_ref_known(v_x_43_, 2);
v___x_105_ = lean_apply_2(v_h__12_55_, v_i_103_, v_j_104_);
return v___x_105_;
}
case 12:
{
lean_object* v_i_106_; lean_object* v_j_107_; lean_object* v___x_108_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_106_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_106_);
v_j_107_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_107_);
lean_dec_ref_known(v_x_43_, 2);
v___x_108_ = lean_apply_2(v_h__13_56_, v_i_106_, v_j_107_);
return v___x_108_;
}
case 13:
{
lean_object* v_i_109_; lean_object* v___x_110_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_109_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_109_);
lean_dec_ref_known(v_x_43_, 1);
v___x_110_ = lean_apply_1(v_h__14_57_, v_i_109_);
return v___x_110_;
}
case 14:
{
lean_object* v_i_111_; lean_object* v_j_112_; lean_object* v_l_113_; lean_object* v___x_114_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__16_59_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v_i_111_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_i_111_);
v_j_112_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_j_112_);
v_l_113_ = lean_ctor_get(v_x_43_, 2);
lean_inc(v_l_113_);
lean_dec_ref_known(v_x_43_, 3);
v___x_114_ = lean_apply_3(v_h__15_58_, v_i_111_, v_j_112_, v_l_113_);
return v___x_114_;
}
case 15:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
lean_dec(v_h__17_60_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v___x_115_ = lean_box(0);
v___x_116_ = lean_apply_1(v_h__16_59_, v___x_115_);
return v___x_116_;
}
default: 
{
lean_object* v___x_117_; lean_object* v___x_118_; 
lean_dec(v_h__16_59_);
lean_dec(v_h__15_58_);
lean_dec(v_h__14_57_);
lean_dec(v_h__13_56_);
lean_dec(v_h__12_55_);
lean_dec(v_h__11_54_);
lean_dec(v_h__10_53_);
lean_dec(v_h__9_52_);
lean_dec(v_h__8_51_);
lean_dec(v_h__7_50_);
lean_dec(v_h__6_49_);
lean_dec(v_h__5_48_);
lean_dec(v_h__4_47_);
lean_dec(v_h__3_46_);
lean_dec(v_h__2_45_);
lean_dec(v_h__1_44_);
v___x_117_ = lean_box(0);
v___x_118_ = lean_apply_1(v_h__17_60_, v___x_117_);
return v___x_118_;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__1_splitter___redArg___boxed(lean_object** _args){
lean_object* v_x_119_ = _args[0];
lean_object* v_h__1_120_ = _args[1];
lean_object* v_h__2_121_ = _args[2];
lean_object* v_h__3_122_ = _args[3];
lean_object* v_h__4_123_ = _args[4];
lean_object* v_h__5_124_ = _args[5];
lean_object* v_h__6_125_ = _args[6];
lean_object* v_h__7_126_ = _args[7];
lean_object* v_h__8_127_ = _args[8];
lean_object* v_h__9_128_ = _args[9];
lean_object* v_h__10_129_ = _args[10];
lean_object* v_h__11_130_ = _args[11];
lean_object* v_h__12_131_ = _args[12];
lean_object* v_h__13_132_ = _args[13];
lean_object* v_h__14_133_ = _args[14];
lean_object* v_h__15_134_ = _args[15];
lean_object* v_h__16_135_ = _args[16];
lean_object* v_h__17_136_ = _args[17];
_start:
{
lean_object* v_res_137_; 
v_res_137_ = lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__1_splitter___redArg(v_x_119_, v_h__1_120_, v_h__2_121_, v_h__3_122_, v_h__4_123_, v_h__5_124_, v_h__6_125_, v_h__7_126_, v_h__8_127_, v_h__9_128_, v_h__10_129_, v_h__11_130_, v_h__12_131_, v_h__13_132_, v_h__14_133_, v_h__15_134_, v_h__16_135_, v_h__17_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__1_splitter(lean_object* v_motive_138_, lean_object* v_x_139_, lean_object* v_h__1_140_, lean_object* v_h__2_141_, lean_object* v_h__3_142_, lean_object* v_h__4_143_, lean_object* v_h__5_144_, lean_object* v_h__6_145_, lean_object* v_h__7_146_, lean_object* v_h__8_147_, lean_object* v_h__9_148_, lean_object* v_h__10_149_, lean_object* v_h__11_150_, lean_object* v_h__12_151_, lean_object* v_h__13_152_, lean_object* v_h__14_153_, lean_object* v_h__15_154_, lean_object* v_h__16_155_, lean_object* v_h__17_156_){
_start:
{
switch(lean_obj_tag(v_x_139_))
{
case 0:
{
lean_object* v_i_157_; lean_object* v___x_158_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
v_i_157_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_157_);
lean_dec_ref_known(v_x_139_, 1);
v___x_158_ = lean_apply_1(v_h__1_140_, v_i_157_);
return v___x_158_;
}
case 1:
{
lean_object* v_i_159_; lean_object* v_j_160_; lean_object* v_k_161_; lean_object* v___x_162_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__1_140_);
v_i_159_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_159_);
v_j_160_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_160_);
v_k_161_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_k_161_);
lean_dec_ref_known(v_x_139_, 3);
v___x_162_ = lean_apply_3(v_h__2_141_, v_i_159_, v_j_160_, v_k_161_);
return v___x_162_;
}
case 2:
{
lean_object* v_i_163_; lean_object* v_j_164_; lean_object* v_k_165_; lean_object* v___x_166_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_163_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_163_);
v_j_164_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_164_);
v_k_165_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_k_165_);
lean_dec_ref_known(v_x_139_, 3);
v___x_166_ = lean_apply_3(v_h__3_142_, v_i_163_, v_j_164_, v_k_165_);
return v___x_166_;
}
case 3:
{
lean_object* v_i_167_; lean_object* v_j_168_; lean_object* v_k_169_; lean_object* v___x_170_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_167_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_167_);
v_j_168_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_168_);
v_k_169_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_k_169_);
lean_dec_ref_known(v_x_139_, 3);
v___x_170_ = lean_apply_3(v_h__4_143_, v_i_167_, v_j_168_, v_k_169_);
return v___x_170_;
}
case 4:
{
lean_object* v_i_171_; lean_object* v_j_172_; lean_object* v_k_173_; lean_object* v___x_174_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_171_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_171_);
v_j_172_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_172_);
v_k_173_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_k_173_);
lean_dec_ref_known(v_x_139_, 3);
v___x_174_ = lean_apply_3(v_h__5_144_, v_i_171_, v_j_172_, v_k_173_);
return v___x_174_;
}
case 5:
{
lean_object* v_i_175_; lean_object* v_j_176_; lean_object* v_k_177_; lean_object* v___x_178_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_175_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_175_);
v_j_176_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_176_);
v_k_177_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_k_177_);
lean_dec_ref_known(v_x_139_, 3);
v___x_178_ = lean_apply_3(v_h__6_145_, v_i_175_, v_j_176_, v_k_177_);
return v___x_178_;
}
case 6:
{
lean_object* v_i_179_; lean_object* v_j_180_; lean_object* v_k_181_; lean_object* v___x_182_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_179_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_179_);
v_j_180_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_180_);
v_k_181_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_k_181_);
lean_dec_ref_known(v_x_139_, 3);
v___x_182_ = lean_apply_3(v_h__7_146_, v_i_179_, v_j_180_, v_k_181_);
return v___x_182_;
}
case 7:
{
lean_object* v_i_183_; lean_object* v_j_184_; lean_object* v_k_185_; lean_object* v___x_186_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_183_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_183_);
v_j_184_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_184_);
v_k_185_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_k_185_);
lean_dec_ref_known(v_x_139_, 3);
v___x_186_ = lean_apply_3(v_h__8_147_, v_i_183_, v_j_184_, v_k_185_);
return v___x_186_;
}
case 8:
{
lean_object* v_i_187_; lean_object* v_j_188_; lean_object* v_k_189_; lean_object* v___x_190_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_187_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_187_);
v_j_188_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_188_);
v_k_189_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_k_189_);
lean_dec_ref_known(v_x_139_, 3);
v___x_190_ = lean_apply_3(v_h__9_148_, v_i_187_, v_j_188_, v_k_189_);
return v___x_190_;
}
case 9:
{
lean_object* v_i_191_; lean_object* v_j_192_; lean_object* v_k_193_; lean_object* v___x_194_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_191_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_191_);
v_j_192_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_192_);
v_k_193_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_k_193_);
lean_dec_ref_known(v_x_139_, 3);
v___x_194_ = lean_apply_3(v_h__10_149_, v_i_191_, v_j_192_, v_k_193_);
return v___x_194_;
}
case 10:
{
lean_object* v_i_195_; lean_object* v_j_196_; lean_object* v_k_197_; lean_object* v___x_198_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_195_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_195_);
v_j_196_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_196_);
v_k_197_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_k_197_);
lean_dec_ref_known(v_x_139_, 3);
v___x_198_ = lean_apply_3(v_h__11_150_, v_i_195_, v_j_196_, v_k_197_);
return v___x_198_;
}
case 11:
{
lean_object* v_i_199_; lean_object* v_j_200_; lean_object* v___x_201_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_199_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_199_);
v_j_200_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_200_);
lean_dec_ref_known(v_x_139_, 2);
v___x_201_ = lean_apply_2(v_h__12_151_, v_i_199_, v_j_200_);
return v___x_201_;
}
case 12:
{
lean_object* v_i_202_; lean_object* v_j_203_; lean_object* v___x_204_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_202_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_202_);
v_j_203_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_203_);
lean_dec_ref_known(v_x_139_, 2);
v___x_204_ = lean_apply_2(v_h__13_152_, v_i_202_, v_j_203_);
return v___x_204_;
}
case 13:
{
lean_object* v_i_205_; lean_object* v___x_206_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_205_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_205_);
lean_dec_ref_known(v_x_139_, 1);
v___x_206_ = lean_apply_1(v_h__14_153_, v_i_205_);
return v___x_206_;
}
case 14:
{
lean_object* v_i_207_; lean_object* v_j_208_; lean_object* v_l_209_; lean_object* v___x_210_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__16_155_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v_i_207_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_i_207_);
v_j_208_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_j_208_);
v_l_209_ = lean_ctor_get(v_x_139_, 2);
lean_inc(v_l_209_);
lean_dec_ref_known(v_x_139_, 3);
v___x_210_ = lean_apply_3(v_h__15_154_, v_i_207_, v_j_208_, v_l_209_);
return v___x_210_;
}
case 15:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
lean_dec(v_h__17_156_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v___x_211_ = lean_box(0);
v___x_212_ = lean_apply_1(v_h__16_155_, v___x_211_);
return v___x_212_;
}
default: 
{
lean_object* v___x_213_; lean_object* v___x_214_; 
lean_dec(v_h__16_155_);
lean_dec(v_h__15_154_);
lean_dec(v_h__14_153_);
lean_dec(v_h__13_152_);
lean_dec(v_h__12_151_);
lean_dec(v_h__11_150_);
lean_dec(v_h__10_149_);
lean_dec(v_h__9_148_);
lean_dec(v_h__8_147_);
lean_dec(v_h__7_146_);
lean_dec(v_h__6_145_);
lean_dec(v_h__5_144_);
lean_dec(v_h__4_143_);
lean_dec(v_h__3_142_);
lean_dec(v_h__2_141_);
lean_dec(v_h__1_140_);
v___x_213_ = lean_box(0);
v___x_214_ = lean_apply_1(v_h__17_156_, v___x_213_);
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__1_splitter___boxed(lean_object** _args){
lean_object* v_motive_215_ = _args[0];
lean_object* v_x_216_ = _args[1];
lean_object* v_h__1_217_ = _args[2];
lean_object* v_h__2_218_ = _args[3];
lean_object* v_h__3_219_ = _args[4];
lean_object* v_h__4_220_ = _args[5];
lean_object* v_h__5_221_ = _args[6];
lean_object* v_h__6_222_ = _args[7];
lean_object* v_h__7_223_ = _args[8];
lean_object* v_h__8_224_ = _args[9];
lean_object* v_h__9_225_ = _args[10];
lean_object* v_h__10_226_ = _args[11];
lean_object* v_h__11_227_ = _args[12];
lean_object* v_h__12_228_ = _args[13];
lean_object* v_h__13_229_ = _args[14];
lean_object* v_h__14_230_ = _args[15];
lean_object* v_h__15_231_ = _args[16];
lean_object* v_h__16_232_ = _args[17];
lean_object* v_h__17_233_ = _args[18];
_start:
{
lean_object* v_res_234_; 
v_res_234_ = lp_subsetsum___private_Submission_Det_0__BigOSpeedrun_SubsetSum_exec_match__1_splitter(v_motive_215_, v_x_216_, v_h__1_217_, v_h__2_218_, v_h__3_219_, v_h__4_220_, v_h__5_221_, v_h__6_222_, v_h__7_223_, v_h__8_224_, v_h__9_225_, v_h__10_226_, v_h__11_227_, v_h__12_228_, v_h__13_229_, v_h__14_230_, v_h__15_231_, v_h__16_232_, v_h__17_233_);
return v_res_234_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Program(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Det(uint8_t builtin) {
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
