import Submission.Prog2SmallN
import Submission.Prog2PhaseA
import Submission.Det
import Submission.Bridge
set_option autoImplicit true

/-!
# The summit: `Race.bound` — `SolvedInTime (1/2)`

Composes the whole `prog2` lane at the reduced bound `α = 1/2`:

| segment | pcs | cost (proven) |
|---|---|---|
| prologue (`prologue_exec2`) | 0 → 86 | `236 + 6·(n+2−23)` |
| phaseA (`phaseA_exec_p2`) | 86 → 148 | `12 + 44·(2^h−1) + 24h` |
| canon (`canon_exec`) | 148 → 161 | `6·2^h + 6` |
| phaseA2 (`phaseA2_exec`) | 161 → 224 | `12 + 44·(2^m−1) + 25m` |
| scanB (`scanB_exec`) | 224 → verdict | `12·(2^h + 2^m) + 40` |
| small-n unrolled (`smalln2/3_exec2`) | 0 → 12 → 244 | ≤ 48 |

Folding `2^m ≤ 2·2^h` and `24h + 25m ≤ 49n` gives
`cost ≤ 174·2^h + 55n + 306`, and the horizon
`hzn n = 480 · 2^⌈(n+1)/2⌉` dominates it, so

* `hzn n ^ 2 ≤ 480²·2·2^n` — the flat-bound BigO discharge at `α = 1/2`
  (no polynomial factor: at `α = 1/2` a `poly(n)` factor would square to
  `2^n·poly(n)²`, which is NOT `O(2^n)`; that is why the 3/4 lane's
  `stepBound` shape cannot be reused here, and why the parked lane's flat
  `84·2^⌈n/2⌉` was the right template);
* the verdict is `decide (isSum (instA x) n x.t)` on every tape, so
  `correct_of_det` collapses `Correct`'s 2/3 majority to a hundred percent.
-/

namespace SubsetSum.MITM

open BigOSpeedrun.SubsetSum SubsetSum.MITM.Spec
open SubsetSum.MITM.P2M
open SubsetSum.MITM.P2

/-! ## §1. the run ↔ exec bridge and input fits -/

theorem run_eq_exec2 {n : Nat} (x : Instance n) (ρ : Nat → BitVec (wordLength n x.bits))
    (T : Nat) :
    run prog2 x ρ T
      = exec prog2 ρ T 0 0 (memOf (wordLength n x.bits) (inF x)) := rfl

theorem input_lt_wordLength2 {n : Nat} (x : Instance n) (hn : 0 < n)
    (v : Nat) (hv : v ∈ x.input) : v < 2 ^ (wordLength n x.bits) := by
  have hmax : x.maxValue < 2 ^ x.bits := maxValue_lt_pow x hn
  have hbl : x.bits ≤ 4 * (n + x.bits)
      + Nat.log2 ((n + 2) ^ 4 - 1) + 1 := by omega
  have hp : 2 ^ x.bits ≤ 2 ^ (wordLength n x.bits) :=
    Nat.pow_le_pow_right (by omega) hbl
  have hmem : v ∈ n :: (List.ofFn x.a ++ [x.t]) := hv
  rcases List.mem_cons.mp hmem with heq | hrest
  · rw [heq]
    have h1 : (2:Nat) ^ n ≤ 2 ^ (2 * n) := Nat.pow_le_pow_right (by omega) (by omega)
    have h2 : (2:Nat) ^ (2 * n) ≤ 2 ^ (wordLength n x.bits) :=
      Nat.pow_le_pow_right (by omega)
        (by show 2 * n ≤ 4 * (n + x.bits) + Nat.log2 ((n + 2) ^ 4 - 1) + 1; omega)
    exact Nat.lt_of_lt_of_le (Nat.lt_two_pow_self (n := n)) (Nat.le_trans h1 h2)
  · rcases List.mem_append.mp hrest with hin | ht
    · obtain ⟨i, rfl⟩ := List.mem_ofFn.mp hin
      exact Nat.lt_of_le_of_lt (maxValue_ge_a x i) (Nat.lt_of_lt_of_le hmax hp)
    · obtain rfl : v = x.t := List.mem_singleton.mp ht
      exact Nat.lt_of_le_of_lt (maxValue_ge_t x) (Nat.lt_of_lt_of_le hmax hp)

