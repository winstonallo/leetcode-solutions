class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s){
        vector <pair <int, int>> map(26, make_pair(-1, -1));
        int ans = -1;
        for (int i = 0; i < s.length(); i++){
            if (map[s[i] - 'a'].first == -1)
                map[s[i] - 'a'].first = i;
            else
                map[s[i] - 'a'].second = i;
        }
        for (int i = 0; i < 26; i++){
            int curr = map[i].second - map[i].first;
            if (curr > ans)
                ans = curr - 1;
        }
        return ans;
    }
};
