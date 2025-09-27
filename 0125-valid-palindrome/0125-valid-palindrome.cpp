#include <iostream>
#include <string>
#include <algorithm> 
#include <cctype>    
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(),[](unsigned char c){ return tolower(c); });
        s.erase(remove_if(s.begin(), s.end(), [](char c) { return !std::isalnum(c); }), s.end());
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return false; 
            }
            left++;
            right--;
        }
        return true; 
    }
};