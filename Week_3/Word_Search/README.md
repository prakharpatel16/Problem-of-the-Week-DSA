# 🧩 Problem of the Week – Word Search in 2D Matrix (Easy)

**Asked by:** Microsoft

## 📄 Problem Description

In many document processing, word puzzles, and image processing systems, scanning a grid for a target pattern is a common task.  
You are given a 2D matrix of uppercase English characters and a target word.  
Your task is to check whether the target word exists in the matrix either:

- Horizontally (left-to-right within a row)
- Vertically (top-to-bottom within a column)

---

## 📥 Input Format

- A 2D character matrix of size `M x N`
- A string representing the target word

---

## 📤 Output Format

- Return `true` if the word exists in the matrix (either row-wise or column-wise)
- Else return `false`

---

## 🧠 Time & Space Complexity – Word Search

The **Word Search** problem involves checking whether a word exists in a 2D character grid using DFS and backtracking.

---

### ⏱ Time Complexity

O(m × n × 4^L)


- `m` = number of rows in the board  
- `n` = number of columns in the board  
- `L` = length of the target word

**Explanation**:
- We can start DFS from each cell → `m × n` starting points.
- At each position, we explore **up to 4 directions** recursively (excluding revisits).
- So the worst-case branching factor is `4`, repeated up to `L` times (word length).

---

### 📦 Space Complexity

O(L)
- `1 ≤ M, N ≤ 100`
- `word.length ≤ max(M, N)`
- All characters are uppercase English letters
---
word = "FOAM"
