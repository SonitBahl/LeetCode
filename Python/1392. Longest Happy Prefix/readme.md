## Longest Happy Prefix

A string is called a happy prefix if it is a non-empty prefix that is also a suffix (excluding itself).

Given a string `s`, return the longest happy prefix of `s`. Return an empty string `""` if no such prefix exists.

### Example 1:

**Input:**
```plaintext
s = "level"
```
**Output:**
```plaintext
"l"
```
**Explanation:** `s` contains 4 prefixes excluding itself ("l", "le", "lev", "leve"), and suffixes ("l", "el", "vel", "evel"). The largest prefix which is also a suffix is given by "l".

### Example 2:

**Input:**
```plaintext
s = "ababab"
```
**Output:**
```plaintext
"abab"
```
**Explanation:** "abab" is the largest prefix which is also a suffix. They can overlap in the original string.

### Constraints:
- `1 <= s.length <= 10^5`
- `s` contains only lowercase English letters.