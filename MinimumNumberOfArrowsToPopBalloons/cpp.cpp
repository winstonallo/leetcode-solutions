class Solution 
{    
    public:
        int findMinArrowShots(vector<vector<int>>& points) 
        {
            int arrows = 1, current_max_x = 0, n = points.size();

            if (n == 0)
            {
                return 0;
            }

            std::sort(points.begin(), points.end(), &Solution::cmp);

            current_max_x = points[0][1];
            
            for (size_t i = 1; i < n; i++)
            {
                if (points[i][0] <= current_max_x)
                {
                    continue ;
                }
                else
                {
                    arrows++;
                    current_max_x = points[i][1];
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
