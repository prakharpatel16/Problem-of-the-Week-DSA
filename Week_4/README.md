# 📅 Week 4 – Coding Interview Challenge

Welcome to **Week 4** of the coding interview preparation series.  
This week we cover four fundamental problems that test **graphs, hashing, and string search** — common in interviews with companies like **Twitter, Google, and Amazon**.

---

## 🧠 Problems Covered

### 1️⃣ Count Friend Groups
**Asked By:** Twitter  
**Topic:** Graphs, DFS/BFS, Connected Components  
**Difficulty:** Medium  

We treat the problem as a **graph traversal** task to count connected components.  
For every unvisited student, we start a new DFS/BFS and increment the group count.

**🔗 Practice Link:** [Count Connected Components (Leetcode #323)](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)

---

### 2️⃣ First Recurring Character
**Asked By:** Google  
**Topic:** Hashing, Arrays  
**Difficulty:** Easy  

Find the first element that appears more than once in an array.  
We use a hash set to store visited elements, returning the first duplicate we find.

**🔗 Practice Link:** [First Recurring Character (GeeksforGeeks)](https://www.geeksforgeeks.org/find-first-repeating-element-array-integers/)

---

### 3️⃣ Search Word in a Grid
**Asked By:** Amazon  
**Topic:** DFS, Backtracking, String Search  
**Difficulty:** Medium  

We search for a word in a 2D grid by moving horizontally or vertically, using DFS with backtracking to avoid revisiting cells.

**🔗 Practice Link:** [Leetcode – Word Search](https://leetcode.com/problems/word-search/)

---

### 4️⃣ Custom Practice Problem
**Topic:** Problem-solving  
**Difficulty:** Varies  

Extra problem-solving for reinforcement of Week 4 concepts.

---

## ✅ Summary Table

| Problem                | Company   | Topic                        | Time Complexity          | Space Complexity |
|------------------------|-----------|------------------------------|--------------------------|------------------|
| Count Friend Groups    | Twitter   | Graphs, DFS/BFS               | O(N + E)                 | O(N)             |
| First Recurring Char   | Google    | Hashing, Arrays               | O(N)                     | O(N)             |
| Search Word in Grid    | Amazon    | DFS, Backtracking             | O(m × n × 4^L)            | O(L)             |
| Custom Practice        | —         | Problem-solving               | Varies                   | Varies           |

## 📚 Tags
`Week 4` `Graphs` `DFS` `BFS` `Hashing` `Backtracking` `String Search` `Interview Prep` `Twitter` `Google` `Amazon
