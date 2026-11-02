import Submission.Prog2PhaseA2
set_option autoImplicit true

/-!
# scanB: pcs 224 → 243, the two-pointer sweep (R2125607749 Lane 2, last segment)

`i` walks up `S₁` (sorted first-half sums, base `[22] = ARR1 = 3n+25`), `j`
walks down `S₂` (sorted second-half sums, base `[18] = bd`); `s = S₁[i]+S₂[j]`
is compared with `t`:

* `s < t` → `i++`  (every `b ≤ j` has `S₂[b] ≤ S₂[j]`, so row `i` is dead),
* `s > t` → `j--`  (every `a ≥ i` has `S₁[a] ≥ S₁[i]`, so column `j` is dead),
* `s = t` → accept.

**Invariant.**  `ScanInv` says: every pair OUTSIDE the live rectangle
`i ≤ a < |S₁|`, `b ≤ j` misses `t`.  `scanInv_less`/`scanInv_gtr` extend it
across the two updates (monotonicity of the sorted arrays is
`pairwise_getD_mono`, `Prog2Layout`), and the two reject arms discharge it to
"no witness at all":

* `i` exhausted — every `a < |S₁|` satisfies `a < i`, so `ScanInv` kills all
  pairs;
* `j = 0` with `s > t` — `S₂[0] = 0` (`halfSums_head_zero`), so every `a ≥ i`
  already overshoots `t` alone, and `ScanInv` kills the rest.

**No subtraction.**  `S₁[i] + S₂[j] ≤ Σa < 2^w` is `halfSumsSumLe`, so the
`blt` word compare IS the ℕ compare; the wrapped-complement machinery of the
3/4 lane's Phase B is unnecessary.

**Cost.**  A round trip is ≤ 10 instructions and strictly decreases
`(|S₁| − i) + j`; the closing arm is ≤ 9.  So the loop is
`12·((|S₁| − i) + j) + 12`, the setup (224–228) adds 5, and the segment costs
`12·(2^h + 2^m) + 40`.
-/

namespace SubsetSum.MITM

open BigOSpeedrun.SubsetSum SubsetSum.MITM.Spec
open SubsetSum.MITM.P2M

/-! ## §0. the decision state after the five-instruction head (229–233)

Registers touched: `20` (address), `15` (`S₁[i]`), `21` (address), `16`
(`S₂[j]`), `14` (`s`).  Both array bases are `≥ 33`, so every array cell is
inherited untouched — that is `scanSt_arr`. -/

/-- The state at the first comparison (pc 234), from the state at pc 229. -/
def scanSt (f : Nat → Nat) (i j bd A1 : Nat) : Nat → Nat :=
  up (up (up (up (up f 20 (A1 + i)) 15 (f (A1 + i))) 21 (bd + j)) 16 (f (bd + j)))
    14 (f (A1 + i) + f (bd + j))

theorem scanSt_14 (f : Nat → Nat) (i j bd A1 : Nat) :
    scanSt f i j bd A1 14 = f (A1 + i) + f (bd + j) := by
  rw [scanSt]
  exact up_eq _ _ _

/-- Cells outside the five write registers are inherited. -/
theorem scanSt_out (f : Nat → Nat) (i j bd A1 : Nat) {c : Nat}
    (h14 : c ≠ 14) (h16 : c ≠ 16) (h21 : c ≠ 21) (h15 : c ≠ 15) (h20 : c ≠ 20) :
    scanSt f i j bd A1 c = f c := by
  rw [scanSt, up_ne h14, up_ne h16, up_ne h21, up_ne h15, up_ne h20]

theorem scanSt_12 (f : Nat → Nat) (i j bd A1 : Nat) :
    scanSt f i j bd A1 12 = f 12 :=
  scanSt_out f i j bd A1 (by omega) (by omega) (by omega) (by omega) (by omega)

theorem scanSt_13 (f : Nat → Nat) (i j bd A1 : Nat) :
    scanSt f i j bd A1 13 = f 13 :=
  scanSt_out f i j bd A1 (by omega) (by omega) (by omega) (by omega) (by omega)

theorem scanSt_17 (f : Nat → Nat) (i j bd A1 : Nat) :
    scanSt f i j bd A1 17 = f 17 :=
  scanSt_out f i j bd A1 (by omega) (by omega) (by omega) (by omega) (by omega)

theorem scanSt_18 (f : Nat → Nat) (i j bd A1 : Nat) :
    scanSt f i j bd A1 18 = f 18 :=
  scanSt_out f i j bd A1 (by omega) (by omega) (by omega) (by omega) (by omega)

theorem scanSt_5 (f : Nat → Nat) (i j bd A1 : Nat) :
    scanSt f i j bd A1 5 = f 5 :=
  scanSt_out f i j bd A1 (by omega) (by omega) (by omega) (by omega) (by omega)

theorem scanSt_22 (f : Nat → Nat) (i j bd A1 : Nat) :
    scanSt f i j bd A1 22 = f 22 :=
  scanSt_out f i j bd A1 (by omega) (by omega) (by omega) (by omega) (by omega)

theorem scanSt_1 (f : Nat → Nat) (i j bd A1 : Nat) :
    scanSt f i j bd A1 1 = f 1 :=
  scanSt_out f i j bd A1 (by omega) (by omega) (by omega) (by omega) (by omega)

theorem scanSt_2 (f : Nat → Nat) (i j bd A1 : Nat) :
    scanSt f i j bd A1 2 = f 2 :=
  scanSt_out f i j bd A1 (by omega) (by omega) (by omega) (by omega) (by omega)

/-- An array cell (both bases are `≥ 23`) is inherited. -/
theorem scanSt_arr (f : Nat → Nat) (i j bd A1 b q : Nat) (hb : 23 ≤ b) :
    scanSt f i j bd A1 (b + q) = f (b + q) :=
  scanSt_out f i j bd A1 (by omega) (by omega) (by omega) (by omega) (by omega)

