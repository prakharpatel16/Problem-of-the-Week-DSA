# 🌳 Maximum Path Sum in a Binary Tree

## 📝 Problem Statement
Given a binary tree where each node contains an integer value,  
find the **maximum path sum between any two nodes**.

### Rules:
- ✅ The path must go through at least one node.  
- ✅ The path does not need to pass through the root.  
- ✅ A path is a sequence of nodes connected by edges, each node used once.

---

## 💡 Approach
This is solved using **post-order traversal**:
1. At each node:
   - Compute the maximum contribution from the left and right children (ignore negatives).  
   - Compute the path sum passing **through this node**:  
     `current = node.val + left + right`.  
   - Update a global variable storing the maximum sum.  
2. Return the maximum contribution including only one child to the parent:  
   `node.val + max(left, right)`  

---

## 🧮 Algorithm
1. Start DFS recursion from the root.  
2. For each node:
   - Recursively calculate left and right contributions.  
   - Ignore negative sums (`max(value, 0)`).  
   - Update global maximum.  
3. Return final global maximum path sum.  

---

## ⏱️ Complexity
- **Time:** `O(N)` → each node is visited once.  
- **Space:** `O(H)` → recursion stack, where `H` = height of tree.  

---

## 📚 References
- 📖 [LeetCode – Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)  
- 🎥 YouTube: ["Binary Tree Maximum Path Sum Explained"](https://www.youtube.com/results?search_query=binary+tree+maximum+path+sum)  

---

## 🖥️ Example Run (C++)
```cpp
TreeNode* root = new TreeNode(-10);
root->left = new TreeNode(9);
root->right = new TreeNode(20);
root->right->left = new TreeNode(15);
root->right->right = new TreeNode(7);
Solution sol;
cout << sol.maxPathSum(root);  // Output: 42
