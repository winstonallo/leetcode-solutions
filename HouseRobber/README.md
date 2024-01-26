## Edge Cases:
  - If the the amount of values in **nums** is less than 3, return the highest value in **nums**

## DP Approach
  - The **dp** vector of size **nums.size()** is used to store the max amount of money up to house **index**

  ### Base cases:
  ```
    dp[0] = nums[0];
    dp[1] = nums[1];
    dp[2] = nums[0] + nums[2];
  ```
  - For each house, update the result with **nums[i] + max(dp[i - 2], dp[i - 3])**
    
    --> makes sure we do not pick two adjacent houses while keeping track of the optimal score ending at house **i**.

  ### Result = highest value from the dp vector
