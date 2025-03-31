class Solution(object):
    def romanToInt(self, s):
        romanValue = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        result = 0
        previousValue = 0

        for i in range(len(s) - 1, -1, -1):
            if s[i] not in romanValue:
                return "Invalid Roman numeral"

            currentValue = romanValue[s[i]]

            if currentValue < previousValue:
                result = result - currentValue
            else:
                result = result + currentValue

            previousValue = currentValue

        return result

# Main
solution = Solution()
roman = "Roman"
integer = solution.romanToInt(roman)
print(integer)