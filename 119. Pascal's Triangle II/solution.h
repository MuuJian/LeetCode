class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v(rowIndex + 1, 0);
        v[0] = 1;
        for(int j = 1; j <= rowIndex; ++j)
        {
            for(int i = j; i >= 1; --i)
            {
                v[i] += v[i - 1];
                cout<<v[i];
            }
            
        }
        
        return v;
    }
};