/-! ## §2. the horizon and its `BigO` at `α = 1/2`

`hzn n = 480 · 2^⌈(n+1)/2⌉` — genuinely flat, no polynomial factor. -/

/-- The horizon: a flat multiple of `2^⌈(n+1)/2⌉`. -/
def hzn (n : Nat) : Nat := 480 * 2 ^ ((n + 1) / 2)

/-- `n ≤ 2^⌈(n+1)/2⌉` — the polynomial is absorbed by the exponential. -/
theorem n_le_halfpow (n : Nat) (hn : 2 ≤ n) : n ≤ 2 ^ ((n + 1) / 2) := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
    rcases Nat.lt_or_ge n 4 with hlt | hge
    · have h23 : n = 2 ∨ n = 3 := by omega
      rcases h23 with rfl | rfl <;> decide
    · have h1 : 2 ≤ n - 2 := by omega
      have hrec : n - 2 ≤ 2 ^ ((n - 2 + 1) / 2) := ih (n - 2) (by omega) h1
      have hn2 : n - 2 + 1 = n - 1 := by omega
      rw [hn2] at hrec
      have hsplit : (n + 1) / 2 = (n - 1) / 2 + 1 := by omega
      have hpow : (2 : Nat) ^ ((n + 1) / 2) = 2 * 2 ^ ((n - 1) / 2) := by
        rw [hsplit, Nat.pow_succ]
        omega
      have hpos : 1 ≤ 2 ^ ((n - 1) / 2) := Nat.one_le_two_pow
      rw [hpow]
      omega

/-- The step count fits under the flat horizon, as pure linear arithmetic over
the three opaque numerals `A = 2^(n/2)`, `B = 2^(n−n/2)`, `P = 2^⌈(n+1)/2⌉`
(the only shape `omega` can be trusted with here — it will not reason about a
bare `2^k` atom, let alone `2^(n − n/2)`). -/
private theorem budget2_arith {A B P n : Nat} (hn : 4 ≤ n)
    (hAP : A ≤ P) (hB2A : B ≤ 2 * A) (hnP : n ≤ P) (hP2 : 2 ≤ P) :
    (236 + 6 * (n + 2 - 23)) + (12 + 44 * (A - 1) + 24 * (n / 2))
      + (6 * A + 6)
      + (12 + 44 * (B - 1) + 25 * (n - n / 2))
      + (12 * (A + B) + 40) ≤ 480 * P := by
  have hsum : n / 2 + (n - n / 2) = n := by omega
  have h1 : 6 * (n + 2 - 23) ≤ 6 * n := by omega
  have h2 : 24 * (n / 2) + 25 * (n - n / 2) ≤ 25 * n := by omega
  have h3 : 62 * A + 56 * B ≤ 62 * A + 56 * (2 * A) := by omega
  have h4 : 62 * A + 112 * A ≤ 174 * P := by omega
  have h5 : 55 * n ≤ 55 * P := by omega
  have h6 : (306 : Nat) ≤ 153 * P := by omega
  omega

/-- The composed budget: prologue + phaseA + canon + phaseA2 + scanB fits under
the flat horizon `hzn n = 480·2^⌈(n+1)/2⌉` for every `n ≥ 4`. -/
theorem budget2_compose (n : Nat) (hn : 4 ≤ n) :
    (236 + 6 * (n + 2 - 23)) + (12 + 44 * (2 ^ (n / 2) - 1) + 24 * (n / 2))
      + (6 * 2 ^ (n / 2) + 6)
      + (12 + 44 * (2 ^ (n - n / 2) - 1) + 25 * (n - n / 2))
      + (12 * (2 ^ (n / 2) + 2 ^ (n - n / 2)) + 40) ≤ hzn n := by
  have hAP : (2 : Nat) ^ (n / 2) ≤ 2 ^ ((n + 1) / 2) :=
    Nat.pow_le_pow_right (by omega) (by omega)
  have hB2A : (2 : Nat) ^ (n - n / 2) ≤ 2 * 2 ^ (n / 2) := by
    calc (2 : Nat) ^ (n - n / 2) ≤ 2 ^ (n / 2 + 1) :=
          Nat.pow_le_pow_right (by omega) (by omega)
      _ = 2 * 2 ^ (n / 2) := by rw [Nat.pow_succ, Nat.mul_comm]
  have hnP : n ≤ 2 ^ ((n + 1) / 2) := n_le_halfpow n (by omega)
  have hP2 : 2 ≤ (2 : Nat) ^ ((n + 1) / 2) := by
    calc (2 : Nat) = 2 ^ 1 := by decide
      _ ≤ 2 ^ ((n + 1) / 2) := Nat.pow_le_pow_right (by omega) (by omega)
  have h := budget2_arith hn hAP hB2A hnP hP2
  rw [hzn]
  exact h

