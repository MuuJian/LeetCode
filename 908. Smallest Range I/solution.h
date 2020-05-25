class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int mx = A[0], mn = A[0];
        for(auto i : A)
        {
            mx = max(i, mx);
            mn = min(i, mn);
        }
        return max(0, (mx - K) - (mn + K));
    }
};