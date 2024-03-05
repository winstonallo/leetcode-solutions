int minimumLength(char* s) 
{
    int left = 0, right = strlen(s) - 1;

    if (right + 1 < 2)
        return right + 1;

    while (left < right && s[left] == s[right])
    {
        char curr = s[left];

        while (left <= right && s[left] == curr)
            left++;
        while (left <= right && s[right] == curr)
            right--;
    }    
    return right - left + 1;
}