/-! ## §3. the `BigO` discharge at `α = 1/2` -/

open Rat in
theorem den_one_half : ((1 : Rat) / 2).den = 2 := by
  rw [Rat.div_def, Rat.inv_def,
    show (1 : Rat) = (1 : Int) /. 1 from (Rat.num_divInt_den 1).symm,
    Rat.divInt_mul_divInt, Rat.den_divInt]
  simp

open Rat in
theorem num_one_half : (((1 : Rat) / 2).num).toNat = 1 := by
  rw [Rat.div_def, Rat.inv_def,
    show (1 : Rat) = (1 : Int) /. 1 from (Rat.num_divInt_den 1).symm,
    Rat.divInt_mul_divInt, Rat.num_divInt]
  simp
  decide

/-- **The `1/2` discharge**: the flat horizon squares into `O(2^n)` —
`(480 · 2^⌈(n+1)/2⌉)² ≤ 460800 · 2^n`.  Copied in shape from the parked
lane's `flat_bigO_half` (attribution: `subsetsum-classic-mitm`,
`Submission/DirectAddress.lean`). -/
theorem hzn_bigO : BigO hzn (1 / 2 : Rat) := by
  refine ⟨460800, fun n _hn => ?_⟩
  rw [den_one_half, num_one_half, Nat.one_mul]
  have h480 : (480 : Nat) ^ 2 = 230400 := by decide
  have hs : (hzn n) ^ 2 = 230400 * 2 ^ (2 * ((n + 1) / 2)) := by
    rw [hzn, Nat.mul_pow, ← Nat.pow_mul, Nat.mul_comm ((n + 1) / 2) (2 : Nat), h480]
  have hle : 2 * ((n + 1) / 2) ≤ n + 1 := by omega
  have hmono : (2 : Nat) ^ (2 * ((n + 1) / 2)) ≤ 2 ^ (n + 1) :=
    Nat.pow_le_pow_right (by omega) hle
  have hsplit2 : (2 : Nat) ^ (n + 1) = 2 * 2 ^ n := by rw [Nat.pow_succ, Nat.mul_comm]
  calc (hzn n) ^ 2 = 230400 * 2 ^ (2 * ((n + 1) / 2)) := hs
    _ ≤ 230400 * 2 ^ (n + 1) := Nat.mul_le_mul (Nat.le_refl _) hmono
    _ = 230400 * (2 * 2 ^ n) := by rw [hsplit2]
    _ = 460800 * 2 ^ n := by
        have h : (230400 : Nat) * 2 = 460800 := by decide
        rw [← Nat.mul_assoc, h]


/-- The n = 2 verdict list is exactly the `x.yes` question. -/
theorem verdict2_iff2 (x : Instance 2) :
    x.yes ↔ x.t ∈ [0, instA x 0, instA x 1, instA x 0 + instA x 1] :=
  (instance_yes_iff x).trans (isSum_two_iff2 (instA x) x.t)

/-- The n = 3 verdict list is exactly the `x.yes` question. -/
theorem verdict3_iff2 (x : Instance 3) :
    x.yes ↔ x.t ∈ [0, instA x 0, instA x 1, instA x 0 + instA x 1,
      instA x 2, instA x 2 + instA x 0, instA x 2 + instA x 1,
      instA x 2 + instA x 0 + instA x 1] :=
  (instance_yes_iff x).trans (isSum_three_iff2 (instA x) x.t)

