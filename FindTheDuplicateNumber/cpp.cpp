class Solution 
{
    public:
        int findDuplicate(vector<int>& nums) 
        {
            int left = nums[0], right = nums[0];

            do
            {
                left = nums[left];
                right = nums[nums[right]];
            } 
            while (left != right);

            right = nums[0];

            while (left != right)
            {
                left = nums[left];
                right = nums[right];
            }
            return left;
        }
};
