class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) {
            return "";
        }

        int n = s.length();
        int start = 0; 
        int maxLength = 1; 
        for (int i = 0; i < n; ++i) {
            
            int odd = expandAroundCenter(s, i, i);
            int even = expandAroundCenter(s, i, i + 1);

            // Find the maximum length for the current center(s).
            int currentMaxLen = std::max(odd, even);

            if (currentMaxLen > maxLength) {
                maxLength = currentMaxLen;
                start = i - (maxLength - 1) / 2;
            }
        }

        return s.substr(start, maxLength);
    }


    int expandAroundCenter(const string &s, int left, int right) {
        int n = s.length();
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
};