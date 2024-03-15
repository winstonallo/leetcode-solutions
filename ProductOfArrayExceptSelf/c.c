int* productExceptSelf(int* nums, int numsSize, int* returnSize) 
{
    int *ans = malloc(numsSize * sizeof(int));

    ans[0] = 1, ans[numsSize - 1] = 1;

    for (int i = 1; i < numsSize; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int product = 1;

    for (int i = numsSize - 1; i >= 0; i--)
    {
        ans[i] = ans[i] * product;
        product *= nums[i];
    }
    
    *returnSize = numsSize;

    return ans;
}
