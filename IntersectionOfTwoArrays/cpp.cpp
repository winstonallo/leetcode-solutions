class Solution 
{
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
        {
            unordered_set <int> left(nums1.begin(), nums1.end());
            unordered_set <int> right(nums2.begin(), nums2.end());
            vector <int> ans;

            for (auto num : left)
            {
                if (right.find(num) != right.end())
                {
                    ans.push_back(num);
                }
            }
            return ans;
        }
};
