class Solution {
public:
    string convertToTitle(int columnNumber) {
        // 65 - 90
        string output;
        while (columnNumber > 0) {
            if (columnNumber < 26) {
                output.insert(0,1,convertToLetter(columnNumber - 1));
            }
            else {
                int remainder = (columnNumber - 1) % 26;
                output.insert(0,1,convertToLetter(remainder));
            }
            columnNumber = (columnNumber - 1) / 26;
        }
        return output;
    }

    char convertToLetter(int num) {
        char c = num + 65;
        return c;
    }
};