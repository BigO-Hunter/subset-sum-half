import Submission.Prog2SmallN
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

end SubsetSum.MITM
