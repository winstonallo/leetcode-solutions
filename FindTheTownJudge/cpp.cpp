class Solution 
{
    public:
        int findJudge(int N, vector<vector<int>>& trust)
        {
            vector<int> in(N + 1), out(N + 1);
            for (auto a : trust) 
            {
                ++in[a[1]];
                ++out[a[0]];
            }
            for (int i = 1; i <= N; ++i)
                if (in[i] == N - 1 && out[i] == 0) 
					return i;
            return -1;
        }
};
