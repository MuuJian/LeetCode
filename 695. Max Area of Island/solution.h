class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int> > visit(grid.size(), vector<int>(grid[0].size(), 0));
        int Max = 0;
         for(int i = 0; i < grid.size(); ++i)
        {
            for(int j = 0; j < grid[0].size(); ++j)
            {
                if(grid[i][j] == 1)
                    Max = max(Max, bfs(grid, i, j, visit));
            }
        }
        return Max;
    }
    
    int bfs(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& visit)
    {
        queue<pair<int, int>> q;
        q.push({i, j});
        int ans = 0;
        while(!q.empty())
        {
            auto record = q.front();
            int curi = record.first;
            int curj = record.second;
            grid[curi][curj] = 0;
            visit[curi][curj] = 1;
            q.pop();
            ++ans;
            if(curi - 1 >= 0 && visit[curi - 1][curj] == 0 && grid[curi - 1][curj] == 1)
            {
                visit[curi - 1][curj] = 1;
                q.push({curi - 1, curj});
            }
            if(curj - 1 >= 0 && visit[curi][curj - 1] == 0 && grid[curi][curj - 1] == 1)
            {
                visit[curi][curj - 1] = 1;
                q.push({curi, curj - 1});
            }
            if(curi + 1 < grid.size() && visit[curi + 1][curj] == 0 && grid[curi + 1][curj] == 1)
            {
                visit[curi + 1][curj] = 1;
                q.push({curi + 1, curj});
            }
            if(curj + 1 < grid[0].size() && visit[curi][curj + 1] == 0 && grid[curi][curj + 1] == 1)
            {
                visit[curi][curj + 1] = 1;
                q.push({curi, curj + 1});
            }
            
        }
        return ans;
    }
};