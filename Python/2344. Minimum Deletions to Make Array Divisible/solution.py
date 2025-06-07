def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

class Solution(object):
    def minOperations(self, nums, numsDivide):
        nums.sort()
        g = reduce(gcd, numsDivide)
        
        for i, num in enumerate(nums):
            if g % num == 0:
                return i
        
        return -1