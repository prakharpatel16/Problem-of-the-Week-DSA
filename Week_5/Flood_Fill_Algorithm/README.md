# Flood Fill Algorithm

## 📌 Problem
Given a 2D image matrix, a starting pixel `(sr, sc)` and a new color `C`, perform a **flood fill**:
- Change the color of the starting pixel.
- Change all 4-directionally connected pixels of the same original color to `C`.

---

## 🚀 Approaches

### 1. DFS (Depth-First Search)
- Recursively explore connected pixels.
- Replace matching color with the new one.

### 2. BFS (Breadth-First Search)
- Use a queue to process neighbors iteratively.

---

## ⏱️ Complexity Analysis
- **Time Complexity:** O(n × m) (each cell visited at most once)  
- **Space Complexity:**  
  - DFS → O(n × m) recursion stack in worst case  
  - BFS → O(n × m) queue in worst case  

---

## 📚 References
- [LeetCode – Flood Fill](https://leetcode.com/problems/flood-fill/)  
- [GeeksforGeeks – Flood Fill Algorithm](https://www.geeksforgeeks.org/flood-fill-algorithm-implement-fill-paint/)  
- [YouTube – Flood Fill Algorithm (DFS & BFS)](https://www.youtube.com/watch?v=RwozX--B_Xs) 
