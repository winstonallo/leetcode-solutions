class Solution:
  
    def minimumLength(self, s: str) -> int:
        left = 0
        right = len(s) - 1

        if right + 1 < 2:
            return right + 1

        while left < right and s[left] == s[right]:
            curr = s[left]
            
            while left <= right and s[left] == curr:
                left += 1
            while left <= right and s[right] == curr:
                right -= 1

        return right - left + 1
