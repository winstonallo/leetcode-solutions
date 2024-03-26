class Solution 
{
    public:
        int firstMissingPositive(vector<int>& nums) 
        {
            int n = nums.size();

            for (int i = 0; i < n; i++)
            {
                if (nums[i] <= 0 or nums[i] > n)
                {
                    nums[i] = -1;
                }
                else
                {
                    nums[nums[i] - 1] = nums[i];
                }
            }
            bool negative = true;
            for (const auto &num : nums)
            {
                if (num != -1)
                {
                    if (num != 1)
                    {
                        return 1;
                    }
                    return num;
                }
                else
                {
                    negative = true;
                }
            }
            return n;
        }
};
