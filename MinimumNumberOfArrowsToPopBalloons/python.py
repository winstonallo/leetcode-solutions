class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:

        points.sort(key=lambda x: x[1])

        arrows, current_max_x = 0, float("-inf")

        for start, end in points:
            
            if start > current_max_x:
                arrows += 1
                current_max_x = end

        return arrows
