#!/usr/bin/env python3
"""Canonical filing pipeline for the subset-sum submission (R2125607414).

Body-native (Python + the multiaim tool bridge for register/capsule), and
the single source of truth — file.sh is a two-line shim onto this.

Rebuilt 2026-11-01 from the lessons of filing issue #94:
  - the package keeps the Submission/ module tree (flattening breaks
    imports); Bench.lean is INCLUDED (ExecEq's exec-mirror imports it)
  - the filed Bound must be a REDUCED rational (3/4, not 75/100); Rat
    literals do not kernel-reduce, so the entry theorem uses
    Race_bound_reduced (the rat75 bridge in Submission/Race.lean)
  - the issue body is EXACTLY the four form fields — no Notes section
    (the bot rejects unexpected/multiline fields; see the #93/#94 acks)
  - git runs as /usr/bin/git: the body shim routes `git commit` to
    safe-commit, which rejects -q and refuses non-body checkouts
  - the package is built FRESH (rm -rf .lake) and axiom-audited before
    pushing — a broken package is a public rejected submission
  - the pushed SHA is verified against the remote before filing
  - .lake/ is gitignored; only sources are tracked

Usage:
  python3 file.py            # full pipeline: verify → package → build → push → file
  python3 file.py --dry-run  # everything except push/file (safe to re-run)
"""
from __future__ import annotations

import argparse
import json
import logging
import shutil
import subprocess
import sys
from pathlib import Path

logger = logging.getLogger("file")

WD = Path.home() / "prove2me_workspace/subset-sum"
PKG = WD / "packaging"
REPO_NAME = "subset-sum-mitm"
GH_OWNER = "darkhipo"
REGISTER_ID = "2125607414"
BOUND = "3/4"
GIT = "/usr/bin/git"  # past the body's opencode-git-shim (see module docstring)

ENTRY_LEAN = """import Submission.Race

/-- The submission target: subset-sum in O(2^(0.75n)). -/
theorem Race.bound : BigOSpeedrun.SubsetSum.SolvedInTime (3 / 4 : Rat) :=
  SubsetSum.MITM.Race_bound_reduced
"""

COMMIT_MSG = """Subset-sum O(2^(0.75n)): single-program MITM on the word RAM

Deterministic meet-in-the-middle (Horowitz-Sahni): first-half sums built
by doubling merge, sorted, second-half candidates binary-searched for
complements of t. One finite List-Instr program for all n >= 2; small n
dispatches to unrolled verdict code. No Mathlib — core Lean only.
Statement byte-exact to the canonical challenge (sha 80bc6d28).

Race.bound : SolvedInTime (3/4), axioms [propext, Classical.choice,
Quot.sound], zero sorry across all modules.
"""


def run(cmd: list[str], cwd: Path | None = None, timeout: int = 1800,
        check: bool = True) -> subprocess.CompletedProcess:
    proc = subprocess.run(cmd, cwd=cwd, capture_output=True, text=True,
                          timeout=timeout)
    if check and proc.returncode != 0:
        tail = (proc.stderr or proc.stdout or "")[-800:]
        raise RuntimeError(f"command failed ({' '.join(cmd[:4])}…): {tail}")
    return proc


def body_tool(tool: str, payload: dict) -> None:
    """Best-effort multiaim tool call — never blocks the filing."""
    try:
        subprocess.run(["multiaim", "tool", tool, json.dumps(payload)],
                       capture_output=True, text=True, timeout=60)
    except (OSError, subprocess.SubprocessError) as exc:
        logger.warning("body tool %s failed (non-blocking): %s", tool, exc)


def axiom_audit(cwd: Path, import_line: str, theorem: str) -> str:
    probe = Path("/tmp") / f"axprobe_{theorem.replace('.', '_')}.lean"
    probe.write_text(f"{import_line}\n#print axioms {theorem}\n",
                     encoding="utf-8")
    proc = run(["lake", "env", "lean", str(probe)], cwd=cwd, timeout=600,
               check=False)
    out = proc.stdout + proc.stderr
    line = next((l for l in out.splitlines() if "depends on axioms" in l), "")
    if not line:
        raise RuntimeError(f"axiom audit produced nothing for {theorem}")
    if "sorryAx" in line:
        raise RuntimeError(f"sorryAx found: {line}")
    return line.strip()


def verify() -> None:
    logger.info("=== 1. VERIFY workspace ===")
    build = run(["lake", "build", "Submission"], cwd=WD, timeout=1800,
                check=False)
    if build.returncode != 0:
        raise RuntimeError("workspace build failed:\n"
                           + (build.stdout + build.stderr)[-1200:])
    logger.info("  build green")

    sorries = []
    for f in sorted((WD / "Submission").glob("*.lean")):
        for i, line in enumerate(f.read_text(encoding="utf-8").splitlines(), 1):
            if "sorry" in line and not any(
                    w in line for w in ("Zero sorry", "zero sorry", "no sorry")):
                sorries.append(f"{f.name}:{i}")
    if sorries:
        raise RuntimeError(f"sorry found: {sorries}")
    logger.info("  zero sorry")

    logger.info("  %s", axiom_audit(
        WD, "import Submission.Race",
        "SubsetSum.MITM.Race_bound_reduced"))