/-- The decision state fits whenever its five written values do. -/
theorem scanSt_fit {w : Nat} (f : Nat → Nat) (i j bd A1 : Nat)
    (hf : ∀ q, f q < 2 ^ w) (h1 : A1 + i < 2 ^ w) (h2 : f (A1 + i) < 2 ^ w)
    (h3 : bd + j < 2 ^ w) (h4 : f (bd + j) < 2 ^ w)
    (h5 : f (A1 + i) + f (bd + j) < 2 ^ w) :
    ∀ q, scanSt f i j bd A1 q < 2 ^ w := by
  rw [scanSt]
  exact up_fit (up_fit (up_fit (up_fit (up_fit hf h1) h2) h3) h4) h5

/-! ## §1. the five-instruction head (229–233) -/

theorem scanBody_exec {w : Nat} (ρ : Nat → BitVec w) (f : Nat → Nat) (i j bd A1 S r : Nat)
    (hf22 : f 22 = A1) (hf12 : f 12 = i) (hf13 : f 13 = j) (hf18 : f 18 = bd)
    (hf1 : f 1 = 1) (hfit : ∀ q, f q < 2 ^ w)
    (hA1 : 23 ≤ A1) (hbd : 23 ≤ bd)
    (hA1i : A1 + i < 2 ^ w) (hbdj : bd + j < 2 ^ w)
    (hsumw : f (A1 + i) + f (bd + j) < 2 ^ w) (hS : 5 ≤ S) :
    exec prog2 ρ S 229 r (memOf w f)
      = exec prog2 ρ (S - 5) 234 r (memOf w (scanSt f i j bd A1)) := by
  have hv1w : f (A1 + i) < 2 ^ w := hfit _
  have hv2w : f (bd + j) < 2 ^ w := hfit _
  have g1f : ∀ q, (up f 20 (A1 + i)) q < 2 ^ w := up_fit hfit hA1i
  have g2f : ∀ q, (up (up f 20 (A1 + i)) 15 (f (A1 + i))) q < 2 ^ w := up_fit g1f hv1w
  have g3f : ∀ q,
      (up (up (up f 20 (A1 + i)) 15 (f (A1 + i))) 21 (bd + j)) q < 2 ^ w := up_fit g2f hbdj
  rw [scanSt,
    exec_add_step (by omega)
      (show prog2.getD 229 Instr.reject = Instr.add 20 22 12 by rfl),
    show f 22 + f 12 = A1 + i from by rw [hf22, hf12],
    exec_load_step (by omega)
      (show prog2.getD 230 Instr.reject = Instr.load 15 20 by rfl) g1f,
    show (up f 20 (A1 + i)) ((up f 20 (A1 + i)) 20) = f (A1 + i) from by
      rw [up_eq, up_ne (show A1 + i ≠ 20 by omega)],
    exec_add_step (by omega)
      (show prog2.getD 231 Instr.reject = Instr.add 21 18 13 by rfl),
    show (up (up f 20 (A1 + i)) 15 (f (A1 + i))) 18
        + (up (up f 20 (A1 + i)) 15 (f (A1 + i))) 13 = bd + j from by
      rw [up_ne (show (18:Nat) ≠ 15 by omega), up_ne (show (18:Nat) ≠ 20 by omega), hf18,
        up_ne (show (13:Nat) ≠ 15 by omega), up_ne (show (13:Nat) ≠ 20 by omega), hf13],
    exec_load_step (by omega)
      (show prog2.getD 232 Instr.reject = Instr.load 16 21 by rfl) g3f,
    show (up (up (up f 20 (A1 + i)) 15 (f (A1 + i))) 21 (bd + j))
        ((up (up (up f 20 (A1 + i)) 15 (f (A1 + i))) 21 (bd + j)) 21)
      = f (bd + j) from by
      rw [up_eq, up_ne (show bd + j ≠ 21 by omega),
        up_ne (show bd + j ≠ 15 by omega), up_ne (show bd + j ≠ 20 by omega)],
    exec_add_step (by omega)
      (show prog2.getD 233 Instr.reject = Instr.add 14 15 16 by rfl),
    show (up (up (up (up f 20 (A1 + i)) 15 (f (A1 + i))) 21 (bd + j)) 16 (f (bd + j))) 15
        + (up (up (up (up f 20 (A1 + i)) 15 (f (A1 + i))) 21 (bd + j)) 16 (f (bd + j))) 16
      = f (A1 + i) + f (bd + j) from by
      rw [up_ne (show (15:Nat) ≠ 16 by omega), up_ne (show (15:Nat) ≠ 21 by omega), up_eq,
        up_eq]]
  simp only [Nat.sub_sub, Nat.reduceAdd]

/-! ## §2. the two-pointer invariant (pure list arithmetic) -/

/-- Every pair outside the live rectangle `i ≤ a < |S₁|`, `b ≤ j` misses `t`. -/
def ScanInv (SL TL : List Nat) (t i j : Nat) : Prop :=
  ∀ a b, a < SL.length → b < TL.length → (a < i ∨ j < b) →
    SL.getD a 0 + TL.getD b 0 ≠ t

/-- `s < t` at `(i,j)` retires row `i`. -/
theorem scanInv_less {SL TL : List Nat} {t i j : Nat}
    (hInv : ScanInv SL TL t i j)
    (hi : i < SL.length) (hj : j < TL.length)
    (hmonoT : ∀ b, b ≤ j → TL.getD b 0 ≤ TL.getD j 0)
    (hs : SL.getD i 0 + TL.getD j 0 < t) :
    ScanInv SL TL t (i + 1) j := by
  intro a b ha hb hd
  rcases hd with h | h
  · by_cases hai : a < i
    · exact hInv a b ha hb (Or.inl hai)
    · have hai' : a = i := by omega
      subst hai'
      by_cases hbj : j < b
      · exact hInv a b ha hb (Or.inr hbj)
      · have hble : b ≤ j := by omega
        have := hmonoT b hble
        omega
  · exact hInv a b ha hb (Or.inr h)

