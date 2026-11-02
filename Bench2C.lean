import Submission.Bench
import Submission.Prog2
set_option autoImplicit true

/-!
# Bench2C — rock battery + step measurement for prog2 **v2** (R2125607749, R2125607814)

Self-contained against v2: `prog2 = prologue ++ phaseA ++ canon ++ phaseA2 ++ scanB ++ smallN`.
`Bench2.lean` (v1-era: references the dead radix names `full2`/`LPA2END`) and
`Prog2.lean` (Lane-1A's) are NOT edited.

## Why this file was rewritten (R2125607814, 2026-11-02)

The previous version ran the battery through `execMem`/`exec`, whose memory is a
chain of nested closures (`fun x => if x = i then v else m x`).  A cell READ
therefore walks that chain, so a run of `t` steps costs `Θ(t²)`.  Measured cost
of the measurement section alone: n=24 needs ≈2.6·10⁵ steps ⇒ ≈3.4·10¹⁰ chain
traversals — hours per instance, never finished (two runs, 28 min and 3h11m,
produced zero output).  `execA` below is the same instruction-for-instruction
machine with memory in an `Array`, so a read is O(1); the section now runs in
seconds.

## Fidelity of `execA` (the battery is only as good as this)

Three independent pins, all checked in §2:
1. **Step counts** must equal the minimal halting fuel measured against the
   *statement's* `exec` by bisection (`StepCheck.lean`: 480 / 870 / 1241) and
   the counts of the independent Python simulator (`py_battery_out.txt`:
   n=12 hit/all/miss = 4326 / 4242 / 4243).  A minimal-fuel agreement pins one
   instruction = one step, including the halting step.
2. **Memory snapshots** must equal `execMem`'s (the proven `execMem_snd` mirror
   of `exec`) over the *whole* touched address range at matched step counts.
3. **Verdicts** must equal `exec`'s (the statement's own authority) on the
   small-n cases, and the DP oracle's everywhere.

Sections:
  §1 pc map + reproducibility pins
  §2 fidelity of `execA` (steps, memory, verdicts)
  §3 rock battery vs the DP oracle: 15 edges, 8 dup-heavy n=8, 20 LCG
     (seed 20261031), 4 oracle spots (n=12,16,20), 8 width-blindness adversarial
     (huge aᵢ ≫ 2^n at even AND odd n, t = Σa, empty-only) — prog2 AND prog
  §4 step-count measurement at n = 12,16,20,24 on exhaustive-NO instances
     (t = Σa+1: scan runs to exhaustion — full worst case), per-phase marks,
     growth ratios, S₁/S₂ cross-checks
  §5 scale verdicts at n = 22,24,26 without an oracle
-/

namespace Bench2C

open BigOSpeedrun.SubsetSum SubsetSum.MITM SubsetSum.MITM.Bench

/-- Flushing print: the previous run died with 0 bytes of output because Lean
buffers stdout until exit. -/
def say (s : String) : IO Unit := do
  IO.println s
  (← IO.getStdout).flush

/-! ## §0 helpers -/

def emittedBefore : List Line → Nat → Nat
  | [], _ => 0
  | .mark l' :: rest, l => if l' = l then 0 else emittedBefore rest l
  | .raw _ :: rest, l => 1 + emittedBefore rest l
  | .jblt _ _ _ :: rest, l => 1 + emittedBefore rest l

def full1 : List Line := prologue ++ phaseA ++ phaseB ++ smallN

/-- pc map of prog (filed): phaseA entry 86, phaseB entry 148. -/
def pcPA : Nat := 86
def pcPB1 : Nat := 86 + (resolve phaseA).length

/-- pc map of prog2 (v2): phaseA entry 86, canon entry = phaseB's old 148,
scanB entry = 148 + |canon| + |phaseA2| = 224. -/
def pcCan : Nat := pcPB1
def pcScan : Nat := pcPB1 + (resolve canon).length + (resolve phaseA2).length

def bitsOf (as : List Nat) (t : Nat) : Nat := Nat.log2 (as.foldl max t) + 1
def wOf (n : Nat) (as : List Nat) (t : Nat) : Nat := wordLength n (bitsOf as t)

