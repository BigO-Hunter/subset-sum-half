// Lean compiler output
// Module: Submission.Prologue_test
// Imports: public import Init public meta import Init public import Submission.Det public import Submission.Words
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
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_input(lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_memOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_memOf___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_up(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_up___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_inF(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Cpro(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Cpro___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_memOf(lean_object* v_w_1_, lean_object* v_f_2_, lean_object* v_i_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_apply_1(v_f_2_, v_i_3_);
v___x_5_ = l_BitVec_ofNat(v_w_1_, v___x_4_);
lean_dec(v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_memOf___boxed(lean_object* v_w_6_, lean_object* v_f_7_, lean_object* v_i_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_subsetsum_SubsetSum_MITM_memOf(v_w_6_, v_f_7_, v_i_8_);
lean_dec(v_w_6_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_up(lean_object* v_f_10_, lean_object* v_c_11_, lean_object* v_v_12_, lean_object* v_x_13_){
_start:
{
uint8_t v___x_14_; 
v___x_14_ = lean_nat_dec_eq(v_x_13_, v_c_11_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; 
v___x_15_ = lean_apply_1(v_f_10_, v_x_13_);
return v___x_15_;
}
else
{
lean_dec(v_x_13_);
lean_dec_ref(v_f_10_);
lean_inc(v_v_12_);
return v_v_12_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_up___boxed(lean_object* v_f_16_, lean_object* v_c_17_, lean_object* v_v_18_, lean_object* v_x_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = lp_subsetsum_SubsetSum_MITM_up(v_f_16_, v_c_17_, v_v_18_, v_x_19_);
lean_dec(v_v_18_);
lean_dec(v_c_17_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_inF(lean_object* v_n_21_, lean_object* v_x_22_, lean_object* v_i_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = lp_subsetsum_BigOSpeedrun_SubsetSum_Instance_input(v_n_21_, v_x_22_);
v___x_25_ = lean_unsigned_to_nat(0u);
v___x_26_ = l_List_getD___redArg(v___x_24_, v_i_23_, v___x_25_);
lean_dec(v___x_24_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Cpro(lean_object* v_n_27_){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_28_ = lean_unsigned_to_nat(233u);
v___x_29_ = lean_unsigned_to_nat(6u);
v___x_30_ = lean_unsigned_to_nat(2u);
v___x_31_ = lean_nat_add(v_n_27_, v___x_30_);
v___x_32_ = lean_unsigned_to_nat(22u);
v___x_33_ = lean_nat_sub(v___x_31_, v___x_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_nat_mul(v___x_29_, v___x_33_);
lean_dec(v___x_33_);
v___x_35_ = lean_nat_add(v___x_28_, v___x_34_);
lean_dec(v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Cpro___boxed(lean_object* v_n_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_subsetsum_SubsetSum_MITM_Cpro(v_n_36_);
lean_dec(v_n_36_);
return v_res_37_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Det(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Words(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Prologue__test(uint8_t builtin) {
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
res = initialize_subsetsum_Submission_Det(builtin);
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
