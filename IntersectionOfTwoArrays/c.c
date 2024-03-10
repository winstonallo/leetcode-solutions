int cmp(const void* a, const void* b) 
{
   return (*(int*)a - *(int*)b);
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
{
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);
    int* ret = malloc(sizeof(int) * fmax(nums1Size, nums2Size));
    *returnSize = 0;
    int left = 0, right = 0;
    
    while (left < nums1Size && right < nums2Size) 
    {
        if (nums1[left] < nums2[right]) 
        {
            left++;
        } 
        else if (nums1[left] > nums2[right]) 
        {
            right++;
        } 
        else 
        {
            if (*returnSize == 0 || nums1[left] != ret[*returnSize - 1]) 
            {
                ret[*returnSize] = nums1[left];
                (*returnSize)++;
            }
            left++;
            right++;
        }
    }
    return ret;
}