/-- Generous fuel; a correct run halts far below it (only a hang pays fuel). -/
def fuelOf (n : Nat) : Nat :=
  400 * 2 ^ (n / 2) + (40 * n + 200) * 2 ^ (n - n / 2) + 5000

/-- Array capacity: the largest address any phase can touch is
`B3 + 2^m − 1 = 3n + 26 + 2^h + 2·2^m` (Prog2.lean §"Layout extension"), so
`8·2^m + 4n + 256` clears it for every n ≥ 2.  `execA` reports the largest
address it actually touched, and the driver checks it stayed under this. -/
def arrSize (n : Nat) : Nat := 8 * 2 ^ (n - n / 2) + 4 * n + 256

/-- Exact subset-sum oracle by bitset fold: bit `s` set ⟺ some subset of the
elements seen so far sums to `s`.  O(#elems · Σa) instead of the previous
`2^n`-enumeration oracle (which was `2^24 · 24` list operations at n=24).
Elements above `t` can never be in a subset summing to `t` (all `aᵢ > 0`), so
they are skipped — that is what keeps the bitsets small. -/
def oracle (as : List Nat) (t : Nat) : Bool :=
  if t > as.sum then false
  else ((as.foldl (fun r a => if a > t then r else r ||| (r <<< a)) 1) >>> t) &&& 1 = 1

/-- Structural `Instr` equality (the pinned statement defines no BEq and must
not be edited) — TEST-ONLY. -/
def instrEq : Instr → Instr → Bool
  | .one i, .one j => i == j
  | .add i j k, .add i' j' k' => i == i' && j == j' && k == k'
  | .sub i j k, .sub i' j' k' => i == i' && j == j' && k == k'
  | .mul i j k, .mul i' j' k' => i == i' && j == j' && k == k'
  | .div i j k, .div i' j' k' => i == i' && j == j' && k == k'
  | .rem i j k, .rem i' j' k' => i == i' && j == j' && k == k'
  | .and i j k, .and i' j' k' => i == i' && j == j' && k == k'
  | .or i j k, .or i' j' k' => i == i' && j == j' && k == k'
  | .xor i j k, .xor i' j' k' => i == i' && j == j' && k == k'
  | .shl i j k, .shl i' j' k' => i == i' && j == j' && k == k'
  | .shr i j k, .shr i' j' k' => i == i' && j == j' && k == k'
  | .load i j, .load i' j' => i == i' && j == j'
  | .store i j, .store i' j' => i == i' && j == j'
  | .rand i, .rand j => i == j
  | .blt i j l, .blt i' j' l' => i == i' && j == j' && l == l'
  | .accept, .accept => true
  | .reject, .reject => true
  | _, _ => false

def progEq (l1 l2 : List Instr) : Bool :=
  l1.length == l2.length && (l1.zip l2).all fun p => instrEq p.1 p.2

/-- The array under `bd` read out as a list of length `len`. -/
def arrAt (mem : Nat → BitVec w) (bd len : Nat) : List Nat :=
  (List.range len).map fun i => (mem (bd + i)).toNat

def sortedAsc (l : List Nat) : Bool :=
  (l.zip (l.drop 1)).all fun p => p.1 ≤ p.2

/-! ### Lean-side reference: generated half-sum multiset, mmerge-sorted -/

/-- Unsorted doubling generation — the multiset `halfSums` builds. -/
def genSums : List Nat → List Nat
  | [] => [0]
  | a :: as' => let l := genSums as'; l ++ l.map fun x => x + a

/-- Spec-exact merge (Sort.lean's `mmerge`: take right only when strictly
smaller). -/
def mergeNat : List Nat → List Nat → List Nat
  | [], r => r
  | l, [] => l
  | a :: l', b :: r' =>
    if b < a then b :: mergeNat (a :: l') r' else a :: mergeNat l' (b :: r')

/-- Merge sort with an explicit fuel argument — structural on the fuel, no
termination tactic needed. -/
def msortF : (fuel : Nat) → List Nat → List Nat
  | 0, l => l
  | fuel + 1, l =>
    if l.length ≤ 1 then l else
    let half := l.length / 2
    mergeNat (msortF fuel (l.take half)) (msortF fuel (l.drop half))

def msort (l : List Nat) : List Nat := msortF l.length l

/-! ## §0b. `execA` — the array-memory machine -/

/-- Machine state carried through the run (`s` = instructions executed). -/
structure St (w : Nat) where
  s : Nat
  pc : Nat
  r : Nat
  arr : Array (BitVec w)
  mx : Nat
  sa : Nat
  sb : Nat
  sc : Nat

/-- Result of a run: `verdict = none` means the fuel ran out before a halt
(the memory and step count are still the true state at that point, which is
what the fidelity check needs). -/
structure Run (w : Nat) where
  verdict : Option Bool
  steps : Nat
  sa : Nat
  sb : Nat
  sc : Nat
  maxAddr : Nat
  mem : Nat → BitVec w

/-- Mirror of the statement's `exec` (and of `Bench.execMem`), with memory in
an `Array` so that a cell read is O(1) instead of O(steps).  Case-for-case the
same instruction semantics; `mA mB mC` record the step index at which
`pc` first equals that mark (0 = mark never reached). -/
def execA {w : Nat} (P : List Instr) (ρ : Nat → BitVec w) (mA mB mC : Nat) :
    (t : Nat) → (st : St w) → Run w
  | 0, st =>
    { verdict := none, steps := st.s, sa := st.sa, sb := st.sb, sc := st.sc
      maxAddr := st.mx, mem := fun i => st.arr.getD i 0 }
  | t + 1, st =>
    let rd : Nat → BitVec w := fun i => st.arr.getD i 0
    -- record phase entries before the step executes
    let sa := if st.pc = mA ∧ st.sa = 0 then st.s else st.sa
    let sb := if st.pc = mB ∧ st.sb = 0 then st.s else st.sb
    let sc := if st.pc = mC ∧ st.sc = 0 then st.s else st.sc
    let go (pc' : Nat) (arr' : Array (BitVec w)) (mx' : Nat) (r' : Nat) : Run w :=
      execA P ρ mA mB mC t
        { s := st.s + 1, pc := pc', r := r', arr := arr', mx := mx', sa := sa, sb := sb, sc := sc }
    let wr (i : Nat) (v : BitVec w) : Array (BitVec w) := st.arr.set! i v
    match P.getD st.pc .reject with
    | .one i => go (st.pc + 1) (wr i 1) (max st.mx i) st.r
    | .add i j k => go (st.pc + 1) (wr i (rd j + rd k)) (max st.mx i) st.r
    | .sub i j k => go (st.pc + 1) (wr i (rd j - rd k)) (max st.mx i) st.r
    | .mul i j k => go (st.pc + 1) (wr i (rd j * rd k)) (max st.mx i) st.r
    | .div i j k => go (st.pc + 1) (wr i (rd j / rd k)) (max st.mx i) st.r
    | .rem i j k => go (st.pc + 1) (wr i (rd j % rd k)) (max st.mx i) st.r
    | .and i j k => go (st.pc + 1) (wr i (rd j &&& rd k)) (max st.mx i) st.r
    | .or i j k => go (st.pc + 1) (wr i (rd j ||| rd k)) (max st.mx i) st.r
    | .xor i j k => go (st.pc + 1) (wr i (rd j ^^^ rd k)) (max st.mx i) st.r
    | .shl i j k => go (st.pc + 1) (wr i (rd j <<< rd k)) (max st.mx i) st.r
    | .shr i j k => go (st.pc + 1) (wr i (rd j >>> rd k)) (max st.mx i) st.r
    | .load i j => go (st.pc + 1) (wr i (rd (rd j).toNat)) (max st.mx i) st.r
    | .store i j =>
      let a := (rd i).toNat
      go (st.pc + 1) (wr a (rd j)) (max st.mx a) st.r
    | .rand i => go (st.pc + 1) (wr i (ρ st.r)) (max st.mx i) (st.r + 1)
    | .blt i j l => go (if rd i < rd j then l else st.pc + 1) st.arr st.mx st.r
    | .accept => { verdict := some true, steps := st.s + 1, sa := sa, sb := sb, sc := sc,
                   maxAddr := st.mx, mem := rd }
    | .reject => { verdict := some false, steps := st.s + 1, sa := sa, sb := sb, sc := sc,
                   maxAddr := st.mx, mem := rd }

/-- Initial array from the statement's `loadWords`. -/
def initArr (w S : Nat) (ws : List Nat) : Array (BitVec w) :=
  ((List.range S).map fun i => BitVec.ofNat w (ws.getD i 0)).toArray

/-- Run `P` on the instance `(n, as, t)` at the statement's word length. -/
def runA (P : List Instr) (mA mB mC n : Nat) (as : List Nat) (t : Nat) :
    (fuel : Nat) → Run (wOf n as t)
  | fuel =>
    let w := wOf n as t
    let S := arrSize n
    execA P (fun _ => 0) mA mB mC fuel
      { s := 0, pc := 0, r := 0, arr := initArr w S (n :: as ++ [t]), mx := 0,
        sa := 0, sb := 0, sc := 0 }

def verdictOf (r : Run w) : Option Bool := r.verdict

/-! ## §1 pc map + reproducibility pins -/

#eval (resolve full1).length                    -- 249 (filed prog)
#eval progEq (resolve full1) prog               -- true: filed prog reproducible
#eval (resolve canon).length                    -- 13
#eval (resolve phaseA2).length                  -- 63
#eval (resolve scanB).length                    -- 20
#eval pcScan                                    -- 224 = 148 + 13 + 63
#eval (resolve prog2Lines).length               -- 301
#eval progEq (resolve prog2Lines) prog2        -- true
#eval prog2.all fun q => !isRandInstr q         -- true: no rand (Det applies)

/-! ## §2 fidelity of `execA`

The statement's `exec` is the authority.  Three checks:

2a **steps**: minimal-halting-fuel bisection against `exec` (StepCheck.lean)
   gave exactly 480 / 870 / 1241 for these three cases; the Python simulator
   gave 4326 / 4242 / 4243 for the three n=12 ones.  `execA` must reproduce
   every one.
2b **memory**: at a step count below the halting step (so nothing halts) the
   whole touched range must equal `execMem`'s — `execMem_snd` proves that
   memory's verdict component is `exec`'s.
2c **verdict**: at generous fuel, `execA`'s verdict must equal the statement
   `exec`'s own.
-/

def twelve : List Nat := (List.range 12).map fun i => i + 7

#eval show IO Unit from do
  say "== §2a step counts vs minimal-fuel bisection (StepCheck) and the Python sim =="
  let checks : List (String × Nat × List Nat × Nat × Nat) :=
    [ ("E09-hit-n4",      4, [3,4,5,6], 6,   480)
    , ("HB2-hugeb-miss",  6, [2^40+7, 2^40+9, 2^41+3, 5, 2^40+7, 11], 2^42, 870)
    , ("D8-dup8-miss",    8, [5,5,5,5,5,5,5,5], 41, 1241)
    , ("P12a-hit",       12, twelve, 24, 4326)
    , ("P12b-all",       12, twelve, 150, 4242)
    , ("P12c-miss",      12, twelve, 151, 4243) ]
  let mut ok := 0
  for (tag, n, as, t, want) in checks do
    let run := runA prog2 pcPA pcCan pcScan n as t (fuelOf n)
    match run.verdict with
    | none => say s!"FAIL steps {tag}: fuel exhausted at {run.steps}"
    | some _ =>
      if run.steps == want then
        ok := ok + 1
        say s!"PASS steps {tag}: {run.steps} (== bisected/sim {want}) verdict={run.verdict}"
      else
        say s!"FAIL steps {tag}: {run.steps} ≠ {want} verdict={run.verdict}"
  say s!"§2a: {ok}/{checks.length}"

#eval show IO Unit from do
  say "== §2b memory snapshot == execMem over the touched range (mid-run) =="
  let cases : List (String × Nat × List Nat × Nat) :=
    [ ("n2",  2, [3,5], 0)
    , ("n4",  4, [3,4,5,6], 6)
    , ("n7",  7, [1,1,1,1,1,1,1], 3)
    , ("n8a", 8, [5,5,5,5,5,5,5,5], 20)
    , ("n8b", 8, [2^20, 2^20+1, 2^20+2, 2^20+3, 5, 7, 9, 11], 2^20+9) ]
  let mut ok := 0
  let mut tot := 0
  for (tag, n, as, t) in cases do
    let w := wOf n as t
    let S := arrSize n
    for steps in [20, 500] do
      tot := tot + 1
      let want := (execMem prog2 (fun _ => 0) steps 0 0
        (loadWords w (n :: as ++ [t]))).1
      let got := (execA prog2 (fun _ => 0) pcPA pcCan pcScan steps
        { s := 0, pc := 0, r := 0, arr := initArr w S (n :: as ++ [t]), mx := 0,
          sa := 0, sb := 0, sc := 0 }).mem
      let bad := (List.range S).filter fun i => !decide (got i = want i)
      if bad.isEmpty then
        ok := ok + 1
        say s!"PASS mem {tag}@{steps}: all {S} cells equal"
      else
        say s!"FAIL mem {tag}@{steps}: {(bad.length)} cells differ, first={bad.head?}"
  say s!"§2b: {ok}/{tot}"

#eval show IO Unit from do
  say "== §2c verdicts == the statement's own `exec` (n ≤ 8) =="
  let cases : List (String × Nat × List Nat × Nat) :=
    [ ("n2-empty", 2, [3,5], 0), ("n2-all", 2, [3,5], 8), ("n2-gap", 2, [3,5], 4)
    , ("n3-gap", 3, [2,4,6], 11), ("n4-hit", 4, [3,4,5,6], 6)
    , ("n7-dup", 7, [1,1,1,1,1,1,1], 3), ("n7-dup-no", 7, [1,1,1,1,1,1,1], 8)
    , ("n8-dup-yes", 8, [5,5,5,5,5,5,5,5], 20)
    , ("n8-dup-no", 8, [5,5,5,5,5,5,5,5], 41)
    , ("n8-huge", 8, [2^20, 2^20+1, 2^20+2, 2^20+3, 5, 7, 9, 11], 2^20+9) ]
  let mut ok := 0
  for (tag, n, as, t) in cases do
    let w := wOf n as t
    let fuel := 4000
    let want := exec prog2 (fun _ => 0) fuel 0 0 (loadWords w (n :: as ++ [t]))
    let got := verdictOf (runA prog2 pcPA pcCan pcScan n as t fuel)
    if got == want then
      ok := ok + 1
      say s!"PASS verdict {tag}: {got} == exec {want}"
    else
      say s!"FAIL verdict {tag}: {got} ≠ exec {want}"
  say s!"§2c: {ok}/{cases.length}"

/-! ## §3 rock battery -/

structure Case where
  name : String
  n : Nat
  as : List Nat
  t : Nat

def edgeCases : List Case :=
  [ { name := "e01 n2 empty",        n := 2, as := [3,5], t := 0 }
  , { name := "e02 n2 single1",      n := 2, as := [3,5], t := 3 }
  , { name := "e03 n2 single2",      n := 2, as := [3,5], t := 5 }
  , { name := "e04 n2 all",          n := 2, as := [3,5], t := 8 }
  , { name := "e05 n2 gap",          n := 2, as := [3,5], t := 4 }
  , { name := "e06 n2 over",         n := 2, as := [3,5], t := 9 }
  , { name := "e07 n2 hugeT",        n := 2, as := [3,5], t := 2^40 }
  , { name := "e08 n3 empty",        n := 3, as := [2,4,6], t := 0 }
  , { name := "e09 n3 single3",      n := 3, as := [2,4,6], t := 6 }
  , { name := "e10 n3 all",          n := 3, as := [2,4,6], t := 12 }
  , { name := "e11 n3 gap",          n := 3, as := [2,4,6], t := 11 }
  , { name := "e12 n4 hugeElem",     n := 4, as := [1,2,2^20,4], t := 8 }
  , { name := "e13 n7 dupmin yes",   n := 7, as := [1,1,1,1,1,1,1], t := 3 }
  , { name := "e14 n7 dupmin no",    n := 7, as := [1,1,1,1,1,1,1], t := 8 }
  , { name := "e15 n8 dupmin no",    n := 8, as := [2,2,2,2,2,2,2,2], t := 9 } ]

def dupCases : List Case :=
  [1, 3, 5, 10, 21, 30, 40, 41].map fun tv =>
    { name := s!"dup8 t={tv}", n := 8, as := [5,5,5,5,5,5,5,5], t := tv }

def lcg (s : Nat) : Nat := (s * 1103515245 + 12345) % 2147483648

def drawVals : Nat → Nat → (List Nat × Nat)
  | s, 0 => ([], s)
  | s, k + 1 =>
    let s1 := lcg s
    let (rest, s2) := drawVals s1 k
    ((s1 % 16 + 1) :: rest, s2)

/-- 20 pseudorandom instances, LCG seed 20261031, n ∈ 2..7, t ∈ [0, Σa+10]. -/
def randCases : List Case :=
  let rec go : Nat → Nat → List Case → List Case
    | _, 0, acc => acc.reverse
    | s, i + 1, acc =>
      let s1 := lcg s
      let n := 2 + s1 % 6
      let (as, s2) := drawVals s1 n
      let s3 := lcg s2
      let t := s3 % (as.sum + 11)
      go s3 i ({ name := s!"rand{20 - i} n={n} t={t}", n := n, as := as, t := t } :: acc)
  go 20261031 20 []

def spotCases : List Case :=
  [ { name := "spot n12 t=61",  n := 12,
      as := (List.range 12).map fun i => i + 7, t := 61 }
  , { name := "spot n12 t=151", n := 12,
      as := (List.range 12).map fun i => i + 7, t := 151 }
  , { name := "spot n16 yes",   n := 16,
      as := (List.range 16).map fun i => 1000 + 7 * i, t := 1000 + 1007 + 1014 }
  , { name := "spot n20 yes",   n := 20,
      as := (List.range 20).map fun i => 5000 + 13 * i,
      t := 5000 + 5013 + 5026 + 5039 } ]

/-- Width-blindness adversarial set: values ≫ 2^n, odd n, t = Σa exact,
empty-only — the cases that KILL any fixed-pass radix and that the
b-independent merge+scan must pass. -/
def widthBlindCases : List Case :=
  [ { name := "wb n8 a~2^20 yes", n := 8,
      as := [2^20, 2^20+1, 2^20+2, 2^20+3, 5, 7, 9, 11], t := 2^20 + 9 }
  , { name := "wb n8 a~2^20 no",  n := 8,
      as := [2^20, 2^20+1, 2^20+2, 2^20+3, 1, 1, 1, 1], t := 2^19 }
  , { name := "wb n7 odd a~2^22", n := 7,
      as := [2^22, 1, 2, 4, 8, 16, 32], t := 2^22 + 42 }
  , { name := "wb n7 odd no",     n := 7,
      as := [2^22, 1, 2, 4, 8, 16, 32], t := 2^22 + 64 }
  , { name := "wb n5 empty-only", n := 5, as := [7,11,13,17,19], t := 0 }
  , { name := "wb n9 t=Σa",       n := 9,
      as := [3,5,7,9,11,13,15,17,19], t := 99 }
  , { name := "wb n6 all-equal huge", n := 6,
      as := [2^25, 2^25, 2^25, 2^25, 2^25, 2^25], t := 3 * 2^25 }
  , { name := "wb n6 all-equal huge no", n := 6,
      as := [2^25, 2^25, 2^25, 2^25, 2^25, 2^25], t := 3 * 2^25 + 1 } ]

def battery : List Case :=
  edgeCases ++ dupCases ++ randCases ++ spotCases ++ widthBlindCases

#eval show IO Unit from do
  say "== §3 rock battery (prog2 AND prog vs the exact DP oracle) =="
  let mut npass := 0
  for c in battery do
    let exp := oracle c.as c.t
    let got2 := verdictOf (runA prog2 pcPA pcCan pcScan c.n c.as c.t (fuelOf c.n))
    let got1 := verdictOf (runA prog pcPA pcPB1 999999 c.n c.as c.t (fuelOf c.n))
    let ok := got2 == some exp && got1 == some exp
    if ok then npass := npass + 1
    else say s!"  FAIL {c.name}: oracle={exp} prog2={got2} prog={got1}"
  say s!"BATTERY: {npass}/{battery.length} pass"

/-! ## §4 step counts per phase (n = 12,16,20,24, exhaustive-NO: aᵢ = i+7, t = Σa+1) -/

def measInst (n : Nat) : List Nat × Nat :=
  let as := (List.range n).map fun i => i + 7
  (as, as.sum + 1)

/-! ## §5 scale verdicts without an oracle -/

#eval show IO Unit from do
  say "== §4 step counts (exhaustive-NO: aᵢ = i+7, t = Σa+1) =="
  let mut prevTot2 := 0; let mut prevScan := 0; let mut prevM2 := 0; let mut prevPB1 := 0
  let mut prevN := 0
  for n in [12, 16, 20, 24] do
    let (as, t) := measInst n
    let run2 := runA prog2 pcPA pcCan pcScan n as t (fuelOf n)
    let run1 := runA prog pcPA pcPB1 999999 n as t (fuelOf n)
    match run2.verdict, run1.verdict with
    | some _, some _ =>
      let h := n / 2
      let m := n - h
      let tot2 := run2.steps
      let merge1 := run2.sb - run2.sa
      let canM2 := run2.sc - run2.sb
      let scan := tot2 - run2.sc
      let tot1 := run1.steps
      let pb1 := tot1 - run1.sb
      say s!"n={n} verdicts prog={run1.verdict} prog2={run2.verdict} agree={run1.verdict == run2.verdict} (expect false: t>Σa)"
      say s!"  prog2: prologue={run2.sa} merge1={merge1} canon+merge2={canM2} scan={scan} TOTAL={tot2} maxAddr={run2.maxAddr} cap={arrSize n}"
      say s!"  prog : prologue={run1.sa} merge1={run1.sb - run1.sa} phaseB={pb1} TOTAL={tot1}"
      say s!"  C-fit ×1000 (total/2^(n/2)): prog2={1000 * tot2 / 2 ^ h} prog={1000 * tot1 / 2 ^ h}"
      say s!"  per-2^(n/2) ×1000: scan={1000 * scan / 2 ^ h} canon+merge2={1000 * canM2 / 2 ^ h} | phaseB/2^(n-h)={pb1 / 2 ^ m}"
      if prevN ≠ 0 then
        say s!"  growth {prevN}→{n} ×1000 (Θ(2^(n/2)) ⟹ 4000): prog2total={1000 * tot2 / prevTot2.max 1} scan={1000 * scan / prevScan.max 1} merge2={1000 * canM2 / prevM2.max 1} | prog-phaseB={1000 * pb1 / prevPB1.max 1}"
      -- cross-checks at scanB entry: S₁ canonical at [22], S₂ at [18]
      let mem2 := run2.mem
      let arr1Base := (mem2 22).toNat
      let s1 := arrAt mem2 arr1Base (2 ^ h)
      let s2Base := (mem2 18).toNat
      let s2 := arrAt mem2 s2Base (2 ^ m)
      let bd1 := (run1.mem 18).toNat
      let s1prog := arrAt run1.mem bd1 (2 ^ h)
      let expS1 := msort (genSums ((List.range h).map fun i => i + 7))
      let expS2 := msort (genSums ((List.range m).map fun i => h + i + 7))
      say s!"  xcheck S₁: base={arr1Base} (expect {3 * n + 25}) ==prog-bd={s1 == s1prog} ==lean={s1 == expS1} sorted={sortedAsc s1}"
      say s!"  xcheck S₂: base={s2Base} sorted={sortedAsc s2} ==lean={s2 == expS2} m=[4]→{(mem2 4).toNat} H=[5]→{(mem2 5).toNat}"
      prevTot2 := tot2; prevScan := scan; prevM2 := canM2; prevPB1 := pb1; prevN := n
    | _, _ =>
      say s!"n={n}: FUEL EXHAUSTED or mark missed — investigate"

#eval show IO Unit from do
  say "== §5 scale verdicts without oracle (mathematical ground truth) =="
  for n in [22, 24, 26] do
    let as := (List.range n).map fun i => i + 7
    let yesV := verdictOf (runA prog2 pcPA pcCan pcScan n as as.sum (fuelOf n))
    let noV := verdictOf (runA prog2 pcPA pcCan pcScan n as (as.sum + 1) (fuelOf n))
    let yes1 := verdictOf (runA prog pcPA pcPB1 999999 n as as.sum (fuelOf n))
    let no1 := verdictOf (runA prog pcPA pcPB1 999999 n as (as.sum + 1) (fuelOf n))
    say s!"  n={n}: prog2 Σa={yesV} (expect true) Σa+1={noV} (expect false) | prog agrees={yes1 == yesV && no1 == noV}"

end Bench2C
