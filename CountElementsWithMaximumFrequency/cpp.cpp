class Solution 
{
    public:
        int maxFrequencyElements(vector<int>& nums) 
        {
            vector <int> map(101, 0);
            int freq = 0, max_freq = 0;

            for (auto num : nums)
            {
                map[num]++;
                freq += (map[num] == max_freq);
                if (map[num] > max_freq)
                {
                    freq = 1;
                    max_freq = map[num];
                }
            }
            return freq * max_freq;
        }
};
