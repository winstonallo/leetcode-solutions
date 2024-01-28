class Solution {
public:
    int rob(std::vector<int>& nums){
        int n = nums.size();
        std::vector <int> dp(n, 0);
        if (n < 3){
            return *max_element(nums.begin(), nums.end());
        }
        else{
            dp[0] = nums[0];
            dp[1] = nums[1];
            dp[2] = nums[0] + nums[2];
            for (int i = 3; i < n; i++){
                dp[i] = max(nums[i] + dp[i - 2], nums[i] + dp[i - 3]);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
