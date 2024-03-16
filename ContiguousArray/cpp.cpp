class Solution
{
    public:
        int findMaxLength(vector<int>& nums) 
        {
            size_t n = nums.size();

            if (n < 2) 
            {
                return 0;
            }

            unordered_map <int, int> map;
            map[0] = -1;
            int sum = 0, ans = 0;

            for (size_t i = 0; i < n; i++) 
            {
                sum += nums[i] == 1 ? 1 : -1;

                if (map.find(sum) == map.end()) 
                {
                    map[sum] = i;
                } 
                else 
                {
                    ans = max(ans, static_cast <int>(i - map[sum]));
                }
            }

            return ans;
        }
};
