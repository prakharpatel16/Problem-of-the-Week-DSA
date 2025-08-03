# Equal Sum Partition

**Problem Title**: Equal Sum Partition  
**Asked By**: Facebook  
**Category**: Dynamic Programming  
**Difficulty**: Medium  

---

## 🧩 Problem Statement

You are given a **multiset** (a list that can contain duplicate integers).  
Determine whether it can be **partitioned into two subsets** such that the sum of elements in both subsets is equal.

---

## ✅ Input Format

- A list of **non-negative integers** (may contain duplicates).
- The list may contain up to **100 elements**.

---

## 🎯 Output Format

- Return `true` if the list can be partitioned into two subsets with equal sum, otherwise return `false`.

---

## 🔐 Constraints

- All elements are **non-negative**.
- The input list contains at least **one element**.
- Maximum size of the list: **100 elements**.

---

## 💡 Hints

- If the **total sum is odd**, it's impossible to divide it into two equal subsets.
- Use **Dynamic Programming** or **Recursion + Memoization**.
- This is a variation of the classic **Subset Sum Problem** (Leetcode #416).

## 🧠 Approach Explanation

To solve this problem efficiently, we use **Dynamic Programming (DP)**.

### Steps:

1. **Calculate the total sum** of all elements in the array.
2. If the total sum is **odd**, it's impossible to split it into two equal subsets — return `false`.
3. Set the target sum as `sum / 2`.  
   Create a **1D DP array** `dp` of size `target + 1`, where `dp[i]` means:  
   "Is there a subset of numbers that sums to `i`?"
4. Initialize `dp[0] = true`, because a sum of 0 is always possible (with an empty subset).
5. For each number in the array:
   - Traverse the `dp` array **backwards** from `target` to `num`, and update:
     ```cpp
     dp[j] = dp[j] || dp[j - num];
     ```
   - This avoids using the same element multiple times in the same iteration.
6. Finally, return `dp[target]`.

If `dp[target] == true`, then there exists a subset with sum equal to half of the total — the array can be partitioned.

---

### ⏱ Time Complexity
## O(n × sum/2)

### 📦 Space Complexity
## O(sum/2)

### 🔗 References
## Leetcode #416 – Partition Equal Subset Sum

## GeeksForGeeks – Partition Problem

## YouTube: TechDose – Partition Equal Subset Sum
