class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target){
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> sum(rows + 1, vector<int>(cols + 1, 0));
        int ans = 0;

        for (int i = 1; i <= rows; i++){
            for (int j = 1; j <= cols; j++){
                sum[i][j] = matrix[i - 1][j - 1] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
            }
        }
        for (int i = 1; i <= rows; i++){
            for (int j = 1; j <= cols; j++){
                for (int ii = i; ii <= rows; ii++){
                    for (int jj = j; jj <= cols; jj++){
                        int currSum = sum[ii][jj] - sum[i - 1][jj] - sum[ii][j - 1] + sum[i - 1][j - 1];
                        if (currSum == target)
                            ans++;
                    }
                }
            }
        }
        return ans;
    }
};
