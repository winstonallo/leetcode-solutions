class Solution {
public:
    int longestCommonSubsequence(string text1, string text2){
        int oneLen = text1.length();
        int twoLen = text2.length();
        vector <vector <int>> dp(oneLen + 1, vector <int> (twoLen + 1, 0));
        for (int i = 1; i <= oneLen; i++){
            for (int j = 1; j <= twoLen; j++){
                if (text1[i - 1] == text2[j - 1])//can we extend the longest common subsequence? if yes increment current dp array index
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else //else skip current char of either text1 or text2
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[oneLen][twoLen];
    }
};