theorem smalln2_run2 (x : Instance 2)
    (ρ : Nat → BitVec (wordLength 2 x.bits)) (T : Nat) (hT : 34 ≤ T) :
    run prog2 x ρ T
      = some (decide (x.t ∈ [0, instA x 0, instA x 1, instA x 0 + instA x 1])) := by
  rw [run_eq_exec2]
  obtain ⟨g, hex, hgfit, hg0, hg1, hg2, hg3, hgscr, hgp4⟩ :=
    pro_dispatch223 x ρ (by omega) (by omega)
      (Nat.pow_le_pow_right (by omega)
        (by show 2 * 2 ≤ 4 * (2 + x.bits) + Nat.log2 ((2 + 2) ^ 4 - 1) + 1; omega))
      (inF_fit x _ (by omega) (fun v hv => input_lt_wordLength2 x (by omega) v hv))
      0 T (by omega)
  have hf4 : g 4 = inF x 1 := hgscr 0 (by omega) (by omega)
  have hf5 : g 5 = inF x 2 := hgscr 1 (by omega) (by omega)
  have hf6 : g 6 = inF x 3 := hgscr 2 (by omega) (by omega)
  have hv12 : inF x 1 + inF x 2 < 2 ^ (wordLength 2 x.bits) := by
    have h2s := two_sum_lt_pow_wordLength x (by omega)
    have hr : (List.range 2) = [0, 1] := by decide
    rw [hr] at h2s
    simp only [List.map_cons, List.map_nil, List.sum_cons, List.sum_nil] at h2s
    have ha0 : inF x 1 = instA x 0 := (inF_instA x 1 (by omega) (by omega)).symm
    have ha1 : inF x 2 = instA x 1 := (inF_instA x 2 (by omega) (by omega)).symm
    rw [ha0, ha1]
    omega
  have hfinal := smalln2_exec2 ρ (inF x 1) (inF x 2) (inF x 3) g (T - 13) 0
    (by rw [hg0]) hg1 hg2 hg3 hf4 hf5 hf6 hv12 hgfit (by omega)
  have ht : inF x 3 = x.t := inF_t x
  have ha0 : inF x 1 = instA x 0 := (inF_instA x 1 (by omega) (by omega)).symm
  have ha1 : inF x 2 = instA x 1 := (inF_instA x 2 (by omega) (by omega)).symm
  rw [ht, ha0, ha1] at hfinal
  exact hex.trans hfinal

theorem smalln3_run2 (x : Instance 3)
    (ρ : Nat → BitVec (wordLength 3 x.bits)) (T : Nat) (hT : 48 ≤ T) :
    run prog2 x ρ T
      = some (decide (x.t ∈ [0, instA x 0, instA x 1, instA x 0 + instA x 1,
        instA x 2, instA x 2 + instA x 0, instA x 2 + instA x 1,
        instA x 2 + instA x 0 + instA x 1])) := by
  rw [run_eq_exec2]
  obtain ⟨g, hex, hgfit, hg0, hg1, hg2, hg3, hgscr, hgp4⟩ :=
    pro_dispatch223 x ρ (by omega) (by omega)
      (Nat.pow_le_pow_right (by omega)
        (by show 2 * 3 ≤ 4 * (3 + x.bits) + Nat.log2 ((3 + 2) ^ 4 - 1) + 1; omega))
      (inF_fit x _ (by omega) (fun v hv => input_lt_wordLength2 x (by omega) v hv))
      0 T (by omega)
  have hf4t : g 4 = x.t := by
    rw [hgp4 4 (by omega) (by omega)]
    exact inF_t x
  have hf6 : g 6 = inF x 1 := hgscr 0 (by omega) (by omega)
  have hf7 : g 7 = inF x 2 := hgscr 1 (by omega) (by omega)
  have hf8 : g 8 = inF x 3 := hgscr 2 (by omega) (by omega)
  have h2s := two_sum_lt_pow_wordLength x (by omega)
  have hr : (List.range 3) = [0, 1, 2] := by decide
  rw [hr] at h2s
  simp only [List.map_cons, List.map_nil, List.sum_cons, List.sum_nil,
    Nat.add_assoc] at h2s
  have ha0 : inF x 1 = instA x 0 := (inF_instA x 1 (by omega) (by omega)).symm
  have ha1 : inF x 2 = instA x 1 := (inF_instA x 2 (by omega) (by omega)).symm
  have ha2 : inF x 3 = instA x 2 := (inF_instA x 3 (by omega) (by omega)).symm
  have hv12 : inF x 1 + inF x 2 < 2 ^ (wordLength 3 x.bits) := by
    rw [ha0, ha1]; omega
  have hv31 : inF x 3 + inF x 1 < 2 ^ (wordLength 3 x.bits) := by
    rw [ha2, ha0]; omega
  have hv32 : inF x 3 + inF x 2 < 2 ^ (wordLength 3 x.bits) := by
    rw [ha2, ha1]; omega
  have hv312 : inF x 3 + inF x 1 + inF x 2 < 2 ^ (wordLength 3 x.bits) := by
    rw [ha2, ha0, ha1]; omega
  have hfinal := smalln3_exec2 ρ (inF x 1) (inF x 2) (inF x 3) x.t g (T - 13) 0
    (by rw [hg0]) hg1 hg2 hg3 hf4t hf6 hf7 hf8
    hv12 hv31 hv32 hv312 hgfit (by omega)
  rw [ha0, ha1, ha2] at hfinal
  exact hex.trans hfinal
