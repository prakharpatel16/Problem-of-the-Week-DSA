# Count Friend Groups (Asked by Twitter)

## Problem Description
You are given a classroom of `N` students (labeled from `0` to `N-1`). Friendships between students are **mutual** — if student A is a friend of student B, then student B is also a friend of student A.

The friendships are represented as an **adjacency list**, where each key is a student and its value is the list of students they are directly friends with.

A **friend group** is a set of students where each student is connected to every other student in that set, either directly or indirectly.  
Your task is to count the total number of **friend groups**.

This is equivalent to finding the **number of connected components in an undirected graph**.

---

## Input Format
- An integer `N`, the total number of students (`0` to `N-1`)
- A dictionary `friendship` where:
  - **Key** = student ID
  - **Value** = list of friend student IDs

---

## Output Format
- An integer: **total number of friend groups** in the class

---

## Approach

We treat the problem as a **graph traversal** task to count connected components.

1. Represent students as **nodes** and friendships as **edges** in an undirected graph.
2. Use **DFS (Depth-First Search)** or **BFS (Breadth-First Search)** to explore each connected component.
3. Maintain a `visited` set (or array) to track which students have been processed.
4. For each unvisited student:
   - Start a new DFS/BFS.
   - Increment the group count.

---

## Time Complexity
**O(N + E)**  
Where:  
- `N` = number of students (nodes)  
- `E` = number of friendships (edges)  

This is because:
- We visit each node once.
- We traverse each edge once.
 5: [1],
 6: [3]
}
