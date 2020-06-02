class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int profit = 0;
        for(auto i : prices)
        {
            min_price = min(min_price, i);
            profit = max(profit, i - min_price);
        }
        return profit;
    }
};