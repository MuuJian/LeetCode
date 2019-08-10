/*
    dp求山形数组
*/

class Solution {
public:
    int longestMountain(vector<int>& A) {
        vector<int> inc(A.size(),1);
        vector<int> dec(A.size(),1);
        
        for(int i = 1;i < A.size();++i)
            if(A[i - 1] < A[i]) inc[i] = inc[i - 1] + 1;
        for(int i = A.size() - 2;i > 0;--i)
            if(A[i + 1] < A[i]) dec[i] = dec[i + 1] + 1;
        int ans = 0;
        for(int i = 1;i < A.size();++i)
        {
            if(inc[i] != 1 && dec[i] != 1)
                ans = max(ans,inc[i] + dec[i] - 1);
        }
        return ans >= 3 ? ans : 0;
    }
};