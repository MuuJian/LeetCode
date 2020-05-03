class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int, int> dp;
        int ans = INT_MIN;
        for(int x : arr)
        {
            ans = max(ans, dp[x] = dp[x - difference] + 1);
        }
        return ans;
    }
};