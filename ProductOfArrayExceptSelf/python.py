class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [1] * n

        for i in range(1, n):
            ans[i] = ans[i - 1] * nums[i - 1]
        
        product = 1

        for i in reversed(range(0, n)):
            ans[i] = ans[i] * product
            product *= nums[i]
        
        return ans
