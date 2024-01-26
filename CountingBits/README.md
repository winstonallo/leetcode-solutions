1. ## Initialization:
   -Declare vector of size **n + 1** to store the count of set bits from 0 to **n**
   -**ans[0] = 0** -> 0 has not set bits

2. ## Dynamic Programming loop:
   -Iterate from 1 to **n**
   ```
    ans[i] = ans[i / 2] + (i & 1);
   ```
   - ### This algorithm is based on the observation that:
       -When you divide a number by 2, you remove the least significant bit, since:
       ```
       (i / 2 == i >> 1)
       ```
       therefore, **ans[i / 2]** is the same as the count of set bits in **i** minus the least significant one.
       -**(i & 1)** checks whether **i** is odd or even, effectively checking its least significant bit and adding it to the current dp index.
     



