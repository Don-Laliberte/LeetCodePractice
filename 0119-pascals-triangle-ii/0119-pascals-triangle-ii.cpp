class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pastria;
        pastria.push_back({1});
        for (int i = 1; i <= rowIndex; i++) {
            vector<int> row;
            row.push_back(1);
            for (int j = 0; j <= i - 2; j++) {
                row.push_back(pastria[i - 1][j] + pastria[i - 1][j + 1]);
            }
            row.push_back(1);
            pastria.push_back(row);
        }
        return pastria[rowIndex];
    }
};