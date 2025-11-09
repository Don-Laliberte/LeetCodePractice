class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = floor(nums.size() / 2);
        sort(nums.begin(), nums.end());
        int c = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (i + 1 != nums.size() && nums[i+1] == nums[i]) {
                c++;
            }
            else {
                c = 1;
            }
            if (c == n) {
                return nums[i];
            }
        }

        return 1;
    }
};