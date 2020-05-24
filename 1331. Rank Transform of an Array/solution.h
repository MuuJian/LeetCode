class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s(arr.begin(), arr.end());
        unordered_map<int, int> m;
        int r = 0;
        for(auto v : s)
            m[v] = ++r;
        vector<int> ans(arr.size());
        for(int i = 0; i < ans.size(); ++i)
        {
            ans[i] = m[arr[i]];
        }
        return ans;
    }
};