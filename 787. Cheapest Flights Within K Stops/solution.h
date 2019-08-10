class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        constexpr int kinfcost = 1e9;
        vector<int> cost(n,kinfcost);
        cost[src] = 0;
        for(int i = 0;i <= K;++i)
        {
            vector<int> tmp(cost);
            for(const auto& flight : flights)
            {
                tmp[flight[1]] = min(tmp[flight[1]],cost[flight[0]]+ flight[2]);
            }
            cost.swap(tmp);
        }
        return cost[dst] >= kinfcost ? -1 : cost[dst];
    }
    
};

/*
https://www.bilibili.com/video/av31373778/
*/