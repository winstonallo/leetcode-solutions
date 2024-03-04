class Solution 
{
    public:
        int bagOfTokensScore(vector<int>& tokens, int power) 
        {
            if (tokens.size() == 0)
                return 0;
            int score = 0;
            int n = tokens.size();
            int left = 0, right = n - 1;
            sort(tokens.begin(), tokens.end());
            while (left != right)
            {
                if (power >= tokens[left])
                {
                    power -= tokens[left];
                    score++;
                    left++;
                }
                else if (score > 0 && right - left > 1)
                {
                    power += tokens[right];
                    score--;
                    right--;
                }
                else
                    return score;
            }
           if (power >= tokens[left])
                score++;
            return score;
        }
};
