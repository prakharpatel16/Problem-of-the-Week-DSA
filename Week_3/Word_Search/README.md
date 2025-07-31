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

## ✅ Constraints

- `1 ≤ M, N ≤ 100`
- `word.length ≤ max(M, N)`
- All characters are uppercase English letters
---
word = "FOAM"
