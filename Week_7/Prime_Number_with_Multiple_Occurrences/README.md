# 🔢 Prime Numbers with Multiple Occurrences

## 📝 Problem Statement
You are given an integer array **A**.  
Your task is to identify all **prime numbers** that occur more than once in the array and store them in a new array **B**.

- If no prime repeats, return `-1`.  
- The order of elements in **B** must follow their **first appearance** in **A**.

---

## 💡 Approach
1. Use a **Sieve of Eratosthenes** to precompute primes up to `10^6`.  
2. Traverse the array and count frequencies of primes using a hash map.  
3. Track order of **first appearance** with an auxiliary list.  
4. Collect primes that appear more than once into result array.  
5. If none, print `-1`.  

---

## ⏱️ Complexity
- **Time Complexity:**  
  - Sieve construction: `O(n log log n)` for `n = 10^6`.  
  - Array traversal: `O(N)` where `N ≤ 10^5`.  
  - Overall efficient for given constraints.  

- **Space Complexity:**  
  - Sieve: `O(n)`  
  - Frequency map: `O(N)`
