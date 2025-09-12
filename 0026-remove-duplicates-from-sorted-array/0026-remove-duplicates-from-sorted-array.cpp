class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pointer = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (pointer == nums[i] && i > 0) {
                nums.erase(nums.begin() + i);
                i--;
            }
            else {
                pointer = nums[i];
            }
         }
         return nums.size();
    }
};