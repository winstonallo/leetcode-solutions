class Solution 
{
    private:

        int count[256] = {0};

    public:

        string frequencySort(string s) 
        {
            if (s.size() <= 2)
                return s;
            string ans = "";
            priority_queue <pair <int, char>> q;
            for (char c : s)
                count[c]++;          
            for (size_t i = 0; i < 256; i++)
            {
                if (count[i] > 0)
                    q.push({count[i], (char)i});
            }
            while (!q.empty())
            {
                pair <int, int> t = q.top();
                q.pop();
                for (int i = 0; i < t.first; i++)
                    ans += t.second;
            }
            return ans;
        }
};
