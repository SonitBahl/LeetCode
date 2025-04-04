class Solution:
    def divideArray(self, nums):
        freq = {}
        
        for i in nums:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1
        
        for count in freq.values():
            if count % 2 != 0:
                return False
        
        return True