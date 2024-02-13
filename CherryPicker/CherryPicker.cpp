class Solution
{
    public:

        int cherryPickup(vector<vector<int>>& grid) 
        {
            int rows = grid.size(), cols = grid[0].size();
            vector<vector<vector<int>>> dp(rows, vector<vector<int>>(cols, vector<int>(cols, 0)));
            for (int c1 = 0; c1 < cols; ++c1)
            {
                for (int c2 = 0; c2 < cols; ++c2)
                    dp[rows - 1][c1][c2] = grid[rows - 1][c1] + ((c1 != c2) ? grid[rows - 1][c2] : 0);
            }
            for (int r = rows - 2; r >= 0; --r) 
            {
                for (int c1 = 0; c1 < cols; ++c1) 
                {
                    for (int c2 = 0; c2 < cols; ++c2) 
                    {
                        int maxCherries = 0;
                        for (int move1 = -1; move1 <= 1; ++move1) 
                        {
                            for (int move2 = -1; move2 <= 1; ++move2) 
                            {
                                int newC1 = c1 + move1, newC2 = c2 + move2;
                                if (newC1 >= 0 && newC1 < cols && newC2 >= 0 && newC2 < cols)
                                    maxCherries = max(maxCherries, dp[r + 1][newC1][newC2]);
                            }
                        }
                        dp[r][c1][c2] = grid[r][c1] + ((c1 != c2) ? grid[r][c2] : 0) + maxCherries;
                    }
                }
            }
            return dp[0][0][cols - 1];
        }
};

