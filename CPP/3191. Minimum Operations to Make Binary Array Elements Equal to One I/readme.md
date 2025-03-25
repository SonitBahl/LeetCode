# 3191. Minimum Operations to Make Binary Array Elements Equal to One I

## Problem Statement

You are given a **binary array** `nums`.

You can perform the following operation on the array any number of times (possibly zero):

- Choose any **3 consecutive elements** from the array and **flip all of them**.
  - Flipping an element means changing its value from `0` to `1`, and from `1` to `0`.

Return the **minimum number of operations** required to make all elements in `nums` equal to `1`. If it is **impossible**, return `-1`.

---

## Examples

### Example 1:
**Input:**
```text
nums = [0,1,1,1,0,0]
```
**Output:**
```text
3
```
**Explanation:**
We can perform the following operations:
1. Choose indices `[0, 1, 2]`: `nums = [1,0,0,1,0,0]`
2. Choose indices `[1, 2, 3]`: `nums = [1,1,1,0,0,0]`
3. Choose indices `[3, 4, 5]`: `nums = [1,1,1,1,1,1]`

---

### Example 2:
**Input:**
```text
nums = [0,1,1,1]
```
**Output:**
```text
-1
```
**Explanation:**
It is impossible to make all elements `1`.

---

## Constraints
- `3 <= nums.length <= 10^5`
- `0 <= nums[i] <= 1`
