class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        for (int i = 0; i < columnTitle.size(); i++) {
            int num = charToNum(columnTitle[i]);
            sum += num * pow(26, (columnTitle.size() - 1) - i);
        }
        return sum;
    }

    int charToNum(char letter) {
        return letter - 64;
    }
};