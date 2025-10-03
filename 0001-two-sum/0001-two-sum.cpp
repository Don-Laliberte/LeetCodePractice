#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> compNumMap;
        for (int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            int comp = target - curr;
            auto it = compNumMap.find(comp);

            if (it != compNumMap.end()) {
                return {it->second, i};
            }
            compNumMap[curr] = i;
        }

        return {};
    }
};