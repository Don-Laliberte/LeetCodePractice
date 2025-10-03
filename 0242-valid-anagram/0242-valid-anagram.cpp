class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> charcount(26,0);

        for (char c : s) {
            charcount[c - 'a']++; 
        }

        for (char c : t) {
            charcount[c - 'a']--; 
        }

        for (int num : charcount) {
            if (num != 0) return false; 
        }

        return true;
    }
};