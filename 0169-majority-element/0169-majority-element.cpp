class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max = -1;
        int conseq = 1;
        int output;
        int ptr = nums[0];
        if (nums.size() == 1) {
            return nums[0];
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] == ptr) {
                conseq++;
                if (max < conseq) {
                    max = conseq;
                    output = nums[i];
                }
            }
            else {
                ptr = nums[i + 1];
                conseq = 1;
            }
        }

        return output;

    }
};