# 🔍 Search in a Sorted List Without Multiplication, Division, or Bit-Shifts

**Company**: Netflix  
**Category**: Binary Search  
**Difficulty**: Medium  
**Topic**: Search Algorithm under Constraints  

---

## 🧩 Problem Description

You are working on a **constrained system** where **multiplication**, **division**, and **bit-shifting** are **not allowed** due to hardware limitations.  
Despite these restrictions, you need to **efficiently search** for a given element `x` in a **sorted list of integers**.

Your goal is to determine if the element exists in **O(log N)** time using **Binary Search**, but with a **custom mid calculation** that avoids prohibited operations.

---

## 📥 Input Format
1. **First line**: Integer `N` (size of the list)  
2. **Second line**: `N` integers (sorted in ascending order)  
3. **Third line**: Integer `x` (target value)  

---

## 📤 Output Format
- Print `"true"` if `x` exists in the list  
- Print `"false"` otherwise  

---

## 📌 Constraints
- `1 ≤ N ≤ 10^5`
- List is **sorted in ascending order**

---

## 💡 Approach
We use **Binary Search** with a **custom integer division** method:
1. Initialize `low = 0` and `high = N - 1`.
2. Instead of `(low + high) / 2`, implement a **manual integer division function** that uses **repeated subtraction or addition** to calculate the middle index.
3. Compare the middle element with `x`:
   - If equal → return `"true"`
   - If smaller → move `low` to `mid + 1`
   - If larger → move `high` to `mid - 1`
4. Continue until `low > high`.
5. If not found, return `"false"`.

---

## 🧠 Time & Space Complexity
- **Time Complexity**: `O(log N)` — Standard binary search performance.
- **Space Complexity**: `O(1)` — No extra space required.
- **Prohibited operations**: `*`, `/`, `<<`, `>>`
- Integer values can be **negative**, **zero**, or **positive**
