# Majority Element Problem

## 📌 Problem Statement
You are given a list of integers.  
A **majority element** in a list is defined as the element that appears more than ⌊n/2⌋ times,  
where `n` is the length of the list.

You can assume that such an element always exists.

## 🎯 Constraints
- 1 ≤ n ≤ 10^5  
- -10^9 ≤ A[i] ≤ 10^9  
- A majority element **always exists**

---

## 💡 Hints
- Use a **HashMap / dictionary** to count frequencies (O(n) time, O(n) space).  
- Or use the **Boyer–Moore Majority Vote Algorithm** (O(n) time, O(1) space).  

---

## 🛠️ Approach

### ✅ Boyer–Moore Majority Vote Algorithm
- Maintain a **candidate** and a **count**.
- Traverse the list:
  - If `count == 0`, pick the current element as the new candidate.
  - If current element equals candidate → increment count.
  - Otherwise → decrement count.
- At the end, the candidate will be the majority element.  
- This works because the majority element always appears more than half the time.

**Time Complexity:** O(n)  
**Space Complexity:** O(1)
