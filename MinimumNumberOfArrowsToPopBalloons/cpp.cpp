class Solution 
{    
    public:
        int findMinArrowShots(vector<vector<int>>& points) 
        {
            int arrows = 0, current_max_x = INT_MIN;

            std::sort(points.begin(), points.end(), &Solution::cmp);

            for (const auto& it : points)
            {
                if (it[0] > current_max_x || current_max_x == INT_MIN)
                {
                    arrows++;
                    current_max_x = it[1];
                }
            }
            return arrows;         
        }

    private:
        static bool cmp(vector <int>& a, vector <int>& b)
        {
            return a[1] < b[1];
        }
};
