class Solution {
public:
    int firstUniqChar(string s) {
        vector <int> map(26, 0);
        size_t n = s.size();

        for (size_t i = 0; i < n; i++)
            map[s[i] - 'a']++;
        for (size_t i = 0; i < n; i++)
            if (map[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};