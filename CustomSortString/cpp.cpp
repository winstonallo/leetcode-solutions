class Solution 
{
    public:
        string customSortString(string order, string s) 
        {
            vector <int> count(26, 0);
            string ans;

            for (auto c : s)
            {
                count[c - 'a']++;
            }
            for (auto c : order)
            {
                while (count[c - 'a'] > 0)
                {
                    ans += c;
                    count[c - 'a']--;
                }
            }
            for (size_t i = 0; i < count.size(); i++)
            {
                while (count[i] > 0)
                {
                    ans += i + 'a';
                    count[i]--;
                }
            }
            return ans;
        }
};
