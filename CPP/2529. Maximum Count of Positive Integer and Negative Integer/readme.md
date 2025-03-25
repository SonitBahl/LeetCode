# 2529. Maximum Count of Positive Integer and Negative Integer

## Problem Statement
Given an array `nums` sorted in **non-decreasing order**, return the maximum count between the number of **positive** integers and the number of **negative** integers.

In other words, if the number of positive integers in `nums` is `pos` and the number of negative integers is `neg`, return `max(pos, neg)`.

**Note:** `0` is neither positive nor negative.

## Examples

### Example 1:
**Input:**
```plaintext
nums = [-2,-1,-1,1,2,3]
```
**Output:**
```plaintext
3
```
**Explanation:**
- There are `3` positive integers: `[1, 2, 3]`
- There are `3` negative integers: `[-2, -1, -1]`
- The maximum count among them is `3`.

### Example 2:
**Input:**
```plaintext
nums = [-3,-2,-1,0,0,1,2]
```
**Output:**
```plaintext
3
```
**Explanation:**
- There are `3` negative integers: `[-3, -2, -1]`
- There are `2` positive integers: `[1, 2]`
- The maximum count is `3`.

### Example 3:
**Input:**
```plaintext
nums = [5,20,66,1314]
```
**Output:**
```plaintext
4
```
**Explanation:**
- There are `4` positive integers: `[5, 20, 66, 1314]`
- There are `0` negative integers.
- The maximum count is `4`.

## Constraints
- `1 <= nums.length <= 2000`
- `-2000 <= nums[i] <= 2000`
- `nums` is sorted in **non-decreasing** order.