/-- `s > t` at `(i,j)` retires column `j`. -/
theorem scanInv_gtr {SL TL : List Nat} {t i j : Nat}
    (hInv : ScanInv SL TL t i j)
    (hi : i < SL.length) (hj : 0 < j) (hjM : j < TL.length)
    (hmonoS : ∀ a, i ≤ a → a < SL.length → SL.getD i 0 ≤ SL.getD a 0)
    (hs : t < SL.getD i 0 + TL.getD j 0) :
    ScanInv SL TL t i (j - 1) := by
  intro a b ha hb hd
  rcases hd with h | h
  · exact hInv a b ha hb (Or.inl h)
  · by_cases hai : a < i
    · exact hInv a b ha hb (Or.inl hai)
    · have hia : i ≤ a := by omega
      by_cases hbj : j < b
      · exact hInv a b ha hb (Or.inr hbj)
      · have hbe : b = j := by omega
        have h1 : SL.getD i 0 ≤ SL.getD a 0 := hmonoS a hia ha
        rw [hbe]
        omega

/-- An accepted pair is a witness. -/
theorem witness_of_eq {SL TL : List Nat} {t i j : Nat}
    (hi : i < SL.length) (hj : j < TL.length)
    (he : SL.getD i 0 + TL.getD j 0 = t) :
    ∃ a b, a < SL.length ∧ b < TL.length ∧ SL.getD a 0 + TL.getD b 0 = t :=
  ⟨i, j, hi, hj, he⟩

/-- `i` exhausted: no witness survives. -/
theorem no_witness_left {SL TL : List Nat} {t i j : Nat}
    (hInv : ScanInv SL TL t i j) (hlen : SL.length ≤ i) :
    ¬ ∃ a b, a < SL.length ∧ b < TL.length ∧ SL.getD a 0 + TL.getD b 0 = t := by
  rintro ⟨a, b, ha, hb, he⟩
  exact hInv a b ha hb (Or.inl (by omega)) he

/-- `j = 0` with `s > t`: no witness survives (`S₂[0] = 0`). -/
theorem no_witness_j0 {SL TL : List Nat} {t i : Nat}
    (hInv : ScanInv SL TL t i 0) (_hiM : i < SL.length)
    (hmonoS : ∀ a, i ≤ a → a < SL.length → SL.getD i 0 ≤ SL.getD a 0)
    (hmonoT : ∀ b, b < TL.length → TL.getD 0 0 ≤ TL.getD b 0)
    (hgt : t < SL.getD i 0 + TL.getD 0 0) :
    ¬ ∃ a b, a < SL.length ∧ b < TL.length ∧ SL.getD a 0 + TL.getD b 0 = t := by
  rintro ⟨a, b, ha, hb, he⟩
  by_cases hai : a < i
  · exact hInv a b ha hb (Or.inl hai) he
  · have h1 := hmonoS a (by omega) ha
    have h2 := hmonoT b hb
    omega

/-! ## §3. the sweep loop (pc 229 → verdict) -/

