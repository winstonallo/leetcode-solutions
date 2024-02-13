class Solution:
    def is_palindrome(self, str):
        rev = "".join(reversed(str))
        for i in range(0, len(str)):
            if str[i] != rev[i]:
                return False;
        return True

    def firstPalindrome(self, words: List[str]) -> str:
        for word in words:
            if Solution().is_palindrome(word) is True:
                return word
        return ""
