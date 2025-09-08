#include <vector>
#include <iostream>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0; // Writes to start of array relative too original order
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }

        return j; // Since elements of array don't matter we just return number of wanted elements
    }
};