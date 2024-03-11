char* customSortString(char* order, char* s) 
{
    size_t  n = strlen(s);
    int     index = 0;
    int     *count = calloc(26, sizeof(int));
    char    *ans = calloc(n + 1, sizeof(char));

    for (size_t i = 0; i < n; i++)
    {
        count[s[i] - 'a']++;
    }

    for (size_t i = 0; i < strlen(order); i++)
    {
        while (count[order[i] - 'a']-- > 0)
        {
            ans[index++] = order[i];
        }
    }

    for (size_t i = 0; i < 26; i++)
    {
        while (count[i]-- > 0)
        {
            ans[index++] = i + 'a';
        }
    }
    return ans;
}
