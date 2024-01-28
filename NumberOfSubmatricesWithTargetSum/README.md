## Sum Precomputation

Create cumulative sum matrix to efficiently calculate the sum of any submatrix in constant time

Each element **sum[i][j]** represents the sum of elements in the original matrix from the top left to (**i - 1, j - 1**)


```
sum[i][j] = matrix[i - 1][j - 1] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1]
```

Substract **sum[i - 1][j - 1] to avoid double counting overlapping areas

## Calcutlate Submatrix Sum and Count


```
currSum = sum[ii][jj] - sum[i - 1][jj] - sum[ii][j - 1] + sum[i - 1][j - 1]
```

If **currSum == target**, increment **ans**