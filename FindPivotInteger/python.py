class Solution:
    def pivotInteger(self, n: int) -> int:
        
        y = (n * n + n) // 2
        x = int(sqrt(y))

        if pow(x, 2) == y:
            return x
        
        return -1
