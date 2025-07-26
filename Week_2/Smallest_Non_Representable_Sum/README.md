# 💰 Smallest Non-Representable Sum

## 🧩 Problem Statement

You are given a **sorted array of positive integers**.  
Your task is to find the **smallest positive integer** that **cannot** be represented as the sum of any subset of the array.

This is useful in systems like digital wallets or coin optimization where detecting unachievable amounts is critical.

---

## 🧠 Explanation

With input: `[1, 2, 3, 10]`

We can form:
- 1, 2, 3, 1+2=3, 1+3=4, 2+3=5, 1+2+3=6

But **7** cannot be formed using any subset of these numbers. So, the answer is `7`.

---

## 🚀 Approach

### ✅ Greedy Strategy

- Start with the smallest unrepresentable number (`res = 1`)
- Traverse the array:
  - If the current number ≤ `res`, it can be used to build up further sums (`res += num`)
  - If the current number > `res`, then `res` is the smallest sum that can’t be formed.

### 🔁 Algorithm Steps:

1. Initialize `res = 1`
2. For each number `x` in the array:
   - If `x > res`, break and return `res`
   - Else, `res += x`
3. Return `res`

---

## ⏱️ Complexity

- **Time:** `O(N)`
- **Space:** `O(1)`
- Efficient for up to `10^5` elements
