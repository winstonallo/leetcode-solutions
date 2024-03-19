int leastInterval(char* tasks, int tasksSize, int n) 
{
    int max_frequency = 0, elements_with_max_frequency = 0;
    int* map = calloc(26, sizeof(int));

    for (int i = 0; i < tasksSize; i++)
    {
        int index = tasks[i] - 'A';
        map[index]++;
        max_frequency = fmax(max_frequency, map[index]);
    }

    for (int i = 0; i < 26; i++)
    {
        elements_with_max_frequency += map[i] == max_frequency;
    }

    return fmax((max_frequency - 1) * (n + 1) + elements_with_max_frequency, (int)tasksSize);
}
