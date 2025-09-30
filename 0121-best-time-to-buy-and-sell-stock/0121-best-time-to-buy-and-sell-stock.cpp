class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int globalMax=0;
        for(int i=0;i<prices.size();i++){
             buy=min(prices[i],buy);
             globalMax=max(prices[i]-buy,globalMax);
        }
    return globalMax;
    }
};