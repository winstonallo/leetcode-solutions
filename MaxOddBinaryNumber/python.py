class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        zeros = 0
        n = len(s)
        ans = ""
        first = True
        for i in range(0, n):
            if s[i] == '1':
                if first is True:
                    first = False
                    continue    
                ans += "1"
            else:
                zeros += 1
        for i in reversed(range(0, zeros)):
            ans += "0"
        ans += "1"
        return ans    