#include <vector>

class Solution {
public:
    std::vector<int> findErrorNums(std::vector<int>& nums){
        int n = nums.size();
        std::vector <int> map(n, 0);
        for (int i = 0; i < n; i++){
            map[nums[i] - 1]++;
        }
        int duplicate;
        int missing;
        for (int i = 0; i < n; i++){
            if (map[i] == 2){
                duplicate = i + 1;
            }
            else if (!map[i]){
                missing = i + 1;
            }
        }
        return {duplicate, missing};
    }
};