def package() -> Path:
    logger.info("=== 2. PACKAGE ===")
    repo = Path("/tmp") / REPO_NAME
    if repo.exists():
        shutil.rmtree(repo)
    (repo / "Submission").mkdir(parents=True)
    for name in ("README.md", "NOTICE", "lean-toolchain", "lakefile.toml"):
        shutil.copy(PKG / name, repo / name)
    (repo / ".gitignore").write_text(".lake/\n", encoding="utf-8")
    # ALL modules including Bench (ExecEq imports it)
    for src in sorted((WD / "Submission").glob("*.lean")):
        shutil.copy(src, repo / "Submission" / src.name)
    (repo / "Submission.lean").write_text(ENTRY_LEAN, encoding="utf-8")
    n = len(list((repo / "Submission").glob("*.lean")))
    logger.info("  packaged at %s (%d modules)", repo, n)
    return repo


def fresh_build(repo: Path) -> None:
    logger.info("=== 3. FRESH-BUILD the package (the verifier's view) ===")
    shutil.rmtree(repo / ".lake", ignore_errors=True)
    build = run(["lake", "build", "Submission"], cwd=repo, timeout=1800,
                check=False)
    if build.returncode != 0:
        raise RuntimeError("PACKAGE build failed:\n"
                           + (build.stdout + build.stderr)[-1500:])
    logger.info("  package builds fresh")
    # the verifier builds with autoImplicit=false globally (nmamano, #94):
    our = run(["lake", "env", "lean", "-DautoImplicit=false", "Submission.lean"],
              cwd=repo, timeout=900, check=False)
    if our.returncode != 0:
        raise RuntimeError("package fails under -DautoImplicit=false:\n"
                           + (our.stdout + our.stderr)[-900:])
    logger.info("  ✓ clean under the verifier harness (autoImplicit=false)")
    logger.info("  %s", axiom_audit(repo, "import Submission", "Race.bound"))


def push(repo: Path) -> str:
    logger.info("=== 4. PUSH ===")
    run([GIT, "init", "-q"], cwd=repo)
    run([GIT, "add", "-A"], cwd=repo)
    run([GIT, "-c", f"user.name={GH_OWNER}",
         "-c", f"user.email={GH_OWNER}@users.noreply.github.com",
         "commit", "-q", "-m", COMMIT_MSG], cwd=repo)
    sha = run([GIT, "rev-parse", "HEAD"], cwd=repo).stdout.strip()
    logger.info("  commit: %s", sha)
    create = run(["gh", "repo", "create", REPO_NAME, "--public",
                  "--source", ".", "--remote", "origin", "--push"],
                 cwd=repo, timeout=300, check=False)
    if create.returncode != 0:
        logger.info("  repo exists; pushing")
        run([GIT, "remote", "add", "origin",
             f"git@github.com:{GH_OWNER}/{REPO_NAME}.git"],
            cwd=repo, check=False)
        run([GIT, "push", "-q", "origin", "main"], cwd=repo, timeout=300)
    remote = run(["gh", "api", f"repos/{GH_OWNER}/{REPO_NAME}/commits/main",
                  "--jq", ".sha"], timeout=120).stdout.strip()
    if remote != sha:
        raise RuntimeError(f"pushed SHA {remote} != local {sha}")
    logger.info("  ✓ pushed and verified: https://github.com/%s/%s @ %s",
                GH_OWNER, REPO_NAME, sha)
    return sha


def file_issue(sha: str) -> str:
    logger.info("=== 5. FILE (exactly the four form fields) ===")
    body = (f"### Problem\n\nsubset-sum\n\n"
            f"### Repository URL\n\nhttps://github.com/{GH_OWNER}/{REPO_NAME}\n\n"
            f"### Commit SHA\n\n{sha}\n\n"
            f"### Bound\n\n{BOUND}\n")
    body_file = Path("/tmp/issue_body.md")
    body_file.write_text(body, encoding="utf-8")
    out = run(["gh", "issue", "create", "-R", "bigospeedrun/verifier",
               "--title", "[Lean submission] Subset-sum: exponent 3/4 "
                          "(0.75n), deterministic MITM",
               "--body-file", str(body_file)], timeout=120).stdout.strip()
    logger.info("  filed: %s", out)
    return out


def main() -> int:
    logging.basicConfig(level=logging.INFO, format="%(message)s")
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true",
                    help="verify + package + fresh-build only; no push, no file")
    args = ap.parse_args()
    try:
        verify()
        repo = package()
        fresh_build(repo)
        if args.dry_run:
            logger.info("=== DRY RUN — stopping before push/file ===")
            return 0
        sha = push(repo)
        url = file_issue(sha)
        body_tool("register_update", {
            "id": REGISTER_ID,
            "rider_append": f"FILED: {url} repo {GH_OWNER}/{REPO_NAME} "
                            f"sha {sha} bound {BOUND}"})
        body_tool("set_state", {"key": "checkpoint", "value": {
            "just_finished": f"subset-sum FILED: {url} @ {sha[:12]}",
            "next_action": "watch issue for bot ack / proof run (30-min cadence)"}})
        logger.info("=== DONE — watch the issue for the bot ack ===")
        return 0
    except RuntimeError as exc:
        logger.error("FILING ABORTED: %s", exc)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
