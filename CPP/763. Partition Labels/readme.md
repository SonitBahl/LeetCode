## 763. Partition Labels

### Problem Statement
You are given a string `s`. We want to partition the string into as many parts as possible so that each letter appears in at most one part. For example, the string `"ababcc"` can be partitioned into `["abab", "cc"]`, but partitions such as `["aba", "bcc"]` or `["ab", "ab", "cc"]` are invalid.

Note that the partition is done so that after concatenating all the parts in order, the resultant string should be `s`.

Return a list of integers representing the size of these parts.

### Example 1:

**Input:**
```plaintext
s = "ababcbacadefegdehijhklij"
```

**Output:**
```plaintext
[9,7,8]
```

### Example 2:

**Input:**
```plaintext
s = "eccbbbbdec"
```

**Output:**
```plaintext
[10]
```

### Constraints:
- `1 <= s.length <= 500`
- `s` consists of lowercase English letters.