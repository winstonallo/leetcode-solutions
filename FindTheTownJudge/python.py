class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        if trust == [] and n == 1:
            return 1
        x = [0] * (n + 1)
        y = [0] * (n + 1)
        for guy in trust:
            x[guy[1]] += 1
            y[guy[0]] += 1
        for i in range(0, n + 1):
            if x[i] == n - 1 and y[i] == 0:
                return i
        return -1