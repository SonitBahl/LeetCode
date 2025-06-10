class Solution(object):
    def shortestPalindrome(self, s):
        if not s:
            return s
        
        rev_s = s[::-1]
        combined = s + "#" + rev_s
        lps = self.computeLPS(combined)
        longest_palindromic_prefix_len = lps[-1]
        suffix_to_add = rev_s[:len(s) - longest_palindromic_prefix_len]
        return suffix_to_add + s
    
    def computeLPS(self, s):
        n = len(s)
        lps = [0] * n
        length = 0
        i = 1
        
        while i < n:
            if s[i] == s[length]:
                length += 1
                lps[i] = length
                i += 1
            else:
                if length != 0:
                    length = lps[length - 1]
                else:
                    lps[i] = 0
                    i += 1
        
        return lps