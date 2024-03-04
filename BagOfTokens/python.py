class Solution:
    def bagOfTokensScore(self, tokens: List[int], power: int) -> int:
        if tokens == []:
            return 0
        score = 0
        left = 0
        right = len(tokens) - 1
        tokens.sort()
        while left != right:
            if power >= tokens[left]:
                power -= tokens[left]
                score += 1
                left += 1
            elif score > 0 and right - left > 1:
                power += tokens[right]
                score -= 1
                right -= 1
            else:
                return score
        if power >= tokens[left]:
            score += 1
        return score
