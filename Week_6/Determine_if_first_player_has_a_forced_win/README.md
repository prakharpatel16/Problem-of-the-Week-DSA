# Misère Nim — Determine Winner

## Problem Statement
The game of **Nim (misère version)** is played on heaps of stones:
- Two players alternate turns.
- On each turn, a player removes **one or more stones from exactly one heap**.
- The player who takes the **last stone loses** (misère condition).

Given three heap sizes `[a, b, c]`, determine if the **first player** has a forced win assuming both play optimally.

---

## Input Format
- An array/list of **three positive integers** `[a, b, c]`.

## Output Format
- Return **True** if the first player has a forced win.
- Return **False** otherwise.

---

## Key Observation (Theory — Misère Nim)

1. If **all heaps are of size 1**:
   - First player **wins** iff the number of heaps is **even**.
   - If odd, the first player **loses**.

2. If **any heap ≥ 2**:
   - The game behaves like **normal Nim**.
   - Compute the **nim-sum** = XOR of all heap sizes.
   - If `nim-sum != 0` → First player wins.
   - Else → First player loses.

---

## Algorithm
1. Check if all heaps are size `1`.
   - If yes, return `True` if the count is even, else `False`.
2. Otherwise:
   - Compute XOR of all heap sizes.
   - If non-zero, return `True`, else `False`.

---

## Complexity
- **Time:** O(1) (since only 3 heaps).
- **Space:** O(1).

---

## References
- [LeetCode – Nim Game](https://leetcode.com/problems/nim-game/)
- [GeeksforGeeks – Game of Nim](https://www.geeksforgeeks.org/nim-game-a-game-theory-classic/)
- [YouTube – Nim Game Explanation](https://www.youtube.com/results?search_query=nim+game+misere)
