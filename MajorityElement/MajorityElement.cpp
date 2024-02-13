class Solution 
{
    public:

        int majorityElement(vector<int>& nums)
        {
            unordered_map <int, int> map;
            int ans = 0, maxFreq = 0;

            for (auto n : nums)
            {
                map[n] = 1 + map[n];
                if (map[n] > maxFreq)
                {
                    ans = n;
                    maxFreq = map[n];
                }
            }
            return ans;
        }
};
