class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0; // Two pointer, to maintain in-place requirement
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){ // If not 0
                if(i!=j) swap(nums[i],nums[j]); // If it's a different index swap to front
                j++; // Iterate Two Pointer
            }
        }
    }
};