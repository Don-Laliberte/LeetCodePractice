class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int previous_best = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            int current = prices[i];
            if (previous_best > current) {
                previous_best = current;
                for (int j = i + 1; j < prices.size(); j++) {
                    if (prices[j] - prices[i] > max_profit) {
                        max_profit = prices[j] - prices[i];
                    }
                }
            }
        }
        return max_profit;
    }
};