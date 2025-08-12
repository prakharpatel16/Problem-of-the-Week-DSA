# First Recurring Character

## Problem
Given a string `s`, return the first character that appears more than once, where "first" is defined by the earliest *second* occurrence in the string. If no character repeats, return `null`.

---

### Examples
- Input: `acbbac` → Output: `b`
- Input: `abcdef` → Output: `null`
- Input: `abca` → Output: `a`

---

## Approach
Traverse the string from left to right and keep track of characters seen so far. As soon as you encounter a character that was previously seen, that character's second occurrence is the earliest possible — so return it.

Uses a fixed-size boolean array of size 256 to represent all ASCII characters.

---

## Complexity
- **Time Complexity:** O(n) — Each character is processed exactly once.
- **Space Complexity:** O(1) — Constant extra space since the array size is fixed.