theorem scanLoop_exec {w : Nat} (ρ : Nat → BitVec w) (SL TL : List Nat) (t : Nat) :
    ∀ F (f : Nat → Nat) (i j bd A1 S r : Nat),
    List.Pairwise (· ≤ ·) SL → List.Pairwise (· ≤ ·) TL →
    ScanInv SL TL t i j → i < SL.length → j < TL.length →
    f 12 = i → f 13 = j → f 17 = t → f 5 = SL.length → f 18 = bd → f 22 = A1 →
    f 1 = 1 → f 2 = 0 →
    (∀ q, q < SL.length → f (A1 + q) = SL.getD q 0) →
    (∀ q, q < TL.length → f (bd + q) = TL.getD q 0) →
    (∀ q, f q < 2 ^ w) → 23 ≤ A1 → 23 ≤ bd →
    A1 + SL.length < 2 ^ w → bd + TL.length < 2 ^ w →
    (∀ a b, a < SL.length → b < TL.length → SL.getD a 0 + TL.getD b 0 < 2 ^ w) →
    (SL.length - i) + j ≤ F →
    12 * ((SL.length - i) + j) + 12 ≤ S →
    ∃ c v, c ≤ 12 * ((SL.length - i) + j) + 12 ∧
      exec prog2 ρ S 229 r (memOf w f) = some v ∧
      (v = true ↔ ∃ a b, a < SL.length ∧ b < TL.length ∧ SL.getD a 0 + TL.getD b 0 = t) := by
  intro F
  induction F with
  | zero =>
    intro f i j bd A1 S r hmonoS hmonoT hInv hi hjM hf12 hf13 hf17 hf5 hf18 hf22 hf1 hf2
      harrS harrT hfit hA1 hbd hA1w hbdw hnowrap hF hS
    omega
  | succ F ih =>
    intro f i j bd A1 S r hmonoS hmonoT hInv hi hjM hf12 hf13 hf17 hf5 hf18 hf22 hf1 hf2
      harrS harrT hfit hA1 hbd hA1w hbdw hnowrap hF hS
    have hA1i : A1 + i < 2 ^ w := by omega
    have hbdj : bd + j < 2 ^ w := by omega
    have hv1 : f (A1 + i) = SL.getD i 0 := harrS i hi
    have hv2 : f (bd + j) = TL.getD j 0 := harrT j hjM
    have hsumw : f (A1 + i) + f (bd + j) < 2 ^ w := by
      rw [hv1, hv2]
      exact hnowrap i j hi hjM
    have hbody := scanBody_exec ρ f i j bd A1 S r hf22 hf12 hf13 hf18 hf1 hfit hA1 hbd
      hA1i hbdj hsumw (by omega)
    have hDfit0 := scanSt_fit f i j bd A1 hfit hA1i (hfit _) hbdj (hfit _) hsumw
    have hD14 : scanSt f i j bd A1 14 = f (A1 + i) + f (bd + j) := scanSt_14 f i j bd A1
    have hD17 : scanSt f i j bd A1 17 = t := by rw [scanSt_17, hf17]
    have hD12 : scanSt f i j bd A1 12 = i := by rw [scanSt_12, hf12]
    have hD13 : scanSt f i j bd A1 13 = j := by rw [scanSt_13, hf13]
    have hD5 : scanSt f i j bd A1 5 = SL.length := by rw [scanSt_5, hf5]
    have hD18 : scanSt f i j bd A1 18 = bd := by rw [scanSt_18, hf18]
    have hD22 : scanSt f i j bd A1 22 = A1 := by rw [scanSt_22, hf22]
    have hD1 : scanSt f i j bd A1 1 = 1 := by rw [scanSt_1, hf1]
    have hD2 : scanSt f i j bd A1 2 = 0 := by rw [scanSt_2, hf2]
    have hDarrS : ∀ q, q < SL.length → scanSt f i j bd A1 (A1 + q) = SL.getD q 0 :=
      fun q hq => (scanSt_arr f i j bd A1 A1 q hA1).trans (harrS q hq)
    have hDarrT : ∀ q, q < TL.length → scanSt f i j bd A1 (bd + q) = TL.getD q 0 :=
      fun q hq => (scanSt_arr f i j bd A1 bd q hbd).trans (harrT q hq)
    have hmonoTj : ∀ b, b ≤ j → TL.getD b 0 ≤ TL.getD j 0 :=
      fun b hb => pairwise_getD_mono hmonoT b j hb hjM
    have hmonoSi : ∀ a, i ≤ a → a < SL.length → SL.getD i 0 ≤ SL.getD a 0 :=
      fun a ha hb => pairwise_getD_mono hmonoS i a ha hb
    have hmonoT0 : ∀ b, b < TL.length → TL.getD 0 0 ≤ TL.getD b 0 :=
      fun b hb => pairwise_getD_mono hmonoT 0 b (Nat.zero_le _) hb
    rcases Nat.lt_trichotomy (f (A1 + i) + f (bd + j)) t with hlt | heq | hgt
    · -- s < t : row i dead, i++
      have hstep1 : exec prog2 ρ (S - 5) 234 r (memOf w (scanSt f i j bd A1))
          = exec prog2 ρ (S - 5 - 1) 237 r (memOf w (scanSt f i j bd A1)) := by
        rw [exec_blt_lt_step (by omega)
          (show prog2.getD 234 Instr.reject = Instr.blt 14 17 237 by rfl) hDfit0
          (by rw [hD14, hD17]; exact hlt)]
      have hstep2 : exec prog2 ρ (S - 5 - 1) 237 r (memOf w (scanSt f i j bd A1))
          = exec prog2 ρ (S - 5 - 1 - 1) 238 r (memOf w (up (scanSt f i j bd A1) 12 (i + 1))) := by
        rw [exec_add_step (by omega)
            (show prog2.getD 237 Instr.reject = Instr.add 12 12 1 by rfl),
          show scanSt f i j bd A1 12 + scanSt f i j bd A1 1 = i + 1 from by rw [hD12, hD1]]
      have hi1w : i + 1 < 2 ^ w := by omega
      have hfitU : ∀ q, (up (scanSt f i j bd A1) 12 (i + 1)) q < 2 ^ w :=
        up_fit hDfit0 hi1w
      have hInv1 : ScanInv SL TL t (i + 1) j :=
        scanInv_less hInv hi hjM hmonoTj (by rw [← hv1, ← hv2]; exact hlt)
      rcases Nat.lt_or_ge (i + 1) SL.length with hlt2 | hge2
      · -- rows remain: back to the sweep head
        have hstep3 : exec prog2 ρ (S - 5 - 1 - 1) 238 r (memOf w (up (scanSt f i j bd A1) 12 (i + 1)))
            = exec prog2 ρ (S - 5 - 1 - 1 - 1) 229 r
                (memOf w (up (scanSt f i j bd A1) 12 (i + 1))) := by
          rw [exec_blt_lt_step (by omega)
            (show prog2.getD 238 Instr.reject = Instr.blt 12 5 229 by rfl) hfitU
            (by rw [up_eq, up_ne (show (5:Nat) ≠ 12 by omega), hD5]; exact hlt2)]
        obtain ⟨c2, v2, hc2, hex2, hiff2⟩ :=
          ih (up (scanSt f i j bd A1) 12 (i + 1)) (i + 1) j bd A1 (S - 8) r hmonoS hmonoT
            hInv1 hlt2 hjM
            (by rw [up_eq])
            (by rw [up_ne (show (13:Nat) ≠ 12 by omega), hD13])
            (by rw [up_ne (show (17:Nat) ≠ 12 by omega), hD17])
            (by rw [up_ne (show (5:Nat) ≠ 12 by omega), hD5])
            (by rw [up_ne (show (18:Nat) ≠ 12 by omega), hD18])
            (by rw [up_ne (show (22:Nat) ≠ 12 by omega), hD22])
            (by rw [up_ne (show (1:Nat) ≠ 12 by omega), hD1])
            (by rw [up_ne (show (2:Nat) ≠ 12 by omega), hD2])
            (fun q hq => (up_ne (show A1 + q ≠ 12 by omega)).trans (hDarrS q hq))
            (fun q hq => (up_ne (show bd + q ≠ 12 by omega)).trans (hDarrT q hq))
            hfitU hA1 hbd hA1w hbdw hnowrap
            (by omega) (by omega)
        refine ⟨8 + c2, v2, by omega, ?_, hiff2⟩
        rw [hbody, hstep1, hstep2, hstep3]
        simp only [Nat.sub_sub, Nat.reduceAdd]
        exact hex2
      · -- S₁ exhausted: reject
        have hstep3 : exec prog2 ρ (S - 5 - 1 - 1) 238 r (memOf w (up (scanSt f i j bd A1) 12 (i + 1)))
            = exec prog2 ρ (S - 5 - 1 - 1 - 1) 239 r
                (memOf w (up (scanSt f i j bd A1) 12 (i + 1))) := by
          rw [exec_blt_ge_step (by omega)
            (show prog2.getD 238 Instr.reject = Instr.blt 12 5 229 by rfl) hfitU
            (by rw [up_eq, up_ne (show (5:Nat) ≠ 12 by omega), hD5]; omega)]
        have hstep4 : exec prog2 ρ (S - 5 - 1 - 1 - 1) 239 r
            (memOf w (up (scanSt f i j bd A1) 12 (i + 1))) = some false :=
          exec_reject_step (by omega)
            (show prog2.getD 239 Instr.reject = Instr.reject by rfl)
        refine ⟨9, false, by omega, ?_, ?_⟩
        · rw [hbody, hstep1, hstep2, hstep3, hstep4]
        · refine ⟨fun hv => absurd hv (by simp), fun hW => absurd hW ?_⟩
          exact no_witness_left hInv1 hge2
    · -- s = t : accept
      have hstep1 : exec prog2 ρ (S - 5) 234 r (memOf w (scanSt f i j bd A1))
          = exec prog2 ρ (S - 5 - 1) 235 r (memOf w (scanSt f i j bd A1)) := by
        rw [exec_blt_ge_step (by omega)
          (show prog2.getD 234 Instr.reject = Instr.blt 14 17 237 by rfl) hDfit0
          (by rw [hD14, hD17]; omega)]
      have hstep2 : exec prog2 ρ (S - 5 - 1) 235 r (memOf w (scanSt f i j bd A1))
          = exec prog2 ρ (S - 5 - 1 - 1) 236 r (memOf w (scanSt f i j bd A1)) := by
        rw [exec_blt_ge_step (by omega)
          (show prog2.getD 235 Instr.reject = Instr.blt 17 14 240 by rfl) hDfit0
          (by rw [hD14, hD17]; omega)]
      have hstep3 : exec prog2 ρ (S - 5 - 1 - 1) 236 r (memOf w (scanSt f i j bd A1))
          = some true :=
        exec_accept_step (by omega)
          (show prog2.getD 236 Instr.reject = Instr.accept by rfl)
      have hwit : ∃ a b, a < SL.length ∧ b < TL.length ∧ SL.getD a 0 + TL.getD b 0 = t := by
        refine witness_of_eq hi hjM ?_
        rw [← hv1, ← hv2]
        exact heq
      refine ⟨8, true, by omega, ?_, ?_⟩
      · rw [hbody, hstep1, hstep2, hstep3]
      · exact ⟨fun _ => hwit, fun _ => rfl⟩
    · -- s > t : column j dead, j--
      have hstep1 : exec prog2 ρ (S - 5) 234 r (memOf w (scanSt f i j bd A1))
          = exec prog2 ρ (S - 5 - 1) 235 r (memOf w (scanSt f i j bd A1)) := by
        rw [exec_blt_ge_step (by omega)
          (show prog2.getD 234 Instr.reject = Instr.blt 14 17 237 by rfl) hDfit0
          (by rw [hD14, hD17]; omega)]
      have hstep2 : exec prog2 ρ (S - 5 - 1) 235 r (memOf w (scanSt f i j bd A1))
          = exec prog2 ρ (S - 5 - 1 - 1) 240 r (memOf w (scanSt f i j bd A1)) := by
        rw [exec_blt_lt_step (by omega)
          (show prog2.getD 235 Instr.reject = Instr.blt 17 14 240 by rfl) hDfit0
          (by rw [hD14, hD17]; exact hgt)]
      rcases Nat.eq_or_lt_of_le (Nat.zero_le j) with hjz | hjpos
      · -- j = 0: reject
        have hj0 : j = 0 := hjz.symm
        have hstep3 : exec prog2 ρ (S - 5 - 1 - 1) 240 r (memOf w (scanSt f i j bd A1))
            = exec prog2 ρ (S - 5 - 1 - 1 - 1) 241 r (memOf w (scanSt f i j bd A1)) := by
          rw [exec_blt_ge_step (by omega)
            (show prog2.getD 240 Instr.reject = Instr.blt 2 13 242 by rfl) hDfit0
            (by rw [hD2, hD13, hj0]; omega)]
        have hstep4 : exec prog2 ρ (S - 5 - 1 - 1 - 1) 241 r
            (memOf w (scanSt f i j bd A1)) = some false :=
          exec_reject_step (by omega)
            (show prog2.getD 241 Instr.reject = Instr.reject by rfl)
        refine ⟨9, false, by omega, ?_, ?_⟩
        · rw [hbody, hstep1, hstep2, hstep3, hstep4]
        · refine ⟨fun hv => absurd hv (by simp), fun hW => absurd hW ?_⟩
          have hTL0 : TL.getD 0 0 = f (bd + 0) := by
            have h := hv2
            rw [hj0] at h
            exact h.symm
          have hgt' : t < SL.getD i 0 + TL.getD 0 0 := by
            rw [hTL0, ← hv1]
            rw [hj0] at hgt
            exact hgt
          exact no_witness_j0 (hj0 ▸ hInv) hi hmonoSi hmonoT0 hgt'
      · -- 0 < j : back to the sweep head with j−1
        have hstep3 : exec prog2 ρ (S - 5 - 1 - 1) 240 r (memOf w (scanSt f i j bd A1))
            = exec prog2 ρ (S - 5 - 1 - 1 - 1) 242 r (memOf w (scanSt f i j bd A1)) := by
          rw [exec_blt_lt_step (by omega)
            (show prog2.getD 240 Instr.reject = Instr.blt 2 13 242 by rfl) hDfit0
            (by rw [hD2, hD13]; exact hjpos)]
        have hstep4 : exec prog2 ρ (S - 5 - 1 - 1 - 1) 242 r (memOf w (scanSt f i j bd A1))
            = exec prog2 ρ (S - 5 - 1 - 1 - 1 - 1) 243 r
                (memOf w (up (scanSt f i j bd A1) 13 (j - 1))) := by
          rw [exec_sub_step (by omega)
              (show prog2.getD 242 Instr.reject = Instr.sub 13 13 1 by rfl) hDfit0
              (by rw [hD1, hD13]; omega),
            show scanSt f i j bd A1 13 - scanSt f i j bd A1 1 = j - 1 from by
              rw [hD13, hD1]]
        have hfitD : ∀ q, (up (scanSt f i j bd A1) 13 (j - 1)) q < 2 ^ w :=
          up_fit hDfit0 (by omega)
        have hstep5 : exec prog2 ρ (S - 5 - 1 - 1 - 1 - 1) 243 r
            (memOf w (up (scanSt f i j bd A1) 13 (j - 1)))
            = exec prog2 ρ (S - 5 - 1 - 1 - 1 - 1 - 1) 229 r
                (memOf w (up (scanSt f i j bd A1) 13 (j - 1))) := by
          rw [exec_blt_lt_step (by omega)
            (show prog2.getD 243 Instr.reject = Instr.blt 2 1 229 by rfl) hfitD
            (by rw [up_ne (show (2:Nat) ≠ 13 by omega), up_ne (show (1:Nat) ≠ 13 by omega),
              hD2, hD1]; omega)]
        obtain ⟨c2, v2, hc2, hex2, hiff2⟩ :=
          ih (up (scanSt f i j bd A1) 13 (j - 1)) i (j - 1) bd A1 (S - 10) r hmonoS hmonoT
            (scanInv_gtr hInv hi hjpos hjM hmonoSi (by rw [← hv1, ← hv2]; exact hgt))
            hi (by omega)
            (by rw [up_ne (show (12:Nat) ≠ 13 by omega), hD12])
            (by rw [up_eq])
            (by rw [up_ne (show (17:Nat) ≠ 13 by omega), hD17])
            (by rw [up_ne (show (5:Nat) ≠ 13 by omega), hD5])
            (by rw [up_ne (show (18:Nat) ≠ 13 by omega), hD18])
            (by rw [up_ne (show (22:Nat) ≠ 13 by omega), hD22])
            (by rw [up_ne (show (1:Nat) ≠ 13 by omega), hD1])
            (by rw [up_ne (show (2:Nat) ≠ 13 by omega), hD2])
            (fun q hq => (up_ne (show A1 + q ≠ 13 by omega)).trans (hDarrS q hq))
            (fun q hq => (up_ne (show bd + q ≠ 13 by omega)).trans (hDarrT q hq))
            hfitD hA1 hbd hA1w hbdw hnowrap
            (by omega) (by omega)
        refine ⟨10 + c2, v2, by omega, ?_, hiff2⟩
        rw [hbody, hstep1, hstep2, hstep3, hstep4, hstep5]
        simp only [Nat.sub_sub, Nat.reduceAdd]
        exact hex2
