class Solution 
{
    public:
        string maximumOddBinaryNumber(string s) 
        {
            int zeros = 0;
            int n = s.size();
            string ans = "";
            size_t i = -1;
            while (++i < n)
            {
                if (s[i] == '1')
                    ans.push_back('1');
                else
                    zeros++;
            }
            auto pos = ans.find('1');
            ans.erase(pos, 1);
            while (zeros > 0)
            {
                ans.push_back('0');
                zeros--;
            }
            ans.push_back('1');
            return ans;
        }
};