class Solution(object):
    def subsetXORSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        def backtrack(index, xor_sum):
            if index == len(nums):
                return xor_sum
            return backtrack(index + 1, xor_sum) + backtrack(index + 1, xor_sum ^ nums[index])
        
        return backtrack(0, 0)
