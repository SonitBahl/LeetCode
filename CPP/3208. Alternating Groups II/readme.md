# Alternating Groups in a Circular Tile Arrangement

## Problem Statement

There is a **circle** of red and blue tiles. You are given an **array** `colors` and an integer `k`:

- `colors[i] == 0` means **tile i is red**.
- `colors[i] == 1` means **tile i is blue**.

An **alternating group** is a contiguous group of `k` tiles in the circle where **each tile except the first and last one has a different color from its left and right tiles**.

Return the **number of alternating groups**.

**Note:** Since `colors` represents a **circle**, the **first and last** tiles are considered adjacent.

---

## Examples

### Example 1:
**Input:**
```text
colors = [0,1,0,1,0], k = 3
```
**Output:**
```text
3
```
**Explanation:**
Alternating groups of length `k = 3`:
1. `[0,1,0]`
2. `[1,0,1]`
3. `[0,1,0]`

---

### Example 2:
**Input:**
```text
colors = [0,1,0,0,1,0,1], k = 6
```
**Output:**
```text
2
```
**Explanation:**
Alternating groups of length `k = 6`:
1. `[0,1,0,0,1,0]`
2. `[1,0,0,1,0,1]`

---

### Example 3:
**Input:**
```text
colors = [1,1,0,1], k = 4
```
**Output:**
```text
0
```
**Explanation:**
No alternating group of length `k = 4` exists.

---

## Constraints
- `3 <= colors.length <= 10^5`
- `0 <= colors[i] <= 1`
- `3 <= k <= colors.length`
