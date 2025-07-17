
# 📌 Question 2: Subarray Sum Equals K

**LeetCode Link**: [Click here](https://leetcode.com/problems/subarray-sum-equals-k/)


## 🧠 Problem Statement

Given an integer array `nums` and an integer `k`, return the **total number of subarrays** whose sum equals `k`.

## 💡 Approach: Prefix Sum + HashMap

We use the idea of a **prefix sum** and track frequencies using a `unordered_map`.

### 🔁 Steps:

1. Initialize `presum = 0` and a map to store prefix sums seen so far.
2. Traverse the array:
   - Update `presum += nums[i]`
   - Check if `(presum - k)` is in the map → it means a subarray with sum `k` ends here.
   - Update count and store `presum` in map.

### 📈 Time & Space Complexity

| Complexity | Value        |
|------------|--------------|
| Time       | `O(N)`   |
| Space      | `O(N)`       |

### Explain Time and Space Complexity
`O(N)` Time Complexity for Traversing in the Array.
`O(N)` Space Complexity as we used HashMap in order to solve the problem.
