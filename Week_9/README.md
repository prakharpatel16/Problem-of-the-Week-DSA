# Autocomplete System (Twitter – Problem of the Week)

## 📌 Problem Statement
Autocomplete is a widely used feature in search engines and applications like Twitter, Google, and IDEs.  
When a user starts typing, the system suggests possible completions based on known query strings.  

You are given:
- A query string `s`.
- A set of possible query strings `dict[]`.

Return all strings in `dict` that have `s` as a prefix.

---

## 🔹 Input Format
- First line: Integer `N` (number of words in the dictionary).
- Second line: `N` space-separated strings (the dictionary).
- Third line: A string `s` (the query prefix).

## 🔹 Output Format
- List of strings from the dictionary that start with prefix `s`.

---

## 🔑 Approaches

### 1. Brute Force Search
- Iterate through every word in the dictionary.
- Check if it starts with prefix `s`.
- **Time Complexity:** `O(N * L)` (N = words, L = prefix length).

### 2. Trie (Prefix Tree) Approach – Efficient ✅
- Preprocess dictionary into a Trie.
- Traverse Trie using prefix `s`.
- Perform DFS from that node to collect words.
- **Lookup Time:** `O(L + K)` (L = prefix length, K = number of results).

---

## ⏱️ Complexity Analysis
| Approach      | Time Complexity | Space Complexity |
|---------------|-----------------|------------------|
| Brute Force   | `O(N * L)`      | `O(1)`           |
| Trie Approach | `O(L + K)`      | `O(N * W)` (W = avg word length) |
