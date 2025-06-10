class Solution(object):
    def permute(self, nums):
        result = []
        
        def backtrack(path, remaining_nums):
            if not remaining_nums:
                result.append(path)
                return
            
            for i in range(len(remaining_nums)):
                backtrack(path + [remaining_nums[i]], remaining_nums[:i] + remaining_nums[i+1:])
        
        backtrack([], nums)
        return result