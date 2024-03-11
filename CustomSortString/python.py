class Solution:
    def customSortString(self, order: str, s: str) -> str:
        ans = ""
        count = {}
        
        for char in s:
            if char in count:
                count[char] += 1
            else:
                count[char] = 1
        
        for char in order:
            if char in count:
                ans += char * count[char]
                del count[char]
        
        for char, count in count.items():
            ans += char * count
        
        return ans
