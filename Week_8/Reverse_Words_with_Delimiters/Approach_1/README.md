# Reverse Words with Delimiters (Facebook Interview Problem)

## 📌 Problem Statement
You are given a string `S` consisting of words and delimiters.  
Your task is to **reverse the words** in the string while **preserving the delimiters in their original positions**.

- Words consist of lowercase alphabets (`a-z`).
- Delimiters can be `/`, `:`, or other non-alphabet characters.
- Multiple consecutive delimiters are allowed

---

## ✅ Constraints
- The input string may contain multiple delimiters.
- Words only contain lowercase alphabets.
- Delimiters must remain in the same relative order.

---

## 💡 Approach 1: Split + Reconstruct
The idea is to:
1. Traverse the string and **separate words and delimiters**.
2. Store **words in a list**, then reverse this list.
3. Reconstruct the string by:
   - Replacing word slots with reversed words.
   - Keeping delimiters in their original positions.

### Algorithm
1. Traverse through the string:
   - Collect words (continuous alphabets).
   - Collect delimiters with their index positions.
2. Reverse the list of words.
3. Build the final string by inserting:
   - Reversed words at word slots.
   - Original delimiters at their indices.

---

## ⏱️ Time & Space Complexity
- **Time Complexity:** `O(n)`  
  (We traverse the string twice: once to split, once to rebuild.)
- **Space Complexity:** `O(n)`  
  (We store words and delimiters separately.)
