class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output = {};
        if (numRows == 0) {
            return output;
        }
        output.push_back({1}); 
        
        for (int i = 1; i < numRows; ++i) {
            vector<int> prevRow = output.back();
            vector<int> newRow = {1}; 
            
            for (int j = 1; j < prevRow.size(); ++j) {
                newRow.push_back(prevRow[j - 1] + prevRow[j]); 
            }
        
            newRow.push_back(1); 
            output.push_back(newRow);
        }
        return output;
    }
};