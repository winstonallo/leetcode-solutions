class Solution 
{
    public:
        vector<int> productExceptSelf(vector<int>& nums) 
        {
            int n = nums.size();
            vector<int> dp_left(n, 1);
            vector<int> dp_right(n, 1);

            for (int i = 1; i < n; i++) 
            {
                dp_left[i] = dp_left[i - 1] * nums[i - 1];
            }

            for (int i = n - 2; i >= 0; i--) 
            {
                dp_right[i] = dp_right[i + 1] * nums[i + 1];
            }

            vector<int> ans(n);
            for (int i = 0; i < n; i++) 
            {
                ans[i] = dp_left[i] * dp_right[i];
            }
            
            return ans;
        }
};
