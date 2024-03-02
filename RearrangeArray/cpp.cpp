class Solution 
{
    public:
        vector<int> rearrangeArray(vector<int>& nums) 
        {
            vector <int> ans(nums.size(), 0);
            int pos_index = 0, neg_index = 1;

            for (auto it : nums)
            {
                if (it < 0)
                {
                    ans[neg_index] = it;
                    neg_index += 2;
                }
                else
                {
                    ans[pos_index] = it;
                    pos_index += 2;
                }
            }  
            return ans;
        }
};
