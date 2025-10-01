# 📘 Week 9 – Problem of the Week

This week covers **three important coding interview problems** from top tech companies.  
Each problem includes an **introduction, approaches, complexities, solutions, summary tables, and practice links**.

---

## 🔹 Q1 – Autocomplete System

**Company:** Twitter  
**Difficulty:** Medium  
**Topic:** Strings, Trie, Hashing  

### 📝 Introduction
Autocomplete systems are widely used in search engines and text editors.  
Given a dictionary of words and a query string `s`, return all dictionary words that start with prefix `s`.

### Approaches
1. **Brute Force:** Check prefix for all words.  
   - **Time Complexity:** O(N × L)  
   - **Space Complexity:** O(1)  

2. **Trie Prefix Tree (Optimal):** Insert all words into a Trie and query prefix.  
   - **Time Complexity:** O(L + K)  
   - **Space Complexity:** O(N × L)  

### 📊 Summary Table

| Approach       | Time Complexity | Space Complexity |
|----------------|-----------------|------------------|
| Brute Force    | O(N × L)        | O(1)             |
| Trie (Best)    | O(L + K)        | O(N × L)         |

🔗 **Practice Links**  
- [LeetCode – Design Search Autocomplete System](https://leetcode.com/problems/design-search-autocomplete-system/)  
- [GeeksforGeeks – Implement an Auto-Complete Feature](https://www.geeksforgeeks.org/auto-complete-feature-using-trie/)  

---

## 🔹 Q2 – First Missing Positive

**Company:** Stripe  
**Difficulty:** Hard  
**Topic:** Arrays, Hashing, In-place Rearrangement  

### 📝 Introduction
You are given an unsorted integer array. Find the **smallest missing positive integer** in O(n) time using O(1) extra space.

### Approaches
1. **Naive (Sorting/Hashing):** Sort or use hash set.  
   - **Time Complexity:** O(n log n)  
   - **Space Complexity:** O(n)  

2. **Index Placement Trick (Optimal):** Swap elements to correct index `x → x-1`.  
   - **Time Complexity:** O(n)  
   - **Space Complexity:** O(1)  

### 📊 Summary Table

| Approach                 | Time Complexity | Space Complexity |
|---------------------------|-----------------|------------------|
| Sorting / Hashing (Naive) | O(n log n)      | O(n)             |
| Index Placement (Best)    | O(n)            | O(1)             |

🔗 **Practice Links**  
- [LeetCode – First Missing Positive](https://leetcode.com/problems/first-missing-positive/)  
- [GeeksforGeeks – Find the smallest positive missing number](https://www.geeksforgeeks.org/find-the-smallest-positive-number-missing-from-an-unsorted-array/)  

---

## 🔹 Q3 – Swap Even and Odd Bits

**Company:** Cisco  
**Difficulty:** Medium  
**Topic:** Bit Manipulation  

### 📝 Introduction
Given an unsigned 8-bit integer, swap every **even-positioned bit** with its adjacent **odd-positioned bit**.

### Example
**Input**
(Binary: `10101010 → 01010101`)

### Approaches
1. **Brute Force:** Swap each bit pair manually.  
   - **Time Complexity:** O(1)  
   - **Space Complexity:** O(1)  

2. **Bitmasking Trick (Optimal):**  
   - Mask even bits: `0xAA`  
   - Mask odd bits: `0x55`  
   - Swap using shifts and OR.  
   - **Time Complexity:** O(1)  
   - **Space Complexity:** O(1)  

### 📊 Summary Table

| Approach                  | Time Complexity | Space Complexity |
|----------------------------|-----------------|------------------|
| Brute Force Bit-by-Bit     | O(1)            | O(1)             |
| Efficient Bitmasking (Best)| O(1)            | O(1)             |

🔗 **Practice Links**  
- [GeeksforGeeks – Swap all odd and even bits](https://www.geeksforgeeks.org/swap-all-odd-and-even-bits/)  

---

# ✅ Final Recap Table (Week 9)

| Q# | Company | Question Name          | Topic              | Difficulty | Best Approach         | Time   | Space |
|----|---------|------------------------|--------------------|------------|-----------------------|--------|-------|
| 1  | Twitter | Autocomplete System    | Strings, Trie      | Medium     | Trie Prefix Tree      | O(L+K) | O(N×L) |
| 2  | Stripe  | First Missing Positive | Arrays, Hashing    | Hard       | Index Placement Trick | O(n)   | O(1)  |
| 3  | Cisco   | Swap Even and Odd Bits | Bit Manipulation   | Medium     | Bitmasking Trick      | O(1)   | O(1)  |
