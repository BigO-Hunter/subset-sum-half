// Lean compiler output
// Module: Submission.Runtime
// Imports: public import Init public meta import Init public import Submission.Fit
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
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Runtime_stepBound(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Runtime_stepBound___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Runtime_constOverhead;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Runtime_stepBound(lean_object* v_n_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_2_ = lean_unsigned_to_nat(2u);
v___x_3_ = lean_unsigned_to_nat(1u);
v___x_4_ = lean_nat_shiftr(v_n_1_, v___x_3_);
v___x_5_ = lean_unsigned_to_nat(20u);
v___x_6_ = lean_nat_add(v___x_4_, v___x_5_);
lean_dec(v___x_4_);
v___x_7_ = lean_nat_pow(v___x_2_, v___x_6_);
lean_dec(v___x_6_);
v___x_8_ = lean_nat_add(v_n_1_, v___x_2_);
v___x_9_ = lean_unsigned_to_nat(8u);
v___x_10_ = lean_nat_pow(v___x_8_, v___x_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_nat_mul(v___x_7_, v___x_10_);
lean_dec(v___x_10_);
lean_dec(v___x_7_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Runtime_stepBound___boxed(lean_object* v_n_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = lp_subsetsum_SubsetSum_MITM_Runtime_stepBound(v_n_12_);
lean_dec(v_n_12_);
return v_res_13_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_Runtime_constOverhead(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_unsigned_to_nat(4096u);
return v___x_14_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Fit(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Runtime(uint8_t builtin) {
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
res = initialize_subsetsum_Submission_Fit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_subsetsum_SubsetSum_MITM_Runtime_constOverhead = _init_lp_subsetsum_SubsetSum_MITM_Runtime_constOverhead();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_Runtime_constOverhead);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
