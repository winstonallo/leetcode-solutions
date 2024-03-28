class Solution 
{
    public:
        int numSubarrayProductLessThanK(vector<int>& nums, int k) 
        {
            if (k <= 1)
            {
                return 0;
            }
            
            int left = 0, right = 0, product = 1, count = 0, n = nums.size();

            while (right < n)
            {
                product *= nums[right];
                
                while (product >= k)
                {
                    product /= nums[left];
                    left++;
                }
                count += 1 + (right - left);
                right++;
            }    
            return count;
        }
};
