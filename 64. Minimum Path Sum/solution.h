class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = grid[0][0];
        for(int i = 1; i < m; ++i) dp[i][0] = grid[i][0] + dp[i - 1][0];
        for(int i = 1; i < n; ++i) dp[0][i] = grid[0][i] + dp[0][i - 1];
        
        for(int i = 1; i < m; ++i)
            for(int k = 1; k < n; ++k)
                dp[i][k] = grid[i][k] + min(dp[i - 1][k], dp[i][k - 1]);
        
        return dp[m - 1][n - 1];
    }
};

//dp求最短路径