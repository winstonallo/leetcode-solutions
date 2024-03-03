class Solution:
    def isSquare(self, n):
        sqrt_n = int(sqrt(n))
        return sqrt_n * sqrt_n == n

    def numSquares(self, n: int) -> int:
        if self.isSquare(n) == True:
            return 1
        while n & 3 == 0:
            n = n >> 2
        if n & 7 == 7:
            return 4
        sqrt_n = int(sqrt(n))
        for i in range(0, sqrt_n + 1):
            if self.isSquare(n - i * i) == True:
                return 2
        return 3
