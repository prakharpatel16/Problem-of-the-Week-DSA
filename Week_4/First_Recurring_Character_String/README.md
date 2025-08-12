# First Recurring Character

## 📜 Problem Statement
Given a string `s`, return the first character that appears more than once, where "first" is defined by the earliest *second* occurrence in the string. If no character repeats, return `null`.

---

## 📥 Input Format
- A single string `s` consisting of lowercase and/or uppercase English letters (ASCII printable characters allowed).
- `1 <= s.length <= 10^5`

---

## 📤 Output Format
- Output the **first recurring character** as a single character.
- If no such character exists, output `null`.

---

## 💡 Approach
1. Use a **set** or a **boolean array** to track characters seen so far.
2. Traverse the string from **left to right**.
3. If a character has already been seen, return it immediately.
4. If no repeats are found, return `null`.
---

## 🧠 Complexity Analysis
- **Time Complexity:** `O(n)` — Each character is processed once.
- **Space Complexity:** `O(1)` — Uses fixed-size storage for ASCII characters.
