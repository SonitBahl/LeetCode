class Solution(object):
    def letterCombinations(self, digits):
        if not digits:
            return []
        
        dtl= {
            '2': ['a', 'b', 'c'],
            '3': ['d', 'e', 'f'],
            '4': ['g', 'h', 'i'],
            '5': ['j', 'k', 'l'],
            '6': ['m', 'n', 'o'],
            '7': ['p', 'q', 'r', 's'],
            '8': ['t', 'u', 'v'],
            '9': ['w', 'x', 'y', 'z']
        }
        
        letter_groups = [dtl[digit] for digit in digits]
        
        return [''.join(combo) for combo in product(*letter_groups)]