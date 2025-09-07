class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        // charcount<char, int> if this contained unicode characters
        vector <int> charcount(26,0); //27 letters indexed from 0

        for (char c : s) {
            charcount[c - 'a']++; //a in ASCII is 96 so we subtract to get our dynamic array index value
        }

        for (char c : t) {
            charcount[c - 'a']--; // Subtracts all counts from the second string
        }

        for (int num : charcount) {
            if (num != 0) return false; // Check if there's a different amount of characters
        }

        return true;
    }
};