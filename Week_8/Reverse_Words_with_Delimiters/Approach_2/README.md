# Reverse Words with Delimiters (Facebook Interview Problem)

## 📌 Problem Statement
You are given a string `S` consisting of words and delimiters.  
Your task is to **reverse the words** in the string while **preserving the delimiters in their original positions**.

- Words consist of lowercase alphabets (`a-z`).
- Delimiters can be `/`, `:`, or other non-alphabet characters.
- Multiple consecutive delimiters are allowed.


## 💡 Approach 2: Stack-based
This approach uses a **stack** to reverse the order of words.

### Algorithm
1. Traverse the string once:
   - Extract all words (continuous alphabets).
   - Push words onto a stack.
2. Traverse the string again:
   - When you see a **word slot**, pop a word from the stack (which gives reversed order).
   - When you see a **delimiter**, insert it as-is.
3. The result will have reversed words with delimiters unchanged.

---

## ⏱️ Time & Space Complexity
- **Time Complexity:** `O(n)`  
  (One pass to collect words, another to rebuild the string.)
- **Space Complexity:** `O(n)`  
  (Words are stored in a stack.)
