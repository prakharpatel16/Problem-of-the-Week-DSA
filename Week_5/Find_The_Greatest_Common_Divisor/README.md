# Find the Greatest Common Divisor (GCD) of N Numbers

## 📌 Problem
Given `n` integers, find the **Greatest Common Divisor (GCD)** of the numbers.  
The GCD is the largest integer that divides all given numbers without leaving a remainder.

---

**Explanation:**
- Factors of 42 → {1, 2, 3, 6, 7, 14, 21, 42}  
- Factors of 56 → {1, 2, 4, 7, 8, 14, 28, 56}  
- Factors of 14 → {1, 2, 7, 14}  
- Common factor = **14**

## 🚀 Approach
- Use **Euclidean Algorithm**:
  - `gcd(a, b) = gcd(b, a % b)`
- Extend to multiple numbers:
  - Start with `result = arr[0]`
  - Iteratively compute `result = gcd(result, arr[i])`

---

## ⏱️ Complexity
- **Time Complexity:** `O(n log M)`  
  where `M` is the maximum number in the array  
- **Space Complexity:** `O(1)`

---

## 📚 References
- [LeetCode – Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array/)  
- [GeeksforGeeks – GCD of N numbers](https://www.geeksforgeeks.org/program-to-find-gcd-of-n-numbers/)  
- [YouTube – Euclidean Algorithm](https://www.youtube.com/watch?v=Jwf6ncRmhPg)  

---
