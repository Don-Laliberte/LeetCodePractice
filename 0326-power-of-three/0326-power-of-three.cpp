#include <cmath>
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n > 0 && ((int)pow(3,19) % n) == 0.0) {
            return true;
        }
        return false;
    }
};