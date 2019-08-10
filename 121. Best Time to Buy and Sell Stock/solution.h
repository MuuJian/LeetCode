class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        int min_price = prices[0];
        int profit = 0;
        for(int a = 1; a < prices.size(); ++a)
        {
            profit = max(prices[a] - min_price, profit);
            min_price = min(prices[a], min_price);
         
        }
        return profit;
    }
};

/*
    一道很简单的dp题
*/