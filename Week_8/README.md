# Week 8 – Problem Set

## 📌 Problem 1: Find the Majority Element (MongoDB)
**Question:**  
Given an array of integers, find the majority element (appears more than ⌊n/2⌋ times). You may assume such an element always exists.  

**Summary:**  
Can be solved using **HashMap frequency counting** or the **Boyer–Moore Majority Vote Algorithm** in `O(n)` time.  

---

## 📌 Problem 2: Reverse Words with Delimiters (Facebook)
**Question:**  
Given a string containing words and delimiters, reverse the order of words while keeping delimiters in their original positions.  

**Summary:**  
Approaches include **split + reconstruct**, **two-pointer parsing**, or **stack-based reversal**. Handles multiple delimiters and preserves their relative positions.  

---

## 📌 Problem 3: Remove the Maximum Number of Edges (Adobe – Even Tree)
**Question:**  
Given a tree with an even number of nodes, remove the maximum number of edges such that every resulting subtree has an even number of nodes.  

**Summary:**  
Use **DFS to calculate subtree sizes**. If a child subtree has even size, its connecting edge can be removed. Runs in `O(N)` time.  

---
