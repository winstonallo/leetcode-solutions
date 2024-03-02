class Solution:
    def minOperations(self, nums: List[int]) -> int:
        n = len(nums)
        count = 0
        _map =  {}
        for num in nums:
            if num in _map:
                _map[num] += 1
            else:
                _map[num] = 1
        for num in _map:
            amount = _map[num]
            if amount == 1:
                return -1
            count += amount // 3
            if amount % 3 is not 0:
                count += 1
        return count
