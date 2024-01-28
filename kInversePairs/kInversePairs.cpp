class Solution {
private:
    static const int MOD = 1000000007;
    int dp[1001][1001];
    
    int solve(int n, int k){
        if (k <= 0)
            return k == 0;
        if (dp[n][k] != -1)
            return dp[n][k];
        int ans = 0;
        for (int i = 0; i < n; ++i)
            ans += solve(n - 1, k - i) % MOD;
        return dp[n][k] = ans;
    }
public:
    int kInversePairs(int n, int k) {
        memset(dp, -1 , sizeof(dp));
        return solve(n, k);
    }
};