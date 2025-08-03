# 🌲 Count Unival Subtrees

**Problem of the Week** — *Asked by Google*  
**Category**: Binary Tree, DFS  
**Difficulty**: Medium  
**Topic**: Post-order Tree Traversal, Recursion  

---

## 🧩 Problem Description

In systems like **distributed trees** or **replicated data structures**, it’s important to identify **uniform substructures**. A **unival (universal value) subtree** is a subtree where all nodes contain the same value.

Your task is to count how many such **unival subtrees** exist in a given binary tree.

---

## 📥 Input Format

You are given the **root node** of a binary tree.  
Each node contains:
- An **integer value**
- A **left child**
- A **right child**

For practice or testing, you can manually build the binary tree in code.

---

## 📤 Output Format

Print a **single integer**:  
- The number of **unival subtrees** in the binary tree.

---

## 📌 Constraints

- Number of nodes ≤ 1000  
- Node values can be **positive**, **zero**, or **negative**

---


### 🧾 Explanation:
The unival subtrees are:
1. The leaf node with value `1` (left side)
2. The rightmost leaf node with value `0`
3. The two `1` leaf nodes under the left child of the right subtree
4. The subtree rooted at the internal node `1` with both children `1`

---

## 💡 Approach Hint

Use **post-order traversal (DFS)** to:
1. Recursively check if the **left and right subtrees** are unival.
2. If both subtrees are unival and the current node’s value **matches** its children (if they exist), then the current subtree is also **unival**.
3. Increment a **global counter** each time a unival subtree is found.

---

## 🧠 Time & Space Complexity

- **Time Complexity**: `O(N)` – Visit each node once.
- **Space Complexity**: `O(H)` – Max depth of recursion stack (where H is tree height). Worst case: `O(N)`.

### 🔳 Input Tree:
