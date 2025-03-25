# 3169. Count Days Without Meetings

## Problem Statement
You are given a positive integer `days` representing the total number of days an employee is available for work (starting from day 1). You are also given a 2D array `meetings` of size `n` where `meetings[i] = [start_i, end_i]` represents the starting and ending days of meeting `i` (inclusive).

Return the count of days when the employee is available for work but no meetings are scheduled.

**Note:** The meetings may overlap.

---

## Examples

### Example 1:

**Input:**
```plaintext
days = 10, meetings = [[5,7],[1,3],[9,10]]
```

**Output:**
```plaintext
2
```

**Explanation:**
There is no meeting scheduled on the 4th and 8th days.

---

### Example 2:

**Input:**
```plaintext
days = 5, meetings = [[2,4],[1,3]]
```

**Output:**
```plaintext
1
```

**Explanation:**
There is no meeting scheduled on the 5th day.

---

### Example 3:

**Input:**
```plaintext
days = 6, meetings = [[1,6]]
```

**Output:**
```plaintext
0
```

**Explanation:**
Meetings are scheduled for all working days.

---

## Constraints
- `1 <= days <= 10^9`
- `1 <= meetings.length <= 10^5`
- `meetings[i].length == 2`
- `1 <= meetings[i][0] <= meetings[i][1] <= days`