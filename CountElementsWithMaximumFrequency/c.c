int maxFrequencyElements(int* nums, int numsSize) 
{
    int *map = calloc(101, sizeof(int));
    int freq = 0, max_freq = 0;

    for (int i = 0; i < numsSize; i++)
    {
        map[nums[i]]++;
        freq += (map[nums[i]] == max_freq);
        if (map[nums[i]] > max_freq)
        {
            freq = 1;
            max_freq = map[nums[i]];
        }
    }    
    return freq * max_freq;
}
