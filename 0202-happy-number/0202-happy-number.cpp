#include <map>
class Solution {
public:
    bool isHappy(int n) {
        std::map<int, int> memo;
        return calcHappy(n, memo);
    }

    bool calcHappy(int n, map<int, int>& memo) {
        if (n == 1) {
            return true;
        }
        if (memo.count(n)) {
            return false;
        }
        memo[n] = 1;
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return calcHappy(sum, memo);
    }
};