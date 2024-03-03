class Solution 
{
    public:
        int minOperations(vector<int>& nums) 
        {
            unordered_map<int, int> map;
            int count = 0;
            for (auto i : nums)
                map[i]++;
            for (auto i : map)
			{
                int amount = i.second;
                if (amount == 1)
                    return -1;
                count += amount / 3;
                if (amount % 3)
                    count++;
            }
            return count;
        }
};
