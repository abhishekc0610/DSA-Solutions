class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int profit = 0;
        int least = INT_MAX;
        
        for(int i = 0; i < n; i++){
            least = min(least, prices[i]);
            profit = max(profit, prices[i] - least);
        }
        return profit;
    }
};