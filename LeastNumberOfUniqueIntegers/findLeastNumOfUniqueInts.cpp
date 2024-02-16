class Solution 
{
    public:
        int findLeastNumOfUniqueInts(vector<int>& arr, int k)
        {
            unordered_map<int, int> map;
            for (auto num : arr)
                map[num]++;
            vector<pair<int, int>> elems(map.begin(), map.end());
            sort(elems.begin(), elems.end(), [](const pair<int, int>& a, const pair<int, int>& b){
                return a.second < b.second;
            });
            int remaining = elems.size();
            for (auto& element : elems)
            {
                if (k >= element.second)
                {
                    k -= element.second;
                    remaining--;
                }
                else
                    break;
            }
            return remaining;
        }
};

