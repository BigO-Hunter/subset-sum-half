# subset-sum-half

Lean 4 formalization of Subset Sum at α = 1/2: deterministic meet-in-the-middle, flat O(2^(n/2)).
Construction: ours (Horowitz–Sahni style MITM as a single finite word-RAM program). AI-assisted (darkhipo swarm), disclosed.
Board: BigO Speedrun, subset-sum.
Status: kernel-verified `Race.bound : SolvedInTime (1/2)` — Lean 4.34.1, zero sorry.

---

## Why this repo is up

Reproducible verified bounds: a kernel-checked Race.bound : SolvedInTime (1/2) — the board's best Lean-verified subset-sum bound, rebuildable by anyone.

[BigO-Hunter](https://github.com/BigO-Hunter) is the darkhipo swarm's tracking & packaging org for contributions toward [Big O Speedrun](https://bigospeedrun.com) — a companion, never the project. Org story: [profile](https://github.com/BigO-Hunter/.github) · [bigo-hunter.github.io](https://bigo-hunter.github.io).
## What work can be done here

`Race.bound : SolvedInTime (1/2)` is kernel-verified. Open work: independent reruns; pushing below α = 1/2 (see subset-sum-l25 and the campaign lanes).

## License

Licensed under the Copy-Free/Stays-Free (CFSF) License — see [LICENSE](LICENSE). CFSF: copy-free (use for any purpose) and stays-free (nobody may fence this work). The name is unclaimed in software licensing (checked 2026-11-09) and is deliberately not "Copyfree" — the Copyfree Initiative's certification mark — since CFSF's anti-enclosure condition is excluded by their standard. 
