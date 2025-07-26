# 🔤 Step Words Finder

## 🧩 Problem Statement

In a word game, a **step word** is formed by:
1. Adding **exactly one letter** to a given word, and
2. **Anagramming** the result to create a valid dictionary word.

Your task is to identify all valid step words from a given dictionary for a given base word.

---

## 📥 Input Format

- First line: A string `W` (the input word)
- Second line: An integer `N` (number of words in the dictionary)
- Next `N` lines: Each line contains one valid lowercase dictionary word.

- 
---

## 🧠 Explanation

From base word `"apple"`:
- `"appeal"` is formed by adding `"a"` → `"applea"` → anagram → `"appeal"`
- `"papple"` is formed by adding `"p"` → `"applep"` → anagram → `"papple"`
- Other words like `"apply"` and `"apples"` are not valid:
  - `"apply"` lacks the `"e"` from `"apple"`
  - `"apples"` doesn't preserve correct multiset structure

---

## 🚀 Approach

### ✅ Frequency Map Technique

1. Use a character count (frequency map) for the base word.
2. For each dictionary word:
   - It must be **exactly one character longer** than the base.
   - Its frequency map must match the base word with **one extra letter**.

### 🔁 Algorithm Steps

- For each dictionary word:
  - Check `word.length() == base.length() + 1`
  - Count character frequencies of both `word` and `base`
  - If difference is exactly **one extra character**, it's a valid step word

---

## ⏱️ Complexity

- **Time:** `O(N * K)` where `N` is the number of dictionary words and `K` is the max word length (≤15)
- **Space:** `O(1)` due to fixed-size frequency array of 26 letters
