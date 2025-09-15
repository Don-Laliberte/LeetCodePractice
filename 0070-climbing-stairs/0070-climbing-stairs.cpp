class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo(n + 1, -1);
        return climb(n, memo);
    }

    int climb(int n, vector<int>& memo) {
        if (n <= 2) {
            return n;
        }

        if (memo[n] != -1) { // DP: Speeds up execution time by removing redundant calcs
            return memo[n];
        }

        memo[n] = (climb(n-1, memo)) + (climb(n-2, memo));
        return memo[n];
    }
};