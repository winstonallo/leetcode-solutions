class Solution
{
    public:
        bool isValid(string s) 
        {
            stack <char> stk;
            unordered_map <char, char> pairs = {
                {')', '('},
                {'}', '{'},
                {']', '['}
            };

            for (const char& c : s)
            {
                if (pairs.count(c) != 0)
                {
                    if (stk.empty() == true || stk.top() != pairs[c])
                    {
                        return false;
                    }
                    stk.pop();
                }
                else
                {
                    stk.push(c);
                }
            }
            return stk.empty() == true;
        }
};
