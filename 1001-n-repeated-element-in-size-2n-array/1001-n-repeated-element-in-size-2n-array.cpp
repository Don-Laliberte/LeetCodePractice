class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> s;
        for (int num: nums) {
            if (s.count(num) > 0) {
                return num;
            }
            s.insert(num);
        }
        // never
        return -1;
    }
};