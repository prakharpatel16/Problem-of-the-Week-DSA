# Week 8 – Problem Set

## 📌 Problem 1: Find the Majority Element (MongoDB)
**Question:**  
Given an array of integers, find the majority element (appears more than ⌊n/2⌋ times). You may assume such an element always exists.  

**Summary:**  
Can be solved using **HashMap frequency counting** or the **Boyer–Moore Majority Vote Algorithm**.  

🔗 [LeetCode 169 – Majority Element](https://leetcode.com/problems/majority-element/)  

---

## 📌 Problem 2: Reverse Words with Delimiters (Facebook)
**Question:**  
Given a string containing words and delimiters, reverse the order of words while keeping delimiters in their original positions.  

**Summary:**  
Approaches include **split + reconstruct**, **two-pointer parsing**, or **stack-based reversal**. Handles multiple delimiters and preserves their relative positions.  

🔗 [GeeksforGeeks – Reverse Words with Delimiters](https://www.geeksforgeeks.org/reverse-words-in-a-given-string-in-place/)  
🔗 [LeetCode Discuss – Reverse Words with Delimiters](https://leetcode.com/discuss/interview-question/398038/)  

---

## 📌 Problem 3: Remove the Maximum Number of Edges (Adobe – Even Tree)
**Question:**  
Given a tree with an even number of nodes, remove the maximum number of edges such that every resulting subtree has an even number of nodes.  

**Summary:**  
Use **DFS to calculate subtree sizes**. If a child subtree has even size, its connecting edge can be removed.  

🔗 [HackerRank – Even Tree](https://www.hackerrank.com/challenges/even-tree/problem)  
🔗 [GeeksforGeeks – Even Forest Problem](https://www.geeksforgeeks.org/even-tree-problem/)  

---

## 📊 Time & Space Complexity Comparison

| Problem | Best Approach | Time Complexity | Space Complexity |
|---------|--------------|-----------------|-----------------|
| **Majority Element (MongoDB)** | Boyer–Moore Majority Vote | `O(n)` | `O(1)` |
| **Reverse Words with Delimiters (Facebook)** | Two-Pointer / Stack | `O(n)` | `O(n)` |
| **Remove Maximum Edges (Adobe – Even Tree)** | DFS with Subtree Sizes | `O(n)` | `O(n)` |
