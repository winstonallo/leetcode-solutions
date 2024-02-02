class Solution 
{
    public:

        vector<int> sequentialDigits(int low, int high)
        {
            vector <int> ans;
            string nums = "123456789";
            int lowLength = to_string(low).length();
            int highLength = to_string(high).length();

            for (int i = lowLength; i <= highLength; i++)
            {
                for (int j = 0; j <= 9 - i; j++)
                {
                    int seq = stoi(nums.substr(j, i));
                    if (seq >= low && seq <= high)
                        ans.push_back(seq); 
                }
            }            
            return ans;
        }

};