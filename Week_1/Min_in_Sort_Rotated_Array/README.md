# 🔍 Find Minimum in Rotated Sorted Array

**LeetCode Link**: [Click here](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/)

## 🧠 Problem Statement

You are given a rotated sorted array (no duplicates). Your task is to find the minimum element in **O(log N)** time.

Example:

Input: [3, 4, 5, 1, 2]
Output: 1

---

## 💡 Approach: Binary Search

We use a **modified binary search** to efficiently locate the minimum element.

### 🔁 Steps:

1. **Initialize Pointers:**
   - `low = 0`, `high = N - 1` (where `N` is the size of the array)

2. **While `low < high`:**
   - Compute `mid = (low + high) / 2`
   - If `arr[mid] > arr[high]` → the **minimum is in the right half** → `low = mid + 1`
   - Else → the **minimum is in the left half** (including mid) → `high = mid`

3. **Return:** `arr[low]` (which points to the minimum)

---

### 📈 Time & Space Complexity

| Complexity | Value        |
|------------|--------------|
| Time       | `O(log N)`   |
| Space      | `O(1)`       |


## 📊 Example Visualization

Let's take the array:


### 🔍 Mid Calculations:

| low | high | mid | arr[mid] | arr[high] | Action                  |
|-----|------|-----|----------|-----------|--------------------------|
| 0   | 6    | 3   | 7        | 2         | mid > high → low = mid+1 |
| 4   | 6    | 5   | 1        | 2         | mid < high → high = mid  |
| 4   | 5    | 4   | 0        | 1         | mid < high → high = mid  |

🔚 Now `low == high == 4` → Minimum = `arr[4] = 0`
