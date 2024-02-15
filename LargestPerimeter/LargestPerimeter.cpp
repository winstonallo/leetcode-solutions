class Solution 
{
    public:
        long long largestPerimeter(vector<int>& nums)
        {
            if (nums.size() < 3)
                return -1;
            long long sum = 0;
            long long ans = -1;
            sort(nums.begin(), nums.end());
            for (auto it : nums)
            {
                if (it < sum)
                    ans = it + sum;
                sum += it;
            }
            return ans;
        }
};
