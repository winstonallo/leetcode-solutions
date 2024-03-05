class Solution 
{
    public:
        int minimumLength(string s) 
        {
            int left = 0, right = s.size() - 1;

            if (right + 1 < 2)
                return right + 1;
            while (left != right and s[left] == s[right])
            {
                char curr = s[left];

                while (left <= right and s[left] == curr)
                    left++;
                while (left <= right and s[right] == curr)
                    right--;
            }
            return right - left + 1;
        }
};