/-! ## §4. the n ≥ 4 driver: the five-segment composition -/

open scoped Classical in
/-- The composed five-segment budget, spelled out (this is the `≤ T`
hypothesis of `bign_run2` and the exact left side of `budget2_compose`). -/
theorem bign_run2 {n : Nat} (x : Instance n) (hn : 4 ≤ n)
    (ρ : Nat → BitVec (wordLength n x.bits)) (T : Nat)
    (hT : (236 + 6 * (n + 2 - 23)) + (12 + 44 * (2 ^ (n / 2) - 1) + 24 * (n / 2))
      + (6 * 2 ^ (n / 2) + 6)
      + (12 + 44 * (2 ^ (n - n / 2) - 1) + 25 * (n - n / 2))
      + (12 * (2 ^ (n / 2) + 2 ^ (n - n / 2)) + 40) ≤ T) :
    run prog2 x ρ T = some (decide (isSum (instA x) n x.t)) := by
  rw [run_eq_exec2]
  have hpow : 2 ^ (2 * n) ≤ 2 ^ (wordLength n x.bits) :=
    Nat.pow_le_pow_right (by omega)
      (by show 2 * n ≤ 4 * (n + x.bits) + Nat.log2 ((n + 2) ^ 4 - 1) + 1; omega)
  have hif : ∀ q, inF x q < 2 ^ (wordLength n x.bits) :=
    inF_fit x _ (by omega) (fun v hv => input_lt_wordLength2 x (by omega) v hv)
  have hin : ∀ i, i < n → instA x i < 2 ^ (wordLength n x.bits) := by
    intro i hi
    have e := inF_instA x (i + 1) (by omega) (by omega)
    rw [show i + 1 - 1 = i from by omega] at e
    rw [← e]
    exact hif (i + 1)
  -- the wide address envelope shared by canon / phaseA2 / scanB
  have haddrw : ∀ c, c ≤ 3 * n + 27 + 2 ^ (n / 2) + 2 * 2 ^ (n - n / 2)
      → c < 2 ^ (wordLength n x.bits) := haddr2_wide x hn (Nat.le_refl _)
  -- ① prologue: 0 → 86
  obtain ⟨g, c1, hc1, hex1, hgfit, hg1, hg2, hg7, hg8, hgaddr, hgrel, hgtgt⟩ :=
    prologue_exec2 x ρ hn hpow hif 0 T (by omega)
  -- ② phaseA: 86 → 148
  obtain ⟨c2, f1, bd, hc2, hex2, hf1_10, hf1_11, hf1_18, hbd, harr1, hf1_1, hf1_2,
    hf1_7, hf1_8, hf1_9, hf1fit, hf1pres⟩ :=
    phaseA_exec_p2 ρ hn (Nat.le_refl _) g 0 (T - c1) hgfit hg1 hg2 hg7 hg8 hgaddr
      hgrel hin (by omega)
  have hrel1 : ∀ i, 1 ≤ i → i ≤ n → f1 (2 * n + 23 + i) = instA x (i - 1) := by
    intro i hi1 hin'
    have hnA : ¬ AReg n (2 * n + 23 + i) := by
      intro hA
      rcases hA with hA | hA <;> omega
    rw [hf1pres _ hnA]
    exact hgrel i hi1 hin'
  have hft1 : f1 (2 * n + 23 + (n + 1)) = x.t := by
    have hnA : ¬ AReg n (2 * n + 23 + (n + 1)) := by
      intro hA
      rcases hA with hA | hA <;> omega
    rw [hf1pres _ hnA]
    exact hgtgt
  -- ③ canon: 148 → 161
  obtain ⟨c3, f2, hc3, hex3, hf2_22, hf2_11, hf2_9, hf2_7, hf2_8, hf2_1, hf2_2,
    harr2, hrel2, hft2, hf2fit⟩ :=
    canon_exec ρ hn f1 bd 0 (T - c1 - c2) hf1fit hf1_1 hf1_2 hf1_7 hf1_8 hf1_9
      hf1_11 hf1_18 hbd harr1 hrel1 hft1 haddrw (by omega)
  -- ④ phaseA2: 161 → 224
  have hh2 : n / 2 = n / 2 := rfl
  have hm2 : n - n / 2 = n - n / 2 := rfl
  have hin2 : ∀ i, i < n - n / 2 → instA2 x (n / 2) i < 2 ^ (wordLength n x.bits) := by
    intro i hi
    unfold instA2
    exact hin (i + n / 2) (by omega)
  obtain ⟨c4, f3, bd2, hc4, hex4, hf3_10, hf3_11, hf3_18, hf3bd, harr3, hf3_1,
    hf3_2, hf3_4, hf3_7, hf3_8, hf3_9, hf3fit, hf3pres, hf3_5, hf3_22, hf3strip⟩ :=
    phaseA2_exec ρ hn (Nat.le_refl _) f2 0 (T - c1 - c2 - c3) (n / 2) (n - n / 2)
      (2 ^ (n / 2)) (2 ^ (n - n / 2)) (3 * n + 25 + 2 ^ (n / 2) + 1)
      (3 * n + 25 + 2 ^ (n / 2) + 1 + 2 ^ (n - n / 2) + 1) (3 * n + 25)
      hf2fit hf2_1 hf2_2 hf2_7 hf2_8 hf2_9 rfl rfl hf2_11 rfl hf2_22 rfl
      rfl rfl rfl hpow harr2 haddrw hrel2 hin2 (by omega)
  -- scanB's three carried facts
  have hrel3 : ∀ i, 1 ≤ i → i ≤ n → f3 (2 * n + 23 + i) = instA x (i - 1) := by
    intro i hi1 hin'
    have hnA : ¬ AReg2 n (2 * n + 23 + i) := by
      intro hA
      rcases hA with hA | ⟨h1, -⟩ <;> omega
    rw [hf3pres _ hnA]
    exact hrel2 i hi1 hin'
  have hft3 : f3 (2 * n + 23 + (n + 1)) = x.t := by
    have hnA : ¬ AReg2 n (2 * n + 23 + (n + 1)) := by
      intro hA
      rcases hA with hA | ⟨h1, -⟩ <;> omega
    rw [hf3pres _ hnA]
    exact hft2
  have hbd3 : bd2 = 3 * n + 26 + 2 ^ (n / 2) ∨
      bd2 = 3 * n + 27 + 2 ^ (n / 2) + 2 ^ (n - n / 2) := by
    rcases hf3bd with h | h
    · exact Or.inl (by rw [h]; omega)
    · exact Or.inr (by rw [h]; omega)
  -- ⑤ scanB: 224 → verdict
  obtain ⟨c5, v, hc5, hex5, hiff⟩ :=
    scanB_exec ρ hn (Nat.le_refl _) f3 (n / 2) (n - n / 2) bd2 0
      (T - c1 - c2 - c3 - c4) rfl rfl hf3fit hf3_1 hf3_2 hf3_5 hf3_7 hf3_8
      hf3_11 hf3_18 (by rw [hf3_22, hf2_22]) hbd3 (by rw [hf3strip, harr2]) harr3 hft3
      haddrw (by omega)
  -- the chain, and the verdict's shape
  have hchain : exec prog2 ρ T 0 0 (memOf (wordLength n x.bits) (inF x))
      = some v := by
    have e1 := hex1
    have e2 := hex2
    have e3 := hex3
    have e4 := hex4
    have e5 := hex5
    rw [show T - c1 - c2 - c3 - c4 = T - (c1 + c2 + c3 + c4) from by omega] at e4 e5
    rw [show T - c1 - c2 - c3 = T - (c1 + c2 + c3) from by omega] at e3 e4
    rw [show T - c1 - c2 = T - (c1 + c2) from by omega] at e2 e3
    rw [e1, e2, e3, e4]
    exact e5
  have hv : v = decide (isSum (instA x) n x.t) := by
    cases v with
    | true => rw [decide_eq_true_iff.mpr (hiff.mp rfl)]
    | false =>
      have hno : ¬ isSum (instA x) n x.t := fun h => Bool.false_eq_true.mp (hiff.mpr h)
      rw [decide_eq_false_iff_not.mpr hno]
  rw [hv] at hchain
  exact hchain

