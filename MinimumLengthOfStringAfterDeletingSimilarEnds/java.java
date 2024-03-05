class Solution 
{
    public int minimumLength(String s) 
    {
        int left = 0;
        int right = s.length() - 1;

        if (right + 1 < 2)
            return right + 1;
        
        while (left < right && s.charAt(left) == s.charAt(right))
        {
            char curr = s.charAt(left);

            while (left <= right && s.charAt(left) == curr)
                left++;
            while (left <= right && s.charAt(right) == curr)
                right--;
        }
        return right - left + 1;
    }
}
