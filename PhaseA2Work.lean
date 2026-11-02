import Submission.Prog2Merge2
set_option autoImplicit true

/-!
# phaseA2's round driver: `round2_exec` (R2125607749 Lane 2, continued)

Port of `Prog2PhaseA.round_exec_p2` to the second half: `instA2 x h`, bases
`B2/B3`, pcs 173→223, and the one structural difference — the round head loads
`a_{h+k}` through an extra `add` (`mem[RELOC + h + k]`, 3 instructions instead
of 2), so the setup is 6 instructions and the round costs `44·L + 24`.

Entry (`init2_exec`'s exit): `[10] = k`, `[11] = L = 2^(k-1)`, `[18]/[19]` the
B2/B3 pair, `S₂_{k-1} = halfSums (instA2 x h) (k-1)` at `[18]`.  Round `k`
merges it with its `+a_{h+k}` copy into `[19]`, doubles `L`, swaps the
pointers, and lands at pc 223 with the guard `blt 10 21 173` pending.

**Discipline (paid for here):** every `omega` goal in this development is pure
linear arithmetic over plain variables.  The two big-coefficient atoms
`A = 2^(n/2)` and `B = 2^(n−n/2)` are introduced with `set`, so `omega` never
sees a `^` term or a `Nat` subtraction of two variables — in this toolchain it
silently gives up on both (`2 ^ (n - n/2)` keys a truncated-subtraction atom,
and its diagnostics then report a bogus counterexample).
-/

namespace SubsetSum.MITM.P2M

open BigOSpeedrun.SubsetSum SubsetSum.MITM.Spec
open SubsetSum.MITM.P2M.Merge2

/-- `up` twice on the same cell: the second write wins.  (PhaseA's walk never
needs this — its round head stores the element address with a single `add`.) -/
theorem up_up_same (f : Nat → Nat) (c a b : Nat) : up (up f c a) c b = up f c b := by
  funext x
  by_cases hx : x = c <;> simp [up, hx]

/-! ## Arithmetic at file scope (plain variables only)

Each lemma below is stated over the *opaque* numerals `A = 2^(n/2)` and
`B = 2^(n−n/2)` and proved with `omega` on plain variables; call sites
instantiate `A`/`B` at the real power terms.  This is the only shape that
works: `omega` in this toolchain will not reason about a goal whose atoms are
`2 ^ (n − n/2)` (a `Nat` subtraction of two variables) and reports a bogus
counterexample rather than failing to linearise. -/

private theorem head_env (n h k A B : Nat) (h2h : 2 * h ≤ n) (hkn : h + k ≤ n) :
    (2 * n + 23 + h ≤ 3 * n + 27 + A + 2 * B) ∧
    (2 * n + 23 + h + k ≤ 3 * n + 27 + A + 2 * B) :=
  ⟨by omega, by omega⟩

/-- The `b` and `d` members of the base pair, individually. -/
private theorem pair_b {n b d A B : Nat}
    (hb : b = 3 * n + 26 + A ∧ d = 3 * n + 27 + A + B ∨
      d = 3 * n + 26 + A ∧ b = 3 * n + 27 + A + B) :
    b = 3 * n + 26 + A ∨ b = 3 * n + 27 + A + B := by
  rcases hb with ⟨h, -⟩|⟨-, h⟩
  · exact Or.inl h
  · exact Or.inr h

private theorem pair_d {n b d A B : Nat}
    (hb : b = 3 * n + 26 + A ∧ d = 3 * n + 27 + A + B ∨
      d = 3 * n + 26 + A ∧ b = 3 * n + 27 + A + B) :
    d = 3 * n + 26 + A ∨ d = 3 * n + 27 + A + B := by
  rcases hb with ⟨-, h⟩|⟨h, -⟩
  · exact Or.inr h
  · exact Or.inl h

private theorem b33 {n b A B : Nat} (hn : 4 ≤ n)
    (hb : b = 3 * n + 26 + A ∨ b = 3 * n + 27 + A + B) : 33 ≤ b := by
  rcases hb with h | h <;> subst h <;> omega

private theorem env_bL {n L b A B : Nat}
    (hb : b = 3 * n + 26 + A ∨ b = 3 * n + 27 + A + B) (hL : L ≤ B) :
    b + L ≤ 3 * n + 27 + A + 2 * B := by
  rcases hb with h | h <;> subst h <;> omega

private theorem env_d2L {n L d A B : Nat}
    (hd : d = 3 * n + 26 + A ∨ d = 3 * n + 27 + A + B) (h2L : 2 * L ≤ B) :
    d + 2 * L ≤ 3 * n + 27 + A + 2 * B := by
  rcases hd with h | h <;> subst h <;> omega

private theorem env_b {n b A B : Nat}
    (hb : b = 3 * n + 26 + A ∨ b = 3 * n + 27 + A + B) :
    b ≤ 3 * n + 27 + A + 2 * B := by
  rcases hb with h | h <;> subst h <;> omega

private theorem env_d {n d A B : Nat}
    (hd : d = 3 * n + 26 + A ∨ d = 3 * n + 27 + A + B) :
    d ≤ 3 * n + 27 + A + 2 * B := by
  rcases hd with h | h <;> subst h <;> omega

private theorem env_small {n h m k L A B : Nat} (hmn : m ≤ n) (hkn : k ≤ n)
    (h2L : 2 * L ≤ B) :
    2 * L ≤ 3 * n + 27 + A + 2 * B ∧ k + 1 ≤ 3 * n + 27 + A + 2 * B ∧
    m + 1 ≤ 3 * n + 27 + A + 2 * B :=
  ⟨by omega, by omega, by omega⟩

/-- The two bases are separated by more than one array length (`d ≠ b` and the
array regions cannot overlap). -/
private theorem disj_bd {n L b d p q A B : Nat}
    (hb : b = 3 * n + 26 + A ∧ d = 3 * n + 27 + A + B ∨
      d = 3 * n + 26 + A ∧ b = 3 * n + 27 + A + B)
    (hL : L ≤ B) (h2L : 2 * L ≤ B) (hp : p < 2 * L) (hq : q < L) :
    d + p ≠ b + q := by
  rcases hb with ⟨h1, h2⟩|⟨h1, h2⟩
  · subst h1; subst h2
    have hqB : q < B := Nat.lt_of_lt_of_le hq hL
    have e1 : 3 * n + 26 + A + q < 3 * n + 26 + A + B := Nat.add_lt_add_left hqB _
    have e2 : 3 * n + 26 + A + B ≤ 3 * n + 27 + A + B := by omega
    have e3 : 3 * n + 27 + A + B ≤ 3 * n + 27 + A + B + p := Nat.le_add_right _ _
    exact Ne.symm (Nat.ne_of_lt (Nat.lt_of_lt_of_le (Nat.lt_of_lt_of_le e1 e2) e3))
  · subst h1; subst h2
    have hpB : p < B := Nat.lt_of_lt_of_le hp h2L
    have e1 : 3 * n + 26 + A + p < 3 * n + 26 + A + B := Nat.add_lt_add_left hpB _
    have e2 : 3 * n + 26 + A + B ≤ 3 * n + 27 + A + B := by omega
    have e3 : 3 * n + 27 + A + B ≤ 3 * n + 27 + A + B + q := Nat.le_add_right _ _
    exact Nat.ne_of_lt (Nat.lt_of_lt_of_le (Nat.lt_of_lt_of_le e1 e2) e3)

/-- A cell in the merge's write region is inside the envelope. -/
private theorem areg_cell {n L d c A B : Nat}
    (hd : d = 3 * n + 26 + A ∨ d = 3 * n + 27 + A + B)
    (h2L : 2 * L ≤ B) (h1 : d ≤ c) (h2 : c < d + 2 * L) :
    c < 3 * n + 27 + A + 2 * B := by
  rcases hd with h | h
  · subst h
    have h2B : 3 * n + 26 + A + 2 * L ≤ 3 * n + 26 + A + 2 * B := by omega
    have h3 : 3 * n + 26 + A + 2 * B ≤ 3 * n + 27 + A + 2 * B := by omega
    exact Nat.lt_of_lt_of_le (Nat.lt_of_lt_of_le h2 h2B) h3
  · subst h
    have h2B : 3 * n + 27 + A + B + 2 * L ≤ 3 * n + 27 + A + B + B := by omega
    have h3 : 3 * n + 27 + A + B + B ≤ 3 * n + 27 + A + 2 * B := by omega
    exact Nat.lt_of_lt_of_le (Nat.lt_of_lt_of_le h2 h2B) h3

/-- The merge-loop write region (identical to PhaseA's). -/
theorem mreg_ne_small2 {d L c : Nat} (hd : 33 ≤ d)
    (h : c < 12 ∨ (17 ≤ c ∧ c ≤ 19) ∨ c = 22) : ¬ MReg d L c := by
  intro hmc
  rcases hmc with rfl|rfl|rfl|rfl|rfl|rfl|rfl|harr
  all_goals rcases h with h1 | ⟨h1, h2⟩ | h1 <;> omega

/-- One full phaseA2 round `k` (1 ≤ k ≤ m): round head (173–178), the merge
(179–216, via `merge_exec_m2` from `(0,0,0)`), the LSWAP2 tail (217–222).
Lands at pc 223 with the guard `blt 10 21 173` pending. -/
theorem round2_exec {w n : Nat} (ρ : Nat → BitVec w) {x : Instance n}
    (hn : 4 ≤ n) (hw : wordLength n x.bits ≤ w) :
    ∀ (h m k L b d : Nat) (f : Nat → Nat) (S r : Nat),
    h = n / 2 → m = n - h → 1 ≤ k → k ≤ m → L = 2 ^ (k - 1) →
    f 1 = 1 → f 2 = 0 → f 4 = m → f 7 = n → f 8 = 2 * n + 23 → f 9 = h →
    f 10 = k → f 11 = L → f 18 = b → f 19 = d →
    arrL f b L = halfSums (instA2 x h) (k - 1) →
    (b = 3 * n + 26 + 2 ^ h ∧ d = 3 * n + 27 + 2 ^ h + 2 ^ m ∨
      d = 3 * n + 26 + 2 ^ h ∧ b = 3 * n + 27 + 2 ^ h + 2 ^ m) →
    (∀ i, 1 ≤ i → i ≤ n → f (2 * n + 23 + i) = instA x (i - 1)) →
    (∀ i, i < m → instA2 x h i < 2 ^ w) →
    (∀ q, f q < 2 ^ w) →
    (∀ c, c ≤ 3 * n + 27 + 2 ^ (n / 2) + 2 * 2 ^ (n - n / 2) → c < 2 ^ w) →
    44 * L + 24 ≤ S →
    ∃ c f', c ≤ 44 * L + 24 ∧
      exec prog2 ρ S 173 r (memOf w f) = exec prog2 ρ (S - c) 223 r (memOf w f') ∧
      f' 10 = k + 1 ∧ f' 11 = 2 * L ∧ f' 18 = d ∧ f' 19 = b ∧ f' 21 = m + 1 ∧
      arrL f' d (2 * L) = halfSums (instA2 x h) k ∧
      f' 1 = 1 ∧ f' 2 = 0 ∧ f' 4 = m ∧ f' 7 = n ∧ f' 8 = 2 * n + 23 ∧ f' 9 = h ∧
      (∀ q, f' q < 2 ^ w) ∧ Pres (AReg2 n) f f' := by
  intro h m k L b d f S r hh hm hk1 hkm hL hf1 hf2 hf4 hf7 hf8 hf9 hf10 hf11 hf18 hf19
    harr hbases hrel hin hfit haddr hS
  -- A and B are the envelope's two big numerals; every arithmetic fact below is
  -- a generic lemma instantiated here (see the section note above).
  have h2h : 2 * h ≤ n := by omega
  have hkn : h + k ≤ n := by omega
  have hmn : m ≤ n := by omega
  have hAh : 2 ^ h = 2 ^ (n / 2) := by rw [hh]
  have hBm : 2 ^ m = 2 ^ (n - n / 2) := by rw [hm, hh]
  have hbases' : b = 3 * n + 26 + 2 ^ (n / 2) ∧ d = 3 * n + 27 + 2 ^ (n / 2) + 2 ^ (n - n / 2) ∨
      d = 3 * n + 26 + 2 ^ (n / 2) ∧ b = 3 * n + 27 + 2 ^ (n / 2) + 2 ^ (n - n / 2) := by
    rcases hbases with ⟨h1, h2⟩|⟨h1, h2⟩
    · exact Or.inl ⟨by rw [h1, hAh], by rw [h2, hAh, hBm]⟩
    · exact Or.inr ⟨by rw [h1, hAh], by rw [h2, hAh, hBm]⟩
  obtain ⟨hb33, hd33⟩ : 33 ≤ b ∧ 33 ≤ d :=
    ⟨b33 hn (pair_b hbases'), b33 hn (pair_d hbases')⟩
  have hLm : L ≤ 2 ^ (n - n / 2) := by
    rw [← hBm, hL]
    exact Nat.pow_le_pow_right (by omega) (by omega)
  have h2k : 2 ^ k = 2 * 2 ^ (k - 1) := by
    rw [← Nat.pow_succ', show (k - 1).succ = k from by omega]
  have h2Lm : 2 * L ≤ 2 ^ (n - n / 2) := by
    rw [← hBm, hL, ← h2k]
    exact Nat.pow_le_pow_right (by omega) (by omega)
  have hak : instA2 x h (k - 1) < 2 ^ w := hin (k - 1) (by omega)
  have hrelx : f (2 * n + 23 + h + k) = instA x (h + k - 1) := by
    have hz := hrel (h + k) (by omega) (by omega)
    rwa [show 2 * n + 23 + (h + k) = 2 * n + 23 + h + k from by omega] at hz
  have haki : instA x (h + k - 1) = instA2 x h (k - 1) := by
    unfold instA2
    rw [show k - 1 + h = h + k - 1 from by omega]
  -- the round head: RELOC + h, + k, load a_{h+k}, then three zeroings
  obtain ⟨henv1, henv2⟩ := head_env n h k (2 ^ (n / 2)) (2 ^ (n - n / 2)) h2h hkn
  have hfits1 : ∀ q, (up f 20 (2 * n + 23 + h)) q < 2 ^ w :=
    up_fit hfit (haddr _ henv1)
  have hfits2 : ∀ q, (up f 20 (2 * n + 23 + h + k)) q < 2 ^ w :=
    up_fit hfit (haddr _ henv2)
  have hwalk6 : exec prog2 ρ S 173 r (memOf w f)
      = exec prog2 ρ (S - 6) 179 r
          (memOf w (up (up (up (up (up f 20 (2 * n + 23 + h + k))
            17 (instA2 x h (k - 1))) 12 0) 13 0) 14 0)) := by
    rw [exec_add_step (by omega) (show prog2.getD 173 Instr.reject = Instr.add 20 8 9 by rfl),
      show f 8 + f 9 = 2 * n + 23 + h from by rw [hf8, hf9],
      exec_add_step (by omega) (show prog2.getD 174 Instr.reject = Instr.add 20 20 10 by rfl),
      show (up f 20 (2 * n + 23 + h)) 20 + (up f 20 (2 * n + 23 + h)) 10
          = 2 * n + 23 + h + k from by
        rw [up_eq, up_ne (show (10:Nat) ≠ 20 by omega), hf10],
      up_up_same,
      exec_load_step (by omega) (show prog2.getD 175 Instr.reject = Instr.load 17 20 by rfl)
        hfits2,
      up_eq, up_ne (show 2 * n + 23 + h + k ≠ 20 by omega),
      hrelx, haki,
      subs3_exec (up_fit hfits2 hak)
        (show prog2.getD 176 Instr.reject = Instr.sub 12 12 12 by rfl)
        (show prog2.getD 177 Instr.reject = Instr.sub 13 13 13 by rfl)
        (show prog2.getD 178 Instr.reject = Instr.sub 14 14 14 by rfl)
        (by omega)]
    simp only [Nat.sub_sub, Nat.reduceAdd]
  -- the merge's entry state
  have g12 : (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
      12 0) 13 0) 14 0) 12 = 0 := by
    rw [up_ne (show (12:Nat) ≠ 14 by omega), up_ne (show (12:Nat) ≠ 13 by omega), up_eq]
  have g13 : (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
      12 0) 13 0) 14 0) 13 = 0 := by
    rw [up_ne (show (13:Nat) ≠ 14 by omega), up_eq]
  have g14 : (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
      12 0) 13 0) 14 0) 14 = 0 := by rw [up_eq]
  have g11 : (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
      12 0) 13 0) 14 0) 11 = L := by
    rw [up_ne (show (11:Nat) ≠ 14 by omega), up_ne (show (11:Nat) ≠ 13 by omega),
      up_ne (show (11:Nat) ≠ 12 by omega), up_ne (show (11:Nat) ≠ 17 by omega),
      up_ne (show (11:Nat) ≠ 20 by omega), hf11]
  have g17 : (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
      12 0) 13 0) 14 0) 17 = instA2 x h (k - 1) := by
    rw [up_ne (show (17:Nat) ≠ 14 by omega), up_ne (show (17:Nat) ≠ 13 by omega),
      up_ne (show (17:Nat) ≠ 12 by omega), up_eq]
  have g18 : (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
      12 0) 13 0) 14 0) 18 = b := by
    rw [up_ne (show (18:Nat) ≠ 14 by omega), up_ne (show (18:Nat) ≠ 13 by omega),
      up_ne (show (18:Nat) ≠ 12 by omega), up_ne (show (18:Nat) ≠ 17 by omega),
      up_ne (show (18:Nat) ≠ 20 by omega), hf18]
  have g19 : (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
      12 0) 13 0) 14 0) 19 = d := by
    rw [up_ne (show (19:Nat) ≠ 14 by omega), up_ne (show (19:Nat) ≠ 13 by omega),
      up_ne (show (19:Nat) ≠ 12 by omega), up_ne (show (19:Nat) ≠ 17 by omega),
      up_ne (show (19:Nat) ≠ 20 by omega), hf19]
  have g1 : (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
      12 0) 13 0) 14 0) 1 = 1 := by
    rw [up_ne (show (1:Nat) ≠ 14 by omega), up_ne (show (1:Nat) ≠ 13 by omega),
      up_ne (show (1:Nat) ≠ 12 by omega), up_ne (show (1:Nat) ≠ 17 by omega),
      up_ne (show (1:Nat) ≠ 20 by omega), hf1]
  have g2 : (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
      12 0) 13 0) 14 0) 2 = 0 := by
    rw [up_ne (show (2:Nat) ≠ 14 by omega), up_ne (show (2:Nat) ≠ 13 by omega),
      up_ne (show (2:Nat) ≠ 12 by omega), up_ne (show (2:Nat) ≠ 17 by omega),
      up_ne (show (2:Nat) ≠ 20 by omega), hf2]
  have h0w : (0:Nat) < 2 ^ w := Nat.one_le_two_pow
  have gfit : ∀ q, (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
      12 0) 13 0) 14 0) q < 2 ^ w :=
    up_fit (up_fit (up_fit (up_fit hfits2 hak) h0w) h0w) h0w
  have hgsrc : ∀ q, q < L →
      (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1)))
        12 0) 13 0) 14 0) (b + q) = (halfSums (instA2 x h) (k - 1)).getD q 0 := by
    intro q hq
    rw [up_ne (show b + q ≠ 14 by omega), up_ne (show b + q ≠ 13 by omega),
      up_ne (show b + q ≠ 12 by omega), up_ne (show b + q ≠ 17 by omega),
      up_ne (show b + q ≠ 20 by omega), ← harr, getD_arrL hq]
  have hsL' : (halfSums (instA2 x h) (k - 1)).length = L := by
    rw [length_halfSums, hL]
  have hbL : b + L < 2 ^ w :=
    haddr _ (env_bL (A := 2 ^ (n / 2)) (B := 2 ^ (n - n / 2)) (pair_b hbases') hLm)
  have hdL : d + 2 * L < 2 ^ w :=
    haddr _ (env_d2L (A := 2 ^ (n / 2)) (B := 2 ^ (n - n / 2)) (pair_d hbases') h2Lm)
  have hkn' : k ≤ n := by omega
  obtain ⟨h2Le, hk1e, hm1e⟩ := env_small (n := n) (h := h) (m := m) (k := k) (L := L)
    (A := 2 ^ (n / 2)) (B := 2 ^ (n - n / 2)) hmn hkn' h2Lm
  have h2L : 2 * L < 2 ^ w := haddr _ h2Le
  have hdisj : ∀ p q, p < 2 * L → q < L → d + p ≠ b + q :=
    fun p q hp hq => disj_bd hbases' hLm h2Lm hp hq
  have hout : halfSums (instA2 x h) k
      = mmerge (halfSums (instA2 x h) (k - 1))
          ((halfSums (instA2 x h) (k - 1)).map (fun z => z + instA2 x h (k - 1))) := by
    rw [show k = (k - 1) + 1 from by omega, halfSums,
      show k - 1 + 1 - 1 = k - 1 from by omega]
  obtain ⟨c2, fm, hc2, hex2, harrm, h12m, h14m, hfitm, hpm⟩ :=
    merge_exec_m2 ρ (2 * L) L b d (instA2 x h (k - 1)) (halfSums (instA2 x h) (k - 1))
      (halfSums (instA2 x h) k)
      (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1))) 12 0) 13 0) 14 0)
      0 0 0 (S - 6) r hsL' (by omega) (by omega) (by omega) g12 g13 g14 g11 g17 g18 g19
      g1 g2 hgsrc (fun v hv => halfSumAddFit2 (by omega) hw (k - 1) (by omega) v hv)
      (by exact rfl) (by exact hout) hout gfit hbL hdL h2L hb33 hd33 hdisj
      (by omega) (by omega)
  have fm11 : fm 11 = L := by
    rw [hpm 11 (mreg_ne_small2 hd33 (Or.inl (by omega))), g11]
  have fm18 : fm 18 = b := by
    rw [hpm 18 (mreg_ne_small2 hd33 (Or.inr (Or.inl ⟨by omega, by omega⟩))), g18]
  have fm19 : fm 19 = d := by
    rw [hpm 19 (mreg_ne_small2 hd33 (Or.inr (Or.inl ⟨by omega, by omega⟩))), g19]
  have fm1 : fm 1 = 1 := by rw [hpm 1 (mreg_ne_small2 hd33 (Or.inl (by omega))), g1]
  have fm2 : fm 2 = 0 := by rw [hpm 2 (mreg_ne_small2 hd33 (Or.inl (by omega))), g2]
  have fm4 : fm 4 = m := by
    rw [hpm 4 (mreg_ne_small2 hd33 (Or.inl (by omega)))]
    rw [up_ne (show (4:Nat) ≠ 14 by omega), up_ne (show (4:Nat) ≠ 13 by omega),
      up_ne (show (4:Nat) ≠ 12 by omega), up_ne (show (4:Nat) ≠ 17 by omega),
      up_ne (show (4:Nat) ≠ 20 by omega)]
    exact hf4
  have fm7 : fm 7 = n := by
    rw [hpm 7 (mreg_ne_small2 hd33 (Or.inl (by omega)))]
    rw [up_ne (show (7:Nat) ≠ 14 by omega), up_ne (show (7:Nat) ≠ 13 by omega),
      up_ne (show (7:Nat) ≠ 12 by omega), up_ne (show (7:Nat) ≠ 17 by omega),
      up_ne (show (7:Nat) ≠ 20 by omega)]
    exact hf7
  have fm8 : fm 8 = 2 * n + 23 := by
    rw [hpm 8 (mreg_ne_small2 hd33 (Or.inl (by omega)))]
    rw [up_ne (show (8:Nat) ≠ 14 by omega), up_ne (show (8:Nat) ≠ 13 by omega),
      up_ne (show (8:Nat) ≠ 12 by omega), up_ne (show (8:Nat) ≠ 17 by omega),
      up_ne (show (8:Nat) ≠ 20 by omega)]
    exact hf8
  have fm9 : fm 9 = h := by
    rw [hpm 9 (mreg_ne_small2 hd33 (Or.inl (by omega)))]
    rw [up_ne (show (9:Nat) ≠ 14 by omega), up_ne (show (9:Nat) ≠ 13 by omega),
      up_ne (show (9:Nat) ≠ 12 by omega), up_ne (show (9:Nat) ≠ 17 by omega),
      up_ne (show (9:Nat) ≠ 20 by omega)]
    exact hf9
  have fm10 : fm 10 = k := by
    rw [hpm 10 (mreg_ne_small2 hd33 (Or.inl (by omega)))]
    rw [up_ne (show (10:Nat) ≠ 14 by omega), up_ne (show (10:Nat) ≠ 13 by omega),
      up_ne (show (10:Nat) ≠ 12 by omega), up_ne (show (10:Nat) ≠ 17 by omega),
      up_ne (show (10:Nat) ≠ 20 by omega)]
    exact hf10
  have htail : exec prog2 ρ (S - 6 - c2) 217 r (memOf w fm)
      = exec prog2 ρ (S - 6 - c2 - 6) 223 r
          (memOf w (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b)
            10 (k + 1)) 21 (m + 1))) :=
    lswap2_exec fm11 fm1 fm2 fm4 fm10 fm18 fm19
      (show prog2.getD 217 Instr.reject = Instr.add 11 11 11 by rfl)
      (show prog2.getD 218 Instr.reject = Instr.add 20 18 2 by rfl)
      (show prog2.getD 219 Instr.reject = Instr.add 18 19 2 by rfl)
      (show prog2.getD 220 Instr.reject = Instr.add 19 20 2 by rfl)
      (show prog2.getD 221 Instr.reject = Instr.add 10 10 1 by rfl)
      (show prog2.getD 222 Instr.reject = Instr.add 21 4 1 by rfl)
      (by omega)
  have f'10 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 10 = k + 1 := by
    rw [up_ne (show (10:Nat) ≠ 21 by omega), up_eq]
  have f'11 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 11 = 2 * L := by
    rw [up_ne (show (11:Nat) ≠ 21 by omega), up_ne (show (11:Nat) ≠ 10 by omega),
      up_ne (show (11:Nat) ≠ 19 by omega), up_ne (show (11:Nat) ≠ 18 by omega),
      up_ne (show (11:Nat) ≠ 20 by omega), up_eq]
  have f'18 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 18 = d := by
    rw [up_ne (show (18:Nat) ≠ 21 by omega), up_ne (show (18:Nat) ≠ 10 by omega),
      up_ne (show (18:Nat) ≠ 19 by omega), up_eq]
  have f'19 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 19 = b := by
    rw [up_ne (show (19:Nat) ≠ 21 by omega), up_ne (show (19:Nat) ≠ 10 by omega), up_eq]
  have f'21 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 21 = m + 1 := by rw [up_eq]
  have f'arr : arrL (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) d (2 * L) = halfSums (instA2 x h) k := by
    rw [arrL_up_out (fun q _ => show (21:Nat) ≠ d + q by omega),
      arrL_up_out (fun q _ => show (10:Nat) ≠ d + q by omega),
      arrL_up_out (fun q _ => show (19:Nat) ≠ d + q by omega),
      arrL_up_out (fun q _ => show (18:Nat) ≠ d + q by omega),
      arrL_up_out (fun q _ => show (20:Nat) ≠ d + q by omega),
      arrL_up_out (fun q _ => show (11:Nat) ≠ d + q by omega),
      harrm]
  have f'1 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 1 = 1 := by
    rw [up_ne (show (1:Nat) ≠ 21 by omega), up_ne (show (1:Nat) ≠ 10 by omega),
      up_ne (show (1:Nat) ≠ 19 by omega), up_ne (show (1:Nat) ≠ 18 by omega),
      up_ne (show (1:Nat) ≠ 20 by omega), up_ne (show (1:Nat) ≠ 11 by omega), fm1]
  have f'2 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 2 = 0 := by
    rw [up_ne (show (2:Nat) ≠ 21 by omega), up_ne (show (2:Nat) ≠ 10 by omega),
      up_ne (show (2:Nat) ≠ 19 by omega), up_ne (show (2:Nat) ≠ 18 by omega),
      up_ne (show (2:Nat) ≠ 20 by omega), up_ne (show (2:Nat) ≠ 11 by omega), fm2]
  have f'4 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 4 = m := by
    rw [up_ne (show (4:Nat) ≠ 21 by omega), up_ne (show (4:Nat) ≠ 10 by omega),
      up_ne (show (4:Nat) ≠ 19 by omega), up_ne (show (4:Nat) ≠ 18 by omega),
      up_ne (show (4:Nat) ≠ 20 by omega), up_ne (show (4:Nat) ≠ 11 by omega), fm4]
  have f'7 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 7 = n := by
    rw [up_ne (show (7:Nat) ≠ 21 by omega), up_ne (show (7:Nat) ≠ 10 by omega),
      up_ne (show (7:Nat) ≠ 19 by omega), up_ne (show (7:Nat) ≠ 18 by omega),
      up_ne (show (7:Nat) ≠ 20 by omega), up_ne (show (7:Nat) ≠ 11 by omega), fm7]
  have f'8 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 8 = 2 * n + 23 := by
    rw [up_ne (show (8:Nat) ≠ 21 by omega), up_ne (show (8:Nat) ≠ 10 by omega),
      up_ne (show (8:Nat) ≠ 19 by omega), up_ne (show (8:Nat) ≠ 18 by omega),
      up_ne (show (8:Nat) ≠ 20 by omega), up_ne (show (8:Nat) ≠ 11 by omega), fm8]
  have f'9 : (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) 9 = h := by
    rw [up_ne (show (9:Nat) ≠ 21 by omega), up_ne (show (9:Nat) ≠ 10 by omega),
      up_ne (show (9:Nat) ≠ 19 by omega), up_ne (show (9:Nat) ≠ 18 by omega),
      up_ne (show (9:Nat) ≠ 20 by omega), up_ne (show (9:Nat) ≠ 11 by omega), fm9]
  have f'fit : ∀ q, (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1))
      21 (m + 1)) q < 2 ^ w :=
    up_fit (up_fit (up_fit (up_fit (up_fit (up_fit hfitm h2L)
      (haddr _ (env_b (A := 2 ^ (n / 2)) (B := 2 ^ (n - n / 2)) (pair_b hbases'))))
      (haddr _ (env_d (A := 2 ^ (n / 2)) (B := 2 ^ (n - n / 2)) (pair_d hbases'))))
      (haddr _ (env_b (A := 2 ^ (n / 2)) (B := 2 ^ (n - n / 2)) (pair_b hbases'))))
      (haddr _ hk1e)) (haddr _ hm1e)
  -- the merge preserves AReg2: registers stay ≤ 22, the array region inside Env
  have hsub : ∀ c, MReg d L c → AReg2 n c := by
    intro c hc
    rcases hc with rfl|rfl|rfl|rfl|rfl|rfl|rfl|harr
    · exact Or.inl (by omega)
    · exact Or.inl (by omega)
    · exact Or.inl (by omega)
    · exact Or.inl (by omega)
    · exact Or.inl (by omega)
    · exact Or.inl (by omega)
    · exact Or.inl (by omega)
    · obtain ⟨h1, h2⟩ := harr
      have hd26 : 3 * n + 26 ≤ c := by
        rcases pair_d hbases' with h | h
        · rw [h] at h1
          exact Nat.le_trans (Nat.le_add_right _ _) h1
        · rw [h] at h1
          exact Nat.le_trans (Nat.le_trans (Nat.le_succ _)
            (Nat.le_trans (Nat.le_add_right _ _) (Nat.le_add_right _ _))) h1
      refine Or.inr ⟨Nat.le_trans (Nat.le_succ (3 * n + 25)) hd26, ?_⟩
      exact areg_cell (A := 2 ^ (n / 2)) (B := 2 ^ (n - n / 2)) (pair_d hbases') h2Lm h1 h2
  have hpres5 : Pres (AReg2 n) f
      (up (up (up (up (up f 20 (2 * n + 23 + h + k)) 17 (instA2 x h (k - 1))) 12 0) 13 0) 14 0) := by
    refine pres_trans (pres_up (c := 20) (v := 2 * n + 23 + h + k) (Or.inl (by omega))) ?_
    refine pres_trans (pres_up (c := 17) (v := instA2 x h (k - 1)) (Or.inl (by omega))) ?_
    refine pres_trans (pres_up (c := 12) (v := 0) (Or.inl (by omega))) ?_
    refine pres_trans (pres_up (c := 13) (v := 0) (Or.inl (by omega))) ?_
    exact pres_up (c := 14) (v := 0) (Or.inl (by omega))
  have hpresf : Pres (AReg2 n) f fm := pres_trans hpres5 (pres_mono hsub hpm)
  have hPA : Pres (AReg2 n) f
      (up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b) 10 (k + 1)) 21 (m + 1)) := by
    refine pres_trans hpresf ?_
    refine pres_trans (pres_up (c := 11) (v := 2 * L) (Or.inl (by omega))) ?_
    refine pres_trans (pres_up (c := 20) (v := b) (Or.inl (by omega))) ?_
    refine pres_trans (pres_up (c := 18) (v := d) (Or.inl (by omega))) ?_
    refine pres_trans (pres_up (c := 19) (v := b) (Or.inl (by omega))) ?_
    refine pres_trans (pres_up (c := 10) (v := k + 1) (Or.inl (by omega))) ?_
    exact pres_up (c := 21) (v := m + 1) (Or.inl (by omega))
  refine ⟨6 + c2 + 6, up (up (up (up (up (up fm 11 (2 * L)) 20 b) 18 d) 19 b)
      10 (k + 1)) 21 (m + 1), by omega, ?_, f'10, f'11, f'18, f'19, f'21, f'arr,
    f'1, f'2, f'4, f'7, f'8, f'9, f'fit, hPA⟩
  rw [hwalk6, hex2, htail]
  simp only [Nat.sub_sub]

end SubsetSum.MITM.P2M
