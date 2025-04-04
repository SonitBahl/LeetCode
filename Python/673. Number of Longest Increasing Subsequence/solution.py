class Solution(object):
    def findNumberOfLIS(self, nums):
        if not nums:
            return 0
        
        n = len(nums)
        dp = [1] * n
        count = [1] * n
        
        for i in range(n):
            for j in range(i):
                if nums[i] > nums[j]:
                    if dp[i] < dp[j] + 1:
                        dp[i] = dp[j] + 1
                        count[i] = count[j]
                    elif dp[i] == dp[j] + 1:
                        count[i] += count[j]
        
        max_len = max(dp)
        result = sum(count[i] for i in range(n) if dp[i] == max_len)
        
        return result