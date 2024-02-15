class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        if len(nums) < 3:
            return -1
        sum = 0
        ans = -1
        nums.sort()
        for num in nums:
            if num < sum:
                ans = num + sum
            sum += num
        return ans
        
