class Solution {
public:
    string minWindow(string s, string t)
    {
        size_t targetLen = t.length();
        if (targetLen > s.length())
            return "";
        size_t start = 0, minLen = INT_MAX, currLen = 0, left = 0, right = 0, s_len = s.length();
        vector <int> s_map(128, 0), t_map(128, 0);
        for (char c : t)
            t_map[c]++;    
        while (right < s_len)
        {
            char ch = s[right];       
            s_map[ch]++;
            if (t_map[ch] > 0 && s_map[ch] <= t_map[ch])
                currLen++;      
            while (left <= right && currLen == targetLen)
            {
                ch = s[left];
                if (right - left + 1 < minLen)
                {
                    minLen = right - left + 1;
                    start = left;
                }
                s_map[ch]--;
                if (t_map[ch] > 0 && s_map[ch] < t_map[ch])
                    currLen--;
                left++;
            }
            right++;
        }
        if (minLen < INT_MAX)
            return s.substr(start, minLen);
        return "";
    }
};