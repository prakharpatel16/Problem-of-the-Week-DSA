# Validate Number in a String

### Company
LinkedIn

### Difficulty
Medium

---

## Problem Description
You need to validate whether a given string represents a valid number.  
The string can contain:
- Integers (e.g., `"10"`, `"-10"`)
- Decimals (e.g., `"10.1"`, `"-10.1"`, `".5"`, `"3."`)
- Scientific notation (e.g., `"1e5"`, `"-3.2E-7"`)

It should reject invalid formats like `"a"`, `"x 1"`, `"a -2"`, `"1e"`, `"e9"`, `"-"`, `"+"`.

---

## Rules
1. Optional leading/trailing spaces allowed.
2. No internal spaces.
3. A leading sign (`+` or `-`) is valid at the start or just after `e/E`.
4. Decimal point (`.`) allowed **once**, not after `e/E`.
5. `e/E` must appear at most once, only after a digit, and followed by an integer (with optional sign).
6. Must contain at least one digit.

---

## Examples
| Input     | Output | Reason |
|-----------|--------|--------|
| `"10"`    | true   | Valid integer |
| `"-10.1"` | true   | Valid signed real number |
| `"1e5"`   | true   | Scientific notation |
| `" -90e3 "` | true | Spaces trimmed; valid |
| `"1e-3"`  | true   | Exponent with sign |
| `".1"`    | true   | Fraction without leading digit |
| `"3."`    | true   | Fraction with trailing dot |
| `"."`     | false  | Needs at least one digit |
| `"1e"`    | false  | Exponent missing digits |
| `"e9"`    | false  | Mantissa missing |
| `"-"`     | false  | Only sign is not a number |
| `"+"`     | false  | Same as above |
| `" 1 2 "` | false  | Internal spaces |

---

## Approach
We use a **one-pass parser** with flags:
- `seenDigit`: at least one digit before or after exponent
- `seenDot`: at most one dot, not after exponent
- `seenExp`: at most one exponent, must follow a digit
- `digitAfterExp`: ensures digits appear after exponent if used

### Steps
1. Trim spaces from both ends.
2. Iterate character by character:
   - Digits: valid, update flags.
   - Signs: valid only at start or after `e/E`.
   - Dot: valid only once and not after `e/E`.
   - `e/E`: valid only once, must follow digit, must be followed by digits.
   - Otherwise: invalid.
3. Return `true` if rules are satisfied.

---

## Complexity
- **Time Complexity:** O(n) (one pass through string)
- **Space Complexity:** O(1) (only flags used)
