# Alternating Add and Subtract (Curried Function)

### Problem Statement
You are asked to implement a function `add_subtract` that works in a **curried style** and alternately adds and subtracts the numbers passed to it.

- The **first number is always added** (starting point).
- The second number is **subtracted**.
- The third number is **added**.
- The fourth number is **subtracted**.
- And so on, alternating between addition and subtraction.

## ✅ Time & Space Complexity

- **Time Complexity:**  
  Each call to `operator()` performs a single addition or subtraction in **O(1)**.  
  For `n` chained calls, the total time complexity is: **O(N)**
  
- **Space Complexity:**  
The function maintains only two variables:
- `result` → running sum  
- `addNext` → boolean flag for alternating operation  

No extra data structures are used. Thus, the space complexity is: **O(1)**
