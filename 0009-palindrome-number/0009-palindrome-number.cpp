#include <iostream>
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) { // All negative integers are not palindromes
            return false;
        }
        if (x < 10) { // All single digit integers are palindromes
            return true;
        }

        long og_x = x;
        long rev_x = 0;

        while (x > 0) { // Loop until all digits are worked through
            long digit = x % 10; // Grab last digit
            rev_x = rev_x * 10 + digit;
            x /= 10; // Remove digit from og number
        }

        return og_x == rev_x;
    }
};