class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k)
    {
        int n = arr.size();
        vector <int> dp (n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            int maxx = 0, sum = 0;
            for (int j = 1; j <= k && i - j >= 0; j++)
            {
                maxx = max(maxx, arr[i - j]);
                sum = max(sum, dp[i - j] + maxx * j);
            }
            dp[i] = sum;
        }
        return dp[n];
    }
};