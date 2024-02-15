class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        ans = [0] * len(nums)
        pos_index = 0
        neg_index = 1

        for num in nums:
            if num < 0:
                ans[neg_index] = num
                neg_index += 2
            else:
                ans[pos_index] = num
                pos_index += 2
        
        return ans
        
