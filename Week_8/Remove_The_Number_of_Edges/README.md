# Even Tree Problem (Adobe - Hard)

## 📌 Problem Statement
You are given a tree with **N nodes (even number)** and **N-1 edges**.  
The goal is to remove as many edges as possible such that **every connected component (subtree) left after removals contains an even number of nodes**.

If an edge is removed, the resulting subtrees must both have even node counts.

---

## 📥 Input Format
- First line: Integer `N` (number of nodes, even).
- Next `N-1` lines: Two integers `u v` representing an undirected edge.

## 📤 Output Format
- Print the maximum number of edges that can be removed.

---

### Explanation
- Subtree sizes:
  - Removing edge `(3,4)` → subtree `{4,6,7,8}` (size 4, even).
  - Removing edge `(1,3)` → subtree `{3,5}` (size 2, even).
- Both are valid removals → Answer = **2**

---

## 🚀 Approach

### Approach 1: DFS with Subtree Sizes (Efficient)
1. Perform a **DFS** from the root (say node `1`).
2. Calculate **subtree size** for each node.
3. If a subtree has an **even size**, then the edge connecting it to its parent can be removed.
4. Count such edges.

- **Time Complexity:** `O(N)`  
- **Space Complexity:** `O(N)`

### Approach 2: Brute Force (Not Recommended)
- Try removing edges one by one and check if all resulting subtrees have even sizes.
- Complexity: **O(N²)** → too slow for large `N`.
