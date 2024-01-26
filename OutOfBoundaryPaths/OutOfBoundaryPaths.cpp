class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn){
        if (maxMove == 0)
            return 0;
        vector <vector <vector <int>>> dp(maxMove + 1, vector <vector <int>> (m, vector <int> (n, 0)));
        int pathCount = 0;
        dp[0][startRow][startColumn] = 1;
        for (int move = 1; move <= maxMove; move++){
            for (int i = 0; i < m; i++){
                for (int j = 0; j < n; j++){
                    if (dp[move - 1][i][j] > 0){
                        for (int k = 0; k < 4; k++){
                            int ii = i + directions[k].first;
                            int jj = j + directions[k].second;
                            if (ii >= 0 && ii < m && jj >= 0 && jj < n)
                                dp[move][ii][jj] = (dp[move][ii][jj] + dp[move - 1][i][j]) % MOD;
                            else
                                pathCount = (pathCount + dp[move - 1][i][j]) % MOD;
                        }
                    }
                }
            }
        }
        return pathCount;
    }
    private:
        const int MOD = 1000000007;
        vector <pair <int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
};
