class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=INT_MAX;
        int profit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            cp=min(cp,prices[i]);
            profit=max(profit,prices[i]-cp);
        }
        return profit;
    }
};