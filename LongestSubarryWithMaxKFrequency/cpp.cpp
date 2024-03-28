class Solution 
{
    public:
        int maxSubarrayLength(vector<int>& nums, int k) 
        {
            int left = 0, right = 0;
            int n = nums.size();
            int current_length = 0, max_length = 0;
            unordered_map <int, int> map;

            while (right < n)
            {
                map[nums[right]]++;

                while (map[nums[right]] > k)
                {
                    map[nums[left]]--;
                    left++;
                }
                max_length = std::max(max_length, right - left + 1);
                right++;
            }
            return max_length;
        }
};
