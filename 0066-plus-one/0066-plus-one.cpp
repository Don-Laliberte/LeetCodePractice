class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carryover = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] + carryover > 9) {
                carryover = digits[i] + carryover - 9;
                digits[i] = 0;
                if (i == 0 && carryover > 0) {
                    digits.insert(digits.begin(),carryover);
                }
            }
            else {
                digits[i] = digits[i] + carryover;
                carryover = 0;
            }
        }
        return digits;
    }
};