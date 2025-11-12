class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int left = i - k;
            int right = i + k;

            if (left >= 0 && right < nums.size()) {
                if (nums[i] > nums[left] && nums[i] > nums[right]) {
                    cout << i << endl;
                    sum += nums[i];
                }
            }
            else if (left < 0 && (right >= nums.size() || nums[i] > nums[right]))
                    sum += nums[i];
            else if (right >= nums.size() && (left < 0 || nums[i] > nums[left]))
                    sum += nums[i];
        }
        return sum;
    }
};