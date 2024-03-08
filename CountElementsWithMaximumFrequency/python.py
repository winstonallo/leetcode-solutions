class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        map = [0] * 101
        freq = 0
        max_freq = 0

        for num in nums:
            map[num] += 1
            freq += (map[num] == max_freq)
            if map[num] > max_freq:
                freq = 1
                max_freq = map[num]
        
        return freq * max_freq
        
