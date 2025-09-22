# Problem of the Week – Swap Even and Odd Bits

## Company
Cisco  

## Difficulty
Medium  

## Topic
Bit Manipulation  

---

## 📌 Scenario
In computer systems, efficient bitwise operations are widely used in networking, cryptography, and compression algorithms.  
Cisco is testing your **bit manipulation skills**. You are given an **unsigned 8-bit integer**, and your task is to swap every even-positioned bit with the adjacent odd-positioned bit.

- Bits are counted from the **right**, starting at position 1.  

**Explanation**  
Binary of `226 = 11100010`.  
Swapping even/odd bits → `11010001 = 209`.

---

## 🔑 Approaches  

### 1. Brute Force Bit-by-Bit Swap
- Loop through all 8 bits.
- For each pair `(i, i+1)`, swap values.
- **Time complexity:** `O(8)` = constant.

---

### 2. Efficient Bitmasking Approach ✅
- Use masks to separate even and odd bits:  
  - **Even bit mask:** `0xAA = 10101010`  
  - **Odd bit mask:** `0x55 = 01010101`
- Shift even bits right and odd bits left, then combine:

---

### Time Complexity ----> O(1)
