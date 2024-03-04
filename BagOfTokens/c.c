int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int bagOfTokensScore(int* tokens, int tokensSize, int power)
{
    if (tokensSize == 0)
        return 0;
    int score = 0;
    int left = 0;
    qsort(tokens, tokensSize, sizeof(int), cmp);
    tokensSize--;
    while (left != tokensSize)
    {
        if (power >= tokens[left])
        {
            power -= tokens[left];
            score++;
            left++;
        }
        else if (score > 0 && tokensSize - left > 1)
        {
            power += tokens[tokensSize];
            score--;
            tokensSize--;
        }
        else
            return score;
    }
    if (power >= tokens[left])
        score++;
    return score;
}
