// Lean compiler output
// Module: Submission.PhaseA
// Imports: public import Init public meta import Init public import Submission.Prologue public import Submission.Sort public import Submission.Fit
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_arrAt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_arrAt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_arrL_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_arrL_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_arrL(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_arrL___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_arrAt(lean_object* v_f_1_, lean_object* v_b_2_, lean_object* v_i_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_nat_add(v_b_2_, v_i_3_);
v___x_5_ = lean_apply_1(v_f_1_, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_arrAt___boxed(lean_object* v_f_6_, lean_object* v_b_7_, lean_object* v_i_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_subsetsum_SubsetSum_MITM_arrAt(v_f_6_, v_b_7_, v_i_8_);
lean_dec(v_i_8_);
lean_dec(v_b_7_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_arrL_spec__0(lean_object* v_f_10_, lean_object* v_b_11_, lean_object* v_a_12_, lean_object* v_a_13_){
_start:
{
if (lean_obj_tag(v_a_12_) == 0)
{
lean_object* v___x_14_; 
lean_dec_ref(v_f_10_);
v___x_14_ = l_List_reverse___redArg(v_a_13_);
return v___x_14_;
}
else
{
lean_object* v_head_15_; lean_object* v_tail_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_25_; 
v_head_15_ = lean_ctor_get(v_a_12_, 0);
v_tail_16_ = lean_ctor_get(v_a_12_, 1);
v_isSharedCheck_25_ = !lean_is_exclusive(v_a_12_);
if (v_isSharedCheck_25_ == 0)
{
v___x_18_ = v_a_12_;
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_tail_16_);
lean_inc(v_head_15_);
lean_dec(v_a_12_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___x_20_; lean_object* v___x_22_; 
lean_inc_ref(v_f_10_);
v___x_20_ = lp_subsetsum_SubsetSum_MITM_arrAt(v_f_10_, v_b_11_, v_head_15_);
lean_dec(v_head_15_);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 1, v_a_13_);
lean_ctor_set(v___x_18_, 0, v___x_20_);
v___x_22_ = v___x_18_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v___x_20_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v_a_13_);
v___x_22_ = v_reuseFailAlloc_24_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
v_a_12_ = v_tail_16_;
v_a_13_ = v___x_22_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_arrL_spec__0___boxed(lean_object* v_f_26_, lean_object* v_b_27_, lean_object* v_a_28_, lean_object* v_a_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_arrL_spec__0(v_f_26_, v_b_27_, v_a_28_, v_a_29_);
lean_dec(v_b_27_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_arrL(lean_object* v_f_31_, lean_object* v_b_32_, lean_object* v_L_33_){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = l_List_range(v_L_33_);
v___x_35_ = lean_box(0);
v___x_36_ = lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_arrL_spec__0(v_f_31_, v_b_32_, v___x_34_, v___x_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_arrL___boxed(lean_object* v_f_37_, lean_object* v_b_38_, lean_object* v_L_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = lp_subsetsum_SubsetSum_MITM_arrL(v_f_37_, v_b_38_, v_L_39_);
lean_dec(v_b_38_);
return v_res_40_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Prologue(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Sort(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Fit(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_PhaseA(uint8_t builtin) {
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
res = initialize_subsetsum_Submission_Sort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Fit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
