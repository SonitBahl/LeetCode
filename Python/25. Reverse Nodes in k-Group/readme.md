## 25. Reverse Nodes in k-Group

Given the head of a linked list, reverse the nodes of the list `k` at a time, and return the modified list.

`k` is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of `k`, then left-out nodes at the end should remain as they are.

You may not alter the values in the list's nodes, only the nodes themselves may be changed.

### Example 1:

**Input:**
```plaintext
head = [1,2,3,4,5], k = 2
```
**Output:**
```plaintext
[2,1,4,3,5]
```

### Example 2:

**Input:**
```plaintext
head = [1,2,3,4,5], k = 3
```
**Output:**
```plaintext
[3,2,1,4,5]
```

### Constraints:
- The number of nodes in the list is `n`.
- `1 <= k <= n <= 5000`
- `0 <= Node.val <= 1000