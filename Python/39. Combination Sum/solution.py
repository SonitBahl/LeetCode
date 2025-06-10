class Solution(object):
    def combinationSum(self, candidates, target):
        result = []
        
        def backtrack(remaining_target, combination, start):
            if remaining_target == 0:
                result.append(list(combination))
                return
            
            for i in range(start, len(candidates)):
                if candidates[i] > remaining_target:
                    continue
                
                combination.append(candidates[i])
                backtrack(remaining_target - candidates[i], combination, i)
                combination.pop()

        backtrack(target, [], 0)
        
        return result