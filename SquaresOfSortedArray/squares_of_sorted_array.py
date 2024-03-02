class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        n = len(nums)
        left = 0
        right = n - 1
        ans = [0] * n
        for i in reversed(range(n)):
            if abs(nums[left]) >= abs(nums[right]):
                ans[i] = nums[left] ** 2
                left += 1
            else:
                ans[i] = nums[right] ** 2
                right -= 1
        return ans
        
