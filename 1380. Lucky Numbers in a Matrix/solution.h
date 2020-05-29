class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<bool>> v(m, vector<bool>(n, false));
        for(int i = 0; i < m; ++i)
        {
            int min = INT_MAX;
            int p = 0;
            for(int j = 0; j < n; ++j)
            {
                if(min > matrix[i][j])
                {
                    min = matrix[i][j];
                    p = j;
                }
            }
            v[i][p] = true;
        }
        vector<int> ans;
        for(int i = 0; i < n; ++i)
        {
            int max = INT_MIN;
            int p = 0;
            for(int j = 0; j < m; ++j)
            {
                if(max < matrix[j][i])
                {
                    max = matrix[j][i];
                    p = j;
                }
            }
            if(v[p][i])
                ans.push_back(matrix[p][i]);
        }
        
        return ans;
    }
};