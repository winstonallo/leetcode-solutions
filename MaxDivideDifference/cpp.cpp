class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n % 3 != 0)
            return vector <vector <int>>();
        sort(nums.begin(), nums.end());
        vector <vector <int>> ans(n / 3, vector <int>(3));
        int i = 0;
        for (int j = 0; j < n; j += 3) {
            if (j + 2 < n && nums[j + 2] - nums[j] <= k) {
                ans[i] = {nums[j], nums[j + 1], nums[j + 2]};
                i++;
            }
            else
                return vector <vector <int>>();
        }
        return ans;
    }
};