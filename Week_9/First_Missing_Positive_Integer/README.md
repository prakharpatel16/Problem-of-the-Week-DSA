# 🏦 Stripe – First Missing Positive Integer

## 📌 Problem Statement
Stripe’s payment system uses sequential identifiers. If any ID is missing, it may cause system issues.  
Given an **unsorted integer array**, find the **smallest positive integer** that is missing.

- Array may contain negatives and duplicates.
- Must run in **O(n) time** and use **O(1) extra space**.
- Allowed to modify the input array.

## 🔑 Approach
### ❌ Naïve Approaches
1. **Sorting** → O(n log n), not linear.  
2. **HashSet** → O(n) space, not allowed.  

### ✅ Optimal Approach (Index Placement Trick – In-Place Hashing)
1. Traverse the array, and for each number `x`:
   - If `1 ≤ x ≤ n`, place it at index `x-1`.  
   - Keep swapping until each valid number is in its correct index.  

   Example:  
   Input: `[3, 4, -1, 1]`  
   Rearranged: `[1, -1, 3, 4]`  

2. Traverse again:  
   - If `arr[i] != i+1`, then `i+1` is the first missing positive.  

3. If all are in place, the answer is `n+1`.  

---

## ⏱️ Complexity
- **Time:** O(n) (Each element swapped at most once)  
- **Space:** O(1) (In-place)
