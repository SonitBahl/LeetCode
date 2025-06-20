# 109. Convert Sorted List to Binary Search Tree

Given the `head` of a singly linked list where elements are sorted in **ascending order**, convert it to a **height-balanced binary search tree**.

A height-balanced BST is defined as a binary tree in which the depth of the two subtrees of every node never differs by more than one.

---

### Example 1:
```
Input: head = [-10,-3,0,5,9]  
Output: [0,-3,9,-10,null,5]  
Explanation: One possible answer is [0,-3,9,-10,null,5], which represents the shown height-balanced BST.
```

### Example 2:
```
Input: head = []  
Output: []
```

---

### Constraints:

- The number of nodes in `head` is in the range `[0, 2 * 10⁴]`  
- `-10⁵ <= Node.val <= 10⁵`
