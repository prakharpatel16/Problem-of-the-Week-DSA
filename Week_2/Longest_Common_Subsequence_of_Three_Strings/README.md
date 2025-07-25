# 🔤 Longest Common Subsequence of Three Strings

## 🧩 Problem Statement

Given **three strings**, find the length of the **longest subsequence** that is **common to all three**.  
A subsequence maintains the relative order of characters, but not necessarily contiguity.

### 📥 Input:
- Three lines, each containing one string:
  - `S1`
  - `S2`
  - `S3`

### 📤 Output:
- A single integer representing the **length** of the longest common subsequence among all three strings.

---

## 🚀 Approach

### ✅ Dynamic Programming (3D DP)

- Let `dp[i][j][k]` represent the LCS length of:
  - First `i` characters of `S1`
  - First `j` characters of `S2`
  - First `k` characters of `S3`

### 🔁 Transition:
- If characters match:  
  `dp[i][j][k] = 1 + dp[i-1][j-1][k-1]`
- Else:  
  `dp[i][j][k] = max(dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1])`

---

## ⏱️ Complexity

- **Time:** `O(N * M * K)` where `N, M, K` are lengths of the three strings  
- **Space:** `O(N * M * K)` for 3D DP table
