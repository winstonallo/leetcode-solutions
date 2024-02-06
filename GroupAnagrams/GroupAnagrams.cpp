class Solution
{
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs)
        {
            unordered_map <string, vector <string>> groups;
            vector <vector <string>> ans;
            for (const string &str : strs)
            {
                string sorted = str;
                sort(sorted.begin(), sorted.end());
                groups[sorted].push_back(str);
            }
            for (const auto &entry : groups)
                ans.push_back(entry.second);
            return ans;
        }
};