/-! ## §5. halting -/

/-- The program halts on every input within the flat horizon. -/
theorem prog2_halts : ∀ (n : Nat) (x : Instance n), 2 ≤ n →
    ∀ ρ, (run prog2 x ρ (hzn n)).isSome := by
  intro n x hn ρ
  rcases Nat.lt_or_ge n 4 with hsmall | hbig
  · rcases (show n = 2 ∨ n = 3 by omega) with rfl | rfl
    · rw [smalln2_run2 x ρ _ (by decide)]
      simp
    · rw [smalln3_run2 x ρ _ (by decide)]
      simp
  · rw [bign_run2 x hbig ρ _ (budget2_compose n hbig)]
    simp

/-! ## §6. THE FILING THEOREM -/

open scoped Classical in
/-- **THE SUMMIT**: `prog2` solves subset-sum in `O(2^(n/2))`. -/
theorem Race.bound : SolvedInTime (1 / 2 : Rat) := by
  refine ⟨prog2, ?_, ?_⟩
  · intro n x hn
    rcases Nat.lt_or_ge n 4 with hsmall | hbig
    · -- n = 2, 3: the unrolled verdict
      rcases (show n = 2 ∨ n = 3 by omega) with rfl | rfl
      · refine correct_of_det (hzn 2) (prog2_halts 2 x (by omega))
          (decide (x.t ∈ [0, instA x 0, instA x 1, instA x 0 + instA x 1]))
          (fun ρ => smalln2_run2 x ρ (hzn 2) (by decide)) ?_ ?_
        · intro hyes
          exact decide_eq_true_iff.mpr ((verdict2_iff2 x).mp hyes)
        · intro hno
          by_cases hmem : x.t ∈ [0, instA x 0, instA x 1, instA x 0 + instA x 1]
          · exact absurd ((verdict2_iff2 x).mpr hmem) hno
          · simp [hmem]
      · refine correct_of_det (hzn 3) (prog2_halts 3 x (by omega))
          (decide (x.t ∈ [0, instA x 0, instA x 1, instA x 0 + instA x 1,
            instA x 2, instA x 2 + instA x 0, instA x 2 + instA x 1,
            instA x 2 + instA x 0 + instA x 1]))
          (fun ρ => smalln3_run2 x ρ (hzn 3) (by decide)) ?_ ?_
        · intro hyes
          exact decide_eq_true_iff.mpr ((verdict3_iff2 x).mp hyes)
        · intro hno
          by_cases hmem : x.t ∈ [0, instA x 0, instA x 1, instA x 0 + instA x 1,
              instA x 2, instA x 2 + instA x 0, instA x 2 + instA x 1,
              instA x 2 + instA x 0 + instA x 1]
          · exact absurd ((verdict3_iff2 x).mpr hmem) hno
          · simp [hmem]
    · -- n ≥ 4: the MITM pipeline
      refine correct_of_det (hzn n) (prog2_halts n x hn)
        (decide (isSum (instA x) n x.t))
        (fun ρ => bign_run2 x hbig ρ _ (budget2_compose n hbig)) ?_ ?_
      · intro hyes
        exact decide_eq_true_iff.mpr ((instance_yes_iff x).mp hyes)
      · intro hno
        by_cases hmem : isSum (instA x) n x.t
        · exact absurd ((instance_yes_iff x).mpr hmem) hno
        · have hd : ¬ (decide (isSum (instA x) n x.t) = true) :=
            fun ht => hmem (decide_eq_true_iff.mp ht)
          simp only [Bool.not_eq_true] at hd
          exact hd
  · intro _c
    exact ⟨hzn, hzn_bigO, fun n x _hn _hb ρ => prog2_halts n x _hn ρ⟩

/-- The filed bound is the literal `1/2`: `Rat` normalizes `1/2` to itself, so
this is the `SolvedInTime (1/2)` the board asks for. -/
theorem Race.bound_half : SolvedInTime (1 / 2 : Rat) := Race.bound

end SubsetSum.MITM
