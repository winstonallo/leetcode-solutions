static int cmp(const void* a, const void* b)
{
    int *pairA = *(int **)a;
    int *pairB = *(int **)b;

    if (pairA[1] < pairB[1])
    {
        return -1;
    }
    else if (pairA[1] > pairB[1])
    {
        return 1;
    }
    else
    {
        return 0;
    }    
}

int findMinArrowShots(int** points, int pointsSize, int* pointsColSize)
{
    int arrows = 0, current_max_x = INT_MIN;

    qsort(points, pointsSize, sizeof(int *), &cmp);

    for (int i = 0; i < pointsSize; i++)
    {
        if (points[i][0] > current_max_x || current_max_x == INT_MIN)
        {
            arrows++;
            current_max_x = points[i][1];
        }
    }
    return arrows;         
}
