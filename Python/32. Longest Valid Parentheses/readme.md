## Longest Valid Parentheses

Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring.

### Example 1:

**Input:**
```plaintext
s = "(()"
```
**Output:**
```plaintext
2
```
**Explanation:** The longest valid parentheses substring is "()".

### Example 2:

**Input:**
```plaintext
s = ")()())"
```
**Output:**
```plaintext
4
```
**Explanation:** The longest valid parentheses substring is "()()".

### Example 3:

**Input:**
```plaintext
s = ""
```
**Output:**
```plaintext
0
```

### Constraints:
- `0 <= s.length <= 3 * 10^4`
- `s[i]` is either `'('` or `')'`. 
