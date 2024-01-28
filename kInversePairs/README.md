### Concept of Inverse Pairs

An inverse pair in a sequence is a pair of elements where a larger element appears before a smaller one, ex:
```
[1, 3, 2] -- (3, 2) is an inverse pair
```

## Memoization Table

Each cell **dp[i][j]** represents the number of ways to arrange **i** elements with **j** inverse pairs.

## Recursive Computation

If the value for (**n, k**) is already computed, return the stored value.

Otherwise, calculate the value by iterating from **0** to **n - 1**.
    The recursive call **solve(n - 1, k - i)** represents the count of arrangements of **n - 1** elements with **k - i** inverse pairs.
