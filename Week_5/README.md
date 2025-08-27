# Clone a Linked List with Random Pointer

## 📌 Problem
You are given a linked list where each node contains:
- `next` → pointer to next node
- `random` → pointer to any node in the list (or NULL)

You must create a **deep copy** of the list (new nodes with the same structure).

---

## ✅ Example
Original List:
Random pointers:
- `13.random → 7`
- `11.random → 1`
- `10.random → 11`
- `1.random → 7`

Cloned List (different memory addresses, same structure).

---

## 🚀 Approaches

### 1. HashMap Method (O(n) space)
- Traverse once: create clone nodes & map `original → clone`.
- Traverse again: assign `next` and `random` using map.

### 2. Optimized O(1) Space
- Interleave clone nodes with original nodes.
- Assign random pointers using `curr->next->random = curr->random->next`.
- Separate original and cloned lists.

---

## ⏱️ Complexity Analysis

### HashMap Approach
- **Time:** O(n) (two traversals)
- **Space:** O(n) (hash map storage)

### Optimized Approach
- **Time:** O(n) (three traversals)
- **Space:** O(1) (no extra map, just pointers)

---

## 📚 References
- [LeetCode – Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)
- [GFG – Clone a linked list with random pointer](https://www.geeksforgeeks.org/clone-linked-list-next-random-pointer-o1-space/)
- [NeetCode Video](https://www.youtube.com/watch?v=5Y2EiZST97Y)
- [Take U Forward Video](https://www.youtube.com/watch?v=VNf6VynfpdM)
