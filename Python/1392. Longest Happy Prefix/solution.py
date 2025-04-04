class Solution(object):
    def longestPrefix(self, s):
        """
        :type s: str
        :rtype: str
        """
        prefix = [0] * len(s)
        i, j = 0, 1
        while j < len(s):
            if s[i] == s[j]:
                i += 1
                prefix[j] = i
                j += 1 
            else:
                if i == 0:
                    j += 1
                else:
                    i = prefix[i - 1]
        return s[:i]
        