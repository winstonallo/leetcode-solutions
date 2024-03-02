class Solution 
{
    public:
        int missingNumber(vector<int>& nums) 
        {
            int ans = 0;
            for (auto i : nums)
                ans ^= i;
            for (size_t i = 0; i <= nums.size(); ++i)
                ans ^= i;
            return ans;
        }
};