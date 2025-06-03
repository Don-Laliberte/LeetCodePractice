#include<string>
#include<string_view>

using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(s.find_last_not_of(" \t\n\r\f\v") + 1);
        int start_pos = s.rfind(' ');
        if (start_pos != string::npos) {
            return s.substr(start_pos + 1).length();
        }
        else {
            return s.size();
        }
    }
};