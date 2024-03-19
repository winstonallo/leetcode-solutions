class Solution 
{
    public:
        int leastInterval(vector<char>& tasks, int n) 
        {
            int max_frequency = 0, elements_with_max_frequency = 0, total_jobs = tasks.size();
            vector <int> map(26, 0);

            for (const auto& c : tasks)
            {
                int index = c - 'A';
                map[index]++;
                max_frequency = std::max(max_frequency, map[index]);
            }

            for (const auto& element : map)
            {
                elements_with_max_frequency += element == max_frequency; 
            }

            return std::max((max_frequency - 1) * (n + 1) + elements_with_max_frequency, (int)tasks.size());
        }
};