/-! ## §4. a member of a list is at some index -/

theorem exists_getD_of_mem : ∀ {l : List Nat} {v : Nat}, v ∈ l →
    ∃ q, q < l.length ∧ l.getD q 0 = v
  | [], v, h => absurd h (by simp)
  | a :: t, v, h => by
    rcases List.mem_cons.mp h with rfl | hmem
    · exact ⟨0, by simp, by simp⟩
    · obtain ⟨q, hq, he⟩ := exists_getD_of_mem hmem
      exact ⟨q + 1, by simpa using hq, by simpa using he⟩

/-! ## §5. the segment: setup (224–228) then the sweep -/

theorem scanB_exec {w n : Nat} (ρ : Nat → BitVec w) {x : Instance n}
    (hn : 4 ≤ n) (hw : wordLength n x.bits ≤ w)
    (f : Nat → Nat) (h m bd r S : Nat)
    (hh : h = n / 2) (hm : m = n - h)
    (hfit : ∀ q, f q < 2 ^ w)
    (h1 : f 1 = 1) (h2 : f 2 = 0) (h5 : f 5 = 2 ^ h)
    (h7 : f 7 = n) (h8 : f 8 = 2 * n + 23)
    (h11 : f 11 = 2 ^ m) (h18 : f 18 = bd) (h22 : f 22 = 3 * n + 25)
    (hbd : bd = 3 * n + 26 + 2 ^ h ∨ bd = 3 * n + 27 + 2 ^ h + 2 ^ m)
    (harr1 : arrL f (3 * n + 25) (2 ^ h) = halfSums (instA x) h)
    (harr2 : arrL f bd (2 ^ m) = halfSums (instA2 x h) m)
    (hft : f (2 * n + 23 + (n + 1)) = x.t)
    (haddr : ∀ c, c ≤ 3 * n + 27 + 2 ^ (n / 2) + 2 * 2 ^ (n - n / 2) → c < 2 ^ w)
    (hS : 12 * (2 ^ h + 2 ^ m) + 40 ≤ S) :
    ∃ c v, c ≤ 12 * (2 ^ h + 2 ^ m) + 40 ∧
      exec prog2 ρ S 224 r (memOf w f) = some v ∧
      (v = true ↔ isSum (instA x) n x.t) := by
  let SL := halfSums (instA x) h
  let TL := halfSums (instA2 x h) m
  have hSLlen : SL.length = 2 ^ h := length_halfSums (instA x) h
  have hTLlen : TL.length = 2 ^ m := length_halfSums (instA2 x h) m
  have hhm : h + m = n := by omega
  have hP1 : (1:Nat) ≤ 2 ^ h := Nat.one_le_two_pow
  have hP2 : (1:Nat) ≤ 2 ^ m := Nat.one_le_two_pow
  have hAh : 2 ^ h = 2 ^ (n / 2) := by rw [hh]
  have hBm : 2 ^ m = 2 ^ (n - n / 2) := by rw [hm, hh]
  have henv : ∀ c, c ≤ 3 * n + 27 + 2 ^ h + 2 * 2 ^ m → c < 2 ^ w := by
    intro c hc
    refine haddr c ?_
    rwa [hAh, hBm] at hc
  have hbd23 : 23 ≤ bd := by
    rcases hbd with hb | hb <;> rw [hb] <;> omega
  have hA1big : 23 ≤ 3 * n + 25 := by omega
  have hA1w : 3 * n + 25 + 2 ^ h < 2 ^ w := henv _ (by omega)
  have hbdw : bd + 2 ^ m < 2 ^ w := by
    rcases hbd with hb | hb
    · rw [hb]; exact henv _ (by omega)
    · rw [hb]; exact henv _ (by omega)
  have h23w : 3 * n + 23 < 2 ^ w := henv _ (by omega)
  have h24w : 3 * n + 24 < 2 ^ w := henv _ (by omega)
  have htw : x.t < 2 ^ w := by
    have h := hfit (2 * n + 23 + (n + 1))
    rwa [hft] at h
  have harrS : ∀ q, q < SL.length → f (3 * n + 25 + q) = SL.getD q 0 := by
    intro q hq
    have h := getD_arrL (f := f) (b := 3 * n + 25) (L := 2 ^ h) (q := q) (by omega)
    rw [harr1] at h
    exact h.symm
  have harrT : ∀ q, q < TL.length → f (bd + q) = TL.getD q 0 := by
    intro q hq
    have h := getD_arrL (f := f) (b := bd) (L := 2 ^ m) (q := q) (by omega)
    rw [harr2] at h
    exact h.symm
  have hnowrap : ∀ a b, a < SL.length → b < TL.length → SL.getD a 0 + TL.getD b 0 < 2 ^ w := by
    intro a b ha hb
    exact halfSumsSumLe (x := x) (by omega) hw (by omega) _ _ (mem_getD ha) (mem_getD hb)
  -- ── the setup 224–228, landing on the sweep head with `i = 0`, `j = 2^m − 1` ──
  have e224 : f 8 + f 7 = 3 * n + 23 := by rw [h8, h7]; omega
  have s1f : ∀ q, (up f 20 (3 * n + 23)) q < 2 ^ w := up_fit hfit h23w
  have e225 : (up f 20 (3 * n + 23)) 20 + (up f 20 (3 * n + 23)) 1 = 3 * n + 24 := by
    rw [up_eq, up_ne (show (1:Nat) ≠ 20 by omega), h1]
  have s2f : ∀ q, (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) q < 2 ^ w := up_fit s1f h24w
  have e226 : (up (up f 20 (3 * n + 23)) 20 (3 * n + 24))
      ((up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 20) = x.t := by
    rw [up_eq, up_ne (show 3 * n + 24 ≠ 20 by omega),
      up_ne (show 3 * n + 24 ≠ 20 by omega),
      show 3 * n + 24 = 2 * n + 23 + (n + 1) from by omega, hft]
  have s3f : ∀ q, (up (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 17 x.t) q < 2 ^ w :=
    up_fit s2f htw
  have e227 : (up (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 17 x.t) 12
      - (up (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 17 x.t) 12 = 0 := by
    rw [up_ne (show (12:Nat) ≠ 17 by omega), up_ne (show (12:Nat) ≠ 20 by omega),
      up_ne (show (12:Nat) ≠ 20 by omega)]
    omega
  have s4f : ∀ q, (up (up (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 17 x.t) 12 0) q < 2 ^ w :=
    up_fit s3f (by omega)
  have e228 : (up (up (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 17 x.t) 12 0) 11
      - (up (up (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 17 x.t) 12 0) 1 = 2 ^ m - 1 := by
    rw [up_ne (show (11:Nat) ≠ 12 by omega), up_ne (show (11:Nat) ≠ 17 by omega),
      up_ne (show (11:Nat) ≠ 20 by omega), up_ne (show (11:Nat) ≠ 20 by omega), h11,
      up_ne (show (1:Nat) ≠ 12 by omega), up_ne (show (1:Nat) ≠ 17 by omega),
      up_ne (show (1:Nat) ≠ 20 by omega), up_ne (show (1:Nat) ≠ 20 by omega), h1]
  have hle228 : (up (up (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 17 x.t) 12 0) 1
      ≤ (up (up (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 17 x.t) 12 0) 11 := by
    rw [up_ne (show (1:Nat) ≠ 12 by omega), up_ne (show (1:Nat) ≠ 17 by omega),
      up_ne (show (1:Nat) ≠ 20 by omega), up_ne (show (1:Nat) ≠ 20 by omega), h1,
      up_ne (show (11:Nat) ≠ 12 by omega), up_ne (show (11:Nat) ≠ 17 by omega),
      up_ne (show (11:Nat) ≠ 20 by omega), up_ne (show (11:Nat) ≠ 20 by omega), h11]
    exact hP2
  let g : Nat → Nat :=
    up (up (up (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 17 x.t) 12 0) 13 (2 ^ m - 1)
  have hgdef : g = up (up (up (up (up f 20 (3 * n + 23)) 20 (3 * n + 24)) 17 x.t) 12 0)
      13 (2 ^ m - 1) := rfl
  have hsetup : exec prog2 ρ S 224 r (memOf w f) = exec prog2 ρ (S - 5) 229 r (memOf w g) := by
    rw [hgdef,
      exec_add_step (by omega)
        (show prog2.getD 224 Instr.reject = Instr.add 20 8 7 by rfl),
      e224,
      exec_add_step (by omega)
        (show prog2.getD 225 Instr.reject = Instr.add 20 20 1 by rfl),
      e225,
      exec_load_step (by omega)
        (show prog2.getD 226 Instr.reject = Instr.load 17 20 by rfl) s2f,
      e226,
      exec_sub_step (by omega)
        (show prog2.getD 227 Instr.reject = Instr.sub 12 12 12 by rfl) s3f (Nat.le_refl _),
      e227,
      exec_sub_step (by omega)
        (show prog2.getD 228 Instr.reject = Instr.sub 13 11 1 by rfl) s4f hle228,
      e228]
    simp only [Nat.sub_sub, Nat.reduceAdd]
  have hg12 : g 12 = 0 := by rw [hgdef, up_ne (show (12:Nat) ≠ 13 by omega), up_eq]
  have hg13 : g 13 = 2 ^ m - 1 := by rw [hgdef, up_eq]
  have hg17 : g 17 = x.t := by
    rw [hgdef, up_ne (show (17:Nat) ≠ 13 by omega), up_ne (show (17:Nat) ≠ 12 by omega), up_eq]
  have hg5 : g 5 = SL.length := by
    rw [hSLlen, hgdef, up_ne (show (5:Nat) ≠ 13 by omega),
      up_ne (show (5:Nat) ≠ 12 by omega), up_ne (show (5:Nat) ≠ 17 by omega),
      up_ne (show (5:Nat) ≠ 20 by omega), up_ne (show (5:Nat) ≠ 20 by omega), h5]
  have hg18 : g 18 = bd := by
    rw [hgdef, up_ne (show (18:Nat) ≠ 13 by omega),
      up_ne (show (18:Nat) ≠ 12 by omega), up_ne (show (18:Nat) ≠ 17 by omega),
      up_ne (show (18:Nat) ≠ 20 by omega), up_ne (show (18:Nat) ≠ 20 by omega), h18]
  have hg22 : g 22 = 3 * n + 25 := by
    rw [hgdef, up_ne (show (22:Nat) ≠ 13 by omega),
      up_ne (show (22:Nat) ≠ 12 by omega), up_ne (show (22:Nat) ≠ 17 by omega),
      up_ne (show (22:Nat) ≠ 20 by omega), up_ne (show (22:Nat) ≠ 20 by omega), h22]
  have hg1 : g 1 = 1 := by
    rw [hgdef, up_ne (show (1:Nat) ≠ 13 by omega),
      up_ne (show (1:Nat) ≠ 12 by omega), up_ne (show (1:Nat) ≠ 17 by omega),
      up_ne (show (1:Nat) ≠ 20 by omega), up_ne (show (1:Nat) ≠ 20 by omega), h1]
  have hg2 : g 2 = 0 := by
    rw [hgdef, up_ne (show (2:Nat) ≠ 13 by omega),
      up_ne (show (2:Nat) ≠ 12 by omega), up_ne (show (2:Nat) ≠ 17 by omega),
      up_ne (show (2:Nat) ≠ 20 by omega), up_ne (show (2:Nat) ≠ 20 by omega), h2]
  have hgfit : ∀ q, g q < 2 ^ w := up_fit s4f (by omega)
  have hgarrS : ∀ q, q < SL.length → g (3 * n + 25 + q) = SL.getD q 0 := by
    intro q hq
    rw [hgdef]
    exact ((up_ne (show 3 * n + 25 + q ≠ 13 by omega)).trans
      ((up_ne (show 3 * n + 25 + q ≠ 12 by omega)).trans
        ((up_ne (show 3 * n + 25 + q ≠ 17 by omega)).trans
          ((up_ne (show 3 * n + 25 + q ≠ 20 by omega)).trans
            ((up_ne (show 3 * n + 25 + q ≠ 20 by omega)).trans (harrS q hq))))))
  have hgarrT : ∀ q, q < TL.length → g (bd + q) = TL.getD q 0 := by
    intro q hq
    rw [hgdef]
    exact ((up_ne (show bd + q ≠ 13 by omega)).trans
      ((up_ne (show bd + q ≠ 12 by omega)).trans
        ((up_ne (show bd + q ≠ 17 by omega)).trans
          ((up_ne (show bd + q ≠ 20 by omega)).trans
            ((up_ne (show bd + q ≠ 20 by omega)).trans (harrT q hq))))))
  have hA1w' : 3 * n + 25 + SL.length < 2 ^ w := by rw [hSLlen]; exact hA1w
  have hbdw' : bd + TL.length < 2 ^ w := by rw [hTLlen]; exact hbdw
  have hjlt : 2 ^ m - 1 < TL.length := by rw [hTLlen]; omega
  have hInv0 : ScanInv SL TL x.t 0 (2 ^ m - 1) := by
    intro a b ha hb hd
    rcases hd with h | h
    · omega
    · rw [hTLlen] at hb
      omega
  obtain ⟨c, v, hc, hex, hiff⟩ :=
    scanLoop_exec ρ SL TL x.t (2 ^ h + 2 ^ m) g 0 (2 ^ m - 1) bd (3 * n + 25) (S - 5) r
      (halfSums_sorted (instA x) h) (halfSums_sorted (instA2 x h) m) hInv0
      (by rw [hSLlen]; exact Nat.one_le_two_pow) hjlt
      hg12 hg13 hg17 hg5 hg18 hg22 hg1 hg2 hgarrS hgarrT hgfit
      hA1big hbd23 hA1w' hbdw' hnowrap
      (by rw [hSLlen]; omega) (by rw [hSLlen]; omega)
  have hcl : c ≤ 12 * (2 ^ h + (2 ^ m - 1)) + 12 := by
    have h := hc
    rw [hSLlen] at h
    simpa using h
  refine ⟨5 + c, v, by omega, ?_, ?_⟩
  · rw [hsetup]
    exact hex
  · constructor
    · intro hv
      obtain ⟨a, b, ha, hb, he⟩ := hiff.mp hv
      have hm1 : isSum (instA x) h (SL.getD a 0) :=
        (mem_halfSums (instA x) h _).mp (mem_getD ha)
      have hm2 : isSum (fun i => instA x (i + h)) m (TL.getD b 0) :=
        (mem_halfSums (instA2 x h) m _).mp (mem_getD hb)
      have hsub : x.t - SL.getD a 0 = TL.getD b 0 := by omega
      have hsplit := (isSum_split (instA x) h m x.t).mpr
        ⟨SL.getD a 0, by omega, hm1, hsub ▸ hm2⟩
      rwa [hhm] at hsplit
    · intro hys
      obtain ⟨s, hst, hs1, hs2⟩ := (isSum_split (instA x) h m x.t).mp (hhm.symm ▸ hys)
      obtain ⟨qa, hqa, hea⟩ := exists_getD_of_mem ((mem_halfSums (instA x) h s).mpr hs1)
      obtain ⟨qb, hqb, heb⟩ := exists_getD_of_mem ((mem_halfSums (instA2 x h) m _).mpr hs2)
      refine hiff.mpr ⟨qa, qb, by omega, by omega, ?_⟩
      rw [hea, heb]
      omega

end SubsetSum.MITM
