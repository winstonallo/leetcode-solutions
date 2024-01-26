class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn){
        if (maxMove == 0)
            return 0;
        vector <vector <vector <int>>> dp(maxMove + 1, vector <vector <int>> (m, vector <int> (n, 0)));
        //dp[move][i][j] = number of ways to reach cell[i][j] with 'move' moves
        int pathCount = 0;
        dp[0][startRow][startColumn] = 1;
        //base case, exactly 1 way to be at starting pos with 0 moves
        for (int move = 1; move <= maxMove; move++){
            for (int i = 0; i < m; i++){
                for (int j = 0; j < n; j++){
                    if (dp[move - 1][i][j] > 0){
                    //check if there is a way to reach current cell in 'move - 1' moves
                    //if not, no need to keep going
                        for (int k = 0; k < 4; k++){
                        //iterate over every possible direction
                            int ii = i + directions[k].first;
                            int jj = j + directions[k].second;
                            //new indexes after moving in each direction
                            if (ii >= 0 && ii < m && jj >= 0 && jj < n)
                            //is new position within the boundaries? if yes update dp array
                                dp[move][ii][jj] = (dp[move][ii][jj] + dp[move - 1][i][j]) % MOD;
                                //number of ways to reach a cell = sum of ways to reach its adjacent cells
                                //with one fewer move
                            else
                            //increment return value, keeping track of all possible paths
                            //out of the grid
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
