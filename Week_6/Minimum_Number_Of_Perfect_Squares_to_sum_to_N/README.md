# Minimum Number of Perfect Squares to Sum to N (Facebook)

## Problem
Given an integer `n (1 ≤ n ≤ 10^4)`, find the minimum number of perfect squares whose sum equals `n`. Squares can repeat.

## Examples
- `13 = 9 + 4` → **2**
- `27 = 9 + 9 + 9` → **3**
- `1 = 1` → **1**

## Approaches

### 1) Dynamic Programming (Unbounded Coin Change)
Let `dp[x]` be the minimum squares summing to `x`.  
Transition: `dp[x] = min(dp[x - s]) + 1` for all squares `s ≤ x`.

- **Time:** `O(n √n)`
- **Space:** `O(n)`
- **Pros:** Simple, robust, returns exact answer.
- **Cons:** Slightly heavier than math shortcut.

### 2) Math Shortcut (Legendre + Lagrange)
- If `n` is a perfect square → `1`
- Else if `n = a^2 + b^2` for some integers → `2`
- Else reduce `n` by removing powers of 4: while `n % 4 == 0`, `n /= 4`  
  If `n % 8 == 7` → `4`
- Else → `3`

- **Time:** ~`O(√n)` (due to two-squares check)
- **Space:** `O(1)`
- **Pros:** Very fast; returns one of `{1,2,3,4}`
- **Cons:** Requires number theory reasoning

## Complexity Summary
| Approach | Time | Space |
| --- | --- | --- |
| DP | O(n √n) | O(n) |
| Math Shortcut | ~O(√n) | O(1) |

## Practice
- LeetCode – Perfect Squares  
- GFG – Minimum number of squares
