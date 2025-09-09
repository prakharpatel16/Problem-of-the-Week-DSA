# 🚀 Week 7 – Coding Interview Problems

This repository contains **Week 7 coding challenges** from different companies.  
Each problem is explained with **problem statement, examples, approach, time & space complexity, and summary**.  

---

## 📌 Problems Covered
**Prime Numbers with Multiple Occurrences**  
**Alternating Add and Subtract (Curried Function)**  
**Validate Number in a String**
---

## 1. Prime Numbers with Multiple Occurrences

**Company Tag:** KPIT  
**Difficulty:** Medium (Hard with large constraints)  

### Problem Statement
Given an integer array `A`, find all **prime numbers** that appear **more than once**.  
Store them in a new array `B`.  

- If no prime repeats, return `-1`.  
- Preserve the order of their **first appearance**.  

**Constraints:**  
- `1 ≤ N ≤ 10^5`  
- `-10^6 ≤ A[i] ≤ 10^6`  
- Only consider primes `> 1`.

### Complexity
- **Time:** `O(N * √M)`  
- **Space:** `O(N)`  

---

## 2. Alternating Add and Subtract (Curried Function)

**Company Tag:** Squarespace  
**Difficulty:** Medium  

### Problem Statement
Implement a function `add_subtract` in **curried style** that alternately **adds** and **subtracts** arguments.  

- 1st number → add  
- 2nd number → subtract  
- 3rd number → add  
- 4th number → subtract  
- … and so on  

**Constraints:**  
- At least one number is always given.  
- Up to `10^5` arguments.  

### Complexity
- **Time:** `O(N)`  
- **Space:** `O(1)`  

---

## 3. Validate Number in a String

**Company Tag:** LinkedIn  
**Difficulty:** Medium  

### Problem Statement
Check if a string `s` is a **valid number**.  

Valid:  
- Integers → `"10"`, `"-10"`  
- Real numbers → `"10.1"`, `".5"`, `"3."`  
- Scientific notation → `"1e5"`, `"-3.2E-7"`  

Invalid:  
- `"."`, `"1e"`, `"e9"`, `"+"`, `"-"`, `"1 2"`  

**Constraints:**  
- `1 ≤ len(s) ≤ 10^4`  
- Allowed chars: digits, `+/-`, `.`, `e/E`, spaces.  

### Complexity
- **Time:** `O(n)`  
- **Space:** `O(1)`  

---

## ✅ Summary Table

| Problem | Company | Difficulty | Key Idea | Time | Space |
|---------|----------|------------|----------|------|-------|
| Prime Numbers with Multiple Occurrences | KPIT | Medium/Hard | Hashmap + primality test | `O(N√M)` | `O(N)` |
| Alternating Add & Subtract (Curried) | Squarespace | Medium | Curried function, toggle add/sub | `O(N)` | `O(1)` |
| Validate Number in String | LinkedIn | Medium | String parsing with rules/flags | `O(n)` | `O(1)` |

---

📅 **This is part of Week 7 coding practice.**  
Includes **array + hashing**, **functional programming (curried style)**, and **string parsing with validation rules**.
