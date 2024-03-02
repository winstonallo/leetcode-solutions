class Solution 
{
    private:

        int countAroundCenter(const string &s, int left,  int right)
        {
            int count = 0;
            while (left >= 0 && right < s.length() && s[left] == s[right])
            {
                count++;
                left--;
                right++;
            }
            return count;
        }

    public:

        int countSubstrings(string s) 
        {
            int ans = 0;
            for (size_t i = 0; i < s.length(); i++)
            {
                ans += countAroundCenter(s, i, i);
                ans += countAroundCenter(s, i, i + 1);
            }
            return ans;
        }
};
