## Algorithm

1. ### DP (Dynamic Programming):
   Using a 3D int vector -> **dp[move][i][j]** represents the number of ways to
   reach cell **[i][j]** with **move** moves.

2. ### Initialize dp Vector:
   Initialize **dp[0][startRow][startColumn]** to 1 -> one way to be at start position
   with 0 moves.

3. ### DP iteration:
   -iterate through each move from 1 to **maxMove**
     ```
    dp[move][i][j] = sum of dp[move - 1][ii][jj] for every adjacent cell
     ```
   -the **direction** vector defines the possible movements (right, down, up, left)
   -for each possible direction, calculate cell indices and update dp/pathCount accordingly
   **-->if moving from current cell leads out of the grid, add one way out to pathCount**
