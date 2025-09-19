class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        for (int i = 0; i < intervals.size(); i++) {
            if (intervals.size() == 1) {
                    return intervals;
            }
            int min = intervals[i][0];
            int max = intervals[i][1];
            int curr_max = max;
            int curr_min = min;
            for (int j = i + 1; j < intervals.size(); j++) {
                int target_min = intervals[j][0];
                int target_max = intervals[j][1];
                if ((intervals[i] == intervals[j] && i != j) || (target_min >= curr_min && target_max <= curr_max)) {
                    cout << "\nCase 1";
                    intervals.erase(intervals.begin() + j);
                    j = i;
                }
                else if (target_max > curr_max && target_min < curr_min) {
                    cout << "\nCase 2";
                    curr_min = target_min;
                    curr_max = target_max;
                    intervals.erase(intervals.begin() + j);
                    intervals[i] = {curr_min, curr_max};
                    j = i;
                }
                else if (target_max >= curr_max && target_min >= curr_min && target_min <= curr_max) {
                    cout << "\nCase 3";
                    curr_max = target_max;
                    intervals.erase(intervals.begin() + j);
                    intervals[i] = {curr_min, curr_max};
                    j = i;
                }
                else if (target_min <= curr_min && target_max <= curr_max && target_max >= curr_min) {
                    cout << "\nCase 4";
                    curr_min = target_min;
                    intervals.erase(intervals.begin() + j);
                    intervals[i] = {curr_min, curr_max};
                    j = i;
                }
            }
        }
        return intervals;
    }
};