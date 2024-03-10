class Solution 
{
    public:
        int getCommon(vector<int>& nums1, vector<int>& nums2) 
        {
            int common = INT_MAX;
            int left = 0, right = 0;

            while (left < nums1.size() && right < nums2.size()) 
            {
                if (nums1[left] == nums2[right]) 
                {
                    common = nums1[left];
                    break;
                } 
                else if (nums1[left] < nums2[right])
                    left++;
                else
                    right++;
            }
            if (common != INT_MAX)
                return common;
            return -1;
        }
};
