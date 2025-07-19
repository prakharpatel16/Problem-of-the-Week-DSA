# 🏠 Ruby Second House 

## 💡 Problem Description :

You are given a `n x k` cost matrix `costs`, where `costs[i][j]` is the cost of painting the `i-th` house with the `j-th` color.  
The goal is to paint all the houses such that:
- No two adjacent houses have the same color.
- The total painting cost is minimized.

  ---

## 🔍 Approach :

The solution uses **Dynamic Programming with optimization**, tracking:
- `min1`: the minimum cost from the previous row.
- `min2`: the second minimum cost from the previous row.

For each color in the current house:
- If it's different from the color that gave `min1`, we use `min1`.
- Otherwise, we use `min2` to avoid adjacent color conflict.

### ⏱ Time Complexity :
- **O(n × k)** – where `n` is number of houses and `k` is number of colors.

### 📦 Space Complexity :
- **O(1)** extra space (in-place update on cost matrix).

---

### Similar LeetCode -----> 🏠 Paint House II (LeetCode #265)
