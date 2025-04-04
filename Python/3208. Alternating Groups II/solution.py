class Solution(object):
    def numberOfAlternatingGroups(self, colors, k):
        n = len(colors)
        if k > n:
            return 0
        extended_colors = colors + colors[:k-1]
        count, length = 0, 1

        for i in range(1, len(extended_colors)):
            if extended_colors[i] != extended_colors[i - 1]:
                length += 1
            else:
                length = 1

            if length >= k:
                count += 1

        return count